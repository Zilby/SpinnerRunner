#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_InControl_OneAxisInputControl3296036506.h"
#include "AssemblyU2DCSharp_InControl_InputControlType1490094649.h"

// InControl.InputControl
struct InputControl_t2986954529;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.InputControl
struct  InputControl_t2986954529  : public OneAxisInputControl_t3296036506
{
public:
	// System.String InControl.InputControl::<Handle>k__BackingField
	String_t* ___U3CHandleU3Ek__BackingField_19;
	// InControl.InputControlType InControl.InputControl::<Target>k__BackingField
	int32_t ___U3CTargetU3Ek__BackingField_20;
	// System.Boolean InControl.InputControl::Passive
	bool ___Passive_21;
	// System.Boolean InControl.InputControl::<IsButton>k__BackingField
	bool ___U3CIsButtonU3Ek__BackingField_22;
	// System.Boolean InControl.InputControl::<IsAnalog>k__BackingField
	bool ___U3CIsAnalogU3Ek__BackingField_23;
	// System.UInt64 InControl.InputControl::zeroTick
	uint64_t ___zeroTick_24;

public:
	inline static int32_t get_offset_of_U3CHandleU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(InputControl_t2986954529, ___U3CHandleU3Ek__BackingField_19)); }
	inline String_t* get_U3CHandleU3Ek__BackingField_19() const { return ___U3CHandleU3Ek__BackingField_19; }
	inline String_t** get_address_of_U3CHandleU3Ek__BackingField_19() { return &___U3CHandleU3Ek__BackingField_19; }
	inline void set_U3CHandleU3Ek__BackingField_19(String_t* value)
	{
		___U3CHandleU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CHandleU3Ek__BackingField_19, value);
	}

	inline static int32_t get_offset_of_U3CTargetU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(InputControl_t2986954529, ___U3CTargetU3Ek__BackingField_20)); }
	inline int32_t get_U3CTargetU3Ek__BackingField_20() const { return ___U3CTargetU3Ek__BackingField_20; }
	inline int32_t* get_address_of_U3CTargetU3Ek__BackingField_20() { return &___U3CTargetU3Ek__BackingField_20; }
	inline void set_U3CTargetU3Ek__BackingField_20(int32_t value)
	{
		___U3CTargetU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_Passive_21() { return static_cast<int32_t>(offsetof(InputControl_t2986954529, ___Passive_21)); }
	inline bool get_Passive_21() const { return ___Passive_21; }
	inline bool* get_address_of_Passive_21() { return &___Passive_21; }
	inline void set_Passive_21(bool value)
	{
		___Passive_21 = value;
	}

	inline static int32_t get_offset_of_U3CIsButtonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(InputControl_t2986954529, ___U3CIsButtonU3Ek__BackingField_22)); }
	inline bool get_U3CIsButtonU3Ek__BackingField_22() const { return ___U3CIsButtonU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CIsButtonU3Ek__BackingField_22() { return &___U3CIsButtonU3Ek__BackingField_22; }
	inline void set_U3CIsButtonU3Ek__BackingField_22(bool value)
	{
		___U3CIsButtonU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CIsAnalogU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(InputControl_t2986954529, ___U3CIsAnalogU3Ek__BackingField_23)); }
	inline bool get_U3CIsAnalogU3Ek__BackingField_23() const { return ___U3CIsAnalogU3Ek__BackingField_23; }
	inline bool* get_address_of_U3CIsAnalogU3Ek__BackingField_23() { return &___U3CIsAnalogU3Ek__BackingField_23; }
	inline void set_U3CIsAnalogU3Ek__BackingField_23(bool value)
	{
		___U3CIsAnalogU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_zeroTick_24() { return static_cast<int32_t>(offsetof(InputControl_t2986954529, ___zeroTick_24)); }
	inline uint64_t get_zeroTick_24() const { return ___zeroTick_24; }
	inline uint64_t* get_address_of_zeroTick_24() { return &___zeroTick_24; }
	inline void set_zeroTick_24(uint64_t value)
	{
		___zeroTick_24 = value;
	}
};

struct InputControl_t2986954529_StaticFields
{
public:
	// InControl.InputControl InControl.InputControl::Null
	InputControl_t2986954529 * ___Null_18;

public:
	inline static int32_t get_offset_of_Null_18() { return static_cast<int32_t>(offsetof(InputControl_t2986954529_StaticFields, ___Null_18)); }
	inline InputControl_t2986954529 * get_Null_18() const { return ___Null_18; }
	inline InputControl_t2986954529 ** get_address_of_Null_18() { return &___Null_18; }
	inline void set_Null_18(InputControl_t2986954529 * value)
	{
		___Null_18 = value;
		Il2CppCodeGenWriteBarrier(&___Null_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
