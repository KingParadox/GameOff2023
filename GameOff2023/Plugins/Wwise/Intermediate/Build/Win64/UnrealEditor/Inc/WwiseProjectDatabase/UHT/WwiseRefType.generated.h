// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/Ref/WwiseRefType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WWISEPROJECTDATABASE_WwiseRefType_generated_h
#error "WwiseRefType.generated.h already included, missing '#pragma once' in WwiseRefType.h"
#endif
#define WWISEPROJECTDATABASE_WwiseRefType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseProjectDatabase_Public_Wwise_Ref_WwiseRefType_h


#define FOREACH_ENUM_EWWISEREFTYPE(op) \
	op(EWwiseRefType::RootFile) \
	op(EWwiseRefType::ProjectInfo) \
	op(EWwiseRefType::Language) \
	op(EWwiseRefType::PlatformInfo) \
	op(EWwiseRefType::Platform) \
	op(EWwiseRefType::PluginInfo) \
	op(EWwiseRefType::PluginLib) \
	op(EWwiseRefType::SoundBanksInfo) \
	op(EWwiseRefType::SoundBank) \
	op(EWwiseRefType::Media) \
	op(EWwiseRefType::CustomPlugin) \
	op(EWwiseRefType::PluginShareSet) \
	op(EWwiseRefType::AudioDevice) \
	op(EWwiseRefType::Event) \
	op(EWwiseRefType::SwitchContainer) \
	op(EWwiseRefType::DialogueEvent) \
	op(EWwiseRefType::DialogueArgument) \
	op(EWwiseRefType::Bus) \
	op(EWwiseRefType::AuxBus) \
	op(EWwiseRefType::GameParameter) \
	op(EWwiseRefType::StateGroup) \
	op(EWwiseRefType::State) \
	op(EWwiseRefType::SwitchGroup) \
	op(EWwiseRefType::Switch) \
	op(EWwiseRefType::Trigger) \
	op(EWwiseRefType::ExternalSource) \
	op(EWwiseRefType::AcousticTexture) \
	op(EWwiseRefType::None) 

enum class EWwiseRefType : uint32;
template<> struct TIsUEnumClass<EWwiseRefType> { enum { Value = true }; };
template<> WWISEPROJECTDATABASE_API UEnum* StaticEnum<EWwiseRefType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
