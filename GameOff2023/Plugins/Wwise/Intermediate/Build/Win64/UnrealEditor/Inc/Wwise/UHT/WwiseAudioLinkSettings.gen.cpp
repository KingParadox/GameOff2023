// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/AudioLink/WwiseAudioLinkSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseAudioLinkSettings() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AUDIOLINKCORE_API UClass* Z_Construct_UClass_UAudioLinkSettingsAbstract();
	UPackage* Z_Construct_UPackage__Script_Wwise();
	WWISE_API UClass* Z_Construct_UClass_UWwiseAudioLinkSettings();
	WWISE_API UClass* Z_Construct_UClass_UWwiseAudioLinkSettings_NoRegister();
// End Cross Module References
	void UWwiseAudioLinkSettings::StaticRegisterNativesUWwiseAudioLinkSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwiseAudioLinkSettings);
	UClass* Z_Construct_UClass_UWwiseAudioLinkSettings_NoRegister()
	{
		return UWwiseAudioLinkSettings::StaticClass();
	}
	struct Z_Construct_UClass_UWwiseAudioLinkSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartEvent_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StartEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldClearBufferOnReceipt_MetaData[];
#endif
		static void NewProp_bShouldClearBufferOnReceipt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldClearBufferOnReceipt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProducerToConsumerBufferRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProducerToConsumerBufferRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialSilenceFillRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialSilenceFillRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartEventResolved_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StartEventResolved;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioLinkSettingsAbstract,
		(UObject* (*)())Z_Construct_UPackage__Script_Wwise,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AudioLinkRuntime/Public/Wwise/AudioLink/WwiseAudioLinkSettings.h" },
		{ "ModuleRelativePath", "AudioLinkRuntime/Public/Wwise/AudioLink/WwiseAudioLinkSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_StartEvent_MetaData[] = {
		{ "Category", "Wwise|AudioLink" },
		{ "ModuleRelativePath", "AudioLinkRuntime/Public/Wwise/AudioLink/WwiseAudioLinkSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_StartEvent = { "StartEvent", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWwiseAudioLinkSettings, StartEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_StartEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_StartEvent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt_MetaData[] = {
		{ "Category", "Wwise|AudioLink" },
		{ "Comment", "/** If this is set, the receiving code will clear the buffer after it's read, so it's not rendered by Unreal. Only applies if running both renderers at once.  */" },
		{ "ModuleRelativePath", "AudioLinkRuntime/Public/Wwise/AudioLink/WwiseAudioLinkSettings.h" },
		{ "ToolTip", "If this is set, the receiving code will clear the buffer after it's read, so it's not rendered by Unreal. Only applies if running both renderers at once." },
	};
#endif
	void Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt_SetBit(void* Obj)
	{
		((UWwiseAudioLinkSettings*)Obj)->bShouldClearBufferOnReceipt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt = { "bShouldClearBufferOnReceipt", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWwiseAudioLinkSettings), &Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_ProducerToConsumerBufferRatio_MetaData[] = {
		{ "Category", "Wwise|AudioLink" },
		{ "Comment", "/** This is the ratio of producer to consumer buffer size, 2.0 means its twice as big as the consumer buffer.  */" },
		{ "ModuleRelativePath", "AudioLinkRuntime/Public/Wwise/AudioLink/WwiseAudioLinkSettings.h" },
		{ "ToolTip", "This is the ratio of producer to consumer buffer size, 2.0 means its twice as big as the consumer buffer." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_ProducerToConsumerBufferRatio = { "ProducerToConsumerBufferRatio", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWwiseAudioLinkSettings, ProducerToConsumerBufferRatio), METADATA_PARAMS(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_ProducerToConsumerBufferRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_ProducerToConsumerBufferRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_InitialSilenceFillRatio_MetaData[] = {
		{ "Category", "Wwise|AudioLink" },
		{ "Comment", "/** Ratio of initial buffer to fill with silence ahead of consumption. This can resolve starvation at the cost of added latency. */" },
		{ "ModuleRelativePath", "AudioLinkRuntime/Public/Wwise/AudioLink/WwiseAudioLinkSettings.h" },
		{ "ToolTip", "Ratio of initial buffer to fill with silence ahead of consumption. This can resolve starvation at the cost of added latency." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_InitialSilenceFillRatio = { "InitialSilenceFillRatio", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWwiseAudioLinkSettings, InitialSilenceFillRatio), METADATA_PARAMS(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_InitialSilenceFillRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_InitialSilenceFillRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_StartEventResolved_MetaData[] = {
		{ "Comment", "/** Once the SoftObjectReference has been resolved, attach the reference here so it's owned. */" },
		{ "ModuleRelativePath", "AudioLinkRuntime/Public/Wwise/AudioLink/WwiseAudioLinkSettings.h" },
		{ "ToolTip", "Once the SoftObjectReference has been resolved, attach the reference here so it's owned." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_StartEventResolved = { "StartEventResolved", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWwiseAudioLinkSettings, StartEventResolved), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_StartEventResolved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_StartEventResolved_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_StartEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_ProducerToConsumerBufferRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_InitialSilenceFillRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::NewProp_StartEventResolved,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseAudioLinkSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::ClassParams = {
		&UWwiseAudioLinkSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::PropPointers),
		0,
		0x001010A6u,
		METADATA_PARAMS(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWwiseAudioLinkSettings()
	{
		if (!Z_Registration_Info_UClass_UWwiseAudioLinkSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseAudioLinkSettings.OuterSingleton, Z_Construct_UClass_UWwiseAudioLinkSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWwiseAudioLinkSettings.OuterSingleton;
	}
	template<> WWISE_API UClass* StaticClass<UWwiseAudioLinkSettings>()
	{
		return UWwiseAudioLinkSettings::StaticClass();
	}
	UWwiseAudioLinkSettings::UWwiseAudioLinkSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseAudioLinkSettings);
	UWwiseAudioLinkSettings::~UWwiseAudioLinkSettings() {}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseAudioLinkSettings, UWwiseAudioLinkSettings::StaticClass, TEXT("UWwiseAudioLinkSettings"), &Z_Registration_Info_UClass_UWwiseAudioLinkSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseAudioLinkSettings), 3053425306U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkSettings_h_71970847(TEXT("/Script/Wwise"),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
