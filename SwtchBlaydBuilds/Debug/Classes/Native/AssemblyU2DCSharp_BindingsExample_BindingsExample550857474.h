#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Renderer
struct Renderer_t257310565;
// BindingsExample.PlayerActions
struct PlayerActions_t2877029590;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BindingsExample.BindingsExample
struct  BindingsExample_t550857474  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Renderer BindingsExample.BindingsExample::cachedRenderer
	Renderer_t257310565 * ___cachedRenderer_2;
	// BindingsExample.PlayerActions BindingsExample.BindingsExample::playerActions
	PlayerActions_t2877029590 * ___playerActions_3;
	// System.String BindingsExample.BindingsExample::saveData
	String_t* ___saveData_4;

public:
	inline static int32_t get_offset_of_cachedRenderer_2() { return static_cast<int32_t>(offsetof(BindingsExample_t550857474, ___cachedRenderer_2)); }
	inline Renderer_t257310565 * get_cachedRenderer_2() const { return ___cachedRenderer_2; }
	inline Renderer_t257310565 ** get_address_of_cachedRenderer_2() { return &___cachedRenderer_2; }
	inline void set_cachedRenderer_2(Renderer_t257310565 * value)
	{
		___cachedRenderer_2 = value;
		Il2CppCodeGenWriteBarrier(&___cachedRenderer_2, value);
	}

	inline static int32_t get_offset_of_playerActions_3() { return static_cast<int32_t>(offsetof(BindingsExample_t550857474, ___playerActions_3)); }
	inline PlayerActions_t2877029590 * get_playerActions_3() const { return ___playerActions_3; }
	inline PlayerActions_t2877029590 ** get_address_of_playerActions_3() { return &___playerActions_3; }
	inline void set_playerActions_3(PlayerActions_t2877029590 * value)
	{
		___playerActions_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerActions_3, value);
	}

	inline static int32_t get_offset_of_saveData_4() { return static_cast<int32_t>(offsetof(BindingsExample_t550857474, ___saveData_4)); }
	inline String_t* get_saveData_4() const { return ___saveData_4; }
	inline String_t** get_address_of_saveData_4() { return &___saveData_4; }
	inline void set_saveData_4(String_t* value)
	{
		___saveData_4 = value;
		Il2CppCodeGenWriteBarrier(&___saveData_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
