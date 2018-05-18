#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils/MyData
struct  MyData_t4125432728  : public Il2CppObject
{
public:
	// System.Int32 Utils/MyData::highScore
	int32_t ___highScore_0;
	// System.Single Utils/MyData::music
	float ___music_1;
	// System.Single Utils/MyData::soundfx
	float ___soundfx_2;

public:
	inline static int32_t get_offset_of_highScore_0() { return static_cast<int32_t>(offsetof(MyData_t4125432728, ___highScore_0)); }
	inline int32_t get_highScore_0() const { return ___highScore_0; }
	inline int32_t* get_address_of_highScore_0() { return &___highScore_0; }
	inline void set_highScore_0(int32_t value)
	{
		___highScore_0 = value;
	}

	inline static int32_t get_offset_of_music_1() { return static_cast<int32_t>(offsetof(MyData_t4125432728, ___music_1)); }
	inline float get_music_1() const { return ___music_1; }
	inline float* get_address_of_music_1() { return &___music_1; }
	inline void set_music_1(float value)
	{
		___music_1 = value;
	}

	inline static int32_t get_offset_of_soundfx_2() { return static_cast<int32_t>(offsetof(MyData_t4125432728, ___soundfx_2)); }
	inline float get_soundfx_2() const { return ___soundfx_2; }
	inline float* get_address_of_soundfx_2() { return &___soundfx_2; }
	inline void set_soundfx_2(float value)
	{
		___soundfx_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
