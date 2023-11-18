// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameOff2023Project/GASGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASGameplayAbility() {}
// Cross Module References
	GAMEOFF2023PROJECT_API UClass* Z_Construct_UClass_UGASGameplayAbility();
	GAMEOFF2023PROJECT_API UClass* Z_Construct_UClass_UGASGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_GameOff2023Project();
// End Cross Module References
	void UGASGameplayAbility::StaticRegisterNativesUGASGameplayAbility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGASGameplayAbility);
	UClass* Z_Construct_UClass_UGASGameplayAbility_NoRegister()
	{
		return UGASGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UGASGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGASGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_GameOff2023Project,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GASGameplayAbility.h" },
		{ "ModuleRelativePath", "GASGameplayAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGASGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGASGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGASGameplayAbility_Statics::ClassParams = {
		&UGASGameplayAbility::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGASGameplayAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGASGameplayAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGASGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_UGASGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGASGameplayAbility.OuterSingleton, Z_Construct_UClass_UGASGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGASGameplayAbility.OuterSingleton;
	}
	template<> GAMEOFF2023PROJECT_API UClass* StaticClass<UGASGameplayAbility>()
	{
		return UGASGameplayAbility::StaticClass();
	}
	UGASGameplayAbility::UGASGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGASGameplayAbility);
	UGASGameplayAbility::~UGASGameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Source_GameOff2023Project_GASGameplayAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Source_GameOff2023Project_GASGameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGASGameplayAbility, UGASGameplayAbility::StaticClass, TEXT("UGASGameplayAbility"), &Z_Registration_Info_UClass_UGASGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGASGameplayAbility), 2465786062U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Source_GameOff2023Project_GASGameplayAbility_h_240130509(TEXT("/Script/GameOff2023Project"),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Source_GameOff2023Project_GASGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Source_GameOff2023Project_GASGameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
