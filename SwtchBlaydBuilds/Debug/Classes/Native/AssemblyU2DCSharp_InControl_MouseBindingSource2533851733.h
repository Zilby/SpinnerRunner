#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_InControl_BindingSource1765318902.h"
#include "AssemblyU2DCSharp_InControl_Mouse230735553.h"

// System.Int32[]
struct Int32U5BU5D_t3030399641;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.MouseBindingSource
struct  MouseBindingSource_t2533851733  : public BindingSource_t1765318902
{
public:
	// InControl.Mouse InControl.MouseBindingSource::<Control>k__BackingField
	int32_t ___U3CControlU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CControlU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MouseBindingSource_t2533851733, ___U3CControlU3Ek__BackingField_1)); }
	inline int32_t get_U3CControlU3Ek__BackingField_1() const { return ___U3CControlU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CControlU3Ek__BackingField_1() { return &___U3CControlU3Ek__BackingField_1; }
	inline void set_U3CControlU3Ek__BackingField_1(int32_t value)
	{
		___U3CControlU3Ek__BackingField_1 = value;
	}
};

struct MouseBindingSource_t2533851733_StaticFields
{
public:
	// System.Single InControl.MouseBindingSource::ScaleX
	float ___ScaleX_2;
	// System.Single InControl.MouseBindingSource::ScaleY
	float ___ScaleY_3;
	// System.Single InControl.MouseBindingSource::ScaleZ
	float ___ScaleZ_4;
	// System.Single InControl.MouseBindingSource::JitterThreshold
	float ___JitterThreshold_5;
	// System.Int32[] InControl.MouseBindingSource::buttonTable
	Int32U5BU5D_t3030399641* ___buttonTable_6;

public:
	inline static int32_t get_offset_of_ScaleX_2() { return static_cast<int32_t>(offsetof(MouseBindingSource_t2533851733_StaticFields, ___ScaleX_2)); }
	inline float get_ScaleX_2() const { return ___ScaleX_2; }
	inline float* get_address_of_ScaleX_2() { return &___ScaleX_2; }
	inline void set_ScaleX_2(float value)
	{
		___ScaleX_2 = value;
	}

	inline static int32_t get_offset_of_ScaleY_3() { return static_cast<int32_t>(offsetof(MouseBindingSource_t2533851733_StaticFields, ___ScaleY_3)); }
	inline float get_ScaleY_3() const { return ___ScaleY_3; }
	inline float* get_address_of_ScaleY_3() { return &___ScaleY_3; }
	inline void set_ScaleY_3(float value)
	{
		___ScaleY_3 = value;
	}

	inline static int32_t get_offset_of_ScaleZ_4() { return static_cast<int32_t>(offsetof(MouseBindingSource_t2533851733_StaticFields, ___ScaleZ_4)); }
	inline float get_ScaleZ_4() const { return ___ScaleZ_4; }
	inline float* get_address_of_ScaleZ_4() { return &___ScaleZ_4; }
	inline void set_ScaleZ_4(float value)
	{
		___ScaleZ_4 = value;
	}

	inline static int32_t get_offset_of_JitterThreshold_5() { return static_cast<int32_t>(offsetof(MouseBindingSource_t2533851733_StaticFields, ___JitterThreshold_5)); }
	inline float get_JitterThreshold_5() const { return ___JitterThreshold_5; }
	inline float* get_address_of_JitterThreshold_5() { return &___JitterThreshold_5; }
	inline void set_JitterThreshold_5(float value)
	{
		___JitterThreshold_5 = value;
	}

	inline static int32_t get_offset_of_buttonTable_6() { return static_cast<int32_t>(offsetof(MouseBindingSource_t2533851733_StaticFields, ___buttonTable_6)); }
	inline Int32U5BU5D_t3030399641* get_buttonTable_6() const { return ___buttonTable_6; }
	inline Int32U5BU5D_t3030399641** get_address_of_buttonTable_6() { return &___buttonTable_6; }
	inline void set_buttonTable_6(Int32U5BU5D_t3030399641* value)
	{
		___buttonTable_6 = value;
		Il2CppCodeGenWriteBarrier(&___buttonTable_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
