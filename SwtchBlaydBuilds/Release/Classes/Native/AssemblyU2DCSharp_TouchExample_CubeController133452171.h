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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchExample.CubeController
struct  CubeController_t133452171  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Renderer TouchExample.CubeController::cachedRenderer
	Renderer_t257310565 * ___cachedRenderer_2;

public:
	inline static int32_t get_offset_of_cachedRenderer_2() { return static_cast<int32_t>(offsetof(CubeController_t133452171, ___cachedRenderer_2)); }
	inline Renderer_t257310565 * get_cachedRenderer_2() const { return ___cachedRenderer_2; }
	inline Renderer_t257310565 ** get_address_of_cachedRenderer_2() { return &___cachedRenderer_2; }
	inline void set_cachedRenderer_2(Renderer_t257310565 * value)
	{
		___cachedRenderer_2 = value;
		Il2CppCodeGenWriteBarrier(&___cachedRenderer_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
