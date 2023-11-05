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

#include "UAssetDataSource.h"

#include "AkUnrealAssetDataHelper.h"
#include "AssetManagement/AkAssetDatabase.h"
#include "Wwise/WwiseProjectDatabase.h"
#include "WwiseBrowser/WwiseBrowserHelpers.h"

UAssetDataSourceInformation FUAssetDataSource::CreateUAssetInfo(const UAssetDataSourceId& Id, const FAssetData& Asset)
{
	auto AssetInfo = UAssetDataSourceInformation();
	AssetInfo.AssetName = Asset.AssetName;
	AssetInfo.Id = Id;
	AssetInfo.Type = WwiseBrowserHelpers::GetTypeFromClass(Asset.GetClass());
	AssetInfo.AssetsData.Add(Asset);
	return AssetInfo;
}

bool FUAssetDataSource::GuidExistsInProjectDatabase(const FGuid ItemId, EWwiseItemType::Type Type)
{
	auto* ProjectDatabase = FWwiseProjectDatabase::Get();
	const FWwiseDataStructureScopeLock DataStructure(*ProjectDatabase);
	const FWwiseRefPlatform Platform = DataStructure.GetPlatform(ProjectDatabase->GetCurrentPlatform());
	const auto* PlatformData = DataStructure.GetCurrentPlatformData();

	FWwiseDatabaseLocalizableGuidKey Key = FWwiseDatabaseLocalizableGuidKey(ItemId, DataStructure.GetCurrentLanguage().GetLanguageId());
	return PlatformData->Guids.Find(Key) != nullptr;
}

void FUAssetDataSource::ConstructItems()
{
	OrphanedItems.Empty();
	UsedItems.Empty();
	UAssetWithoutGuid.Empty();
	UAssetWithoutShortId.Empty();
	TArray<FAssetData> AllAssets;
	AkAssetDatabase::Get().FindAllAssets(AllAssets);

	for (auto& Asset : AllAssets)
	{
		if(WwiseBrowserHelpers::GetTypeFromClass(Asset.GetClass()) == EWwiseItemType::InitBank)
		{
			continue;
		}
		auto GuidValue = Asset.TagsAndValues.FindTag(FName("WwiseGuid"));
		auto ShortIdValue = Asset.TagsAndValues.FindTag(FName("WwiseShortId"));
		UAssetDataSourceId Id;
		Id.Name = Asset.AssetName;
		if (GuidValue.IsSet())
		{
			FString GuidAsString = GuidValue.GetValue();
			FGuid Guid = FGuid(GuidAsString);
			Id.ItemId = Guid;
		}
		if (ShortIdValue.IsSet())
		{
			Id.ShortId = FCString::Strtoui64(*ShortIdValue.GetValue(), NULL, 10);
		}
		Id.Name = Asset.AssetName;
		if(Id.ItemId.IsValid())
		{
			if (auto UAssetInfo = OrphanedItems.Find(Id.ItemId))
			{
				UAssetInfo->AssetsData.Add(Asset);
			}
			else
			{
				auto AssetInfo = CreateUAssetInfo(Id, Asset);
				OrphanedItems.Add(Id.ItemId, AssetInfo);
			}
		}
		else if(Id.ShortId > 0)
		{
			if(auto UAsset = UAssetWithoutGuid.Find(Id.ShortId))
			{
				UAsset->AssetsData.Add(Asset);
			}
			else
			{
				auto AssetInfo = CreateUAssetInfo(Id, Asset);
				UAssetWithoutGuid.Add(Id.ShortId, AssetInfo);
			}
		}
		else
		{
			if(auto UAsset = UAssetWithoutShortId.Find(Id.Name))
			{
				UAsset->AssetsData.Add(Asset);
			}
			else
			{
				auto AssetInfo = CreateUAssetInfo(Id, Asset);
				UAssetWithoutShortId.Add(Id.Name, AssetInfo);
			}
		}
	}
}

void FUAssetDataSource::GetAssetsInfo(FGuid ItemId, uint32 ShortId, FString Name, EWwiseItemType::Type& ItemType, FName& AssetName, TArray<FAssetData>& Assets)
{
	UAssetDataSourceId Id;
	Id.ItemId = ItemId;
	Id.ShortId = ShortId;
	Id.Name = FName(*Name);
	if (auto Item = UsedItems.Find(Id.ItemId))
	{
		Assets = Item->AssetsData;
		ItemType = Item->Type;
		AssetName = Item->AssetName;
	}
	else if (auto OrphanedItem = OrphanedItems.Find(Id.ItemId))
	{
		UsedItems.Add(Id.ItemId, *OrphanedItem);
		Assets = OrphanedItem->AssetsData;
		ItemType = OrphanedItem->Type;
		AssetName = OrphanedItem->AssetName;
		OrphanedItems.Remove(Id.ItemId);
	}
	if(auto Item = UAssetWithoutGuid.Find(ShortId))
	{
		auto GuidItem = UsedItems.Find(Id.ItemId);
		for(auto Asset : Item->AssetsData)
		{
			if(!AkUnrealAssetDataHelper::IsSameType(Asset, Item->Type))
			{
				continue;
			}
			Assets.Add(Asset);
			if(AssetName == FName())
			{
				AssetName = Item->AssetName;
				ItemType = Item->Type;
			}
			if(GuidItem)
			{
				GuidItem->AssetsData.Add(Asset);
			}
		}
		UAssetWithoutGuid.Remove(ShortId);
	}
	if(auto Item = UAssetWithoutShortId.Find(FName(*Name)))
	{
		auto GuidItem = UsedItems.Find(Id.ItemId);
		for(auto Asset : Item->AssetsData)
		{
			if(!AkUnrealAssetDataHelper::IsSameType(Asset, Item->Type))
			{
				continue;
			}
			Assets.Add(Asset);
			if(AssetName == FName())
			{
				AssetName = Item->AssetName;
				ItemType = Item->Type;
			}
			if(GuidItem)
			{
				GuidItem->AssetsData.Add(Asset);
			}
			UAssetWithoutShortId.Remove(FName(*Name));
		}
	}

	if(AssetName != FName())
	{
		return;
	}

	FGuid FoundKey = FGuid();
	for(auto& Item : OrphanedItems)
	{
		if(GuidExistsInProjectDatabase(Item.Key, ItemType))
		{
			continue;
		}
		
		if(FoundKey.IsValid())
		{
			break;
		}
		//States always share a state called None which has the same ShortId. Do not check for the ShortId in that case.
		bool bShouldCheckShortId = !(Item.Value.Type == EWwiseItemType::State && Item.Value.AssetName.ToString().EndsWith("None"));
		if((Item.Value.Id.ShortId == ShortId && ShortId > 0 && bShouldCheckShortId)
			|| Item.Value.AssetName == FName(*Name))
		{
			for(auto Asset : Item.Value.AssetsData)
			{
				if(!AkUnrealAssetDataHelper::IsSameType(Asset, Item.Value.Type))
				{
					continue;
				}
				Assets.Add(Asset);
				if(AssetName == FName())
				{
					AssetName = Item.Value.AssetName;
					ItemType = Item.Value.Type;
				}
				FoundKey = Item.Value.Id.ItemId;
				Item.Value.Id.ItemId = ItemId;
				Item.Value.Id.ShortId = ShortId;
				Item.Value.Id.Name = FName(*Name);
				UsedItems.Add(ItemId, Item.Value);
				break;
			}
		}
	}
	OrphanedItems.Remove(FoundKey);
}

void FUAssetDataSource::GetOrphanAssets(TMap<FGuid, UAssetDataSourceInformation>& OrphanAssets) const
{
	OrphanAssets = OrphanedItems;
	for(auto ShortIdItem : UAssetWithoutGuid)
	{
		OrphanAssets.Add(FGuid(), ShortIdItem.Value);
	}

	for(auto NameItem : UAssetWithoutShortId)
	{
		OrphanAssets.Add(FGuid(), NameItem.Value);
	}
}
