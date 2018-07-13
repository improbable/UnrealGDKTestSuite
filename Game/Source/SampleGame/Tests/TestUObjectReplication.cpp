// Copyright (c) Improbable Worlds Ltd, All Rights Reserved

#include "TestUObjectReplication.h"

#include "GDKTestRunner.h"
#include "GameFramework/GameModeBase.h"
#include "UnrealNetwork.h"
#include "SpatialNetDriver.h"
#include "Legacy/EntityRegistry.h"

void ATestUObjectReplication::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UWorld* World = GetWorld();
	if (World && GetNetMode() == NM_Client)
	{
		if (bDynamicallyCreatedActorReplicated && bReplicationRecievedOnClient)
		{
			bDynamicallyCreatedActorReplicated = false;
			bReplicationRecievedOnClient = false;

			ValidateReplication_Client(DynamicallyCreatedActor,
									   /*UObjectWithReplicatedComponent,*/
									   StablyNamedUObject);

			Server_ReportReplication(DynamicallyCreatedActor,
									 /*UObjectWithReplicatedComponent,*/
									 StablyNamedUObject);
		}
	}
}

void ATestUObjectReplication::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION(ATestUObjectReplication, DynamicallyCreatedActor, COND_None);
	/*DOREPLIFETIME_CONDITION(ATestUObjectReplication, UObjectWithReplicatedComponent, COND_None);*/
	DOREPLIFETIME_CONDITION(ATestUObjectReplication, StablyNamedUObject, COND_None);
}

bool ATestUObjectReplication::Server_ReportReplication_Validate(ATestActor*  RepDynamicallyCreatedActor,
																/*const TArray<UTestUObject*>& RepUObjectWithReplicatedComponent,*/ 
																UTestUObject* RepStablyNamedUObject)
{
	return true;
}

void ATestUObjectReplication::Server_ReportReplication_Implementation(ATestActor*  RepDynamicallyCreatedActor,
																	  /*const TArray<UTestUObject*>& RepUObjectWithReplicatedComponent, */
																	  UTestUObject* RepStablyNamedUObject)
{
	ValidateRPC_Server(RepDynamicallyCreatedActor, 
					   /*RepUObjectWithReplicatedComponent,*/
					   RepStablyNamedUObject);

	SignalResponseRecieved();
}

void ATestUObjectReplication::Server_StartTestImpl()
{
	// Setup dynamically generated actors
	DynamicallyCreatedActor = GetWorld()->SpawnActor<ATestActor>();
	DynamicallyCreatedActor->ActorName = DynamicallyCreatedActor->GetName();

	// TODO: UNR-238 Add tests.

	// Setup stably named UObject
	StablyNamedUObject = LoadObject<UTestUObject>(nullptr, TEXT("/Script/SampleGame.Default__TestUObject"));

	SignalReplicationSetup();
}

void ATestUObjectReplication::Server_TearDownImpl()
{
	if (!DynamicallyCreatedActor->Destroy(true))
	{
		UE_LOG(LogSpatialGDKTests, Log, TEXT("TestCase %s: Unable to tear down dynamically created actor"), *TestName);
	}

	StablyNamedUObject = nullptr;
}

void ATestUObjectReplication::ValidateClientReplicationImpl()
{
	bReplicationRecievedOnClient = true;
}

void ATestUObjectReplication::SendTestResponseRPCImpl()
{
	// Empty due to the deferred execution
}

void ATestUObjectReplication::OnRep_DynamicallyCreatedActor()
{
	bDynamicallyCreatedActorReplicated = true;
}

void ATestUObjectReplication::ValidateReplication_Client(ATestActor*  TestDynamicallyCreatedActor,
														 /*const TArray<UTestUObject*>& TestUObjectWithReplicatedComponent,*/ 
														 UTestUObject* TestStablyNamedUObject)
{
	// Validate Dynamically created UObject
	check(TestDynamicallyCreatedActor->IsA(ATestActor::StaticClass()));

	// TODO: UNR-238 Add tests.

	// // Validate the stably named object
	check(TestStablyNamedUObject->IsA(UTestUObject::StaticClass()));
	check(TestStablyNamedUObject == UTestUObject::StaticClass()->GetDefaultObject());
	check(TestStablyNamedUObject->GetPathName() == TEXT("/Script/SampleGame.Default__TestUObject"));
}

void ATestUObjectReplication::ValidateRPC_Server(ATestActor*  TestDynamicallyCreatedActor,
												 /*const TArray<UTestUObject*>& TestUObjectWithReplicatedComponent,*/
												 UTestUObject* TestStablyNamedUObject)
{
	// Validate Dynamically created UObject
	//Get the net driver
	USpatialNetDriver* NetDriver = Cast<USpatialNetDriver>(GetWorld()->GetNetDriver());
	check(NetDriver);
	worker::EntityId RPCEntityId = NetDriver->GetEntityRegistry()->GetEntityIdFromActor(TestDynamicallyCreatedActor).ToSpatialEntityId();
	worker::EntityId ServerEntityId = NetDriver->GetEntityRegistry()->GetEntityIdFromActor(DynamicallyCreatedActor).ToSpatialEntityId();
	check(RPCEntityId == ServerEntityId);

	// TODO: UNR-238 Add tests.

	// // Validate the stably named object
	check(TestStablyNamedUObject->IsA(UTestUObject::StaticClass()));
	check(TestStablyNamedUObject == UTestUObject::StaticClass()->GetDefaultObject());
	check(TestStablyNamedUObject->GetPathName() == TEXT("/Script/SampleGame.Default__TestUObject"));
}