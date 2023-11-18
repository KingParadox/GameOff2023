// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InitializationSettings/AkAudioSession.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkAudioSession_generated_h
#error "AkAudioSession.generated.h already included, missing '#pragma once' in AkAudioSession.h"
#endif
#define AKAUDIO_AkAudioSession_generated_h

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkAudioSession_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkAudioSession_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkAudioSession>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkAudioSession_h


#define FOREACH_ENUM_EAKAUDIOSESSIONCATEGORY(op) \
	op(EAkAudioSessionCategory::Ambient) \
	op(EAkAudioSessionCategory::SoloAmbient) \
	op(EAkAudioSessionCategory::PlayAndRecord) 

enum class EAkAudioSessionCategory;
template<> struct TIsUEnumClass<EAkAudioSessionCategory> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioSessionCategory>();

#define FOREACH_ENUM_EAKAUDIOSESSIONCATEGORYOPTIONS(op) \
	op(EAkAudioSessionCategoryOptions::MixWithOthers) \
	op(EAkAudioSessionCategoryOptions::DuckOthers) \
	op(EAkAudioSessionCategoryOptions::AllowBluetooth) \
	op(EAkAudioSessionCategoryOptions::DefaultToSpeaker) 

enum class EAkAudioSessionCategoryOptions : uint32;
template<> struct TIsUEnumClass<EAkAudioSessionCategoryOptions> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioSessionCategoryOptions>();

#define FOREACH_ENUM_EAKAUDIOSESSIONMODE(op) \
	op(EAkAudioSessionMode::Default) \
	op(EAkAudioSessionMode::VoiceChat) \
	op(EAkAudioSessionMode::GameChat) \
	op(EAkAudioSessionMode::VideoRecording) \
	op(EAkAudioSessionMode::Measurement) \
	op(EAkAudioSessionMode::MoviePlayback) \
	op(EAkAudioSessionMode::VideoChat) 

enum class EAkAudioSessionMode;
template<> struct TIsUEnumClass<EAkAudioSessionMode> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioSessionMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
