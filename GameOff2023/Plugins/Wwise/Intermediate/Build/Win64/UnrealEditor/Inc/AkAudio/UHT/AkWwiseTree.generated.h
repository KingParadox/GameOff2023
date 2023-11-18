// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkWaapiUMG/Components/AkWwiseTree.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAkWwiseObjectDetails;
struct FGuid;
#ifdef AKAUDIO_AkWwiseTree_generated_h
#error "AkWwiseTree.generated.h already included, missing '#pragma once' in AkWwiseTree.h"
#endif
#define AKAUDIO_AkWwiseTree_generated_h

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkWwiseTree_h_28_DELEGATE \
AKAUDIO_API void FOnItemSelectionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnItemSelectionChanged, FGuid ItemSelectedID);


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkWwiseTree_h_31_DELEGATE \
AKAUDIO_API void FOnItemDragDetected_DelegateWrapper(const FMulticastScriptDelegate& OnItemDragDetected, FGuid ItemDraggedID, const FString& ItemDraggedName);


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkWwiseTree_h_43_SPARSE_DATA
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkWwiseTree_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSearchText); \
	DECLARE_FUNCTION(execGetSearchText); \
	DECLARE_FUNCTION(execGetSelectedItem);


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkWwiseTree_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSearchText); \
	DECLARE_FUNCTION(execGetSearchText); \
	DECLARE_FUNCTION(execGetSelectedItem);


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkWwiseTree_h_43_ACCESSORS
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkWwiseTree_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkWwiseTree(); \
	friend struct Z_Construct_UClass_UAkWwiseTree_Statics; \
public: \
	DECLARE_CLASS(UAkWwiseTree, UWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkWwiseTree) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkWwiseTree_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUAkWwiseTree(); \
	friend struct Z_Construct_UClass_UAkWwiseTree_Statics; \
public: \
	DECLARE_CLASS(UAkWwiseTree, UWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkWwiseTree) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkWwiseTree_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkWwiseTree(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkWwiseTree) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkWwiseTree); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkWwiseTree); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkWwiseTree(UAkWwiseTree&&); \
	NO_API UAkWwiseTree(const UAkWwiseTree&); \
public: \
	NO_API virtual ~UAkWwiseTree();


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkWwiseTree_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkWwiseTree(UAkWwiseTree&&); \
	NO_API UAkWwiseTree(const UAkWwiseTree&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkWwiseTree); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkWwiseTree); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkWwiseTree) \
	NO_API virtual ~UAkWwiseTree();


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkWwiseTree_h_40_PROLOG
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkWwiseTree_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkWwiseTree_h_43_SPARSE_DATA \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkWwiseTree_h_43_RPC_WRAPPERS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkWwiseTree_h_43_ACCESSORS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkWwiseTree_h_43_INCLASS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkWwiseTree_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkWwiseTree_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkWwiseTree_h_43_SPARSE_DATA \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkWwiseTree_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkWwiseTree_h_43_ACCESSORS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkWwiseTree_h_43_INCLASS_NO_PURE_DECLS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkWwiseTree_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkWwiseTree>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkWwiseTree_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
