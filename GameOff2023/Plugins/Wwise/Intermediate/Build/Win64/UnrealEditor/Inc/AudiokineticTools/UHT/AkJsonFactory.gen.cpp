// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudiokineticTools/Classes/Factories/AkJsonFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkJsonFactory() {}
// Cross Module References
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkJsonFactory();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkJsonFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// End Cross Module References
	void UAkJsonFactory::StaticRegisterNativesUAkJsonFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkJsonFactory);
	UClass* Z_Construct_UClass_UAkJsonFactory_NoRegister()
	{
		return UAkJsonFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAkJsonFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkJsonFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkJsonFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*------------------------------------------------------------------------------------\n\x09UAkJsonFactory\n------------------------------------------------------------------------------------*/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/AkJsonFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/AkJsonFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UAkJsonFactory" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkJsonFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkJsonFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkJsonFactory_Statics::ClassParams = {
		&UAkJsonFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkJsonFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkJsonFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkJsonFactory()
	{
		if (!Z_Registration_Info_UClass_UAkJsonFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkJsonFactory.OuterSingleton, Z_Construct_UClass_UAkJsonFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkJsonFactory.OuterSingleton;
	}
	template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UAkJsonFactory>()
	{
		return UAkJsonFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkJsonFactory);
	UAkJsonFactory::~UAkJsonFactory() {}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_AkJsonFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_AkJsonFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkJsonFactory, UAkJsonFactory::StaticClass, TEXT("UAkJsonFactory"), &Z_Registration_Info_UClass_UAkJsonFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkJsonFactory), 4242480624U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_AkJsonFactory_h_388785554(TEXT("/Script/AudiokineticTools"),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_AkJsonFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_AkJsonFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
