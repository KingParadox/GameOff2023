// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkWaapiUMG/Components/AkItemProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkItemProperties() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemProperties();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemProperties_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemPropertiesConv();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemPropertiesConv_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkPropertyToControl();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature_Statics
	{
		struct _Script_AkAudio_eventOnItemPropertySelectionChanged_Parms
		{
			FString PropertySelected;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertySelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature_Statics::NewProp_PropertySelected = { "PropertySelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AkAudio_eventOnItemPropertySelectionChanged_Parms, PropertySelected), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature_Statics::NewProp_PropertySelected,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** A delegate type invoked when a selection changes somewhere. */" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemProperties.h" },
		{ "ToolTip", "A delegate type invoked when a selection changes somewhere." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "OnItemPropertySelectionChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature_Statics::_Script_AkAudio_eventOnItemPropertySelectionChanged_Parms), Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnItemPropertySelectionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnItemPropertySelectionChanged, const FString& PropertySelected)
{
	struct _Script_AkAudio_eventOnItemPropertySelectionChanged_Parms
	{
		FString PropertySelected;
	};
	_Script_AkAudio_eventOnItemPropertySelectionChanged_Parms Parms;
	Parms.PropertySelected=PropertySelected;
	OnItemPropertySelectionChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics
	{
		struct _Script_AkAudio_eventOnItemPropertyDragDetected_Parms
		{
			FString PropertyDragged;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyDragged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::NewProp_PropertyDragged = { "PropertyDragged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AkAudio_eventOnItemPropertyDragDetected_Parms, PropertyDragged), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::NewProp_PropertyDragged,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** A delegate type invoked when a property is being dragged. */" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemProperties.h" },
		{ "ToolTip", "A delegate type invoked when a property is being dragged." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "OnItemPropertyDragDetected__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::_Script_AkAudio_eventOnItemPropertyDragDetected_Parms), Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnItemPropertyDragDetected_DelegateWrapper(const FMulticastScriptDelegate& OnItemPropertyDragDetected, const FString& PropertyDragged)
{
	struct _Script_AkAudio_eventOnItemPropertyDragDetected_Parms
	{
		FString PropertyDragged;
	};
	_Script_AkAudio_eventOnItemPropertyDragDetected_Parms Parms;
	Parms.PropertyDragged=PropertyDragged;
	OnItemPropertyDragDetected.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkPropertyToControl;
class UScriptStruct* FAkPropertyToControl::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkPropertyToControl.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkPropertyToControl.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkPropertyToControl, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkPropertyToControl"));
	}
	return Z_Registration_Info_UScriptStruct_AkPropertyToControl.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkPropertyToControl>()
{
	return FAkPropertyToControl::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkPropertyToControl_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Structure for property to be controlled by the UI.\n*/" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemProperties.h" },
		{ "ToolTip", "Structure for property to be controlled by the UI." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkPropertyToControl>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::NewProp_ItemProperty_MetaData[] = {
		{ "Category", "ItemProperty" },
		{ "Comment", "/**\n\x09\x09* The name of the item to control\n\x09\x09*/" },
		{ "DisplayName", "Property" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemProperties.h" },
		{ "ToolTip", "The name of the item to control" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::NewProp_ItemProperty = { "ItemProperty", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkPropertyToControl, ItemProperty), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::NewProp_ItemProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::NewProp_ItemProperty_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::NewProp_ItemProperty,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkPropertyToControl",
		sizeof(FAkPropertyToControl),
		alignof(FAkPropertyToControl),
		Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkPropertyToControl()
	{
		if (!Z_Registration_Info_UScriptStruct_AkPropertyToControl.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkPropertyToControl.InnerSingleton, Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkPropertyToControl.InnerSingleton;
	}
	DEFINE_FUNCTION(UAkItemPropertiesConv::execConv_FAkPropertyToControlToText)
	{
		P_GET_STRUCT_REF(FAkPropertyToControl,Z_Param_Out_INAkPropertyToControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UAkItemPropertiesConv::Conv_FAkPropertyToControlToText(Z_Param_Out_INAkPropertyToControl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkItemPropertiesConv::execConv_FAkPropertyToControlToString)
	{
		P_GET_STRUCT_REF(FAkPropertyToControl,Z_Param_Out_INAkPropertyToControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAkItemPropertiesConv::Conv_FAkPropertyToControlToString(Z_Param_Out_INAkPropertyToControl);
		P_NATIVE_END;
	}
	void UAkItemPropertiesConv::StaticRegisterNativesUAkItemPropertiesConv()
	{
		UClass* Class = UAkItemPropertiesConv::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_FAkPropertyToControlToString", &UAkItemPropertiesConv::execConv_FAkPropertyToControlToString },
			{ "Conv_FAkPropertyToControlToText", &UAkItemPropertiesConv::execConv_FAkPropertyToControlToText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics
	{
		struct AkItemPropertiesConv_eventConv_FAkPropertyToControlToString_Parms
		{
			FAkPropertyToControl INAkPropertyToControl;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_INAkPropertyToControl_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_INAkPropertyToControl;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::NewProp_INAkPropertyToControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::NewProp_INAkPropertyToControl = { "INAkPropertyToControl", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkItemPropertiesConv_eventConv_FAkPropertyToControlToString_Parms, INAkPropertyToControl), Z_Construct_UScriptStruct_FAkPropertyToControl, METADATA_PARAMS(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::NewProp_INAkPropertyToControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::NewProp_INAkPropertyToControl_MetaData)) }; // 685796901
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkItemPropertiesConv_eventConv_FAkPropertyToControlToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::NewProp_INAkPropertyToControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|String" },
		{ "Comment", "/** Converts an AkPropertyToControl value to a string */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (FAkPropertyToControl)" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemProperties.h" },
		{ "ToolTip", "Converts an AkPropertyToControl value to a string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemPropertiesConv, nullptr, "Conv_FAkPropertyToControlToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::AkItemPropertiesConv_eventConv_FAkPropertyToControlToString_Parms), Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics
	{
		struct AkItemPropertiesConv_eventConv_FAkPropertyToControlToText_Parms
		{
			FAkPropertyToControl INAkPropertyToControl;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_INAkPropertyToControl_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_INAkPropertyToControl;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::NewProp_INAkPropertyToControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::NewProp_INAkPropertyToControl = { "INAkPropertyToControl", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkItemPropertiesConv_eventConv_FAkPropertyToControlToText_Parms, INAkPropertyToControl), Z_Construct_UScriptStruct_FAkPropertyToControl, METADATA_PARAMS(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::NewProp_INAkPropertyToControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::NewProp_INAkPropertyToControl_MetaData)) }; // 685796901
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkItemPropertiesConv_eventConv_FAkPropertyToControlToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::NewProp_INAkPropertyToControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Converts an AkPropertyToControl value to a localizable text */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToText (FAkPropertyToControl)" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemProperties.h" },
		{ "ToolTip", "Converts an AkPropertyToControl value to a localizable text" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemPropertiesConv, nullptr, "Conv_FAkPropertyToControlToText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::AkItemPropertiesConv_eventConv_FAkPropertyToControlToText_Parms), Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkItemPropertiesConv);
	UClass* Z_Construct_UClass_UAkItemPropertiesConv_NoRegister()
	{
		return UAkItemPropertiesConv::StaticClass();
	}
	struct Z_Construct_UClass_UAkItemPropertiesConv_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkItemPropertiesConv_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkItemPropertiesConv_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString, "Conv_FAkPropertyToControlToString" }, // 2228152035
		{ &Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText, "Conv_FAkPropertyToControlToText" }, // 3381509774
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkItemPropertiesConv_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*------------------------------------------------------------------------------------\nUAkItemPropertiesConv\n------------------------------------------------------------------------------------*/" },
		{ "IncludePath", "AkWaapiUMG/Components/AkItemProperties.h" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemProperties.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UAkItemPropertiesConv" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkItemPropertiesConv_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkItemPropertiesConv>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkItemPropertiesConv_Statics::ClassParams = {
		&UAkItemPropertiesConv::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAkItemPropertiesConv_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkItemPropertiesConv_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkItemPropertiesConv()
	{
		if (!Z_Registration_Info_UClass_UAkItemPropertiesConv.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkItemPropertiesConv.OuterSingleton, Z_Construct_UClass_UAkItemPropertiesConv_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkItemPropertiesConv.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkItemPropertiesConv>()
	{
		return UAkItemPropertiesConv::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkItemPropertiesConv);
	UAkItemPropertiesConv::~UAkItemPropertiesConv() {}
	DEFINE_FUNCTION(UAkItemProperties::execSetSearchText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_newText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSearchText(Z_Param_newText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkItemProperties::execGetSearchText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSearchText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkItemProperties::execGetSelectedProperty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSelectedProperty();
		P_NATIVE_END;
	}
	void UAkItemProperties::StaticRegisterNativesUAkItemProperties()
	{
		UClass* Class = UAkItemProperties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSearchText", &UAkItemProperties::execGetSearchText },
			{ "GetSelectedProperty", &UAkItemProperties::execGetSelectedProperty },
			{ "SetSearchText", &UAkItemProperties::execSetSearchText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkItemProperties_GetSearchText_Statics
	{
		struct AkItemProperties_eventGetSearchText_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkItemProperties_GetSearchText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkItemProperties_eventGetSearchText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkItemProperties_GetSearchText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemProperties_GetSearchText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemProperties_GetSearchText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
		{ "Comment", "/** returns the current text of the searchBox */" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemProperties.h" },
		{ "ToolTip", "returns the current text of the searchBox" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkItemProperties_GetSearchText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemProperties, nullptr, "GetSearchText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkItemProperties_GetSearchText_Statics::AkItemProperties_eventGetSearchText_Parms), Z_Construct_UFunction_UAkItemProperties_GetSearchText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemProperties_GetSearchText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkItemProperties_GetSearchText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemProperties_GetSearchText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkItemProperties_GetSearchText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkItemProperties_GetSearchText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty_Statics
	{
		struct AkItemProperties_eventGetSelectedProperty_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkItemProperties_eventGetSelectedProperty_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
		{ "Comment", "/** Returns all properties currently selected in the Wwise properties list */" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemProperties.h" },
		{ "ToolTip", "Returns all properties currently selected in the Wwise properties list" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemProperties, nullptr, "GetSelectedProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty_Statics::AkItemProperties_eventGetSelectedProperty_Parms), Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkItemProperties_SetSearchText_Statics
	{
		struct AkItemProperties_eventSetSearchText_Parms
		{
			FString newText;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_newText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_newText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemProperties_SetSearchText_Statics::NewProp_newText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkItemProperties_SetSearchText_Statics::NewProp_newText = { "newText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkItemProperties_eventSetSearchText_Parms, newText), METADATA_PARAMS(Z_Construct_UFunction_UAkItemProperties_SetSearchText_Statics::NewProp_newText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemProperties_SetSearchText_Statics::NewProp_newText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkItemProperties_SetSearchText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemProperties_SetSearchText_Statics::NewProp_newText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemProperties_SetSearchText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
		{ "Comment", "/** sets the current text of the searchBox */" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemProperties.h" },
		{ "ToolTip", "sets the current text of the searchBox" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkItemProperties_SetSearchText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemProperties, nullptr, "SetSearchText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkItemProperties_SetSearchText_Statics::AkItemProperties_eventSetSearchText_Parms), Z_Construct_UFunction_UAkItemProperties_SetSearchText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemProperties_SetSearchText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkItemProperties_SetSearchText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemProperties_SetSearchText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkItemProperties_SetSearchText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkItemProperties_SetSearchText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkItemProperties);
	UClass* Z_Construct_UClass_UAkItemProperties_NoRegister()
	{
		return UAkItemProperties::StaticClass();
	}
	struct Z_Construct_UClass_UAkItemProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSelectionChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectionChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPropertyDragged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPropertyDragged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkItemProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkItemProperties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkItemProperties_GetSearchText, "GetSearchText" }, // 1651278380
		{ &Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty, "GetSelectedProperty" }, // 1976532291
		{ &Z_Construct_UFunction_UAkItemProperties_SetSearchText, "SetSearchText" }, // 1072439825
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkItemProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A widget that shows the Wwise properties list.\n*/" },
		{ "IncludePath", "AkWaapiUMG/Components/AkItemProperties.h" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemProperties.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A widget that shows the Wwise properties list." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkItemProperties_Statics::NewProp_OnSelectionChanged_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called when the property selection changes. */" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemProperties.h" },
		{ "ToolTip", "Called when the property selection changes." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkItemProperties_Statics::NewProp_OnSelectionChanged = { "OnSelectionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkItemProperties, OnSelectionChanged), Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAkItemProperties_Statics::NewProp_OnSelectionChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkItemProperties_Statics::NewProp_OnSelectionChanged_MetaData)) }; // 521414443
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkItemProperties_Statics::NewProp_OnPropertyDragged_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called when a property is dragged from the property list. */" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemProperties.h" },
		{ "ToolTip", "Called when a property is dragged from the property list." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkItemProperties_Statics::NewProp_OnPropertyDragged = { "OnPropertyDragged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkItemProperties, OnPropertyDragged), Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAkItemProperties_Statics::NewProp_OnPropertyDragged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkItemProperties_Statics::NewProp_OnPropertyDragged_MetaData)) }; // 1932063256
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkItemProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkItemProperties_Statics::NewProp_OnSelectionChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkItemProperties_Statics::NewProp_OnPropertyDragged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkItemProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkItemProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkItemProperties_Statics::ClassParams = {
		&UAkItemProperties::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkItemProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkItemProperties_Statics::PropPointers),
		0,
		0x00B000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UAkItemProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkItemProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkItemProperties()
	{
		if (!Z_Registration_Info_UClass_UAkItemProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkItemProperties.OuterSingleton, Z_Construct_UClass_UAkItemProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkItemProperties.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkItemProperties>()
	{
		return UAkItemProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkItemProperties);
	UAkItemProperties::~UAkItemProperties() {}
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_Statics::ScriptStructInfo[] = {
		{ FAkPropertyToControl::StaticStruct, Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::NewStructOps, TEXT("AkPropertyToControl"), &Z_Registration_Info_UScriptStruct_AkPropertyToControl, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkPropertyToControl), 685796901U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkItemPropertiesConv, UAkItemPropertiesConv::StaticClass, TEXT("UAkItemPropertiesConv"), &Z_Registration_Info_UClass_UAkItemPropertiesConv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkItemPropertiesConv), 181226909U) },
		{ Z_Construct_UClass_UAkItemProperties, UAkItemProperties::StaticClass, TEXT("UAkItemProperties"), &Z_Registration_Info_UClass_UAkItemProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkItemProperties), 1457955914U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_4186174192(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
