// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Private/Wwise/Info/WwiseEventInfoLibrary.h"
#include "WwiseResourceLoader/Public/Wwise/Info/WwiseEventInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseEventInfoLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
	WWISERESOURCELOADER_API UClass* Z_Construct_UClass_UWwiseEventInfoLibrary();
	WWISERESOURCELOADER_API UClass* Z_Construct_UClass_UWwiseEventInfoLibrary_NoRegister();
	WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions();
	WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseEventInfo();
// End Cross Module References
	DEFINE_FUNCTION(UWwiseEventInfoLibrary::execSetHardCodedSoundBankShortId)
	{
		P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
		P_GET_PROPERTY(FIntProperty,Z_Param_HardCodedSoundBankShortId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWwiseEventInfo*)Z_Param__Result=UWwiseEventInfoLibrary::SetHardCodedSoundBankShortId(Z_Param_Out_Ref,Z_Param_HardCodedSoundBankShortId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseEventInfoLibrary::execSetDestroyOptions)
	{
		P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
		P_GET_ENUM_REF(EWwiseEventDestroyOptions,Z_Param_Out_DestroyOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWwiseEventInfo*)Z_Param__Result=UWwiseEventInfoLibrary::SetDestroyOptions(Z_Param_Out_Ref,(EWwiseEventDestroyOptions&)(Z_Param_Out_DestroyOptions));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseEventInfoLibrary::execSetSwitchContainerLoading)
	{
		P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
		P_GET_ENUM_REF(EWwiseEventSwitchContainerLoading,Z_Param_Out_SwitchContainerLoading);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWwiseEventInfo*)Z_Param__Result=UWwiseEventInfoLibrary::SetSwitchContainerLoading(Z_Param_Out_Ref,(EWwiseEventSwitchContainerLoading&)(Z_Param_Out_SwitchContainerLoading));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseEventInfoLibrary::execSetWwiseName)
	{
		P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
		P_GET_PROPERTY(FStrProperty,Z_Param_WwiseName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWwiseEventInfo*)Z_Param__Result=UWwiseEventInfoLibrary::SetWwiseName(Z_Param_Out_Ref,Z_Param_WwiseName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseEventInfoLibrary::execSetWwiseShortId)
	{
		P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
		P_GET_PROPERTY(FIntProperty,Z_Param_WwiseShortId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWwiseEventInfo*)Z_Param__Result=UWwiseEventInfoLibrary::SetWwiseShortId(Z_Param_Out_Ref,Z_Param_WwiseShortId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseEventInfoLibrary::execSetWwiseGuid)
	{
		P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_WwiseGuid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWwiseEventInfo*)Z_Param__Result=UWwiseEventInfoLibrary::SetWwiseGuid(Z_Param_Out_Ref,Z_Param_Out_WwiseGuid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseEventInfoLibrary::execGetHardCodedSoundBankShortId)
	{
		P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UWwiseEventInfoLibrary::GetHardCodedSoundBankShortId(Z_Param_Out_Ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseEventInfoLibrary::execGetDestroyOptions)
	{
		P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWwiseEventDestroyOptions*)Z_Param__Result=UWwiseEventInfoLibrary::GetDestroyOptions(Z_Param_Out_Ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseEventInfoLibrary::execGetSwitchContainerLoading)
	{
		P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWwiseEventSwitchContainerLoading*)Z_Param__Result=UWwiseEventInfoLibrary::GetSwitchContainerLoading(Z_Param_Out_Ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseEventInfoLibrary::execGetWwiseName)
	{
		P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UWwiseEventInfoLibrary::GetWwiseName(Z_Param_Out_Ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseEventInfoLibrary::execGetWwiseShortId)
	{
		P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UWwiseEventInfoLibrary::GetWwiseShortId(Z_Param_Out_Ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseEventInfoLibrary::execGetWwiseGuid)
	{
		P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=UWwiseEventInfoLibrary::GetWwiseGuid(Z_Param_Out_Ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseEventInfoLibrary::execBreakStruct)
	{
		P_GET_STRUCT(FWwiseEventInfo,Z_Param_Ref);
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_OutWwiseGuid);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutWwiseShortId);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutWwiseName);
		P_GET_ENUM_REF(EWwiseEventSwitchContainerLoading,Z_Param_Out_OutSwitchContainerLoading);
		P_GET_ENUM_REF(EWwiseEventDestroyOptions,Z_Param_Out_OutDestroyOptions);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutHardCodedSoundBankShortId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWwiseEventInfoLibrary::BreakStruct(Z_Param_Ref,Z_Param_Out_OutWwiseGuid,Z_Param_Out_OutWwiseShortId,Z_Param_Out_OutWwiseName,(EWwiseEventSwitchContainerLoading&)(Z_Param_Out_OutSwitchContainerLoading),(EWwiseEventDestroyOptions&)(Z_Param_Out_OutDestroyOptions),Z_Param_Out_OutHardCodedSoundBankShortId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseEventInfoLibrary::execMakeStruct)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_WwiseGuid);
		P_GET_PROPERTY(FIntProperty,Z_Param_WwiseShortId);
		P_GET_PROPERTY(FStrProperty,Z_Param_WwiseName);
		P_GET_ENUM(EWwiseEventSwitchContainerLoading,Z_Param_SwitchContainerLoading);
		P_GET_ENUM(EWwiseEventDestroyOptions,Z_Param_DestroyOptions);
		P_GET_PROPERTY(FIntProperty,Z_Param_HardCodedSoundBankShortId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWwiseEventInfo*)Z_Param__Result=UWwiseEventInfoLibrary::MakeStruct(Z_Param_Out_WwiseGuid,Z_Param_WwiseShortId,Z_Param_WwiseName,EWwiseEventSwitchContainerLoading(Z_Param_SwitchContainerLoading),EWwiseEventDestroyOptions(Z_Param_DestroyOptions),Z_Param_HardCodedSoundBankShortId);
		P_NATIVE_END;
	}
	void UWwiseEventInfoLibrary::StaticRegisterNativesUWwiseEventInfoLibrary()
	{
		UClass* Class = UWwiseEventInfoLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakStruct", &UWwiseEventInfoLibrary::execBreakStruct },
			{ "GetDestroyOptions", &UWwiseEventInfoLibrary::execGetDestroyOptions },
			{ "GetHardCodedSoundBankShortId", &UWwiseEventInfoLibrary::execGetHardCodedSoundBankShortId },
			{ "GetSwitchContainerLoading", &UWwiseEventInfoLibrary::execGetSwitchContainerLoading },
			{ "GetWwiseGuid", &UWwiseEventInfoLibrary::execGetWwiseGuid },
			{ "GetWwiseName", &UWwiseEventInfoLibrary::execGetWwiseName },
			{ "GetWwiseShortId", &UWwiseEventInfoLibrary::execGetWwiseShortId },
			{ "MakeStruct", &UWwiseEventInfoLibrary::execMakeStruct },
			{ "SetDestroyOptions", &UWwiseEventInfoLibrary::execSetDestroyOptions },
			{ "SetHardCodedSoundBankShortId", &UWwiseEventInfoLibrary::execSetHardCodedSoundBankShortId },
			{ "SetSwitchContainerLoading", &UWwiseEventInfoLibrary::execSetSwitchContainerLoading },
			{ "SetWwiseGuid", &UWwiseEventInfoLibrary::execSetWwiseGuid },
			{ "SetWwiseName", &UWwiseEventInfoLibrary::execSetWwiseName },
			{ "SetWwiseShortId", &UWwiseEventInfoLibrary::execSetWwiseShortId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics
	{
		struct WwiseEventInfoLibrary_eventBreakStruct_Parms
		{
			FWwiseEventInfo Ref;
			FGuid OutWwiseGuid;
			int32 OutWwiseShortId;
			FString OutWwiseName;
			EWwiseEventSwitchContainerLoading OutSwitchContainerLoading;
			EWwiseEventDestroyOptions OutDestroyOptions;
			int32 OutHardCodedSoundBankShortId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutWwiseGuid;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutWwiseShortId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutWwiseName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutSwitchContainerLoading_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutSwitchContainerLoading;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutDestroyOptions_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutDestroyOptions;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutHardCodedSoundBankShortId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventBreakStruct_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_Ref_MetaData)) }; // 1230852984
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseGuid = { "OutWwiseGuid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventBreakStruct_Parms, OutWwiseGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseShortId = { "OutWwiseShortId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventBreakStruct_Parms, OutWwiseShortId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseName = { "OutWwiseName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventBreakStruct_Parms, OutWwiseName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutSwitchContainerLoading_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutSwitchContainerLoading = { "OutSwitchContainerLoading", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventBreakStruct_Parms, OutSwitchContainerLoading), Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading, METADATA_PARAMS(nullptr, 0) }; // 333562613
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutDestroyOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutDestroyOptions = { "OutDestroyOptions", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventBreakStruct_Parms, OutDestroyOptions), Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions, METADATA_PARAMS(nullptr, 0) }; // 3126334647
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutHardCodedSoundBankShortId = { "OutHardCodedSoundBankShortId", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventBreakStruct_Parms, OutHardCodedSoundBankShortId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseShortId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutSwitchContainerLoading_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutSwitchContainerLoading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutDestroyOptions_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutDestroyOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::NewProp_OutHardCodedSoundBankShortId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "OutDestroyOptions, OutHardCodedSoundBankShortId" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|EventInfo" },
		{ "DisplayName", "Break EventInfo" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "BreakStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::WwiseEventInfoLibrary_eventBreakStruct_Parms), Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics
	{
		struct WwiseEventInfoLibrary_eventGetDestroyOptions_Parms
		{
			FWwiseEventInfo Ref;
			EWwiseEventDestroyOptions ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetDestroyOptions_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::NewProp_Ref_MetaData)) }; // 1230852984
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Destroy Options" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetDestroyOptions_Parms, ReturnValue), Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::NewProp_ReturnValue_MetaData)) }; // 3126334647
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "GetDestroyOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::WwiseEventInfoLibrary_eventGetDestroyOptions_Parms), Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics
	{
		struct WwiseEventInfoLibrary_eventGetHardCodedSoundBankShortId_Parms
		{
			FWwiseEventInfo Ref;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetHardCodedSoundBankShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_Ref_MetaData)) }; // 1230852984
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Short Id" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetHardCodedSoundBankShortId_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "GetHardCodedSoundBankShortId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::WwiseEventInfoLibrary_eventGetHardCodedSoundBankShortId_Parms), Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics
	{
		struct WwiseEventInfoLibrary_eventGetSwitchContainerLoading_Parms
		{
			FWwiseEventInfo Ref;
			EWwiseEventSwitchContainerLoading ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetSwitchContainerLoading_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::NewProp_Ref_MetaData)) }; // 1230852984
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Switch Container Loading" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetSwitchContainerLoading_Parms, ReturnValue), Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::NewProp_ReturnValue_MetaData)) }; // 333562613
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "GetSwitchContainerLoading", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::WwiseEventInfoLibrary_eventGetSwitchContainerLoading_Parms), Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics
	{
		struct WwiseEventInfoLibrary_eventGetWwiseGuid_Parms
		{
			FWwiseEventInfo Ref;
			FGuid ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetWwiseGuid_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::NewProp_Ref_MetaData)) }; // 1230852984
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "GUID" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetWwiseGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "GetWwiseGuid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::WwiseEventInfoLibrary_eventGetWwiseGuid_Parms), Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics
	{
		struct WwiseEventInfoLibrary_eventGetWwiseName_Parms
		{
			FWwiseEventInfo Ref;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetWwiseName_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::NewProp_Ref_MetaData)) }; // 1230852984
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetWwiseName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "GetWwiseName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::WwiseEventInfoLibrary_eventGetWwiseName_Parms), Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics
	{
		struct WwiseEventInfoLibrary_eventGetWwiseShortId_Parms
		{
			FWwiseEventInfo Ref;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetWwiseShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::NewProp_Ref_MetaData)) }; // 1230852984
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Short Id" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetWwiseShortId_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "GetWwiseShortId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::WwiseEventInfoLibrary_eventGetWwiseShortId_Parms), Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics
	{
		struct WwiseEventInfoLibrary_eventMakeStruct_Parms
		{
			FGuid WwiseGuid;
			int32 WwiseShortId;
			FString WwiseName;
			EWwiseEventSwitchContainerLoading SwitchContainerLoading;
			EWwiseEventDestroyOptions DestroyOptions;
			int32 HardCodedSoundBankShortId;
			FWwiseEventInfo ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WwiseGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseGuid;
		static const UECodeGen_Private::FIntPropertyParams NewProp_WwiseShortId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WwiseName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WwiseName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SwitchContainerLoading_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SwitchContainerLoading;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DestroyOptions_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DestroyOptions;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HardCodedSoundBankShortId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_WwiseGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_WwiseGuid = { "WwiseGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventMakeStruct_Parms, WwiseGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_WwiseGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_WwiseGuid_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_WwiseShortId = { "WwiseShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventMakeStruct_Parms, WwiseShortId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_WwiseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_WwiseName = { "WwiseName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventMakeStruct_Parms, WwiseName), METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_WwiseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_WwiseName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_SwitchContainerLoading_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_SwitchContainerLoading = { "SwitchContainerLoading", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventMakeStruct_Parms, SwitchContainerLoading), Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading, METADATA_PARAMS(nullptr, 0) }; // 333562613
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_DestroyOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_DestroyOptions = { "DestroyOptions", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventMakeStruct_Parms, DestroyOptions), Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions, METADATA_PARAMS(nullptr, 0) }; // 3126334647
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_HardCodedSoundBankShortId = { "HardCodedSoundBankShortId", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventMakeStruct_Parms, HardCodedSoundBankShortId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Event Info" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventMakeStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_ReturnValue_MetaData)) }; // 1230852984
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_WwiseGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_WwiseShortId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_WwiseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_SwitchContainerLoading_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_SwitchContainerLoading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_DestroyOptions_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_DestroyOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_HardCodedSoundBankShortId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "DestroyOptions, HardCodedSoundBankShortId" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|EventInfo" },
		{ "CPP_Default_HardCodedSoundBankShortId", "0" },
		{ "DisplayName", "Make EventInfo" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "MakeStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::WwiseEventInfoLibrary_eventMakeStruct_Parms), Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics
	{
		struct WwiseEventInfoLibrary_eventSetDestroyOptions_Parms
		{
			FWwiseEventInfo Ref;
			EWwiseEventDestroyOptions DestroyOptions;
			FWwiseEventInfo ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DestroyOptions_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestroyOptions_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DestroyOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetDestroyOptions_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::NewProp_Ref_MetaData)) }; // 1230852984
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::NewProp_DestroyOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::NewProp_DestroyOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::NewProp_DestroyOptions = { "DestroyOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetDestroyOptions_Parms, DestroyOptions), Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::NewProp_DestroyOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::NewProp_DestroyOptions_MetaData)) }; // 3126334647
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Struct Out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetDestroyOptions_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::NewProp_ReturnValue_MetaData)) }; // 1230852984
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::NewProp_DestroyOptions_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::NewProp_DestroyOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "SetDestroyOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::WwiseEventInfoLibrary_eventSetDestroyOptions_Parms), Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics
	{
		struct WwiseEventInfoLibrary_eventSetHardCodedSoundBankShortId_Parms
		{
			FWwiseEventInfo Ref;
			int32 HardCodedSoundBankShortId;
			FWwiseEventInfo ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HardCodedSoundBankShortId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetHardCodedSoundBankShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_Ref_MetaData)) }; // 1230852984
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_HardCodedSoundBankShortId = { "HardCodedSoundBankShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetHardCodedSoundBankShortId_Parms, HardCodedSoundBankShortId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Struct Out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetHardCodedSoundBankShortId_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue_MetaData)) }; // 1230852984
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_HardCodedSoundBankShortId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "CPP_Default_HardCodedSoundBankShortId", "0" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "SetHardCodedSoundBankShortId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::WwiseEventInfoLibrary_eventSetHardCodedSoundBankShortId_Parms), Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics
	{
		struct WwiseEventInfoLibrary_eventSetSwitchContainerLoading_Parms
		{
			FWwiseEventInfo Ref;
			EWwiseEventSwitchContainerLoading SwitchContainerLoading;
			FWwiseEventInfo ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SwitchContainerLoading_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchContainerLoading_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SwitchContainerLoading;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetSwitchContainerLoading_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_Ref_MetaData)) }; // 1230852984
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_SwitchContainerLoading_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_SwitchContainerLoading_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_SwitchContainerLoading = { "SwitchContainerLoading", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetSwitchContainerLoading_Parms, SwitchContainerLoading), Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_SwitchContainerLoading_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_SwitchContainerLoading_MetaData)) }; // 333562613
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Struct Out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetSwitchContainerLoading_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_ReturnValue_MetaData)) }; // 1230852984
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_SwitchContainerLoading_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_SwitchContainerLoading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "SetSwitchContainerLoading", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::WwiseEventInfoLibrary_eventSetSwitchContainerLoading_Parms), Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics
	{
		struct WwiseEventInfoLibrary_eventSetWwiseGuid_Parms
		{
			FWwiseEventInfo Ref;
			FGuid WwiseGuid;
			FWwiseEventInfo ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WwiseGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetWwiseGuid_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::NewProp_Ref_MetaData)) }; // 1230852984
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::NewProp_WwiseGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::NewProp_WwiseGuid = { "WwiseGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetWwiseGuid_Parms, WwiseGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::NewProp_WwiseGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::NewProp_WwiseGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Struct Out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetWwiseGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::NewProp_ReturnValue_MetaData)) }; // 1230852984
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::NewProp_WwiseGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "SetWwiseGuid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::WwiseEventInfoLibrary_eventSetWwiseGuid_Parms), Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics
	{
		struct WwiseEventInfoLibrary_eventSetWwiseName_Parms
		{
			FWwiseEventInfo Ref;
			FString WwiseName;
			FWwiseEventInfo ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WwiseName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WwiseName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetWwiseName_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::NewProp_Ref_MetaData)) }; // 1230852984
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::NewProp_WwiseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::NewProp_WwiseName = { "WwiseName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetWwiseName_Parms, WwiseName), METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::NewProp_WwiseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::NewProp_WwiseName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Struct Out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetWwiseName_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::NewProp_ReturnValue_MetaData)) }; // 1230852984
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::NewProp_WwiseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "SetWwiseName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::WwiseEventInfoLibrary_eventSetWwiseName_Parms), Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics
	{
		struct WwiseEventInfoLibrary_eventSetWwiseShortId_Parms
		{
			FWwiseEventInfo Ref;
			int32 WwiseShortId;
			FWwiseEventInfo ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
		static const UECodeGen_Private::FIntPropertyParams NewProp_WwiseShortId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetWwiseShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::NewProp_Ref_MetaData)) }; // 1230852984
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::NewProp_WwiseShortId = { "WwiseShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetWwiseShortId_Parms, WwiseShortId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Struct Out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetWwiseShortId_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::NewProp_ReturnValue_MetaData)) }; // 1230852984
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::NewProp_WwiseShortId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "SetWwiseShortId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::WwiseEventInfoLibrary_eventSetWwiseShortId_Parms), Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwiseEventInfoLibrary);
	UClass* Z_Construct_UClass_UWwiseEventInfoLibrary_NoRegister()
	{
		return UWwiseEventInfoLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UWwiseEventInfoLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWwiseEventInfoLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWwiseEventInfoLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct, "BreakStruct" }, // 2325324189
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions, "GetDestroyOptions" }, // 340782125
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId, "GetHardCodedSoundBankShortId" }, // 2648822754
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading, "GetSwitchContainerLoading" }, // 3352913221
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid, "GetWwiseGuid" }, // 750949654
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName, "GetWwiseName" }, // 636426504
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId, "GetWwiseShortId" }, // 2728471969
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct, "MakeStruct" }, // 784722582
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions, "SetDestroyOptions" }, // 2578400962
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId, "SetHardCodedSoundBankShortId" }, // 4088339738
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading, "SetSwitchContainerLoading" }, // 527915366
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid, "SetWwiseGuid" }, // 4060065565
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName, "SetWwiseName" }, // 3095530500
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId, "SetWwiseShortId" }, // 2071833636
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseEventInfoLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Wwise/Info/WwiseEventInfoLibrary.h" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWwiseEventInfoLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseEventInfoLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseEventInfoLibrary_Statics::ClassParams = {
		&UWwiseEventInfoLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWwiseEventInfoLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseEventInfoLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWwiseEventInfoLibrary()
	{
		if (!Z_Registration_Info_UClass_UWwiseEventInfoLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseEventInfoLibrary.OuterSingleton, Z_Construct_UClass_UWwiseEventInfoLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWwiseEventInfoLibrary.OuterSingleton;
	}
	template<> WWISERESOURCELOADER_API UClass* StaticClass<UWwiseEventInfoLibrary>()
	{
		return UWwiseEventInfoLibrary::StaticClass();
	}
	UWwiseEventInfoLibrary::UWwiseEventInfoLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseEventInfoLibrary);
	UWwiseEventInfoLibrary::~UWwiseEventInfoLibrary() {}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseEventInfoLibrary, UWwiseEventInfoLibrary::StaticClass, TEXT("UWwiseEventInfoLibrary"), &Z_Registration_Info_UClass_UWwiseEventInfoLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseEventInfoLibrary), 3897165209U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h_320386325(TEXT("/Script/WwiseResourceLoader"),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
