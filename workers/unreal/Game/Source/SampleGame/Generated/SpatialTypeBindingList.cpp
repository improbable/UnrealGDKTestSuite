// Copyright (c) Improbable Worlds Ltd, All Rights Reserved
// Note that this file has been generated automatically

#include "SpatialTypeBindingList.h"

#include "SpatialTypeBinding_PlayerController.h"
#include "SpatialTypeBinding_PlayerState.h"
#include "SpatialTypeBinding_SampleGameCharacter.h"
#include "SpatialTypeBinding_WheeledVehicle.h"
#include "SpatialTypeBinding_TestCube.h"

TArray<UClass*> GetGeneratedTypeBindings()
{
	return {
		USpatialTypeBinding_PlayerController::StaticClass(),
		USpatialTypeBinding_PlayerState::StaticClass(),
		USpatialTypeBinding_SampleGameCharacter::StaticClass(),
		USpatialTypeBinding_WheeledVehicle::StaticClass(),
		USpatialTypeBinding_TestCube::StaticClass()
	};
}
