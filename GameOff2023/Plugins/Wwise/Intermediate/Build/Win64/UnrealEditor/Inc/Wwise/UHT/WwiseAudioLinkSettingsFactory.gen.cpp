// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../WwiseAudioLinkEditor/Private/Wwise/AudioLink/WwiseAudioLinkSettingsFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseAudioLinkSettingsFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_Wwise();
	WWISE_API UClass* Z_Construct_UClass_UWwiseAudioLinkSettingsFactory();
	WWISE_API UClass* Z_Construct_UClass_UWwiseAudioLinkSettingsFactory_NoRegister();
// End Cross Module References
	void UWwiseAudioLinkSettingsFactory::StaticRegisterNativesUWwiseAudioLinkSettingsFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwiseAudioLinkSettingsFactory);
	UClass* Z_Construct_UClass_UWwiseAudioLinkSettingsFactory_NoRegister()
	{
		return UWwiseAudioLinkSettingsFactory::StaticClass();
	}
	struct Z_Construct_UClass_UWwiseAudioLinkSettingsFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWwiseAudioLinkSettingsFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_Wwise,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseAudioLinkSettingsFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "AudioLinkEditor/Private/Wwise/AudioLink/WwiseAudioLinkSettingsFactory.h" },
		{ "ModuleRelativePath", "AudioLinkEditor/Private/Wwise/AudioLink/WwiseAudioLinkSettingsFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWwiseAudioLinkSettingsFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseAudioLinkSettingsFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseAudioLinkSettingsFactory_Statics::ClassParams = {
		&UWwiseAudioLinkSettingsFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWwiseAudioLinkSettingsFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkSettingsFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWwiseAudioLinkSettingsFactory()
	{
		if (!Z_Registration_Info_UClass_UWwiseAudioLinkSettingsFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseAudioLinkSettingsFactory.OuterSingleton, Z_Construct_UClass_UWwiseAudioLinkSettingsFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWwiseAudioLinkSettingsFactory.OuterSingleton;
	}
	template<> WWISE_API UClass* StaticClass<UWwiseAudioLinkSettingsFactory>()
	{
		return UWwiseAudioLinkSettingsFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseAudioLinkSettingsFactory);
	UWwiseAudioLinkSettingsFactory::~UWwiseAudioLinkSettingsFactory() {}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseAudioLinkEditor_Private_Wwise_AudioLink_WwiseAudioLinkSettingsFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseAudioLinkEditor_Private_Wwise_AudioLink_WwiseAudioLinkSettingsFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseAudioLinkSettingsFactory, UWwiseAudioLinkSettingsFactory::StaticClass, TEXT("UWwiseAudioLinkSettingsFactory"), &Z_Registration_Info_UClass_UWwiseAudioLinkSettingsFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseAudioLinkSettingsFactory), 1268153999U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseAudioLinkEditor_Private_Wwise_AudioLink_WwiseAudioLinkSettingsFactory_h_3997624250(TEXT("/Script/Wwise"),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseAudioLinkEditor_Private_Wwise_AudioLink_WwiseAudioLinkSettingsFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseAudioLinkEditor_Private_Wwise_AudioLink_WwiseAudioLinkSettingsFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
