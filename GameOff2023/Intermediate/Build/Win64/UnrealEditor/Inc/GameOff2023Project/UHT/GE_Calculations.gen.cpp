// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameOff2023Project/GE_Calculations.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGE_Calculations() {}
// Cross Module References
	GAMEOFF2023PROJECT_API UClass* Z_Construct_UClass_UGE_Calculations();
	GAMEOFF2023PROJECT_API UClass* Z_Construct_UClass_UGE_Calculations_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
	UPackage* Z_Construct_UPackage__Script_GameOff2023Project();
// End Cross Module References
	void UGE_Calculations::StaticRegisterNativesUGE_Calculations()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGE_Calculations);
	UClass* Z_Construct_UClass_UGE_Calculations_NoRegister()
	{
		return UGE_Calculations::StaticClass();
	}
	struct Z_Construct_UClass_UGE_Calculations_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGE_Calculations_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_GameOff2023Project,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGE_Calculations_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GE_Calculations.h" },
		{ "ModuleRelativePath", "GE_Calculations.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGE_Calculations_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGE_Calculations>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGE_Calculations_Statics::ClassParams = {
		&UGE_Calculations::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGE_Calculations_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGE_Calculations_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGE_Calculations()
	{
		if (!Z_Registration_Info_UClass_UGE_Calculations.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGE_Calculations.OuterSingleton, Z_Construct_UClass_UGE_Calculations_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGE_Calculations.OuterSingleton;
	}
	template<> GAMEOFF2023PROJECT_API UClass* StaticClass<UGE_Calculations>()
	{
		return UGE_Calculations::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGE_Calculations);
	UGE_Calculations::~UGE_Calculations() {}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Source_GameOff2023Project_GE_Calculations_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Source_GameOff2023Project_GE_Calculations_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGE_Calculations, UGE_Calculations::StaticClass, TEXT("UGE_Calculations"), &Z_Registration_Info_UClass_UGE_Calculations, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGE_Calculations), 2779117532U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Source_GameOff2023Project_GE_Calculations_h_1149663903(TEXT("/Script/GameOff2023Project"),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Source_GameOff2023Project_GE_Calculations_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Source_GameOff2023Project_GE_Calculations_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
