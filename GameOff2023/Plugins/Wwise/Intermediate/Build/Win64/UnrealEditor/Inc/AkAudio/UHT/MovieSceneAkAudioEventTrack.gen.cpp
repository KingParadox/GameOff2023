// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/MovieSceneAkAudioEventTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkAudioEventTrack() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioEventTrack();
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioEventTrack_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UMovieSceneAkAudioEventTrack::StaticRegisterNativesUMovieSceneAkAudioEventTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneAkAudioEventTrack);
	UClass* Z_Construct_UClass_UMovieSceneAkAudioEventTrack_NoRegister()
	{
		return UMovieSceneAkAudioEventTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneAkAudioEventTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneAkAudioEventTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneAkTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAkAudioEventTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneAkAudioEventTrack.h" },
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventTrack.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneAkAudioEventTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneAkAudioEventTrack, IMovieSceneTrackTemplateProducer), false },  // 2931163055
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneAkAudioEventTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneAkAudioEventTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneAkAudioEventTrack_Statics::ClassParams = {
		&UMovieSceneAkAudioEventTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAkAudioEventTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioEventTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneAkAudioEventTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneAkAudioEventTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneAkAudioEventTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneAkAudioEventTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneAkAudioEventTrack.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UMovieSceneAkAudioEventTrack>()
	{
		return UMovieSceneAkAudioEventTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAkAudioEventTrack);
	UMovieSceneAkAudioEventTrack::~UMovieSceneAkAudioEventTrack() {}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneAkAudioEventTrack, UMovieSceneAkAudioEventTrack::StaticClass, TEXT("UMovieSceneAkAudioEventTrack"), &Z_Registration_Info_UClass_UMovieSceneAkAudioEventTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneAkAudioEventTrack), 3660002582U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventTrack_h_3841894315(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
