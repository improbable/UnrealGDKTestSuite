// Copyright (c) Improbable Worlds Ltd, All Rights Reserved
// Note that this file has been generated automatically
#pragma once

#include "CoreMinimal.h"
#include <improbable/worker.h>
#include <improbable/view.h>
#include <improbable/unreal/gdk/core_types.h>
#include <improbable/unreal/gdk/unreal_metadata.h>
#include <improbable/unreal/generated/UnrealSampleGameCharacter.h>
#include "ScopedViewCallbacks.h"
#include "SpatialTypeBinding.h"
#include "SpatialTypeBinding_SampleGameCharacter.generated.h"

UCLASS()
class USpatialTypeBinding_SampleGameCharacter : public USpatialTypeBinding
{
	GENERATED_BODY()

public:
	const FRepHandlePropertyMap& GetRepHandlePropertyMap() const override;
	const FMigratableHandlePropertyMap& GetMigratableHandlePropertyMap() const override;

	UClass* GetBoundClass() const override;

	void Init(USpatialInterop* InInterop, USpatialPackageMapClient* InPackageMap) override;
	void BindToView() override;
	void UnbindFromView() override;

	worker::Entity CreateActorEntity(const FString& ClientWorkerId, const FVector& Position, const FString& Metadata, const FPropertyChangeState& InitialChanges, USpatialActorChannel* Channel) const override;
	void SendComponentUpdates(const FPropertyChangeState& Changes, USpatialActorChannel* Channel, const FEntityId& EntityId) const override;
	void SendRPCCommand(UObject* TargetObject, const UFunction* const Function, void* Parameters) override;

	void ReceiveAddComponent(USpatialActorChannel* Channel, UAddComponentOpWrapperBase* AddComponentOp) const override;
	worker::Map<worker::ComponentId, worker::InterestOverride> GetInterestOverrideMap(bool bIsClient, bool bAutonomousProxy) const override;

private:
	improbable::unreal::callbacks::FScopedViewCallbacks ViewCallbacks;

	// RPC to sender map.
	using FRPCSender = void (USpatialTypeBinding_SampleGameCharacter::*)(worker::Connection* const, void*, UObject*);
	TMap<FName, FRPCSender> RPCToSenderMap;

	// Component update helper functions.
	void BuildSpatialComponentUpdate(
		const FPropertyChangeState& Changes,
		USpatialActorChannel* Channel,
		improbable::unreal::UnrealSampleGameCharacterSingleClientRepData::Update& SingleClientUpdate,
		bool& bSingleClientUpdateChanged,
		improbable::unreal::UnrealSampleGameCharacterMultiClientRepData::Update& MultiClientUpdate,
		bool& bMultiClientUpdateChanged,
		improbable::unreal::UnrealSampleGameCharacterMigratableData::Update& MigratableDataUpdate,
		bool& bMigratableDataUpdateChanged) const;
	void ServerSendUpdate_SingleClient(const uint8* RESTRICT Data, int32 Handle, UProperty* Property, USpatialActorChannel* Channel, improbable::unreal::UnrealSampleGameCharacterSingleClientRepData::Update& OutUpdate) const;
	void ServerSendUpdate_MultiClient(const uint8* RESTRICT Data, int32 Handle, UProperty* Property, USpatialActorChannel* Channel, improbable::unreal::UnrealSampleGameCharacterMultiClientRepData::Update& OutUpdate) const;
	void ServerSendUpdate_Migratable(const uint8* RESTRICT Data, int32 Handle, UProperty* Property, USpatialActorChannel* Channel, improbable::unreal::UnrealSampleGameCharacterMigratableData::Update& OutUpdate) const;
	void ReceiveUpdate_SingleClient(USpatialActorChannel* ActorChannel, const improbable::unreal::UnrealSampleGameCharacterSingleClientRepData::Update& Update) const;
	void ReceiveUpdate_MultiClient(USpatialActorChannel* ActorChannel, const improbable::unreal::UnrealSampleGameCharacterMultiClientRepData::Update& Update) const;
	void ReceiveUpdate_Migratable(USpatialActorChannel* ActorChannel, const improbable::unreal::UnrealSampleGameCharacterMigratableData::Update& Update) const;

	// RPC command sender functions.
	void RootMotionDebugClientPrintOnScreen_SendCommand(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ClientVeryShortAdjustPosition_SendCommand(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ClientCheatWalk_SendCommand(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ClientCheatGhost_SendCommand(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ClientCheatFly_SendCommand(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ClientAdjustRootMotionSourcePosition_SendCommand(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ClientAdjustRootMotionPosition_SendCommand(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ClientAdjustPosition_SendCommand(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ClientAckGoodMove_SendCommand(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ServerSpawnCube_SendCommand(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ServerMoveOld_SendCommand(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ServerMoveNoBase_SendCommand(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ServerMoveDualNoBase_SendCommand(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ServerMoveDualHybridRootMotion_SendCommand(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ServerMoveDual_SendCommand(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ServerMove_SendCommand(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);

	// RPC command request handler functions.
	void RootMotionDebugClientPrintOnScreen_OnCommandRequest(const worker::CommandRequestOp<improbable::unreal::UnrealSampleGameCharacterClientRPCs::Commands::Rootmotiondebugclientprintonscreen>& Op);
	void ClientVeryShortAdjustPosition_OnCommandRequest(const worker::CommandRequestOp<improbable::unreal::UnrealSampleGameCharacterClientRPCs::Commands::Clientveryshortadjustposition>& Op);
	void ClientCheatWalk_OnCommandRequest(const worker::CommandRequestOp<improbable::unreal::UnrealSampleGameCharacterClientRPCs::Commands::Clientcheatwalk>& Op);
	void ClientCheatGhost_OnCommandRequest(const worker::CommandRequestOp<improbable::unreal::UnrealSampleGameCharacterClientRPCs::Commands::Clientcheatghost>& Op);
	void ClientCheatFly_OnCommandRequest(const worker::CommandRequestOp<improbable::unreal::UnrealSampleGameCharacterClientRPCs::Commands::Clientcheatfly>& Op);
	void ClientAdjustRootMotionSourcePosition_OnCommandRequest(const worker::CommandRequestOp<improbable::unreal::UnrealSampleGameCharacterClientRPCs::Commands::Clientadjustrootmotionsourceposition>& Op);
	void ClientAdjustRootMotionPosition_OnCommandRequest(const worker::CommandRequestOp<improbable::unreal::UnrealSampleGameCharacterClientRPCs::Commands::Clientadjustrootmotionposition>& Op);
	void ClientAdjustPosition_OnCommandRequest(const worker::CommandRequestOp<improbable::unreal::UnrealSampleGameCharacterClientRPCs::Commands::Clientadjustposition>& Op);
	void ClientAckGoodMove_OnCommandRequest(const worker::CommandRequestOp<improbable::unreal::UnrealSampleGameCharacterClientRPCs::Commands::Clientackgoodmove>& Op);
	void ServerSpawnCube_OnCommandRequest(const worker::CommandRequestOp<improbable::unreal::UnrealSampleGameCharacterServerRPCs::Commands::Serverspawncube>& Op);
	void ServerMoveOld_OnCommandRequest(const worker::CommandRequestOp<improbable::unreal::UnrealSampleGameCharacterServerRPCs::Commands::Servermoveold>& Op);
	void ServerMoveNoBase_OnCommandRequest(const worker::CommandRequestOp<improbable::unreal::UnrealSampleGameCharacterServerRPCs::Commands::Servermovenobase>& Op);
	void ServerMoveDualNoBase_OnCommandRequest(const worker::CommandRequestOp<improbable::unreal::UnrealSampleGameCharacterServerRPCs::Commands::Servermovedualnobase>& Op);
	void ServerMoveDualHybridRootMotion_OnCommandRequest(const worker::CommandRequestOp<improbable::unreal::UnrealSampleGameCharacterServerRPCs::Commands::Servermovedualhybridrootmotion>& Op);
	void ServerMoveDual_OnCommandRequest(const worker::CommandRequestOp<improbable::unreal::UnrealSampleGameCharacterServerRPCs::Commands::Servermovedual>& Op);
	void ServerMove_OnCommandRequest(const worker::CommandRequestOp<improbable::unreal::UnrealSampleGameCharacterServerRPCs::Commands::Servermove>& Op);

	// RPC command response handler functions.
	void RootMotionDebugClientPrintOnScreen_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::UnrealSampleGameCharacterClientRPCs::Commands::Rootmotiondebugclientprintonscreen>& Op);
	void ClientVeryShortAdjustPosition_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::UnrealSampleGameCharacterClientRPCs::Commands::Clientveryshortadjustposition>& Op);
	void ClientCheatWalk_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::UnrealSampleGameCharacterClientRPCs::Commands::Clientcheatwalk>& Op);
	void ClientCheatGhost_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::UnrealSampleGameCharacterClientRPCs::Commands::Clientcheatghost>& Op);
	void ClientCheatFly_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::UnrealSampleGameCharacterClientRPCs::Commands::Clientcheatfly>& Op);
	void ClientAdjustRootMotionSourcePosition_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::UnrealSampleGameCharacterClientRPCs::Commands::Clientadjustrootmotionsourceposition>& Op);
	void ClientAdjustRootMotionPosition_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::UnrealSampleGameCharacterClientRPCs::Commands::Clientadjustrootmotionposition>& Op);
	void ClientAdjustPosition_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::UnrealSampleGameCharacterClientRPCs::Commands::Clientadjustposition>& Op);
	void ClientAckGoodMove_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::UnrealSampleGameCharacterClientRPCs::Commands::Clientackgoodmove>& Op);
	void ServerSpawnCube_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::UnrealSampleGameCharacterServerRPCs::Commands::Serverspawncube>& Op);
	void ServerMoveOld_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::UnrealSampleGameCharacterServerRPCs::Commands::Servermoveold>& Op);
	void ServerMoveNoBase_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::UnrealSampleGameCharacterServerRPCs::Commands::Servermovenobase>& Op);
	void ServerMoveDualNoBase_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::UnrealSampleGameCharacterServerRPCs::Commands::Servermovedualnobase>& Op);
	void ServerMoveDualHybridRootMotion_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::UnrealSampleGameCharacterServerRPCs::Commands::Servermovedualhybridrootmotion>& Op);
	void ServerMoveDual_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::UnrealSampleGameCharacterServerRPCs::Commands::Servermovedual>& Op);
	void ServerMove_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::UnrealSampleGameCharacterServerRPCs::Commands::Servermove>& Op);
};
