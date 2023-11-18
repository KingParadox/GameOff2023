// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkLateReverbComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkLateReverbComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLateReverbComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLateReverbComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	DEFINE_FUNCTION(UAkLateReverbComponent::execAssociateAkTextureSetComponent)
	{
		P_GET_OBJECT(UAkAcousticTextureSetComponent,Z_Param_textureSetComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssociateAkTextureSetComponent(Z_Param_textureSetComponent);
		P_NATIVE_END;
	}
	void UAkLateReverbComponent::StaticRegisterNativesUAkLateReverbComponent()
	{
		UClass* Class = UAkLateReverbComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssociateAkTextureSetComponent", &UAkLateReverbComponent::execAssociateAkTextureSetComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics
	{
		struct AkLateReverbComponent_eventAssociateAkTextureSetComponent_Parms
		{
			UAkAcousticTextureSetComponent* textureSetComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_textureSetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_textureSetComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::NewProp_textureSetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::NewProp_textureSetComponent = { "textureSetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkLateReverbComponent_eventAssociateAkTextureSetComponent_Parms, textureSetComponent), Z_Construct_UClass_UAkAcousticTextureSetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::NewProp_textureSetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::NewProp_textureSetComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::NewProp_textureSetComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|LateReverb|Reverb Parameter Estimation" },
		{ "Comment", "/** Set the component that will be used to estimate the HFDamping. For example, in a Blueprint that has a static mesh component with an AkGeometry child component, this function can be called in BeginPlay to associate that AkGeometry component with this reverb component.\n\x09 *  If this late reverb component has a sibling geometry component (or surface reflector set component), they will be associated automatically and there is no need to call this function.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
		{ "ToolTip", "Set the component that will be used to estimate the HFDamping. For example, in a Blueprint that has a static mesh component with an AkGeometry child component, this function can be called in BeginPlay to associate that AkGeometry component with this reverb component.\nIf this late reverb component has a sibling geometry component (or surface reflector set component), they will be associated automatically and there is no need to call this function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkLateReverbComponent, nullptr, "AssociateAkTextureSetComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::AkLateReverbComponent_eventAssociateAkTextureSetComponent_Parms), Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkLateReverbComponent);
	UClass* Z_Construct_UClass_UAkLateReverbComponent_NoRegister()
	{
		return UAkLateReverbComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAkLateReverbComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SendLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SendLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoAssignAuxBus_MetaData[];
#endif
		static void NewProp_AutoAssignAuxBus_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoAssignAuxBus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuxBus_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AuxBus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuxBusName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AuxBusName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuxBusManual_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AuxBusManual;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextVisualizerLabels_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextVisualizerLabels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextVisualizerValues_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextVisualizerValues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvironmentVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnvironmentVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceArea_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceArea;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvironmentDecayEstimate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnvironmentDecayEstimate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HFDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HFDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeToFirstReflection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToFirstReflection;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkLateReverbComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkLateReverbComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent, "AssociateAkTextureSetComponent" }, // 2284650344
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Tags Trigger PhysicsVolume" },
		{ "IncludePath", "AkLateReverbComponent.h" },
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_bEnable_MetaData[] = {
		{ "Category", "Toggle" },
		{ "Comment", "/**\n\x09 * Enable usage of the late reverb inside a volume. Additional properties are available in the Late Reverb category.\n\x09 * The number of simultaneous AkReverbVolumes is configurable in the Unreal Editor Project Settings under Plugins > Wwise\n\x09 * If this Late Reverb is applied to a Spatial Audio room, it will be active even if the maximum number of simultaneous reverb volumes (see integration settings) was reached.\n\x09 */" },
		{ "DisplayName", "Enable Late Reverb" },
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
		{ "ToolTip", "Enable usage of the late reverb inside a volume. Additional properties are available in the Late Reverb category.\nThe number of simultaneous AkReverbVolumes is configurable in the Unreal Editor Project Settings under Plugins > Wwise\nIf this Late Reverb is applied to a Spatial Audio room, it will be active even if the maximum number of simultaneous reverb volumes (see integration settings) was reached." },
	};
#endif
	void Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((UAkLateReverbComponent*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkLateReverbComponent), &Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_bEnable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_SendLevel_MetaData[] = {
		{ "Category", "Late Reverb" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Maximum send level to the Wwise Auxiliary Bus associated to this AkReverbVolume */" },
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
		{ "ToolTip", "Maximum send level to the Wwise Auxiliary Bus associated to this AkReverbVolume" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_SendLevel = { "SendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkLateReverbComponent, SendLevel), METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_SendLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_SendLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_FadeRate_MetaData[] = {
		{ "Category", "Late Reverb" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Rate at which to fade in/out the SendLevel of the current Reverb Volume when entering/exiting it, in percentage per second (0.2 will make the fade time 5 seconds) */" },
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
		{ "ToolTip", "Rate at which to fade in/out the SendLevel of the current Reverb Volume when entering/exiting it, in percentage per second (0.2 will make the fade time 5 seconds)" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_FadeRate = { "FadeRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkLateReverbComponent, FadeRate), METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_FadeRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_FadeRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Late Reverb" },
		{ "Comment", "/**\n\x09 * The precedence in which the AkReverbVolumes will be applied. In the case of overlapping volumes, only the ones \n\x09 * with the highest priority are chosen. If two or more overlapping AkReverbVolumes have the same \n\x09 * priority, the chosen AkReverbVolume is unpredictable. \n\x09 * If this Late Reverb is applied to a Spatial Audio room, the room's priority will be used instead.\n\x09 * Sound emitted by game objects in a room will always be sent to the room late reverb independently of other late reverbs in the scene.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
		{ "ToolTip", "The precedence in which the AkReverbVolumes will be applied. In the case of overlapping volumes, only the ones\nwith the highest priority are chosen. If two or more overlapping AkReverbVolumes have the same\npriority, the chosen AkReverbVolume is unpredictable.\nIf this Late Reverb is applied to a Spatial Audio room, the room's priority will be used instead.\nSound emitted by game objects in a room will always be sent to the room late reverb independently of other late reverbs in the scene." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkLateReverbComponent, Priority), METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AutoAssignAuxBus_MetaData[] = {
		{ "Category", "Late Reverb" },
		{ "Comment", "/**\n\x09 * When enabled, the aux bus for this reverb component will be assigned automatically. This is done by estimating the decay time of the reverb produced by the parent Primitive Component, given its volume and surface area.\n\x09 * This decay value is used to select an aux bus from the reverb aux bus assignment map in the integration settings.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
		{ "ToolTip", "When enabled, the aux bus for this reverb component will be assigned automatically. This is done by estimating the decay time of the reverb produced by the parent Primitive Component, given its volume and surface area.\nThis decay value is used to select an aux bus from the reverb aux bus assignment map in the integration settings." },
	};
#endif
	void Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AutoAssignAuxBus_SetBit(void* Obj)
	{
		((UAkLateReverbComponent*)Obj)->AutoAssignAuxBus = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AutoAssignAuxBus = { "AutoAssignAuxBus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkLateReverbComponent), &Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AutoAssignAuxBus_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AutoAssignAuxBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AutoAssignAuxBus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBus_MetaData[] = {
		{ "Category", "Late Reverb" },
		{ "EditCondition", "!AutoAssignAuxBus" },
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBus = { "AuxBus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkLateReverbComponent, AuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusName_MetaData[] = {
		{ "Category", "Late Reverb" },
		{ "Comment", "/** Wwise Auxiliary Bus associated to this AkReverbVolume */" },
		{ "EditCondition", "!AutoAssignAuxBus" },
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
		{ "ToolTip", "Wwise Auxiliary Bus associated to this AkReverbVolume" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusName = { "AuxBusName", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkLateReverbComponent, AuxBusName), METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusManual_MetaData[] = {
		{ "Comment", "/** Save the manually assigned aux bus so we can recall it if auto-assign is disabled. */" },
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
		{ "ToolTip", "Save the manually assigned aux bus so we can recall it if auto-assign is disabled." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusManual = { "AuxBusManual", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkLateReverbComponent, AuxBusManual), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusManual_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusManual_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_TextVisualizerLabels_MetaData[] = {
		{ "Comment", "// The text visualizers display the values of the parameter estimations directly in the level (or blueprint editor).\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
		{ "ToolTip", "The text visualizers display the values of the parameter estimations directly in the level (or blueprint editor)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_TextVisualizerLabels = { "TextVisualizerLabels", nullptr, (EPropertyFlags)0x00c0000c00080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkLateReverbComponent, TextVisualizerLabels), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_TextVisualizerLabels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_TextVisualizerLabels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_TextVisualizerValues_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_TextVisualizerValues = { "TextVisualizerValues", nullptr, (EPropertyFlags)0x00c0000c00080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkLateReverbComponent, TextVisualizerValues), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_TextVisualizerValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_TextVisualizerValues_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_EnvironmentVolume_MetaData[] = {
		{ "Category", "Late Reverb|Reverb Parameter Estimation|Primitive Geometry" },
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_EnvironmentVolume = { "EnvironmentVolume", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkLateReverbComponent, EnvironmentVolume), METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_EnvironmentVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_EnvironmentVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_SurfaceArea_MetaData[] = {
		{ "Category", "Late Reverb|Reverb Parameter Estimation|Primitive Geometry" },
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_SurfaceArea = { "SurfaceArea", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkLateReverbComponent, SurfaceArea), METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_SurfaceArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_SurfaceArea_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_EnvironmentDecayEstimate_MetaData[] = {
		{ "Category", "Late Reverb|Reverb Parameter Estimation" },
		{ "Comment", "/** An estimation of the T60 (the time taken for the sound pressure level to reduce by 60dB) for the reverb's environment, based on the primitive component to which the late reverb is attached.\n\x09 *  This T60 value can be used to automatically assign an aux bus using the Reverb Assignment Map in the integration settings, and/or to drive the Decay Estimate RTPC, also found in the integration settings.\n\x09 *  In order to use the global reverb RTPCs, the reverb component must have a sibling AkRoomComponent (in other words, a room component attached to the same Primitive parent).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
		{ "ToolTip", "An estimation of the T60 (the time taken for the sound pressure level to reduce by 60dB) for the reverb's environment, based on the primitive component to which the late reverb is attached.\nThis T60 value can be used to automatically assign an aux bus using the Reverb Assignment Map in the integration settings, and/or to drive the Decay Estimate RTPC, also found in the integration settings.\nIn order to use the global reverb RTPCs, the reverb component must have a sibling AkRoomComponent (in other words, a room component attached to the same Primitive parent)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_EnvironmentDecayEstimate = { "EnvironmentDecayEstimate", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkLateReverbComponent, EnvironmentDecayEstimate), METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_EnvironmentDecayEstimate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_EnvironmentDecayEstimate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_HFDamping_MetaData[] = {
		{ "Category", "Late Reverb|Reverb Parameter Estimation" },
		{ "Comment", "/** This value is driven by the acoustic textures used in an associated AkGeometryComponent or AkSurfaceReflectorSetComponent. It measures the average frequency bias of the damping. In other words, whether there is more high-frequency damping, more low-frequency damping, or uniform damping across frequencies.\n\x09 *  A value of 0.0 indicates uniform damping across all frequencies. A value > 0.0 indicates more damping for higher frequencies than lower frequencies. A value < 0.0 indicates more damping for lower frequencies than high frequencies. Average absorption values are calculated using each of the textures in the collection, weighted by their corresponding surface area.\n\x09 *  This value can be used to drive the HFDamping RTPC, found in the integration settings.\n\x09 *  In order to use the global reverb RTPCs, the reverb component must have a sibling AkRoomComponent (in other words, a room component attached to the same Primitive parent).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
		{ "ToolTip", "This value is driven by the acoustic textures used in an associated AkGeometryComponent or AkSurfaceReflectorSetComponent. It measures the average frequency bias of the damping. In other words, whether there is more high-frequency damping, more low-frequency damping, or uniform damping across frequencies.\nA value of 0.0 indicates uniform damping across all frequencies. A value > 0.0 indicates more damping for higher frequencies than lower frequencies. A value < 0.0 indicates more damping for lower frequencies than high frequencies. Average absorption values are calculated using each of the textures in the collection, weighted by their corresponding surface area.\nThis value can be used to drive the HFDamping RTPC, found in the integration settings.\nIn order to use the global reverb RTPCs, the reverb component must have a sibling AkRoomComponent (in other words, a room component attached to the same Primitive parent)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_HFDamping = { "HFDamping", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkLateReverbComponent, HFDamping), METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_HFDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_HFDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_TimeToFirstReflection_MetaData[] = {
		{ "Category", "Late Reverb|Reverb Parameter Estimation" },
		{ "Comment", "/** An estimation of the time taken for the first reflection to reach the listener, based on the primitive component to which the late reverb is attached.\n\x09 *  This is estimated based on an emitter and listener being positioned at the centre of the parent primitive component. This value can be used to drive the Time To First Reflection RTPC, found in the integration settings.\n\x09 *  In order to use the global reverb RTPCs, the reverb component must have a sibling AkRoomComponent (in other words, a room component attached to the same Primitive parent).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
		{ "ToolTip", "An estimation of the time taken for the first reflection to reach the listener, based on the primitive component to which the late reverb is attached.\nThis is estimated based on an emitter and listener being positioned at the centre of the parent primitive component. This value can be used to drive the Time To First Reflection RTPC, found in the integration settings.\nIn order to use the global reverb RTPCs, the reverb component must have a sibling AkRoomComponent (in other words, a room component attached to the same Primitive parent)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_TimeToFirstReflection = { "TimeToFirstReflection", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkLateReverbComponent, TimeToFirstReflection), METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_TimeToFirstReflection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_TimeToFirstReflection_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkLateReverbComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_bEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_SendLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_FadeRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AutoAssignAuxBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusManual,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_TextVisualizerLabels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_TextVisualizerValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_EnvironmentVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_SurfaceArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_EnvironmentDecayEstimate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_HFDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_TimeToFirstReflection,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkLateReverbComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkLateReverbComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkLateReverbComponent_Statics::ClassParams = {
		&UAkLateReverbComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkLateReverbComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkLateReverbComponent()
	{
		if (!Z_Registration_Info_UClass_UAkLateReverbComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkLateReverbComponent.OuterSingleton, Z_Construct_UClass_UAkLateReverbComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkLateReverbComponent.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkLateReverbComponent>()
	{
		return UAkLateReverbComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkLateReverbComponent);
	UAkLateReverbComponent::~UAkLateReverbComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkLateReverbComponent)
	struct Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkLateReverbComponent, UAkLateReverbComponent::StaticClass, TEXT("UAkLateReverbComponent"), &Z_Registration_Info_UClass_UAkLateReverbComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkLateReverbComponent), 445279132U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_1057168525(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
