// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkGameplayTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkCallbackInfo;
enum class EAkCallbackType : uint8;
enum class EAkMidiEventType : uint8;
enum class EAkResult : uint8;
struct FAkMidiCc;
struct FAkMidiChannelAftertouch;
struct FAkMidiGeneric;
struct FAkMidiNoteAftertouch;
struct FAkMidiNoteOnOff;
struct FAkMidiPitchBend;
struct FAkMidiProgramChange;
#ifdef AKAUDIO_AkGameplayTypes_generated_h
#error "AkGameplayTypes.generated.h already included, missing '#pragma once' in AkGameplayTypes.h"
#endif
#define AKAUDIO_AkGameplayTypes_generated_h

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_382_SPARSE_DATA
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_382_RPC_WRAPPERS
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_382_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_382_ACCESSORS
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_382_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkCallbackInfo(); \
	friend struct Z_Construct_UClass_UAkCallbackInfo_Statics; \
public: \
	DECLARE_CLASS(UAkCallbackInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkCallbackInfo)


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_382_INCLASS \
private: \
	static void StaticRegisterNativesUAkCallbackInfo(); \
	friend struct Z_Construct_UClass_UAkCallbackInfo_Statics; \
public: \
	DECLARE_CLASS(UAkCallbackInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkCallbackInfo)


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_382_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkCallbackInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkCallbackInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkCallbackInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkCallbackInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkCallbackInfo(UAkCallbackInfo&&); \
	NO_API UAkCallbackInfo(const UAkCallbackInfo&); \
public: \
	NO_API virtual ~UAkCallbackInfo();


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_382_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkCallbackInfo(UAkCallbackInfo&&); \
	NO_API UAkCallbackInfo(const UAkCallbackInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkCallbackInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkCallbackInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkCallbackInfo) \
	NO_API virtual ~UAkCallbackInfo();


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_379_PROLOG
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_382_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_382_SPARSE_DATA \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_382_RPC_WRAPPERS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_382_ACCESSORS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_382_INCLASS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_382_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_382_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_382_SPARSE_DATA \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_382_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_382_ACCESSORS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_382_INCLASS_NO_PURE_DECLS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_382_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkCallbackInfo>();

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_397_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkChannelMask_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkChannelMask>();

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_406_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkOutputSettings_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkOutputSettings>();

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_428_SPARSE_DATA
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_428_RPC_WRAPPERS
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_428_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_428_ACCESSORS
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_428_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkEventCallbackInfo(); \
	friend struct Z_Construct_UClass_UAkEventCallbackInfo_Statics; \
public: \
	DECLARE_CLASS(UAkEventCallbackInfo, UAkCallbackInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkEventCallbackInfo)


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_428_INCLASS \
private: \
	static void StaticRegisterNativesUAkEventCallbackInfo(); \
	friend struct Z_Construct_UClass_UAkEventCallbackInfo_Statics; \
public: \
	DECLARE_CLASS(UAkEventCallbackInfo, UAkCallbackInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkEventCallbackInfo)


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_428_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkEventCallbackInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkEventCallbackInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkEventCallbackInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkEventCallbackInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkEventCallbackInfo(UAkEventCallbackInfo&&); \
	NO_API UAkEventCallbackInfo(const UAkEventCallbackInfo&); \
public: \
	NO_API virtual ~UAkEventCallbackInfo();


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_428_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkEventCallbackInfo(UAkEventCallbackInfo&&); \
	NO_API UAkEventCallbackInfo(const UAkEventCallbackInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkEventCallbackInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkEventCallbackInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkEventCallbackInfo) \
	NO_API virtual ~UAkEventCallbackInfo();


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_425_PROLOG
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_428_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_428_SPARSE_DATA \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_428_RPC_WRAPPERS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_428_ACCESSORS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_428_INCLASS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_428_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_428_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_428_SPARSE_DATA \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_428_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_428_ACCESSORS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_428_INCLASS_NO_PURE_DECLS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_428_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkEventCallbackInfo>();

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_576_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkMidiEventBase_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkMidiEventBase>();

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_595_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkMidiGeneric_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkMidiEventBase Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkMidiGeneric>();

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_614_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkMidiEventBase Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkMidiNoteOnOff>();

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_633_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkMidiCc_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkMidiEventBase Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkMidiCc>();

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_652_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkMidiEventBase Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkMidiPitchBend>();

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_675_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkMidiEventBase Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkMidiNoteAftertouch>();

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_694_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkMidiEventBase Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkMidiChannelAftertouch>();

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_709_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkMidiEventBase Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkMidiProgramChange>();

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_728_SPARSE_DATA
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_728_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetProgramChange); \
	DECLARE_FUNCTION(execGetChannelAftertouch); \
	DECLARE_FUNCTION(execGetNoteAftertouch); \
	DECLARE_FUNCTION(execGetPitchBend); \
	DECLARE_FUNCTION(execGetCc); \
	DECLARE_FUNCTION(execGetNoteOff); \
	DECLARE_FUNCTION(execGetNoteOn); \
	DECLARE_FUNCTION(execGetGeneric); \
	DECLARE_FUNCTION(execGetChannel); \
	DECLARE_FUNCTION(execGetType);


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_728_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetProgramChange); \
	DECLARE_FUNCTION(execGetChannelAftertouch); \
	DECLARE_FUNCTION(execGetNoteAftertouch); \
	DECLARE_FUNCTION(execGetPitchBend); \
	DECLARE_FUNCTION(execGetCc); \
	DECLARE_FUNCTION(execGetNoteOff); \
	DECLARE_FUNCTION(execGetNoteOn); \
	DECLARE_FUNCTION(execGetGeneric); \
	DECLARE_FUNCTION(execGetChannel); \
	DECLARE_FUNCTION(execGetType);


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_728_ACCESSORS
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_728_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkMIDIEventCallbackInfo(); \
	friend struct Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics; \
public: \
	DECLARE_CLASS(UAkMIDIEventCallbackInfo, UAkEventCallbackInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkMIDIEventCallbackInfo)


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_728_INCLASS \
private: \
	static void StaticRegisterNativesUAkMIDIEventCallbackInfo(); \
	friend struct Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics; \
public: \
	DECLARE_CLASS(UAkMIDIEventCallbackInfo, UAkEventCallbackInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkMIDIEventCallbackInfo)


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_728_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkMIDIEventCallbackInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkMIDIEventCallbackInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkMIDIEventCallbackInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkMIDIEventCallbackInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkMIDIEventCallbackInfo(UAkMIDIEventCallbackInfo&&); \
	NO_API UAkMIDIEventCallbackInfo(const UAkMIDIEventCallbackInfo&); \
public: \
	NO_API virtual ~UAkMIDIEventCallbackInfo();


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_728_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkMIDIEventCallbackInfo(UAkMIDIEventCallbackInfo&&); \
	NO_API UAkMIDIEventCallbackInfo(const UAkMIDIEventCallbackInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkMIDIEventCallbackInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkMIDIEventCallbackInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkMIDIEventCallbackInfo) \
	NO_API virtual ~UAkMIDIEventCallbackInfo();


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_725_PROLOG
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_728_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_728_SPARSE_DATA \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_728_RPC_WRAPPERS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_728_ACCESSORS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_728_INCLASS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_728_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_728_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_728_SPARSE_DATA \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_728_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_728_ACCESSORS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_728_INCLASS_NO_PURE_DECLS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_728_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkMIDIEventCallbackInfo>();

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_776_SPARSE_DATA
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_776_RPC_WRAPPERS
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_776_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_776_ACCESSORS
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_776_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkMarkerCallbackInfo(); \
	friend struct Z_Construct_UClass_UAkMarkerCallbackInfo_Statics; \
public: \
	DECLARE_CLASS(UAkMarkerCallbackInfo, UAkEventCallbackInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkMarkerCallbackInfo)


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_776_INCLASS \
private: \
	static void StaticRegisterNativesUAkMarkerCallbackInfo(); \
	friend struct Z_Construct_UClass_UAkMarkerCallbackInfo_Statics; \
public: \
	DECLARE_CLASS(UAkMarkerCallbackInfo, UAkEventCallbackInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkMarkerCallbackInfo)


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_776_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkMarkerCallbackInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkMarkerCallbackInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkMarkerCallbackInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkMarkerCallbackInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkMarkerCallbackInfo(UAkMarkerCallbackInfo&&); \
	NO_API UAkMarkerCallbackInfo(const UAkMarkerCallbackInfo&); \
public: \
	NO_API virtual ~UAkMarkerCallbackInfo();


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_776_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkMarkerCallbackInfo(UAkMarkerCallbackInfo&&); \
	NO_API UAkMarkerCallbackInfo(const UAkMarkerCallbackInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkMarkerCallbackInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkMarkerCallbackInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkMarkerCallbackInfo) \
	NO_API virtual ~UAkMarkerCallbackInfo();


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_773_PROLOG
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_776_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_776_SPARSE_DATA \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_776_RPC_WRAPPERS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_776_ACCESSORS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_776_INCLASS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_776_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_776_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_776_SPARSE_DATA \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_776_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_776_ACCESSORS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_776_INCLASS_NO_PURE_DECLS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_776_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkMarkerCallbackInfo>();

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_798_SPARSE_DATA
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_798_RPC_WRAPPERS
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_798_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_798_ACCESSORS
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_798_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkDurationCallbackInfo(); \
	friend struct Z_Construct_UClass_UAkDurationCallbackInfo_Statics; \
public: \
	DECLARE_CLASS(UAkDurationCallbackInfo, UAkEventCallbackInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkDurationCallbackInfo)


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_798_INCLASS \
private: \
	static void StaticRegisterNativesUAkDurationCallbackInfo(); \
	friend struct Z_Construct_UClass_UAkDurationCallbackInfo_Statics; \
public: \
	DECLARE_CLASS(UAkDurationCallbackInfo, UAkEventCallbackInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkDurationCallbackInfo)


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_798_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkDurationCallbackInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkDurationCallbackInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkDurationCallbackInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkDurationCallbackInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkDurationCallbackInfo(UAkDurationCallbackInfo&&); \
	NO_API UAkDurationCallbackInfo(const UAkDurationCallbackInfo&); \
public: \
	NO_API virtual ~UAkDurationCallbackInfo();


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_798_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkDurationCallbackInfo(UAkDurationCallbackInfo&&); \
	NO_API UAkDurationCallbackInfo(const UAkDurationCallbackInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkDurationCallbackInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkDurationCallbackInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkDurationCallbackInfo) \
	NO_API virtual ~UAkDurationCallbackInfo();


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_795_PROLOG
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_798_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_798_SPARSE_DATA \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_798_RPC_WRAPPERS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_798_ACCESSORS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_798_INCLASS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_798_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_798_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_798_SPARSE_DATA \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_798_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_798_ACCESSORS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_798_INCLASS_NO_PURE_DECLS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_798_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkDurationCallbackInfo>();

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_823_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkSegmentInfo_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkSegmentInfo>();

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_869_SPARSE_DATA
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_869_RPC_WRAPPERS
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_869_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_869_ACCESSORS
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_869_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkMusicSyncCallbackInfo(); \
	friend struct Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics; \
public: \
	DECLARE_CLASS(UAkMusicSyncCallbackInfo, UAkCallbackInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkMusicSyncCallbackInfo)


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_869_INCLASS \
private: \
	static void StaticRegisterNativesUAkMusicSyncCallbackInfo(); \
	friend struct Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics; \
public: \
	DECLARE_CLASS(UAkMusicSyncCallbackInfo, UAkCallbackInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkMusicSyncCallbackInfo)


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_869_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkMusicSyncCallbackInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkMusicSyncCallbackInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkMusicSyncCallbackInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkMusicSyncCallbackInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkMusicSyncCallbackInfo(UAkMusicSyncCallbackInfo&&); \
	NO_API UAkMusicSyncCallbackInfo(const UAkMusicSyncCallbackInfo&); \
public: \
	NO_API virtual ~UAkMusicSyncCallbackInfo();


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_869_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkMusicSyncCallbackInfo(UAkMusicSyncCallbackInfo&&); \
	NO_API UAkMusicSyncCallbackInfo(const UAkMusicSyncCallbackInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkMusicSyncCallbackInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkMusicSyncCallbackInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkMusicSyncCallbackInfo) \
	NO_API virtual ~UAkMusicSyncCallbackInfo();


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_866_PROLOG
#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_869_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_869_SPARSE_DATA \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_869_RPC_WRAPPERS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_869_ACCESSORS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_869_INCLASS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_869_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_869_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_869_SPARSE_DATA \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_869_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_869_ACCESSORS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_869_INCLASS_NO_PURE_DECLS \
	FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_869_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkMusicSyncCallbackInfo>();

#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_888_DELEGATE \
AKAUDIO_API void FOnAkPostEventCallback_DelegateWrapper(const FScriptDelegate& OnAkPostEventCallback, EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_889_DELEGATE \
AKAUDIO_API void FOnAkBankCallback_DelegateWrapper(const FScriptDelegate& OnAkBankCallback, EAkResult Result);


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_890_DELEGATE \
AKAUDIO_API void FOnSetCurrentAudioCultureCallback_DelegateWrapper(const FScriptDelegate& OnSetCurrentAudioCultureCallback, bool Succeeded);


#define FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_1050_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkExternalSourceInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameOff2023_GameOff2023_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h


#define FOREACH_ENUM_EAKAUDIOCONTEXT(op) \
	op(EAkAudioContext::Foreign) \
	op(EAkAudioContext::GameplayAudio) \
	op(EAkAudioContext::EditorAudio) \
	op(EAkAudioContext::AlwaysActive) 

enum class EAkAudioContext : uint8;
template<> struct TIsUEnumClass<EAkAudioContext> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioContext>();

#define FOREACH_ENUM_PANNINGRULE(op) \
	op(PanningRule::PanningRule_Speakers) \
	op(PanningRule::PanningRule_Headphones) 

enum class PanningRule : uint8;
template<> struct TIsUEnumClass<PanningRule> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<PanningRule>();

#define FOREACH_ENUM_AKACOUSTICPORTALSTATE(op) \
	op(AkAcousticPortalState::Closed) \
	op(AkAcousticPortalState::Open) 

enum class AkAcousticPortalState : uint8;
template<> struct TIsUEnumClass<AkAcousticPortalState> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<AkAcousticPortalState>();

#define FOREACH_ENUM_AKCHANNELCONFIGURATION(op) \
	op(AkChannelConfiguration::Ak_Parent) \
	op(AkChannelConfiguration::Ak_MainMix) \
	op(AkChannelConfiguration::Ak_Passthrough) \
	op(AkChannelConfiguration::Ak_LFE) \
	op(AkChannelConfiguration::AK_Audio_Objects) \
	op(AkChannelConfiguration::Ak_1_0) \
	op(AkChannelConfiguration::Ak_2_0) \
	op(AkChannelConfiguration::Ak_2_1) \
	op(AkChannelConfiguration::Ak_3_0) \
	op(AkChannelConfiguration::Ak_3_1) \
	op(AkChannelConfiguration::Ak_4_0) \
	op(AkChannelConfiguration::Ak_4_1) \
	op(AkChannelConfiguration::Ak_5_0) \
	op(AkChannelConfiguration::Ak_5_1) \
	op(AkChannelConfiguration::Ak_7_1) \
	op(AkChannelConfiguration::Ak_5_1_2) \
	op(AkChannelConfiguration::Ak_7_1_2) \
	op(AkChannelConfiguration::Ak_7_1_4) \
	op(AkChannelConfiguration::Ak_Auro_9_1) \
	op(AkChannelConfiguration::Ak_Auro_10_1) \
	op(AkChannelConfiguration::Ak_Auro_11_1) \
	op(AkChannelConfiguration::Ak_Auro_13_1) \
	op(AkChannelConfiguration::Ak_Ambisonics_1st_order) \
	op(AkChannelConfiguration::Ak_Ambisonics_2nd_order) \
	op(AkChannelConfiguration::Ak_Ambisonics_3rd_order) \
	op(AkChannelConfiguration::Ak_Ambisonics_4th_order) \
	op(AkChannelConfiguration::Ak_Ambisonics_5th_order) 

enum class AkChannelConfiguration : uint8;
template<> struct TIsUEnumClass<AkChannelConfiguration> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<AkChannelConfiguration>();

#define FOREACH_ENUM_AKSPEAKERCONFIGURATION(op) \
	op(AkSpeakerConfiguration::Ak_Speaker_Front_Left) \
	op(AkSpeakerConfiguration::Ak_Speaker_Front_Right) \
	op(AkSpeakerConfiguration::Ak_Speaker_Front_Center) \
	op(AkSpeakerConfiguration::Ak_Speaker_Low_Frequency) \
	op(AkSpeakerConfiguration::Ak_Speaker_Back_Left) \
	op(AkSpeakerConfiguration::Ak_Speaker_Back_Right) \
	op(AkSpeakerConfiguration::Ak_Speaker_Back_Center) \
	op(AkSpeakerConfiguration::Ak_Speaker_Side_Left) \
	op(AkSpeakerConfiguration::Ak_Speaker_Side_Right) \
	op(AkSpeakerConfiguration::Ak_Speaker_Top) \
	op(AkSpeakerConfiguration::Ak_Speaker_Height_Front_Left) \
	op(AkSpeakerConfiguration::Ak_Speaker_Height_Front_Center) \
	op(AkSpeakerConfiguration::Ak_Speaker_Height_Front_Right) \
	op(AkSpeakerConfiguration::Ak_Speaker_Height_Back_Left) \
	op(AkSpeakerConfiguration::Ak_Speaker_Height_Back_Center) \
	op(AkSpeakerConfiguration::Ak_Speaker_Height_Back_Right) 

enum class AkSpeakerConfiguration;
template<> struct TIsUEnumClass<AkSpeakerConfiguration> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<AkSpeakerConfiguration>();

#define FOREACH_ENUM_AKMULTIPOSITIONTYPE(op) \
	op(AkMultiPositionType::SingleSource) \
	op(AkMultiPositionType::MultiSources) \
	op(AkMultiPositionType::MultiDirections) 

enum class AkMultiPositionType : uint8;
template<> struct TIsUEnumClass<AkMultiPositionType> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<AkMultiPositionType>();

#define FOREACH_ENUM_AKACTIONONEVENTTYPE(op) \
	op(AkActionOnEventType::Stop) \
	op(AkActionOnEventType::Pause) \
	op(AkActionOnEventType::Resume) \
	op(AkActionOnEventType::Break) \
	op(AkActionOnEventType::ReleaseEnvelope) 

enum class AkActionOnEventType : uint8;
template<> struct TIsUEnumClass<AkActionOnEventType> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<AkActionOnEventType>();

#define FOREACH_ENUM_EAKCURVEINTERPOLATION(op) \
	op(EAkCurveInterpolation::Log3) \
	op(EAkCurveInterpolation::Sine) \
	op(EAkCurveInterpolation::Log1) \
	op(EAkCurveInterpolation::InvSCurve) \
	op(EAkCurveInterpolation::Linear) \
	op(EAkCurveInterpolation::SCurve) \
	op(EAkCurveInterpolation::Exp1) \
	op(EAkCurveInterpolation::SineRecip) \
	op(EAkCurveInterpolation::Exp3) \
	op(EAkCurveInterpolation::LastFadeCurve) \
	op(EAkCurveInterpolation::Constant) 

enum class EAkCurveInterpolation : uint8;
template<> struct TIsUEnumClass<EAkCurveInterpolation> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<EAkCurveInterpolation>();

#define FOREACH_ENUM_EAKRESULT(op) \
	op(EAkResult::NotImplemented) \
	op(EAkResult::Success) \
	op(EAkResult::Fail) \
	op(EAkResult::PartialSuccess) \
	op(EAkResult::NotCompatible) \
	op(EAkResult::AlreadyConnected) \
	op(EAkResult::InvalidFile) \
	op(EAkResult::AudioFileHeaderTooLarge) \
	op(EAkResult::MaxReached) \
	op(EAkResult::InvalidID) \
	op(EAkResult::IDNotFound) \
	op(EAkResult::InvalidInstanceID) \
	op(EAkResult::NoMoreData) \
	op(EAkResult::InvalidStateGroup) \
	op(EAkResult::ChildAlreadyHasAParent) \
	op(EAkResult::InvalidLanguage) \
	op(EAkResult::CannotAddItseflAsAChild) \
	op(EAkResult::InvalidParameter) \
	op(EAkResult::ElementAlreadyInList) \
	op(EAkResult::PathNotFound) \
	op(EAkResult::PathNoVertices) \
	op(EAkResult::PathNotRunning) \
	op(EAkResult::PathNotPaused) \
	op(EAkResult::PathNodeAlreadyInList) \
	op(EAkResult::PathNodeNotInList) \
	op(EAkResult::DataNeeded) \
	op(EAkResult::NoDataNeeded) \
	op(EAkResult::DataReady) \
	op(EAkResult::NoDataReady) \
	op(EAkResult::InsufficientMemory) \
	op(EAkResult::Cancelled) \
	op(EAkResult::UnknownBankID) \
	op(EAkResult::BankReadError) \
	op(EAkResult::InvalidSwitchType) \
	op(EAkResult::FormatNotReady) \
	op(EAkResult::WrongBankVersion) \
	op(EAkResult::FileNotFound) \
	op(EAkResult::DeviceNotReady) \
	op(EAkResult::BankAlreadyLoaded) \
	op(EAkResult::RenderedFX) \
	op(EAkResult::ProcessNeeded) \
	op(EAkResult::ProcessDone) \
	op(EAkResult::MemManagerNotInitialized) \
	op(EAkResult::StreamMgrNotInitialized) \
	op(EAkResult::SSEInstructionsNotSupported) \
	op(EAkResult::Busy) \
	op(EAkResult::UnsupportedChannelConfig) \
	op(EAkResult::PluginMediaNotAvailable) \
	op(EAkResult::MustBeVirtualized) \
	op(EAkResult::CommandTooLarge) \
	op(EAkResult::RejectedByFilter) \
	op(EAkResult::InvalidCustomPlatformName) \
	op(EAkResult::DLLCannotLoad) \
	op(EAkResult::DLLPathNotFound) \
	op(EAkResult::NoJavaVM) \
	op(EAkResult::OpenSLError) \
	op(EAkResult::PluginNotRegistered) \
	op(EAkResult::DataAlignmentError) 

enum class EAkResult : uint8;
template<> struct TIsUEnumClass<EAkResult> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<EAkResult>();

#define FOREACH_ENUM_EAKCALLBACKTYPE(op) \
	op(EAkCallbackType::EndOfEvent) \
	op(EAkCallbackType::Marker) \
	op(EAkCallbackType::Duration) \
	op(EAkCallbackType::Starvation) \
	op(EAkCallbackType::MusicPlayStarted) \
	op(EAkCallbackType::MusicSyncBeat) \
	op(EAkCallbackType::MusicSyncBar) \
	op(EAkCallbackType::MusicSyncEntry) \
	op(EAkCallbackType::MusicSyncExit) \
	op(EAkCallbackType::MusicSyncGrid) \
	op(EAkCallbackType::MusicSyncUserCue) \
	op(EAkCallbackType::MusicSyncPoint) \
	op(EAkCallbackType::MIDIEvent) 

enum class EAkCallbackType : uint8;
template<> struct TIsUEnumClass<EAkCallbackType> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<EAkCallbackType>();

#define FOREACH_ENUM_ERTPCVALUETYPE(op) \
	op(ERTPCValueType::Default) \
	op(ERTPCValueType::Global) \
	op(ERTPCValueType::GameObject) \
	op(ERTPCValueType::PlayingID) \
	op(ERTPCValueType::Unavailable) 

enum class ERTPCValueType : uint8;
template<> struct TIsUEnumClass<ERTPCValueType> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<ERTPCValueType>();

#define FOREACH_ENUM_EAKMIDIEVENTTYPE(op) \
	op(EAkMidiEventType::AkMidiEventTypeInvalid) \
	op(EAkMidiEventType::AkMidiEventTypeNoteOff) \
	op(EAkMidiEventType::AkMidiEventTypeNoteOn) \
	op(EAkMidiEventType::AkMidiEventTypeNoteAftertouch) \
	op(EAkMidiEventType::AkMidiEventTypeController) \
	op(EAkMidiEventType::AkMidiEventTypeProgramChange) \
	op(EAkMidiEventType::AkMidiEventTypeChannelAftertouch) \
	op(EAkMidiEventType::AkMidiEventTypePitchBend) \
	op(EAkMidiEventType::AkMidiEventTypeSysex) \
	op(EAkMidiEventType::AkMidiEventTypeEscape) \
	op(EAkMidiEventType::AkMidiEventTypeMeta) 

enum class EAkMidiEventType : uint8;
template<> struct TIsUEnumClass<EAkMidiEventType> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<EAkMidiEventType>();

#define FOREACH_ENUM_EAKMIDICCVALUES(op) \
	op(EAkMidiCcValues::AkMidiCcBankSelectCoarse) \
	op(EAkMidiCcValues::AkMidiCcModWheelCoarse) \
	op(EAkMidiCcValues::AkMidiCcBreathCtrlCoarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl3Coarse) \
	op(EAkMidiCcValues::AkMidiCcFootPedalCoarse) \
	op(EAkMidiCcValues::AkMidiCcPortamentoCoarse) \
	op(EAkMidiCcValues::AkMidiCcDataEntryCoarse) \
	op(EAkMidiCcValues::AkMidiCcVolumeCoarse) \
	op(EAkMidiCcValues::AkMidiCcBalanceCoarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl9Coarse) \
	op(EAkMidiCcValues::AkMidiCcPanPositionCoarse) \
	op(EAkMidiCcValues::AkMidiCcExpressionCoarse) \
	op(EAkMidiCcValues::AkMidiCcEffectCtrl1Coarse) \
	op(EAkMidiCcValues::AkMidiCcEffectCtrl2Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl14Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl15Coarse) \
	op(EAkMidiCcValues::AkMidiCcGenSlider1) \
	op(EAkMidiCcValues::AkMidiCcGenSlider2) \
	op(EAkMidiCcValues::AkMidiCcGenSlider3) \
	op(EAkMidiCcValues::AkMidiCcGenSlider4) \
	op(EAkMidiCcValues::AkMidiCcCtrl20Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl21Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl22Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl23Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl24Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl25Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl26Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl27Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl28Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl29Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl30Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl31Coarse) \
	op(EAkMidiCcValues::AkMidiCcBankSelectFine) \
	op(EAkMidiCcValues::AkMidiCcModWheelFine) \
	op(EAkMidiCcValues::AkMidiCcBreathCtrlFine) \
	op(EAkMidiCcValues::AkMidiCcCtrl3Fine) \
	op(EAkMidiCcValues::AkMidiCcFootPedalFine) \
	op(EAkMidiCcValues::AkMidiCcPortamentoFine) \
	op(EAkMidiCcValues::AkMidiCcDataEntryFine) \
	op(EAkMidiCcValues::AkMidiCcVolumeFine) \
	op(EAkMidiCcValues::AkMidiCcBalanceFine) \
	op(EAkMidiCcValues::AkMidiCcCtrl9Fine) \
	op(EAkMidiCcValues::AkMidiCcPanPositionFine) \
	op(EAkMidiCcValues::AkMidiCcExpressionFine) \
	op(EAkMidiCcValues::AkMidiCcEffectCtrl1Fine) \
	op(EAkMidiCcValues::AkMidiCcEffectCtrl2Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl14Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl15Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl20Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl21Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl22Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl23Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl24Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl25Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl26Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl27Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl28Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl29Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl30Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl31Fine) \
	op(EAkMidiCcValues::AkMidiCcHoldPedal) \
	op(EAkMidiCcValues::AkMidiCcPortamentoOnOff) \
	op(EAkMidiCcValues::AkMidiCcSustenutoPedal) \
	op(EAkMidiCcValues::AkMidiCcSoftPedal) \
	op(EAkMidiCcValues::AkMidiCcLegatoPedal) \
	op(EAkMidiCcValues::AkMidiCcHoldPedal2) \
	op(EAkMidiCcValues::AkMidiCcSoundVariation) \
	op(EAkMidiCcValues::AkMidiCcSoundTimbre) \
	op(EAkMidiCcValues::AkMidiCcSoundReleaseTime) \
	op(EAkMidiCcValues::AkMidiCcSoundAttackTime) \
	op(EAkMidiCcValues::AkMidiCcSoundBrightness) \
	op(EAkMidiCcValues::AkMidiCcSoundCtrl6) \
	op(EAkMidiCcValues::AkMidiCcSoundCtrl7) \
	op(EAkMidiCcValues::AkMidiCcSoundCtrl8) \
	op(EAkMidiCcValues::AkMidiCcSoundCtrl9) \
	op(EAkMidiCcValues::AkMidiCcSoundCtrl10) \
	op(EAkMidiCcValues::AkMidiCcGeneralButton1) \
	op(EAkMidiCcValues::AkMidiCcGeneralButton2) \
	op(EAkMidiCcValues::AkMidiCcGeneralButton3) \
	op(EAkMidiCcValues::AkMidiCcGeneralButton4) \
	op(EAkMidiCcValues::AkMidiCcReverbLevel) \
	op(EAkMidiCcValues::AkMidiCcTremoloLevel) \
	op(EAkMidiCcValues::AkMidiCcChorusLevel) \
	op(EAkMidiCcValues::AkMidiCcCelesteLevel) \
	op(EAkMidiCcValues::AkMidiCcPhaserLevel) \
	op(EAkMidiCcValues::AkMidiCcDataButtonP1) \
	op(EAkMidiCcValues::AkMidiCcDataButtonM1) \
	op(EAkMidiCcValues::AkMidiCcNonRegisterCoarse) \
	op(EAkMidiCcValues::AkMidiCcNonRegisterFine) \
	op(EAkMidiCcValues::AkMidiCcAllSoundOff) \
	op(EAkMidiCcValues::AkMidiCcAllControllersOff) \
	op(EAkMidiCcValues::AkMidiCcLocalKeyboard) \
	op(EAkMidiCcValues::AkMidiCcAllNotesOff) \
	op(EAkMidiCcValues::AkMidiCcOmniModeOff) \
	op(EAkMidiCcValues::AkMidiCcOmniModeOn) \
	op(EAkMidiCcValues::AkMidiCcOmniMonophonicOn) \
	op(EAkMidiCcValues::AkMidiCcOmniPolyphonicOn) 

enum class EAkMidiCcValues : uint8;
template<> struct TIsUEnumClass<EAkMidiCcValues> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<EAkMidiCcValues>();

#define FOREACH_ENUM_AKCODECID(op) \
	op(AkCodecId::None) \
	op(AkCodecId::PCM) \
	op(AkCodecId::ADPCM) \
	op(AkCodecId::XMA) \
	op(AkCodecId::Vorbis) \
	op(AkCodecId::ATRAC9) \
	op(AkCodecId::OpusNX) \
	op(AkCodecId::AkOpus) \
	op(AkCodecId::AkOpusWEM) 

enum class AkCodecId : uint8;
template<> struct TIsUEnumClass<AkCodecId> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<AkCodecId>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
