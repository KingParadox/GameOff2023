// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkEffectShareSet.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "WwiseResourceLoader/Public/Wwise/CookedData/WwiseLocalizedShareSetCookedData.h"
#include "WwiseResourceLoader/Public/Wwise/Info/WwiseObjectInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkEffectShareSet() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkEffectShareSet();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkEffectShareSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedShareSetCookedData();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseObjectInfo();
// End Cross Module References
	void UAkEffectShareSet::StaticRegisterNativesUAkEffectShareSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkEffectShareSet);
	UClass* Z_Construct_UClass_UAkEffectShareSet_NoRegister()
	{
		return UAkEffectShareSet::StaticClass();
	}
	struct Z_Construct_UClass_UAkEffectShareSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShareSetCookedData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShareSetCookedData;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShareSetInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShareSetInfo;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkEffectShareSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAudioType,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkEffectShareSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkEffectShareSet.h" },
		{ "ModuleRelativePath", "Classes/AkEffectShareSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkEffectShareSet_Statics::NewProp_ShareSetCookedData_MetaData[] = {
		{ "Category", "AkEffectShareSet" },
		{ "ModuleRelativePath", "Classes/AkEffectShareSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkEffectShareSet_Statics::NewProp_ShareSetCookedData = { "ShareSetCookedData", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkEffectShareSet, ShareSetCookedData), Z_Construct_UScriptStruct_FWwiseLocalizedShareSetCookedData, METADATA_PARAMS(Z_Construct_UClass_UAkEffectShareSet_Statics::NewProp_ShareSetCookedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkEffectShareSet_Statics::NewProp_ShareSetCookedData_MetaData)) }; // 2434779349
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkEffectShareSet_Statics::NewProp_ShareSetInfo_MetaData[] = {
		{ "Category", "AkEffectShareSet" },
		{ "ModuleRelativePath", "Classes/AkEffectShareSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkEffectShareSet_Statics::NewProp_ShareSetInfo = { "ShareSetInfo", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkEffectShareSet, ShareSetInfo), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(Z_Construct_UClass_UAkEffectShareSet_Statics::NewProp_ShareSetInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkEffectShareSet_Statics::NewProp_ShareSetInfo_MetaData)) }; // 3645774004
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkEffectShareSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkEffectShareSet_Statics::NewProp_ShareSetCookedData,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkEffectShareSet_Statics::NewProp_ShareSetInfo,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkEffectShareSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkEffectShareSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkEffectShareSet_Statics::ClassParams = {
		&UAkEffectShareSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkEffectShareSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkEffectShareSet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkEffectShareSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkEffectShareSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkEffectShareSet()
	{
		if (!Z_Registration_Info_UClass_UAkEffectShareSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkEffectShareSet.OuterSingleton, Z_Construct_UClass_UAkEffectShareSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkEffectShareSet.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkEffectShareSet>()
	{
		return UAkEffectShareSet::StaticClass();
	}
	UAkEffectShareSet::UAkEffectShareSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkEffectShareSet);
	UAkEffectShareSet::~UAkEffectShareSet() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkEffectShareSet)
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkEffectShareSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkEffectShareSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkEffectShareSet, UAkEffectShareSet::StaticClass, TEXT("UAkEffectShareSet"), &Z_Registration_Info_UClass_UAkEffectShareSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkEffectShareSet), 3076787545U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkEffectShareSet_h_2852582595(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkEffectShareSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkEffectShareSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
