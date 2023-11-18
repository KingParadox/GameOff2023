// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudiokineticTools/Classes/AssetManagement/GenerateSoundBanksCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerateSoundBanksCommandlet() {}
// Cross Module References
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UGenerateSoundBanksCommandlet();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UGenerateSoundBanksCommandlet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// End Cross Module References
	void UGenerateSoundBanksCommandlet::StaticRegisterNativesUGenerateSoundBanksCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenerateSoundBanksCommandlet);
	UClass* Z_Construct_UClass_UGenerateSoundBanksCommandlet_NoRegister()
	{
		return UGenerateSoundBanksCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UGenerateSoundBanksCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenerateSoundBanksCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateSoundBanksCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AssetManagement/GenerateSoundBanksCommandlet.h" },
		{ "ModuleRelativePath", "Classes/AssetManagement/GenerateSoundBanksCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenerateSoundBanksCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenerateSoundBanksCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenerateSoundBanksCommandlet_Statics::ClassParams = {
		&UGenerateSoundBanksCommandlet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGenerateSoundBanksCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateSoundBanksCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenerateSoundBanksCommandlet()
	{
		if (!Z_Registration_Info_UClass_UGenerateSoundBanksCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenerateSoundBanksCommandlet.OuterSingleton, Z_Construct_UClass_UGenerateSoundBanksCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGenerateSoundBanksCommandlet.OuterSingleton;
	}
	template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UGenerateSoundBanksCommandlet>()
	{
		return UGenerateSoundBanksCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenerateSoundBanksCommandlet);
	UGenerateSoundBanksCommandlet::~UGenerateSoundBanksCommandlet() {}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_GenerateSoundBanksCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_GenerateSoundBanksCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGenerateSoundBanksCommandlet, UGenerateSoundBanksCommandlet::StaticClass, TEXT("UGenerateSoundBanksCommandlet"), &Z_Registration_Info_UClass_UGenerateSoundBanksCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenerateSoundBanksCommandlet), 2983877707U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_GenerateSoundBanksCommandlet_h_827341343(TEXT("/Script/AudiokineticTools"),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_GenerateSoundBanksCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_GenerateSoundBanksCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
