// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/Info/WwiseEventInfoLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWwiseEventDestroyOptions : uint8;
enum class EWwiseEventSwitchContainerLoading : uint8;
struct FGuid;
struct FWwiseEventInfo;
#ifdef WWISERESOURCELOADER_WwiseEventInfoLibrary_generated_h
#error "WwiseEventInfoLibrary.generated.h already included, missing '#pragma once' in WwiseEventInfoLibrary.h"
#endif
#define WWISERESOURCELOADER_WwiseEventInfoLibrary_generated_h

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h_28_SPARSE_DATA
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetHardCodedSoundBankShortId); \
	DECLARE_FUNCTION(execSetDestroyOptions); \
	DECLARE_FUNCTION(execSetSwitchContainerLoading); \
	DECLARE_FUNCTION(execSetWwiseName); \
	DECLARE_FUNCTION(execSetWwiseShortId); \
	DECLARE_FUNCTION(execSetWwiseGuid); \
	DECLARE_FUNCTION(execGetHardCodedSoundBankShortId); \
	DECLARE_FUNCTION(execGetDestroyOptions); \
	DECLARE_FUNCTION(execGetSwitchContainerLoading); \
	DECLARE_FUNCTION(execGetWwiseName); \
	DECLARE_FUNCTION(execGetWwiseShortId); \
	DECLARE_FUNCTION(execGetWwiseGuid); \
	DECLARE_FUNCTION(execBreakStruct); \
	DECLARE_FUNCTION(execMakeStruct);


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetHardCodedSoundBankShortId); \
	DECLARE_FUNCTION(execSetDestroyOptions); \
	DECLARE_FUNCTION(execSetSwitchContainerLoading); \
	DECLARE_FUNCTION(execSetWwiseName); \
	DECLARE_FUNCTION(execSetWwiseShortId); \
	DECLARE_FUNCTION(execSetWwiseGuid); \
	DECLARE_FUNCTION(execGetHardCodedSoundBankShortId); \
	DECLARE_FUNCTION(execGetDestroyOptions); \
	DECLARE_FUNCTION(execGetSwitchContainerLoading); \
	DECLARE_FUNCTION(execGetWwiseName); \
	DECLARE_FUNCTION(execGetWwiseShortId); \
	DECLARE_FUNCTION(execGetWwiseGuid); \
	DECLARE_FUNCTION(execBreakStruct); \
	DECLARE_FUNCTION(execMakeStruct);


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h_28_ACCESSORS
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWwiseEventInfoLibrary(); \
	friend struct Z_Construct_UClass_UWwiseEventInfoLibrary_Statics; \
public: \
	DECLARE_CLASS(UWwiseEventInfoLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WwiseResourceLoader"), NO_API) \
	DECLARE_SERIALIZER(UWwiseEventInfoLibrary)


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUWwiseEventInfoLibrary(); \
	friend struct Z_Construct_UClass_UWwiseEventInfoLibrary_Statics; \
public: \
	DECLARE_CLASS(UWwiseEventInfoLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WwiseResourceLoader"), NO_API) \
	DECLARE_SERIALIZER(UWwiseEventInfoLibrary)


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWwiseEventInfoLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWwiseEventInfoLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWwiseEventInfoLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWwiseEventInfoLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWwiseEventInfoLibrary(UWwiseEventInfoLibrary&&); \
	NO_API UWwiseEventInfoLibrary(const UWwiseEventInfoLibrary&); \
public: \
	NO_API virtual ~UWwiseEventInfoLibrary();


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWwiseEventInfoLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWwiseEventInfoLibrary(UWwiseEventInfoLibrary&&); \
	NO_API UWwiseEventInfoLibrary(const UWwiseEventInfoLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWwiseEventInfoLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWwiseEventInfoLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWwiseEventInfoLibrary) \
	NO_API virtual ~UWwiseEventInfoLibrary();


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h_25_PROLOG
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h_28_SPARSE_DATA \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h_28_RPC_WRAPPERS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h_28_ACCESSORS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h_28_INCLASS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h_28_SPARSE_DATA \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h_28_ACCESSORS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h_28_INCLASS_NO_PURE_DECLS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WWISERESOURCELOADER_API UClass* StaticClass<class UWwiseEventInfoLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
