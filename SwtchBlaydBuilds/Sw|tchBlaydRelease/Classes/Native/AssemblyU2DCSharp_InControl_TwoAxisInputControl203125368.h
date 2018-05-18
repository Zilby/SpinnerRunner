#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// InControl.TwoAxisInputControl
struct TwoAxisInputControl_t203125368;
// InControl.OneAxisInputControl
struct OneAxisInputControl_t3296036506;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.TwoAxisInputControl
struct  TwoAxisInputControl_t203125368  : public Il2CppObject
{
public:
	// System.Single InControl.TwoAxisInputControl::<X>k__BackingField
	float ___U3CXU3Ek__BackingField_1;
	// System.Single InControl.TwoAxisInputControl::<Y>k__BackingField
	float ___U3CYU3Ek__BackingField_2;
	// InControl.OneAxisInputControl InControl.TwoAxisInputControl::<Left>k__BackingField
	OneAxisInputControl_t3296036506 * ___U3CLeftU3Ek__BackingField_3;
	// InControl.OneAxisInputControl InControl.TwoAxisInputControl::<Right>k__BackingField
	OneAxisInputControl_t3296036506 * ___U3CRightU3Ek__BackingField_4;
	// InControl.OneAxisInputControl InControl.TwoAxisInputControl::<Up>k__BackingField
	OneAxisInputControl_t3296036506 * ___U3CUpU3Ek__BackingField_5;
	// InControl.OneAxisInputControl InControl.TwoAxisInputControl::<Down>k__BackingField
	OneAxisInputControl_t3296036506 * ___U3CDownU3Ek__BackingField_6;
	// System.UInt64 InControl.TwoAxisInputControl::<UpdateTick>k__BackingField
	uint64_t ___U3CUpdateTickU3Ek__BackingField_7;
	// System.Single InControl.TwoAxisInputControl::sensitivity
	float ___sensitivity_8;
	// System.Single InControl.TwoAxisInputControl::lowerDeadZone
	float ___lowerDeadZone_9;
	// System.Single InControl.TwoAxisInputControl::upperDeadZone
	float ___upperDeadZone_10;
	// System.Single InControl.TwoAxisInputControl::stateThreshold
	float ___stateThreshold_11;
	// System.Boolean InControl.TwoAxisInputControl::Raw
	bool ___Raw_12;
	// System.Boolean InControl.TwoAxisInputControl::thisState
	bool ___thisState_13;
	// System.Boolean InControl.TwoAxisInputControl::lastState
	bool ___lastState_14;
	// UnityEngine.Vector2 InControl.TwoAxisInputControl::thisValue
	Vector2_t2243707579  ___thisValue_15;
	// UnityEngine.Vector2 InControl.TwoAxisInputControl::lastValue
	Vector2_t2243707579  ___lastValue_16;
	// System.Boolean InControl.TwoAxisInputControl::clearInputState
	bool ___clearInputState_17;
	// System.Boolean InControl.TwoAxisInputControl::<HasChanged>k__BackingField
	bool ___U3CHasChangedU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_U3CXU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t203125368, ___U3CXU3Ek__BackingField_1)); }
	inline float get_U3CXU3Ek__BackingField_1() const { return ___U3CXU3Ek__BackingField_1; }
	inline float* get_address_of_U3CXU3Ek__BackingField_1() { return &___U3CXU3Ek__BackingField_1; }
	inline void set_U3CXU3Ek__BackingField_1(float value)
	{
		___U3CXU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CYU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t203125368, ___U3CYU3Ek__BackingField_2)); }
	inline float get_U3CYU3Ek__BackingField_2() const { return ___U3CYU3Ek__BackingField_2; }
	inline float* get_address_of_U3CYU3Ek__BackingField_2() { return &___U3CYU3Ek__BackingField_2; }
	inline void set_U3CYU3Ek__BackingField_2(float value)
	{
		___U3CYU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CLeftU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t203125368, ___U3CLeftU3Ek__BackingField_3)); }
	inline OneAxisInputControl_t3296036506 * get_U3CLeftU3Ek__BackingField_3() const { return ___U3CLeftU3Ek__BackingField_3; }
	inline OneAxisInputControl_t3296036506 ** get_address_of_U3CLeftU3Ek__BackingField_3() { return &___U3CLeftU3Ek__BackingField_3; }
	inline void set_U3CLeftU3Ek__BackingField_3(OneAxisInputControl_t3296036506 * value)
	{
		___U3CLeftU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CLeftU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CRightU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t203125368, ___U3CRightU3Ek__BackingField_4)); }
	inline OneAxisInputControl_t3296036506 * get_U3CRightU3Ek__BackingField_4() const { return ___U3CRightU3Ek__BackingField_4; }
	inline OneAxisInputControl_t3296036506 ** get_address_of_U3CRightU3Ek__BackingField_4() { return &___U3CRightU3Ek__BackingField_4; }
	inline void set_U3CRightU3Ek__BackingField_4(OneAxisInputControl_t3296036506 * value)
	{
		___U3CRightU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CRightU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3CUpU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t203125368, ___U3CUpU3Ek__BackingField_5)); }
	inline OneAxisInputControl_t3296036506 * get_U3CUpU3Ek__BackingField_5() const { return ___U3CUpU3Ek__BackingField_5; }
	inline OneAxisInputControl_t3296036506 ** get_address_of_U3CUpU3Ek__BackingField_5() { return &___U3CUpU3Ek__BackingField_5; }
	inline void set_U3CUpU3Ek__BackingField_5(OneAxisInputControl_t3296036506 * value)
	{
		___U3CUpU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUpU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3CDownU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t203125368, ___U3CDownU3Ek__BackingField_6)); }
	inline OneAxisInputControl_t3296036506 * get_U3CDownU3Ek__BackingField_6() const { return ___U3CDownU3Ek__BackingField_6; }
	inline OneAxisInputControl_t3296036506 ** get_address_of_U3CDownU3Ek__BackingField_6() { return &___U3CDownU3Ek__BackingField_6; }
	inline void set_U3CDownU3Ek__BackingField_6(OneAxisInputControl_t3296036506 * value)
	{
		___U3CDownU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDownU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_U3CUpdateTickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t203125368, ___U3CUpdateTickU3Ek__BackingField_7)); }
	inline uint64_t get_U3CUpdateTickU3Ek__BackingField_7() const { return ___U3CUpdateTickU3Ek__BackingField_7; }
	inline uint64_t* get_address_of_U3CUpdateTickU3Ek__BackingField_7() { return &___U3CUpdateTickU3Ek__BackingField_7; }
	inline void set_U3CUpdateTickU3Ek__BackingField_7(uint64_t value)
	{
		___U3CUpdateTickU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_sensitivity_8() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t203125368, ___sensitivity_8)); }
	inline float get_sensitivity_8() const { return ___sensitivity_8; }
	inline float* get_address_of_sensitivity_8() { return &___sensitivity_8; }
	inline void set_sensitivity_8(float value)
	{
		___sensitivity_8 = value;
	}

	inline static int32_t get_offset_of_lowerDeadZone_9() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t203125368, ___lowerDeadZone_9)); }
	inline float get_lowerDeadZone_9() const { return ___lowerDeadZone_9; }
	inline float* get_address_of_lowerDeadZone_9() { return &___lowerDeadZone_9; }
	inline void set_lowerDeadZone_9(float value)
	{
		___lowerDeadZone_9 = value;
	}

	inline static int32_t get_offset_of_upperDeadZone_10() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t203125368, ___upperDeadZone_10)); }
	inline float get_upperDeadZone_10() const { return ___upperDeadZone_10; }
	inline float* get_address_of_upperDeadZone_10() { return &___upperDeadZone_10; }
	inline void set_upperDeadZone_10(float value)
	{
		___upperDeadZone_10 = value;
	}

	inline static int32_t get_offset_of_stateThreshold_11() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t203125368, ___stateThreshold_11)); }
	inline float get_stateThreshold_11() const { return ___stateThreshold_11; }
	inline float* get_address_of_stateThreshold_11() { return &___stateThreshold_11; }
	inline void set_stateThreshold_11(float value)
	{
		___stateThreshold_11 = value;
	}

	inline static int32_t get_offset_of_Raw_12() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t203125368, ___Raw_12)); }
	inline bool get_Raw_12() const { return ___Raw_12; }
	inline bool* get_address_of_Raw_12() { return &___Raw_12; }
	inline void set_Raw_12(bool value)
	{
		___Raw_12 = value;
	}

	inline static int32_t get_offset_of_thisState_13() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t203125368, ___thisState_13)); }
	inline bool get_thisState_13() const { return ___thisState_13; }
	inline bool* get_address_of_thisState_13() { return &___thisState_13; }
	inline void set_thisState_13(bool value)
	{
		___thisState_13 = value;
	}

	inline static int32_t get_offset_of_lastState_14() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t203125368, ___lastState_14)); }
	inline bool get_lastState_14() const { return ___lastState_14; }
	inline bool* get_address_of_lastState_14() { return &___lastState_14; }
	inline void set_lastState_14(bool value)
	{
		___lastState_14 = value;
	}

	inline static int32_t get_offset_of_thisValue_15() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t203125368, ___thisValue_15)); }
	inline Vector2_t2243707579  get_thisValue_15() const { return ___thisValue_15; }
	inline Vector2_t2243707579 * get_address_of_thisValue_15() { return &___thisValue_15; }
	inline void set_thisValue_15(Vector2_t2243707579  value)
	{
		___thisValue_15 = value;
	}

	inline static int32_t get_offset_of_lastValue_16() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t203125368, ___lastValue_16)); }
	inline Vector2_t2243707579  get_lastValue_16() const { return ___lastValue_16; }
	inline Vector2_t2243707579 * get_address_of_lastValue_16() { return &___lastValue_16; }
	inline void set_lastValue_16(Vector2_t2243707579  value)
	{
		___lastValue_16 = value;
	}

	inline static int32_t get_offset_of_clearInputState_17() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t203125368, ___clearInputState_17)); }
	inline bool get_clearInputState_17() const { return ___clearInputState_17; }
	inline bool* get_address_of_clearInputState_17() { return &___clearInputState_17; }
	inline void set_clearInputState_17(bool value)
	{
		___clearInputState_17 = value;
	}

	inline static int32_t get_offset_of_U3CHasChangedU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t203125368, ___U3CHasChangedU3Ek__BackingField_18)); }
	inline bool get_U3CHasChangedU3Ek__BackingField_18() const { return ___U3CHasChangedU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CHasChangedU3Ek__BackingField_18() { return &___U3CHasChangedU3Ek__BackingField_18; }
	inline void set_U3CHasChangedU3Ek__BackingField_18(bool value)
	{
		___U3CHasChangedU3Ek__BackingField_18 = value;
	}
};

struct TwoAxisInputControl_t203125368_StaticFields
{
public:
	// InControl.TwoAxisInputControl InControl.TwoAxisInputControl::Null
	TwoAxisInputControl_t203125368 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t203125368_StaticFields, ___Null_0)); }
	inline TwoAxisInputControl_t203125368 * get_Null_0() const { return ___Null_0; }
	inline TwoAxisInputControl_t203125368 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(TwoAxisInputControl_t203125368 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier(&___Null_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
