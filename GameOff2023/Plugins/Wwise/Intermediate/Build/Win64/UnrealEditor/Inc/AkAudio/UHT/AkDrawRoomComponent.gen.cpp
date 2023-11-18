// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkDrawRoomComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkDrawRoomComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UDrawRoomComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UDrawRoomComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UDrawRoomComponent::StaticRegisterNativesUDrawRoomComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDrawRoomComponent);
	UClass* Z_Construct_UClass_UDrawRoomComponent_NoRegister()
	{
		return UDrawRoomComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDrawRoomComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDrawRoomComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawRoomComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Utility component for drawing a Room in a scene.\n */" },
		{ "HideCategories", "Object Mobility VirtualTexture Trigger" },
		{ "IncludePath", "AkDrawRoomComponent.h" },
		{ "ModuleRelativePath", "Classes/AkDrawRoomComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Utility component for drawing a Room in a scene." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDrawRoomComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrawRoomComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDrawRoomComponent_Statics::ClassParams = {
		&UDrawRoomComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A830A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDrawRoomComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawRoomComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDrawRoomComponent()
	{
		if (!Z_Registration_Info_UClass_UDrawRoomComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDrawRoomComponent.OuterSingleton, Z_Construct_UClass_UDrawRoomComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDrawRoomComponent.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UDrawRoomComponent>()
	{
		return UDrawRoomComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawRoomComponent);
	UDrawRoomComponent::~UDrawRoomComponent() {}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkDrawRoomComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkDrawRoomComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDrawRoomComponent, UDrawRoomComponent::StaticClass, TEXT("UDrawRoomComponent"), &Z_Registration_Info_UClass_UDrawRoomComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDrawRoomComponent), 1901075941U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkDrawRoomComponent_h_1069662145(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkDrawRoomComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkDrawRoomComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
