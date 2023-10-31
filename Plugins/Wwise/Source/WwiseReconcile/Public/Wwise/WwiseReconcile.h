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

#include "Wwise/WwiseProjectDatabaseImpl.h"
#include "WaapiPicker/WwiseTreeItem.h"
#include "Wwise/Ref/WwiseAnyRef.h"

struct FScopedSlowTask;

enum class EWwiseReconcileOperationFlags
{
	None = 0,
	Create = 1 << 0,
	UpdateExisting = 1 << 1,
	RenameExisting = 1 << 2,
	Delete = 1 << 3,
	All = Create | UpdateExisting | Delete | RenameExisting
};

ENUM_CLASS_FLAGS(EWwiseReconcileOperationFlags)

struct FWwiseNewAsset
{
	const FWwiseAnyRef* WwiseAnyRef = nullptr;
	bool bAssetExists = false;
};

struct FWwiseReconcileItem
{
	EWwiseReconcileOperationFlags OperationRequired = EWwiseReconcileOperationFlags::None;
	FAssetData Asset;
	FWwiseNewAsset WwiseAnyRef;
	FGuid ItemId;
	bool operator==(const FWwiseReconcileItem& Other) const
	{
		return ItemId == Other.ItemId;
	}
};

class WWISERECONCILE_API FWwiseReconcile
{
	TMap<FGuid, FWwiseNewAsset> GuidToWwiseRef;

	TArray<FAssetData> AssetsToUpdate;
	TArray<FAssetData> AssetsToRename;
	TArray<FAssetData> AssetsToDelete;
	TArray<FWwiseNewAsset> AssetsToCreate;

	static FWwiseReconcile* Instance;

	FWwiseReconcile() {};

	bool IsAssetOutOfDate(const FAssetData& AssetData, const FWwiseAnyRef& WwiseRef);
	void GetAllWwiseRefs();
	friend class FWwiseReconcileModule;
	static void Init();
	static void Terminate();
public:
	static FWwiseReconcile* Get();
	void GetAllAssets(TArray<FWwiseReconcileItem>& ReconcileItems);
	TArray<FAssetData> CreateAssets(FScopedSlowTask& SlowTask);
	TArray<FAssetData> UpdateExistingAssets(FScopedSlowTask& SlowTask);
	void ConvertWwiseItemTypeToReconcileItem(const TArray<TSharedPtr<FWwiseTreeItem>>& InWwiseItems, TArray<FWwiseReconcileItem>& OutReconcileItems, EWwiseReconcileOperationFlags OperationFlags = EWwiseReconcileOperationFlags::All, bool bFirstLevel = true);
	bool RenameExistingAssets(FScopedSlowTask& SlowTask);
	int GetNumberOfAssets();
	int32 DeleteAssets(FScopedSlowTask& SlowTask);
	UClass* GetUClassFromWwiseRefType(EWwiseRefType RefType);
	void GetAssetChanges(TArray<FWwiseReconcileItem>& ReconcileItems, EWwiseReconcileOperationFlags OperationFlags = EWwiseReconcileOperationFlags::All);
	
	bool ReconcileAssets(EWwiseReconcileOperationFlags OperationFlags = EWwiseReconcileOperationFlags::All);
};