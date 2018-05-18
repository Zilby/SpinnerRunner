#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_InControl_InputDeviceProfile1545508297.h"

// InControl.NativeInputDeviceMatcher[]
struct NativeInputDeviceMatcherU5BU5D_t1846119502;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeInputDeviceProfile
struct  NativeInputDeviceProfile_t4183066246  : public InputDeviceProfile_t1545508297
{
public:
	// InControl.NativeInputDeviceMatcher[] InControl.NativeInputDeviceProfile::Matchers
	NativeInputDeviceMatcherU5BU5D_t1846119502* ___Matchers_14;
	// InControl.NativeInputDeviceMatcher[] InControl.NativeInputDeviceProfile::LastResortMatchers
	NativeInputDeviceMatcherU5BU5D_t1846119502* ___LastResortMatchers_15;

public:
	inline static int32_t get_offset_of_Matchers_14() { return static_cast<int32_t>(offsetof(NativeInputDeviceProfile_t4183066246, ___Matchers_14)); }
	inline NativeInputDeviceMatcherU5BU5D_t1846119502* get_Matchers_14() const { return ___Matchers_14; }
	inline NativeInputDeviceMatcherU5BU5D_t1846119502** get_address_of_Matchers_14() { return &___Matchers_14; }
	inline void set_Matchers_14(NativeInputDeviceMatcherU5BU5D_t1846119502* value)
	{
		___Matchers_14 = value;
		Il2CppCodeGenWriteBarrier(&___Matchers_14, value);
	}

	inline static int32_t get_offset_of_LastResortMatchers_15() { return static_cast<int32_t>(offsetof(NativeInputDeviceProfile_t4183066246, ___LastResortMatchers_15)); }
	inline NativeInputDeviceMatcherU5BU5D_t1846119502* get_LastResortMatchers_15() const { return ___LastResortMatchers_15; }
	inline NativeInputDeviceMatcherU5BU5D_t1846119502** get_address_of_LastResortMatchers_15() { return &___LastResortMatchers_15; }
	inline void set_LastResortMatchers_15(NativeInputDeviceMatcherU5BU5D_t1846119502* value)
	{
		___LastResortMatchers_15 = value;
		Il2CppCodeGenWriteBarrier(&___LastResortMatchers_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
