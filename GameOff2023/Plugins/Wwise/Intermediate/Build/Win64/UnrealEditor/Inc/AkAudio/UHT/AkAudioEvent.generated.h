// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkAudioEvent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAkComponent;
class UAkGameObject;
class UObject;
enum class AkActionOnEventType : uint8;
enum class EAkCurveInterpolation : uint8;
struct FLatentActionInfo;
#ifdef AKAUDIO_AkAudioEvent_generated_h
#error "AkAudioEvent.generated.h already included, missing '#pragma once' in AkAudioEvent.h"
#endif
#define AKAUDIO_AkAudioEvent_generated_h

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_SPARSE_DATA
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExecuteAction); \
	DECLARE_FUNCTION(execPostAtLocation); \
	DECLARE_FUNCTION(execPostOnGameObjectAndWait); \
	DECLARE_FUNCTION(execPostOnComponentAndWait); \
	DECLARE_FUNCTION(execPostOnActorAndWait); \
	DECLARE_FUNCTION(execPostOnGameObject); \
	DECLARE_FUNCTION(execPostOnComponent); \
	DECLARE_FUNCTION(execPostOnActor);


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExecuteAction); \
	DECLARE_FUNCTION(execPostAtLocation); \
	DECLARE_FUNCTION(execPostOnGameObjectAndWait); \
	DECLARE_FUNCTION(execPostOnComponentAndWait); \
	DECLARE_FUNCTION(execPostOnActorAndWait); \
	DECLARE_FUNCTION(execPostOnGameObject); \
	DECLARE_FUNCTION(execPostOnComponent); \
	DECLARE_FUNCTION(execPostOnActor);


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_ACCESSORS
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAkAudioEvent, NO_API)


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkAudioEvent(); \
	friend struct Z_Construct_UClass_UAkAudioEvent_Statics; \
public: \
	DECLARE_CLASS(UAkAudioEvent, UAkAudioType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkAudioEvent) \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_ARCHIVESERIALIZER


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUAkAudioEvent(); \
	friend struct Z_Construct_UClass_UAkAudioEvent_Statics; \
public: \
	DECLARE_CLASS(UAkAudioEvent, UAkAudioType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkAudioEvent) \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_ARCHIVESERIALIZER


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkAudioEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkAudioEvent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkAudioEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkAudioEvent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkAudioEvent(UAkAudioEvent&&); \
	NO_API UAkAudioEvent(const UAkAudioEvent&); \
public: \
	NO_API virtual ~UAkAudioEvent();


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkAudioEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkAudioEvent(UAkAudioEvent&&); \
	NO_API UAkAudioEvent(const UAkAudioEvent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkAudioEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkAudioEvent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkAudioEvent) \
	NO_API virtual ~UAkAudioEvent();


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_38_PROLOG
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_SPARSE_DATA \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_RPC_WRAPPERS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_ACCESSORS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_INCLASS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_SPARSE_DATA \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_ACCESSORS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_INCLASS_NO_PURE_DECLS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkAudioEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
