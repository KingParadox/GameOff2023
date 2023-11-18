// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkDrawPortalComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkDrawPortalComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UDrawPortalComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UDrawPortalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UDrawPortalComponent::StaticRegisterNativesUDrawPortalComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDrawPortalComponent);
	UClass* Z_Construct_UClass_UDrawPortalComponent_NoRegister()
	{
		return UDrawPortalComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDrawPortalComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDrawPortalComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawPortalComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Utility component for drawing a portal in a scene.\n */" },
		{ "HideCategories", "Object Mobility VirtualTexture Trigger" },
		{ "IncludePath", "AkDrawPortalComponent.h" },
		{ "ModuleRelativePath", "Classes/AkDrawPortalComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Utility component for drawing a portal in a scene." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDrawPortalComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrawPortalComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDrawPortalComponent_Statics::ClassParams = {
		&UDrawPortalComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A830A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDrawPortalComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPortalComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDrawPortalComponent()
	{
		if (!Z_Registration_Info_UClass_UDrawPortalComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDrawPortalComponent.OuterSingleton, Z_Construct_UClass_UDrawPortalComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDrawPortalComponent.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UDrawPortalComponent>()
	{
		return UDrawPortalComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawPortalComponent);
	UDrawPortalComponent::~UDrawPortalComponent() {}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkDrawPortalComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkDrawPortalComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDrawPortalComponent, UDrawPortalComponent::StaticClass, TEXT("UDrawPortalComponent"), &Z_Registration_Info_UClass_UDrawPortalComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDrawPortalComponent), 1063718147U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkDrawPortalComponent_h_3690643836(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkDrawPortalComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkDrawPortalComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
