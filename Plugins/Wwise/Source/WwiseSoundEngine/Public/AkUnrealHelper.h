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

#include "AkInclude.h"

#include "AkUnrealHelper.generated.h"

namespace AkUnrealHelper
{
	template <typename T>
	struct TMallocDelete
	{
		DECLARE_INLINE_TYPE_LAYOUT(TMallocDelete, NonVirtual);

		TMallocDelete() = default;
		TMallocDelete(const TMallocDelete&) = default;
		TMallocDelete& operator=(const TMallocDelete&) = default;
		~TMallocDelete() = default;

		template <
			typename U,
			typename = decltype(ImplicitConv<T*>((U*)nullptr))
		>
			TMallocDelete(const TMallocDelete<U>&)
		{
		}

		template <
			typename U,
			typename = decltype(ImplicitConv<T*>((U*)nullptr))
		>
			TMallocDelete& operator=(const TMallocDelete<U>&)
		{
			return *this;
		}

		void operator()(T* Ptr) const
		{
			FMemory::Free(Ptr);
		}
	};

	WWISESOUNDENGINE_API void SetHelperFunctions(
		FString(*GetWwisePluginDirectoryImpl)(),
		FString(*GetWwiseProjectPathImpl)(),
		FString(*GetSoundBankDirectoryImpl)(),
		FString(*GetStagePathImpl)()
		);

	WWISESOUNDENGINE_API FString GetWwisePluginDirectory();
	WWISESOUNDENGINE_API FString GetWwiseProjectPath();
	WWISESOUNDENGINE_API FString GetSoundBankDirectory();

	WWISESOUNDENGINE_API void TrimPath(FString& Path);

	WWISESOUNDENGINE_API FString GetProjectDirectory();
	WWISESOUNDENGINE_API FString GetThirdPartyDirectory();
	WWISESOUNDENGINE_API FString GetContentDirectory();
	WWISESOUNDENGINE_API FString GetExternalSourceDirectory();

	WWISESOUNDENGINE_API FString GetWwiseProjectDirectoryPath();
	WWISESOUNDENGINE_API FString GetWwiseSoundBankInfoCachePath();
	WWISESOUNDENGINE_API FString FormatFolderPath(FString folderPath);
	WWISESOUNDENGINE_API bool MakePathRelativeToWwiseProject(FString& AbsolutePath);

	WWISESOUNDENGINE_API const TCHAR* GetResultString(AKRESULT InResult);

	extern WWISESOUNDENGINE_API const TCHAR* MediaFolderName;

	extern WWISESOUNDENGINE_API const FGuid InitBankID;

#if WITH_EDITOR
	WWISESOUNDENGINE_API FString GuidToBankName(const FGuid& Guid);
	WWISESOUNDENGINE_API FGuid BankNameToGuid(const FString& BankName);
#endif
}

USTRUCT(BlueprintType, Meta = (Category = "Wwise|Types", DisplayName = "AkUint64"))
struct FAkUInt64Wrapper
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "Value", DisplayName = "UInt64 Value")
	uint64 UInt64Value = 0;
};

USTRUCT(BlueprintType, Meta = (Category = "Wwise|Types", DisplayName = "AkUInt32"))
struct FAkUInt32Wrapper
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "Value", DisplayName = "UInt32 Value")
	uint32 UInt32Value = 0;
};

USTRUCT(BlueprintType, Meta = (Category = "Wwise|Types", DisplayName = "AkOutputDeviceID"))
struct FAkOutputDeviceID : public FAkUInt64Wrapper
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType, Meta = (Category = "Wwise|Types", DisplayName = "AkUniqueID"))
struct FAkUniqueID : public FAkUInt32Wrapper
{
	GENERATED_BODY()
};