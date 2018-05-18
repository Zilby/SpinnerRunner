﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// InControl.InputDevice
struct InputDevice_t3241776736;
// UnityEngine.Renderer
struct Renderer_t257310565;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MultiplayerBasicExample.Player
struct  Player_t3445305759  : public MonoBehaviour_t1158329972
{
public:
	// InControl.InputDevice MultiplayerBasicExample.Player::<Device>k__BackingField
	InputDevice_t3241776736 * ___U3CDeviceU3Ek__BackingField_2;
	// UnityEngine.Renderer MultiplayerBasicExample.Player::cachedRenderer
	Renderer_t257310565 * ___cachedRenderer_3;

public:
	inline static int32_t get_offset_of_U3CDeviceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Player_t3445305759, ___U3CDeviceU3Ek__BackingField_2)); }
	inline InputDevice_t3241776736 * get_U3CDeviceU3Ek__BackingField_2() const { return ___U3CDeviceU3Ek__BackingField_2; }
	inline InputDevice_t3241776736 ** get_address_of_U3CDeviceU3Ek__BackingField_2() { return &___U3CDeviceU3Ek__BackingField_2; }
	inline void set_U3CDeviceU3Ek__BackingField_2(InputDevice_t3241776736 * value)
	{
		___U3CDeviceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDeviceU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_cachedRenderer_3() { return static_cast<int32_t>(offsetof(Player_t3445305759, ___cachedRenderer_3)); }
	inline Renderer_t257310565 * get_cachedRenderer_3() const { return ___cachedRenderer_3; }
	inline Renderer_t257310565 ** get_address_of_cachedRenderer_3() { return &___cachedRenderer_3; }
	inline void set_cachedRenderer_3(Renderer_t257310565 * value)
	{
		___cachedRenderer_3 = value;
		Il2CppCodeGenWriteBarrier(&___cachedRenderer_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif