// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseSimpleExternalSource/Public/Wwise/SimpleExtSrc/WwiseExternalSourceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseExternalSourceSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	UPackage* Z_Construct_UPackage__Script_WwiseSimpleExternalSource();
	WWISESIMPLEEXTERNALSOURCE_API UClass* Z_Construct_UClass_UWwiseExternalSourceSettings();
	WWISESIMPLEEXTERNALSOURCE_API UClass* Z_Construct_UClass_UWwiseExternalSourceSettings_NoRegister();
// End Cross Module References
	void UWwiseExternalSourceSettings::StaticRegisterNativesUWwiseExternalSourceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwiseExternalSourceSettings);
	UClass* Z_Construct_UClass_UWwiseExternalSourceSettings_NoRegister()
	{
		return UWwiseExternalSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UWwiseExternalSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaInfoTable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MediaInfoTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSourceDefaultMedia_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalSourceDefaultMedia;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSourceStagingDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalSourceStagingDirectory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseSimpleExternalSource,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Wwise/SimpleExtSrc/WwiseExternalSourceSettings.h" },
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_MediaInfoTable_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.DataTable" },
		{ "Category", "ExternalSources" },
		{ "Comment", "//Table of all information required to properly load all external source media in the project\n//All files in this table are packaged in the built project\n" },
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceSettings.h" },
		{ "ToolTip", "Table of all information required to properly load all external source media in the project\nAll files in this table are packaged in the built project" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_MediaInfoTable = { "MediaInfoTable", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWwiseExternalSourceSettings, MediaInfoTable), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_MediaInfoTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_MediaInfoTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_ExternalSourceDefaultMedia_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.DataTable" },
		{ "Category", "ExternalSources" },
		{ "Comment", "//Optional table that defines a default media entry in the MediaInfoTable to load when an External Source is loaded\n" },
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceSettings.h" },
		{ "ToolTip", "Optional table that defines a default media entry in the MediaInfoTable to load when an External Source is loaded" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_ExternalSourceDefaultMedia = { "ExternalSourceDefaultMedia", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWwiseExternalSourceSettings, ExternalSourceDefaultMedia), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_ExternalSourceDefaultMedia_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_ExternalSourceDefaultMedia_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_ExternalSourceStagingDirectory_MetaData[] = {
		{ "Category", "ExternalSources" },
		{ "Comment", "//Staging location for External Source Media when cooking the project\n//This is the location from which to load external source media in the built project\n" },
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceSettings.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "Staging location for External Source Media when cooking the project\nThis is the location from which to load external source media in the built project" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_ExternalSourceStagingDirectory = { "ExternalSourceStagingDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWwiseExternalSourceSettings, ExternalSourceStagingDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_ExternalSourceStagingDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_ExternalSourceStagingDirectory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_MediaInfoTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_ExternalSourceDefaultMedia,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::NewProp_ExternalSourceStagingDirectory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseExternalSourceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::ClassParams = {
		&UWwiseExternalSourceSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWwiseExternalSourceSettings()
	{
		if (!Z_Registration_Info_UClass_UWwiseExternalSourceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseExternalSourceSettings.OuterSingleton, Z_Construct_UClass_UWwiseExternalSourceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWwiseExternalSourceSettings.OuterSingleton;
	}
	template<> WWISESIMPLEEXTERNALSOURCE_API UClass* StaticClass<UWwiseExternalSourceSettings>()
	{
		return UWwiseExternalSourceSettings::StaticClass();
	}
	UWwiseExternalSourceSettings::UWwiseExternalSourceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseExternalSourceSettings);
	UWwiseExternalSourceSettings::~UWwiseExternalSourceSettings() {}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseSimpleExternalSource_Public_Wwise_SimpleExtSrc_WwiseExternalSourceSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseSimpleExternalSource_Public_Wwise_SimpleExtSrc_WwiseExternalSourceSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseExternalSourceSettings, UWwiseExternalSourceSettings::StaticClass, TEXT("UWwiseExternalSourceSettings"), &Z_Registration_Info_UClass_UWwiseExternalSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseExternalSourceSettings), 1630294383U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseSimpleExternalSource_Public_Wwise_SimpleExtSrc_WwiseExternalSourceSettings_h_441405603(TEXT("/Script/WwiseSimpleExternalSource"),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseSimpleExternalSource_Public_Wwise_SimpleExtSrc_WwiseExternalSourceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseSimpleExternalSource_Public_Wwise_SimpleExtSrc_WwiseExternalSourceSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
