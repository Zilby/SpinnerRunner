#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.UnityMouseAxisSource
struct  UnityMouseAxisSource_t2458890562  : public Il2CppObject
{
public:
	// System.String InControl.UnityMouseAxisSource::MouseAxisQuery
	String_t* ___MouseAxisQuery_0;

public:
	inline static int32_t get_offset_of_MouseAxisQuery_0() { return static_cast<int32_t>(offsetof(UnityMouseAxisSource_t2458890562, ___MouseAxisQuery_0)); }
	inline String_t* get_MouseAxisQuery_0() const { return ___MouseAxisQuery_0; }
	inline String_t** get_address_of_MouseAxisQuery_0() { return &___MouseAxisQuery_0; }
	inline void set_MouseAxisQuery_0(String_t* value)
	{
		___MouseAxisQuery_0 = value;
		Il2CppCodeGenWriteBarrier(&___MouseAxisQuery_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
