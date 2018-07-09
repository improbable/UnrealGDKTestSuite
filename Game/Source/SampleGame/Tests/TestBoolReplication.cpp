// Fill out your copyright notice in the Description page of Project Settings.

#include "TestBoolReplication.h"

#include "GameFramework/GameModeBase.h"
#include "UnrealNetwork.h"

void ATestBoolReplication::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION(ATestBoolReplication, TestBool, COND_None);
}

bool ATestBoolReplication::Server_ReportReplication_Validate(bool RepBool)
{
	return true;
}

void ATestBoolReplication::Server_ReportReplication_Implementation(bool RepBool)
{
	check(RepBool == true);

	SignalResponseRecieved();
}

void ATestBoolReplication::StartTestImpl()
{
	TestBool = true;

	SignalReplicationSetup();
}

void ATestBoolReplication::ValidateClientReplicationImpl()
{
	check(TestBool == true);
}

void ATestBoolReplication::SendTestResponseRPCImpl()
{
	Server_ReportReplication(TestBool);
}