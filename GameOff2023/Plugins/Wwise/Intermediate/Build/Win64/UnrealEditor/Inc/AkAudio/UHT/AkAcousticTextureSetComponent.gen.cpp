// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkAcousticTextureSetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAcousticTextureSetComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkAcousticTextureSetComponent::StaticRegisterNativesUAkAcousticTextureSetComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAcousticTextureSetComponent);
	UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent_NoRegister()
	{
		return UAkAcousticTextureSetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAkAcousticTextureSetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAcousticTextureSetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAcousticTextureSetComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Audiokinetic" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AkAcousticTextureSetComponent.h" },
		{ "ModuleRelativePath", "Classes/AkAcousticTextureSetComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAcousticTextureSetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAcousticTextureSetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAcousticTextureSetComponent_Statics::ClassParams = {
		&UAkAcousticTextureSetComponent::StaticClass,
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
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAcousticTextureSetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAcousticTextureSetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent()
	{
		if (!Z_Registration_Info_UClass_UAkAcousticTextureSetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAcousticTextureSetComponent.OuterSingleton, Z_Construct_UClass_UAkAcousticTextureSetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkAcousticTextureSetComponent.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkAcousticTextureSetComponent>()
	{
		return UAkAcousticTextureSetComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAcousticTextureSetComponent);
	UAkAcousticTextureSetComponent::~UAkAcousticTextureSetComponent() {}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTextureSetComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTextureSetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkAcousticTextureSetComponent, UAkAcousticTextureSetComponent::StaticClass, TEXT("UAkAcousticTextureSetComponent"), &Z_Registration_Info_UClass_UAkAcousticTextureSetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAcousticTextureSetComponent), 842547084U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTextureSetComponent_h_4058567379(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTextureSetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTextureSetComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
