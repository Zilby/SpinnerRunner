#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorChanger
struct  ColorChanger_t3974555903  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Material ColorChanger::mat
	Material_t193706927 * ___mat_2;
	// System.Boolean ColorChanger::increasing
	bool ___increasing_4;
	// UnityEngine.Color ColorChanger::currentColor
	Color_t2020392075  ___currentColor_5;

public:
	inline static int32_t get_offset_of_mat_2() { return static_cast<int32_t>(offsetof(ColorChanger_t3974555903, ___mat_2)); }
	inline Material_t193706927 * get_mat_2() const { return ___mat_2; }
	inline Material_t193706927 ** get_address_of_mat_2() { return &___mat_2; }
	inline void set_mat_2(Material_t193706927 * value)
	{
		___mat_2 = value;
		Il2CppCodeGenWriteBarrier(&___mat_2, value);
	}

	inline static int32_t get_offset_of_increasing_4() { return static_cast<int32_t>(offsetof(ColorChanger_t3974555903, ___increasing_4)); }
	inline bool get_increasing_4() const { return ___increasing_4; }
	inline bool* get_address_of_increasing_4() { return &___increasing_4; }
	inline void set_increasing_4(bool value)
	{
		___increasing_4 = value;
	}

	inline static int32_t get_offset_of_currentColor_5() { return static_cast<int32_t>(offsetof(ColorChanger_t3974555903, ___currentColor_5)); }
	inline Color_t2020392075  get_currentColor_5() const { return ___currentColor_5; }
	inline Color_t2020392075 * get_address_of_currentColor_5() { return &___currentColor_5; }
	inline void set_currentColor_5(Color_t2020392075  value)
	{
		___currentColor_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
