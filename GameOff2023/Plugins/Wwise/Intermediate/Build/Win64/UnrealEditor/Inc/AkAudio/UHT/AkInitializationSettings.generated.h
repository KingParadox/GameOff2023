// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InitializationSettings/AkInitializationSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkInitializationSettings_generated_h
#error "AkInitializationSettings.generated.h already included, missing '#pragma once' in AkInitializationSettings.h"
#endif
#define AKAUDIO_AkInitializationSettings_generated_h

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkMainOutputSettings>();

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_146_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkSpatialAudioSettings>();

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_189_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkCommunicationSettings>();

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_214_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkCommunicationSettings Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkCommunicationSettingsWithSystemInitialization>();

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_225_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkCommunicationSettings Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkCommunicationSettingsWithCommSelection>();

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_237_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkCommonInitializationSettings>();

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_270_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkCommonInitializationSettings Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkCommonInitializationSettingsWithSampleRate>();

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_280_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkAdvancedInitializationSettings>();

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_321_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkAdvancedInitializationSettings Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkAdvancedInitializationSettingsWithMultiCoreRendering>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h


#define FOREACH_ENUM_EAKPANNINGRULE(op) \
	op(EAkPanningRule::Speakers) \
	op(EAkPanningRule::Headphones) 

enum class EAkPanningRule;
template<> struct TIsUEnumClass<EAkPanningRule> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<EAkPanningRule>();

#define FOREACH_ENUM_EAKCHANNELCONFIGTYPE(op) \
	op(EAkChannelConfigType::Anonymous) \
	op(EAkChannelConfigType::Standard) \
	op(EAkChannelConfigType::Ambisonic) 

enum class EAkChannelConfigType;
template<> struct TIsUEnumClass<EAkChannelConfigType> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<EAkChannelConfigType>();

#define FOREACH_ENUM_EAKCHANNELMASK(op) \
	op(EAkChannelMask::FrontLeft) \
	op(EAkChannelMask::FrontRight) \
	op(EAkChannelMask::FrontCenter) \
	op(EAkChannelMask::LowFrequency) \
	op(EAkChannelMask::BackLeft) \
	op(EAkChannelMask::BackRight) \
	op(EAkChannelMask::BackCenter) \
	op(EAkChannelMask::SideLeft) \
	op(EAkChannelMask::SideRight) \
	op(EAkChannelMask::Top) \
	op(EAkChannelMask::HeightFrontLeft) \
	op(EAkChannelMask::HeightFrontCenter) \
	op(EAkChannelMask::HeightFrontRight) \
	op(EAkChannelMask::HeightBackLeft) \
	op(EAkChannelMask::HeightBackCenter) \
	op(EAkChannelMask::HeightBackRight) 

enum class EAkChannelMask : uint32;
template<> struct TIsUEnumClass<EAkChannelMask> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<EAkChannelMask>();

#define FOREACH_ENUM_EAKCOMMSYSTEM(op) \
	op(EAkCommSystem::Socket) \
	op(EAkCommSystem::HTCS) 

enum class EAkCommSystem;
template<> struct TIsUEnumClass<EAkCommSystem> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<EAkCommSystem>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
