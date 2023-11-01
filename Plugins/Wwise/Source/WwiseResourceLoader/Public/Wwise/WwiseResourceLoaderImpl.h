/*******************************************************************************
The content of this file includes portions of the proprietary AUDIOKINETIC Wwise
Technology released in source code form as part of the game integration package.
The content of this file may not be used without valid licenses to the
AUDIOKINETIC Wwise Technology.
Note that the use of the game engine is subject to the Unreal(R) Engine End User
License Agreement at https://www.unrealengine.com/en-US/eula/unreal
 
License Usage
 
Licensees holding valid licenses to the AUDIOKINETIC Wwise Technology may use
this file in accordance with the end user license agreement provided with the
software or, alternatively, in accordance with the terms contained
in a written agreement between you and Audiokinetic Inc.
Copyright (c) 2023 Audiokinetic Inc.
*******************************************************************************/

#pragma once

#include "WwiseResourceLoaderModule.h"
#include "Wwise/WwiseExecutionQueue.h"
#include "Wwise/CookedData/WwiseAuxBusCookedData.h"
#include "Wwise/CookedData/WwiseEventCookedData.h"
#include "Wwise/CookedData/WwiseShareSetCookedData.h"
#include "Wwise/Loaded/WwiseLoadedAuxBus.h"
#include "Wwise/Loaded/WwiseLoadedSoundBank.h"
#include "Wwise/Loaded/WwiseLoadedEvent.h"
#include "Wwise/Loaded/WwiseLoadedExternalSource.h"
#include "Wwise/Loaded/WwiseLoadedGroupValue.h"
#include "Wwise/Loaded/WwiseLoadedInitBank.h"
#include "Wwise/Loaded/WwiseLoadedMedia.h"
#include "Wwise/Loaded/WwiseLoadedShareSet.h"

#include "Wwise/WwiseResourceLoaderFuture.h"
#include "Wwise/WwiseSharedGroupValueKey.h"
#include "Wwise/WwiseSharedLanguageId.h"
#include "Wwise/WwiseSharedPlatformId.h"

#include "Wwise/Stats/ResourceLoader.h"

#if WITH_EDITORONLY_DATA
#include "Engine/EngineTypes.h"
#include "UObject/SoftObjectPath.h"
#endif

#include "WwiseResourceLoaderImpl.generated.h"

/**
 * @brief What reload strategy should be used for language changes
*/
UENUM()
enum EWwiseReloadLanguage
{
	/// Don't reload anything. The game is fully responsible to reload elements. This doesn't call
	/// any operation on the SoundEngine side, so everything will keep on working as usual.
	Manual,

	/// Reloads immediately without stopping anything. Game is responsible for stopping and restarting
	/// possibly affected sounds or else they might cause audible breaks. This is useful when some
	/// sounds can keep on playing, such as music and ambient sounds, while the dialogues are being
	/// internally reloaded.
	/// 
	/// Depending on the quantity of currently loaded localized banks, the operation can take a long time.
	/// 
	/// \warning Affected events needs to be restarted once the operation is done.
	Immediate,

	/// Stops all sounds first, unloads all the localized banks, and reloads the new language. This will
	/// cause an audible break while the operation is done.
	/// 
	/// Depending on the quantity of currently loaded localized banks, the operation can take a long time.
	/// 
	/// \warning Affected events needs to be restarted once the operation is done.
	Safe
};

/**
 * @brief Whether the WwiseResourceLoader is allowed to load/unload assets
*/
enum class EWwiseResourceLoaderState
{
	/// Do not allow the WwiseResourceLoader to load/unload assets
	AlwaysDisabled,
	/// Allow the WwiseResourceLoader to load/unload assets
	Enabled,
};

struct WWISERESOURCELOADER_API FWwiseSwitchContainerLeafGroupValueUsageCount
{
	/**
	 * @brief SwitchContainer Leaf this structure represents.
	*/
	const FWwiseSwitchContainerLeafCookedData& Key;

	/**
	 * @brief Number of GroupValues present in this key that are already loaded.
	*/
	TSet<FWwiseGroupValueCookedData> LoadedGroupValues;

	/**
	 * @brief Resources represented by the Key that were successfully loaded.
	*/
	struct WWISERESOURCELOADER_API FLoadedData
	{
		FLoadedData();
		TArray<const FWwiseSoundBankCookedData*> LoadedSoundBanks;
		TArray<const FWwiseExternalSourceCookedData*> LoadedExternalSources;
		TArray<const FWwiseMediaCookedData*> LoadedMedia;
		bool IsLoaded() const;
	} LoadedData;

	FWwiseSwitchContainerLeafGroupValueUsageCount(const FWwiseSwitchContainerLeafCookedData& InKey);

	bool HaveAllKeys() const;
};

struct WWISERESOURCELOADER_API FWwiseSwitchContainerLoadedGroupValueInfo
{
	/**
	 * @brief GroupValue key this structure represents.
	*/
	FWwiseSharedGroupValueKey Key;

	/**
	 * @brief Number of times this particular GroupValue got loaded in the currently loaded maps.
	 * 
	 * Any value higher than 0 means there's a chance the Leaves might be required.
	*/
	int LoadCount;

	/**
	 * @brief Leaves that uses this particular GroupValue.
	 * 
	 * @note The ownership of this pointer is uniquely created and discarded during SwitchContainerLeaf loading and unloading.
	*/
	TSet<FWwiseSwitchContainerLeafGroupValueUsageCount*> Leaves;

	FWwiseSwitchContainerLoadedGroupValueInfo(const FWwiseSharedGroupValueKey& InKey) :
		Key(InKey),
		LoadCount(0),
		Leaves()
	{}

	bool ShouldBeLoaded() const
	{
		check(LoadCount >= 0);

		return LoadCount > 0;
	}

	bool operator ==(const FWwiseSwitchContainerLoadedGroupValueInfo& InRhs) const
	{
		return Key == InRhs.Key;
	}

	bool operator !=(const FWwiseSwitchContainerLoadedGroupValueInfo& InRhs) const
	{
		return Key != InRhs.Key;
	}

	bool operator <(const FWwiseSwitchContainerLoadedGroupValueInfo& InRhs) const
	{
		return Key < InRhs.Key;
	}

	bool operator <=(const FWwiseSwitchContainerLoadedGroupValueInfo& InRhs) const
	{
		return Key <= InRhs.Key;
	}

	bool operator >(const FWwiseSwitchContainerLoadedGroupValueInfo& InRhs) const
	{
		return Key > InRhs.Key;
	}

	bool operator >=(const FWwiseSwitchContainerLoadedGroupValueInfo& InRhs) const
	{
		return Key >= InRhs.Key;
	}

	bool operator ==(const FWwiseSharedGroupValueKey& InRhs) const
	{
		return Key == InRhs;
	}

	bool operator !=(const FWwiseSharedGroupValueKey& InRhs) const
	{
		return Key != InRhs;
	}
};
inline uint32 GetTypeHash(const FWwiseSwitchContainerLoadedGroupValueInfo& InValue)
{
	return GetTypeHash(InValue.Key);
}

class WWISERESOURCELOADER_API FWwiseResourceLoaderImpl
{
public:
	using FWwiseSetLanguageFuture = TWwiseFuture<void>;
	using FWwiseSetLanguagePromise = TWwisePromise<void>;

	static FWwiseResourceLoaderImpl* Instantiate()
	{
		if (auto* Module = IWwiseResourceLoaderModule::GetModule())
		{
			return Module->InstantiateResourceLoaderImpl();
		}
		return nullptr;
	}

	EWwiseResourceLoaderState WwiseResourceLoaderState = EWwiseResourceLoaderState::Enabled;

	/**
	 * @brief Currently targeted platform for this runtime
	*/
	FWwiseSharedPlatformId CurrentPlatform;

	/**
	 * @brief Currently targeted language for this runtime
	*/
	FWwiseLanguageCookedData CurrentLanguage;

	/**
	 * @brief Location in the staged product where the SoundBank medias are found
	*/
	FString StagePath;

#if WITH_EDITORONLY_DATA
	/**
	 * @brief Location where the Wwise Generated SoundBanks product is found on disk relative to the project
	*/
	FDirectoryPath GeneratedSoundBanksPath;
#endif

	ENamedThreads::Type TaskThread = ENamedThreads::AnyThread;

	FWwiseResourceLoaderImpl();
	virtual ~FWwiseResourceLoaderImpl() {}

	FName GetUnrealExternalSourcePath() const;
	FString GetUnrealPath() const;
	FString GetUnrealPath(const FName& InPath) const { return GetUnrealPath(InPath.ToString()); }
	FString GetUnrealPath(const FString& InPath) const;

	FString GetUnrealStagePath(const FName& InPath) const;
	FString GetUnrealStagePath(const FString& InPath) const;
#if WITH_EDITORONLY_DATA
	FString GetUnrealGeneratedSoundBanksPath(const FName& InPath) const { return GetUnrealGeneratedSoundBanksPath(InPath.ToString());}
	FString GetUnrealGeneratedSoundBanksPath(const FString& InPath) const;
#endif

	virtual EWwiseResourceLoaderState GetResourceLoaderState();
	virtual void SetResourceLoaderState(EWwiseResourceLoaderState State);
	virtual bool IsEnabled();
	virtual void Disable();
	virtual void Enable();

	virtual void SetLanguageAsync(FWwiseSetLanguagePromise&& Promise, const FWwiseLanguageCookedData& InLanguage, EWwiseReloadLanguage InReloadLanguage);
	void SetPlatform(const FWwiseSharedPlatformId& InPlatform);

	virtual FWwiseLoadedAuxBus CreateAuxBusNode(const FWwiseLocalizedAuxBusCookedData& InAuxBusCookedData, const FWwiseLanguageCookedData* InLanguageOverride);
	virtual void LoadAuxBusAsync(FWwiseLoadedAuxBusPromise&& Promise, FWwiseLoadedAuxBus&& InAuxBusListNode);
	virtual void UnloadAuxBusAsync(FWwiseResourceUnloadPromise&& Promise, FWwiseLoadedAuxBus&& InAuxBusListNode);

	virtual FWwiseLoadedEvent CreateEventNode(const FWwiseLocalizedEventCookedData& InEventCookedData, const FWwiseLanguageCookedData* InLanguageOverride);
	virtual void LoadEventAsync(FWwiseLoadedEventPromise&& Promise, FWwiseLoadedEvent&& InEventListNode);
	virtual void UnloadEventAsync(FWwiseResourceUnloadPromise&& Promise, FWwiseLoadedEvent&& InEventListNode);

	virtual FWwiseLoadedExternalSource CreateExternalSourceNode(const FWwiseExternalSourceCookedData& InExternalSourceCookedData);
	virtual void LoadExternalSourceAsync(FWwiseLoadedExternalSourcePromise&& Promise, FWwiseLoadedExternalSource&& InExternalSourceListNode);
	virtual void UnloadExternalSourceAsync(FWwiseResourceUnloadPromise&& Promise, FWwiseLoadedExternalSource&& InExternalSourceListNode);

	virtual FWwiseLoadedGroupValue CreateGroupValueNode(const FWwiseGroupValueCookedData& InGroupValueCookedData);
	virtual void LoadGroupValueAsync(FWwiseLoadedGroupValuePromise&& Promise, FWwiseLoadedGroupValue&& InGroupValueListNode);
	virtual void UnloadGroupValueAsync(FWwiseResourceUnloadPromise&& Promise, FWwiseLoadedGroupValue&& InGroupValueListNode);

	virtual FWwiseLoadedInitBank CreateInitBankNode(const FWwiseInitBankCookedData& InInitBankCookedData);
	virtual void LoadInitBankAsync(FWwiseLoadedInitBankPromise&& Promise, FWwiseLoadedInitBank&& InInitBankListNode);
	virtual void UnloadInitBankAsync(FWwiseResourceUnloadPromise&& Promise, FWwiseLoadedInitBank&& InInitBankListNode);

	virtual FWwiseLoadedMedia CreateMediaNode(const FWwiseMediaCookedData& InMediaCookedData);
	virtual void LoadMediaAsync(FWwiseLoadedMediaPromise&& Promise, FWwiseLoadedMedia&& InMediaListNode);
	virtual void UnloadMediaAsync(FWwiseResourceUnloadPromise&& Promise, FWwiseLoadedMedia&& InMediaListNode);

	virtual FWwiseLoadedShareSet CreateShareSetNode(const FWwiseLocalizedShareSetCookedData& InShareSetCookedData, const FWwiseLanguageCookedData* InLanguageOverride);
	virtual void LoadShareSetAsync(FWwiseLoadedShareSetPromise&& Promise, FWwiseLoadedShareSet&& InShareSetListNode);
	virtual void UnloadShareSetAsync(FWwiseResourceUnloadPromise&& Promise, FWwiseLoadedShareSet&& InShareSetListNode);

	virtual FWwiseLoadedSoundBank CreateSoundBankNode(const FWwiseLocalizedSoundBankCookedData& InSoundBankCookedData, const FWwiseLanguageCookedData* InLanguageOverride);
	virtual void LoadSoundBankAsync(FWwiseLoadedSoundBankPromise&& Promise, FWwiseLoadedSoundBank&& InSoundBankListNode);
	virtual void UnloadSoundBankAsync(FWwiseResourceUnloadPromise&& Promise, FWwiseLoadedSoundBank&& InSoundBankListNode);

protected:
	using FLoadFileCallback = TUniqueFunction<void(bool bInResult)>;
	using FUnloadFileCallback = TUniqueFunction<void()>;
	using FCompletionCallback = TUniqueFunction<void()>;
	using FCompletionPromise = TWwisePromise<void>;
	using FCompletionFuture = TWwiseFuture<void>;
	using FCompletionFutureArray = TArray<FCompletionFuture>;

	/**
	 * @brief Execution queue for adding and removing objects from the loaded Wwise Object lists.
	 *
	 * Use the execution queue to add and remove objects from the loaded Wwise Object lists. Do not use the execution
	 * queue for any other operations. As a best practice, use objects only after they are loaded and before they are
	 * unloaded. Do not use them while they are being loaded or unloaded.
	*/
	FWwiseExecutionQueue LoadedListExecutionQueue;

	/**
	 * @brief List of all the loaded Auxiliary Bus Wwise Objects.
	 *
	 * This list is maintained through the LoadAuxBusAsync and UnloadAuxBusAsync operations.
	 *
	 * @note To modify this list, you must call the operation asynchronously through ListExecutionQueue.
	*/
	FWwiseLoadedAuxBusList LoadedAuxBusList;

	/**
	 * @brief List of all the loaded Event Wwise Objects.
	 *
	 * This list is maintained through the LoadEventAsync and UnloadEventAsync operations.
	 *
	 * @note To modify this list, you must call the operation asynchronously through ListExecutionQueue.
	*/
	FWwiseLoadedEventList LoadedEventList;

	/**
	 * @brief List of all the loaded External Source Wwise Objects.
	 *
	 * This list is maintained through the LoadExternalSourceAsync and UnloadExternalSourceAsync operations.
	 *
	 * External Sources are component parts of many other Wwise objects. Events, for example, can contain
	 * their own External Sources. This list only contains the External Sources that were added independently,
	 * not those that are already included in objects such as Events.
	 *
	 * @note To modify this list, you must call the operation asynchronously through ListExecutionQueue.
	*/
	FWwiseLoadedExternalSourceList LoadedExternalSourceList;

	/**
	 * @brief List of all the loaded GroupValue (States, Switches) Wwise Objects.
	 *
	 * This list is maintained through the LoadGroupValueAsync and UnloadGroupValueAsync operations.
	 *
	 * GroupValues are component parts of many other Wwise objects. Events, for example, can contain
	 * their own GroupValues. This list only contains the GroupValues that were added independently,
	 * not those that are already included in objects such as Events.
	 *
	 * @note To modify this list, you must call the operation asynchronously through ListExecutionQueue.
	*/
	FWwiseLoadedGroupValueList LoadedGroupValueList;

	/**
	 * @brief List of all the loaded Init Bank Wwise Objects.
	 *
	 * This list is maintained through the LoadInitBankAsync and UnloadInitBankAsync operations.
	 *
	 * @note In order to modify this list (add or remove), you must call the operation asynchronously through the
	 *       ListExecutionQueue.
	 *
	 * @warning Although this is a list, it can only include a single Init Bank. Each project supports one Init Bank,
	 *          which is used for the duration of the Sound Engine's lifespan.
	*/
	FWwiseLoadedInitBankList LoadedInitBankList;

	/**
	 * @brief List of all the loaded Media Wwise Objects.
	 *
	 * This list is maintained through the LoadMediaAsync and UnloadMediaAsync operations.
	 *
	 * Media objects are component parts of many other Wwise objects. Events, for example, can contain their
	 * own Media objects. This list only contains the Media objects that were added independently, not those
	 * that are already included in objects such as Events.
	 *
	 * @note To modify this list, you must call the operation asynchronously through ListExecutionQueue.
	*/
	FWwiseLoadedMediaList LoadedMediaList;

	/**
	 * @brief List of all the loaded Share Set Wwise Objects.
	 *
	 * This list is maintained through the LoadShareSetAsync and UnloadShareSetAsync operations.
	 *
	 * @note To modify this list, you must call the operation asynchronously through ListExecutionQueue.
	*/
	FWwiseLoadedShareSetList LoadedShareSetList;

	/**
	 * @brief List of all the loaded SoundBank Wwise Objects.
	 *
	 * This list is maintained through the LoadSoundBankAsync and UnloadSoundBankAsync operations.
	 *
	 * SoundBanks are building blocks of multiple other Wwise objects. An Event is included (and thus require) inside
	 * a SoundBank. This list only contains the independently added SoundBanks, as the different objects, such as
	 * Events, are responsible for keeping track of their own required sub-objects.
	 *
	 * @note To modify this list, you must call the operation asynchronously through ListExecutionQueue.
	*/
	FWwiseLoadedSoundBankList LoadedSoundBankList;


	/**
	 * @brief Execution queue for adding, removing, and editing items from the Switch Container object hierarchy.
	 *
	 * When Switch Containers are loaded, they can be modified by levels. For example, a level can add forest footstep
	 * impact sounds to a generic Footsteps event. Use this execution queue to modify any resources that might be
	 * affected at load time.
	*/
	FWwiseExecutionQueue SwitchContainerExecutionQueue;

	/**
	 * @brief Set of all known GroupValues, each of which contains the list of the Switch Containers that require them.
	 *
	 * This set uses a leaking pattern: every known GroupValue appears but is never deleted. Realistically, games have
	 * fewer than ten thousand different Switches and States, so the effect on memory and performance is minimal.
	 *
	 * @note To modify this list, you must call the operation asynchronously through SwitchContainerExecutionQueue.
	*/
	TSet<FWwiseSwitchContainerLoadedGroupValueInfo> LoadedGroupValueInfo;

	mutable FWwiseExecutionQueue FileExecutionQueue;

	virtual void LoadAuxBusResources(FWwiseResourceLoadPromise&& Promise, FWwiseLoadedAuxBusInfo::FLoadedData& LoadedData, const FWwiseAuxBusCookedData& InCookedData);
	virtual void LoadEventResources(FWwiseResourceLoadPromise&& Promise, FWwiseLoadedEventInfo::FLoadedData& LoadedData, const FWwiseEventCookedData& InCookedData);
	virtual void LoadEventSwitchContainerResources(FWwiseResourceLoadPromise&& Promise, FWwiseLoadedEventInfo::FLoadedData& LoadedData, const FWwiseEventCookedData& InCookedData);
	virtual void LoadExternalSourceResources(FWwiseResourceLoadPromise&& Promise, FWwiseLoadedExternalSourceInfo::FLoadedData& LoadedData, const FWwiseExternalSourceCookedData& InCookedData);
	virtual void LoadGroupValueResources(FWwiseResourceLoadPromise&& Promise, FWwiseLoadedGroupValueInfo::FLoadedData& LoadedData, const FWwiseGroupValueCookedData& InCookedData);
	virtual void LoadInitBankResources(FWwiseResourceLoadPromise&& Promise, FWwiseLoadedInitBankInfo::FLoadedData& LoadedData, const FWwiseInitBankCookedData& InCookedData);
	virtual void LoadMediaResources(FWwiseResourceLoadPromise&& Promise, FWwiseLoadedMediaInfo::FLoadedData& LoadedData, const FWwiseMediaCookedData& InCookedData);
	virtual void LoadShareSetResources(FWwiseResourceLoadPromise&& Promise, FWwiseLoadedShareSetInfo::FLoadedData& LoadedData, const FWwiseShareSetCookedData& InCookedData);
	virtual void LoadSoundBankResources(FWwiseResourceLoadPromise&& Promise, FWwiseLoadedSoundBankInfo::FLoadedData& LoadedData, const FWwiseSoundBankCookedData& InCookedData);
	virtual void LoadSwitchContainerLeafResources(FWwiseResourceLoadPromise&& Promise, FWwiseSwitchContainerLeafGroupValueUsageCount::FLoadedData& LoadedData, const FWwiseSwitchContainerLeafCookedData& InCookedData);

	virtual void UnloadAuxBusResources(FWwiseResourceUnloadPromise&& Promise, FWwiseLoadedAuxBusInfo::FLoadedData& LoadedData, const FWwiseAuxBusCookedData& InCookedData);
	virtual void UnloadEventResources(FWwiseResourceUnloadPromise&& Promise, FWwiseLoadedEventInfo::FLoadedData& LoadedData, const FWwiseEventCookedData& InCookedData);
	virtual void UnloadEventSwitchContainerResources(FWwiseResourceUnloadPromise&& Promise, FWwiseLoadedEventInfo::FLoadedData& LoadedData, const FWwiseEventCookedData& InCookedData);
	virtual void UnloadExternalSourceResources(FWwiseResourceUnloadPromise&& Promise, FWwiseLoadedExternalSourceInfo::FLoadedData& LoadedData, const FWwiseExternalSourceCookedData& InCookedData);
	virtual void UnloadGroupValueResources(FWwiseResourceUnloadPromise&& Promise, FWwiseLoadedGroupValueInfo::FLoadedData& LoadedData, const FWwiseGroupValueCookedData& InCookedData);
	virtual void UnloadInitBankResources(FWwiseResourceUnloadPromise&& Promise, FWwiseLoadedInitBankInfo::FLoadedData& LoadedData, const FWwiseInitBankCookedData& InCookedData);
	virtual void UnloadMediaResources(FWwiseResourceUnloadPromise&& Promise, FWwiseLoadedMediaInfo::FLoadedData& LoadedData, const FWwiseMediaCookedData& InCookedData);
	virtual void UnloadShareSetResources(FWwiseResourceUnloadPromise&& Promise, FWwiseLoadedShareSetInfo::FLoadedData& LoadedData, const FWwiseShareSetCookedData& InCookedData);
	virtual void UnloadSoundBankResources(FWwiseResourceUnloadPromise&& Promise, FWwiseLoadedSoundBankInfo::FLoadedData& LoadedData, const FWwiseSoundBankCookedData& InCookedData);
	virtual void UnloadSwitchContainerLeafResources(FWwiseResourceUnloadPromise&& Promise, FWwiseSwitchContainerLeafGroupValueUsageCount::FLoadedData& LoadedData, const FWwiseSwitchContainerLeafCookedData& InCookedData);

	virtual FCompletionFuture AttachAuxBusNode(FWwiseLoadedAuxBusListNode* AuxBusListNode);
	virtual FCompletionFuture AttachEventNode(FWwiseLoadedEventListNode* EventListNode);
	virtual FCompletionFuture AttachExternalSourceNode(FWwiseLoadedExternalSourceListNode* ExternalSourceListNode);
	virtual FCompletionFuture AttachGroupValueNode(FWwiseLoadedGroupValueListNode* GroupValueListNode);
	virtual FCompletionFuture AttachInitBankNode(FWwiseLoadedInitBankListNode* InitBankListNode);
	virtual FCompletionFuture AttachMediaNode(FWwiseLoadedMediaListNode* MediaListNode);
	virtual FCompletionFuture AttachShareSetNode(FWwiseLoadedShareSetListNode* ShareSetListNode);
	virtual FCompletionFuture AttachSoundBankNode(FWwiseLoadedSoundBankListNode* SoundBankListNode);

	virtual FCompletionFuture DetachAuxBusNode(FWwiseLoadedAuxBusListNode* AuxBusListNode);
	virtual FCompletionFuture DetachEventNode(FWwiseLoadedEventListNode* EventListNode);
	virtual FCompletionFuture DetachExternalSourceNode(FWwiseLoadedExternalSourceListNode* ExternalSourceListNode);
	virtual FCompletionFuture DetachGroupValueNode(FWwiseLoadedGroupValueListNode* GroupValueListNode);
	virtual FCompletionFuture DetachInitBankNode(FWwiseLoadedInitBankListNode* InitBankListNode);
	virtual FCompletionFuture DetachMediaNode(FWwiseLoadedMediaListNode* MediaListNode);
	virtual FCompletionFuture DetachShareSetNode(FWwiseLoadedShareSetListNode* ShareSetListNode);
	virtual FCompletionFuture DetachSoundBankNode(FWwiseLoadedSoundBankListNode* SoundBankListNode);

	void AddLoadExternalSourceFutures(FCompletionFutureArray& FutureArray, TArray<const FWwiseExternalSourceCookedData*>& LoadedExternalSources,
	                                  const TArray<FWwiseExternalSourceCookedData>& InExternalSources, const TCHAR* InType, FName InDebugName, uint32 InShortId) const;
	void AddUnloadExternalSourceFutures(FCompletionFutureArray& FutureArray, TArray<const FWwiseExternalSourceCookedData*>& LoadedExternalSources) const;
	void AddLoadMediaFutures(FCompletionFutureArray& FutureArray, TArray<const FWwiseMediaCookedData*>& LoadedMedia,
	                         const TArray<FWwiseMediaCookedData>& InMedia, const TCHAR* InType, FName InDebugName, uint32 InShortId) const;
	void AddUnloadMediaFutures(FCompletionFutureArray& FutureArray, TArray<const FWwiseMediaCookedData*>& LoadedMedia) const;
	void AddLoadSoundBankFutures(FCompletionFutureArray& FutureArray, TArray<const FWwiseSoundBankCookedData*>& LoadedSoundBanks,
	                             const TArray<FWwiseSoundBankCookedData>& InSoundBank, const TCHAR* InType, FName InDebugName, uint32 InShortId) const;
	void AddUnloadSoundBankFutures(FCompletionFutureArray& FutureArray, TArray<const FWwiseSoundBankCookedData*>& LoadedSoundBanks) const;
	void WaitForFutures(FCompletionFutureArray&& FutureArray, FCompletionCallback&& Callback, int NextId = 0) const;

	void LoadSoundBankFile(const FWwiseSoundBankCookedData& InSoundBank, FLoadFileCallback&& InCallback) const;
	void UnloadSoundBankFile(const FWwiseSoundBankCookedData& InSoundBank, FUnloadFileCallback&& InCallback) const;
	void LoadMediaFile(const FWwiseMediaCookedData& InMedia, FLoadFileCallback&& InCallback) const;
	void UnloadMediaFile(const FWwiseMediaCookedData& InMedia, FUnloadFileCallback&& InCallback) const;
	void LoadExternalSourceFile(const FWwiseExternalSourceCookedData& InExternalSource, FLoadFileCallback&& InCallback) const;
	void UnloadExternalSourceFile(const FWwiseExternalSourceCookedData& InExternalSource, FUnloadFileCallback&& InCallback) const;

	template<typename MapValue>
	inline const FWwiseLanguageCookedData* GetLanguageMapKey(const TMap<FWwiseLanguageCookedData, MapValue>& Map, const FWwiseLanguageCookedData* InLanguageOverride, const FName& InDebugName) const;

	template<typename T>
	static inline void LogLoad(const T& Object);
	template<typename T>
	static inline void LogUnload(const T& Object);
	template<typename T>
	static inline void LogLoadResources(const T& Object);
	template<typename T>
	static inline void LogUnloadResources(const T& Object);
	template<typename T>
	static inline void LogLoadResources(const T& Object, void* Ptr);
	template<typename T>
	static inline void LogUnloadResources(const T& Object, void* Ptr);
};

template <typename T>
void FWwiseResourceLoaderImpl::LogLoad(const T& Object)
{
	UE_LOG(LogWwiseResourceLoader, Verbose, TEXT("Loading %s"), *Object.GetDebugString());
}

template <typename T>
void FWwiseResourceLoaderImpl::LogUnload(const T& Object)
{
	UE_LOG(LogWwiseResourceLoader, Verbose, TEXT("Unloading %s"), *Object.GetDebugString());
}

template <typename T>
void FWwiseResourceLoaderImpl::LogLoadResources(const T& Object)
{
	UE_LOG(LogWwiseResourceLoader, VeryVerbose, TEXT("Loading resources for %s"), *Object.GetDebugString());
}

template <typename T>
void FWwiseResourceLoaderImpl::LogUnloadResources(const T& Object)
{
	UE_LOG(LogWwiseResourceLoader, VeryVerbose, TEXT("Unloading resources for %s"), *Object.GetDebugString());
}

template <typename T>
void FWwiseResourceLoaderImpl::LogLoadResources(const T& Object, void* Ptr)
{
	UE_LOG(LogWwiseResourceLoader, VeryVerbose, TEXT("Loading resources for %s @ %p"), *Object.GetDebugString(), Ptr);
}

template <typename T>
void FWwiseResourceLoaderImpl::LogUnloadResources(const T& Object, void* Ptr)
{
	UE_LOG(LogWwiseResourceLoader, VeryVerbose, TEXT("Unloading resources for %s @ %p"), *Object.GetDebugString(), Ptr);
}

template<typename MapValue>
inline const FWwiseLanguageCookedData* FWwiseResourceLoaderImpl::GetLanguageMapKey(const TMap<FWwiseLanguageCookedData, MapValue>& Map, const FWwiseLanguageCookedData* InLanguageOverride, const FName& InDebugName) const
{
	if (InLanguageOverride)
	{
		if (Map.Find(*InLanguageOverride))
		{
			return InLanguageOverride;
		}
		UE_LOG(LogWwiseResourceLoader, Log, TEXT("GetLanguageMapKey: Could not find overridden language %s while processing asset %s. Defaulting to language %s"),
			*InLanguageOverride->GetLanguageName().ToString(), *InDebugName.ToString(), *CurrentLanguage.GetLanguageName().ToString());
	}

	if (LIKELY(Map.Contains(FWwiseLanguageCookedData::Sfx)))
	{
		return &FWwiseLanguageCookedData::Sfx;
	}

	if (Map.Find(CurrentLanguage))
	{
		return &CurrentLanguage;
	}

	UE_LOG(LogWwiseResourceLoader, Warning, TEXT("GetLanguageMapKey: Could not find language %s while processing asset %s."),
		*CurrentLanguage.GetLanguageName().ToString(), *InDebugName.ToString());
	return nullptr;
}

