// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkSurfaceReflectorSetUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSurfaceReflectorSetUtils() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSurfacePoly();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts;
class UScriptStruct* FAkSurfaceEdgeVerts::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkSurfaceEdgeVerts"));
	}
	return Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkSurfaceEdgeVerts>()
{
	return FAkSurfaceEdgeVerts::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** An edge between two vertices */" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetUtils.h" },
		{ "ToolTip", "An edge between two vertices" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSurfaceEdgeVerts>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkSurfaceEdgeVerts",
		sizeof(FAkSurfaceEdgeVerts),
		alignof(FAkSurfaceEdgeVerts),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts()
	{
		if (!Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts.InnerSingleton, Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkSurfaceEdgeInfo;
class UScriptStruct* FAkSurfaceEdgeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkSurfaceEdgeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkSurfaceEdgeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkSurfaceEdgeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AkSurfaceEdgeInfo.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkSurfaceEdgeInfo>()
{
	return FAkSurfaceEdgeInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Information about an edge */" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetUtils.h" },
		{ "ToolTip", "Information about an edge" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSurfaceEdgeInfo>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkSurfaceEdgeInfo",
		sizeof(FAkSurfaceEdgeInfo),
		alignof(FAkSurfaceEdgeInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AkSurfaceEdgeInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkSurfaceEdgeInfo.InnerSingleton, Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkSurfaceEdgeInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkSurfacePoly;
class UScriptStruct* FAkSurfacePoly::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkSurfacePoly.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkSurfacePoly.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSurfacePoly, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkSurfacePoly"));
	}
	return Z_Registration_Info_UScriptStruct_AkSurfacePoly.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkSurfacePoly>()
{
	return FAkSurfacePoly::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkSurfacePoly_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Occlusion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Occlusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableSurface_MetaData[];
#endif
		static void NewProp_EnableSurface_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableSurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceArea_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceArea;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Contains the properties of a face from the ParentBrush of a UAkSurfaceReflectorSetComponent. */" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetUtils.h" },
		{ "ToolTip", "Contains the properties of a face from the ParentBrush of a UAkSurfaceReflectorSetComponent." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSurfacePoly>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetUtils.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSurfacePoly, Texture), Z_Construct_UClass_UAkAcousticTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Occlusion_MetaData[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Transmission Loss" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetUtils.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Occlusion = { "Occlusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSurfacePoly, Occlusion), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Occlusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Occlusion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface_MetaData[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetUtils.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface_SetBit(void* Obj)
	{
		((FAkSurfacePoly*)Obj)->EnableSurface = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface = { "EnableSurface", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAkSurfacePoly), &Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_SurfaceArea_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetUtils.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_SurfaceArea = { "SurfaceArea", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkSurfacePoly, SurfaceArea), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_SurfaceArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_SurfaceArea_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Occlusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_SurfaceArea,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkSurfacePoly",
		sizeof(FAkSurfacePoly),
		alignof(FAkSurfacePoly),
		Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkSurfacePoly()
	{
		if (!Z_Registration_Info_UScriptStruct_AkSurfacePoly.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkSurfacePoly.InnerSingleton, Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkSurfacePoly.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetUtils_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetUtils_h_Statics::ScriptStructInfo[] = {
		{ FAkSurfaceEdgeVerts::StaticStruct, Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::NewStructOps, TEXT("AkSurfaceEdgeVerts"), &Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkSurfaceEdgeVerts), 2825298746U) },
		{ FAkSurfaceEdgeInfo::StaticStruct, Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics::NewStructOps, TEXT("AkSurfaceEdgeInfo"), &Z_Registration_Info_UScriptStruct_AkSurfaceEdgeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkSurfaceEdgeInfo), 1695564981U) },
		{ FAkSurfacePoly::StaticStruct, Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewStructOps, TEXT("AkSurfacePoly"), &Z_Registration_Info_UScriptStruct_AkSurfacePoly, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkSurfacePoly), 1439344516U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetUtils_h_2112635313(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetUtils_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetUtils_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
