// Copyright (c) Improbable Worlds Ltd, All Rights Reserved
// Note that this file has been generated automatically

#include "SpatialTypeBinding_SampleGamePlayerController.h"

#include "GameFramework/PlayerState.h"
#include "NetworkGuid.h"

#include "SpatialOS.h"
#include "EntityBuilder.h"

#include "SpatialConstants.h"
#include "SpatialConditionMapFilter.h"
#include "SpatialUnrealObjectRef.h"
#include "SpatialActorChannel.h"
#include "SpatialPackageMapClient.h"
#include "SpatialNetDriver.h"
#include "SpatialInterop.h"
#include "SampleGamePlayerController.h"
#include "Camera/CameraAnim.h"
#include "Camera/CameraShake.h"
#include "GameFramework/HUD.h"
#include "GameFramework/LocalMessage.h"
#include "Particles/EmitterCameraLensEffectBase.h"

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
#include "SampleGamePlayerControllerSingleClientRepDataAddComponentOp.h"
#include "SampleGamePlayerControllerMultiClientRepDataAddComponentOp.h"
#include "SampleGamePlayerControllerMigratableDataAddComponentOp.h"
=======
#include "PlayerControllerSingleClientRepDataAddComponentOp.h"
#include "PlayerControllerMultiClientRepDataAddComponentOp.h"
#include "PlayerControllerMigratableDataAddComponentOp.h"
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp

const FRepHandlePropertyMap& USpatialTypeBinding_SampleGamePlayerController::GetRepHandlePropertyMap() const
{
	return RepHandleToPropertyMap;
}

const FMigratableHandlePropertyMap& USpatialTypeBinding_SampleGamePlayerController::GetMigratableHandlePropertyMap() const
{
	return MigratableHandleToPropertyMap;
}

UClass* USpatialTypeBinding_SampleGamePlayerController::GetBoundClass() const
{
	return ASampleGamePlayerController::StaticClass();
}

void USpatialTypeBinding_SampleGamePlayerController::Init(USpatialInterop* InInterop, USpatialPackageMapClient* InPackageMap)
{
	Super::Init(InInterop, InPackageMap);

	RPCToSenderMap.Emplace("OnServerStartedVisualLogger", &USpatialTypeBinding_SampleGamePlayerController::OnServerStartedVisualLogger_SendRPC);
	RPCToSenderMap.Emplace("ClientWasKicked", &USpatialTypeBinding_SampleGamePlayerController::ClientWasKicked_SendRPC);
	RPCToSenderMap.Emplace("ClientVoiceHandshakeComplete", &USpatialTypeBinding_SampleGamePlayerController::ClientVoiceHandshakeComplete_SendRPC);
	RPCToSenderMap.Emplace("ClientUpdateMultipleLevelsStreamingStatus", &USpatialTypeBinding_SampleGamePlayerController::ClientUpdateMultipleLevelsStreamingStatus_SendRPC);
	RPCToSenderMap.Emplace("ClientUpdateLevelStreamingStatus", &USpatialTypeBinding_SampleGamePlayerController::ClientUpdateLevelStreamingStatus_SendRPC);
	RPCToSenderMap.Emplace("ClientUnmutePlayer", &USpatialTypeBinding_SampleGamePlayerController::ClientUnmutePlayer_SendRPC);
	RPCToSenderMap.Emplace("ClientTravelInternal", &USpatialTypeBinding_SampleGamePlayerController::ClientTravelInternal_SendRPC);
	RPCToSenderMap.Emplace("ClientTeamMessage", &USpatialTypeBinding_SampleGamePlayerController::ClientTeamMessage_SendRPC);
	RPCToSenderMap.Emplace("ClientStopForceFeedback", &USpatialTypeBinding_SampleGamePlayerController::ClientStopForceFeedback_SendRPC);
	RPCToSenderMap.Emplace("ClientStopCameraShake", &USpatialTypeBinding_SampleGamePlayerController::ClientStopCameraShake_SendRPC);
	RPCToSenderMap.Emplace("ClientStopCameraAnim", &USpatialTypeBinding_SampleGamePlayerController::ClientStopCameraAnim_SendRPC);
	RPCToSenderMap.Emplace("ClientStartOnlineSession", &USpatialTypeBinding_SampleGamePlayerController::ClientStartOnlineSession_SendRPC);
	RPCToSenderMap.Emplace("ClientSpawnCameraLensEffect", &USpatialTypeBinding_SampleGamePlayerController::ClientSpawnCameraLensEffect_SendRPC);
	RPCToSenderMap.Emplace("ClientSetViewTarget", &USpatialTypeBinding_SampleGamePlayerController::ClientSetViewTarget_SendRPC);
	RPCToSenderMap.Emplace("ClientSetSpectatorWaiting", &USpatialTypeBinding_SampleGamePlayerController::ClientSetSpectatorWaiting_SendRPC);
	RPCToSenderMap.Emplace("ClientSetHUD", &USpatialTypeBinding_SampleGamePlayerController::ClientSetHUD_SendRPC);
	RPCToSenderMap.Emplace("ClientSetForceMipLevelsToBeResident", &USpatialTypeBinding_SampleGamePlayerController::ClientSetForceMipLevelsToBeResident_SendRPC);
	RPCToSenderMap.Emplace("ClientSetCinematicMode", &USpatialTypeBinding_SampleGamePlayerController::ClientSetCinematicMode_SendRPC);
	RPCToSenderMap.Emplace("ClientSetCameraMode", &USpatialTypeBinding_SampleGamePlayerController::ClientSetCameraMode_SendRPC);
	RPCToSenderMap.Emplace("ClientSetCameraFade", &USpatialTypeBinding_SampleGamePlayerController::ClientSetCameraFade_SendRPC);
	RPCToSenderMap.Emplace("ClientSetBlockOnAsyncLoading", &USpatialTypeBinding_SampleGamePlayerController::ClientSetBlockOnAsyncLoading_SendRPC);
	RPCToSenderMap.Emplace("ClientReturnToMainMenuWithTextReason", &USpatialTypeBinding_SampleGamePlayerController::ClientReturnToMainMenuWithTextReason_SendRPC);
	RPCToSenderMap.Emplace("ClientReturnToMainMenu", &USpatialTypeBinding_SampleGamePlayerController::ClientReturnToMainMenu_SendRPC);
	RPCToSenderMap.Emplace("ClientRetryClientRestart", &USpatialTypeBinding_SampleGamePlayerController::ClientRetryClientRestart_SendRPC);
	RPCToSenderMap.Emplace("ClientRestart", &USpatialTypeBinding_SampleGamePlayerController::ClientRestart_SendRPC);
	RPCToSenderMap.Emplace("ClientReset", &USpatialTypeBinding_SampleGamePlayerController::ClientReset_SendRPC);
	RPCToSenderMap.Emplace("ClientRepObjRef", &USpatialTypeBinding_SampleGamePlayerController::ClientRepObjRef_SendRPC);
	RPCToSenderMap.Emplace("ClientReceiveLocalizedMessage", &USpatialTypeBinding_SampleGamePlayerController::ClientReceiveLocalizedMessage_SendRPC);
	RPCToSenderMap.Emplace("ClientPrestreamTextures", &USpatialTypeBinding_SampleGamePlayerController::ClientPrestreamTextures_SendRPC);
	RPCToSenderMap.Emplace("ClientPrepareMapChange", &USpatialTypeBinding_SampleGamePlayerController::ClientPrepareMapChange_SendRPC);
	RPCToSenderMap.Emplace("ClientPlaySoundAtLocation", &USpatialTypeBinding_SampleGamePlayerController::ClientPlaySoundAtLocation_SendRPC);
	RPCToSenderMap.Emplace("ClientPlaySound", &USpatialTypeBinding_SampleGamePlayerController::ClientPlaySound_SendRPC);
	RPCToSenderMap.Emplace("ClientPlayForceFeedback", &USpatialTypeBinding_SampleGamePlayerController::ClientPlayForceFeedback_SendRPC);
	RPCToSenderMap.Emplace("ClientPlayCameraShake", &USpatialTypeBinding_SampleGamePlayerController::ClientPlayCameraShake_SendRPC);
	RPCToSenderMap.Emplace("ClientPlayCameraAnim", &USpatialTypeBinding_SampleGamePlayerController::ClientPlayCameraAnim_SendRPC);
	RPCToSenderMap.Emplace("ClientMutePlayer", &USpatialTypeBinding_SampleGamePlayerController::ClientMutePlayer_SendRPC);
	RPCToSenderMap.Emplace("ClientMessage", &USpatialTypeBinding_SampleGamePlayerController::ClientMessage_SendRPC);
	RPCToSenderMap.Emplace("ClientIgnoreMoveInput", &USpatialTypeBinding_SampleGamePlayerController::ClientIgnoreMoveInput_SendRPC);
	RPCToSenderMap.Emplace("ClientIgnoreLookInput", &USpatialTypeBinding_SampleGamePlayerController::ClientIgnoreLookInput_SendRPC);
	RPCToSenderMap.Emplace("ClientGotoState", &USpatialTypeBinding_SampleGamePlayerController::ClientGotoState_SendRPC);
	RPCToSenderMap.Emplace("ClientGameEnded", &USpatialTypeBinding_SampleGamePlayerController::ClientGameEnded_SendRPC);
	RPCToSenderMap.Emplace("ClientForceGarbageCollection", &USpatialTypeBinding_SampleGamePlayerController::ClientForceGarbageCollection_SendRPC);
	RPCToSenderMap.Emplace("ClientFlushLevelStreaming", &USpatialTypeBinding_SampleGamePlayerController::ClientFlushLevelStreaming_SendRPC);
	RPCToSenderMap.Emplace("ClientEndOnlineSession", &USpatialTypeBinding_SampleGamePlayerController::ClientEndOnlineSession_SendRPC);
	RPCToSenderMap.Emplace("ClientEnableNetworkVoice", &USpatialTypeBinding_SampleGamePlayerController::ClientEnableNetworkVoice_SendRPC);
	RPCToSenderMap.Emplace("ClientCommitMapChange", &USpatialTypeBinding_SampleGamePlayerController::ClientCommitMapChange_SendRPC);
	RPCToSenderMap.Emplace("ClientClearCameraLensEffects", &USpatialTypeBinding_SampleGamePlayerController::ClientClearCameraLensEffects_SendRPC);
	RPCToSenderMap.Emplace("ClientCapBandwidth", &USpatialTypeBinding_SampleGamePlayerController::ClientCapBandwidth_SendRPC);
	RPCToSenderMap.Emplace("ClientCancelPendingMapChange", &USpatialTypeBinding_SampleGamePlayerController::ClientCancelPendingMapChange_SendRPC);
	RPCToSenderMap.Emplace("ClientAddTextureStreamingLoc", &USpatialTypeBinding_SampleGamePlayerController::ClientAddTextureStreamingLoc_SendRPC);
	RPCToSenderMap.Emplace("ClientSetRotation", &USpatialTypeBinding_SampleGamePlayerController::ClientSetRotation_SendRPC);
	RPCToSenderMap.Emplace("ClientSetLocation", &USpatialTypeBinding_SampleGamePlayerController::ClientSetLocation_SendRPC);
	RPCToSenderMap.Emplace("TestRPC", &USpatialTypeBinding_SampleGamePlayerController::TestRPC_SendRPC);
	RPCToSenderMap.Emplace("ServerViewSelf", &USpatialTypeBinding_SampleGamePlayerController::ServerViewSelf_SendRPC);
	RPCToSenderMap.Emplace("ServerViewPrevPlayer", &USpatialTypeBinding_SampleGamePlayerController::ServerViewPrevPlayer_SendRPC);
	RPCToSenderMap.Emplace("ServerViewNextPlayer", &USpatialTypeBinding_SampleGamePlayerController::ServerViewNextPlayer_SendRPC);
	RPCToSenderMap.Emplace("ServerVerifyViewTarget", &USpatialTypeBinding_SampleGamePlayerController::ServerVerifyViewTarget_SendRPC);
	RPCToSenderMap.Emplace("ServerUpdateMultipleLevelsVisibility", &USpatialTypeBinding_SampleGamePlayerController::ServerUpdateMultipleLevelsVisibility_SendRPC);
	RPCToSenderMap.Emplace("ServerUpdateLevelVisibility", &USpatialTypeBinding_SampleGamePlayerController::ServerUpdateLevelVisibility_SendRPC);
	RPCToSenderMap.Emplace("ServerUpdateCamera", &USpatialTypeBinding_SampleGamePlayerController::ServerUpdateCamera_SendRPC);
	RPCToSenderMap.Emplace("ServerUnmutePlayer", &USpatialTypeBinding_SampleGamePlayerController::ServerUnmutePlayer_SendRPC);
	RPCToSenderMap.Emplace("ServerToggleAILogging", &USpatialTypeBinding_SampleGamePlayerController::ServerToggleAILogging_SendRPC);
	RPCToSenderMap.Emplace("ServerShortTimeout", &USpatialTypeBinding_SampleGamePlayerController::ServerShortTimeout_SendRPC);
	RPCToSenderMap.Emplace("ServerSetSpectatorWaiting", &USpatialTypeBinding_SampleGamePlayerController::ServerSetSpectatorWaiting_SendRPC);
	RPCToSenderMap.Emplace("ServerSetSpectatorLocation", &USpatialTypeBinding_SampleGamePlayerController::ServerSetSpectatorLocation_SendRPC);
	RPCToSenderMap.Emplace("ServerRestartPlayer", &USpatialTypeBinding_SampleGamePlayerController::ServerRestartPlayer_SendRPC);
	RPCToSenderMap.Emplace("ServerPause", &USpatialTypeBinding_SampleGamePlayerController::ServerPause_SendRPC);
	RPCToSenderMap.Emplace("ServerNotifyLoadedWorld", &USpatialTypeBinding_SampleGamePlayerController::ServerNotifyLoadedWorld_SendRPC);
	RPCToSenderMap.Emplace("ServerMutePlayer", &USpatialTypeBinding_SampleGamePlayerController::ServerMutePlayer_SendRPC);
	RPCToSenderMap.Emplace("ServerCheckClientPossessionReliable", &USpatialTypeBinding_SampleGamePlayerController::ServerCheckClientPossessionReliable_SendRPC);
	RPCToSenderMap.Emplace("ServerCheckClientPossession", &USpatialTypeBinding_SampleGamePlayerController::ServerCheckClientPossession_SendRPC);
	RPCToSenderMap.Emplace("ServerChangeName", &USpatialTypeBinding_SampleGamePlayerController::ServerChangeName_SendRPC);
	RPCToSenderMap.Emplace("ServerCamera", &USpatialTypeBinding_SampleGamePlayerController::ServerCamera_SendRPC);
	RPCToSenderMap.Emplace("ServerAcknowledgePossession", &USpatialTypeBinding_SampleGamePlayerController::ServerAcknowledgePossession_SendRPC);
	RPCToSenderMap.Emplace("TestMulticast", &USpatialTypeBinding_SampleGamePlayerController::TestMulticast_SendRPC);

	UClass* Class = FindObject<UClass>(ANY_PACKAGE, TEXT("SampleGamePlayerController"));

	// Populate RepHandleToPropertyMap.
	RepHandleToPropertyMap.Add(1, FRepHandleData(Class, {"bHidden"}, COND_None, REPNOTIFY_OnChanged, 0));
	RepHandleToPropertyMap.Add(2, FRepHandleData(Class, {"bReplicateMovement"}, COND_None, REPNOTIFY_OnChanged, 0));
	RepHandleToPropertyMap.Add(3, FRepHandleData(Class, {"bTearOff"}, COND_None, REPNOTIFY_OnChanged, 0));
	RepHandleToPropertyMap.Add(4, FRepHandleData(Class, {"bCanBeDamaged"}, COND_None, REPNOTIFY_OnChanged, 0));
	RepHandleToPropertyMap.Add(5, FRepHandleData(Class, {"RemoteRole"}, COND_None, REPNOTIFY_OnChanged, 0));
	RepHandleToPropertyMap.Add(6, FRepHandleData(Class, {"ReplicatedMovement"}, COND_SimulatedOrPhysics, REPNOTIFY_OnChanged, 0));
	RepHandleToPropertyMap.Add(7, FRepHandleData(Class, {"AttachmentReplication", "AttachParent"}, COND_Custom, REPNOTIFY_OnChanged, 0));
	RepHandleToPropertyMap.Add(8, FRepHandleData(Class, {"AttachmentReplication", "LocationOffset"}, COND_Custom, REPNOTIFY_OnChanged, 0));
	RepHandleToPropertyMap.Add(9, FRepHandleData(Class, {"AttachmentReplication", "RelativeScale3D"}, COND_Custom, REPNOTIFY_OnChanged, 0));
	RepHandleToPropertyMap.Add(10, FRepHandleData(Class, {"AttachmentReplication", "RotationOffset"}, COND_Custom, REPNOTIFY_OnChanged, 0));
	RepHandleToPropertyMap.Add(11, FRepHandleData(Class, {"AttachmentReplication", "AttachSocket"}, COND_Custom, REPNOTIFY_OnChanged, 0));
	RepHandleToPropertyMap.Add(12, FRepHandleData(Class, {"AttachmentReplication", "AttachComponent"}, COND_Custom, REPNOTIFY_OnChanged, 0));
	RepHandleToPropertyMap.Add(13, FRepHandleData(Class, {"Owner"}, COND_None, REPNOTIFY_OnChanged, 0));
	RepHandleToPropertyMap.Add(14, FRepHandleData(Class, {"Role"}, COND_None, REPNOTIFY_OnChanged, 0));
	RepHandleToPropertyMap.Add(15, FRepHandleData(Class, {"Instigator"}, COND_None, REPNOTIFY_OnChanged, 0));
	RepHandleToPropertyMap.Add(16, FRepHandleData(Class, {"PlayerState"}, COND_None, REPNOTIFY_OnChanged, 0));
	RepHandleToPropertyMap.Add(17, FRepHandleData(Class, {"Pawn"}, COND_None, REPNOTIFY_Always, 0));
	RepHandleToPropertyMap.Add(18, FRepHandleData(Class, {"TargetViewRotation"}, COND_OwnerOnly, REPNOTIFY_OnChanged, 0));
	RepHandleToPropertyMap.Add(19, FRepHandleData(Class, {"SpawnLocation"}, COND_OwnerOnly, REPNOTIFY_OnChanged, 0));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::BindToView(bool bIsClient)
=======
void USpatialTypeBinding_PlayerController::BindToView(bool bIsClient)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	TSharedPtr<worker::View> View = Interop->GetSpatialOS()->GetView().Pin();
	ViewCallbacks.Init(View);

	if (Interop->GetNetDriver()->GetNetMode() == NM_Client)
	{
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		ViewCallbacks.Add(View->OnComponentUpdate<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerSingleClientRepData>([this](
			const worker::ComponentUpdateOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerSingleClientRepData>& Op)
		{
			// TODO: Remove this check once we can disable component update short circuiting. This will be exposed in 14.0. See TIG-137.
			if (HasComponentAuthority(Interop->GetSpatialOS()->GetView(), Op.EntityId, improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerSingleClientRepData::ComponentId))
=======
		ViewCallbacks.Add(View->OnComponentUpdate<improbable::unreal::generated::playercontroller::PlayerControllerSingleClientRepData>([this](
			const worker::ComponentUpdateOp<improbable::unreal::generated::playercontroller::PlayerControllerSingleClientRepData>& Op)
		{
			// TODO: Remove this check once we can disable component update short circuiting. This will be exposed in 14.0. See TIG-137.
			if (HasComponentAuthority(Interop->GetSpatialOS()->GetView(), Op.EntityId, improbable::unreal::generated::playercontroller::PlayerControllerSingleClientRepData::ComponentId))
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			{
				return;
			}
			USpatialActorChannel* ActorChannel = Interop->GetActorChannelByEntityId(Op.EntityId);
			check(ActorChannel);
			ReceiveUpdate_SingleClient(ActorChannel, Op.Update);
		}));
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		ViewCallbacks.Add(View->OnComponentUpdate<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerMultiClientRepData>([this](
			const worker::ComponentUpdateOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerMultiClientRepData>& Op)
		{
			// TODO: Remove this check once we can disable component update short circuiting. This will be exposed in 14.0. See TIG-137.
			if (HasComponentAuthority(Interop->GetSpatialOS()->GetView(), Op.EntityId, improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerMultiClientRepData::ComponentId))
=======
		ViewCallbacks.Add(View->OnComponentUpdate<improbable::unreal::generated::playercontroller::PlayerControllerMultiClientRepData>([this](
			const worker::ComponentUpdateOp<improbable::unreal::generated::playercontroller::PlayerControllerMultiClientRepData>& Op)
		{
			// TODO: Remove this check once we can disable component update short circuiting. This will be exposed in 14.0. See TIG-137.
			if (HasComponentAuthority(Interop->GetSpatialOS()->GetView(), Op.EntityId, improbable::unreal::generated::playercontroller::PlayerControllerMultiClientRepData::ComponentId))
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			{
				return;
			}
			USpatialActorChannel* ActorChannel = Interop->GetActorChannelByEntityId(Op.EntityId);
			check(ActorChannel);
			ReceiveUpdate_MultiClient(ActorChannel, Op.Update);
		}));
		if (!bIsClient)
		{
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			ViewCallbacks.Add(View->OnComponentUpdate<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerMigratableData>([this](
				const worker::ComponentUpdateOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerMigratableData>& Op)
			{
				// TODO: Remove this check once we can disable component update short circuiting. This will be exposed in 14.0. See TIG-137.
				if (HasComponentAuthority(Interop->GetSpatialOS()->GetView(), Op.EntityId, improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerMigratableData::ComponentId))
=======
			ViewCallbacks.Add(View->OnComponentUpdate<improbable::unreal::generated::playercontroller::PlayerControllerMigratableData>([this](
				const worker::ComponentUpdateOp<improbable::unreal::generated::playercontroller::PlayerControllerMigratableData>& Op)
			{
				// TODO: Remove this check once we can disable component update short circuiting. This will be exposed in 14.0. See TIG-137.
				if (HasComponentAuthority(Interop->GetSpatialOS()->GetView(), Op.EntityId, improbable::unreal::generated::playercontroller::PlayerControllerMigratableData::ComponentId))
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
				{
					return;
				}
				USpatialActorChannel* ActorChannel = Interop->GetActorChannelByEntityId(Op.EntityId);
				check(ActorChannel);
				ReceiveUpdate_Migratable(ActorChannel, Op.Update);
			}));
		}
	}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
	ViewCallbacks.Add(View->OnComponentUpdate<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerNetMulticastRPCs>([this](
		const worker::ComponentUpdateOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerNetMulticastRPCs>& Op)
	{
		// TODO: Remove this check once we can disable component update short circuiting. This will be exposed in 14.0. See TIG-137.
		if (HasComponentAuthority(Interop->GetSpatialOS()->GetView(), Op.EntityId, improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerNetMulticastRPCs::ComponentId))
=======
	ViewCallbacks.Add(View->OnComponentUpdate<improbable::unreal::generated::playercontroller::PlayerControllerNetMulticastRPCs>([this](
		const worker::ComponentUpdateOp<improbable::unreal::generated::playercontroller::PlayerControllerNetMulticastRPCs>& Op)
	{
		// TODO: Remove this check once we can disable component update short circuiting. This will be exposed in 14.0. See TIG-137.
		if (HasComponentAuthority(Interop->GetSpatialOS()->GetView(), Op.EntityId, improbable::unreal::generated::playercontroller::PlayerControllerNetMulticastRPCs::ComponentId))
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		{
			return;
		}
		ReceiveUpdate_NetMulticastRPCs(Op.EntityId, Op.Update);
	}));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
	using ClientRPCCommandTypes = improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands;
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Onserverstartedvisuallogger>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::OnServerStartedVisualLogger_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientwaskicked>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientWasKicked_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientvoicehandshakecomplete>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientVoiceHandshakeComplete_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientupdatemultiplelevelsstreamingstatus>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientUpdateMultipleLevelsStreamingStatus_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientupdatelevelstreamingstatus>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientUpdateLevelStreamingStatus_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientunmuteplayer>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientUnmutePlayer_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clienttravelinternal>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientTravelInternal_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientteammessage>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientTeamMessage_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientstopforcefeedback>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientStopForceFeedback_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientstopcamerashake>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientStopCameraShake_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientstopcameraanim>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientStopCameraAnim_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientstartonlinesession>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientStartOnlineSession_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientspawncameralenseffect>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientSpawnCameraLensEffect_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientsetviewtarget>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientSetViewTarget_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientsetspectatorwaiting>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientSetSpectatorWaiting_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientsethud>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientSetHUD_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientsetforcemiplevelstoberesident>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientSetForceMipLevelsToBeResident_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientsetcinematicmode>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientSetCinematicMode_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientsetcameramode>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientSetCameraMode_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientsetcamerafade>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientSetCameraFade_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientsetblockonasyncloading>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientSetBlockOnAsyncLoading_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientreturntomainmenuwithtextreason>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientReturnToMainMenuWithTextReason_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientreturntomainmenu>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientReturnToMainMenu_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientretryclientrestart>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientRetryClientRestart_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientrestart>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientRestart_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientreset>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientReset_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientrepobjref>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientRepObjRef_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientreceivelocalizedmessage>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientReceiveLocalizedMessage_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientprestreamtextures>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientPrestreamTextures_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientpreparemapchange>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientPrepareMapChange_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientplaysoundatlocation>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientPlaySoundAtLocation_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientplaysound>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientPlaySound_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientplayforcefeedback>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientPlayForceFeedback_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientplaycamerashake>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientPlayCameraShake_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientplaycameraanim>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientPlayCameraAnim_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientmuteplayer>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientMutePlayer_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientmessage>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientMessage_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientignoremoveinput>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientIgnoreMoveInput_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientignorelookinput>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientIgnoreLookInput_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientgotostate>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientGotoState_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientgameended>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientGameEnded_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientforcegarbagecollection>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientForceGarbageCollection_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientflushlevelstreaming>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientFlushLevelStreaming_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientendonlinesession>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientEndOnlineSession_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientenablenetworkvoice>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientEnableNetworkVoice_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientcommitmapchange>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientCommitMapChange_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientclearcameralenseffects>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientClearCameraLensEffects_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientcapbandwidth>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientCapBandwidth_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientcancelpendingmapchange>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientCancelPendingMapChange_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientaddtexturestreamingloc>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientAddTextureStreamingLoc_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientsetrotation>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientSetRotation_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientsetlocation>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientSetLocation_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Onserverstartedvisuallogger>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::OnServerStartedVisualLogger_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientwaskicked>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientWasKicked_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientvoicehandshakecomplete>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientVoiceHandshakeComplete_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientupdatemultiplelevelsstreamingstatus>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientUpdateMultipleLevelsStreamingStatus_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientupdatelevelstreamingstatus>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientUpdateLevelStreamingStatus_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientunmuteplayer>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientUnmutePlayer_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clienttravelinternal>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientTravelInternal_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientteammessage>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientTeamMessage_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientstopforcefeedback>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientStopForceFeedback_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientstopcamerashake>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientStopCameraShake_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientstopcameraanim>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientStopCameraAnim_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientstartonlinesession>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientStartOnlineSession_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientspawncameralenseffect>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientSpawnCameraLensEffect_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientsetviewtarget>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientSetViewTarget_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientsetspectatorwaiting>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientSetSpectatorWaiting_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientsethud>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientSetHUD_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientsetforcemiplevelstoberesident>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientSetForceMipLevelsToBeResident_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientsetcinematicmode>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientSetCinematicMode_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientsetcameramode>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientSetCameraMode_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientsetcamerafade>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientSetCameraFade_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientsetblockonasyncloading>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientSetBlockOnAsyncLoading_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientreturntomainmenuwithtextreason>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientReturnToMainMenuWithTextReason_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientreturntomainmenu>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientReturnToMainMenu_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientretryclientrestart>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientRetryClientRestart_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientrestart>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientRestart_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientreset>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientReset_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientrepobjref>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientRepObjRef_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientreceivelocalizedmessage>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientReceiveLocalizedMessage_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientprestreamtextures>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientPrestreamTextures_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientpreparemapchange>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientPrepareMapChange_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientplaysoundatlocation>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientPlaySoundAtLocation_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientplaysound>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientPlaySound_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientplayforcefeedback>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientPlayForceFeedback_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientplaycamerashake>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientPlayCameraShake_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientplaycameraanim>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientPlayCameraAnim_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientmuteplayer>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientMutePlayer_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientmessage>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientMessage_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientignoremoveinput>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientIgnoreMoveInput_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientignorelookinput>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientIgnoreLookInput_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientgotostate>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientGotoState_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientgameended>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientGameEnded_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientforcegarbagecollection>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientForceGarbageCollection_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientflushlevelstreaming>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientFlushLevelStreaming_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientendonlinesession>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientEndOnlineSession_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientenablenetworkvoice>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientEnableNetworkVoice_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientcommitmapchange>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientCommitMapChange_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientclearcameralenseffects>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientClearCameraLensEffects_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientcapbandwidth>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientCapBandwidth_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientcancelpendingmapchange>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientCancelPendingMapChange_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientaddtexturestreamingloc>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientAddTextureStreamingLoc_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientsetrotation>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientSetRotation_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientsetlocation>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ClientSetLocation_OnCommandResponse, this, std::placeholders::_1)));

	using ServerRPCCommandTypes = improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands;
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Testrpc>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::TestRPC_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Serverviewself>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerViewSelf_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Serverviewprevplayer>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerViewPrevPlayer_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Serverviewnextplayer>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerViewNextPlayer_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Serververifyviewtarget>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerVerifyViewTarget_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Serverupdatemultiplelevelsvisibility>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerUpdateMultipleLevelsVisibility_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Serverupdatelevelvisibility>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerUpdateLevelVisibility_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Serverupdatecamera>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerUpdateCamera_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Serverunmuteplayer>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerUnmutePlayer_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Servertoggleailogging>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerToggleAILogging_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Servershorttimeout>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerShortTimeout_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Serversetspectatorwaiting>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerSetSpectatorWaiting_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Serversetspectatorlocation>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerSetSpectatorLocation_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Serverrestartplayer>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerRestartPlayer_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Serverpause>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerPause_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Servernotifyloadedworld>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerNotifyLoadedWorld_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Servermuteplayer>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerMutePlayer_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Servercheckclientpossessionreliable>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerCheckClientPossessionReliable_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Servercheckclientpossession>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerCheckClientPossession_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Serverchangename>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerChangeName_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Servercamera>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerCamera_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Serveracknowledgepossession>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerAcknowledgePossession_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Testrpc>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::TestRPC_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Serverviewself>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerViewSelf_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Serverviewprevplayer>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerViewPrevPlayer_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Serverviewnextplayer>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerViewNextPlayer_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Serververifyviewtarget>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerVerifyViewTarget_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Serverupdatemultiplelevelsvisibility>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerUpdateMultipleLevelsVisibility_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Serverupdatelevelvisibility>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerUpdateLevelVisibility_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Serverupdatecamera>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerUpdateCamera_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Serverunmuteplayer>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerUnmutePlayer_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Servertoggleailogging>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerToggleAILogging_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Servershorttimeout>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerShortTimeout_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Serversetspectatorwaiting>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerSetSpectatorWaiting_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Serversetspectatorlocation>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerSetSpectatorLocation_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Serverrestartplayer>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerRestartPlayer_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Serverpause>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerPause_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Servernotifyloadedworld>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerNotifyLoadedWorld_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Servermuteplayer>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerMutePlayer_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Servercheckclientpossessionreliable>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerCheckClientPossessionReliable_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Servercheckclientpossession>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerCheckClientPossession_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Serverchangename>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerChangeName_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Servercamera>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerCamera_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Serveracknowledgepossession>(std::bind(&USpatialTypeBinding_SampleGamePlayerController::ServerAcknowledgePossession_OnCommandResponse, this, std::placeholders::_1)));
}

void USpatialTypeBinding_SampleGamePlayerController::UnbindFromView()
=======
	using ClientRPCCommandTypes = improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands;
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Onserverstartedvisuallogger>(std::bind(&USpatialTypeBinding_PlayerController::OnServerStartedVisualLogger_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientwaskicked>(std::bind(&USpatialTypeBinding_PlayerController::ClientWasKicked_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientvoicehandshakecomplete>(std::bind(&USpatialTypeBinding_PlayerController::ClientVoiceHandshakeComplete_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientupdatemultiplelevelsstreamingstatus>(std::bind(&USpatialTypeBinding_PlayerController::ClientUpdateMultipleLevelsStreamingStatus_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientupdatelevelstreamingstatus>(std::bind(&USpatialTypeBinding_PlayerController::ClientUpdateLevelStreamingStatus_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientunmuteplayer>(std::bind(&USpatialTypeBinding_PlayerController::ClientUnmutePlayer_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clienttravelinternal>(std::bind(&USpatialTypeBinding_PlayerController::ClientTravelInternal_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientteammessage>(std::bind(&USpatialTypeBinding_PlayerController::ClientTeamMessage_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientstopforcefeedback>(std::bind(&USpatialTypeBinding_PlayerController::ClientStopForceFeedback_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientstopcamerashake>(std::bind(&USpatialTypeBinding_PlayerController::ClientStopCameraShake_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientstopcameraanim>(std::bind(&USpatialTypeBinding_PlayerController::ClientStopCameraAnim_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientstartonlinesession>(std::bind(&USpatialTypeBinding_PlayerController::ClientStartOnlineSession_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientspawncameralenseffect>(std::bind(&USpatialTypeBinding_PlayerController::ClientSpawnCameraLensEffect_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientsetviewtarget>(std::bind(&USpatialTypeBinding_PlayerController::ClientSetViewTarget_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientsetspectatorwaiting>(std::bind(&USpatialTypeBinding_PlayerController::ClientSetSpectatorWaiting_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientsethud>(std::bind(&USpatialTypeBinding_PlayerController::ClientSetHUD_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientsetforcemiplevelstoberesident>(std::bind(&USpatialTypeBinding_PlayerController::ClientSetForceMipLevelsToBeResident_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientsetcinematicmode>(std::bind(&USpatialTypeBinding_PlayerController::ClientSetCinematicMode_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientsetcameramode>(std::bind(&USpatialTypeBinding_PlayerController::ClientSetCameraMode_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientsetcamerafade>(std::bind(&USpatialTypeBinding_PlayerController::ClientSetCameraFade_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientsetblockonasyncloading>(std::bind(&USpatialTypeBinding_PlayerController::ClientSetBlockOnAsyncLoading_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientreturntomainmenuwithtextreason>(std::bind(&USpatialTypeBinding_PlayerController::ClientReturnToMainMenuWithTextReason_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientreturntomainmenu>(std::bind(&USpatialTypeBinding_PlayerController::ClientReturnToMainMenu_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientretryclientrestart>(std::bind(&USpatialTypeBinding_PlayerController::ClientRetryClientRestart_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientrestart>(std::bind(&USpatialTypeBinding_PlayerController::ClientRestart_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientreset>(std::bind(&USpatialTypeBinding_PlayerController::ClientReset_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientrepobjref>(std::bind(&USpatialTypeBinding_PlayerController::ClientRepObjRef_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientreceivelocalizedmessage>(std::bind(&USpatialTypeBinding_PlayerController::ClientReceiveLocalizedMessage_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientprestreamtextures>(std::bind(&USpatialTypeBinding_PlayerController::ClientPrestreamTextures_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientpreparemapchange>(std::bind(&USpatialTypeBinding_PlayerController::ClientPrepareMapChange_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientplaysoundatlocation>(std::bind(&USpatialTypeBinding_PlayerController::ClientPlaySoundAtLocation_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientplaysound>(std::bind(&USpatialTypeBinding_PlayerController::ClientPlaySound_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientplayforcefeedback>(std::bind(&USpatialTypeBinding_PlayerController::ClientPlayForceFeedback_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientplaycamerashake>(std::bind(&USpatialTypeBinding_PlayerController::ClientPlayCameraShake_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientplaycameraanim>(std::bind(&USpatialTypeBinding_PlayerController::ClientPlayCameraAnim_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientmuteplayer>(std::bind(&USpatialTypeBinding_PlayerController::ClientMutePlayer_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientmessage>(std::bind(&USpatialTypeBinding_PlayerController::ClientMessage_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientignoremoveinput>(std::bind(&USpatialTypeBinding_PlayerController::ClientIgnoreMoveInput_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientignorelookinput>(std::bind(&USpatialTypeBinding_PlayerController::ClientIgnoreLookInput_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientgotostate>(std::bind(&USpatialTypeBinding_PlayerController::ClientGotoState_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientgameended>(std::bind(&USpatialTypeBinding_PlayerController::ClientGameEnded_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientforcegarbagecollection>(std::bind(&USpatialTypeBinding_PlayerController::ClientForceGarbageCollection_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientflushlevelstreaming>(std::bind(&USpatialTypeBinding_PlayerController::ClientFlushLevelStreaming_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientendonlinesession>(std::bind(&USpatialTypeBinding_PlayerController::ClientEndOnlineSession_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientenablenetworkvoice>(std::bind(&USpatialTypeBinding_PlayerController::ClientEnableNetworkVoice_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientcommitmapchange>(std::bind(&USpatialTypeBinding_PlayerController::ClientCommitMapChange_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientclearcameralenseffects>(std::bind(&USpatialTypeBinding_PlayerController::ClientClearCameraLensEffects_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientcapbandwidth>(std::bind(&USpatialTypeBinding_PlayerController::ClientCapBandwidth_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientcancelpendingmapchange>(std::bind(&USpatialTypeBinding_PlayerController::ClientCancelPendingMapChange_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientaddtexturestreamingloc>(std::bind(&USpatialTypeBinding_PlayerController::ClientAddTextureStreamingLoc_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientsetrotation>(std::bind(&USpatialTypeBinding_PlayerController::ClientSetRotation_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ClientRPCCommandTypes::Clientsetlocation>(std::bind(&USpatialTypeBinding_PlayerController::ClientSetLocation_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Onserverstartedvisuallogger>(std::bind(&USpatialTypeBinding_PlayerController::OnServerStartedVisualLogger_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientwaskicked>(std::bind(&USpatialTypeBinding_PlayerController::ClientWasKicked_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientvoicehandshakecomplete>(std::bind(&USpatialTypeBinding_PlayerController::ClientVoiceHandshakeComplete_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientupdatemultiplelevelsstreamingstatus>(std::bind(&USpatialTypeBinding_PlayerController::ClientUpdateMultipleLevelsStreamingStatus_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientupdatelevelstreamingstatus>(std::bind(&USpatialTypeBinding_PlayerController::ClientUpdateLevelStreamingStatus_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientunmuteplayer>(std::bind(&USpatialTypeBinding_PlayerController::ClientUnmutePlayer_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clienttravelinternal>(std::bind(&USpatialTypeBinding_PlayerController::ClientTravelInternal_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientteammessage>(std::bind(&USpatialTypeBinding_PlayerController::ClientTeamMessage_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientstopforcefeedback>(std::bind(&USpatialTypeBinding_PlayerController::ClientStopForceFeedback_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientstopcamerashake>(std::bind(&USpatialTypeBinding_PlayerController::ClientStopCameraShake_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientstopcameraanim>(std::bind(&USpatialTypeBinding_PlayerController::ClientStopCameraAnim_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientstartonlinesession>(std::bind(&USpatialTypeBinding_PlayerController::ClientStartOnlineSession_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientspawncameralenseffect>(std::bind(&USpatialTypeBinding_PlayerController::ClientSpawnCameraLensEffect_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientsetviewtarget>(std::bind(&USpatialTypeBinding_PlayerController::ClientSetViewTarget_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientsetspectatorwaiting>(std::bind(&USpatialTypeBinding_PlayerController::ClientSetSpectatorWaiting_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientsethud>(std::bind(&USpatialTypeBinding_PlayerController::ClientSetHUD_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientsetforcemiplevelstoberesident>(std::bind(&USpatialTypeBinding_PlayerController::ClientSetForceMipLevelsToBeResident_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientsetcinematicmode>(std::bind(&USpatialTypeBinding_PlayerController::ClientSetCinematicMode_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientsetcameramode>(std::bind(&USpatialTypeBinding_PlayerController::ClientSetCameraMode_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientsetcamerafade>(std::bind(&USpatialTypeBinding_PlayerController::ClientSetCameraFade_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientsetblockonasyncloading>(std::bind(&USpatialTypeBinding_PlayerController::ClientSetBlockOnAsyncLoading_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientreturntomainmenuwithtextreason>(std::bind(&USpatialTypeBinding_PlayerController::ClientReturnToMainMenuWithTextReason_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientreturntomainmenu>(std::bind(&USpatialTypeBinding_PlayerController::ClientReturnToMainMenu_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientretryclientrestart>(std::bind(&USpatialTypeBinding_PlayerController::ClientRetryClientRestart_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientrestart>(std::bind(&USpatialTypeBinding_PlayerController::ClientRestart_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientreset>(std::bind(&USpatialTypeBinding_PlayerController::ClientReset_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientrepobjref>(std::bind(&USpatialTypeBinding_PlayerController::ClientRepObjRef_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientreceivelocalizedmessage>(std::bind(&USpatialTypeBinding_PlayerController::ClientReceiveLocalizedMessage_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientprestreamtextures>(std::bind(&USpatialTypeBinding_PlayerController::ClientPrestreamTextures_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientpreparemapchange>(std::bind(&USpatialTypeBinding_PlayerController::ClientPrepareMapChange_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientplaysoundatlocation>(std::bind(&USpatialTypeBinding_PlayerController::ClientPlaySoundAtLocation_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientplaysound>(std::bind(&USpatialTypeBinding_PlayerController::ClientPlaySound_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientplayforcefeedback>(std::bind(&USpatialTypeBinding_PlayerController::ClientPlayForceFeedback_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientplaycamerashake>(std::bind(&USpatialTypeBinding_PlayerController::ClientPlayCameraShake_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientplaycameraanim>(std::bind(&USpatialTypeBinding_PlayerController::ClientPlayCameraAnim_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientmuteplayer>(std::bind(&USpatialTypeBinding_PlayerController::ClientMutePlayer_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientmessage>(std::bind(&USpatialTypeBinding_PlayerController::ClientMessage_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientignoremoveinput>(std::bind(&USpatialTypeBinding_PlayerController::ClientIgnoreMoveInput_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientignorelookinput>(std::bind(&USpatialTypeBinding_PlayerController::ClientIgnoreLookInput_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientgotostate>(std::bind(&USpatialTypeBinding_PlayerController::ClientGotoState_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientgameended>(std::bind(&USpatialTypeBinding_PlayerController::ClientGameEnded_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientforcegarbagecollection>(std::bind(&USpatialTypeBinding_PlayerController::ClientForceGarbageCollection_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientflushlevelstreaming>(std::bind(&USpatialTypeBinding_PlayerController::ClientFlushLevelStreaming_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientendonlinesession>(std::bind(&USpatialTypeBinding_PlayerController::ClientEndOnlineSession_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientenablenetworkvoice>(std::bind(&USpatialTypeBinding_PlayerController::ClientEnableNetworkVoice_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientcommitmapchange>(std::bind(&USpatialTypeBinding_PlayerController::ClientCommitMapChange_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientclearcameralenseffects>(std::bind(&USpatialTypeBinding_PlayerController::ClientClearCameraLensEffects_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientcapbandwidth>(std::bind(&USpatialTypeBinding_PlayerController::ClientCapBandwidth_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientcancelpendingmapchange>(std::bind(&USpatialTypeBinding_PlayerController::ClientCancelPendingMapChange_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientaddtexturestreamingloc>(std::bind(&USpatialTypeBinding_PlayerController::ClientAddTextureStreamingLoc_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientsetrotation>(std::bind(&USpatialTypeBinding_PlayerController::ClientSetRotation_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ClientRPCCommandTypes::Clientsetlocation>(std::bind(&USpatialTypeBinding_PlayerController::ClientSetLocation_OnCommandResponse, this, std::placeholders::_1)));

	using ServerRPCCommandTypes = improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands;
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Serverviewself>(std::bind(&USpatialTypeBinding_PlayerController::ServerViewSelf_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Serverviewprevplayer>(std::bind(&USpatialTypeBinding_PlayerController::ServerViewPrevPlayer_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Serverviewnextplayer>(std::bind(&USpatialTypeBinding_PlayerController::ServerViewNextPlayer_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Serververifyviewtarget>(std::bind(&USpatialTypeBinding_PlayerController::ServerVerifyViewTarget_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Serverupdatemultiplelevelsvisibility>(std::bind(&USpatialTypeBinding_PlayerController::ServerUpdateMultipleLevelsVisibility_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Serverupdatelevelvisibility>(std::bind(&USpatialTypeBinding_PlayerController::ServerUpdateLevelVisibility_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Serverupdatecamera>(std::bind(&USpatialTypeBinding_PlayerController::ServerUpdateCamera_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Serverunmuteplayer>(std::bind(&USpatialTypeBinding_PlayerController::ServerUnmutePlayer_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Servertoggleailogging>(std::bind(&USpatialTypeBinding_PlayerController::ServerToggleAILogging_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Servershorttimeout>(std::bind(&USpatialTypeBinding_PlayerController::ServerShortTimeout_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Serversetspectatorwaiting>(std::bind(&USpatialTypeBinding_PlayerController::ServerSetSpectatorWaiting_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Serversetspectatorlocation>(std::bind(&USpatialTypeBinding_PlayerController::ServerSetSpectatorLocation_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Serverrestartplayer>(std::bind(&USpatialTypeBinding_PlayerController::ServerRestartPlayer_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Serverpause>(std::bind(&USpatialTypeBinding_PlayerController::ServerPause_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Servernotifyloadedworld>(std::bind(&USpatialTypeBinding_PlayerController::ServerNotifyLoadedWorld_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Servermuteplayer>(std::bind(&USpatialTypeBinding_PlayerController::ServerMutePlayer_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Servercheckclientpossessionreliable>(std::bind(&USpatialTypeBinding_PlayerController::ServerCheckClientPossessionReliable_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Servercheckclientpossession>(std::bind(&USpatialTypeBinding_PlayerController::ServerCheckClientPossession_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Serverchangename>(std::bind(&USpatialTypeBinding_PlayerController::ServerChangeName_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Servercamera>(std::bind(&USpatialTypeBinding_PlayerController::ServerCamera_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandRequest<ServerRPCCommandTypes::Serveracknowledgepossession>(std::bind(&USpatialTypeBinding_PlayerController::ServerAcknowledgePossession_OnRPCPayload, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Serverviewself>(std::bind(&USpatialTypeBinding_PlayerController::ServerViewSelf_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Serverviewprevplayer>(std::bind(&USpatialTypeBinding_PlayerController::ServerViewPrevPlayer_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Serverviewnextplayer>(std::bind(&USpatialTypeBinding_PlayerController::ServerViewNextPlayer_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Serververifyviewtarget>(std::bind(&USpatialTypeBinding_PlayerController::ServerVerifyViewTarget_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Serverupdatemultiplelevelsvisibility>(std::bind(&USpatialTypeBinding_PlayerController::ServerUpdateMultipleLevelsVisibility_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Serverupdatelevelvisibility>(std::bind(&USpatialTypeBinding_PlayerController::ServerUpdateLevelVisibility_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Serverupdatecamera>(std::bind(&USpatialTypeBinding_PlayerController::ServerUpdateCamera_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Serverunmuteplayer>(std::bind(&USpatialTypeBinding_PlayerController::ServerUnmutePlayer_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Servertoggleailogging>(std::bind(&USpatialTypeBinding_PlayerController::ServerToggleAILogging_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Servershorttimeout>(std::bind(&USpatialTypeBinding_PlayerController::ServerShortTimeout_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Serversetspectatorwaiting>(std::bind(&USpatialTypeBinding_PlayerController::ServerSetSpectatorWaiting_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Serversetspectatorlocation>(std::bind(&USpatialTypeBinding_PlayerController::ServerSetSpectatorLocation_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Serverrestartplayer>(std::bind(&USpatialTypeBinding_PlayerController::ServerRestartPlayer_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Serverpause>(std::bind(&USpatialTypeBinding_PlayerController::ServerPause_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Servernotifyloadedworld>(std::bind(&USpatialTypeBinding_PlayerController::ServerNotifyLoadedWorld_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Servermuteplayer>(std::bind(&USpatialTypeBinding_PlayerController::ServerMutePlayer_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Servercheckclientpossessionreliable>(std::bind(&USpatialTypeBinding_PlayerController::ServerCheckClientPossessionReliable_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Servercheckclientpossession>(std::bind(&USpatialTypeBinding_PlayerController::ServerCheckClientPossession_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Serverchangename>(std::bind(&USpatialTypeBinding_PlayerController::ServerChangeName_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Servercamera>(std::bind(&USpatialTypeBinding_PlayerController::ServerCamera_OnCommandResponse, this, std::placeholders::_1)));
	ViewCallbacks.Add(View->OnCommandResponse<ServerRPCCommandTypes::Serveracknowledgepossession>(std::bind(&USpatialTypeBinding_PlayerController::ServerAcknowledgePossession_OnCommandResponse, this, std::placeholders::_1)));
}

void USpatialTypeBinding_PlayerController::UnbindFromView()
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	ViewCallbacks.Reset();
}

worker::Entity USpatialTypeBinding_SampleGamePlayerController::CreateActorEntity(const FString& ClientWorkerId, const FVector& Position, const FString& Metadata, const FPropertyChangeState& InitialChanges, USpatialActorChannel* Channel) const
{
	// Validate replication list.
	const uint16 RepHandlePropertyMapCount = GetRepHandlePropertyMap().Num();
	for (auto& Rep : InitialChanges.RepChanged)
	{
		checkf(Rep <= RepHandlePropertyMapCount, TEXT("Attempting to replicate a property with a handle that the type binding is not aware of. Have additional replicated properties been added in a non generated child object?"))
	}

	// Setup initial data.
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
	improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerSingleClientRepData::Data SingleClientData;
	improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerSingleClientRepData::Update SingleClientUpdate;
	bool bSingleClientUpdateChanged = false;
	improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerMultiClientRepData::Data MultiClientData;
	improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerMultiClientRepData::Update MultiClientUpdate;
	bool bMultiClientUpdateChanged = false;
	improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerMigratableData::Data MigratableData;
	improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerMigratableData::Update MigratableDataUpdate;
=======
	improbable::unreal::generated::playercontroller::PlayerControllerSingleClientRepData::Data SingleClientData;
	improbable::unreal::generated::playercontroller::PlayerControllerSingleClientRepData::Update SingleClientUpdate;
	bool bSingleClientUpdateChanged = false;
	improbable::unreal::generated::playercontroller::PlayerControllerMultiClientRepData::Data MultiClientData;
	improbable::unreal::generated::playercontroller::PlayerControllerMultiClientRepData::Update MultiClientUpdate;
	bool bMultiClientUpdateChanged = false;
	improbable::unreal::generated::playercontroller::PlayerControllerMigratableData::Data MigratableData;
	improbable::unreal::generated::playercontroller::PlayerControllerMigratableData::Update MigratableDataUpdate;
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
	bool bMigratableDataUpdateChanged = false;
	BuildSpatialComponentUpdate(InitialChanges, Channel, SingleClientUpdate, bSingleClientUpdateChanged, MultiClientUpdate, bMultiClientUpdateChanged, MigratableDataUpdate, bMigratableDataUpdateChanged);
	SingleClientUpdate.ApplyTo(SingleClientData);
	MultiClientUpdate.ApplyTo(MultiClientData);
	MigratableDataUpdate.ApplyTo(MigratableData);

	// Create entity.
	std::string ClientWorkerIdString = TCHAR_TO_UTF8(*ClientWorkerId);

	improbable::WorkerAttributeSet WorkerAttribute{{worker::List<std::string>{"UnrealWorker"}}};
	improbable::WorkerAttributeSet ClientAttribute{{worker::List<std::string>{"UnrealClient"}}};
	improbable::WorkerAttributeSet OwningClientAttribute{{"workerId:" + ClientWorkerIdString}};

	improbable::WorkerRequirementSet WorkersOnly{{WorkerAttribute}};
	improbable::WorkerRequirementSet ClientsOnly{{ClientAttribute}};
	improbable::WorkerRequirementSet OwningClientOnly{{OwningClientAttribute}};
	improbable::WorkerRequirementSet AnyUnrealWorkerOrClient{{WorkerAttribute, ClientAttribute}};
	improbable::WorkerRequirementSet AnyUnrealWorkerOrOwningClient{{WorkerAttribute, OwningClientAttribute}};

	// Set up unreal metadata.
	improbable::unreal::UnrealMetadata::Data UnrealMetadata;
	if (Channel->Actor->IsFullNameStableForNetworking())
	{
		UnrealMetadata.set_static_path({std::string{TCHAR_TO_UTF8(*Channel->Actor->GetPathName(Channel->Actor->GetWorld()))}});
	}
	if (!ClientWorkerIdString.empty())
	{
		UnrealMetadata.set_owner_worker_id({ClientWorkerIdString});
	}

	uint32 CurrentOffset = 1;
	worker::Map<std::string, std::uint32_t> SubobjectNameToOffset;
	ForEachObjectWithOuter(Channel->Actor, [&UnrealMetadata, &CurrentOffset, &SubobjectNameToOffset](UObject* Object)
	{
		// Objects can only be allocated NetGUIDs if this is true.
		if (Object->IsSupportedForNetworking() && !Object->IsPendingKill() && !Object->IsEditorOnly())
		{
			SubobjectNameToOffset.emplace(TCHAR_TO_UTF8(*(Object->GetName())), CurrentOffset);
			CurrentOffset++;
		}
	});
	UnrealMetadata.set_subobject_name_to_offset(SubobjectNameToOffset);

	// Build entity.
	const improbable::Coordinates SpatialPosition = SpatialConstants::LocationToSpatialOSCoordinates(Position);
	return improbable::unreal::FEntityBuilder::Begin()
		.AddPositionComponent(improbable::Position::Data{SpatialPosition}, WorkersOnly)
		.AddMetadataComponent(improbable::Metadata::Data{TCHAR_TO_UTF8(*Metadata)})
		.SetPersistence(true)
		.SetReadAcl(AnyUnrealWorkerOrOwningClient)
		.AddComponent<improbable::unreal::UnrealMetadata>(UnrealMetadata, WorkersOnly)
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		.AddComponent<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerSingleClientRepData>(SingleClientData, WorkersOnly)
		.AddComponent<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerMultiClientRepData>(MultiClientData, WorkersOnly)
		.AddComponent<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerMigratableData>(MigratableData, WorkersOnly)
		.AddComponent<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs>(improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Data{}, OwningClientOnly)
		.AddComponent<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs>(improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Data{}, WorkersOnly)
		.AddComponent<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerNetMulticastRPCs>(improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerNetMulticastRPCs::Data{}, WorkersOnly)
=======
		.AddComponent<improbable::unreal::generated::playercontroller::PlayerControllerSingleClientRepData>(SingleClientData, WorkersOnly)
		.AddComponent<improbable::unreal::generated::playercontroller::PlayerControllerMultiClientRepData>(MultiClientData, WorkersOnly)
		.AddComponent<improbable::unreal::generated::playercontroller::PlayerControllerMigratableData>(MigratableData, WorkersOnly)
		.AddComponent<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs>(improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Data{}, OwningClientOnly)
		.AddComponent<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs>(improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Data{}, WorkersOnly)
		.AddComponent<improbable::unreal::generated::playercontroller::PlayerControllerNetMulticastRPCs>(improbable::unreal::generated::playercontroller::PlayerControllerNetMulticastRPCs::Data{}, WorkersOnly)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		.Build();
}

void USpatialTypeBinding_SampleGamePlayerController::SendComponentUpdates(const FPropertyChangeState& Changes, USpatialActorChannel* Channel, const FEntityId& EntityId) const
{
	// Build SpatialOS updates.
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
	improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerSingleClientRepData::Update SingleClientUpdate;
	bool bSingleClientUpdateChanged = false;
	improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerMultiClientRepData::Update MultiClientUpdate;
	bool bMultiClientUpdateChanged = false;
	improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerMigratableData::Update MigratableDataUpdate;
=======
	improbable::unreal::generated::playercontroller::PlayerControllerSingleClientRepData::Update SingleClientUpdate;
	bool bSingleClientUpdateChanged = false;
	improbable::unreal::generated::playercontroller::PlayerControllerMultiClientRepData::Update MultiClientUpdate;
	bool bMultiClientUpdateChanged = false;
	improbable::unreal::generated::playercontroller::PlayerControllerMigratableData::Update MigratableDataUpdate;
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
	bool bMigratableDataUpdateChanged = false;
	BuildSpatialComponentUpdate(Changes, Channel, SingleClientUpdate, bSingleClientUpdateChanged, MultiClientUpdate, bMultiClientUpdateChanged, MigratableDataUpdate, bMigratableDataUpdateChanged);

	// Send SpatialOS updates if anything changed.
	TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
	if (bSingleClientUpdateChanged)
	{
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendComponentUpdate<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerSingleClientRepData>(EntityId.ToSpatialEntityId(), SingleClientUpdate);
	}
	if (bMultiClientUpdateChanged)
	{
		Connection->SendComponentUpdate<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerMultiClientRepData>(EntityId.ToSpatialEntityId(), MultiClientUpdate);
	}
	if (bMigratableDataUpdateChanged)
	{
		Connection->SendComponentUpdate<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerMigratableData>(EntityId.ToSpatialEntityId(), MigratableDataUpdate);
=======
		Connection->SendComponentUpdate<improbable::unreal::generated::playercontroller::PlayerControllerSingleClientRepData>(EntityId.ToSpatialEntityId(), SingleClientUpdate);
	}
	if (bMultiClientUpdateChanged)
	{
		Connection->SendComponentUpdate<improbable::unreal::generated::playercontroller::PlayerControllerMultiClientRepData>(EntityId.ToSpatialEntityId(), MultiClientUpdate);
	}
	if (bMigratableDataUpdateChanged)
	{
		Connection->SendComponentUpdate<improbable::unreal::generated::playercontroller::PlayerControllerMigratableData>(EntityId.ToSpatialEntityId(), MigratableDataUpdate);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
	}
}

void USpatialTypeBinding_SampleGamePlayerController::SendRPCCommand(UObject* TargetObject, const UFunction* const Function, void* Parameters)
{
	TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
	auto SenderFuncIterator = RPCToSenderMap.Find(Function->GetFName());
	if (SenderFuncIterator == nullptr)
	{
		UE_LOG(LogSpatialOSInterop, Error, TEXT("Sender for %s has not been registered with RPCToSenderMap."), *Function->GetFName().ToString());
		return;
	}
	checkf(*SenderFuncIterator, TEXT("Sender for %s has been registered as null."), *Function->GetFName().ToString());
	(this->*(*SenderFuncIterator))(Connection.Get(), Parameters, TargetObject);
}

void USpatialTypeBinding_SampleGamePlayerController::ReceiveAddComponent(USpatialActorChannel* Channel, UAddComponentOpWrapperBase* AddComponentOp) const
{
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
	auto* SingleClientAddOp = Cast<USampleGamePlayerControllerSingleClientRepDataAddComponentOp>(AddComponentOp);
	if (SingleClientAddOp)
	{
		auto Update = improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerSingleClientRepData::Update::FromInitialData(*SingleClientAddOp->Data.data());
		ReceiveUpdate_SingleClient(Channel, Update);
	}
	auto* MultiClientAddOp = Cast<USampleGamePlayerControllerMultiClientRepDataAddComponentOp>(AddComponentOp);
	if (MultiClientAddOp)
	{
		auto Update = improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerMultiClientRepData::Update::FromInitialData(*MultiClientAddOp->Data.data());
		ReceiveUpdate_MultiClient(Channel, Update);
	}
	auto* MigratableDataAddOp = Cast<USampleGamePlayerControllerMigratableDataAddComponentOp>(AddComponentOp);
	if (MigratableDataAddOp)
	{
		auto Update = improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerMigratableData::Update::FromInitialData(*MigratableDataAddOp->Data.data());
=======
	auto* SingleClientAddOp = Cast<UPlayerControllerSingleClientRepDataAddComponentOp>(AddComponentOp);
	if (SingleClientAddOp)
	{
		auto Update = improbable::unreal::generated::playercontroller::PlayerControllerSingleClientRepData::Update::FromInitialData(*SingleClientAddOp->Data.data());
		ReceiveUpdate_SingleClient(Channel, Update);
	}
	auto* MultiClientAddOp = Cast<UPlayerControllerMultiClientRepDataAddComponentOp>(AddComponentOp);
	if (MultiClientAddOp)
	{
		auto Update = improbable::unreal::generated::playercontroller::PlayerControllerMultiClientRepData::Update::FromInitialData(*MultiClientAddOp->Data.data());
		ReceiveUpdate_MultiClient(Channel, Update);
	}
	auto* MigratableDataAddOp = Cast<UPlayerControllerMigratableDataAddComponentOp>(AddComponentOp);
	if (MigratableDataAddOp)
	{
		auto Update = improbable::unreal::generated::playercontroller::PlayerControllerMigratableData::Update::FromInitialData(*MigratableDataAddOp->Data.data());
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		ReceiveUpdate_Migratable(Channel, Update);
	}
}

worker::Map<worker::ComponentId, worker::InterestOverride> USpatialTypeBinding_SampleGamePlayerController::GetInterestOverrideMap(bool bIsClient, bool bAutonomousProxy) const
{
	worker::Map<worker::ComponentId, worker::InterestOverride> Interest;
	if (bIsClient)
	{
		if (!bAutonomousProxy)
		{
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			Interest.emplace(improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerSingleClientRepData::ComponentId, worker::InterestOverride{false});
		}
		Interest.emplace(improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerMigratableData::ComponentId, worker::InterestOverride{false});
=======
			Interest.emplace(improbable::unreal::generated::playercontroller::PlayerControllerSingleClientRepData::ComponentId, worker::InterestOverride{false});
		}
		Interest.emplace(improbable::unreal::generated::playercontroller::PlayerControllerMigratableData::ComponentId, worker::InterestOverride{false});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
	}
	return Interest;
}

void USpatialTypeBinding_SampleGamePlayerController::BuildSpatialComponentUpdate(
	const FPropertyChangeState& Changes,
	USpatialActorChannel* Channel,
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
	improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerSingleClientRepData::Update& SingleClientUpdate,
	bool& bSingleClientUpdateChanged,
	improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerMultiClientRepData::Update& MultiClientUpdate,
	bool& bMultiClientUpdateChanged,
	improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerMigratableData::Update& MigratableDataUpdate,
=======
	improbable::unreal::generated::playercontroller::PlayerControllerSingleClientRepData::Update& SingleClientUpdate,
	bool& bSingleClientUpdateChanged,
	improbable::unreal::generated::playercontroller::PlayerControllerMultiClientRepData::Update& MultiClientUpdate,
	bool& bMultiClientUpdateChanged,
	improbable::unreal::generated::playercontroller::PlayerControllerMigratableData::Update& MigratableDataUpdate,
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
	bool& bMigratableDataUpdateChanged) const
{
	const FRepHandlePropertyMap& RepPropertyMap = GetRepHandlePropertyMap();
	const FMigratableHandlePropertyMap& MigPropertyMap = GetMigratableHandlePropertyMap();
	if (Changes.RepChanged.Num() > 0)
	{
		// Populate the replicated data component updates from the replicated property changelist.
		FChangelistIterator ChangelistIterator(Changes.RepChanged, 0);
		FRepHandleIterator HandleIterator(ChangelistIterator, Changes.RepCmds, Changes.RepBaseHandleToCmdIndex, 0, 1, 0, Changes.RepCmds.Num() - 1);
		while (HandleIterator.NextHandle())
		{
			const FRepLayoutCmd& Cmd = Changes.RepCmds[HandleIterator.CmdIndex];
			const FRepHandleData& PropertyMapData = RepPropertyMap[HandleIterator.Handle];
			const uint8* Data = PropertyMapData.GetPropertyData(Changes.SourceData) + HandleIterator.ArrayOffset;
			UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending property update. actor %s (%lld), property %s (handle %d)"),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*Channel->Actor->GetName(),
				Channel->GetEntityId().ToSpatialEntityId(),
				*Cmd.Property->GetName(),
				HandleIterator.Handle);
			switch (GetGroupFromCondition(PropertyMapData.Condition))
			{
			case GROUP_SingleClient:
				ServerSendUpdate_SingleClient(Data, HandleIterator.Handle, Cmd.Property, Channel, SingleClientUpdate);
				bSingleClientUpdateChanged = true;
				break;
			case GROUP_MultiClient:
				ServerSendUpdate_MultiClient(Data, HandleIterator.Handle, Cmd.Property, Channel, MultiClientUpdate);
				bMultiClientUpdateChanged = true;
				break;
			}
			if (Cmd.Type == REPCMD_DynamicArray)
			{
				if (!HandleIterator.JumpOverArray())
				{
					break;
				}
			}
		}
	}

	// Populate the migrated data component update from the migrated property changelist.
	for (uint16 ChangedHandle : Changes.MigChanged)
	{
		const FMigratableHandleData& PropertyMapData = MigPropertyMap[ChangedHandle];
		const uint8* Data = PropertyMapData.GetPropertyData(Changes.SourceData);
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending migratable property update. actor %s (%lld), property %s (handle %d)"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*Channel->Actor->GetName(),
			Channel->GetEntityId().ToSpatialEntityId(),
			*PropertyMapData.Property->GetName(),
			ChangedHandle);
		ServerSendUpdate_Migratable(Data, ChangedHandle, PropertyMapData.Property, Channel, MigratableDataUpdate);
		bMigratableDataUpdateChanged = true;
	}
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerSendUpdate_SingleClient(const uint8* RESTRICT Data, int32 Handle, UProperty* Property, USpatialActorChannel* Channel, improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerSingleClientRepData::Update& OutUpdate) const
=======
void USpatialTypeBinding_PlayerController::ServerSendUpdate_SingleClient(const uint8* RESTRICT Data, int32 Handle, UProperty* Property, USpatialActorChannel* Channel, improbable::unreal::generated::playercontroller::PlayerControllerSingleClientRepData::Update& OutUpdate) const
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	switch (Handle)
	{
		case 18: // field_targetviewrotation
		{
			const FRotator& Value = *(reinterpret_cast<FRotator const*>(Data));

			{
				TArray<uint8> ValueData;
				FMemoryWriter ValueDataWriter(ValueData);
				bool bSuccess = true;
				(const_cast<FRotator&>(Value)).NetSerialize(ValueDataWriter, PackageMap, bSuccess);
				checkf(bSuccess, TEXT("NetSerialize on FRotator failed."));
				OutUpdate.set_field_targetviewrotation(std::string(reinterpret_cast<char*>(ValueData.GetData()), ValueData.Num()));
			}
			break;
		}
		case 19: // field_spawnlocation
		{
			const FVector& Value = *(reinterpret_cast<FVector const*>(Data));

			{
				TArray<uint8> ValueData;
				FMemoryWriter ValueDataWriter(ValueData);
				bool bSuccess = true;
				(const_cast<FVector&>(Value)).NetSerialize(ValueDataWriter, PackageMap, bSuccess);
				checkf(bSuccess, TEXT("NetSerialize on FVector failed."));
				OutUpdate.set_field_spawnlocation(std::string(reinterpret_cast<char*>(ValueData.GetData()), ValueData.Num()));
			}
			break;
		}
	default:
		checkf(false, TEXT("Unknown replication handle %d encountered when creating a SpatialOS update."));
		break;
	}
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerSendUpdate_MultiClient(const uint8* RESTRICT Data, int32 Handle, UProperty* Property, USpatialActorChannel* Channel, improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerMultiClientRepData::Update& OutUpdate) const
=======
void USpatialTypeBinding_PlayerController::ServerSendUpdate_MultiClient(const uint8* RESTRICT Data, int32 Handle, UProperty* Property, USpatialActorChannel* Channel, improbable::unreal::generated::playercontroller::PlayerControllerMultiClientRepData::Update& OutUpdate) const
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	switch (Handle)
	{
		case 1: // field_bhidden
		{
			bool Value = static_cast<UBoolProperty*>(Property)->GetPropertyValue(Data);

			OutUpdate.set_field_bhidden(Value);
			break;
		}
		case 2: // field_breplicatemovement
		{
			bool Value = static_cast<UBoolProperty*>(Property)->GetPropertyValue(Data);

			OutUpdate.set_field_breplicatemovement(Value);
			break;
		}
		case 3: // field_btearoff
		{
			bool Value = static_cast<UBoolProperty*>(Property)->GetPropertyValue(Data);

			OutUpdate.set_field_btearoff(Value);
			break;
		}
		case 4: // field_bcanbedamaged
		{
			bool Value = static_cast<UBoolProperty*>(Property)->GetPropertyValue(Data);

			OutUpdate.set_field_bcanbedamaged(Value);
			break;
		}
		case 5: // field_remoterole
		{
			TEnumAsByte<ENetRole> Value = *(reinterpret_cast<TEnumAsByte<ENetRole> const*>(Data));

			OutUpdate.set_field_remoterole(uint32_t(Value));
			break;
		}
		case 6: // field_replicatedmovement
		{
			const FRepMovement& Value = *(reinterpret_cast<FRepMovement const*>(Data));

			{
				TArray<uint8> ValueData;
				FMemoryWriter ValueDataWriter(ValueData);
				bool bSuccess = true;
				(const_cast<FRepMovement&>(Value)).NetSerialize(ValueDataWriter, PackageMap, bSuccess);
				checkf(bSuccess, TEXT("NetSerialize on FRepMovement failed."));
				OutUpdate.set_field_replicatedmovement(std::string(reinterpret_cast<char*>(ValueData.GetData()), ValueData.Num()));
			}
			break;
		}
		case 7: // field_attachmentreplication_attachparent
		{
			AActor* Value = *(reinterpret_cast<AActor* const*>(Data));

			if (Value != nullptr)
			{
				FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromObject(Value);
				if (!NetGUID.IsValid())
				{
					if (Value->IsFullNameStableForNetworking())
					{
						NetGUID = PackageMap->ResolveStablyNamedObject(Value);
					}
				}
				improbable::unreal::UnrealObjectRef ObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(NetGUID);
				if (ObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
				{
					// A legal static object reference should never be unresolved.
					check(!Value->IsFullNameStableForNetworking())
					Interop->QueueOutgoingObjectRepUpdate_Internal(Value, Channel, 7);
				}
				else
				{
					OutUpdate.set_field_attachmentreplication_attachparent(ObjectRef);
				}
			}
			else
			{
				OutUpdate.set_field_attachmentreplication_attachparent(SpatialConstants::NULL_OBJECT_REF);
			}
			break;
		}
		case 8: // field_attachmentreplication_locationoffset
		{
			const FVector_NetQuantize100& Value = *(reinterpret_cast<FVector_NetQuantize100 const*>(Data));

			{
				TArray<uint8> ValueData;
				FMemoryWriter ValueDataWriter(ValueData);
				bool bSuccess = true;
				(const_cast<FVector_NetQuantize100&>(Value)).NetSerialize(ValueDataWriter, PackageMap, bSuccess);
				checkf(bSuccess, TEXT("NetSerialize on FVector_NetQuantize100 failed."));
				OutUpdate.set_field_attachmentreplication_locationoffset(std::string(reinterpret_cast<char*>(ValueData.GetData()), ValueData.Num()));
			}
			break;
		}
		case 9: // field_attachmentreplication_relativescale3d
		{
			const FVector_NetQuantize100& Value = *(reinterpret_cast<FVector_NetQuantize100 const*>(Data));

			{
				TArray<uint8> ValueData;
				FMemoryWriter ValueDataWriter(ValueData);
				bool bSuccess = true;
				(const_cast<FVector_NetQuantize100&>(Value)).NetSerialize(ValueDataWriter, PackageMap, bSuccess);
				checkf(bSuccess, TEXT("NetSerialize on FVector_NetQuantize100 failed."));
				OutUpdate.set_field_attachmentreplication_relativescale3d(std::string(reinterpret_cast<char*>(ValueData.GetData()), ValueData.Num()));
			}
			break;
		}
		case 10: // field_attachmentreplication_rotationoffset
		{
			const FRotator& Value = *(reinterpret_cast<FRotator const*>(Data));

			{
				TArray<uint8> ValueData;
				FMemoryWriter ValueDataWriter(ValueData);
				bool bSuccess = true;
				(const_cast<FRotator&>(Value)).NetSerialize(ValueDataWriter, PackageMap, bSuccess);
				checkf(bSuccess, TEXT("NetSerialize on FRotator failed."));
				OutUpdate.set_field_attachmentreplication_rotationoffset(std::string(reinterpret_cast<char*>(ValueData.GetData()), ValueData.Num()));
			}
			break;
		}
		case 11: // field_attachmentreplication_attachsocket
		{
			FName Value = *(reinterpret_cast<FName const*>(Data));

			OutUpdate.set_field_attachmentreplication_attachsocket(TCHAR_TO_UTF8(*Value.ToString()));
			break;
		}
		case 12: // field_attachmentreplication_attachcomponent
		{
			USceneComponent* Value = *(reinterpret_cast<USceneComponent* const*>(Data));

			if (Value != nullptr)
			{
				FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromObject(Value);
				if (!NetGUID.IsValid())
				{
					if (Value->IsFullNameStableForNetworking())
					{
						NetGUID = PackageMap->ResolveStablyNamedObject(Value);
					}
				}
				improbable::unreal::UnrealObjectRef ObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(NetGUID);
				if (ObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
				{
					// A legal static object reference should never be unresolved.
					check(!Value->IsFullNameStableForNetworking())
					Interop->QueueOutgoingObjectRepUpdate_Internal(Value, Channel, 12);
				}
				else
				{
					OutUpdate.set_field_attachmentreplication_attachcomponent(ObjectRef);
				}
			}
			else
			{
				OutUpdate.set_field_attachmentreplication_attachcomponent(SpatialConstants::NULL_OBJECT_REF);
			}
			break;
		}
		case 13: // field_owner
		{
			AActor* Value = *(reinterpret_cast<AActor* const*>(Data));

			if (Value != nullptr)
			{
				FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromObject(Value);
				if (!NetGUID.IsValid())
				{
					if (Value->IsFullNameStableForNetworking())
					{
						NetGUID = PackageMap->ResolveStablyNamedObject(Value);
					}
				}
				improbable::unreal::UnrealObjectRef ObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(NetGUID);
				if (ObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
				{
					// A legal static object reference should never be unresolved.
					check(!Value->IsFullNameStableForNetworking())
					Interop->QueueOutgoingObjectRepUpdate_Internal(Value, Channel, 13);
				}
				else
				{
					OutUpdate.set_field_owner(ObjectRef);
				}
			}
			else
			{
				OutUpdate.set_field_owner(SpatialConstants::NULL_OBJECT_REF);
			}
			break;
		}
		case 14: // field_role
		{
			TEnumAsByte<ENetRole> Value = *(reinterpret_cast<TEnumAsByte<ENetRole> const*>(Data));

			OutUpdate.set_field_role(uint32_t(Value));
			break;
		}
		case 15: // field_instigator
		{
			APawn* Value = *(reinterpret_cast<APawn* const*>(Data));

			if (Value != nullptr)
			{
				FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromObject(Value);
				if (!NetGUID.IsValid())
				{
					if (Value->IsFullNameStableForNetworking())
					{
						NetGUID = PackageMap->ResolveStablyNamedObject(Value);
					}
				}
				improbable::unreal::UnrealObjectRef ObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(NetGUID);
				if (ObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
				{
					// A legal static object reference should never be unresolved.
					check(!Value->IsFullNameStableForNetworking())
					Interop->QueueOutgoingObjectRepUpdate_Internal(Value, Channel, 15);
				}
				else
				{
					OutUpdate.set_field_instigator(ObjectRef);
				}
			}
			else
			{
				OutUpdate.set_field_instigator(SpatialConstants::NULL_OBJECT_REF);
			}
			break;
		}
		case 16: // field_playerstate
		{
			APlayerState* Value = *(reinterpret_cast<APlayerState* const*>(Data));

			if (Value != nullptr)
			{
				FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromObject(Value);
				if (!NetGUID.IsValid())
				{
					if (Value->IsFullNameStableForNetworking())
					{
						NetGUID = PackageMap->ResolveStablyNamedObject(Value);
					}
				}
				improbable::unreal::UnrealObjectRef ObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(NetGUID);
				if (ObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
				{
					// A legal static object reference should never be unresolved.
					check(!Value->IsFullNameStableForNetworking())
					Interop->QueueOutgoingObjectRepUpdate_Internal(Value, Channel, 16);
				}
				else
				{
					OutUpdate.set_field_playerstate(ObjectRef);
				}
			}
			else
			{
				OutUpdate.set_field_playerstate(SpatialConstants::NULL_OBJECT_REF);
			}
			break;
		}
		case 17: // field_pawn
		{
			APawn* Value = *(reinterpret_cast<APawn* const*>(Data));

			if (Value != nullptr)
			{
				FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromObject(Value);
				if (!NetGUID.IsValid())
				{
					if (Value->IsFullNameStableForNetworking())
					{
						NetGUID = PackageMap->ResolveStablyNamedObject(Value);
					}
				}
				improbable::unreal::UnrealObjectRef ObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(NetGUID);
				if (ObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
				{
					// A legal static object reference should never be unresolved.
					check(!Value->IsFullNameStableForNetworking())
					Interop->QueueOutgoingObjectRepUpdate_Internal(Value, Channel, 17);
				}
				else
				{
					OutUpdate.set_field_pawn(ObjectRef);
				}
			}
			else
			{
				OutUpdate.set_field_pawn(SpatialConstants::NULL_OBJECT_REF);
			}
			break;
		}
	default:
		checkf(false, TEXT("Unknown replication handle %d encountered when creating a SpatialOS update."));
		break;
	}
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerSendUpdate_Migratable(const uint8* RESTRICT Data, int32 Handle, UProperty* Property, USpatialActorChannel* Channel, improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerMigratableData::Update& OutUpdate) const
{
}

void USpatialTypeBinding_SampleGamePlayerController::ReceiveUpdate_SingleClient(USpatialActorChannel* ActorChannel, const improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerSingleClientRepData::Update& Update) const
=======
void USpatialTypeBinding_PlayerController::ServerSendUpdate_Migratable(const uint8* RESTRICT Data, int32 Handle, UProperty* Property, USpatialActorChannel* Channel, improbable::unreal::generated::playercontroller::PlayerControllerMigratableData::Update& OutUpdate) const
{
	switch (Handle)
	{
		case 1: // field_acknowledgedpawn
		{
			APawn* Value = *(reinterpret_cast<APawn* const*>(Data));

			if (Value != nullptr)
			{
				FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromObject(Value);
				if (!NetGUID.IsValid())
				{
					if (Value->IsFullNameStableForNetworking())
					{
						NetGUID = PackageMap->ResolveStablyNamedObject(Value);
					}
				}
				improbable::unreal::UnrealObjectRef ObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(NetGUID);
				if (ObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
				{
					Interop->QueueOutgoingObjectMigUpdate_Internal(Value, Channel, 1);
				}
				else
				{
					OutUpdate.set_field_acknowledgedpawn(ObjectRef);
				}
			}
			else
			{
				OutUpdate.set_field_acknowledgedpawn(SpatialConstants::NULL_OBJECT_REF);
			}
			break;
		}
	default:
		checkf(false, TEXT("Unknown migration property handle %d encountered when creating a SpatialOS update."));
		break;
	}
}

void USpatialTypeBinding_PlayerController::ReceiveUpdate_SingleClient(USpatialActorChannel* ActorChannel, const improbable::unreal::generated::playercontroller::PlayerControllerSingleClientRepData::Update& Update) const
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->PreReceiveSpatialUpdate(ActorChannel);
	TSet<UProperty*> RepNotifies;

	const bool bIsServer = Interop->GetNetDriver()->IsServer();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
	const bool bAutonomousProxy = ActorChannel->IsClientAutonomousProxy(improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::ComponentId);
=======
	const bool bAutonomousProxy = ActorChannel->IsClientAutonomousProxy(improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::ComponentId);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
	const FRepHandlePropertyMap& HandleToPropertyMap = GetRepHandlePropertyMap();
	FSpatialConditionMapFilter ConditionMap(ActorChannel, bAutonomousProxy);

	if (!Update.field_targetviewrotation().empty())
	{
		// field_targetviewrotation
		uint16 Handle = 18;
		const FRepHandleData* RepData = &HandleToPropertyMap[Handle];
		if (bIsServer || ConditionMap.IsRelevant(RepData->Condition))
		{
			uint8* PropertyData = RepData->GetPropertyData(reinterpret_cast<uint8*>(ActorChannel->Actor));
			FRotator Value = *(reinterpret_cast<FRotator const*>(PropertyData));

			{
				auto& ValueDataStr = (*Update.field_targetviewrotation().data());
				TArray<uint8> ValueData;
				ValueData.Append(reinterpret_cast<const uint8*>(ValueDataStr.data()), ValueDataStr.size());
				FMemoryReader ValueDataReader(ValueData);
				bool bSuccess = true;
				Value.NetSerialize(ValueDataReader, PackageMap, bSuccess);
				checkf(bSuccess, TEXT("NetSerialize on FRotator failed."));
			}

			ApplyIncomingReplicatedPropertyUpdate(*RepData, ActorChannel->Actor, static_cast<const void*>(&Value), RepNotifies);

			UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received replicated property update. actor %s (%lld), property %s (handle %d)"),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ActorChannel->Actor->GetName(),
				ActorChannel->GetEntityId().ToSpatialEntityId(),
				*RepData->Property->GetName(),
				Handle);
		}
	}
	if (!Update.field_spawnlocation().empty())
	{
		// field_spawnlocation
		uint16 Handle = 19;
		const FRepHandleData* RepData = &HandleToPropertyMap[Handle];
		if (bIsServer || ConditionMap.IsRelevant(RepData->Condition))
		{
			uint8* PropertyData = RepData->GetPropertyData(reinterpret_cast<uint8*>(ActorChannel->Actor));
			FVector Value = *(reinterpret_cast<FVector const*>(PropertyData));

			{
				auto& ValueDataStr = (*Update.field_spawnlocation().data());
				TArray<uint8> ValueData;
				ValueData.Append(reinterpret_cast<const uint8*>(ValueDataStr.data()), ValueDataStr.size());
				FMemoryReader ValueDataReader(ValueData);
				bool bSuccess = true;
				Value.NetSerialize(ValueDataReader, PackageMap, bSuccess);
				checkf(bSuccess, TEXT("NetSerialize on FVector failed."));
			}

			ApplyIncomingReplicatedPropertyUpdate(*RepData, ActorChannel->Actor, static_cast<const void*>(&Value), RepNotifies);

			UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received replicated property update. actor %s (%lld), property %s (handle %d)"),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ActorChannel->Actor->GetName(),
				ActorChannel->GetEntityId().ToSpatialEntityId(),
				*RepData->Property->GetName(),
				Handle);
		}
	}
	Interop->PostReceiveSpatialUpdate(ActorChannel, RepNotifies.Array());
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ReceiveUpdate_MultiClient(USpatialActorChannel* ActorChannel, const improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerMultiClientRepData::Update& Update) const
=======
void USpatialTypeBinding_PlayerController::ReceiveUpdate_MultiClient(USpatialActorChannel* ActorChannel, const improbable::unreal::generated::playercontroller::PlayerControllerMultiClientRepData::Update& Update) const
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->PreReceiveSpatialUpdate(ActorChannel);
	TSet<UProperty*> RepNotifies;

	const bool bIsServer = Interop->GetNetDriver()->IsServer();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
	const bool bAutonomousProxy = ActorChannel->IsClientAutonomousProxy(improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::ComponentId);
=======
	const bool bAutonomousProxy = ActorChannel->IsClientAutonomousProxy(improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::ComponentId);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
	const FRepHandlePropertyMap& HandleToPropertyMap = GetRepHandlePropertyMap();
	FSpatialConditionMapFilter ConditionMap(ActorChannel, bAutonomousProxy);

	if (!Update.field_bhidden().empty())
	{
		// field_bhidden
		uint16 Handle = 1;
		const FRepHandleData* RepData = &HandleToPropertyMap[Handle];
		if (bIsServer || ConditionMap.IsRelevant(RepData->Condition))
		{
			uint8* PropertyData = RepData->GetPropertyData(reinterpret_cast<uint8*>(ActorChannel->Actor));
			bool Value = static_cast<UBoolProperty*>(RepData->Property)->GetPropertyValue(PropertyData);

			Value = (*Update.field_bhidden().data());

			ApplyIncomingReplicatedPropertyUpdate(*RepData, ActorChannel->Actor, static_cast<const void*>(&Value), RepNotifies);

			UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received replicated property update. actor %s (%lld), property %s (handle %d)"),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ActorChannel->Actor->GetName(),
				ActorChannel->GetEntityId().ToSpatialEntityId(),
				*RepData->Property->GetName(),
				Handle);
		}
	}
	if (!Update.field_breplicatemovement().empty())
	{
		// field_breplicatemovement
		uint16 Handle = 2;
		const FRepHandleData* RepData = &HandleToPropertyMap[Handle];
		if (bIsServer || ConditionMap.IsRelevant(RepData->Condition))
		{
			uint8* PropertyData = RepData->GetPropertyData(reinterpret_cast<uint8*>(ActorChannel->Actor));
			bool Value = static_cast<UBoolProperty*>(RepData->Property)->GetPropertyValue(PropertyData);

			Value = (*Update.field_breplicatemovement().data());

			ApplyIncomingReplicatedPropertyUpdate(*RepData, ActorChannel->Actor, static_cast<const void*>(&Value), RepNotifies);

			UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received replicated property update. actor %s (%lld), property %s (handle %d)"),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ActorChannel->Actor->GetName(),
				ActorChannel->GetEntityId().ToSpatialEntityId(),
				*RepData->Property->GetName(),
				Handle);
		}
	}
	if (!Update.field_btearoff().empty())
	{
		// field_btearoff
		uint16 Handle = 3;
		const FRepHandleData* RepData = &HandleToPropertyMap[Handle];
		if (bIsServer || ConditionMap.IsRelevant(RepData->Condition))
		{
			uint8* PropertyData = RepData->GetPropertyData(reinterpret_cast<uint8*>(ActorChannel->Actor));
			bool Value = static_cast<UBoolProperty*>(RepData->Property)->GetPropertyValue(PropertyData);

			Value = (*Update.field_btearoff().data());

			ApplyIncomingReplicatedPropertyUpdate(*RepData, ActorChannel->Actor, static_cast<const void*>(&Value), RepNotifies);

			UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received replicated property update. actor %s (%lld), property %s (handle %d)"),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ActorChannel->Actor->GetName(),
				ActorChannel->GetEntityId().ToSpatialEntityId(),
				*RepData->Property->GetName(),
				Handle);
		}
	}
	if (!Update.field_bcanbedamaged().empty())
	{
		// field_bcanbedamaged
		uint16 Handle = 4;
		const FRepHandleData* RepData = &HandleToPropertyMap[Handle];
		if (bIsServer || ConditionMap.IsRelevant(RepData->Condition))
		{
			uint8* PropertyData = RepData->GetPropertyData(reinterpret_cast<uint8*>(ActorChannel->Actor));
			bool Value = static_cast<UBoolProperty*>(RepData->Property)->GetPropertyValue(PropertyData);

			Value = (*Update.field_bcanbedamaged().data());

			ApplyIncomingReplicatedPropertyUpdate(*RepData, ActorChannel->Actor, static_cast<const void*>(&Value), RepNotifies);

			UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received replicated property update. actor %s (%lld), property %s (handle %d)"),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ActorChannel->Actor->GetName(),
				ActorChannel->GetEntityId().ToSpatialEntityId(),
				*RepData->Property->GetName(),
				Handle);
		}
	}
	if (!Update.field_remoterole().empty())
	{
		// field_remoterole
		uint16 Handle = 5;
		const FRepHandleData* RepData = &HandleToPropertyMap[Handle];
		if (bIsServer || ConditionMap.IsRelevant(RepData->Condition))
		{
			// On the client, we need to swap Role/RemoteRole.
			if (!bIsServer)
			{
				Handle = 14;
				RepData = &HandleToPropertyMap[Handle];
			}

			uint8* PropertyData = RepData->GetPropertyData(reinterpret_cast<uint8*>(ActorChannel->Actor));
			TEnumAsByte<ENetRole> Value = *(reinterpret_cast<TEnumAsByte<ENetRole> const*>(PropertyData));

			Value = TEnumAsByte<ENetRole>(uint8((*Update.field_remoterole().data())));

			// Downgrade role from AutonomousProxy to SimulatedProxy if we aren't authoritative over
			// the server RPCs component.
			if (!bIsServer && Value == ROLE_AutonomousProxy && !bAutonomousProxy)
			{
				Value = ROLE_SimulatedProxy;
			}

			ApplyIncomingReplicatedPropertyUpdate(*RepData, ActorChannel->Actor, static_cast<const void*>(&Value), RepNotifies);

			UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received replicated property update. actor %s (%lld), property %s (handle %d)"),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ActorChannel->Actor->GetName(),
				ActorChannel->GetEntityId().ToSpatialEntityId(),
				*RepData->Property->GetName(),
				Handle);
		}
	}
	if (!Update.field_replicatedmovement().empty())
	{
		// field_replicatedmovement
		uint16 Handle = 6;
		const FRepHandleData* RepData = &HandleToPropertyMap[Handle];
		if (bIsServer || ConditionMap.IsRelevant(RepData->Condition))
		{
			uint8* PropertyData = RepData->GetPropertyData(reinterpret_cast<uint8*>(ActorChannel->Actor));
			FRepMovement Value = *(reinterpret_cast<FRepMovement const*>(PropertyData));

			{
				auto& ValueDataStr = (*Update.field_replicatedmovement().data());
				TArray<uint8> ValueData;
				ValueData.Append(reinterpret_cast<const uint8*>(ValueDataStr.data()), ValueDataStr.size());
				FMemoryReader ValueDataReader(ValueData);
				bool bSuccess = true;
				Value.NetSerialize(ValueDataReader, PackageMap, bSuccess);
				checkf(bSuccess, TEXT("NetSerialize on FRepMovement failed."));
			}

			ApplyIncomingReplicatedPropertyUpdate(*RepData, ActorChannel->Actor, static_cast<const void*>(&Value), RepNotifies);

			UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received replicated property update. actor %s (%lld), property %s (handle %d)"),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ActorChannel->Actor->GetName(),
				ActorChannel->GetEntityId().ToSpatialEntityId(),
				*RepData->Property->GetName(),
				Handle);
		}
	}
	if (!Update.field_attachmentreplication_attachparent().empty())
	{
		// field_attachmentreplication_attachparent
		uint16 Handle = 7;
		const FRepHandleData* RepData = &HandleToPropertyMap[Handle];
		if (bIsServer || ConditionMap.IsRelevant(RepData->Condition))
		{
			bool bWriteObjectProperty = true;
			uint8* PropertyData = RepData->GetPropertyData(reinterpret_cast<uint8*>(ActorChannel->Actor));
			AActor* Value = *(reinterpret_cast<AActor* const*>(PropertyData));

			{
				improbable::unreal::UnrealObjectRef ObjectRef = (*Update.field_attachmentreplication_attachparent().data());
				check(ObjectRef != SpatialConstants::UNRESOLVED_OBJECT_REF);
				if (ObjectRef == SpatialConstants::NULL_OBJECT_REF)
				{
					Value = nullptr;
				}
				else
				{
					FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(ObjectRef);
					if (NetGUID.IsValid())
					{
						UObject* Object_Raw = PackageMap->GetObjectFromNetGUID(NetGUID, true);
						checkf(Object_Raw, TEXT("An object ref %s should map to a valid object."), *ObjectRefToString(ObjectRef));
						checkf(Cast<AActor>(Object_Raw), TEXT("Object ref %s maps to object %s with the wrong class."), *ObjectRefToString(ObjectRef), *Object_Raw->GetFullName());
						Value = Cast<AActor>(Object_Raw);
					}
					else
					{
						UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: Received unresolved object property. Value: %s. actor %s (%lld), property %s (handle %d)"),
							*Interop->GetSpatialOS()->GetWorkerId(),
							*ObjectRefToString(ObjectRef),
							*ActorChannel->Actor->GetName(),
							ActorChannel->GetEntityId().ToSpatialEntityId(),
							*RepData->Property->GetName(),
							Handle);
						// A legal static object reference should never be unresolved.
						check(ObjectRef.path().empty());
						bWriteObjectProperty = false;
						Interop->QueueIncomingObjectRepUpdate_Internal(ObjectRef, ActorChannel, RepData);
					}
				}
			}

			if (bWriteObjectProperty)
			{
				ApplyIncomingReplicatedPropertyUpdate(*RepData, ActorChannel->Actor, static_cast<const void*>(&Value), RepNotifies);

				UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received replicated property update. actor %s (%lld), property %s (handle %d)"),
					*Interop->GetSpatialOS()->GetWorkerId(),
					*ActorChannel->Actor->GetName(),
					ActorChannel->GetEntityId().ToSpatialEntityId(),
					*RepData->Property->GetName(),
					Handle);
			}
		}
	}
	if (!Update.field_attachmentreplication_locationoffset().empty())
	{
		// field_attachmentreplication_locationoffset
		uint16 Handle = 8;
		const FRepHandleData* RepData = &HandleToPropertyMap[Handle];
		if (bIsServer || ConditionMap.IsRelevant(RepData->Condition))
		{
			uint8* PropertyData = RepData->GetPropertyData(reinterpret_cast<uint8*>(ActorChannel->Actor));
			FVector_NetQuantize100 Value = *(reinterpret_cast<FVector_NetQuantize100 const*>(PropertyData));

			{
				auto& ValueDataStr = (*Update.field_attachmentreplication_locationoffset().data());
				TArray<uint8> ValueData;
				ValueData.Append(reinterpret_cast<const uint8*>(ValueDataStr.data()), ValueDataStr.size());
				FMemoryReader ValueDataReader(ValueData);
				bool bSuccess = true;
				Value.NetSerialize(ValueDataReader, PackageMap, bSuccess);
				checkf(bSuccess, TEXT("NetSerialize on FVector_NetQuantize100 failed."));
			}

			ApplyIncomingReplicatedPropertyUpdate(*RepData, ActorChannel->Actor, static_cast<const void*>(&Value), RepNotifies);

			UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received replicated property update. actor %s (%lld), property %s (handle %d)"),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ActorChannel->Actor->GetName(),
				ActorChannel->GetEntityId().ToSpatialEntityId(),
				*RepData->Property->GetName(),
				Handle);
		}
	}
	if (!Update.field_attachmentreplication_relativescale3d().empty())
	{
		// field_attachmentreplication_relativescale3d
		uint16 Handle = 9;
		const FRepHandleData* RepData = &HandleToPropertyMap[Handle];
		if (bIsServer || ConditionMap.IsRelevant(RepData->Condition))
		{
			uint8* PropertyData = RepData->GetPropertyData(reinterpret_cast<uint8*>(ActorChannel->Actor));
			FVector_NetQuantize100 Value = *(reinterpret_cast<FVector_NetQuantize100 const*>(PropertyData));

			{
				auto& ValueDataStr = (*Update.field_attachmentreplication_relativescale3d().data());
				TArray<uint8> ValueData;
				ValueData.Append(reinterpret_cast<const uint8*>(ValueDataStr.data()), ValueDataStr.size());
				FMemoryReader ValueDataReader(ValueData);
				bool bSuccess = true;
				Value.NetSerialize(ValueDataReader, PackageMap, bSuccess);
				checkf(bSuccess, TEXT("NetSerialize on FVector_NetQuantize100 failed."));
			}

			ApplyIncomingReplicatedPropertyUpdate(*RepData, ActorChannel->Actor, static_cast<const void*>(&Value), RepNotifies);

			UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received replicated property update. actor %s (%lld), property %s (handle %d)"),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ActorChannel->Actor->GetName(),
				ActorChannel->GetEntityId().ToSpatialEntityId(),
				*RepData->Property->GetName(),
				Handle);
		}
	}
	if (!Update.field_attachmentreplication_rotationoffset().empty())
	{
		// field_attachmentreplication_rotationoffset
		uint16 Handle = 10;
		const FRepHandleData* RepData = &HandleToPropertyMap[Handle];
		if (bIsServer || ConditionMap.IsRelevant(RepData->Condition))
		{
			uint8* PropertyData = RepData->GetPropertyData(reinterpret_cast<uint8*>(ActorChannel->Actor));
			FRotator Value = *(reinterpret_cast<FRotator const*>(PropertyData));

			{
				auto& ValueDataStr = (*Update.field_attachmentreplication_rotationoffset().data());
				TArray<uint8> ValueData;
				ValueData.Append(reinterpret_cast<const uint8*>(ValueDataStr.data()), ValueDataStr.size());
				FMemoryReader ValueDataReader(ValueData);
				bool bSuccess = true;
				Value.NetSerialize(ValueDataReader, PackageMap, bSuccess);
				checkf(bSuccess, TEXT("NetSerialize on FRotator failed."));
			}

			ApplyIncomingReplicatedPropertyUpdate(*RepData, ActorChannel->Actor, static_cast<const void*>(&Value), RepNotifies);

			UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received replicated property update. actor %s (%lld), property %s (handle %d)"),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ActorChannel->Actor->GetName(),
				ActorChannel->GetEntityId().ToSpatialEntityId(),
				*RepData->Property->GetName(),
				Handle);
		}
	}
	if (!Update.field_attachmentreplication_attachsocket().empty())
	{
		// field_attachmentreplication_attachsocket
		uint16 Handle = 11;
		const FRepHandleData* RepData = &HandleToPropertyMap[Handle];
		if (bIsServer || ConditionMap.IsRelevant(RepData->Condition))
		{
			uint8* PropertyData = RepData->GetPropertyData(reinterpret_cast<uint8*>(ActorChannel->Actor));
			FName Value = *(reinterpret_cast<FName const*>(PropertyData));

			Value = FName(((*Update.field_attachmentreplication_attachsocket().data())).data());

			ApplyIncomingReplicatedPropertyUpdate(*RepData, ActorChannel->Actor, static_cast<const void*>(&Value), RepNotifies);

			UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received replicated property update. actor %s (%lld), property %s (handle %d)"),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ActorChannel->Actor->GetName(),
				ActorChannel->GetEntityId().ToSpatialEntityId(),
				*RepData->Property->GetName(),
				Handle);
		}
	}
	if (!Update.field_attachmentreplication_attachcomponent().empty())
	{
		// field_attachmentreplication_attachcomponent
		uint16 Handle = 12;
		const FRepHandleData* RepData = &HandleToPropertyMap[Handle];
		if (bIsServer || ConditionMap.IsRelevant(RepData->Condition))
		{
			bool bWriteObjectProperty = true;
			uint8* PropertyData = RepData->GetPropertyData(reinterpret_cast<uint8*>(ActorChannel->Actor));
			USceneComponent* Value = *(reinterpret_cast<USceneComponent* const*>(PropertyData));

			{
				improbable::unreal::UnrealObjectRef ObjectRef = (*Update.field_attachmentreplication_attachcomponent().data());
				check(ObjectRef != SpatialConstants::UNRESOLVED_OBJECT_REF);
				if (ObjectRef == SpatialConstants::NULL_OBJECT_REF)
				{
					Value = nullptr;
				}
				else
				{
					FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(ObjectRef);
					if (NetGUID.IsValid())
					{
						UObject* Object_Raw = PackageMap->GetObjectFromNetGUID(NetGUID, true);
						checkf(Object_Raw, TEXT("An object ref %s should map to a valid object."), *ObjectRefToString(ObjectRef));
						checkf(Cast<USceneComponent>(Object_Raw), TEXT("Object ref %s maps to object %s with the wrong class."), *ObjectRefToString(ObjectRef), *Object_Raw->GetFullName());
						Value = Cast<USceneComponent>(Object_Raw);
					}
					else
					{
						UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: Received unresolved object property. Value: %s. actor %s (%lld), property %s (handle %d)"),
							*Interop->GetSpatialOS()->GetWorkerId(),
							*ObjectRefToString(ObjectRef),
							*ActorChannel->Actor->GetName(),
							ActorChannel->GetEntityId().ToSpatialEntityId(),
							*RepData->Property->GetName(),
							Handle);
						// A legal static object reference should never be unresolved.
						check(ObjectRef.path().empty());
						bWriteObjectProperty = false;
						Interop->QueueIncomingObjectRepUpdate_Internal(ObjectRef, ActorChannel, RepData);
					}
				}
			}

			if (bWriteObjectProperty)
			{
				ApplyIncomingReplicatedPropertyUpdate(*RepData, ActorChannel->Actor, static_cast<const void*>(&Value), RepNotifies);

				UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received replicated property update. actor %s (%lld), property %s (handle %d)"),
					*Interop->GetSpatialOS()->GetWorkerId(),
					*ActorChannel->Actor->GetName(),
					ActorChannel->GetEntityId().ToSpatialEntityId(),
					*RepData->Property->GetName(),
					Handle);
			}
		}
	}
	if (!Update.field_owner().empty())
	{
		// field_owner
		uint16 Handle = 13;
		const FRepHandleData* RepData = &HandleToPropertyMap[Handle];
		if (bIsServer || ConditionMap.IsRelevant(RepData->Condition))
		{
			bool bWriteObjectProperty = true;
			uint8* PropertyData = RepData->GetPropertyData(reinterpret_cast<uint8*>(ActorChannel->Actor));
			AActor* Value = *(reinterpret_cast<AActor* const*>(PropertyData));

			{
				improbable::unreal::UnrealObjectRef ObjectRef = (*Update.field_owner().data());
				check(ObjectRef != SpatialConstants::UNRESOLVED_OBJECT_REF);
				if (ObjectRef == SpatialConstants::NULL_OBJECT_REF)
				{
					Value = nullptr;
				}
				else
				{
					FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(ObjectRef);
					if (NetGUID.IsValid())
					{
						UObject* Object_Raw = PackageMap->GetObjectFromNetGUID(NetGUID, true);
						checkf(Object_Raw, TEXT("An object ref %s should map to a valid object."), *ObjectRefToString(ObjectRef));
						checkf(Cast<AActor>(Object_Raw), TEXT("Object ref %s maps to object %s with the wrong class."), *ObjectRefToString(ObjectRef), *Object_Raw->GetFullName());
						Value = Cast<AActor>(Object_Raw);
					}
					else
					{
						UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: Received unresolved object property. Value: %s. actor %s (%lld), property %s (handle %d)"),
							*Interop->GetSpatialOS()->GetWorkerId(),
							*ObjectRefToString(ObjectRef),
							*ActorChannel->Actor->GetName(),
							ActorChannel->GetEntityId().ToSpatialEntityId(),
							*RepData->Property->GetName(),
							Handle);
						// A legal static object reference should never be unresolved.
						check(ObjectRef.path().empty());
						bWriteObjectProperty = false;
						Interop->QueueIncomingObjectRepUpdate_Internal(ObjectRef, ActorChannel, RepData);
					}
				}
			}

			if (bWriteObjectProperty)
			{
				ApplyIncomingReplicatedPropertyUpdate(*RepData, ActorChannel->Actor, static_cast<const void*>(&Value), RepNotifies);

				UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received replicated property update. actor %s (%lld), property %s (handle %d)"),
					*Interop->GetSpatialOS()->GetWorkerId(),
					*ActorChannel->Actor->GetName(),
					ActorChannel->GetEntityId().ToSpatialEntityId(),
					*RepData->Property->GetName(),
					Handle);
			}
		}
	}
	if (!Update.field_role().empty())
	{
		// field_role
		uint16 Handle = 14;
		const FRepHandleData* RepData = &HandleToPropertyMap[Handle];
		if (bIsServer || ConditionMap.IsRelevant(RepData->Condition))
		{
			// On the client, we need to swap Role/RemoteRole.
			if (!bIsServer)
			{
				Handle = 5;
				RepData = &HandleToPropertyMap[Handle];
			}

			uint8* PropertyData = RepData->GetPropertyData(reinterpret_cast<uint8*>(ActorChannel->Actor));
			TEnumAsByte<ENetRole> Value = *(reinterpret_cast<TEnumAsByte<ENetRole> const*>(PropertyData));

			Value = TEnumAsByte<ENetRole>(uint8((*Update.field_role().data())));

			ApplyIncomingReplicatedPropertyUpdate(*RepData, ActorChannel->Actor, static_cast<const void*>(&Value), RepNotifies);

			UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received replicated property update. actor %s (%lld), property %s (handle %d)"),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ActorChannel->Actor->GetName(),
				ActorChannel->GetEntityId().ToSpatialEntityId(),
				*RepData->Property->GetName(),
				Handle);
		}
	}
	if (!Update.field_instigator().empty())
	{
		// field_instigator
		uint16 Handle = 15;
		const FRepHandleData* RepData = &HandleToPropertyMap[Handle];
		if (bIsServer || ConditionMap.IsRelevant(RepData->Condition))
		{
			bool bWriteObjectProperty = true;
			uint8* PropertyData = RepData->GetPropertyData(reinterpret_cast<uint8*>(ActorChannel->Actor));
			APawn* Value = *(reinterpret_cast<APawn* const*>(PropertyData));

			{
				improbable::unreal::UnrealObjectRef ObjectRef = (*Update.field_instigator().data());
				check(ObjectRef != SpatialConstants::UNRESOLVED_OBJECT_REF);
				if (ObjectRef == SpatialConstants::NULL_OBJECT_REF)
				{
					Value = nullptr;
				}
				else
				{
					FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(ObjectRef);
					if (NetGUID.IsValid())
					{
						UObject* Object_Raw = PackageMap->GetObjectFromNetGUID(NetGUID, true);
						checkf(Object_Raw, TEXT("An object ref %s should map to a valid object."), *ObjectRefToString(ObjectRef));
						checkf(Cast<APawn>(Object_Raw), TEXT("Object ref %s maps to object %s with the wrong class."), *ObjectRefToString(ObjectRef), *Object_Raw->GetFullName());
						Value = Cast<APawn>(Object_Raw);
					}
					else
					{
						UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: Received unresolved object property. Value: %s. actor %s (%lld), property %s (handle %d)"),
							*Interop->GetSpatialOS()->GetWorkerId(),
							*ObjectRefToString(ObjectRef),
							*ActorChannel->Actor->GetName(),
							ActorChannel->GetEntityId().ToSpatialEntityId(),
							*RepData->Property->GetName(),
							Handle);
						// A legal static object reference should never be unresolved.
						check(ObjectRef.path().empty());
						bWriteObjectProperty = false;
						Interop->QueueIncomingObjectRepUpdate_Internal(ObjectRef, ActorChannel, RepData);
					}
				}
			}

			if (bWriteObjectProperty)
			{
				ApplyIncomingReplicatedPropertyUpdate(*RepData, ActorChannel->Actor, static_cast<const void*>(&Value), RepNotifies);

				UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received replicated property update. actor %s (%lld), property %s (handle %d)"),
					*Interop->GetSpatialOS()->GetWorkerId(),
					*ActorChannel->Actor->GetName(),
					ActorChannel->GetEntityId().ToSpatialEntityId(),
					*RepData->Property->GetName(),
					Handle);
			}
		}
	}
	if (!Update.field_playerstate().empty())
	{
		// field_playerstate
		uint16 Handle = 16;
		const FRepHandleData* RepData = &HandleToPropertyMap[Handle];
		if (bIsServer || ConditionMap.IsRelevant(RepData->Condition))
		{
			bool bWriteObjectProperty = true;
			uint8* PropertyData = RepData->GetPropertyData(reinterpret_cast<uint8*>(ActorChannel->Actor));
			APlayerState* Value = *(reinterpret_cast<APlayerState* const*>(PropertyData));

			{
				improbable::unreal::UnrealObjectRef ObjectRef = (*Update.field_playerstate().data());
				check(ObjectRef != SpatialConstants::UNRESOLVED_OBJECT_REF);
				if (ObjectRef == SpatialConstants::NULL_OBJECT_REF)
				{
					Value = nullptr;
				}
				else
				{
					FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(ObjectRef);
					if (NetGUID.IsValid())
					{
						UObject* Object_Raw = PackageMap->GetObjectFromNetGUID(NetGUID, true);
						checkf(Object_Raw, TEXT("An object ref %s should map to a valid object."), *ObjectRefToString(ObjectRef));
						checkf(Cast<APlayerState>(Object_Raw), TEXT("Object ref %s maps to object %s with the wrong class."), *ObjectRefToString(ObjectRef), *Object_Raw->GetFullName());
						Value = Cast<APlayerState>(Object_Raw);
					}
					else
					{
						UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: Received unresolved object property. Value: %s. actor %s (%lld), property %s (handle %d)"),
							*Interop->GetSpatialOS()->GetWorkerId(),
							*ObjectRefToString(ObjectRef),
							*ActorChannel->Actor->GetName(),
							ActorChannel->GetEntityId().ToSpatialEntityId(),
							*RepData->Property->GetName(),
							Handle);
						// A legal static object reference should never be unresolved.
						check(ObjectRef.path().empty());
						bWriteObjectProperty = false;
						Interop->QueueIncomingObjectRepUpdate_Internal(ObjectRef, ActorChannel, RepData);
					}
				}
			}

			if (bWriteObjectProperty)
			{
				ApplyIncomingReplicatedPropertyUpdate(*RepData, ActorChannel->Actor, static_cast<const void*>(&Value), RepNotifies);

				UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received replicated property update. actor %s (%lld), property %s (handle %d)"),
					*Interop->GetSpatialOS()->GetWorkerId(),
					*ActorChannel->Actor->GetName(),
					ActorChannel->GetEntityId().ToSpatialEntityId(),
					*RepData->Property->GetName(),
					Handle);
			}
		}
	}
	if (!Update.field_pawn().empty())
	{
		// field_pawn
		uint16 Handle = 17;
		const FRepHandleData* RepData = &HandleToPropertyMap[Handle];
		if (bIsServer || ConditionMap.IsRelevant(RepData->Condition))
		{
			bool bWriteObjectProperty = true;
			uint8* PropertyData = RepData->GetPropertyData(reinterpret_cast<uint8*>(ActorChannel->Actor));
			APawn* Value = *(reinterpret_cast<APawn* const*>(PropertyData));

			{
				improbable::unreal::UnrealObjectRef ObjectRef = (*Update.field_pawn().data());
				check(ObjectRef != SpatialConstants::UNRESOLVED_OBJECT_REF);
				if (ObjectRef == SpatialConstants::NULL_OBJECT_REF)
				{
					Value = nullptr;
				}
				else
				{
					FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(ObjectRef);
					if (NetGUID.IsValid())
					{
						UObject* Object_Raw = PackageMap->GetObjectFromNetGUID(NetGUID, true);
						checkf(Object_Raw, TEXT("An object ref %s should map to a valid object."), *ObjectRefToString(ObjectRef));
						checkf(Cast<APawn>(Object_Raw), TEXT("Object ref %s maps to object %s with the wrong class."), *ObjectRefToString(ObjectRef), *Object_Raw->GetFullName());
						Value = Cast<APawn>(Object_Raw);
					}
					else
					{
						UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: Received unresolved object property. Value: %s. actor %s (%lld), property %s (handle %d)"),
							*Interop->GetSpatialOS()->GetWorkerId(),
							*ObjectRefToString(ObjectRef),
							*ActorChannel->Actor->GetName(),
							ActorChannel->GetEntityId().ToSpatialEntityId(),
							*RepData->Property->GetName(),
							Handle);
						// A legal static object reference should never be unresolved.
						check(ObjectRef.path().empty());
						bWriteObjectProperty = false;
						Interop->QueueIncomingObjectRepUpdate_Internal(ObjectRef, ActorChannel, RepData);
					}
				}
			}

			if (bWriteObjectProperty)
			{
				ApplyIncomingReplicatedPropertyUpdate(*RepData, ActorChannel->Actor, static_cast<const void*>(&Value), RepNotifies);

				UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received replicated property update. actor %s (%lld), property %s (handle %d)"),
					*Interop->GetSpatialOS()->GetWorkerId(),
					*ActorChannel->Actor->GetName(),
					ActorChannel->GetEntityId().ToSpatialEntityId(),
					*RepData->Property->GetName(),
					Handle);
			}
		}
	}
	Interop->PostReceiveSpatialUpdate(ActorChannel, RepNotifies.Array());
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ReceiveUpdate_Migratable(USpatialActorChannel* ActorChannel, const improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerMigratableData::Update& Update) const
=======
void USpatialTypeBinding_PlayerController::ReceiveUpdate_Migratable(USpatialActorChannel* ActorChannel, const improbable::unreal::generated::playercontroller::PlayerControllerMigratableData::Update& Update) const
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
}

void USpatialTypeBinding_SampleGamePlayerController::ReceiveUpdate_NetMulticastRPCs(worker::EntityId EntityId, const improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerNetMulticastRPCs::Update& Update)
{
	for (auto& event : Update.testmulticast())
	{
		TestMulticast_OnRPCPayload(EntityId, event);
	}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
=======
void USpatialTypeBinding_PlayerController::ReceiveUpdate_NetMulticastRPCs(worker::EntityId EntityId, const improbable::unreal::generated::playercontroller::PlayerControllerNetMulticastRPCs::Update& Update)
{
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
}
void USpatialTypeBinding_SampleGamePlayerController::OnServerStartedVisualLogger_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventOnServerStartedVisualLogger_Parms StructuredParams = *static_cast<PlayerController_eventOnServerStartedVisualLogger_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC OnServerStartedVisualLogger queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::OnServerStartedVisualLoggerRequest RPCPayload;
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		RPCPayload.set_field_bislogging(StructuredParams.bIsLogging);
=======
		RPCPayload.set_field_bislogging0(StructuredParams.bIsLogging);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: OnServerStartedVisualLogger, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Onserverstartedvisuallogger>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Onserverstartedvisuallogger>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientWasKicked_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientWasKicked_Parms StructuredParams = *static_cast<PlayerController_eventClientWasKicked_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientWasKicked queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientWasKickedRequest RPCPayload;
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		// UNSUPPORTED UTextProperty (unhandled) RPCPayload.set_field_kickreason(StructuredParams.KickReason)
=======
		// UNSUPPORTED UTextProperty (unhandled) RPCPayload.set_field_kickreason0(StructuredParams.KickReason)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientWasKicked, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientwaskicked>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientwaskicked>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientVoiceHandshakeComplete_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	auto Sender = [this, Connection, TargetObject]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientVoiceHandshakeComplete queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientVoiceHandshakeCompleteRequest RPCPayload;

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientVoiceHandshakeComplete, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientvoicehandshakecomplete>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientvoicehandshakecomplete>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientUpdateMultipleLevelsStreamingStatus_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientUpdateMultipleLevelsStreamingStatus_Parms StructuredParams = *static_cast<PlayerController_eventClientUpdateMultipleLevelsStreamingStatus_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientUpdateMultipleLevelsStreamingStatus queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientUpdateMultipleLevelsStreamingStatusRequest RPCPayload;
		::worker::List<std::string> List;
		for(int i = 0; i < StructuredParams.LevelStatuses.Num(); i++)
		{
			TArray<uint8> ValueData;
			FMemoryWriter ValueDataWriter(ValueData);
			FUpdateLevelStreamingLevelStatus::StaticStruct()->SerializeBin(ValueDataWriter, reinterpret_cast<void*>(const_cast<FUpdateLevelStreamingLevelStatus*>(&StructuredParams.LevelStatuses[i])));
			List.emplace_back(std::string(reinterpret_cast<char*>(ValueData.GetData()), ValueData.Num()));
		}
		RPCPayload.set_field_levelstatuses0(List);

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientUpdateMultipleLevelsStreamingStatus, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientupdatemultiplelevelsstreamingstatus>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientupdatemultiplelevelsstreamingstatus>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientUpdateLevelStreamingStatus_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientUpdateLevelStreamingStatus_Parms StructuredParams = *static_cast<PlayerController_eventClientUpdateLevelStreamingStatus_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientUpdateLevelStreamingStatus queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientUpdateLevelStreamingStatusRequest RPCPayload;
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		RPCPayload.set_field_packagename(TCHAR_TO_UTF8(*StructuredParams.PackageName.ToString()));
		RPCPayload.set_field_bnewshouldbeloaded(StructuredParams.bNewShouldBeLoaded);
		RPCPayload.set_field_bnewshouldbevisible(StructuredParams.bNewShouldBeVisible);
		RPCPayload.set_field_bnewshouldblockonload(StructuredParams.bNewShouldBlockOnLoad);
		RPCPayload.set_field_lodindex(int32_t(StructuredParams.LODIndex));
=======
		RPCPayload.set_field_packagename0(TCHAR_TO_UTF8(*StructuredParams.PackageName.ToString()));
		RPCPayload.set_field_bnewshouldbeloaded0(StructuredParams.bNewShouldBeLoaded);
		RPCPayload.set_field_bnewshouldbevisible0(StructuredParams.bNewShouldBeVisible);
		RPCPayload.set_field_bnewshouldblockonload0(StructuredParams.bNewShouldBlockOnLoad);
		RPCPayload.set_field_lodindex0(int32_t(StructuredParams.LODIndex));
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientUpdateLevelStreamingStatus, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientupdatelevelstreamingstatus>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientupdatelevelstreamingstatus>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientUnmutePlayer_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientUnmutePlayer_Parms StructuredParams = *static_cast<PlayerController_eventClientUnmutePlayer_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientUnmutePlayer queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientUnmutePlayerRequest RPCPayload;
		{
			TArray<uint8> ValueData;
			FMemoryWriter ValueDataWriter(ValueData);
			bool bSuccess = true;
			(const_cast<FUniqueNetIdRepl&>(StructuredParams.PlayerId)).NetSerialize(ValueDataWriter, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FUniqueNetIdRepl failed."));
			RPCPayload.set_field_playerid0(std::string(reinterpret_cast<char*>(ValueData.GetData()), ValueData.Num()));
		}

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientUnmutePlayer, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientunmuteplayer>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientunmuteplayer>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientTravelInternal_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientTravelInternal_Parms StructuredParams = *static_cast<PlayerController_eventClientTravelInternal_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientTravelInternal queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientTravelInternalRequest RPCPayload;
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		RPCPayload.set_field_url(TCHAR_TO_UTF8(*StructuredParams.URL));
		RPCPayload.set_field_traveltype(uint32_t(StructuredParams.TravelType));
		RPCPayload.set_field_bseamless(StructuredParams.bSeamless);
		RPCPayload.set_field_mappackageguid_a(int32_t(StructuredParams.MapPackageGuid.A));
		RPCPayload.set_field_mappackageguid_b(int32_t(StructuredParams.MapPackageGuid.B));
		RPCPayload.set_field_mappackageguid_c(int32_t(StructuredParams.MapPackageGuid.C));
		RPCPayload.set_field_mappackageguid_d(int32_t(StructuredParams.MapPackageGuid.D));
=======
		RPCPayload.set_field_url0(TCHAR_TO_UTF8(*StructuredParams.URL));
		RPCPayload.set_field_traveltype0(uint32_t(StructuredParams.TravelType));
		RPCPayload.set_field_bseamless0(StructuredParams.bSeamless);
		RPCPayload.set_field_mappackageguid0_a(int32_t(StructuredParams.MapPackageGuid.A));
		RPCPayload.set_field_mappackageguid0_b(int32_t(StructuredParams.MapPackageGuid.B));
		RPCPayload.set_field_mappackageguid0_c(int32_t(StructuredParams.MapPackageGuid.C));
		RPCPayload.set_field_mappackageguid0_d(int32_t(StructuredParams.MapPackageGuid.D));
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientTravelInternal, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clienttravelinternal>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clienttravelinternal>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientTeamMessage_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientTeamMessage_Parms StructuredParams = *static_cast<PlayerController_eventClientTeamMessage_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientTeamMessage queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientTeamMessageRequest RPCPayload;
		if (StructuredParams.SenderPlayerState != nullptr)
		{
			FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromObject(StructuredParams.SenderPlayerState);
			if (!NetGUID.IsValid())
			{
				if (StructuredParams.SenderPlayerState->IsFullNameStableForNetworking())
				{
					NetGUID = PackageMap->ResolveStablyNamedObject(StructuredParams.SenderPlayerState);
				}
			}
			improbable::unreal::UnrealObjectRef ObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(NetGUID);
			if (ObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
			{
				UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientTeamMessage queued. StructuredParams.SenderPlayerState is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
				return {StructuredParams.SenderPlayerState};
			}
			else
			{
				RPCPayload.set_field_senderplayerstate0(ObjectRef);
			}
		}
		else
		{
			RPCPayload.set_field_senderplayerstate0(SpatialConstants::NULL_OBJECT_REF);
		}
		RPCPayload.set_field_s0(TCHAR_TO_UTF8(*StructuredParams.S));
		RPCPayload.set_field_type0(TCHAR_TO_UTF8(*StructuredParams.Type.ToString()));
		RPCPayload.set_field_msglifetime0(StructuredParams.MsgLifeTime);

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientTeamMessage, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientteammessage>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientteammessage>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientStopForceFeedback_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientStopForceFeedback_Parms StructuredParams = *static_cast<PlayerController_eventClientStopForceFeedback_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientStopForceFeedback queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientStopForceFeedbackRequest RPCPayload;
		if (StructuredParams.ForceFeedbackEffect != nullptr)
		{
			FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromObject(StructuredParams.ForceFeedbackEffect);
			if (!NetGUID.IsValid())
			{
				if (StructuredParams.ForceFeedbackEffect->IsFullNameStableForNetworking())
				{
					NetGUID = PackageMap->ResolveStablyNamedObject(StructuredParams.ForceFeedbackEffect);
				}
			}
			improbable::unreal::UnrealObjectRef ObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(NetGUID);
			if (ObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
			{
				UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientStopForceFeedback queued. StructuredParams.ForceFeedbackEffect is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
				return {StructuredParams.ForceFeedbackEffect};
			}
			else
			{
				RPCPayload.set_field_forcefeedbackeffect0(ObjectRef);
			}
		}
		else
		{
			RPCPayload.set_field_forcefeedbackeffect0(SpatialConstants::NULL_OBJECT_REF);
		}
		RPCPayload.set_field_tag0(TCHAR_TO_UTF8(*StructuredParams.Tag.ToString()));

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientStopForceFeedback, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientstopforcefeedback>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientstopforcefeedback>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientStopCameraShake_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientStopCameraShake_Parms StructuredParams = *static_cast<PlayerController_eventClientStopCameraShake_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientStopCameraShake queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientStopCameraShakeRequest RPCPayload;
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		RPCPayload.set_field_shake(PackageMap->GetHashFromStaticClass(StructuredParams.Shake));
		RPCPayload.set_field_bimmediately(StructuredParams.bImmediately);
=======
		RPCPayload.set_field_shake0(PackageMap->GetHashFromStaticClass(StructuredParams.Shake));
		RPCPayload.set_field_bimmediately0(StructuredParams.bImmediately);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientStopCameraShake, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientstopcamerashake>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientstopcamerashake>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientStopCameraAnim_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientStopCameraAnim_Parms StructuredParams = *static_cast<PlayerController_eventClientStopCameraAnim_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientStopCameraAnim queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientStopCameraAnimRequest RPCPayload;
		if (StructuredParams.AnimToStop != nullptr)
		{
			FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromObject(StructuredParams.AnimToStop);
			if (!NetGUID.IsValid())
			{
				if (StructuredParams.AnimToStop->IsFullNameStableForNetworking())
				{
					NetGUID = PackageMap->ResolveStablyNamedObject(StructuredParams.AnimToStop);
				}
			}
			improbable::unreal::UnrealObjectRef ObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(NetGUID);
			if (ObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
			{
				UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientStopCameraAnim queued. StructuredParams.AnimToStop is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
				return {StructuredParams.AnimToStop};
			}
			else
			{
				RPCPayload.set_field_animtostop0(ObjectRef);
			}
		}
		else
		{
			RPCPayload.set_field_animtostop0(SpatialConstants::NULL_OBJECT_REF);
		}

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientStopCameraAnim, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientstopcameraanim>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientstopcameraanim>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientStartOnlineSession_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	auto Sender = [this, Connection, TargetObject]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientStartOnlineSession queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientStartOnlineSessionRequest RPCPayload;

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientStartOnlineSession, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientstartonlinesession>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientstartonlinesession>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientSpawnCameraLensEffect_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientSpawnCameraLensEffect_Parms StructuredParams = *static_cast<PlayerController_eventClientSpawnCameraLensEffect_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientSpawnCameraLensEffect queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientSpawnCameraLensEffectRequest RPCPayload;
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		RPCPayload.set_field_lenseffectemitterclass(PackageMap->GetHashFromStaticClass(StructuredParams.LensEffectEmitterClass));
=======
		RPCPayload.set_field_lenseffectemitterclass0(PackageMap->GetHashFromStaticClass(StructuredParams.LensEffectEmitterClass));
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientSpawnCameraLensEffect, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientspawncameralenseffect>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientspawncameralenseffect>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ false);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientSetViewTarget_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientSetViewTarget_Parms StructuredParams = *static_cast<PlayerController_eventClientSetViewTarget_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientSetViewTarget queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientSetViewTargetRequest RPCPayload;
		if (StructuredParams.A != nullptr)
		{
			FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromObject(StructuredParams.A);
			if (!NetGUID.IsValid())
			{
				if (StructuredParams.A->IsFullNameStableForNetworking())
				{
					NetGUID = PackageMap->ResolveStablyNamedObject(StructuredParams.A);
				}
			}
			improbable::unreal::UnrealObjectRef ObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(NetGUID);
			if (ObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
			{
				UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientSetViewTarget queued. StructuredParams.A is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
				return {StructuredParams.A};
			}
			else
			{
				RPCPayload.set_field_a0(ObjectRef);
			}
		}
		else
		{
			RPCPayload.set_field_a0(SpatialConstants::NULL_OBJECT_REF);
		}
		RPCPayload.set_field_transitionparams0_blendtime(StructuredParams.TransitionParams.BlendTime);
		RPCPayload.set_field_transitionparams0_blendfunction(uint32_t(StructuredParams.TransitionParams.BlendFunction));
		RPCPayload.set_field_transitionparams0_blendexp(StructuredParams.TransitionParams.BlendExp);
		RPCPayload.set_field_transitionparams0_blockoutgoing(StructuredParams.TransitionParams.bLockOutgoing);

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientSetViewTarget, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetviewtarget>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetviewtarget>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientSetSpectatorWaiting_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientSetSpectatorWaiting_Parms StructuredParams = *static_cast<PlayerController_eventClientSetSpectatorWaiting_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientSetSpectatorWaiting queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientSetSpectatorWaitingRequest RPCPayload;
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		RPCPayload.set_field_bwaiting(StructuredParams.bWaiting);
=======
		RPCPayload.set_field_bwaiting0(StructuredParams.bWaiting);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientSetSpectatorWaiting, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetspectatorwaiting>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetspectatorwaiting>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientSetHUD_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientSetHUD_Parms StructuredParams = *static_cast<PlayerController_eventClientSetHUD_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientSetHUD queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientSetHUDRequest RPCPayload;
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		RPCPayload.set_field_newhudclass(PackageMap->GetHashFromStaticClass(StructuredParams.NewHUDClass));
=======
		RPCPayload.set_field_newhudclass0(PackageMap->GetHashFromStaticClass(StructuredParams.NewHUDClass));
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientSetHUD, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsethud>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsethud>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientSetForceMipLevelsToBeResident_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientSetForceMipLevelsToBeResident_Parms StructuredParams = *static_cast<PlayerController_eventClientSetForceMipLevelsToBeResident_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientSetForceMipLevelsToBeResident queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientSetForceMipLevelsToBeResidentRequest RPCPayload;
		if (StructuredParams.Material != nullptr)
		{
			FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromObject(StructuredParams.Material);
			if (!NetGUID.IsValid())
			{
				if (StructuredParams.Material->IsFullNameStableForNetworking())
				{
					NetGUID = PackageMap->ResolveStablyNamedObject(StructuredParams.Material);
				}
			}
			improbable::unreal::UnrealObjectRef ObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(NetGUID);
			if (ObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
			{
				UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientSetForceMipLevelsToBeResident queued. StructuredParams.Material is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
				return {StructuredParams.Material};
			}
			else
			{
				RPCPayload.set_field_material0(ObjectRef);
			}
		}
		else
		{
			RPCPayload.set_field_material0(SpatialConstants::NULL_OBJECT_REF);
		}
		RPCPayload.set_field_forceduration0(StructuredParams.ForceDuration);
		RPCPayload.set_field_cinematictexturegroups0(int32_t(StructuredParams.CinematicTextureGroups));

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientSetForceMipLevelsToBeResident, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetforcemiplevelstoberesident>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetforcemiplevelstoberesident>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientSetCinematicMode_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientSetCinematicMode_Parms StructuredParams = *static_cast<PlayerController_eventClientSetCinematicMode_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientSetCinematicMode queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientSetCinematicModeRequest RPCPayload;
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		RPCPayload.set_field_bincinematicmode(StructuredParams.bInCinematicMode);
		RPCPayload.set_field_baffectsmovement(StructuredParams.bAffectsMovement);
		RPCPayload.set_field_baffectsturning(StructuredParams.bAffectsTurning);
		RPCPayload.set_field_baffectshud(StructuredParams.bAffectsHUD);
=======
		RPCPayload.set_field_bincinematicmode0(StructuredParams.bInCinematicMode);
		RPCPayload.set_field_baffectsmovement0(StructuredParams.bAffectsMovement);
		RPCPayload.set_field_baffectsturning0(StructuredParams.bAffectsTurning);
		RPCPayload.set_field_baffectshud0(StructuredParams.bAffectsHUD);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientSetCinematicMode, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetcinematicmode>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetcinematicmode>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientSetCameraMode_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientSetCameraMode_Parms StructuredParams = *static_cast<PlayerController_eventClientSetCameraMode_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientSetCameraMode queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientSetCameraModeRequest RPCPayload;
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		RPCPayload.set_field_newcammode(TCHAR_TO_UTF8(*StructuredParams.NewCamMode.ToString()));
=======
		RPCPayload.set_field_newcammode0(TCHAR_TO_UTF8(*StructuredParams.NewCamMode.ToString()));
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientSetCameraMode, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetcameramode>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetcameramode>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientSetCameraFade_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientSetCameraFade_Parms StructuredParams = *static_cast<PlayerController_eventClientSetCameraFade_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientSetCameraFade queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientSetCameraFadeRequest RPCPayload;
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		RPCPayload.set_field_benablefading(StructuredParams.bEnableFading);
		RPCPayload.set_field_fadecolor_b(uint32_t(StructuredParams.FadeColor.B));
		RPCPayload.set_field_fadecolor_g(uint32_t(StructuredParams.FadeColor.G));
		RPCPayload.set_field_fadecolor_r(uint32_t(StructuredParams.FadeColor.R));
		RPCPayload.set_field_fadecolor_a(uint32_t(StructuredParams.FadeColor.A));
=======
		RPCPayload.set_field_benablefading0(StructuredParams.bEnableFading);
		RPCPayload.set_field_fadecolor0_b(uint32_t(StructuredParams.FadeColor.B));
		RPCPayload.set_field_fadecolor0_g(uint32_t(StructuredParams.FadeColor.G));
		RPCPayload.set_field_fadecolor0_r(uint32_t(StructuredParams.FadeColor.R));
		RPCPayload.set_field_fadecolor0_a(uint32_t(StructuredParams.FadeColor.A));
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		{
			TArray<uint8> ValueData;
			FMemoryWriter ValueDataWriter(ValueData);
			bool bSuccess = true;
			(const_cast<FVector2D&>(StructuredParams.FadeAlpha)).NetSerialize(ValueDataWriter, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FVector2D failed."));
			RPCPayload.set_field_fadealpha0(std::string(reinterpret_cast<char*>(ValueData.GetData()), ValueData.Num()));
		}
		RPCPayload.set_field_fadetime0(StructuredParams.FadeTime);
		RPCPayload.set_field_bfadeaudio0(StructuredParams.bFadeAudio);

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientSetCameraFade, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetcamerafade>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetcamerafade>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientSetBlockOnAsyncLoading_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	auto Sender = [this, Connection, TargetObject]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientSetBlockOnAsyncLoading queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientSetBlockOnAsyncLoadingRequest RPCPayload;

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientSetBlockOnAsyncLoading, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetblockonasyncloading>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetblockonasyncloading>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientReturnToMainMenuWithTextReason_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientReturnToMainMenuWithTextReason_Parms StructuredParams = *static_cast<PlayerController_eventClientReturnToMainMenuWithTextReason_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientReturnToMainMenuWithTextReason queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientReturnToMainMenuWithTextReasonRequest RPCPayload;
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		// UNSUPPORTED UTextProperty (unhandled) RPCPayload.set_field_returnreason(StructuredParams.ReturnReason)
=======
		// UNSUPPORTED UTextProperty (unhandled) RPCPayload.set_field_returnreason0(StructuredParams.ReturnReason)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientReturnToMainMenuWithTextReason, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientreturntomainmenuwithtextreason>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientreturntomainmenuwithtextreason>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientReturnToMainMenu_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientReturnToMainMenu_Parms StructuredParams = *static_cast<PlayerController_eventClientReturnToMainMenu_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientReturnToMainMenu queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientReturnToMainMenuRequest RPCPayload;
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		RPCPayload.set_field_returnreason(TCHAR_TO_UTF8(*StructuredParams.ReturnReason));
=======
		RPCPayload.set_field_returnreason0(TCHAR_TO_UTF8(*StructuredParams.ReturnReason));
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientReturnToMainMenu, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientreturntomainmenu>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientreturntomainmenu>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientRetryClientRestart_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientRetryClientRestart_Parms StructuredParams = *static_cast<PlayerController_eventClientRetryClientRestart_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientRetryClientRestart queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientRetryClientRestartRequest RPCPayload;
		if (StructuredParams.NewPawn != nullptr)
		{
			FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromObject(StructuredParams.NewPawn);
			if (!NetGUID.IsValid())
			{
				if (StructuredParams.NewPawn->IsFullNameStableForNetworking())
				{
					NetGUID = PackageMap->ResolveStablyNamedObject(StructuredParams.NewPawn);
				}
			}
			improbable::unreal::UnrealObjectRef ObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(NetGUID);
			if (ObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
			{
				UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientRetryClientRestart queued. StructuredParams.NewPawn is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
				return {StructuredParams.NewPawn};
			}
			else
			{
				RPCPayload.set_field_newpawn0(ObjectRef);
			}
		}
		else
		{
			RPCPayload.set_field_newpawn0(SpatialConstants::NULL_OBJECT_REF);
		}

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientRetryClientRestart, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientretryclientrestart>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientretryclientrestart>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientRestart_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientRestart_Parms StructuredParams = *static_cast<PlayerController_eventClientRestart_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientRestart queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientRestartRequest RPCPayload;
		if (StructuredParams.NewPawn != nullptr)
		{
			FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromObject(StructuredParams.NewPawn);
			if (!NetGUID.IsValid())
			{
				if (StructuredParams.NewPawn->IsFullNameStableForNetworking())
				{
					NetGUID = PackageMap->ResolveStablyNamedObject(StructuredParams.NewPawn);
				}
			}
			improbable::unreal::UnrealObjectRef ObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(NetGUID);
			if (ObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
			{
				UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientRestart queued. StructuredParams.NewPawn is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
				return {StructuredParams.NewPawn};
			}
			else
			{
				RPCPayload.set_field_newpawn0(ObjectRef);
			}
		}
		else
		{
			RPCPayload.set_field_newpawn0(SpatialConstants::NULL_OBJECT_REF);
		}

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientRestart, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientrestart>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientrestart>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientReset_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	auto Sender = [this, Connection, TargetObject]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientReset queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientResetRequest RPCPayload;

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientReset, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientreset>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientreset>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientRepObjRef_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientRepObjRef_Parms StructuredParams = *static_cast<PlayerController_eventClientRepObjRef_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientRepObjRef queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientRepObjRefRequest RPCPayload;
		if (StructuredParams.Object != nullptr)
		{
			FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromObject(StructuredParams.Object);
			if (!NetGUID.IsValid())
			{
				if (StructuredParams.Object->IsFullNameStableForNetworking())
				{
					NetGUID = PackageMap->ResolveStablyNamedObject(StructuredParams.Object);
				}
			}
			improbable::unreal::UnrealObjectRef ObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(NetGUID);
			if (ObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
			{
				UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientRepObjRef queued. StructuredParams.Object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
				return {StructuredParams.Object};
			}
			else
			{
				RPCPayload.set_field_object0(ObjectRef);
			}
		}
		else
		{
			RPCPayload.set_field_object0(SpatialConstants::NULL_OBJECT_REF);
		}

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientRepObjRef, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientrepobjref>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientrepobjref>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientReceiveLocalizedMessage_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientReceiveLocalizedMessage_Parms StructuredParams = *static_cast<PlayerController_eventClientReceiveLocalizedMessage_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientReceiveLocalizedMessage queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientReceiveLocalizedMessageRequest RPCPayload;
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		RPCPayload.set_field_message(PackageMap->GetHashFromStaticClass(StructuredParams.Message));
		RPCPayload.set_field_switch(int32_t(StructuredParams.Switch));
=======
		RPCPayload.set_field_message0(PackageMap->GetHashFromStaticClass(StructuredParams.Message));
		RPCPayload.set_field_switch0(int32_t(StructuredParams.Switch));
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		if (StructuredParams.RelatedPlayerState_1 != nullptr)
		{
			FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromObject(StructuredParams.RelatedPlayerState_1);
			if (!NetGUID.IsValid())
			{
				if (StructuredParams.RelatedPlayerState_1->IsFullNameStableForNetworking())
				{
					NetGUID = PackageMap->ResolveStablyNamedObject(StructuredParams.RelatedPlayerState_1);
				}
			}
			improbable::unreal::UnrealObjectRef ObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(NetGUID);
			if (ObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
			{
				UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientReceiveLocalizedMessage queued. StructuredParams.RelatedPlayerState_1 is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
				return {StructuredParams.RelatedPlayerState_1};
			}
			else
			{
				RPCPayload.set_field_relatedplayerstate10(ObjectRef);
			}
		}
		else
		{
			RPCPayload.set_field_relatedplayerstate10(SpatialConstants::NULL_OBJECT_REF);
		}
		if (StructuredParams.RelatedPlayerState_2 != nullptr)
		{
			FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromObject(StructuredParams.RelatedPlayerState_2);
			if (!NetGUID.IsValid())
			{
				if (StructuredParams.RelatedPlayerState_2->IsFullNameStableForNetworking())
				{
					NetGUID = PackageMap->ResolveStablyNamedObject(StructuredParams.RelatedPlayerState_2);
				}
			}
			improbable::unreal::UnrealObjectRef ObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(NetGUID);
			if (ObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
			{
				UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientReceiveLocalizedMessage queued. StructuredParams.RelatedPlayerState_2 is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
				return {StructuredParams.RelatedPlayerState_2};
			}
			else
			{
				RPCPayload.set_field_relatedplayerstate20(ObjectRef);
			}
		}
		else
		{
			RPCPayload.set_field_relatedplayerstate20(SpatialConstants::NULL_OBJECT_REF);
		}
		if (StructuredParams.OptionalObject != nullptr)
		{
			FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromObject(StructuredParams.OptionalObject);
			if (!NetGUID.IsValid())
			{
				if (StructuredParams.OptionalObject->IsFullNameStableForNetworking())
				{
					NetGUID = PackageMap->ResolveStablyNamedObject(StructuredParams.OptionalObject);
				}
			}
			improbable::unreal::UnrealObjectRef ObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(NetGUID);
			if (ObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
			{
				UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientReceiveLocalizedMessage queued. StructuredParams.OptionalObject is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
				return {StructuredParams.OptionalObject};
			}
			else
			{
				RPCPayload.set_field_optionalobject0(ObjectRef);
			}
		}
		else
		{
			RPCPayload.set_field_optionalobject0(SpatialConstants::NULL_OBJECT_REF);
		}

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientReceiveLocalizedMessage, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientreceivelocalizedmessage>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientreceivelocalizedmessage>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientPrestreamTextures_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientPrestreamTextures_Parms StructuredParams = *static_cast<PlayerController_eventClientPrestreamTextures_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientPrestreamTextures queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientPrestreamTexturesRequest RPCPayload;
		if (StructuredParams.ForcedActor != nullptr)
		{
			FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromObject(StructuredParams.ForcedActor);
			if (!NetGUID.IsValid())
			{
				if (StructuredParams.ForcedActor->IsFullNameStableForNetworking())
				{
					NetGUID = PackageMap->ResolveStablyNamedObject(StructuredParams.ForcedActor);
				}
			}
			improbable::unreal::UnrealObjectRef ObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(NetGUID);
			if (ObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
			{
				UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientPrestreamTextures queued. StructuredParams.ForcedActor is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
				return {StructuredParams.ForcedActor};
			}
			else
			{
				RPCPayload.set_field_forcedactor0(ObjectRef);
			}
		}
		else
		{
			RPCPayload.set_field_forcedactor0(SpatialConstants::NULL_OBJECT_REF);
		}
		RPCPayload.set_field_forceduration0(StructuredParams.ForceDuration);
		RPCPayload.set_field_benablestreaming0(StructuredParams.bEnableStreaming);
		RPCPayload.set_field_cinematictexturegroups0(int32_t(StructuredParams.CinematicTextureGroups));

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientPrestreamTextures, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientprestreamtextures>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientprestreamtextures>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientPrepareMapChange_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientPrepareMapChange_Parms StructuredParams = *static_cast<PlayerController_eventClientPrepareMapChange_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientPrepareMapChange queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientPrepareMapChangeRequest RPCPayload;
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		RPCPayload.set_field_levelname(TCHAR_TO_UTF8(*StructuredParams.LevelName.ToString()));
		RPCPayload.set_field_bfirst(StructuredParams.bFirst);
		RPCPayload.set_field_blast(StructuredParams.bLast);
=======
		RPCPayload.set_field_levelname0(TCHAR_TO_UTF8(*StructuredParams.LevelName.ToString()));
		RPCPayload.set_field_bfirst0(StructuredParams.bFirst);
		RPCPayload.set_field_blast0(StructuredParams.bLast);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientPrepareMapChange, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientpreparemapchange>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientpreparemapchange>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientPlaySoundAtLocation_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientPlaySoundAtLocation_Parms StructuredParams = *static_cast<PlayerController_eventClientPlaySoundAtLocation_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientPlaySoundAtLocation queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientPlaySoundAtLocationRequest RPCPayload;
		if (StructuredParams.Sound != nullptr)
		{
			FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromObject(StructuredParams.Sound);
			if (!NetGUID.IsValid())
			{
				if (StructuredParams.Sound->IsFullNameStableForNetworking())
				{
					NetGUID = PackageMap->ResolveStablyNamedObject(StructuredParams.Sound);
				}
			}
			improbable::unreal::UnrealObjectRef ObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(NetGUID);
			if (ObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
			{
				UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientPlaySoundAtLocation queued. StructuredParams.Sound is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
				return {StructuredParams.Sound};
			}
			else
			{
				RPCPayload.set_field_sound0(ObjectRef);
			}
		}
		else
		{
			RPCPayload.set_field_sound0(SpatialConstants::NULL_OBJECT_REF);
		}
		{
			TArray<uint8> ValueData;
			FMemoryWriter ValueDataWriter(ValueData);
			bool bSuccess = true;
			(const_cast<FVector&>(StructuredParams.Location)).NetSerialize(ValueDataWriter, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FVector failed."));
			RPCPayload.set_field_location0(std::string(reinterpret_cast<char*>(ValueData.GetData()), ValueData.Num()));
		}
		RPCPayload.set_field_volumemultiplier0(StructuredParams.VolumeMultiplier);
		RPCPayload.set_field_pitchmultiplier0(StructuredParams.PitchMultiplier);

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientPlaySoundAtLocation, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientplaysoundatlocation>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientplaysoundatlocation>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ false);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientPlaySound_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientPlaySound_Parms StructuredParams = *static_cast<PlayerController_eventClientPlaySound_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientPlaySound queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientPlaySoundRequest RPCPayload;
		if (StructuredParams.Sound != nullptr)
		{
			FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromObject(StructuredParams.Sound);
			if (!NetGUID.IsValid())
			{
				if (StructuredParams.Sound->IsFullNameStableForNetworking())
				{
					NetGUID = PackageMap->ResolveStablyNamedObject(StructuredParams.Sound);
				}
			}
			improbable::unreal::UnrealObjectRef ObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(NetGUID);
			if (ObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
			{
				UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientPlaySound queued. StructuredParams.Sound is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
				return {StructuredParams.Sound};
			}
			else
			{
				RPCPayload.set_field_sound0(ObjectRef);
			}
		}
		else
		{
			RPCPayload.set_field_sound0(SpatialConstants::NULL_OBJECT_REF);
		}
		RPCPayload.set_field_volumemultiplier0(StructuredParams.VolumeMultiplier);
		RPCPayload.set_field_pitchmultiplier0(StructuredParams.PitchMultiplier);

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientPlaySound, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientplaysound>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientplaysound>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ false);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientPlayForceFeedback_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientPlayForceFeedback_Parms StructuredParams = *static_cast<PlayerController_eventClientPlayForceFeedback_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientPlayForceFeedback queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientPlayForceFeedbackRequest RPCPayload;
		if (StructuredParams.ForceFeedbackEffect != nullptr)
		{
			FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromObject(StructuredParams.ForceFeedbackEffect);
			if (!NetGUID.IsValid())
			{
				if (StructuredParams.ForceFeedbackEffect->IsFullNameStableForNetworking())
				{
					NetGUID = PackageMap->ResolveStablyNamedObject(StructuredParams.ForceFeedbackEffect);
				}
			}
			improbable::unreal::UnrealObjectRef ObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(NetGUID);
			if (ObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
			{
				UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientPlayForceFeedback queued. StructuredParams.ForceFeedbackEffect is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
				return {StructuredParams.ForceFeedbackEffect};
			}
			else
			{
				RPCPayload.set_field_forcefeedbackeffect0(ObjectRef);
			}
		}
		else
		{
			RPCPayload.set_field_forcefeedbackeffect0(SpatialConstants::NULL_OBJECT_REF);
		}
		RPCPayload.set_field_blooping0(StructuredParams.bLooping);
		RPCPayload.set_field_bignoretimedilation0(StructuredParams.bIgnoreTimeDilation);
		RPCPayload.set_field_tag0(TCHAR_TO_UTF8(*StructuredParams.Tag.ToString()));

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientPlayForceFeedback, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientplayforcefeedback>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientplayforcefeedback>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ false);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientPlayCameraShake_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientPlayCameraShake_Parms StructuredParams = *static_cast<PlayerController_eventClientPlayCameraShake_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientPlayCameraShake queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientPlayCameraShakeRequest RPCPayload;
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		RPCPayload.set_field_shake(PackageMap->GetHashFromStaticClass(StructuredParams.Shake));
		RPCPayload.set_field_scale(StructuredParams.Scale);
		RPCPayload.set_field_playspace(uint32_t(StructuredParams.PlaySpace));
=======
		RPCPayload.set_field_shake0(PackageMap->GetHashFromStaticClass(StructuredParams.Shake));
		RPCPayload.set_field_scale0(StructuredParams.Scale);
		RPCPayload.set_field_playspace0(uint32_t(StructuredParams.PlaySpace));
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		{
			TArray<uint8> ValueData;
			FMemoryWriter ValueDataWriter(ValueData);
			bool bSuccess = true;
			(const_cast<FRotator&>(StructuredParams.UserPlaySpaceRot)).NetSerialize(ValueDataWriter, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FRotator failed."));
			RPCPayload.set_field_userplayspacerot0(std::string(reinterpret_cast<char*>(ValueData.GetData()), ValueData.Num()));
		}

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientPlayCameraShake, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientplaycamerashake>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientplaycamerashake>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ false);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientPlayCameraAnim_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientPlayCameraAnim_Parms StructuredParams = *static_cast<PlayerController_eventClientPlayCameraAnim_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientPlayCameraAnim queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientPlayCameraAnimRequest RPCPayload;
		if (StructuredParams.AnimToPlay != nullptr)
		{
			FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromObject(StructuredParams.AnimToPlay);
			if (!NetGUID.IsValid())
			{
				if (StructuredParams.AnimToPlay->IsFullNameStableForNetworking())
				{
					NetGUID = PackageMap->ResolveStablyNamedObject(StructuredParams.AnimToPlay);
				}
			}
			improbable::unreal::UnrealObjectRef ObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(NetGUID);
			if (ObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
			{
				UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientPlayCameraAnim queued. StructuredParams.AnimToPlay is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
				return {StructuredParams.AnimToPlay};
			}
			else
			{
				RPCPayload.set_field_animtoplay0(ObjectRef);
			}
		}
		else
		{
			RPCPayload.set_field_animtoplay0(SpatialConstants::NULL_OBJECT_REF);
		}
		RPCPayload.set_field_scale0(StructuredParams.Scale);
		RPCPayload.set_field_rate0(StructuredParams.Rate);
		RPCPayload.set_field_blendintime0(StructuredParams.BlendInTime);
		RPCPayload.set_field_blendouttime0(StructuredParams.BlendOutTime);
		RPCPayload.set_field_bloop0(StructuredParams.bLoop);
		RPCPayload.set_field_brandomstarttime0(StructuredParams.bRandomStartTime);
		RPCPayload.set_field_space0(uint32_t(StructuredParams.Space));
		{
			TArray<uint8> ValueData;
			FMemoryWriter ValueDataWriter(ValueData);
			bool bSuccess = true;
			(const_cast<FRotator&>(StructuredParams.CustomPlaySpace)).NetSerialize(ValueDataWriter, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FRotator failed."));
			RPCPayload.set_field_customplayspace0(std::string(reinterpret_cast<char*>(ValueData.GetData()), ValueData.Num()));
		}

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientPlayCameraAnim, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientplaycameraanim>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientplaycameraanim>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ false);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientMutePlayer_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientMutePlayer_Parms StructuredParams = *static_cast<PlayerController_eventClientMutePlayer_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientMutePlayer queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientMutePlayerRequest RPCPayload;
		{
			TArray<uint8> ValueData;
			FMemoryWriter ValueDataWriter(ValueData);
			bool bSuccess = true;
			(const_cast<FUniqueNetIdRepl&>(StructuredParams.PlayerId)).NetSerialize(ValueDataWriter, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FUniqueNetIdRepl failed."));
			RPCPayload.set_field_playerid0(std::string(reinterpret_cast<char*>(ValueData.GetData()), ValueData.Num()));
		}

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientMutePlayer, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientmuteplayer>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientmuteplayer>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientMessage_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientMessage_Parms StructuredParams = *static_cast<PlayerController_eventClientMessage_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientMessage queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientMessageRequest RPCPayload;
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		RPCPayload.set_field_s(TCHAR_TO_UTF8(*StructuredParams.S));
		RPCPayload.set_field_type(TCHAR_TO_UTF8(*StructuredParams.Type.ToString()));
		RPCPayload.set_field_msglifetime(StructuredParams.MsgLifeTime);
=======
		RPCPayload.set_field_s0(TCHAR_TO_UTF8(*StructuredParams.S));
		RPCPayload.set_field_type0(TCHAR_TO_UTF8(*StructuredParams.Type.ToString()));
		RPCPayload.set_field_msglifetime0(StructuredParams.MsgLifeTime);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientMessage, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientmessage>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientmessage>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientIgnoreMoveInput_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientIgnoreMoveInput_Parms StructuredParams = *static_cast<PlayerController_eventClientIgnoreMoveInput_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientIgnoreMoveInput queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientIgnoreMoveInputRequest RPCPayload;
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		RPCPayload.set_field_bignore(StructuredParams.bIgnore);
=======
		RPCPayload.set_field_bignore0(StructuredParams.bIgnore);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientIgnoreMoveInput, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientignoremoveinput>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientignoremoveinput>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientIgnoreLookInput_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientIgnoreLookInput_Parms StructuredParams = *static_cast<PlayerController_eventClientIgnoreLookInput_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientIgnoreLookInput queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientIgnoreLookInputRequest RPCPayload;
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		RPCPayload.set_field_bignore(StructuredParams.bIgnore);
=======
		RPCPayload.set_field_bignore0(StructuredParams.bIgnore);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientIgnoreLookInput, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientignorelookinput>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientignorelookinput>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientGotoState_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientGotoState_Parms StructuredParams = *static_cast<PlayerController_eventClientGotoState_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientGotoState queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientGotoStateRequest RPCPayload;
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		RPCPayload.set_field_newstate(TCHAR_TO_UTF8(*StructuredParams.NewState.ToString()));
=======
		RPCPayload.set_field_newstate0(TCHAR_TO_UTF8(*StructuredParams.NewState.ToString()));
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientGotoState, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientgotostate>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientgotostate>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientGameEnded_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientGameEnded_Parms StructuredParams = *static_cast<PlayerController_eventClientGameEnded_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientGameEnded queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientGameEndedRequest RPCPayload;
		if (StructuredParams.EndGameFocus != nullptr)
		{
			FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromObject(StructuredParams.EndGameFocus);
			if (!NetGUID.IsValid())
			{
				if (StructuredParams.EndGameFocus->IsFullNameStableForNetworking())
				{
					NetGUID = PackageMap->ResolveStablyNamedObject(StructuredParams.EndGameFocus);
				}
			}
			improbable::unreal::UnrealObjectRef ObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(NetGUID);
			if (ObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
			{
				UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientGameEnded queued. StructuredParams.EndGameFocus is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
				return {StructuredParams.EndGameFocus};
			}
			else
			{
				RPCPayload.set_field_endgamefocus0(ObjectRef);
			}
		}
		else
		{
			RPCPayload.set_field_endgamefocus0(SpatialConstants::NULL_OBJECT_REF);
		}
		RPCPayload.set_field_biswinner0(StructuredParams.bIsWinner);

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientGameEnded, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientgameended>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientgameended>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientForceGarbageCollection_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	auto Sender = [this, Connection, TargetObject]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientForceGarbageCollection queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientForceGarbageCollectionRequest RPCPayload;

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientForceGarbageCollection, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientforcegarbagecollection>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientforcegarbagecollection>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientFlushLevelStreaming_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	auto Sender = [this, Connection, TargetObject]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientFlushLevelStreaming queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientFlushLevelStreamingRequest RPCPayload;

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientFlushLevelStreaming, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientflushlevelstreaming>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientflushlevelstreaming>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientEndOnlineSession_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	auto Sender = [this, Connection, TargetObject]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientEndOnlineSession queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientEndOnlineSessionRequest RPCPayload;

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientEndOnlineSession, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientendonlinesession>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientendonlinesession>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientEnableNetworkVoice_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientEnableNetworkVoice_Parms StructuredParams = *static_cast<PlayerController_eventClientEnableNetworkVoice_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientEnableNetworkVoice queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientEnableNetworkVoiceRequest RPCPayload;
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		RPCPayload.set_field_benable(StructuredParams.bEnable);
=======
		RPCPayload.set_field_benable0(StructuredParams.bEnable);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientEnableNetworkVoice, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientenablenetworkvoice>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientenablenetworkvoice>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientCommitMapChange_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	auto Sender = [this, Connection, TargetObject]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientCommitMapChange queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientCommitMapChangeRequest RPCPayload;

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientCommitMapChange, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientcommitmapchange>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientcommitmapchange>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientClearCameraLensEffects_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	auto Sender = [this, Connection, TargetObject]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientClearCameraLensEffects queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientClearCameraLensEffectsRequest RPCPayload;

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientClearCameraLensEffects, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientclearcameralenseffects>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientclearcameralenseffects>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientCapBandwidth_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientCapBandwidth_Parms StructuredParams = *static_cast<PlayerController_eventClientCapBandwidth_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientCapBandwidth queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientCapBandwidthRequest RPCPayload;
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		RPCPayload.set_field_cap(int32_t(StructuredParams.Cap));
=======
		RPCPayload.set_field_cap0(int32_t(StructuredParams.Cap));
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientCapBandwidth, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientcapbandwidth>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientcapbandwidth>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientCancelPendingMapChange_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	auto Sender = [this, Connection, TargetObject]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientCancelPendingMapChange queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientCancelPendingMapChangeRequest RPCPayload;

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientCancelPendingMapChange, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientcancelpendingmapchange>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientcancelpendingmapchange>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientAddTextureStreamingLoc_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventClientAddTextureStreamingLoc_Parms StructuredParams = *static_cast<PlayerController_eventClientAddTextureStreamingLoc_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientAddTextureStreamingLoc queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ClientAddTextureStreamingLocRequest RPCPayload;
		{
			TArray<uint8> ValueData;
			FMemoryWriter ValueDataWriter(ValueData);
			bool bSuccess = true;
			(const_cast<FVector&>(StructuredParams.InLoc)).NetSerialize(ValueDataWriter, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FVector failed."));
			RPCPayload.set_field_inloc0(std::string(reinterpret_cast<char*>(ValueData.GetData()), ValueData.Num()));
		}
		RPCPayload.set_field_duration0(StructuredParams.Duration);
		RPCPayload.set_field_boverridelocation0(StructuredParams.bOverrideLocation);

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientAddTextureStreamingLoc, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientaddtexturestreamingloc>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientaddtexturestreamingloc>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientSetRotation_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in Controller.generated.h (in a macro that is then put in Controller.h UCLASS macro)
	Controller_eventClientSetRotation_Parms StructuredParams = *static_cast<Controller_eventClientSetRotation_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientSetRotation queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::controller::ClientSetRotationRequest RPCPayload;
		{
			TArray<uint8> ValueData;
			FMemoryWriter ValueDataWriter(ValueData);
			bool bSuccess = true;
			(const_cast<FRotator&>(StructuredParams.NewRotation)).NetSerialize(ValueDataWriter, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FRotator failed."));
			RPCPayload.set_field_newrotation0(std::string(reinterpret_cast<char*>(ValueData.GetData()), ValueData.Num()));
		}
		RPCPayload.set_field_bresetcamera0(StructuredParams.bResetCamera);

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientSetRotation, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetrotation>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetrotation>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ClientSetLocation_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in Controller.generated.h (in a macro that is then put in Controller.h UCLASS macro)
	Controller_eventClientSetLocation_Parms StructuredParams = *static_cast<Controller_eventClientSetLocation_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ClientSetLocation queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::controller::ClientSetLocationRequest RPCPayload;
		{
			TArray<uint8> ValueData;
			FMemoryWriter ValueDataWriter(ValueData);
			bool bSuccess = true;
			(const_cast<FVector&>(StructuredParams.NewLocation)).NetSerialize(ValueDataWriter, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FVector failed."));
			RPCPayload.set_field_newlocation0(std::string(reinterpret_cast<char*>(ValueData.GetData()), ValueData.Num()));
		}
		{
			TArray<uint8> ValueData;
			FMemoryWriter ValueDataWriter(ValueData);
			bool bSuccess = true;
			(const_cast<FRotator&>(StructuredParams.NewRotation)).NetSerialize(ValueDataWriter, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FRotator failed."));
			RPCPayload.set_field_newrotation0(std::string(reinterpret_cast<char*>(ValueData.GetData()), ValueData.Num()));
		}

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ClientSetLocation, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetlocation>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetlocation>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::TestRPC_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	auto Sender = [this, Connection, TargetObject]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC TestRPC queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::samplegameplayercontroller::TestRPCRequest RPCPayload;

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: TestRPC, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Testrpc>(TargetObjectRef.entity(), RPCPayload, 0);
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ServerViewSelf_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventServerViewSelf_Parms StructuredParams = *static_cast<PlayerController_eventServerViewSelf_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ServerViewSelf queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ServerViewSelfRequest RPCPayload;
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		RPCPayload.set_field_transitionparams_blendtime(StructuredParams.TransitionParams.BlendTime);
		RPCPayload.set_field_transitionparams_blendfunction(uint32_t(StructuredParams.TransitionParams.BlendFunction));
		RPCPayload.set_field_transitionparams_blendexp(StructuredParams.TransitionParams.BlendExp);
		RPCPayload.set_field_transitionparams_blockoutgoing(StructuredParams.TransitionParams.bLockOutgoing);
=======
		RPCPayload.set_field_transitionparams0_blendtime(StructuredParams.TransitionParams.BlendTime);
		RPCPayload.set_field_transitionparams0_blendfunction(uint32_t(StructuredParams.TransitionParams.BlendFunction));
		RPCPayload.set_field_transitionparams0_blendexp(StructuredParams.TransitionParams.BlendExp);
		RPCPayload.set_field_transitionparams0_blockoutgoing(StructuredParams.TransitionParams.bLockOutgoing);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ServerViewSelf, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverviewself>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverviewself>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ false);
}
void USpatialTypeBinding_SampleGamePlayerController::ServerViewPrevPlayer_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	auto Sender = [this, Connection, TargetObject]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ServerViewPrevPlayer queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ServerViewPrevPlayerRequest RPCPayload;

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ServerViewPrevPlayer, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverviewprevplayer>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverviewprevplayer>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ false);
}
void USpatialTypeBinding_SampleGamePlayerController::ServerViewNextPlayer_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	auto Sender = [this, Connection, TargetObject]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ServerViewNextPlayer queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ServerViewNextPlayerRequest RPCPayload;

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ServerViewNextPlayer, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverviewnextplayer>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverviewnextplayer>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ false);
}
void USpatialTypeBinding_SampleGamePlayerController::ServerVerifyViewTarget_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	auto Sender = [this, Connection, TargetObject]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ServerVerifyViewTarget queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ServerVerifyViewTargetRequest RPCPayload;

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ServerVerifyViewTarget, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serververifyviewtarget>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serververifyviewtarget>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ServerUpdateMultipleLevelsVisibility_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventServerUpdateMultipleLevelsVisibility_Parms StructuredParams = *static_cast<PlayerController_eventServerUpdateMultipleLevelsVisibility_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ServerUpdateMultipleLevelsVisibility queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ServerUpdateMultipleLevelsVisibilityRequest RPCPayload;
		::worker::List<std::string> List;
		for(int i = 0; i < StructuredParams.LevelVisibilities.Num(); i++)
		{
			TArray<uint8> ValueData;
			FMemoryWriter ValueDataWriter(ValueData);
			FUpdateLevelVisibilityLevelInfo::StaticStruct()->SerializeBin(ValueDataWriter, reinterpret_cast<void*>(const_cast<FUpdateLevelVisibilityLevelInfo*>(&StructuredParams.LevelVisibilities[i])));
			List.emplace_back(std::string(reinterpret_cast<char*>(ValueData.GetData()), ValueData.Num()));
		}
		RPCPayload.set_field_levelvisibilities0(List);

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ServerUpdateMultipleLevelsVisibility, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverupdatemultiplelevelsvisibility>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverupdatemultiplelevelsvisibility>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ServerUpdateLevelVisibility_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventServerUpdateLevelVisibility_Parms StructuredParams = *static_cast<PlayerController_eventServerUpdateLevelVisibility_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ServerUpdateLevelVisibility queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ServerUpdateLevelVisibilityRequest RPCPayload;
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		RPCPayload.set_field_packagename(TCHAR_TO_UTF8(*StructuredParams.PackageName.ToString()));
		RPCPayload.set_field_bisvisible(StructuredParams.bIsVisible);
=======
		RPCPayload.set_field_packagename0(TCHAR_TO_UTF8(*StructuredParams.PackageName.ToString()));
		RPCPayload.set_field_bisvisible0(StructuredParams.bIsVisible);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ServerUpdateLevelVisibility, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverupdatelevelvisibility>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverupdatelevelvisibility>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ServerUpdateCamera_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventServerUpdateCamera_Parms StructuredParams = *static_cast<PlayerController_eventServerUpdateCamera_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ServerUpdateCamera queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ServerUpdateCameraRequest RPCPayload;
		{
			TArray<uint8> ValueData;
			FMemoryWriter ValueDataWriter(ValueData);
			bool bSuccess = true;
			(const_cast<FVector_NetQuantize&>(StructuredParams.CamLoc)).NetSerialize(ValueDataWriter, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FVector_NetQuantize failed."));
			RPCPayload.set_field_camloc0(std::string(reinterpret_cast<char*>(ValueData.GetData()), ValueData.Num()));
		}
		RPCPayload.set_field_campitchandyaw0(int32_t(StructuredParams.CamPitchAndYaw));

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ServerUpdateCamera, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverupdatecamera>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverupdatecamera>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ false);
}
void USpatialTypeBinding_SampleGamePlayerController::ServerUnmutePlayer_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventServerUnmutePlayer_Parms StructuredParams = *static_cast<PlayerController_eventServerUnmutePlayer_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ServerUnmutePlayer queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ServerUnmutePlayerRequest RPCPayload;
		{
			TArray<uint8> ValueData;
			FMemoryWriter ValueDataWriter(ValueData);
			bool bSuccess = true;
			(const_cast<FUniqueNetIdRepl&>(StructuredParams.PlayerId)).NetSerialize(ValueDataWriter, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FUniqueNetIdRepl failed."));
			RPCPayload.set_field_playerid0(std::string(reinterpret_cast<char*>(ValueData.GetData()), ValueData.Num()));
		}

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ServerUnmutePlayer, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverunmuteplayer>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverunmuteplayer>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ServerToggleAILogging_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	auto Sender = [this, Connection, TargetObject]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ServerToggleAILogging queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ServerToggleAILoggingRequest RPCPayload;

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ServerToggleAILogging, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Servertoggleailogging>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Servertoggleailogging>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ServerShortTimeout_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	auto Sender = [this, Connection, TargetObject]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ServerShortTimeout queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ServerShortTimeoutRequest RPCPayload;

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ServerShortTimeout, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Servershorttimeout>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Servershorttimeout>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ServerSetSpectatorWaiting_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventServerSetSpectatorWaiting_Parms StructuredParams = *static_cast<PlayerController_eventServerSetSpectatorWaiting_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ServerSetSpectatorWaiting queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ServerSetSpectatorWaitingRequest RPCPayload;
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		RPCPayload.set_field_bwaiting(StructuredParams.bWaiting);
=======
		RPCPayload.set_field_bwaiting0(StructuredParams.bWaiting);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ServerSetSpectatorWaiting, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serversetspectatorwaiting>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serversetspectatorwaiting>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ServerSetSpectatorLocation_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventServerSetSpectatorLocation_Parms StructuredParams = *static_cast<PlayerController_eventServerSetSpectatorLocation_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ServerSetSpectatorLocation queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ServerSetSpectatorLocationRequest RPCPayload;
		{
			TArray<uint8> ValueData;
			FMemoryWriter ValueDataWriter(ValueData);
			bool bSuccess = true;
			(const_cast<FVector&>(StructuredParams.NewLoc)).NetSerialize(ValueDataWriter, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FVector failed."));
			RPCPayload.set_field_newloc0(std::string(reinterpret_cast<char*>(ValueData.GetData()), ValueData.Num()));
		}
		{
			TArray<uint8> ValueData;
			FMemoryWriter ValueDataWriter(ValueData);
			bool bSuccess = true;
			(const_cast<FRotator&>(StructuredParams.NewRot)).NetSerialize(ValueDataWriter, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FRotator failed."));
			RPCPayload.set_field_newrot0(std::string(reinterpret_cast<char*>(ValueData.GetData()), ValueData.Num()));
		}

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ServerSetSpectatorLocation, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serversetspectatorlocation>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serversetspectatorlocation>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ false);
}
void USpatialTypeBinding_SampleGamePlayerController::ServerRestartPlayer_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	auto Sender = [this, Connection, TargetObject]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ServerRestartPlayer queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ServerRestartPlayerRequest RPCPayload;

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ServerRestartPlayer, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverrestartplayer>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverrestartplayer>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ServerPause_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	auto Sender = [this, Connection, TargetObject]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ServerPause queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ServerPauseRequest RPCPayload;

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ServerPause, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverpause>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverpause>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ServerNotifyLoadedWorld_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventServerNotifyLoadedWorld_Parms StructuredParams = *static_cast<PlayerController_eventServerNotifyLoadedWorld_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ServerNotifyLoadedWorld queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ServerNotifyLoadedWorldRequest RPCPayload;
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		RPCPayload.set_field_worldpackagename(TCHAR_TO_UTF8(*StructuredParams.WorldPackageName.ToString()));
=======
		RPCPayload.set_field_worldpackagename0(TCHAR_TO_UTF8(*StructuredParams.WorldPackageName.ToString()));
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ServerNotifyLoadedWorld, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Servernotifyloadedworld>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Servernotifyloadedworld>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ServerMutePlayer_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventServerMutePlayer_Parms StructuredParams = *static_cast<PlayerController_eventServerMutePlayer_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ServerMutePlayer queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ServerMutePlayerRequest RPCPayload;
		{
			TArray<uint8> ValueData;
			FMemoryWriter ValueDataWriter(ValueData);
			bool bSuccess = true;
			(const_cast<FUniqueNetIdRepl&>(StructuredParams.PlayerId)).NetSerialize(ValueDataWriter, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FUniqueNetIdRepl failed."));
			RPCPayload.set_field_playerid0(std::string(reinterpret_cast<char*>(ValueData.GetData()), ValueData.Num()));
		}

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ServerMutePlayer, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Servermuteplayer>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Servermuteplayer>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ServerCheckClientPossessionReliable_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	auto Sender = [this, Connection, TargetObject]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ServerCheckClientPossessionReliable queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ServerCheckClientPossessionReliableRequest RPCPayload;

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ServerCheckClientPossessionReliable, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Servercheckclientpossessionreliable>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Servercheckclientpossessionreliable>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ServerCheckClientPossession_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	auto Sender = [this, Connection, TargetObject]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ServerCheckClientPossession queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ServerCheckClientPossessionRequest RPCPayload;

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ServerCheckClientPossession, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Servercheckclientpossession>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Servercheckclientpossession>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ false);
}
void USpatialTypeBinding_SampleGamePlayerController::ServerChangeName_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventServerChangeName_Parms StructuredParams = *static_cast<PlayerController_eventServerChangeName_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ServerChangeName queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ServerChangeNameRequest RPCPayload;
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		RPCPayload.set_field_s(TCHAR_TO_UTF8(*StructuredParams.S));
=======
		RPCPayload.set_field_s0(TCHAR_TO_UTF8(*StructuredParams.S));
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ServerChangeName, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverchangename>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverchangename>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ServerCamera_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventServerCamera_Parms StructuredParams = *static_cast<PlayerController_eventServerCamera_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ServerCamera queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ServerCameraRequest RPCPayload;
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		RPCPayload.set_field_newmode(TCHAR_TO_UTF8(*StructuredParams.NewMode.ToString()));
=======
		RPCPayload.set_field_newmode0(TCHAR_TO_UTF8(*StructuredParams.NewMode.ToString()));
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ServerCamera, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Servercamera>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Servercamera>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
void USpatialTypeBinding_SampleGamePlayerController::ServerAcknowledgePossession_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
	PlayerController_eventServerAcknowledgePossession_Parms StructuredParams = *static_cast<PlayerController_eventServerAcknowledgePossession_Parms*>(Parameters);

	auto Sender = [this, Connection, TargetObject, StructuredParams]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ServerAcknowledgePossession queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::playercontroller::ServerAcknowledgePossessionRequest RPCPayload;
		if (StructuredParams.P != nullptr)
		{
			FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromObject(StructuredParams.P);
			if (!NetGUID.IsValid())
			{
				if (StructuredParams.P->IsFullNameStableForNetworking())
				{
					NetGUID = PackageMap->ResolveStablyNamedObject(StructuredParams.P);
				}
			}
			improbable::unreal::UnrealObjectRef ObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(NetGUID);
			if (ObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
			{
				UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC ServerAcknowledgePossession queued. StructuredParams.P is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
				return {StructuredParams.P};
			}
			else
			{
				RPCPayload.set_field_p0(ObjectRef);
			}
		}
		else
		{
			RPCPayload.set_field_p0(SpatialConstants::NULL_OBJECT_REF);
		}

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: ServerAcknowledgePossession, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serveracknowledgepossession>(TargetObjectRef.entity(), RPCPayload, 0);
=======
			auto RequestId = Connection->SendCommandRequest<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serveracknowledgepossession>(TargetObjectRef.entity(), RPCPayload, 0);
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
			return {RequestId.Id};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ true);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::TestMulticast_SendRPC(worker::Connection* const Connection, void* Parameters, UObject* TargetObject)
{
	auto Sender = [this, Connection, TargetObject]() mutable -> FRPCCommandRequestResult
	{
		// Resolve TargetObject.
		improbable::unreal::UnrealObjectRef TargetObjectRef = PackageMap->GetUnrealObjectRefFromNetGUID(PackageMap->GetNetGUIDFromObject(TargetObject));
		if (TargetObjectRef == SpatialConstants::UNRESOLVED_OBJECT_REF)
		{
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: RPC TestMulticast queued. Target object is unresolved."), *Interop->GetSpatialOS()->GetWorkerId());
			return {TargetObject};
		}

		// Build RPC Payload.
		improbable::unreal::generated::samplegameplayercontroller::TestMulticastRequest RPCPayload;

		// Send RPC
		RPCPayload.set_target_subobject_offset(TargetObjectRef.offset());
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Sending RPC: TestMulticast, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

			improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerNetMulticastRPCs::Update Update;
			Update.add_testmulticast(RPCPayload);
			checkf(Update.testmulticast().size() == 1, TEXT("TestMulticast_SendCommand: More than one event being sent"));
			Connection->SendComponentUpdate<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerNetMulticastRPCs>(TargetObjectRef.entity(), Update);
			return {};
	};
	Interop->InvokeRPCSendHandler_Internal(Sender, /*bReliable*/ false);
}
void USpatialTypeBinding_SampleGamePlayerController::OnServerStartedVisualLogger_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Onserverstartedvisuallogger>& Op)
=======
void USpatialTypeBinding_PlayerController::OnServerStartedVisualLogger_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Onserverstartedvisuallogger>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: OnServerStartedVisualLogger_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: OnServerStartedVisualLogger_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventOnServerStartedVisualLogger_Parms Parameters;

		// Extract from request data.
		Parameters.bIsLogging = Op.Request.field_bislogging0();

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: OnServerStartedVisualLogger, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("OnServerStartedVisualLogger"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: OnServerStartedVisualLogger_OnRPCPayload: Function not found. Object: %s, Function: OnServerStartedVisualLogger."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Onserverstartedvisuallogger>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Onserverstartedvisuallogger>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientWasKicked_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientwaskicked>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientWasKicked_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientwaskicked>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientWasKicked_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientWasKicked_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientWasKicked_Parms Parameters;

		// Extract from request data.
		// UNSUPPORTED UTextProperty (unhandled) Parameters.KickReason Op.Request.field_kickreason0()

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientWasKicked, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientWasKicked"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientWasKicked_OnRPCPayload: Function not found. Object: %s, Function: ClientWasKicked."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientwaskicked>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientwaskicked>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientVoiceHandshakeComplete_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientvoicehandshakecomplete>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientVoiceHandshakeComplete_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientvoicehandshakecomplete>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientVoiceHandshakeComplete_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientVoiceHandshakeComplete_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientVoiceHandshakeComplete, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientVoiceHandshakeComplete"))))
		{
			TargetObject->ProcessEvent(Function, nullptr);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientVoiceHandshakeComplete_OnRPCPayload: Function not found. Object: %s, Function: ClientVoiceHandshakeComplete."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientvoicehandshakecomplete>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientvoicehandshakecomplete>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientUpdateMultipleLevelsStreamingStatus_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientupdatemultiplelevelsstreamingstatus>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientUpdateMultipleLevelsStreamingStatus_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientupdatemultiplelevelsstreamingstatus>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientUpdateMultipleLevelsStreamingStatus_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientUpdateMultipleLevelsStreamingStatus_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientUpdateMultipleLevelsStreamingStatus_Parms Parameters;

		// Extract from request data.
		{
			auto& List = Op.Request.field_levelstatuses0();
			Parameters.LevelStatuses.SetNum(List.size());
			for(int i = 0; i < List.size(); i++)
			{
				auto& ValueDataStr = List[i];
				TArray<uint8> ValueData;
				ValueData.Append(reinterpret_cast<const uint8*>(ValueDataStr.data()), ValueDataStr.size());
				FMemoryReader ValueDataReader(ValueData);
				FUpdateLevelStreamingLevelStatus::StaticStruct()->SerializeBin(ValueDataReader, reinterpret_cast<void*>(&Parameters.LevelStatuses[i]));
			}
		}

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientUpdateMultipleLevelsStreamingStatus, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientUpdateMultipleLevelsStreamingStatus"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientUpdateMultipleLevelsStreamingStatus_OnRPCPayload: Function not found. Object: %s, Function: ClientUpdateMultipleLevelsStreamingStatus."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientupdatemultiplelevelsstreamingstatus>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientupdatemultiplelevelsstreamingstatus>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientUpdateLevelStreamingStatus_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientupdatelevelstreamingstatus>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientUpdateLevelStreamingStatus_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientupdatelevelstreamingstatus>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientUpdateLevelStreamingStatus_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientUpdateLevelStreamingStatus_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientUpdateLevelStreamingStatus_Parms Parameters;

		// Extract from request data.
		Parameters.PackageName = FName((Op.Request.field_packagename0()).data());
		Parameters.bNewShouldBeLoaded = Op.Request.field_bnewshouldbeloaded0();
		Parameters.bNewShouldBeVisible = Op.Request.field_bnewshouldbevisible0();
		Parameters.bNewShouldBlockOnLoad = Op.Request.field_bnewshouldblockonload0();
		Parameters.LODIndex = Op.Request.field_lodindex0();

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientUpdateLevelStreamingStatus, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientUpdateLevelStreamingStatus"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientUpdateLevelStreamingStatus_OnRPCPayload: Function not found. Object: %s, Function: ClientUpdateLevelStreamingStatus."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientupdatelevelstreamingstatus>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientupdatelevelstreamingstatus>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientUnmutePlayer_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientunmuteplayer>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientUnmutePlayer_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientunmuteplayer>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientUnmutePlayer_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientUnmutePlayer_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientUnmutePlayer_Parms Parameters;

		// Extract from request data.
		{
			auto& ValueDataStr = Op.Request.field_playerid0();
			TArray<uint8> ValueData;
			ValueData.Append(reinterpret_cast<const uint8*>(ValueDataStr.data()), ValueDataStr.size());
			FMemoryReader ValueDataReader(ValueData);
			bool bSuccess = true;
			Parameters.PlayerId.NetSerialize(ValueDataReader, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FUniqueNetIdRepl failed."));
		}

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientUnmutePlayer, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientUnmutePlayer"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientUnmutePlayer_OnRPCPayload: Function not found. Object: %s, Function: ClientUnmutePlayer."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientunmuteplayer>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientunmuteplayer>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientTravelInternal_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clienttravelinternal>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientTravelInternal_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clienttravelinternal>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientTravelInternal_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientTravelInternal_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientTravelInternal_Parms Parameters;

		// Extract from request data.
		Parameters.URL = FString(UTF8_TO_TCHAR(Op.Request.field_url0().c_str()));
		Parameters.TravelType = TEnumAsByte<ETravelType>(uint8(Op.Request.field_traveltype0()));
		Parameters.bSeamless = Op.Request.field_bseamless0();
		Parameters.MapPackageGuid.A = Op.Request.field_mappackageguid0_a();
		Parameters.MapPackageGuid.B = Op.Request.field_mappackageguid0_b();
		Parameters.MapPackageGuid.C = Op.Request.field_mappackageguid0_c();
		Parameters.MapPackageGuid.D = Op.Request.field_mappackageguid0_d();

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientTravelInternal, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientTravelInternal"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientTravelInternal_OnRPCPayload: Function not found. Object: %s, Function: ClientTravelInternal."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clienttravelinternal>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clienttravelinternal>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientTeamMessage_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientteammessage>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientTeamMessage_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientteammessage>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientTeamMessage_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientTeamMessage_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientTeamMessage_Parms Parameters;

		// Extract from request data.
		{
			improbable::unreal::UnrealObjectRef ObjectRef = Op.Request.field_senderplayerstate0();
			check(ObjectRef != SpatialConstants::UNRESOLVED_OBJECT_REF);
			if (ObjectRef == SpatialConstants::NULL_OBJECT_REF)
			{
				Parameters.SenderPlayerState = nullptr;
			}
			else
			{
				FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(ObjectRef);
				if (NetGUID.IsValid())
				{
					UObject* Object_Raw = PackageMap->GetObjectFromNetGUID(NetGUID, true);
					checkf(Object_Raw, TEXT("An object ref %s should map to a valid object."), *ObjectRefToString(ObjectRef));
					checkf(Cast<APlayerState>(Object_Raw), TEXT("Object ref %s maps to object %s with the wrong class."), *ObjectRefToString(ObjectRef), *Object_Raw->GetFullName());
					Parameters.SenderPlayerState = Cast<APlayerState>(Object_Raw);
				}
				else
				{
					// A legal static object reference should never be unresolved.
					checkf(ObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
					UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientTeamMessage_OnRPCPayload: Parameters.SenderPlayerState %s is not resolved on this worker."),
						*Interop->GetSpatialOS()->GetWorkerId(),
						*ObjectRefToString(ObjectRef));
					return {ObjectRef};
				}
			}
		}
		Parameters.S = FString(UTF8_TO_TCHAR(Op.Request.field_s0().c_str()));
		Parameters.Type = FName((Op.Request.field_type0()).data());
		Parameters.MsgLifeTime = Op.Request.field_msglifetime0();

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientTeamMessage, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientTeamMessage"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientTeamMessage_OnRPCPayload: Function not found. Object: %s, Function: ClientTeamMessage."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientteammessage>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientteammessage>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientStopForceFeedback_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientstopforcefeedback>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientStopForceFeedback_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientstopforcefeedback>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientStopForceFeedback_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientStopForceFeedback_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientStopForceFeedback_Parms Parameters;

		// Extract from request data.
		{
			improbable::unreal::UnrealObjectRef ObjectRef = Op.Request.field_forcefeedbackeffect0();
			check(ObjectRef != SpatialConstants::UNRESOLVED_OBJECT_REF);
			if (ObjectRef == SpatialConstants::NULL_OBJECT_REF)
			{
				Parameters.ForceFeedbackEffect = nullptr;
			}
			else
			{
				FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(ObjectRef);
				if (NetGUID.IsValid())
				{
					UObject* Object_Raw = PackageMap->GetObjectFromNetGUID(NetGUID, true);
					checkf(Object_Raw, TEXT("An object ref %s should map to a valid object."), *ObjectRefToString(ObjectRef));
					checkf(Cast<UForceFeedbackEffect>(Object_Raw), TEXT("Object ref %s maps to object %s with the wrong class."), *ObjectRefToString(ObjectRef), *Object_Raw->GetFullName());
					Parameters.ForceFeedbackEffect = Cast<UForceFeedbackEffect>(Object_Raw);
				}
				else
				{
					// A legal static object reference should never be unresolved.
					checkf(ObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
					UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientStopForceFeedback_OnRPCPayload: Parameters.ForceFeedbackEffect %s is not resolved on this worker."),
						*Interop->GetSpatialOS()->GetWorkerId(),
						*ObjectRefToString(ObjectRef));
					return {ObjectRef};
				}
			}
		}
		Parameters.Tag = FName((Op.Request.field_tag0()).data());

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientStopForceFeedback, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientStopForceFeedback"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientStopForceFeedback_OnRPCPayload: Function not found. Object: %s, Function: ClientStopForceFeedback."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientstopforcefeedback>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientstopforcefeedback>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientStopCameraShake_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientstopcamerashake>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientStopCameraShake_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientstopcamerashake>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientStopCameraShake_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientStopCameraShake_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientStopCameraShake_Parms Parameters;

		// Extract from request data.
		Parameters.Shake = PackageMap->GetStaticClassFromHash(Op.Request.field_shake0());
		Parameters.bImmediately = Op.Request.field_bimmediately0();

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientStopCameraShake, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientStopCameraShake"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientStopCameraShake_OnRPCPayload: Function not found. Object: %s, Function: ClientStopCameraShake."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientstopcamerashake>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientstopcamerashake>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientStopCameraAnim_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientstopcameraanim>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientStopCameraAnim_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientstopcameraanim>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientStopCameraAnim_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientStopCameraAnim_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientStopCameraAnim_Parms Parameters;

		// Extract from request data.
		{
			improbable::unreal::UnrealObjectRef ObjectRef = Op.Request.field_animtostop0();
			check(ObjectRef != SpatialConstants::UNRESOLVED_OBJECT_REF);
			if (ObjectRef == SpatialConstants::NULL_OBJECT_REF)
			{
				Parameters.AnimToStop = nullptr;
			}
			else
			{
				FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(ObjectRef);
				if (NetGUID.IsValid())
				{
					UObject* Object_Raw = PackageMap->GetObjectFromNetGUID(NetGUID, true);
					checkf(Object_Raw, TEXT("An object ref %s should map to a valid object."), *ObjectRefToString(ObjectRef));
					checkf(Cast<UCameraAnim>(Object_Raw), TEXT("Object ref %s maps to object %s with the wrong class."), *ObjectRefToString(ObjectRef), *Object_Raw->GetFullName());
					Parameters.AnimToStop = Cast<UCameraAnim>(Object_Raw);
				}
				else
				{
					// A legal static object reference should never be unresolved.
					checkf(ObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
					UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientStopCameraAnim_OnRPCPayload: Parameters.AnimToStop %s is not resolved on this worker."),
						*Interop->GetSpatialOS()->GetWorkerId(),
						*ObjectRefToString(ObjectRef));
					return {ObjectRef};
				}
			}
		}

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientStopCameraAnim, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientStopCameraAnim"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientStopCameraAnim_OnRPCPayload: Function not found. Object: %s, Function: ClientStopCameraAnim."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientstopcameraanim>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientstopcameraanim>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientStartOnlineSession_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientstartonlinesession>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientStartOnlineSession_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientstartonlinesession>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientStartOnlineSession_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientStartOnlineSession_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientStartOnlineSession, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientStartOnlineSession"))))
		{
			TargetObject->ProcessEvent(Function, nullptr);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientStartOnlineSession_OnRPCPayload: Function not found. Object: %s, Function: ClientStartOnlineSession."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientstartonlinesession>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientstartonlinesession>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientSpawnCameraLensEffect_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientspawncameralenseffect>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientSpawnCameraLensEffect_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientspawncameralenseffect>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientSpawnCameraLensEffect_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientSpawnCameraLensEffect_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientSpawnCameraLensEffect_Parms Parameters;

		// Extract from request data.
		Parameters.LensEffectEmitterClass = PackageMap->GetStaticClassFromHash(Op.Request.field_lenseffectemitterclass0());

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientSpawnCameraLensEffect, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientSpawnCameraLensEffect"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientSpawnCameraLensEffect_OnRPCPayload: Function not found. Object: %s, Function: ClientSpawnCameraLensEffect."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientspawncameralenseffect>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientspawncameralenseffect>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientSetViewTarget_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetviewtarget>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientSetViewTarget_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetviewtarget>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientSetViewTarget_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientSetViewTarget_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientSetViewTarget_Parms Parameters;

		// Extract from request data.
		{
			improbable::unreal::UnrealObjectRef ObjectRef = Op.Request.field_a0();
			check(ObjectRef != SpatialConstants::UNRESOLVED_OBJECT_REF);
			if (ObjectRef == SpatialConstants::NULL_OBJECT_REF)
			{
				Parameters.A = nullptr;
			}
			else
			{
				FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(ObjectRef);
				if (NetGUID.IsValid())
				{
					UObject* Object_Raw = PackageMap->GetObjectFromNetGUID(NetGUID, true);
					checkf(Object_Raw, TEXT("An object ref %s should map to a valid object."), *ObjectRefToString(ObjectRef));
					checkf(Cast<AActor>(Object_Raw), TEXT("Object ref %s maps to object %s with the wrong class."), *ObjectRefToString(ObjectRef), *Object_Raw->GetFullName());
					Parameters.A = Cast<AActor>(Object_Raw);
				}
				else
				{
					// A legal static object reference should never be unresolved.
					checkf(ObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
					UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientSetViewTarget_OnRPCPayload: Parameters.A %s is not resolved on this worker."),
						*Interop->GetSpatialOS()->GetWorkerId(),
						*ObjectRefToString(ObjectRef));
					return {ObjectRef};
				}
			}
		}
		Parameters.TransitionParams.BlendTime = Op.Request.field_transitionparams0_blendtime();
		Parameters.TransitionParams.BlendFunction = TEnumAsByte<EViewTargetBlendFunction>(uint8(Op.Request.field_transitionparams0_blendfunction()));
		Parameters.TransitionParams.BlendExp = Op.Request.field_transitionparams0_blendexp();
		Parameters.TransitionParams.bLockOutgoing = Op.Request.field_transitionparams0_blockoutgoing();

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientSetViewTarget, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientSetViewTarget"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientSetViewTarget_OnRPCPayload: Function not found. Object: %s, Function: ClientSetViewTarget."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetviewtarget>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetviewtarget>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientSetSpectatorWaiting_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetspectatorwaiting>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientSetSpectatorWaiting_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetspectatorwaiting>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientSetSpectatorWaiting_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientSetSpectatorWaiting_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientSetSpectatorWaiting_Parms Parameters;

		// Extract from request data.
		Parameters.bWaiting = Op.Request.field_bwaiting0();

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientSetSpectatorWaiting, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientSetSpectatorWaiting"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientSetSpectatorWaiting_OnRPCPayload: Function not found. Object: %s, Function: ClientSetSpectatorWaiting."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetspectatorwaiting>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetspectatorwaiting>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientSetHUD_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsethud>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientSetHUD_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsethud>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientSetHUD_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientSetHUD_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientSetHUD_Parms Parameters;

		// Extract from request data.
		Parameters.NewHUDClass = PackageMap->GetStaticClassFromHash(Op.Request.field_newhudclass0());

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientSetHUD, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientSetHUD"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientSetHUD_OnRPCPayload: Function not found. Object: %s, Function: ClientSetHUD."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsethud>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsethud>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientSetForceMipLevelsToBeResident_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetforcemiplevelstoberesident>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientSetForceMipLevelsToBeResident_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetforcemiplevelstoberesident>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientSetForceMipLevelsToBeResident_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientSetForceMipLevelsToBeResident_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientSetForceMipLevelsToBeResident_Parms Parameters;

		// Extract from request data.
		{
			improbable::unreal::UnrealObjectRef ObjectRef = Op.Request.field_material0();
			check(ObjectRef != SpatialConstants::UNRESOLVED_OBJECT_REF);
			if (ObjectRef == SpatialConstants::NULL_OBJECT_REF)
			{
				Parameters.Material = nullptr;
			}
			else
			{
				FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(ObjectRef);
				if (NetGUID.IsValid())
				{
					UObject* Object_Raw = PackageMap->GetObjectFromNetGUID(NetGUID, true);
					checkf(Object_Raw, TEXT("An object ref %s should map to a valid object."), *ObjectRefToString(ObjectRef));
					checkf(Cast<UMaterialInterface>(Object_Raw), TEXT("Object ref %s maps to object %s with the wrong class."), *ObjectRefToString(ObjectRef), *Object_Raw->GetFullName());
					Parameters.Material = Cast<UMaterialInterface>(Object_Raw);
				}
				else
				{
					// A legal static object reference should never be unresolved.
					checkf(ObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
					UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientSetForceMipLevelsToBeResident_OnRPCPayload: Parameters.Material %s is not resolved on this worker."),
						*Interop->GetSpatialOS()->GetWorkerId(),
						*ObjectRefToString(ObjectRef));
					return {ObjectRef};
				}
			}
		}
		Parameters.ForceDuration = Op.Request.field_forceduration0();
		Parameters.CinematicTextureGroups = Op.Request.field_cinematictexturegroups0();

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientSetForceMipLevelsToBeResident, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientSetForceMipLevelsToBeResident"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientSetForceMipLevelsToBeResident_OnRPCPayload: Function not found. Object: %s, Function: ClientSetForceMipLevelsToBeResident."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetforcemiplevelstoberesident>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetforcemiplevelstoberesident>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientSetCinematicMode_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetcinematicmode>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientSetCinematicMode_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetcinematicmode>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientSetCinematicMode_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientSetCinematicMode_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientSetCinematicMode_Parms Parameters;

		// Extract from request data.
		Parameters.bInCinematicMode = Op.Request.field_bincinematicmode0();
		Parameters.bAffectsMovement = Op.Request.field_baffectsmovement0();
		Parameters.bAffectsTurning = Op.Request.field_baffectsturning0();
		Parameters.bAffectsHUD = Op.Request.field_baffectshud0();

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientSetCinematicMode, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientSetCinematicMode"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientSetCinematicMode_OnRPCPayload: Function not found. Object: %s, Function: ClientSetCinematicMode."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetcinematicmode>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetcinematicmode>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientSetCameraMode_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetcameramode>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientSetCameraMode_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetcameramode>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientSetCameraMode_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientSetCameraMode_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientSetCameraMode_Parms Parameters;

		// Extract from request data.
		Parameters.NewCamMode = FName((Op.Request.field_newcammode0()).data());

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientSetCameraMode, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientSetCameraMode"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientSetCameraMode_OnRPCPayload: Function not found. Object: %s, Function: ClientSetCameraMode."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetcameramode>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetcameramode>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientSetCameraFade_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetcamerafade>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientSetCameraFade_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetcamerafade>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientSetCameraFade_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientSetCameraFade_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientSetCameraFade_Parms Parameters;

		// Extract from request data.
		Parameters.bEnableFading = Op.Request.field_benablefading0();
		Parameters.FadeColor.B = uint8(uint8(Op.Request.field_fadecolor0_b()));
		Parameters.FadeColor.G = uint8(uint8(Op.Request.field_fadecolor0_g()));
		Parameters.FadeColor.R = uint8(uint8(Op.Request.field_fadecolor0_r()));
		Parameters.FadeColor.A = uint8(uint8(Op.Request.field_fadecolor0_a()));
		{
			auto& ValueDataStr = Op.Request.field_fadealpha0();
			TArray<uint8> ValueData;
			ValueData.Append(reinterpret_cast<const uint8*>(ValueDataStr.data()), ValueDataStr.size());
			FMemoryReader ValueDataReader(ValueData);
			bool bSuccess = true;
			Parameters.FadeAlpha.NetSerialize(ValueDataReader, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FVector2D failed."));
		}
		Parameters.FadeTime = Op.Request.field_fadetime0();
		Parameters.bFadeAudio = Op.Request.field_bfadeaudio0();

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientSetCameraFade, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientSetCameraFade"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientSetCameraFade_OnRPCPayload: Function not found. Object: %s, Function: ClientSetCameraFade."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetcamerafade>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetcamerafade>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientSetBlockOnAsyncLoading_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetblockonasyncloading>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientSetBlockOnAsyncLoading_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetblockonasyncloading>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientSetBlockOnAsyncLoading_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientSetBlockOnAsyncLoading_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientSetBlockOnAsyncLoading, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientSetBlockOnAsyncLoading"))))
		{
			TargetObject->ProcessEvent(Function, nullptr);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientSetBlockOnAsyncLoading_OnRPCPayload: Function not found. Object: %s, Function: ClientSetBlockOnAsyncLoading."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetblockonasyncloading>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetblockonasyncloading>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientReturnToMainMenuWithTextReason_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientreturntomainmenuwithtextreason>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientReturnToMainMenuWithTextReason_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientreturntomainmenuwithtextreason>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientReturnToMainMenuWithTextReason_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientReturnToMainMenuWithTextReason_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientReturnToMainMenuWithTextReason_Parms Parameters;

		// Extract from request data.
		// UNSUPPORTED UTextProperty (unhandled) Parameters.ReturnReason Op.Request.field_returnreason0()

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientReturnToMainMenuWithTextReason, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientReturnToMainMenuWithTextReason"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientReturnToMainMenuWithTextReason_OnRPCPayload: Function not found. Object: %s, Function: ClientReturnToMainMenuWithTextReason."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientreturntomainmenuwithtextreason>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientreturntomainmenuwithtextreason>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientReturnToMainMenu_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientreturntomainmenu>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientReturnToMainMenu_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientreturntomainmenu>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientReturnToMainMenu_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientReturnToMainMenu_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientReturnToMainMenu_Parms Parameters;

		// Extract from request data.
		Parameters.ReturnReason = FString(UTF8_TO_TCHAR(Op.Request.field_returnreason0().c_str()));

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientReturnToMainMenu, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientReturnToMainMenu"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientReturnToMainMenu_OnRPCPayload: Function not found. Object: %s, Function: ClientReturnToMainMenu."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientreturntomainmenu>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientreturntomainmenu>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientRetryClientRestart_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientretryclientrestart>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientRetryClientRestart_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientretryclientrestart>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientRetryClientRestart_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientRetryClientRestart_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientRetryClientRestart_Parms Parameters;

		// Extract from request data.
		{
			improbable::unreal::UnrealObjectRef ObjectRef = Op.Request.field_newpawn0();
			check(ObjectRef != SpatialConstants::UNRESOLVED_OBJECT_REF);
			if (ObjectRef == SpatialConstants::NULL_OBJECT_REF)
			{
				Parameters.NewPawn = nullptr;
			}
			else
			{
				FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(ObjectRef);
				if (NetGUID.IsValid())
				{
					UObject* Object_Raw = PackageMap->GetObjectFromNetGUID(NetGUID, true);
					checkf(Object_Raw, TEXT("An object ref %s should map to a valid object."), *ObjectRefToString(ObjectRef));
					checkf(Cast<APawn>(Object_Raw), TEXT("Object ref %s maps to object %s with the wrong class."), *ObjectRefToString(ObjectRef), *Object_Raw->GetFullName());
					Parameters.NewPawn = Cast<APawn>(Object_Raw);
				}
				else
				{
					// A legal static object reference should never be unresolved.
					checkf(ObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
					UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientRetryClientRestart_OnRPCPayload: Parameters.NewPawn %s is not resolved on this worker."),
						*Interop->GetSpatialOS()->GetWorkerId(),
						*ObjectRefToString(ObjectRef));
					return {ObjectRef};
				}
			}
		}

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientRetryClientRestart, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientRetryClientRestart"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientRetryClientRestart_OnRPCPayload: Function not found. Object: %s, Function: ClientRetryClientRestart."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientretryclientrestart>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientretryclientrestart>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientRestart_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientrestart>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientRestart_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientrestart>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientRestart_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientRestart_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientRestart_Parms Parameters;

		// Extract from request data.
		{
			improbable::unreal::UnrealObjectRef ObjectRef = Op.Request.field_newpawn0();
			check(ObjectRef != SpatialConstants::UNRESOLVED_OBJECT_REF);
			if (ObjectRef == SpatialConstants::NULL_OBJECT_REF)
			{
				Parameters.NewPawn = nullptr;
			}
			else
			{
				FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(ObjectRef);
				if (NetGUID.IsValid())
				{
					UObject* Object_Raw = PackageMap->GetObjectFromNetGUID(NetGUID, true);
					checkf(Object_Raw, TEXT("An object ref %s should map to a valid object."), *ObjectRefToString(ObjectRef));
					checkf(Cast<APawn>(Object_Raw), TEXT("Object ref %s maps to object %s with the wrong class."), *ObjectRefToString(ObjectRef), *Object_Raw->GetFullName());
					Parameters.NewPawn = Cast<APawn>(Object_Raw);
				}
				else
				{
					// A legal static object reference should never be unresolved.
					checkf(ObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
					UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientRestart_OnRPCPayload: Parameters.NewPawn %s is not resolved on this worker."),
						*Interop->GetSpatialOS()->GetWorkerId(),
						*ObjectRefToString(ObjectRef));
					return {ObjectRef};
				}
			}
		}

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientRestart, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientRestart"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientRestart_OnRPCPayload: Function not found. Object: %s, Function: ClientRestart."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientrestart>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientrestart>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientReset_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientreset>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientReset_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientreset>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientReset_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientReset_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientReset, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientReset"))))
		{
			TargetObject->ProcessEvent(Function, nullptr);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientReset_OnRPCPayload: Function not found. Object: %s, Function: ClientReset."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientreset>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientreset>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientRepObjRef_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientrepobjref>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientRepObjRef_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientrepobjref>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientRepObjRef_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientRepObjRef_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientRepObjRef_Parms Parameters;

		// Extract from request data.
		{
			improbable::unreal::UnrealObjectRef ObjectRef = Op.Request.field_object0();
			check(ObjectRef != SpatialConstants::UNRESOLVED_OBJECT_REF);
			if (ObjectRef == SpatialConstants::NULL_OBJECT_REF)
			{
				Parameters.Object = nullptr;
			}
			else
			{
				FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(ObjectRef);
				if (NetGUID.IsValid())
				{
					UObject* Object_Raw = PackageMap->GetObjectFromNetGUID(NetGUID, true);
					checkf(Object_Raw, TEXT("An object ref %s should map to a valid object."), *ObjectRefToString(ObjectRef));
					checkf(Cast<UObject>(Object_Raw), TEXT("Object ref %s maps to object %s with the wrong class."), *ObjectRefToString(ObjectRef), *Object_Raw->GetFullName());
					Parameters.Object = Cast<UObject>(Object_Raw);
				}
				else
				{
					// A legal static object reference should never be unresolved.
					checkf(ObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
					UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientRepObjRef_OnRPCPayload: Parameters.Object %s is not resolved on this worker."),
						*Interop->GetSpatialOS()->GetWorkerId(),
						*ObjectRefToString(ObjectRef));
					return {ObjectRef};
				}
			}
		}

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientRepObjRef, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientRepObjRef"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientRepObjRef_OnRPCPayload: Function not found. Object: %s, Function: ClientRepObjRef."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientrepobjref>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientrepobjref>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientReceiveLocalizedMessage_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientreceivelocalizedmessage>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientReceiveLocalizedMessage_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientreceivelocalizedmessage>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientReceiveLocalizedMessage_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientReceiveLocalizedMessage_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientReceiveLocalizedMessage_Parms Parameters;

		// Extract from request data.
		Parameters.Message = PackageMap->GetStaticClassFromHash(Op.Request.field_message0());
		Parameters.Switch = Op.Request.field_switch0();
		{
			improbable::unreal::UnrealObjectRef ObjectRef = Op.Request.field_relatedplayerstate10();
			check(ObjectRef != SpatialConstants::UNRESOLVED_OBJECT_REF);
			if (ObjectRef == SpatialConstants::NULL_OBJECT_REF)
			{
				Parameters.RelatedPlayerState_1 = nullptr;
			}
			else
			{
				FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(ObjectRef);
				if (NetGUID.IsValid())
				{
					UObject* Object_Raw = PackageMap->GetObjectFromNetGUID(NetGUID, true);
					checkf(Object_Raw, TEXT("An object ref %s should map to a valid object."), *ObjectRefToString(ObjectRef));
					checkf(Cast<APlayerState>(Object_Raw), TEXT("Object ref %s maps to object %s with the wrong class."), *ObjectRefToString(ObjectRef), *Object_Raw->GetFullName());
					Parameters.RelatedPlayerState_1 = Cast<APlayerState>(Object_Raw);
				}
				else
				{
					// A legal static object reference should never be unresolved.
					checkf(ObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
					UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientReceiveLocalizedMessage_OnRPCPayload: Parameters.RelatedPlayerState_1 %s is not resolved on this worker."),
						*Interop->GetSpatialOS()->GetWorkerId(),
						*ObjectRefToString(ObjectRef));
					return {ObjectRef};
				}
			}
		}
		{
			improbable::unreal::UnrealObjectRef ObjectRef = Op.Request.field_relatedplayerstate20();
			check(ObjectRef != SpatialConstants::UNRESOLVED_OBJECT_REF);
			if (ObjectRef == SpatialConstants::NULL_OBJECT_REF)
			{
				Parameters.RelatedPlayerState_2 = nullptr;
			}
			else
			{
				FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(ObjectRef);
				if (NetGUID.IsValid())
				{
					UObject* Object_Raw = PackageMap->GetObjectFromNetGUID(NetGUID, true);
					checkf(Object_Raw, TEXT("An object ref %s should map to a valid object."), *ObjectRefToString(ObjectRef));
					checkf(Cast<APlayerState>(Object_Raw), TEXT("Object ref %s maps to object %s with the wrong class."), *ObjectRefToString(ObjectRef), *Object_Raw->GetFullName());
					Parameters.RelatedPlayerState_2 = Cast<APlayerState>(Object_Raw);
				}
				else
				{
					// A legal static object reference should never be unresolved.
					checkf(ObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
					UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientReceiveLocalizedMessage_OnRPCPayload: Parameters.RelatedPlayerState_2 %s is not resolved on this worker."),
						*Interop->GetSpatialOS()->GetWorkerId(),
						*ObjectRefToString(ObjectRef));
					return {ObjectRef};
				}
			}
		}
		{
			improbable::unreal::UnrealObjectRef ObjectRef = Op.Request.field_optionalobject0();
			check(ObjectRef != SpatialConstants::UNRESOLVED_OBJECT_REF);
			if (ObjectRef == SpatialConstants::NULL_OBJECT_REF)
			{
				Parameters.OptionalObject = nullptr;
			}
			else
			{
				FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(ObjectRef);
				if (NetGUID.IsValid())
				{
					UObject* Object_Raw = PackageMap->GetObjectFromNetGUID(NetGUID, true);
					checkf(Object_Raw, TEXT("An object ref %s should map to a valid object."), *ObjectRefToString(ObjectRef));
					checkf(Cast<UObject>(Object_Raw), TEXT("Object ref %s maps to object %s with the wrong class."), *ObjectRefToString(ObjectRef), *Object_Raw->GetFullName());
					Parameters.OptionalObject = Cast<UObject>(Object_Raw);
				}
				else
				{
					// A legal static object reference should never be unresolved.
					checkf(ObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
					UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientReceiveLocalizedMessage_OnRPCPayload: Parameters.OptionalObject %s is not resolved on this worker."),
						*Interop->GetSpatialOS()->GetWorkerId(),
						*ObjectRefToString(ObjectRef));
					return {ObjectRef};
				}
			}
		}

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientReceiveLocalizedMessage, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientReceiveLocalizedMessage"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientReceiveLocalizedMessage_OnRPCPayload: Function not found. Object: %s, Function: ClientReceiveLocalizedMessage."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientreceivelocalizedmessage>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientreceivelocalizedmessage>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientPrestreamTextures_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientprestreamtextures>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientPrestreamTextures_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientprestreamtextures>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientPrestreamTextures_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientPrestreamTextures_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientPrestreamTextures_Parms Parameters;

		// Extract from request data.
		{
			improbable::unreal::UnrealObjectRef ObjectRef = Op.Request.field_forcedactor0();
			check(ObjectRef != SpatialConstants::UNRESOLVED_OBJECT_REF);
			if (ObjectRef == SpatialConstants::NULL_OBJECT_REF)
			{
				Parameters.ForcedActor = nullptr;
			}
			else
			{
				FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(ObjectRef);
				if (NetGUID.IsValid())
				{
					UObject* Object_Raw = PackageMap->GetObjectFromNetGUID(NetGUID, true);
					checkf(Object_Raw, TEXT("An object ref %s should map to a valid object."), *ObjectRefToString(ObjectRef));
					checkf(Cast<AActor>(Object_Raw), TEXT("Object ref %s maps to object %s with the wrong class."), *ObjectRefToString(ObjectRef), *Object_Raw->GetFullName());
					Parameters.ForcedActor = Cast<AActor>(Object_Raw);
				}
				else
				{
					// A legal static object reference should never be unresolved.
					checkf(ObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
					UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientPrestreamTextures_OnRPCPayload: Parameters.ForcedActor %s is not resolved on this worker."),
						*Interop->GetSpatialOS()->GetWorkerId(),
						*ObjectRefToString(ObjectRef));
					return {ObjectRef};
				}
			}
		}
		Parameters.ForceDuration = Op.Request.field_forceduration0();
		Parameters.bEnableStreaming = Op.Request.field_benablestreaming0();
		Parameters.CinematicTextureGroups = Op.Request.field_cinematictexturegroups0();

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientPrestreamTextures, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientPrestreamTextures"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientPrestreamTextures_OnRPCPayload: Function not found. Object: %s, Function: ClientPrestreamTextures."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientprestreamtextures>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientprestreamtextures>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientPrepareMapChange_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientpreparemapchange>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientPrepareMapChange_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientpreparemapchange>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientPrepareMapChange_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientPrepareMapChange_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientPrepareMapChange_Parms Parameters;

		// Extract from request data.
		Parameters.LevelName = FName((Op.Request.field_levelname0()).data());
		Parameters.bFirst = Op.Request.field_bfirst0();
		Parameters.bLast = Op.Request.field_blast0();

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientPrepareMapChange, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientPrepareMapChange"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientPrepareMapChange_OnRPCPayload: Function not found. Object: %s, Function: ClientPrepareMapChange."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientpreparemapchange>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientpreparemapchange>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientPlaySoundAtLocation_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientplaysoundatlocation>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientPlaySoundAtLocation_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientplaysoundatlocation>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientPlaySoundAtLocation_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientPlaySoundAtLocation_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientPlaySoundAtLocation_Parms Parameters;

		// Extract from request data.
		{
			improbable::unreal::UnrealObjectRef ObjectRef = Op.Request.field_sound0();
			check(ObjectRef != SpatialConstants::UNRESOLVED_OBJECT_REF);
			if (ObjectRef == SpatialConstants::NULL_OBJECT_REF)
			{
				Parameters.Sound = nullptr;
			}
			else
			{
				FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(ObjectRef);
				if (NetGUID.IsValid())
				{
					UObject* Object_Raw = PackageMap->GetObjectFromNetGUID(NetGUID, true);
					checkf(Object_Raw, TEXT("An object ref %s should map to a valid object."), *ObjectRefToString(ObjectRef));
					checkf(Cast<USoundBase>(Object_Raw), TEXT("Object ref %s maps to object %s with the wrong class."), *ObjectRefToString(ObjectRef), *Object_Raw->GetFullName());
					Parameters.Sound = Cast<USoundBase>(Object_Raw);
				}
				else
				{
					// A legal static object reference should never be unresolved.
					checkf(ObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
					UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientPlaySoundAtLocation_OnRPCPayload: Parameters.Sound %s is not resolved on this worker."),
						*Interop->GetSpatialOS()->GetWorkerId(),
						*ObjectRefToString(ObjectRef));
					return {ObjectRef};
				}
			}
		}
		{
			auto& ValueDataStr = Op.Request.field_location0();
			TArray<uint8> ValueData;
			ValueData.Append(reinterpret_cast<const uint8*>(ValueDataStr.data()), ValueDataStr.size());
			FMemoryReader ValueDataReader(ValueData);
			bool bSuccess = true;
			Parameters.Location.NetSerialize(ValueDataReader, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FVector failed."));
		}
		Parameters.VolumeMultiplier = Op.Request.field_volumemultiplier0();
		Parameters.PitchMultiplier = Op.Request.field_pitchmultiplier0();

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientPlaySoundAtLocation, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientPlaySoundAtLocation"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientPlaySoundAtLocation_OnRPCPayload: Function not found. Object: %s, Function: ClientPlaySoundAtLocation."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientplaysoundatlocation>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientplaysoundatlocation>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientPlaySound_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientplaysound>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientPlaySound_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientplaysound>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientPlaySound_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientPlaySound_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientPlaySound_Parms Parameters;

		// Extract from request data.
		{
			improbable::unreal::UnrealObjectRef ObjectRef = Op.Request.field_sound0();
			check(ObjectRef != SpatialConstants::UNRESOLVED_OBJECT_REF);
			if (ObjectRef == SpatialConstants::NULL_OBJECT_REF)
			{
				Parameters.Sound = nullptr;
			}
			else
			{
				FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(ObjectRef);
				if (NetGUID.IsValid())
				{
					UObject* Object_Raw = PackageMap->GetObjectFromNetGUID(NetGUID, true);
					checkf(Object_Raw, TEXT("An object ref %s should map to a valid object."), *ObjectRefToString(ObjectRef));
					checkf(Cast<USoundBase>(Object_Raw), TEXT("Object ref %s maps to object %s with the wrong class."), *ObjectRefToString(ObjectRef), *Object_Raw->GetFullName());
					Parameters.Sound = Cast<USoundBase>(Object_Raw);
				}
				else
				{
					// A legal static object reference should never be unresolved.
					checkf(ObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
					UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientPlaySound_OnRPCPayload: Parameters.Sound %s is not resolved on this worker."),
						*Interop->GetSpatialOS()->GetWorkerId(),
						*ObjectRefToString(ObjectRef));
					return {ObjectRef};
				}
			}
		}
		Parameters.VolumeMultiplier = Op.Request.field_volumemultiplier0();
		Parameters.PitchMultiplier = Op.Request.field_pitchmultiplier0();

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientPlaySound, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientPlaySound"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientPlaySound_OnRPCPayload: Function not found. Object: %s, Function: ClientPlaySound."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientplaysound>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientplaysound>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientPlayForceFeedback_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientplayforcefeedback>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientPlayForceFeedback_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientplayforcefeedback>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientPlayForceFeedback_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientPlayForceFeedback_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientPlayForceFeedback_Parms Parameters;

		// Extract from request data.
		{
			improbable::unreal::UnrealObjectRef ObjectRef = Op.Request.field_forcefeedbackeffect0();
			check(ObjectRef != SpatialConstants::UNRESOLVED_OBJECT_REF);
			if (ObjectRef == SpatialConstants::NULL_OBJECT_REF)
			{
				Parameters.ForceFeedbackEffect = nullptr;
			}
			else
			{
				FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(ObjectRef);
				if (NetGUID.IsValid())
				{
					UObject* Object_Raw = PackageMap->GetObjectFromNetGUID(NetGUID, true);
					checkf(Object_Raw, TEXT("An object ref %s should map to a valid object."), *ObjectRefToString(ObjectRef));
					checkf(Cast<UForceFeedbackEffect>(Object_Raw), TEXT("Object ref %s maps to object %s with the wrong class."), *ObjectRefToString(ObjectRef), *Object_Raw->GetFullName());
					Parameters.ForceFeedbackEffect = Cast<UForceFeedbackEffect>(Object_Raw);
				}
				else
				{
					// A legal static object reference should never be unresolved.
					checkf(ObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
					UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientPlayForceFeedback_OnRPCPayload: Parameters.ForceFeedbackEffect %s is not resolved on this worker."),
						*Interop->GetSpatialOS()->GetWorkerId(),
						*ObjectRefToString(ObjectRef));
					return {ObjectRef};
				}
			}
		}
		Parameters.bLooping = Op.Request.field_blooping0();
		Parameters.bIgnoreTimeDilation = Op.Request.field_bignoretimedilation0();
		Parameters.Tag = FName((Op.Request.field_tag0()).data());

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientPlayForceFeedback, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientPlayForceFeedback"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientPlayForceFeedback_OnRPCPayload: Function not found. Object: %s, Function: ClientPlayForceFeedback."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientplayforcefeedback>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientplayforcefeedback>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientPlayCameraShake_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientplaycamerashake>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientPlayCameraShake_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientplaycamerashake>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientPlayCameraShake_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientPlayCameraShake_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientPlayCameraShake_Parms Parameters;

		// Extract from request data.
		Parameters.Shake = PackageMap->GetStaticClassFromHash(Op.Request.field_shake0());
		Parameters.Scale = Op.Request.field_scale0();
		Parameters.PlaySpace = TEnumAsByte<ECameraAnimPlaySpace::Type>(uint8(Op.Request.field_playspace0()));
		{
			auto& ValueDataStr = Op.Request.field_userplayspacerot0();
			TArray<uint8> ValueData;
			ValueData.Append(reinterpret_cast<const uint8*>(ValueDataStr.data()), ValueDataStr.size());
			FMemoryReader ValueDataReader(ValueData);
			bool bSuccess = true;
			Parameters.UserPlaySpaceRot.NetSerialize(ValueDataReader, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FRotator failed."));
		}

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientPlayCameraShake, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientPlayCameraShake"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientPlayCameraShake_OnRPCPayload: Function not found. Object: %s, Function: ClientPlayCameraShake."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientplaycamerashake>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientplaycamerashake>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientPlayCameraAnim_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientplaycameraanim>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientPlayCameraAnim_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientplaycameraanim>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientPlayCameraAnim_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientPlayCameraAnim_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientPlayCameraAnim_Parms Parameters;

		// Extract from request data.
		{
			improbable::unreal::UnrealObjectRef ObjectRef = Op.Request.field_animtoplay0();
			check(ObjectRef != SpatialConstants::UNRESOLVED_OBJECT_REF);
			if (ObjectRef == SpatialConstants::NULL_OBJECT_REF)
			{
				Parameters.AnimToPlay = nullptr;
			}
			else
			{
				FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(ObjectRef);
				if (NetGUID.IsValid())
				{
					UObject* Object_Raw = PackageMap->GetObjectFromNetGUID(NetGUID, true);
					checkf(Object_Raw, TEXT("An object ref %s should map to a valid object."), *ObjectRefToString(ObjectRef));
					checkf(Cast<UCameraAnim>(Object_Raw), TEXT("Object ref %s maps to object %s with the wrong class."), *ObjectRefToString(ObjectRef), *Object_Raw->GetFullName());
					Parameters.AnimToPlay = Cast<UCameraAnim>(Object_Raw);
				}
				else
				{
					// A legal static object reference should never be unresolved.
					checkf(ObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
					UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientPlayCameraAnim_OnRPCPayload: Parameters.AnimToPlay %s is not resolved on this worker."),
						*Interop->GetSpatialOS()->GetWorkerId(),
						*ObjectRefToString(ObjectRef));
					return {ObjectRef};
				}
			}
		}
		Parameters.Scale = Op.Request.field_scale0();
		Parameters.Rate = Op.Request.field_rate0();
		Parameters.BlendInTime = Op.Request.field_blendintime0();
		Parameters.BlendOutTime = Op.Request.field_blendouttime0();
		Parameters.bLoop = Op.Request.field_bloop0();
		Parameters.bRandomStartTime = Op.Request.field_brandomstarttime0();
		Parameters.Space = TEnumAsByte<ECameraAnimPlaySpace::Type>(uint8(Op.Request.field_space0()));
		{
			auto& ValueDataStr = Op.Request.field_customplayspace0();
			TArray<uint8> ValueData;
			ValueData.Append(reinterpret_cast<const uint8*>(ValueDataStr.data()), ValueDataStr.size());
			FMemoryReader ValueDataReader(ValueData);
			bool bSuccess = true;
			Parameters.CustomPlaySpace.NetSerialize(ValueDataReader, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FRotator failed."));
		}

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientPlayCameraAnim, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientPlayCameraAnim"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientPlayCameraAnim_OnRPCPayload: Function not found. Object: %s, Function: ClientPlayCameraAnim."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientplaycameraanim>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientplaycameraanim>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientMutePlayer_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientmuteplayer>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientMutePlayer_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientmuteplayer>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientMutePlayer_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientMutePlayer_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientMutePlayer_Parms Parameters;

		// Extract from request data.
		{
			auto& ValueDataStr = Op.Request.field_playerid0();
			TArray<uint8> ValueData;
			ValueData.Append(reinterpret_cast<const uint8*>(ValueDataStr.data()), ValueDataStr.size());
			FMemoryReader ValueDataReader(ValueData);
			bool bSuccess = true;
			Parameters.PlayerId.NetSerialize(ValueDataReader, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FUniqueNetIdRepl failed."));
		}

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientMutePlayer, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientMutePlayer"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientMutePlayer_OnRPCPayload: Function not found. Object: %s, Function: ClientMutePlayer."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientmuteplayer>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientmuteplayer>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientMessage_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientmessage>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientMessage_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientmessage>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientMessage_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientMessage_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientMessage_Parms Parameters;

		// Extract from request data.
		Parameters.S = FString(UTF8_TO_TCHAR(Op.Request.field_s0().c_str()));
		Parameters.Type = FName((Op.Request.field_type0()).data());
		Parameters.MsgLifeTime = Op.Request.field_msglifetime0();

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientMessage, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientMessage"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientMessage_OnRPCPayload: Function not found. Object: %s, Function: ClientMessage."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientmessage>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientmessage>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientIgnoreMoveInput_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientignoremoveinput>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientIgnoreMoveInput_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientignoremoveinput>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientIgnoreMoveInput_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientIgnoreMoveInput_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientIgnoreMoveInput_Parms Parameters;

		// Extract from request data.
		Parameters.bIgnore = Op.Request.field_bignore0();

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientIgnoreMoveInput, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientIgnoreMoveInput"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientIgnoreMoveInput_OnRPCPayload: Function not found. Object: %s, Function: ClientIgnoreMoveInput."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientignoremoveinput>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientignoremoveinput>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientIgnoreLookInput_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientignorelookinput>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientIgnoreLookInput_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientignorelookinput>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientIgnoreLookInput_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientIgnoreLookInput_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientIgnoreLookInput_Parms Parameters;

		// Extract from request data.
		Parameters.bIgnore = Op.Request.field_bignore0();

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientIgnoreLookInput, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientIgnoreLookInput"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientIgnoreLookInput_OnRPCPayload: Function not found. Object: %s, Function: ClientIgnoreLookInput."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientignorelookinput>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientignorelookinput>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientGotoState_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientgotostate>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientGotoState_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientgotostate>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientGotoState_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientGotoState_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientGotoState_Parms Parameters;

		// Extract from request data.
		Parameters.NewState = FName((Op.Request.field_newstate0()).data());

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientGotoState, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientGotoState"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientGotoState_OnRPCPayload: Function not found. Object: %s, Function: ClientGotoState."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientgotostate>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientgotostate>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientGameEnded_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientgameended>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientGameEnded_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientgameended>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientGameEnded_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientGameEnded_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientGameEnded_Parms Parameters;

		// Extract from request data.
		{
			improbable::unreal::UnrealObjectRef ObjectRef = Op.Request.field_endgamefocus0();
			check(ObjectRef != SpatialConstants::UNRESOLVED_OBJECT_REF);
			if (ObjectRef == SpatialConstants::NULL_OBJECT_REF)
			{
				Parameters.EndGameFocus = nullptr;
			}
			else
			{
				FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(ObjectRef);
				if (NetGUID.IsValid())
				{
					UObject* Object_Raw = PackageMap->GetObjectFromNetGUID(NetGUID, true);
					checkf(Object_Raw, TEXT("An object ref %s should map to a valid object."), *ObjectRefToString(ObjectRef));
					checkf(Cast<AActor>(Object_Raw), TEXT("Object ref %s maps to object %s with the wrong class."), *ObjectRefToString(ObjectRef), *Object_Raw->GetFullName());
					Parameters.EndGameFocus = Cast<AActor>(Object_Raw);
				}
				else
				{
					// A legal static object reference should never be unresolved.
					checkf(ObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
					UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientGameEnded_OnRPCPayload: Parameters.EndGameFocus %s is not resolved on this worker."),
						*Interop->GetSpatialOS()->GetWorkerId(),
						*ObjectRefToString(ObjectRef));
					return {ObjectRef};
				}
			}
		}
		Parameters.bIsWinner = Op.Request.field_biswinner0();

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientGameEnded, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientGameEnded"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientGameEnded_OnRPCPayload: Function not found. Object: %s, Function: ClientGameEnded."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientgameended>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientgameended>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientForceGarbageCollection_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientforcegarbagecollection>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientForceGarbageCollection_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientforcegarbagecollection>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientForceGarbageCollection_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientForceGarbageCollection_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientForceGarbageCollection, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientForceGarbageCollection"))))
		{
			TargetObject->ProcessEvent(Function, nullptr);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientForceGarbageCollection_OnRPCPayload: Function not found. Object: %s, Function: ClientForceGarbageCollection."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientforcegarbagecollection>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientforcegarbagecollection>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientFlushLevelStreaming_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientflushlevelstreaming>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientFlushLevelStreaming_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientflushlevelstreaming>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientFlushLevelStreaming_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientFlushLevelStreaming_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientFlushLevelStreaming, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientFlushLevelStreaming"))))
		{
			TargetObject->ProcessEvent(Function, nullptr);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientFlushLevelStreaming_OnRPCPayload: Function not found. Object: %s, Function: ClientFlushLevelStreaming."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientflushlevelstreaming>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientflushlevelstreaming>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientEndOnlineSession_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientendonlinesession>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientEndOnlineSession_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientendonlinesession>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientEndOnlineSession_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientEndOnlineSession_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientEndOnlineSession, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientEndOnlineSession"))))
		{
			TargetObject->ProcessEvent(Function, nullptr);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientEndOnlineSession_OnRPCPayload: Function not found. Object: %s, Function: ClientEndOnlineSession."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientendonlinesession>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientendonlinesession>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientEnableNetworkVoice_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientenablenetworkvoice>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientEnableNetworkVoice_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientenablenetworkvoice>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientEnableNetworkVoice_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientEnableNetworkVoice_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientEnableNetworkVoice_Parms Parameters;

		// Extract from request data.
		Parameters.bEnable = Op.Request.field_benable0();

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientEnableNetworkVoice, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientEnableNetworkVoice"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientEnableNetworkVoice_OnRPCPayload: Function not found. Object: %s, Function: ClientEnableNetworkVoice."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientenablenetworkvoice>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientenablenetworkvoice>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientCommitMapChange_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientcommitmapchange>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientCommitMapChange_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientcommitmapchange>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientCommitMapChange_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientCommitMapChange_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientCommitMapChange, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientCommitMapChange"))))
		{
			TargetObject->ProcessEvent(Function, nullptr);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientCommitMapChange_OnRPCPayload: Function not found. Object: %s, Function: ClientCommitMapChange."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientcommitmapchange>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientcommitmapchange>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientClearCameraLensEffects_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientclearcameralenseffects>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientClearCameraLensEffects_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientclearcameralenseffects>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientClearCameraLensEffects_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientClearCameraLensEffects_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientClearCameraLensEffects, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientClearCameraLensEffects"))))
		{
			TargetObject->ProcessEvent(Function, nullptr);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientClearCameraLensEffects_OnRPCPayload: Function not found. Object: %s, Function: ClientClearCameraLensEffects."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientclearcameralenseffects>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientclearcameralenseffects>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientCapBandwidth_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientcapbandwidth>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientCapBandwidth_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientcapbandwidth>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientCapBandwidth_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientCapBandwidth_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientCapBandwidth_Parms Parameters;

		// Extract from request data.
		Parameters.Cap = Op.Request.field_cap0();

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientCapBandwidth, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientCapBandwidth"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientCapBandwidth_OnRPCPayload: Function not found. Object: %s, Function: ClientCapBandwidth."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientcapbandwidth>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientcapbandwidth>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientCancelPendingMapChange_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientcancelpendingmapchange>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientCancelPendingMapChange_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientcancelpendingmapchange>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientCancelPendingMapChange_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientCancelPendingMapChange_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientCancelPendingMapChange, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientCancelPendingMapChange"))))
		{
			TargetObject->ProcessEvent(Function, nullptr);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientCancelPendingMapChange_OnRPCPayload: Function not found. Object: %s, Function: ClientCancelPendingMapChange."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientcancelpendingmapchange>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientcancelpendingmapchange>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientAddTextureStreamingLoc_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientaddtexturestreamingloc>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientAddTextureStreamingLoc_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientaddtexturestreamingloc>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientAddTextureStreamingLoc_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientAddTextureStreamingLoc_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventClientAddTextureStreamingLoc_Parms Parameters;

		// Extract from request data.
		{
			auto& ValueDataStr = Op.Request.field_inloc0();
			TArray<uint8> ValueData;
			ValueData.Append(reinterpret_cast<const uint8*>(ValueDataStr.data()), ValueDataStr.size());
			FMemoryReader ValueDataReader(ValueData);
			bool bSuccess = true;
			Parameters.InLoc.NetSerialize(ValueDataReader, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FVector failed."));
		}
		Parameters.Duration = Op.Request.field_duration0();
		Parameters.bOverrideLocation = Op.Request.field_boverridelocation0();

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientAddTextureStreamingLoc, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientAddTextureStreamingLoc"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientAddTextureStreamingLoc_OnRPCPayload: Function not found. Object: %s, Function: ClientAddTextureStreamingLoc."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientaddtexturestreamingloc>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientaddtexturestreamingloc>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientSetRotation_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetrotation>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientSetRotation_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetrotation>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientSetRotation_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientSetRotation_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in Controller.generated.h (in a macro that is then put in Controller.h UCLASS macro)
		Controller_eventClientSetRotation_Parms Parameters;

		// Extract from request data.
		{
			auto& ValueDataStr = Op.Request.field_newrotation0();
			TArray<uint8> ValueData;
			ValueData.Append(reinterpret_cast<const uint8*>(ValueDataStr.data()), ValueDataStr.size());
			FMemoryReader ValueDataReader(ValueData);
			bool bSuccess = true;
			Parameters.NewRotation.NetSerialize(ValueDataReader, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FRotator failed."));
		}
		Parameters.bResetCamera = Op.Request.field_bresetcamera0();

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientSetRotation, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientSetRotation"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientSetRotation_OnRPCPayload: Function not found. Object: %s, Function: ClientSetRotation."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetrotation>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetrotation>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientSetLocation_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetlocation>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientSetLocation_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetlocation>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ClientSetLocation_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ClientSetLocation_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in Controller.generated.h (in a macro that is then put in Controller.h UCLASS macro)
		Controller_eventClientSetLocation_Parms Parameters;

		// Extract from request data.
		{
			auto& ValueDataStr = Op.Request.field_newlocation0();
			TArray<uint8> ValueData;
			ValueData.Append(reinterpret_cast<const uint8*>(ValueDataStr.data()), ValueDataStr.size());
			FMemoryReader ValueDataReader(ValueData);
			bool bSuccess = true;
			Parameters.NewLocation.NetSerialize(ValueDataReader, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FVector failed."));
		}
		{
			auto& ValueDataStr = Op.Request.field_newrotation0();
			TArray<uint8> ValueData;
			ValueData.Append(reinterpret_cast<const uint8*>(ValueDataStr.data()), ValueDataStr.size());
			FMemoryReader ValueDataReader(ValueData);
			bool bSuccess = true;
			Parameters.NewRotation.NetSerialize(ValueDataReader, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FRotator failed."));
		}

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ClientSetLocation, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ClientSetLocation"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ClientSetLocation_OnRPCPayload: Function not found. Object: %s, Function: ClientSetLocation."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetlocation>(Op.RequestId, {});
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
void USpatialTypeBinding_SampleGamePlayerController::TestRPC_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Testrpc>& Op)
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: TestRPC_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: TestRPC_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: TestRPC, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("TestRPC"))))
		{
			TargetObject->ProcessEvent(Function, nullptr);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: TestRPC_OnRPCPayload: Function not found. Object: %s, Function: TestRPC."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Testrpc>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetlocation>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerViewSelf_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverviewself>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerViewSelf_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverviewself>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ServerViewSelf_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ServerViewSelf_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventServerViewSelf_Parms Parameters;

		// Extract from request data.
		Parameters.TransitionParams.BlendTime = Op.Request.field_transitionparams0_blendtime();
		Parameters.TransitionParams.BlendFunction = TEnumAsByte<EViewTargetBlendFunction>(uint8(Op.Request.field_transitionparams0_blendfunction()));
		Parameters.TransitionParams.BlendExp = Op.Request.field_transitionparams0_blendexp();
		Parameters.TransitionParams.bLockOutgoing = Op.Request.field_transitionparams0_blockoutgoing();

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ServerViewSelf, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ServerViewSelf"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ServerViewSelf_OnRPCPayload: Function not found. Object: %s, Function: ServerViewSelf."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverviewself>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverviewself>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerViewPrevPlayer_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverviewprevplayer>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerViewPrevPlayer_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverviewprevplayer>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ServerViewPrevPlayer_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ServerViewPrevPlayer_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ServerViewPrevPlayer, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ServerViewPrevPlayer"))))
		{
			TargetObject->ProcessEvent(Function, nullptr);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ServerViewPrevPlayer_OnRPCPayload: Function not found. Object: %s, Function: ServerViewPrevPlayer."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverviewprevplayer>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverviewprevplayer>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerViewNextPlayer_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverviewnextplayer>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerViewNextPlayer_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverviewnextplayer>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ServerViewNextPlayer_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ServerViewNextPlayer_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ServerViewNextPlayer, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ServerViewNextPlayer"))))
		{
			TargetObject->ProcessEvent(Function, nullptr);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ServerViewNextPlayer_OnRPCPayload: Function not found. Object: %s, Function: ServerViewNextPlayer."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverviewnextplayer>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverviewnextplayer>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerVerifyViewTarget_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serververifyviewtarget>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerVerifyViewTarget_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serververifyviewtarget>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ServerVerifyViewTarget_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ServerVerifyViewTarget_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ServerVerifyViewTarget, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ServerVerifyViewTarget"))))
		{
			TargetObject->ProcessEvent(Function, nullptr);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ServerVerifyViewTarget_OnRPCPayload: Function not found. Object: %s, Function: ServerVerifyViewTarget."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serververifyviewtarget>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serververifyviewtarget>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerUpdateMultipleLevelsVisibility_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverupdatemultiplelevelsvisibility>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerUpdateMultipleLevelsVisibility_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverupdatemultiplelevelsvisibility>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ServerUpdateMultipleLevelsVisibility_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ServerUpdateMultipleLevelsVisibility_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventServerUpdateMultipleLevelsVisibility_Parms Parameters;

		// Extract from request data.
		{
			auto& List = Op.Request.field_levelvisibilities0();
			Parameters.LevelVisibilities.SetNum(List.size());
			for(int i = 0; i < List.size(); i++)
			{
				auto& ValueDataStr = List[i];
				TArray<uint8> ValueData;
				ValueData.Append(reinterpret_cast<const uint8*>(ValueDataStr.data()), ValueDataStr.size());
				FMemoryReader ValueDataReader(ValueData);
				FUpdateLevelVisibilityLevelInfo::StaticStruct()->SerializeBin(ValueDataReader, reinterpret_cast<void*>(&Parameters.LevelVisibilities[i]));
			}
		}

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ServerUpdateMultipleLevelsVisibility, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ServerUpdateMultipleLevelsVisibility"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ServerUpdateMultipleLevelsVisibility_OnRPCPayload: Function not found. Object: %s, Function: ServerUpdateMultipleLevelsVisibility."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverupdatemultiplelevelsvisibility>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverupdatemultiplelevelsvisibility>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerUpdateLevelVisibility_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverupdatelevelvisibility>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerUpdateLevelVisibility_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverupdatelevelvisibility>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ServerUpdateLevelVisibility_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ServerUpdateLevelVisibility_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventServerUpdateLevelVisibility_Parms Parameters;

		// Extract from request data.
		Parameters.PackageName = FName((Op.Request.field_packagename0()).data());
		Parameters.bIsVisible = Op.Request.field_bisvisible0();

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ServerUpdateLevelVisibility, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ServerUpdateLevelVisibility"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ServerUpdateLevelVisibility_OnRPCPayload: Function not found. Object: %s, Function: ServerUpdateLevelVisibility."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverupdatelevelvisibility>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverupdatelevelvisibility>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerUpdateCamera_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverupdatecamera>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerUpdateCamera_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverupdatecamera>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ServerUpdateCamera_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ServerUpdateCamera_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventServerUpdateCamera_Parms Parameters;

		// Extract from request data.
		{
			auto& ValueDataStr = Op.Request.field_camloc0();
			TArray<uint8> ValueData;
			ValueData.Append(reinterpret_cast<const uint8*>(ValueDataStr.data()), ValueDataStr.size());
			FMemoryReader ValueDataReader(ValueData);
			bool bSuccess = true;
			Parameters.CamLoc.NetSerialize(ValueDataReader, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FVector_NetQuantize failed."));
		}
		Parameters.CamPitchAndYaw = Op.Request.field_campitchandyaw0();

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ServerUpdateCamera, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ServerUpdateCamera"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ServerUpdateCamera_OnRPCPayload: Function not found. Object: %s, Function: ServerUpdateCamera."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverupdatecamera>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverupdatecamera>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerUnmutePlayer_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverunmuteplayer>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerUnmutePlayer_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverunmuteplayer>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ServerUnmutePlayer_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ServerUnmutePlayer_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventServerUnmutePlayer_Parms Parameters;

		// Extract from request data.
		{
			auto& ValueDataStr = Op.Request.field_playerid0();
			TArray<uint8> ValueData;
			ValueData.Append(reinterpret_cast<const uint8*>(ValueDataStr.data()), ValueDataStr.size());
			FMemoryReader ValueDataReader(ValueData);
			bool bSuccess = true;
			Parameters.PlayerId.NetSerialize(ValueDataReader, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FUniqueNetIdRepl failed."));
		}

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ServerUnmutePlayer, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ServerUnmutePlayer"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ServerUnmutePlayer_OnRPCPayload: Function not found. Object: %s, Function: ServerUnmutePlayer."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverunmuteplayer>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverunmuteplayer>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerToggleAILogging_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Servertoggleailogging>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerToggleAILogging_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Servertoggleailogging>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ServerToggleAILogging_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ServerToggleAILogging_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ServerToggleAILogging, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ServerToggleAILogging"))))
		{
			TargetObject->ProcessEvent(Function, nullptr);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ServerToggleAILogging_OnRPCPayload: Function not found. Object: %s, Function: ServerToggleAILogging."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Servertoggleailogging>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Servertoggleailogging>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerShortTimeout_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Servershorttimeout>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerShortTimeout_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Servershorttimeout>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ServerShortTimeout_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ServerShortTimeout_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ServerShortTimeout, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ServerShortTimeout"))))
		{
			TargetObject->ProcessEvent(Function, nullptr);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ServerShortTimeout_OnRPCPayload: Function not found. Object: %s, Function: ServerShortTimeout."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Servershorttimeout>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Servershorttimeout>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerSetSpectatorWaiting_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serversetspectatorwaiting>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerSetSpectatorWaiting_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serversetspectatorwaiting>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ServerSetSpectatorWaiting_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ServerSetSpectatorWaiting_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventServerSetSpectatorWaiting_Parms Parameters;

		// Extract from request data.
		Parameters.bWaiting = Op.Request.field_bwaiting0();

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ServerSetSpectatorWaiting, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ServerSetSpectatorWaiting"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ServerSetSpectatorWaiting_OnRPCPayload: Function not found. Object: %s, Function: ServerSetSpectatorWaiting."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serversetspectatorwaiting>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serversetspectatorwaiting>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerSetSpectatorLocation_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serversetspectatorlocation>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerSetSpectatorLocation_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serversetspectatorlocation>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ServerSetSpectatorLocation_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ServerSetSpectatorLocation_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventServerSetSpectatorLocation_Parms Parameters;

		// Extract from request data.
		{
			auto& ValueDataStr = Op.Request.field_newloc0();
			TArray<uint8> ValueData;
			ValueData.Append(reinterpret_cast<const uint8*>(ValueDataStr.data()), ValueDataStr.size());
			FMemoryReader ValueDataReader(ValueData);
			bool bSuccess = true;
			Parameters.NewLoc.NetSerialize(ValueDataReader, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FVector failed."));
		}
		{
			auto& ValueDataStr = Op.Request.field_newrot0();
			TArray<uint8> ValueData;
			ValueData.Append(reinterpret_cast<const uint8*>(ValueDataStr.data()), ValueDataStr.size());
			FMemoryReader ValueDataReader(ValueData);
			bool bSuccess = true;
			Parameters.NewRot.NetSerialize(ValueDataReader, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FRotator failed."));
		}

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ServerSetSpectatorLocation, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ServerSetSpectatorLocation"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ServerSetSpectatorLocation_OnRPCPayload: Function not found. Object: %s, Function: ServerSetSpectatorLocation."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serversetspectatorlocation>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serversetspectatorlocation>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerRestartPlayer_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverrestartplayer>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerRestartPlayer_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverrestartplayer>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ServerRestartPlayer_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ServerRestartPlayer_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ServerRestartPlayer, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ServerRestartPlayer"))))
		{
			TargetObject->ProcessEvent(Function, nullptr);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ServerRestartPlayer_OnRPCPayload: Function not found. Object: %s, Function: ServerRestartPlayer."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverrestartplayer>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverrestartplayer>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerPause_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverpause>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerPause_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverpause>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ServerPause_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ServerPause_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ServerPause, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ServerPause"))))
		{
			TargetObject->ProcessEvent(Function, nullptr);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ServerPause_OnRPCPayload: Function not found. Object: %s, Function: ServerPause."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverpause>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverpause>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerNotifyLoadedWorld_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Servernotifyloadedworld>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerNotifyLoadedWorld_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Servernotifyloadedworld>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ServerNotifyLoadedWorld_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ServerNotifyLoadedWorld_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventServerNotifyLoadedWorld_Parms Parameters;

		// Extract from request data.
		Parameters.WorldPackageName = FName((Op.Request.field_worldpackagename0()).data());

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ServerNotifyLoadedWorld, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ServerNotifyLoadedWorld"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ServerNotifyLoadedWorld_OnRPCPayload: Function not found. Object: %s, Function: ServerNotifyLoadedWorld."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Servernotifyloadedworld>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Servernotifyloadedworld>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerMutePlayer_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Servermuteplayer>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerMutePlayer_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Servermuteplayer>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ServerMutePlayer_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ServerMutePlayer_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventServerMutePlayer_Parms Parameters;

		// Extract from request data.
		{
			auto& ValueDataStr = Op.Request.field_playerid0();
			TArray<uint8> ValueData;
			ValueData.Append(reinterpret_cast<const uint8*>(ValueDataStr.data()), ValueDataStr.size());
			FMemoryReader ValueDataReader(ValueData);
			bool bSuccess = true;
			Parameters.PlayerId.NetSerialize(ValueDataReader, PackageMap, bSuccess);
			checkf(bSuccess, TEXT("NetSerialize on FUniqueNetIdRepl failed."));
		}

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ServerMutePlayer, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ServerMutePlayer"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ServerMutePlayer_OnRPCPayload: Function not found. Object: %s, Function: ServerMutePlayer."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Servermuteplayer>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Servermuteplayer>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerCheckClientPossessionReliable_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Servercheckclientpossessionreliable>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerCheckClientPossessionReliable_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Servercheckclientpossessionreliable>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ServerCheckClientPossessionReliable_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ServerCheckClientPossessionReliable_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ServerCheckClientPossessionReliable, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ServerCheckClientPossessionReliable"))))
		{
			TargetObject->ProcessEvent(Function, nullptr);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ServerCheckClientPossessionReliable_OnRPCPayload: Function not found. Object: %s, Function: ServerCheckClientPossessionReliable."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Servercheckclientpossessionreliable>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Servercheckclientpossessionreliable>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerCheckClientPossession_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Servercheckclientpossession>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerCheckClientPossession_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Servercheckclientpossession>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ServerCheckClientPossession_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ServerCheckClientPossession_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ServerCheckClientPossession, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ServerCheckClientPossession"))))
		{
			TargetObject->ProcessEvent(Function, nullptr);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ServerCheckClientPossession_OnRPCPayload: Function not found. Object: %s, Function: ServerCheckClientPossession."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Servercheckclientpossession>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Servercheckclientpossession>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerChangeName_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverchangename>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerChangeName_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverchangename>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ServerChangeName_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ServerChangeName_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventServerChangeName_Parms Parameters;

		// Extract from request data.
		Parameters.S = FString(UTF8_TO_TCHAR(Op.Request.field_s0().c_str()));

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ServerChangeName, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ServerChangeName"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ServerChangeName_OnRPCPayload: Function not found. Object: %s, Function: ServerChangeName."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverchangename>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverchangename>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerCamera_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Servercamera>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerCamera_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Servercamera>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ServerCamera_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ServerCamera_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventServerCamera_Parms Parameters;

		// Extract from request data.
		Parameters.NewMode = FName((Op.Request.field_newmode0()).data());

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ServerCamera, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ServerCamera"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ServerCamera_OnRPCPayload: Function not found. Object: %s, Function: ServerCamera."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Servercamera>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Servercamera>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerAcknowledgePossession_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serveracknowledgepossession>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerAcknowledgePossession_OnRPCPayload(const worker::CommandRequestOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serveracknowledgepossession>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	auto Receiver = [this, Op]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{Op.EntityId, Op.Request.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ServerAcknowledgePossession_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: ServerAcknowledgePossession_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Declare parameters.
		// This struct is declared in PlayerController.generated.h (in a macro that is then put in PlayerController.h UCLASS macro)
		PlayerController_eventServerAcknowledgePossession_Parms Parameters;

		// Extract from request data.
		{
			improbable::unreal::UnrealObjectRef ObjectRef = Op.Request.field_p0();
			check(ObjectRef != SpatialConstants::UNRESOLVED_OBJECT_REF);
			if (ObjectRef == SpatialConstants::NULL_OBJECT_REF)
			{
				Parameters.P = nullptr;
			}
			else
			{
				FNetworkGUID NetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(ObjectRef);
				if (NetGUID.IsValid())
				{
					UObject* Object_Raw = PackageMap->GetObjectFromNetGUID(NetGUID, true);
					checkf(Object_Raw, TEXT("An object ref %s should map to a valid object."), *ObjectRefToString(ObjectRef));
					checkf(Cast<APawn>(Object_Raw), TEXT("Object ref %s maps to object %s with the wrong class."), *ObjectRefToString(ObjectRef), *Object_Raw->GetFullName());
					Parameters.P = Cast<APawn>(Object_Raw);
				}
				else
				{
					// A legal static object reference should never be unresolved.
					checkf(ObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
					UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: ServerAcknowledgePossession_OnRPCPayload: Parameters.P %s is not resolved on this worker."),
						*Interop->GetSpatialOS()->GetWorkerId(),
						*ObjectRefToString(ObjectRef));
					return {ObjectRef};
				}
			}
		}

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: ServerAcknowledgePossession, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("ServerAcknowledgePossession"))))
		{
			TargetObject->ProcessEvent(Function, &Parameters);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: ServerAcknowledgePossession_OnRPCPayload: Function not found. Object: %s, Function: ServerAcknowledgePossession."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		// Send command response.
		TSharedPtr<worker::Connection> Connection = Interop->GetSpatialOS()->GetConnection().Pin();
<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		Connection->SendCommandResponse<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serveracknowledgepossession>(Op.RequestId, {});
=======
		Connection->SendCommandResponse<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serveracknowledgepossession>(Op.RequestId, {});
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}
void USpatialTypeBinding_SampleGamePlayerController::TestMulticast_OnRPCPayload(const worker::EntityId EntityId, const improbable::unreal::generated::samplegameplayercontroller::TestMulticastRequest& EventData)
{
	auto Receiver = [this, EntityId, EventData]() mutable -> FRPCCommandResponseResult
	{
		improbable::unreal::UnrealObjectRef TargetObjectRef{EntityId, EventData.target_subobject_offset(), {}, {}};
		FNetworkGUID TargetNetGUID = PackageMap->GetNetGUIDFromUnrealObjectRef(TargetObjectRef);
		if (!TargetNetGUID.IsValid())
		{
			// A legal static object reference should never be unresolved.
			checkf(TargetObjectRef.path().empty(), TEXT("A stably named object should not need resolution."));
			UE_LOG(LogSpatialOSInterop, Log, TEXT("%s: TestMulticast_OnRPCPayload: Target object %s is not resolved on this worker."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*ObjectRefToString(TargetObjectRef));
			return {TargetObjectRef};
		}
		UObject* TargetObject = PackageMap->GetObjectFromNetGUID(TargetNetGUID, false);
		checkf(TargetObject, TEXT("%s: TestMulticast_OnRPCPayload: Object Ref %s (NetGUID %s) does not correspond to a UObject."),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*ObjectRefToString(TargetObjectRef),
			*TargetNetGUID.ToString());

		// Call implementation.
		UE_LOG(LogSpatialOSInterop, Verbose, TEXT("%s: Received RPC: TestMulticast, target: %s %s"),
			*Interop->GetSpatialOS()->GetWorkerId(),
			*TargetObject->GetName(),
			*ObjectRefToString(TargetObjectRef));

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
		if (UFunction* Function = TargetObject->FindFunction(FName(TEXT("TestMulticast"))))
		{
			TargetObject->ProcessEvent(Function, nullptr);
		}
		else
		{
			UE_LOG(LogSpatialOSInterop, Error, TEXT("%s: TestMulticast_OnRPCPayload: Function not found. Object: %s, Function: TestMulticast."),
				*Interop->GetSpatialOS()->GetWorkerId(),
				*TargetObject->GetFullName());
		}

		return {};
	};
	Interop->InvokeRPCReceiveHandler_Internal(Receiver);
}

void USpatialTypeBinding_SampleGamePlayerController::OnServerStartedVisualLogger_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Onserverstartedvisuallogger>& Op)
=======
void USpatialTypeBinding_PlayerController::OnServerStartedVisualLogger_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Onserverstartedvisuallogger>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("OnServerStartedVisualLogger"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientWasKicked_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientwaskicked>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientWasKicked_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientwaskicked>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientWasKicked"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientVoiceHandshakeComplete_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientvoicehandshakecomplete>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientVoiceHandshakeComplete_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientvoicehandshakecomplete>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientVoiceHandshakeComplete"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientUpdateMultipleLevelsStreamingStatus_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientupdatemultiplelevelsstreamingstatus>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientUpdateMultipleLevelsStreamingStatus_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientupdatemultiplelevelsstreamingstatus>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientUpdateMultipleLevelsStreamingStatus"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientUpdateLevelStreamingStatus_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientupdatelevelstreamingstatus>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientUpdateLevelStreamingStatus_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientupdatelevelstreamingstatus>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientUpdateLevelStreamingStatus"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientUnmutePlayer_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientunmuteplayer>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientUnmutePlayer_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientunmuteplayer>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientUnmutePlayer"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientTravelInternal_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clienttravelinternal>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientTravelInternal_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clienttravelinternal>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientTravelInternal"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientTeamMessage_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientteammessage>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientTeamMessage_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientteammessage>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientTeamMessage"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientStopForceFeedback_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientstopforcefeedback>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientStopForceFeedback_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientstopforcefeedback>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientStopForceFeedback"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientStopCameraShake_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientstopcamerashake>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientStopCameraShake_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientstopcamerashake>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientStopCameraShake"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientStopCameraAnim_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientstopcameraanim>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientStopCameraAnim_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientstopcameraanim>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientStopCameraAnim"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientStartOnlineSession_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientstartonlinesession>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientStartOnlineSession_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientstartonlinesession>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientStartOnlineSession"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientSpawnCameraLensEffect_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientspawncameralenseffect>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientSpawnCameraLensEffect_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientspawncameralenseffect>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientSpawnCameraLensEffect"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientSetViewTarget_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetviewtarget>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientSetViewTarget_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetviewtarget>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientSetViewTarget"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientSetSpectatorWaiting_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetspectatorwaiting>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientSetSpectatorWaiting_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetspectatorwaiting>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientSetSpectatorWaiting"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientSetHUD_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsethud>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientSetHUD_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsethud>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientSetHUD"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientSetForceMipLevelsToBeResident_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetforcemiplevelstoberesident>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientSetForceMipLevelsToBeResident_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetforcemiplevelstoberesident>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientSetForceMipLevelsToBeResident"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientSetCinematicMode_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetcinematicmode>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientSetCinematicMode_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetcinematicmode>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientSetCinematicMode"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientSetCameraMode_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetcameramode>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientSetCameraMode_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetcameramode>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientSetCameraMode"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientSetCameraFade_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetcamerafade>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientSetCameraFade_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetcamerafade>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientSetCameraFade"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientSetBlockOnAsyncLoading_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetblockonasyncloading>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientSetBlockOnAsyncLoading_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetblockonasyncloading>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientSetBlockOnAsyncLoading"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientReturnToMainMenuWithTextReason_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientreturntomainmenuwithtextreason>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientReturnToMainMenuWithTextReason_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientreturntomainmenuwithtextreason>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientReturnToMainMenuWithTextReason"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientReturnToMainMenu_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientreturntomainmenu>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientReturnToMainMenu_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientreturntomainmenu>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientReturnToMainMenu"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientRetryClientRestart_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientretryclientrestart>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientRetryClientRestart_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientretryclientrestart>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientRetryClientRestart"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientRestart_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientrestart>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientRestart_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientrestart>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientRestart"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientReset_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientreset>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientReset_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientreset>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientReset"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientRepObjRef_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientrepobjref>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientRepObjRef_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientrepobjref>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientRepObjRef"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientReceiveLocalizedMessage_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientreceivelocalizedmessage>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientReceiveLocalizedMessage_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientreceivelocalizedmessage>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientReceiveLocalizedMessage"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientPrestreamTextures_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientprestreamtextures>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientPrestreamTextures_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientprestreamtextures>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientPrestreamTextures"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientPrepareMapChange_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientpreparemapchange>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientPrepareMapChange_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientpreparemapchange>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientPrepareMapChange"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientPlaySoundAtLocation_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientplaysoundatlocation>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientPlaySoundAtLocation_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientplaysoundatlocation>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientPlaySoundAtLocation"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientPlaySound_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientplaysound>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientPlaySound_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientplaysound>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientPlaySound"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientPlayForceFeedback_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientplayforcefeedback>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientPlayForceFeedback_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientplayforcefeedback>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientPlayForceFeedback"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientPlayCameraShake_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientplaycamerashake>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientPlayCameraShake_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientplaycamerashake>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientPlayCameraShake"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientPlayCameraAnim_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientplaycameraanim>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientPlayCameraAnim_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientplaycameraanim>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientPlayCameraAnim"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientMutePlayer_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientmuteplayer>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientMutePlayer_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientmuteplayer>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientMutePlayer"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientMessage_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientmessage>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientMessage_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientmessage>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientMessage"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientIgnoreMoveInput_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientignoremoveinput>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientIgnoreMoveInput_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientignoremoveinput>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientIgnoreMoveInput"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientIgnoreLookInput_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientignorelookinput>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientIgnoreLookInput_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientignorelookinput>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientIgnoreLookInput"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientGotoState_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientgotostate>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientGotoState_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientgotostate>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientGotoState"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientGameEnded_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientgameended>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientGameEnded_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientgameended>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientGameEnded"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientForceGarbageCollection_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientforcegarbagecollection>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientForceGarbageCollection_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientforcegarbagecollection>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientForceGarbageCollection"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientFlushLevelStreaming_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientflushlevelstreaming>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientFlushLevelStreaming_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientflushlevelstreaming>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientFlushLevelStreaming"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientEndOnlineSession_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientendonlinesession>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientEndOnlineSession_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientendonlinesession>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientEndOnlineSession"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientEnableNetworkVoice_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientenablenetworkvoice>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientEnableNetworkVoice_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientenablenetworkvoice>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientEnableNetworkVoice"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientCommitMapChange_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientcommitmapchange>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientCommitMapChange_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientcommitmapchange>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientCommitMapChange"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientClearCameraLensEffects_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientclearcameralenseffects>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientClearCameraLensEffects_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientclearcameralenseffects>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientClearCameraLensEffects"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientCapBandwidth_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientcapbandwidth>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientCapBandwidth_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientcapbandwidth>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientCapBandwidth"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientCancelPendingMapChange_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientcancelpendingmapchange>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientCancelPendingMapChange_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientcancelpendingmapchange>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientCancelPendingMapChange"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientAddTextureStreamingLoc_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientaddtexturestreamingloc>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientAddTextureStreamingLoc_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientaddtexturestreamingloc>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientAddTextureStreamingLoc"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientSetRotation_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetrotation>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientSetRotation_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetrotation>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientSetRotation"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ClientSetLocation_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerClientRPCs::Commands::Clientsetlocation>& Op)
=======
void USpatialTypeBinding_PlayerController::ClientSetLocation_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerClientRPCs::Commands::Clientsetlocation>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ClientSetLocation"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::TestRPC_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Testrpc>& Op)
{
	Interop->HandleCommandResponse_Internal(TEXT("TestRPC"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

void USpatialTypeBinding_SampleGamePlayerController::ServerViewSelf_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverviewself>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerViewSelf_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverviewself>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ServerViewSelf"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerViewPrevPlayer_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverviewprevplayer>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerViewPrevPlayer_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverviewprevplayer>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ServerViewPrevPlayer"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerViewNextPlayer_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverviewnextplayer>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerViewNextPlayer_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverviewnextplayer>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ServerViewNextPlayer"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerVerifyViewTarget_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serververifyviewtarget>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerVerifyViewTarget_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serververifyviewtarget>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ServerVerifyViewTarget"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerUpdateMultipleLevelsVisibility_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverupdatemultiplelevelsvisibility>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerUpdateMultipleLevelsVisibility_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverupdatemultiplelevelsvisibility>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ServerUpdateMultipleLevelsVisibility"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerUpdateLevelVisibility_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverupdatelevelvisibility>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerUpdateLevelVisibility_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverupdatelevelvisibility>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ServerUpdateLevelVisibility"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerUpdateCamera_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverupdatecamera>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerUpdateCamera_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverupdatecamera>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ServerUpdateCamera"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerUnmutePlayer_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverunmuteplayer>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerUnmutePlayer_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverunmuteplayer>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ServerUnmutePlayer"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerToggleAILogging_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Servertoggleailogging>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerToggleAILogging_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Servertoggleailogging>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ServerToggleAILogging"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerShortTimeout_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Servershorttimeout>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerShortTimeout_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Servershorttimeout>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ServerShortTimeout"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerSetSpectatorWaiting_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serversetspectatorwaiting>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerSetSpectatorWaiting_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serversetspectatorwaiting>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ServerSetSpectatorWaiting"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerSetSpectatorLocation_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serversetspectatorlocation>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerSetSpectatorLocation_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serversetspectatorlocation>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ServerSetSpectatorLocation"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerRestartPlayer_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverrestartplayer>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerRestartPlayer_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverrestartplayer>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ServerRestartPlayer"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerPause_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverpause>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerPause_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverpause>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ServerPause"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerNotifyLoadedWorld_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Servernotifyloadedworld>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerNotifyLoadedWorld_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Servernotifyloadedworld>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ServerNotifyLoadedWorld"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerMutePlayer_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Servermuteplayer>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerMutePlayer_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Servermuteplayer>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ServerMutePlayer"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerCheckClientPossessionReliable_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Servercheckclientpossessionreliable>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerCheckClientPossessionReliable_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Servercheckclientpossessionreliable>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ServerCheckClientPossessionReliable"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerCheckClientPossession_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Servercheckclientpossession>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerCheckClientPossession_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Servercheckclientpossession>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ServerCheckClientPossession"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerChangeName_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serverchangename>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerChangeName_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serverchangename>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ServerChangeName"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerCamera_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Servercamera>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerCamera_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Servercamera>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ServerCamera"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}

<<<<<<< HEAD:Game/Source/SampleGame/Generated/SpatialTypeBinding_SampleGamePlayerController.cpp
void USpatialTypeBinding_SampleGamePlayerController::ServerAcknowledgePossession_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::samplegameplayercontroller::SampleGamePlayerControllerServerRPCs::Commands::Serveracknowledgepossession>& Op)
=======
void USpatialTypeBinding_PlayerController::ServerAcknowledgePossession_OnCommandResponse(const worker::CommandResponseOp<improbable::unreal::generated::playercontroller::PlayerControllerServerRPCs::Commands::Serveracknowledgepossession>& Op)
>>>>>>> Updated type bindings:Game/Source/SampleGame/Generated/SpatialTypeBinding_PlayerController.cpp
{
	Interop->HandleCommandResponse_Internal(TEXT("ServerAcknowledgePossession"), Op.RequestId.Id, Op.EntityId, Op.StatusCode, FString(UTF8_TO_TCHAR(Op.Message.c_str())));
}