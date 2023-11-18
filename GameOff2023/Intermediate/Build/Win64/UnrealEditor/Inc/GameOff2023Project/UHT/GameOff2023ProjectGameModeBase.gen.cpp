// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameOff2023Project/GameOff2023ProjectGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameOff2023ProjectGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	GAMEOFF2023PROJECT_API UClass* Z_Construct_UClass_AGameOff2023ProjectGameModeBase();
	GAMEOFF2023PROJECT_API UClass* Z_Construct_UClass_AGameOff2023ProjectGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameOff2023Project();
// End Cross Module References
	void AGameOff2023ProjectGameModeBase::StaticRegisterNativesAGameOff2023ProjectGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameOff2023ProjectGameModeBase);
	UClass* Z_Construct_UClass_AGameOff2023ProjectGameModeBase_NoRegister()
	{
		return AGameOff2023ProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGameOff2023ProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameOff2023ProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameOff2023Project,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameOff2023ProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameOff2023ProjectGameModeBase.h" },
		{ "ModuleRelativePath", "GameOff2023ProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameOff2023ProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameOff2023ProjectGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameOff2023ProjectGameModeBase_Statics::ClassParams = {
		&AGameOff2023ProjectGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameOff2023ProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameOff2023ProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameOff2023ProjectGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AGameOff2023ProjectGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameOff2023ProjectGameModeBase.OuterSingleton, Z_Construct_UClass_AGameOff2023ProjectGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameOff2023ProjectGameModeBase.OuterSingleton;
	}
	template<> GAMEOFF2023PROJECT_API UClass* StaticClass<AGameOff2023ProjectGameModeBase>()
	{
		return AGameOff2023ProjectGameModeBase::StaticClass();
	}
	AGameOff2023ProjectGameModeBase::AGameOff2023ProjectGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameOff2023ProjectGameModeBase);
	AGameOff2023ProjectGameModeBase::~AGameOff2023ProjectGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Source_GameOff2023Project_GameOff2023ProjectGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Source_GameOff2023Project_GameOff2023ProjectGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameOff2023ProjectGameModeBase, AGameOff2023ProjectGameModeBase::StaticClass, TEXT("AGameOff2023ProjectGameModeBase"), &Z_Registration_Info_UClass_AGameOff2023ProjectGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameOff2023ProjectGameModeBase), 2019199332U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Source_GameOff2023Project_GameOff2023ProjectGameModeBase_h_1529492969(TEXT("/Script/GameOff2023Project"),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Source_GameOff2023Project_GameOff2023ProjectGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Source_GameOff2023Project_GameOff2023ProjectGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
