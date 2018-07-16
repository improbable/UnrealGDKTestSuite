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
	void BindToView(bool bIsClient) override;
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

	FRepHandlePropertyMap RepHandleToPropertyMap;
	FMigratableHandlePropertyMap MigratableHandleToPropertyMap;

	// Component update helper functions.
	void BuildSpatialComponentUpdate(
		const FPropertyChangeState& Changes,
		USpatialActorChannel* Channel,
		improbable::unreal::generated::samplegamecharacter::SampleGameCharacterSingleClientRepData::Update& SingleClientUpdate,
		bool& bSingleClientUpdateChanged,
		improbable::unreal::generated::samplegamecharacter::SampleGameCharacterMultiClientRepData::Update& MultiClientUpdate,
		bool& bMultiClientUpdateChanged,
		improbable::unreal::generated::samplegamecharacter::SampleGameCharacterMigratableData::Update& MigratableDataUpdate,
		bool& bMigratableDataUpdateChanged) const;
	void ServerSendUpdate_SingleClient(const uint8* RESTRICT Data, int32 Handle, UProperty* Property, USpatialActorChannel* Channel, improbable::unreal::generated::samplegamecharacter::SampleGameCharacterSingleClientRepData::Update& OutUpdate) const;
	void ServerSendUpdate_MultiClient(const uint8* RESTRICT Data, int32 Handle, UProperty* Property, USpatialActorChannel* Channel, improbable::unreal::generated::samplegamecharacter::SampleGameCharacterMultiClientRepData::Update& OutUpdate) const;
	void ServerSendUpdate_Migratable(const uint8* RESTRICT Data, int32 Handle, UProperty* Property, USpatialActorChannel* Channel, improbable::unreal::generated::samplegamecharacter::SampleGameCharacterMigratableData::Update& OutUpdate) const;
	void ReceiveUpdate_SingleClient(USpatialActorChannel* ActorChannel, const improbable::unreal::generated::samplegamecharacter::SampleGameCharacterSingleClientRepData::Update& Update) const;
	void ReceiveUpdate_MultiClient(USpatialActorChannel* ActorChannel, const improbable::unreal::generated::samplegamecharacter::SampleGameCharacterMultiClientRepData::Update& Update) const;
	void ReceiveUpdate_Migratable(USpatialActorChannel* ActorChannel, const improbable::unreal::generated::samplegamecharacter::SampleGameCharacterMigratableData::Update& Update) const;
	void ReceiveUpdate_NetMulticastRPCs(worker::EntityId EntityId, const improbable::unreal::generated::samplegamecharacter::SampleGameCharacterNetMulticastRPCs::Update& Update);

	// RPC command sender functions.
	void RootMotionDebugClientPrintOnScreen_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ClientVeryShortAdjustPosition_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ClientCheatWalk_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ClientCheatGhost_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ClientCheatFly_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ClientAdjustRootMotionSourcePosition_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ClientAdjustRootMotionPosition_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ClientAdjustPosition_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ClientAckGoodMove_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ToggleItemPickup_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void TestRPC_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void SpawnCube_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void SetCurrentItem_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ServerMoveOld_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ServerMoveNoBase_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ServerMoveDualNoBase_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ServerMoveDualHybridRootMotion_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ServerMoveDual_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void ServerMove_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);
	void TestMulticast_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject);

	// RPC command request handler functions.
	void RootMotionDebugClientPrintOnScreen_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterClientRPCs::Commands::Rootmotiondebugclientprintonscreen>& Op);
	void ClientVeryShortAdjustPosition_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterClientRPCs::Commands::Clientveryshortadjustposition>& Op);
	void ClientCheatWalk_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterClientRPCs::Commands::Clientcheatwalk>& Op);
	void ClientCheatGhost_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterClientRPCs::Commands::Clientcheatghost>& Op);
	void ClientCheatFly_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterClientRPCs::Commands::Clientcheatfly>& Op);
	void ClientAdjustRootMotionSourcePosition_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterClientRPCs::Commands::Clientadjustrootmotionsourceposition>& Op);
	void ClientAdjustRootMotionPosition_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterClientRPCs::Commands::Clientadjustrootmotionposition>& Op);
	void ClientAdjustPosition_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterClientRPCs::Commands::Clientadjustposition>& Op);
	void ClientAckGoodMove_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterClientRPCs::Commands::Clientackgoodmove>& Op);
	void ToggleItemPickup_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterServerRPCs::Commands::Toggleitempickup>& Op);
	void TestRPC_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterServerRPCs::Commands::Testrpc>& Op);
	void SpawnCube_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterServerRPCs::Commands::Spawncube>& Op);
	void SetCurrentItem_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterServerRPCs::Commands::Setcurrentitem>& Op);
	void ServerMoveOld_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterServerRPCs::Commands::Servermoveold>& Op);
	void ServerMoveNoBase_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterServerRPCs::Commands::Servermovenobase>& Op);
	void ServerMoveDualNoBase_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterServerRPCs::Commands::Servermovedualnobase>& Op);
	void ServerMoveDualHybridRootMotion_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterServerRPCs::Commands::Servermovedualhybridrootmotion>& Op);
	void ServerMoveDual_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterServerRPCs::Commands::Servermovedual>& Op);
	void ServerMove_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterServerRPCs::Commands::Servermove>& Op);
	void TestMulticast_OnRPCPayload(const worker::EntityId EntityId, const improbable::unreal::generated::samplegamecharacter::TestMulticastRequest& EventData);

	// RPC command response handler functions.
	void RootMotionDebugClientPrintOnScreen_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterClientRPCs::Commands::Rootmotiondebugclientprintonscreen>& Op);
	void ClientVeryShortAdjustPosition_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterClientRPCs::Commands::Clientveryshortadjustposition>& Op);
	void ClientCheatWalk_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterClientRPCs::Commands::Clientcheatwalk>& Op);
	void ClientCheatGhost_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterClientRPCs::Commands::Clientcheatghost>& Op);
	void ClientCheatFly_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterClientRPCs::Commands::Clientcheatfly>& Op);
	void ClientAdjustRootMotionSourcePosition_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterClientRPCs::Commands::Clientadjustrootmotionsourceposition>& Op);
	void ClientAdjustRootMotionPosition_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterClientRPCs::Commands::Clientadjustrootmotionposition>& Op);
	void ClientAdjustPosition_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterClientRPCs::Commands::Clientadjustposition>& Op);
	void ClientAckGoodMove_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterClientRPCs::Commands::Clientackgoodmove>& Op);
	void ToggleItemPickup_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterServerRPCs::Commands::Toggleitempickup>& Op);
	void TestRPC_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterServerRPCs::Commands::Testrpc>& Op);
	void SpawnCube_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterServerRPCs::Commands::Spawncube>& Op);
	void SetCurrentItem_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterServerRPCs::Commands::Setcurrentitem>& Op);
	void ServerMoveOld_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterServerRPCs::Commands::Servermoveold>& Op);
	void ServerMoveNoBase_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterServerRPCs::Commands::Servermovenobase>& Op);
	void ServerMoveDualNoBase_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterServerRPCs::Commands::Servermovedualnobase>& Op);
	void ServerMoveDualHybridRootMotion_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterServerRPCs::Commands::Servermovedualhybridrootmotion>& Op);
	void ServerMoveDual_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterServerRPCs::Commands::Servermovedual>& Op);
	void ServerMove_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegamecharacter::SampleGameCharacterServerRPCs::Commands::Servermove>& Op);
};
