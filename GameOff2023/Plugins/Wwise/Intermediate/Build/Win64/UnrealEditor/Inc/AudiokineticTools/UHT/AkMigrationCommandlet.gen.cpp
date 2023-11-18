// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudiokineticTools/Classes/AssetManagement/AkMigrationCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMigrationCommandlet() {}
// Cross Module References
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkMigrationCommandlet();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkMigrationCommandlet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// End Cross Module References
	void UAkMigrationCommandlet::StaticRegisterNativesUAkMigrationCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkMigrationCommandlet);
	UClass* Z_Construct_UClass_UAkMigrationCommandlet_NoRegister()
	{
		return UAkMigrationCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UAkMigrationCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkMigrationCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMigrationCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AssetManagement/AkMigrationCommandlet.h" },
		{ "ModuleRelativePath", "Classes/AssetManagement/AkMigrationCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkMigrationCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMigrationCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkMigrationCommandlet_Statics::ClassParams = {
		&UAkMigrationCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAkMigrationCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMigrationCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkMigrationCommandlet()
	{
		if (!Z_Registration_Info_UClass_UAkMigrationCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkMigrationCommandlet.OuterSingleton, Z_Construct_UClass_UAkMigrationCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkMigrationCommandlet.OuterSingleton;
	}
	template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UAkMigrationCommandlet>()
	{
		return UAkMigrationCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkMigrationCommandlet);
	UAkMigrationCommandlet::~UAkMigrationCommandlet() {}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_AkMigrationCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_AkMigrationCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkMigrationCommandlet, UAkMigrationCommandlet::StaticClass, TEXT("UAkMigrationCommandlet"), &Z_Registration_Info_UClass_UAkMigrationCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkMigrationCommandlet), 1984164076U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_AkMigrationCommandlet_h_1369621982(TEXT("/Script/AudiokineticTools"),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_AkMigrationCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_AkMigrationCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
