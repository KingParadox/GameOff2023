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

#include "AkAcousticTexture.h"
#include "Engine/EngineTypes.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "WwiseDefines.h"
#include "AkRtpc.h"
#include "AkSettings.generated.h"

class UAkInitBank;
class UAkAcousticTexture;

DECLARE_MULTICAST_DELEGATE(FOnSoundBanksPathChangedDelegate);


/** Custom Collision Channel enum with an option to take the value from the Wwise Integration Settings (this follows a similar approach to that of EActorUpdateOverlapsMethod in Actor.h). */
UENUM(BlueprintType)
enum EAkCollisionChannel
{
	EAKCC_WorldStatic UMETA(DisplayName = "WorldStatic"),
	EAKCC_WorldDynamic UMETA(DisplayName = "WorldDynamic"),
	EAKCC_Pawn UMETA(DisplayName = "Pawn"),
	EAKCC_Visibility UMETA(DisplayName = "Visibility", TraceQuery = "1"),
	EAKCC_Camera UMETA(DisplayName = "Camera", TraceQuery = "1"),
	EAKCC_PhysicsBody UMETA(DisplayName = "PhysicsBody"),
	EAKCC_Vehicle UMETA(DisplayName = "Vehicle"),
	EAKCC_Destructible UMETA(DisplayName = "Destructible"),
	EAKCC_UseIntegrationSettingsDefault UMETA(DisplayName = "Use Integration Settings Default"), // Use the default value specified by Wwise Integration Settings.
};

UENUM()
enum class EAkUnrealAudioRouting
{
	Custom UMETA(DisplayName = "Default", ToolTip = "Custom Unreal audio settings set up by the developer"),
	Separate UMETA(DisplayName = "Both Wwise and Unreal audio", ToolTip = "Use default Unreal audio at the same time than Wwise SoundEngine (might be incompatible with some platforms)"),
	AudioLink UMETA(DisplayName = "Route through AudioLink [UE5.1+]", ToolTip = "Use WwiseAudioLink to route all Unreal audio sources to Wwise SoundEngine Inputs (requires Unreal Engine 5.1 or higher)"),
	AudioMixer UMETA(DisplayName = "Route through AkAudioMixer", ToolTip = "Use AkAudioMixer to route Unreal submixes to a Wwise SoundEngine Input"),
	EnableWwiseOnly UMETA(DisplayName = "Enable Wwise SoundEngine only", ToolTip = "Only use Wwise SoundEngine, and disable Unreal audio"),
	EnableUnrealOnly UMETA(DisplayName = "Enable Unreal Audio only", ToolTip = "Only use Unreal audio, and disable Wwise SoundEngine")
};

USTRUCT()
struct FAkGeometrySurfacePropertiesToMap
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "AkGeometry Surface Properties Map")
	TSoftObjectPtr<class UAkAcousticTexture> AcousticTexture = nullptr;
	
	UPROPERTY(EditAnywhere, DisplayName = "Transmission Loss", Category = "AkGeometry Surface Properties Map", meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float OcclusionValue = 1.f;

	bool operator==(const FAkGeometrySurfacePropertiesToMap& Rhs) const
	{
		if (OcclusionValue != Rhs.OcclusionValue)
		{
			return false;
		}
		if (!AcousticTexture.IsValid() != !Rhs.AcousticTexture.IsValid())
		{
			return false;
		}
		if (!AcousticTexture.IsValid())
		{
			return true;
		}
		return AcousticTexture->GetFName() == Rhs.AcousticTexture->GetFName();
	}
};

struct AkGeometrySurfaceProperties
{
	UAkAcousticTexture* AcousticTexture = nullptr;
	float OcclusionValue = 1.f;
};

USTRUCT()
struct FAkAcousticTextureParams
{
	GENERATED_BODY()
	UPROPERTY()
	FVector4 AbsorptionValues = FVector4(FVector::ZeroVector, 0.0f);
	uint32 shortID = 0;

	float AbsorptionLow() const { return AbsorptionValues[0]; }
	float AbsorptionMidLow() const { return AbsorptionValues[1]; }
	float AbsorptionMidHigh() const { return AbsorptionValues[2]; }
	float AbsorptionHigh() const { return AbsorptionValues[3]; }

	TArray<float> AsTArray() const { return { AbsorptionLow(), AbsorptionMidLow(), AbsorptionMidHigh(), AbsorptionHigh() }; }
};

#define AK_MAX_AUX_PER_OBJ	4

DECLARE_EVENT(UAkSettings, ActivatedNewAssetManagement);
DECLARE_EVENT(UAkSettings, ShowRoomsPortalsChanged);
DECLARE_EVENT(UAkSettings, ShowReverbInfoChanged)
DECLARE_EVENT(UAkSettings, AuxBusAssignmentMapChanged);
DECLARE_EVENT(UAkSettings, ReverbRTPCChanged);
DECLARE_EVENT_TwoParams(UAkSettings, SoundDataFolderChanged, const FString&, const FString&);
DECLARE_EVENT_OneParam(UAkSettings, AcousticTextureParamsChanged, const FGuid&)

UCLASS(config = Game, defaultconfig)
class AKAUDIO_API UAkSettings : public UObject
{
	GENERATED_BODY()

public:
	UAkSettings(const FObjectInitializer& ObjectInitializer);
	~UAkSettings();

	/**
	Converts between EAkCollisionChannel and ECollisionChannel. Returns Wwise Integration Settings default if CollisionChannel == UseIntegrationSettingsDefault. Otherwise, casts CollisionChannel to ECollisionChannel.
	*/
	static ECollisionChannel ConvertFitToGeomCollisionChannel(EAkCollisionChannel CollisionChannel);

	/**
	Converts between EAkCollisionChannel and ECollisionChannel. Returns Wwise Integration Settings default if CollisionChannel == UseIntegrationSettingsDefault. Otherwise, casts CollisionChannel to ECollisionChannel.
	*/
	static ECollisionChannel ConvertOcclusionCollisionChannel(EAkCollisionChannel CollisionChannel);

	// The maximum number of reverb auxiliary sends that will be simultaneously applied to a sound source
	// Reverbs from a Spatial Audio room will be active even if this maximum is reached.
	UPROPERTY(Config, EditAnywhere, DisplayName = "Max Simultaneous Reverb", Category="Reverb")
	uint8 MaxSimultaneousReverbVolumes = AK_MAX_AUX_PER_OBJ;

	// Wwise Project Path
	UPROPERTY(Config, EditAnywhere, Category="Installation", meta=(FilePathFilter="wproj", AbsolutePath))	
	FFilePath WwiseProjectPath;

	// Where the Sound Data will be generated in the Content Folder
	UPROPERTY()
	FDirectoryPath WwiseSoundDataFolder;

	// The location of the folder that contains the Wwise project metadata. This should be the same as the Root Output Path in the Wwise Project Settings.
	UPROPERTY(Config, EditAnywhere, Category="Installation", meta=( AbsolutePath))
	FDirectoryPath RootOutputPath;

	UPROPERTY(Config)
	FDirectoryPath GeneratedSoundBanksFolder_DEPRECATED;
	
	//Where wwise .bnk and .wem files will be copied to when staging files during cooking
	UPROPERTY(Config, EditAnywhere, Category = "Cooking", meta=(RelativeToGameContentDir))
	FDirectoryPath WwiseStagingDirectory = {TEXT("WwiseAudio")};

	//Used to track whether SoundBanks have been transferred to Wwise after migration to 2022.1 (or later)
	UPROPERTY(Config)
	bool bSoundBanksTransfered = false;

	//Used after migration to track whether assets have been re-serialized after migration to 2022.1 (or later)
	UPROPERTY(Config)
	bool bAssetsMigrated = false;

	//Used after migration to track whether project settings have been updated after migration to 2022.1 (or later)
	UPROPERTY(Config)
	bool bProjectMigrated = false;

	UPROPERTY(Config)
	bool bAutoConnectToWAAPI_DEPRECATED = false;

	// Default value for Occlusion Collision Channel when creating a new Ak Component.
	UPROPERTY(Config, EditAnywhere, Category = "Occlusion")
	TEnumAsByte<ECollisionChannel> DefaultOcclusionCollisionChannel = ECollisionChannel::ECC_Visibility;
	
	// Default value for Collision Channel when fitting Ak Acoustic Portals and Ak Spatial Audio Volumes to surrounding geometry.
	UPROPERTY(Config, EditAnywhere, Category = "Fit To Geometry")
	TEnumAsByte<ECollisionChannel> DefaultFitToGeometryCollisionChannel = ECollisionChannel::ECC_WorldStatic;

	// PhysicalMaterial to AcousticTexture and Occlusion Value Map
	UPROPERTY(Config, EditAnywhere, EditFixedSize, Category = "AkGeometry Surface Properties Map")
	TMap<TSoftObjectPtr<UPhysicalMaterial>, FAkGeometrySurfacePropertiesToMap> AkGeometryMap;

	// Global surface absorption value to use when estimating environment decay value. Acts as a global scale factor for the decay estimations. Defaults to 0.5.
	UPROPERTY(Config, EditAnywhere, Category = "Reverb Assignment Map", meta = (ClampMin = 0.1f, ClampMax = 1.0f, UIMin = 0.1f, UIMax = 1.0f))
	float GlobalDecayAbsorption = .5f;

	// Default reverb aux bus to apply to rooms
	UPROPERTY(Config, EditAnywhere, Category = "Reverb Assignment Map")
	TSoftObjectPtr<class UAkAuxBus> DefaultReverbAuxBus = nullptr;
	
	// RoomDecay to AuxBusID Map. Used to automatically assign aux bus ids to rooms depending on their volume and surface area.
	UPROPERTY(Config, EditAnywhere, Category = "Reverb Assignment Map")
	TMap<float, TSoftObjectPtr<class UAkAuxBus>> EnvironmentDecayAuxBusMap;

	UPROPERTY(Config, EditAnywhere, Category = "Reverb Assignment Map|RTPCs")
	FString HFDampingName = "";

	UPROPERTY(Config, EditAnywhere, Category = "Reverb Assignment Map|RTPCs")
	FString DecayEstimateName = "";

	UPROPERTY(Config, EditAnywhere, Category = "Reverb Assignment Map|RTPCs")
	FString TimeToFirstReflectionName = "";

	UPROPERTY(Config, EditAnywhere, Category = "Reverb Assignment Map|RTPCs")
	TSoftObjectPtr<UAkRtpc> HFDampingRTPC = nullptr;

	UPROPERTY(Config, EditAnywhere, Category = "Reverb Assignment Map|RTPCs")
	TSoftObjectPtr<UAkRtpc> DecayEstimateRTPC = nullptr;

	UPROPERTY(Config, EditAnywhere, Category = "Reverb Assignment Map|RTPCs")
	TSoftObjectPtr<UAkRtpc> TimeToFirstReflectionRTPC = nullptr;

	// Input event associated with the Wwise Audio Input
	UPROPERTY(Config, EditAnywhere, Category = "Initialization")
	TSoftObjectPtr<class UAkAudioEvent> AudioInputEvent = nullptr;

	UPROPERTY(Config)
	TMap<FGuid, FAkAcousticTextureParams> AcousticTextureParamsMap;

	// When generating the event data, the media contained in switch containers will be split by state/switch value
	// and only loaded if the state/switch value are currently loaded
	UPROPERTY(Config, meta = (Deprecated, DeprecationMessage="Setting now exists for each AK Audio Event"))
	bool SplitSwitchContainerMedia = false;

	//Deprecated in 2022.1
	//Used in migration from previous versions
	UPROPERTY(Config)
	bool SplitMediaPerFolder= false;

	// Deprecated in 2022.1
	//Used in migration from previous versions
	UPROPERTY(Config)
	bool UseEventBasedPackaging= false;

	// Commit message that GenerateSoundBanksCommandlet will use
	UPROPERTY()
	FString CommandletCommitMessage = TEXT("Unreal Wwise Sound Data auto-generation");
	
	UPROPERTY(Config, EditAnywhere, Category = "Localization")
	TMap<FString, FString> UnrealCultureToWwiseCulture;

	// When an asset is dragged from the Wwise Browser, assets are created by default in this path.
	UPROPERTY(Config, EditAnywhere, Category = "Asset Creation")
	FString DefaultAssetCreationPath = "/Game/WwiseAudio";

	// The unique Init Bank for the Wwise project. This contains the basic information necessary for properly setting up the SoundEngine.
	UPROPERTY(Config, EditAnywhere, Category = "Initialization")
	TSoftObjectPtr<UAkInitBank> InitBank;

	// Routing Audio from Unreal Audio to Wwise Sound Engine
	UPROPERTY(Config, EditAnywhere, Category = "Initialization", DisplayName = "Unreal Audio Routing (Experimental)", meta=(ConfigRestartRequired=true))
	EAkUnrealAudioRouting AudioRouting = EAkUnrealAudioRouting::Custom;

	UPROPERTY(Config, EditAnywhere, Category = "Initialization", DisplayName = "Wwise SoundEngine Enabled (Experimental)", meta=(ConfigRestartRequired=true, EditCondition="AudioRouting == EAkUnrealAudioRouting::Custom"))
	bool bWwiseSoundEngineEnabled = true;

	UPROPERTY(Config, EditAnywhere, Category = "Initialization", DisplayName = "Wwise AudioLink Enabled (Experimental)", meta=(ConfigRestartRequired=true, EditCondition="AudioRouting == EAkUnrealAudioRouting::Custom"))
	bool bWwiseAudioLinkEnabled = false;

	UPROPERTY(Config, EditAnywhere, Category = "Initialization", DisplayName = "AkAudioMixer Enabled (Experimental)", meta=(ConfigRestartRequired=true, EditCondition="AudioRouting == EAkUnrealAudioRouting::Custom"))
	bool bAkAudioMixerEnabled = false;

	UPROPERTY(Config)
	bool AskedToUseNewAssetManagement_DEPRECATED = false;

	UPROPERTY(Config)
	bool bEnableMultiCoreRendering_DEPRECATED = false;

	UPROPERTY(Config)
	bool MigratedEnableMultiCoreRendering = false;

	UPROPERTY(Config)
	bool FixupRedirectorsDuringMigration = false;

	UPROPERTY(Config)
	FDirectoryPath WwiseWindowsInstallationPath_DEPRECATED;

	UPROPERTY(Config)
	FFilePath WwiseMacInstallationPath_DEPRECATED;

	static FString DefaultSoundDataFolder;

	virtual void PostInitProperties() override;

	bool ReverbRTPCsInUse() const;
	bool DecayRTPCInUse() const;
	bool DampingRTPCInUse() const;
	bool PredelayRTPCInUse() const;

	bool GetAssociatedAcousticTexture(const UPhysicalMaterial* physMaterial, UAkAcousticTexture*& acousticTexture) const;
	bool GetAssociatedOcclusionValue(const UPhysicalMaterial* physMaterial, float& occlusionValue) const;

#if WITH_EDITOR
	bool UpdateGeneratedSoundBanksPath();
	bool UpdateGeneratedSoundBanksPath(FString Path);
	bool GeneratedSoundBanksPathExists() const;
	bool AreSoundBanksGenerated() const;
	void RefreshAcousticTextureParams() const;
#if AK_SUPPORT_WAAPI
	/** This needs to be called after the waapi client has been initialized, which happens after AkSettings is constructed. */
	void InitWaapiSync();
	/** Set the color of a UAkAcousticTexture asset using a color from the UnrealWwiseObjectColorPalette (this is the same as the 'dark theme' in Wwise Authoring). Send a colorIndex of -1 to use the 'unset' color. */
	void SetTextureColor(FGuid textureID, int colorIndex);
#endif
	void RemoveSoundDataFromAlwaysStageAsUFS(const FString& SoundDataPath);
	void RemoveSoundDataFromAlwaysCook(const FString& SoundDataPath);
	void EnsurePluginContentIsInAlwaysCook() const;
	void InitAkGeometryMap();
	void DecayAuxBusMapChanged();
	void SortDecayKeys();
	static float MinimumDecayKeyDistance;
#endif

protected:
#if WITH_EDITOR
	virtual void PostEditChangeProperty( struct FPropertyChangedEvent& PropertyChangedEvent ) override;
	virtual void PreEditChange(FProperty* PropertyAboutToChange) override;
#endif

private:
#if WITH_EDITOR
	FString PreviousWwiseProjectPath;
	FString PreviousWwiseGeneratedSoundBankFolder;
	bool bTextureMapInitialized = false;
	TMap< UPhysicalMaterial*, UAkAcousticTexture* > TextureMapInternal;
	FAssetRegistryModule* AssetRegistryModule;

	void OnAssetAdded(const FAssetData& NewAssetData);
	void OnAssetRemoved(const struct FAssetData& AssetData);
	void FillAkGeometryMap(const TArray<FAssetData>& PhysicalMaterials, const TArray<FAssetData>& AcousticTextureAssets);
	void UpdateAkGeometryMap();
	void SanitizeProjectPath(FString& Path, const FString& PreviousPath, const FText& DialogMessage);
	void OnAudioRoutingUpdate();
	
	bool bAkGeometryMapInitialized = false;
	TMap< UPhysicalMaterial*, UAkAcousticTexture* > PhysicalMaterialAcousticTextureMap;
	TMap< UPhysicalMaterial*, float > PhysicalMaterialOcclusionMap;

	// This is used to track which key has changed and restrict its value between the two neighbouring keys
	TMap<float, TSoftObjectPtr<class UAkAuxBus>> PreviousDecayAuxBusMap;

#if AK_SUPPORT_WAAPI
	TMap<FGuid, TArray<uint64>> WaapiTextureSubscriptions;
	TMap<FGuid, uint64> WaapiTextureColorSubscriptions;
	TMap<FGuid, uint64> WaapiTextureColorOverrideSubscriptions;
	FDelegateHandle WaapiProjectLoadedHandle;
	FDelegateHandle WaapiConnectionLostHandle;
#endif
#endif

public:
	bool bRequestRefresh = false;
	const FAkAcousticTextureParams* GetTextureParams(const uint32& shortID) const;
#if WITH_EDITOR
	void ClearAkRoomDecayAuxBusMap();
	void InsertDecayKeyValue(const float& decayKey);
	void SetAcousticTextureParams(const FGuid& textureID, const FAkAcousticTextureParams& params);
	void ClearTextureParamsMap();
#if AK_SUPPORT_WAAPI
	void WaapiProjectLoaded();
	void WaapiDisconnected();
	void RegisterWaapiTextureCallback(const FGuid& textureID);
	void UnregisterWaapiTextureCallback(const FGuid& textureID);
	void ClearWaapiTextureCallbacks();
	/** Use WAAPI to query the absorption params for a given texture and store them in the texture params map. */
	void UpdateTextureParams(const FGuid& textureID);
	/** Use WAAPI to query the color for a given texture and Update the corresponding UAkAcousticTexture asset. */
	void UpdateTextureColor(const FGuid& textureID);
#endif // AK_SUPPORT_WAAPI
	mutable AcousticTextureParamsChanged OnTextureParamsChanged;

#endif // WITH_EDITOR

#if WITH_EDITORONLY_DATA
	// Visualize rooms and portals in the viewport. This requires 'realtime' to be enabled in the viewport.
	UPROPERTY(Config, EditAnywhere, Category = "Viewports")
	bool VisualizeRoomsAndPortals = false;
	// Flips the state of VisualizeRoomsAndPortals. Used for the viewport menu options. (See FAudiokineticToolsModule in AudiokineticTooslModule.cpp).
	void ToggleVisualizeRoomsAndPortals();
	// When enabled, information about AkReverbComponents will be displayed in viewports, above the component's UPrimitiveComponent parent. This requires 'realtime' to be enabled in the viewport.
	UPROPERTY(Config, EditAnywhere, Category = "Viewports")
	bool bShowReverbInfo = true;
	// Flips the state of bShowReverbInfo. Used for the viewport menu options. (See FAudiokineticToolsModule in AudiokineticTooslModule.cpp).
	void ToggleShowReverbInfo();
	ShowRoomsPortalsChanged OnShowRoomsPortalsChanged;
	ShowReverbInfoChanged OnShowReverbInfoChanged;
	AuxBusAssignmentMapChanged OnAuxBusAssignmentMapChanged;
	ReverbRTPCChanged OnReverbRTPCChanged;

	FOnSoundBanksPathChangedDelegate OnGeneratedSoundBanksPathChanged;

#endif

	/** Get the associated AuxBus for the given environment decay value.
	 * Return the AuxBus associated to the next highest decay value in the EnvironmentDecayAuxBusMap, after the given value. 
	 */
	void GetAuxBusForDecayValue(float decay, class UAkAuxBus*& auxBus);

	void GetAudioInputEvent(class UAkAudioEvent*& OutInputEvent);

};
