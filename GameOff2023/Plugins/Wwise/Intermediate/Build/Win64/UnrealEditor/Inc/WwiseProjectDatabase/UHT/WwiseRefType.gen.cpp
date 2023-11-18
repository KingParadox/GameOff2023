// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseProjectDatabase/Public/Wwise/Ref/WwiseRefType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseRefType() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseProjectDatabase();
	WWISEPROJECTDATABASE_API UEnum* Z_Construct_UEnum_WwiseProjectDatabase_EWwiseRefType();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWwiseRefType;
	static UEnum* EWwiseRefType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWwiseRefType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWwiseRefType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WwiseProjectDatabase_EWwiseRefType, (UObject*)Z_Construct_UPackage__Script_WwiseProjectDatabase(), TEXT("EWwiseRefType"));
		}
		return Z_Registration_Info_UEnum_EWwiseRefType.OuterSingleton;
	}
	template<> WWISEPROJECTDATABASE_API UEnum* StaticEnum<EWwiseRefType>()
	{
		return EWwiseRefType_StaticEnum();
	}
	struct Z_Construct_UEnum_WwiseProjectDatabase_EWwiseRefType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WwiseProjectDatabase_EWwiseRefType_Statics::Enumerators[] = {
		{ "EWwiseRefType::RootFile", (int64)EWwiseRefType::RootFile },
		{ "EWwiseRefType::ProjectInfo", (int64)EWwiseRefType::ProjectInfo },
		{ "EWwiseRefType::Language", (int64)EWwiseRefType::Language },
		{ "EWwiseRefType::PlatformInfo", (int64)EWwiseRefType::PlatformInfo },
		{ "EWwiseRefType::Platform", (int64)EWwiseRefType::Platform },
		{ "EWwiseRefType::PluginInfo", (int64)EWwiseRefType::PluginInfo },
		{ "EWwiseRefType::PluginLib", (int64)EWwiseRefType::PluginLib },
		{ "EWwiseRefType::SoundBanksInfo", (int64)EWwiseRefType::SoundBanksInfo },
		{ "EWwiseRefType::SoundBank", (int64)EWwiseRefType::SoundBank },
		{ "EWwiseRefType::Media", (int64)EWwiseRefType::Media },
		{ "EWwiseRefType::CustomPlugin", (int64)EWwiseRefType::CustomPlugin },
		{ "EWwiseRefType::PluginShareSet", (int64)EWwiseRefType::PluginShareSet },
		{ "EWwiseRefType::AudioDevice", (int64)EWwiseRefType::AudioDevice },
		{ "EWwiseRefType::Event", (int64)EWwiseRefType::Event },
		{ "EWwiseRefType::SwitchContainer", (int64)EWwiseRefType::SwitchContainer },
		{ "EWwiseRefType::DialogueEvent", (int64)EWwiseRefType::DialogueEvent },
		{ "EWwiseRefType::DialogueArgument", (int64)EWwiseRefType::DialogueArgument },
		{ "EWwiseRefType::Bus", (int64)EWwiseRefType::Bus },
		{ "EWwiseRefType::AuxBus", (int64)EWwiseRefType::AuxBus },
		{ "EWwiseRefType::GameParameter", (int64)EWwiseRefType::GameParameter },
		{ "EWwiseRefType::StateGroup", (int64)EWwiseRefType::StateGroup },
		{ "EWwiseRefType::State", (int64)EWwiseRefType::State },
		{ "EWwiseRefType::SwitchGroup", (int64)EWwiseRefType::SwitchGroup },
		{ "EWwiseRefType::Switch", (int64)EWwiseRefType::Switch },
		{ "EWwiseRefType::Trigger", (int64)EWwiseRefType::Trigger },
		{ "EWwiseRefType::ExternalSource", (int64)EWwiseRefType::ExternalSource },
		{ "EWwiseRefType::AcousticTexture", (int64)EWwiseRefType::AcousticTexture },
		{ "EWwiseRefType::None", (int64)EWwiseRefType::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WwiseProjectDatabase_EWwiseRefType_Statics::Enum_MetaDataParams[] = {
		{ "AcousticTexture.Name", "EWwiseRefType::AcousticTexture" },
		{ "AudioDevice.Name", "EWwiseRefType::AudioDevice" },
		{ "AuxBus.Name", "EWwiseRefType::AuxBus" },
		{ "Bus.Name", "EWwiseRefType::Bus" },
		{ "CustomPlugin.Name", "EWwiseRefType::CustomPlugin" },
		{ "DialogueArgument.Name", "EWwiseRefType::DialogueArgument" },
		{ "DialogueEvent.Name", "EWwiseRefType::DialogueEvent" },
		{ "Event.Name", "EWwiseRefType::Event" },
		{ "ExternalSource.Name", "EWwiseRefType::ExternalSource" },
		{ "GameParameter.Name", "EWwiseRefType::GameParameter" },
		{ "Language.Name", "EWwiseRefType::Language" },
		{ "Media.Name", "EWwiseRefType::Media" },
		{ "ModuleRelativePath", "Public/Wwise/Ref/WwiseRefType.h" },
		{ "None.Name", "EWwiseRefType::None" },
		{ "Platform.Name", "EWwiseRefType::Platform" },
		{ "PlatformInfo.Name", "EWwiseRefType::PlatformInfo" },
		{ "PluginInfo.Name", "EWwiseRefType::PluginInfo" },
		{ "PluginLib.Name", "EWwiseRefType::PluginLib" },
		{ "PluginShareSet.Name", "EWwiseRefType::PluginShareSet" },
		{ "ProjectInfo.Name", "EWwiseRefType::ProjectInfo" },
		{ "RootFile.Name", "EWwiseRefType::RootFile" },
		{ "SoundBank.Name", "EWwiseRefType::SoundBank" },
		{ "SoundBanksInfo.Name", "EWwiseRefType::SoundBanksInfo" },
		{ "State.Name", "EWwiseRefType::State" },
		{ "StateGroup.Name", "EWwiseRefType::StateGroup" },
		{ "Switch.Name", "EWwiseRefType::Switch" },
		{ "SwitchContainer.Name", "EWwiseRefType::SwitchContainer" },
		{ "SwitchGroup.Name", "EWwiseRefType::SwitchGroup" },
		{ "Trigger.Name", "EWwiseRefType::Trigger" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WwiseProjectDatabase_EWwiseRefType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WwiseProjectDatabase,
		nullptr,
		"EWwiseRefType",
		"EWwiseRefType",
		Z_Construct_UEnum_WwiseProjectDatabase_EWwiseRefType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseProjectDatabase_EWwiseRefType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WwiseProjectDatabase_EWwiseRefType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseProjectDatabase_EWwiseRefType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WwiseProjectDatabase_EWwiseRefType()
	{
		if (!Z_Registration_Info_UEnum_EWwiseRefType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWwiseRefType.InnerSingleton, Z_Construct_UEnum_WwiseProjectDatabase_EWwiseRefType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWwiseRefType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseProjectDatabase_Public_Wwise_Ref_WwiseRefType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseProjectDatabase_Public_Wwise_Ref_WwiseRefType_h_Statics::EnumInfo[] = {
		{ EWwiseRefType_StaticEnum, TEXT("EWwiseRefType"), &Z_Registration_Info_UEnum_EWwiseRefType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1609857462U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseProjectDatabase_Public_Wwise_Ref_WwiseRefType_h_1395476121(TEXT("/Script/WwiseProjectDatabase"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseProjectDatabase_Public_Wwise_Ref_WwiseRefType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseProjectDatabase_Public_Wwise_Ref_WwiseRefType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
