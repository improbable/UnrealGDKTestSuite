// Copyright (c) Improbable Worlds Ltd, All Rights Reserved
// Note that this file has been generated automatically
#pragma once

#include <improbable/worker.h>
#include <improbable/view.h>
#include <improbable/unreal/core_types.h>
#include <improbable/unreal/unreal_metadata.h>
#include <improbable/unreal/generated/UnrealSTestUnderscoreClassName.h>
#include "ScopedViewCallbacks.h"
#include "SpatialTypeBinding.h"
#include "SpatialTypeBinding_S_TestUnderscoreClassName.generated.h"

UCLASS()
class USpatialTypeBinding_S_TestUnderscoreClassName : public USpatialTypeBinding
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
	void SendRPCCommand(UObject* TargetObject, const UFunction* const Function, FFrame* const Frame) override;

	void ReceiveAddComponent(USpatialActorChannel* Channel, UAddComponentOpWrapperBase* AddComponentOp) const override;
	worker::Map<worker::ComponentId, worker::InterestOverride> GetInterestOverrideMap(bool bIsClient, bool bAutonomousProxy) const override;

private:
	improbable::unreal::callbacks::FScopedViewCallbacks ViewCallbacks;

	// RPC to sender map.
	using FRPCSender = void (USpatialTypeBinding_S_TestUnderscoreClassName::*)(worker::Connection* const, struct FFrame* const, UObject*);
	TMap<FName, FRPCSender> RPCToSenderMap;

	// Component update helper functions.
	void BuildSpatialComponentUpdate(
		const FPropertyChangeState& Changes,
		USpatialActorChannel* Channel,
		improbable::unreal::UnrealSTestUnderscoreClassNameSingleClientRepData::Update& SingleClientUpdate,
		bool& bSingleClientUpdateChanged,
		improbable::unreal::UnrealSTestUnderscoreClassNameMultiClientRepData::Update& MultiClientUpdate,
		bool& bMultiClientUpdateChanged,
		improbable::unreal::UnrealSTestUnderscoreClassNameMigratableData::Update& MigratableDataUpdate,
		bool& bMigratableDataUpdateChanged) const;
	void ServerSendUpdate_SingleClient(const uint8* RESTRICT Data, int32 Handle, UProperty* Property, USpatialActorChannel* Channel, improbable::unreal::UnrealSTestUnderscoreClassNameSingleClientRepData::Update& OutUpdate) const;
	void ServerSendUpdate_MultiClient(const uint8* RESTRICT Data, int32 Handle, UProperty* Property, USpatialActorChannel* Channel, improbable::unreal::UnrealSTestUnderscoreClassNameMultiClientRepData::Update& OutUpdate) const;
	void ServerSendUpdate_Migratable(const uint8* RESTRICT Data, int32 Handle, UProperty* Property, USpatialActorChannel* Channel, improbable::unreal::UnrealSTestUnderscoreClassNameMigratableData::Update& OutUpdate) const;
	void ReceiveUpdate_SingleClient(USpatialActorChannel* ActorChannel, const improbable::unreal::UnrealSTestUnderscoreClassNameSingleClientRepData::Update& Update) const;
	void ReceiveUpdate_MultiClient(USpatialActorChannel* ActorChannel, const improbable::unreal::UnrealSTestUnderscoreClassNameMultiClientRepData::Update& Update) const;
	void ReceiveUpdate_Migratable(USpatialActorChannel* ActorChannel, const improbable::unreal::UnrealSTestUnderscoreClassNameMigratableData::Update& Update) const;

	// RPC command sender functions.

	// RPC command request handler functions.

	// RPC command response handler functions.
};
