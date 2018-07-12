// Copyright (c) Improbable Worlds Ltd, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GDKTestCase.generated.h"

UCLASS(Abstract)
class SAMPLEGAME_API AGDKTestCase : public AActor
{
	GENERATED_BODY()

public:

	AGDKTestCase();

	UFUNCTION()
	bool IsFinished() const;

	UFUNCTION()
	FString GetResultSummary() const;

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION()
	virtual void StartTest()
	PURE_VIRTUAL(AGDKTestCase::StartTest(), );

	UFUNCTION()
	virtual void TearDown()
	PURE_VIRTUAL(AGDKTestCase::StartTest(), );


protected:

	UPROPERTY()
	FString TestName;

	UPROPERTY()
	FString ResultString;

	UPROPERTY()
	bool bIsFinished;
};
