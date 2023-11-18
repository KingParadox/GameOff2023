// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkGameObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAudioEvent;
class UAkRtpc;
class UObject;
enum class ERTPCValueType : uint8;
struct FLatentActionInfo;
#ifdef AKAUDIO_AkGameObject_generated_h
#error "AkGameObject.generated.h already included, missing '#pragma once' in AkGameObject.h"
#endif
#define AKAUDIO_AkGameObject_generated_h

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_33_SPARSE_DATA
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRTPCValue); \
	DECLARE_FUNCTION(execSetRTPCValue); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPostAkEventAsync); \
	DECLARE_FUNCTION(execPostAkEvent); \
	DECLARE_FUNCTION(execPostAssociatedAkEventAsync); \
	DECLARE_FUNCTION(execPostAssociatedAkEvent);


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRTPCValue); \
	DECLARE_FUNCTION(execSetRTPCValue); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPostAkEventAsync); \
	DECLARE_FUNCTION(execPostAkEvent); \
	DECLARE_FUNCTION(execPostAssociatedAkEventAsync); \
	DECLARE_FUNCTION(execPostAssociatedAkEvent);


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_33_ACCESSORS
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkGameObject(); \
	friend struct Z_Construct_UClass_UAkGameObject_Statics; \
public: \
	DECLARE_CLASS(UAkGameObject, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkGameObject)


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUAkGameObject(); \
	friend struct Z_Construct_UClass_UAkGameObject_Statics; \
public: \
	DECLARE_CLASS(UAkGameObject, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkGameObject)


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkGameObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkGameObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkGameObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkGameObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkGameObject(UAkGameObject&&); \
	NO_API UAkGameObject(const UAkGameObject&); \
public: \
	NO_API virtual ~UAkGameObject();


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkGameObject(UAkGameObject&&); \
	NO_API UAkGameObject(const UAkGameObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkGameObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkGameObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkGameObject) \
	NO_API virtual ~UAkGameObject();


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_30_PROLOG
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_33_SPARSE_DATA \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_33_RPC_WRAPPERS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_33_ACCESSORS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_33_INCLASS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_33_SPARSE_DATA \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_33_ACCESSORS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_33_INCLASS_NO_PURE_DECLS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkGameObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
