// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudiokineticTools/Classes/Factories/ActorFactoryAkAmbientSound.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryAkAmbientSound() {}
// Cross Module References
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UActorFactoryAkAmbientSound();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UActorFactoryAkAmbientSound_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// End Cross Module References
	void UActorFactoryAkAmbientSound::StaticRegisterNativesUActorFactoryAkAmbientSound()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryAkAmbientSound);
	UClass* Z_Construct_UClass_UActorFactoryAkAmbientSound_NoRegister()
	{
		return UActorFactoryAkAmbientSound::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*------------------------------------------------------------------------------------\n\x09UActorFactoryAkAmbientSound\n------------------------------------------------------------------------------------*/" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/ActorFactoryAkAmbientSound.h" },
		{ "ModuleRelativePath", "Classes/Factories/ActorFactoryAkAmbientSound.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UActorFactoryAkAmbientSound" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryAkAmbientSound>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics::ClassParams = {
		&UActorFactoryAkAmbientSound::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryAkAmbientSound()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryAkAmbientSound.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryAkAmbientSound.OuterSingleton, Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryAkAmbientSound.OuterSingleton;
	}
	template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UActorFactoryAkAmbientSound>()
	{
		return UActorFactoryAkAmbientSound::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryAkAmbientSound);
	UActorFactoryAkAmbientSound::~UActorFactoryAkAmbientSound() {}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_ActorFactoryAkAmbientSound_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_ActorFactoryAkAmbientSound_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryAkAmbientSound, UActorFactoryAkAmbientSound::StaticClass, TEXT("UActorFactoryAkAmbientSound"), &Z_Registration_Info_UClass_UActorFactoryAkAmbientSound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryAkAmbientSound), 4266723476U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_ActorFactoryAkAmbientSound_h_1585479309(TEXT("/Script/AudiokineticTools"),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_ActorFactoryAkAmbientSound_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AudiokineticTools_Classes_Factories_ActorFactoryAkAmbientSound_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
