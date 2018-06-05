// Copyright (c) Improbable Worlds Ltd, All Rights Reserved

#include "SampleGamePlayerController.h"

#include "SampleGameCharacter.h"
#include "SampleGameLogging.h"
#include "UI/SampleGameHUD.h"
#include "UI/SampleGameUI.h"

#include "SpatialNetDriver.h"


ASampleGamePlayerController::ASampleGamePlayerController()
	: SampleGameUI(nullptr)
	, RespawnCharacterDelay(5.0f)
	, DeleteCharacterDelay(15.0f)
	, PawnToDelete(nullptr)
{
	// Don't automatically switch the camera view when the pawn changes, to avoid weird camera jumps when a character dies.
	bAutoManageActiveCameraTarget = false;
}

void ASampleGamePlayerController::EndPlay(const EEndPlayReason::Type Reason)
{
	GetWorld()->GetTimerManager().ClearAllTimersForObject(this);
}

void ASampleGamePlayerController::UpdateHealthUI(int32 NewHealth, int32 MaxHealth)
{
	if (SampleGameUI != nullptr)
	{
		SampleGameUI->UpdateHealth(NewHealth, MaxHealth);
	}
	else
	{
		UE_LOG(LogSampleGame, Log, TEXT("Couldn't find SampleGameUI for controller: %s"), *this->GetName());
	}
}

void ASampleGamePlayerController::SetPawn(APawn* InPawn)
{
	Super::SetPawn(InPawn);

	if (GetNetMode() == NM_Client)
	{
		SetPlayerUIVisible(InPawn != nullptr);

		ASampleGameCharacter* Character = Cast<ASampleGameCharacter>(InPawn);
		if (Character != nullptr)
		{
			UpdateHealthUI(Character->GetCurrentHealth(), Character->GetMaxHealth());

			// Make the new pawn's camera this controller's camera.
			SetViewTarget(InPawn);
		}
	}
}

void ASampleGamePlayerController::KillCharacter()
{
	check(GetNetMode() == NM_DedicatedServer);

	if (!HasAuthority())
	{
		return;
	}

	PawnToDelete = GetPawn();
	UnPossess();

	// TODO: timers won't persist across worker boundary migrations, and neither will PawnToDelete
	GetWorldTimerManager().SetTimer(DeleteCharacterTimerHandle, this, &ASampleGamePlayerController::DeleteCharacter, DeleteCharacterDelay);
	GetWorldTimerManager().SetTimer(RespawnTimerHandle, this, &ASampleGamePlayerController::RespawnCharacter, RespawnCharacterDelay);
}

void ASampleGamePlayerController::SetPlayerUIVisible(bool bIsVisible)
{
	check(GetNetMode() == NM_Client);

	ASampleGameHUD* HUD = Cast<ASampleGameHUD>(GetHUD());
	if (HUD != nullptr)
	{
		HUD->SetDrawCrosshair(bIsVisible);
	}

	if (bIsVisible)
	{
		if (SampleGameUI == nullptr)
		{
			check(UITemplate != nullptr);
			SampleGameUI = CreateWidget<USampleGameUI>(this, UITemplate);
			if (SampleGameUI == nullptr)
			{
				USpatialNetDriver* SpatialNetDriver = Cast<USpatialNetDriver>(GetNetDriver());
				UE_LOG(LogSampleGame, Error, TEXT("Failed to create UI for controller %s on worker %s"),
					*this->GetName(),
					SpatialNetDriver != nullptr ? *SpatialNetDriver->GetSpatialOS()->GetWorkerId() : TEXT("Invalid SpatialNetDriver"));
				return;
			}
		}

		if (!SampleGameUI->IsVisible())
		{
			SampleGameUI->AddToViewport();
		}
	}
	else
	{
		if (SampleGameUI != nullptr && SampleGameUI->IsVisible())
		{
			SampleGameUI->RemoveFromViewport();
		}
	}
}

void ASampleGamePlayerController::RespawnCharacter()
{
	check(GetNetMode() == NM_DedicatedServer);
	AGameModeBase* GameMode = GetWorld()->GetAuthGameMode();
	if (GameMode != nullptr)
	{
		APawn* NewPawn = GameMode->SpawnDefaultPawnFor(this, StartSpot.Get());
		Possess(NewPawn);
	}
}

void ASampleGamePlayerController::DeleteCharacter()
{
	check(GetNetMode() == NM_DedicatedServer);
	if (PawnToDelete != nullptr)
	{
		// TODO: what if the character is on a different worker?
		GetWorld()->DestroyActor(PawnToDelete);
		PawnToDelete = nullptr;
	}
}
