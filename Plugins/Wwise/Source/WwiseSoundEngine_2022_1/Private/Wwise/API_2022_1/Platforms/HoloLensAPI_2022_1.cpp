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

#include "Wwise/API_2022_1/Platforms/HoloLensAPI_2022_1.h"
#include "Wwise/Stats/SoundEngine_2022_1.h"

#if defined(PLATFORM_HOLOLENS) && PLATFORM_HOLOLENS
AkUInt32 FWwisePlatformAPI_2022_1_HoloLens::GetDeviceID(IMMDevice* in_pDevice)
{
	SCOPE_CYCLE_COUNTER(STAT_WwiseSoundEngineAPI_2022_1);
	return AK::GetDeviceID(in_pDevice);
}

AkUInt32 FWwisePlatformAPI_2022_1_HoloLens::GetDeviceIDFromName(wchar_t* in_szToken)
{
	SCOPE_CYCLE_COUNTER(STAT_WwiseSoundEngineAPI_2022_1);
	return AK::GetDeviceIDFromName(in_szToken);
}

const wchar_t* FWwisePlatformAPI_2022_1_HoloLens::GetWindowsDeviceName(AkInt32 index, AkUInt32& out_uDeviceID,
	AkAudioDeviceState uDeviceStateMask)
{
	SCOPE_CYCLE_COUNTER(STAT_WwiseSoundEngineAPI_2022_1);
	return AK::GetWindowsDeviceName(index, out_uDeviceID, uDeviceStateMask);
}

AkUInt32 FWwisePlatformAPI_2022_1_HoloLens::GetWindowsDeviceCount(AkAudioDeviceState uDeviceStateMask)
{
	SCOPE_CYCLE_COUNTER(STAT_WwiseSoundEngineAPI_2022_1);
	return AK::GetWindowsDeviceCount(uDeviceStateMask);
}

bool FWwisePlatformAPI_2022_1_HoloLens::GetWindowsDevice(AkInt32 in_index, AkUInt32& out_uDeviceID,
	IMMDevice** out_ppDevice, AkAudioDeviceState uDeviceStateMask)
{
	SCOPE_CYCLE_COUNTER(STAT_WwiseSoundEngineAPI_2022_1);
	return AK::GetWindowsDevice(in_index, out_uDeviceID, out_ppDevice, uDeviceStateMask);
}

//AkDeviceID FWwisePlatformAPI_2022_1_HoloLens::GetDeviceIDFromGamepad(Windows::Gaming::Input::Gamepad^ rGamepad)
//{
//	SCOPE_CYCLE_COUNTER(STAT_WwiseSoundEngineAPI_2022_1);
//	return AK::SoundEngine::GetWindowsDevice(rGamepad);
//}
#endif
