// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkAudioInputComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkAudioInputComponent_generated_h
#error "AkAudioInputComponent.generated.h already included, missing '#pragma once' in AkAudioInputComponent.h"
#endif
#define AKAUDIO_AkAudioInputComponent_generated_h

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_36_SPARSE_DATA
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPostAssociatedAudioInputEvent);


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPostAssociatedAudioInputEvent);


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_36_ACCESSORS
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkAudioInputComponent(); \
	friend struct Z_Construct_UClass_UAkAudioInputComponent_Statics; \
public: \
	DECLARE_CLASS(UAkAudioInputComponent, UAkComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkAudioInputComponent)


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUAkAudioInputComponent(); \
	friend struct Z_Construct_UClass_UAkAudioInputComponent_Statics; \
public: \
	DECLARE_CLASS(UAkAudioInputComponent, UAkComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkAudioInputComponent)


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkAudioInputComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkAudioInputComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkAudioInputComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkAudioInputComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkAudioInputComponent(UAkAudioInputComponent&&); \
	NO_API UAkAudioInputComponent(const UAkAudioInputComponent&); \
public: \
	NO_API virtual ~UAkAudioInputComponent();


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkAudioInputComponent(UAkAudioInputComponent&&); \
	NO_API UAkAudioInputComponent(const UAkAudioInputComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkAudioInputComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkAudioInputComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkAudioInputComponent) \
	NO_API virtual ~UAkAudioInputComponent();


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_33_PROLOG
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_36_SPARSE_DATA \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_36_RPC_WRAPPERS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_36_ACCESSORS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_36_INCLASS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_36_SPARSE_DATA \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_36_ACCESSORS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_36_INCLASS_NO_PURE_DECLS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkAudioInputComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
