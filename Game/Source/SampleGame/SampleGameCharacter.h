// Copyright (c) Improbable Worlds Ltd, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "EntityRegistry.h"
#include "GameFramework/Character.h"
#include "SampleGameCharacter.generated.h"

USTRUCT()
struct FMyStruct
{
	GENERATED_BODY()

	UPROPERTY()
	UObject* MyObject;
};

USTRUCT()
struct FMyNSStruct
{
	GENERATED_BODY()

	bool NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess)
	{
		Ar << MyObject;
		return true;
	}

	UPROPERTY()
	UObject* MyObject;
};

USTRUCT()
struct FMyCStyleStructs
{
	GENERATED_BODY()

	UPROPERTY()
	FMyStruct MyCStyleStruct[5];

	UPROPERTY()
	FMyNSStruct MyCStyleNSStruct[5];
};

template<>
struct TStructOpsTypeTraits<FMyNSStruct> : public TStructOpsTypeTraitsBase2<FMyNSStruct>
{
	enum 
	{
		WithNetSerializer = true
	};
};

UCLASS(config=Game)
class ASampleGameCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
public:
	ASampleGameCharacter();

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	virtual void BeginPlay() override;

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	UPROPERTY(Replicated)
	FMyStruct MyStruct;

	//UPROPERTY(Replicated)
	FMyStruct MyCStyleStruct[5];

	UPROPERTY(Replicated)
	TArray<FMyStruct> MyArrayOfStruct;

	UPROPERTY(Replicated)
	FMyNSStruct MyNSStruct;

	UPROPERTY(Replicated)
	FMyNSStruct MyCStyleNSStruct[5];

	UPROPERTY(Replicated)
	TArray<FMyNSStruct> MyArrayOfNSStruct;

	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_DoThings();

	UFUNCTION(BlueprintCallable)
	void ShowThings();

	UFUNCTION(BlueprintCallable)
	void SendThings();

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_ShowThings(FMyStruct Struct, const TArray<FMyStruct>& ArrayOfStruct,
		FMyNSStruct NSStruct, const TArray<FMyNSStruct>& ArrayOfNSStruct, const FMyCStyleStructs& CStyleStructs);

protected:

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

	void Interact();

	UFUNCTION(NetMulticast, Unreliable, WithValidation)
	void TestMulticast();

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};

