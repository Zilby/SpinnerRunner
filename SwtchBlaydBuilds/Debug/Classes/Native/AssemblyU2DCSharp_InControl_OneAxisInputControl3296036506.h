#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_InControl_InputControlState4113868748.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.OneAxisInputControl
struct  OneAxisInputControl_t3296036506  : public Il2CppObject
{
public:
	// System.UInt64 InControl.OneAxisInputControl::<UpdateTick>k__BackingField
	uint64_t ___U3CUpdateTickU3Ek__BackingField_0;
	// System.Single InControl.OneAxisInputControl::sensitivity
	float ___sensitivity_1;
	// System.Single InControl.OneAxisInputControl::lowerDeadZone
	float ___lowerDeadZone_2;
	// System.Single InControl.OneAxisInputControl::upperDeadZone
	float ___upperDeadZone_3;
	// System.Single InControl.OneAxisInputControl::stateThreshold
	float ___stateThreshold_4;
	// System.Single InControl.OneAxisInputControl::FirstRepeatDelay
	float ___FirstRepeatDelay_5;
	// System.Single InControl.OneAxisInputControl::RepeatDelay
	float ___RepeatDelay_6;
	// System.Boolean InControl.OneAxisInputControl::Raw
	bool ___Raw_7;
	// System.Boolean InControl.OneAxisInputControl::Enabled
	bool ___Enabled_8;
	// System.UInt64 InControl.OneAxisInputControl::pendingTick
	uint64_t ___pendingTick_9;
	// System.Boolean InControl.OneAxisInputControl::pendingCommit
	bool ___pendingCommit_10;
	// System.Single InControl.OneAxisInputControl::nextRepeatTime
	float ___nextRepeatTime_11;
	// System.Single InControl.OneAxisInputControl::lastPressedTime
	float ___lastPressedTime_12;
	// System.Boolean InControl.OneAxisInputControl::wasRepeated
	bool ___wasRepeated_13;
	// System.Boolean InControl.OneAxisInputControl::clearInputState
	bool ___clearInputState_14;
	// InControl.InputControlState InControl.OneAxisInputControl::lastState
	InputControlState_t4113868748  ___lastState_15;
	// InControl.InputControlState InControl.OneAxisInputControl::nextState
	InputControlState_t4113868748  ___nextState_16;
	// InControl.InputControlState InControl.OneAxisInputControl::thisState
	InputControlState_t4113868748  ___thisState_17;

public:
	inline static int32_t get_offset_of_U3CUpdateTickU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t3296036506, ___U3CUpdateTickU3Ek__BackingField_0)); }
	inline uint64_t get_U3CUpdateTickU3Ek__BackingField_0() const { return ___U3CUpdateTickU3Ek__BackingField_0; }
	inline uint64_t* get_address_of_U3CUpdateTickU3Ek__BackingField_0() { return &___U3CUpdateTickU3Ek__BackingField_0; }
	inline void set_U3CUpdateTickU3Ek__BackingField_0(uint64_t value)
	{
		___U3CUpdateTickU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_sensitivity_1() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t3296036506, ___sensitivity_1)); }
	inline float get_sensitivity_1() const { return ___sensitivity_1; }
	inline float* get_address_of_sensitivity_1() { return &___sensitivity_1; }
	inline void set_sensitivity_1(float value)
	{
		___sensitivity_1 = value;
	}

	inline static int32_t get_offset_of_lowerDeadZone_2() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t3296036506, ___lowerDeadZone_2)); }
	inline float get_lowerDeadZone_2() const { return ___lowerDeadZone_2; }
	inline float* get_address_of_lowerDeadZone_2() { return &___lowerDeadZone_2; }
	inline void set_lowerDeadZone_2(float value)
	{
		___lowerDeadZone_2 = value;
	}

	inline static int32_t get_offset_of_upperDeadZone_3() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t3296036506, ___upperDeadZone_3)); }
	inline float get_upperDeadZone_3() const { return ___upperDeadZone_3; }
	inline float* get_address_of_upperDeadZone_3() { return &___upperDeadZone_3; }
	inline void set_upperDeadZone_3(float value)
	{
		___upperDeadZone_3 = value;
	}

	inline static int32_t get_offset_of_stateThreshold_4() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t3296036506, ___stateThreshold_4)); }
	inline float get_stateThreshold_4() const { return ___stateThreshold_4; }
	inline float* get_address_of_stateThreshold_4() { return &___stateThreshold_4; }
	inline void set_stateThreshold_4(float value)
	{
		___stateThreshold_4 = value;
	}

	inline static int32_t get_offset_of_FirstRepeatDelay_5() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t3296036506, ___FirstRepeatDelay_5)); }
	inline float get_FirstRepeatDelay_5() const { return ___FirstRepeatDelay_5; }
	inline float* get_address_of_FirstRepeatDelay_5() { return &___FirstRepeatDelay_5; }
	inline void set_FirstRepeatDelay_5(float value)
	{
		___FirstRepeatDelay_5 = value;
	}

	inline static int32_t get_offset_of_RepeatDelay_6() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t3296036506, ___RepeatDelay_6)); }
	inline float get_RepeatDelay_6() const { return ___RepeatDelay_6; }
	inline float* get_address_of_RepeatDelay_6() { return &___RepeatDelay_6; }
	inline void set_RepeatDelay_6(float value)
	{
		___RepeatDelay_6 = value;
	}

	inline static int32_t get_offset_of_Raw_7() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t3296036506, ___Raw_7)); }
	inline bool get_Raw_7() const { return ___Raw_7; }
	inline bool* get_address_of_Raw_7() { return &___Raw_7; }
	inline void set_Raw_7(bool value)
	{
		___Raw_7 = value;
	}

	inline static int32_t get_offset_of_Enabled_8() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t3296036506, ___Enabled_8)); }
	inline bool get_Enabled_8() const { return ___Enabled_8; }
	inline bool* get_address_of_Enabled_8() { return &___Enabled_8; }
	inline void set_Enabled_8(bool value)
	{
		___Enabled_8 = value;
	}

	inline static int32_t get_offset_of_pendingTick_9() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t3296036506, ___pendingTick_9)); }
	inline uint64_t get_pendingTick_9() const { return ___pendingTick_9; }
	inline uint64_t* get_address_of_pendingTick_9() { return &___pendingTick_9; }
	inline void set_pendingTick_9(uint64_t value)
	{
		___pendingTick_9 = value;
	}

	inline static int32_t get_offset_of_pendingCommit_10() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t3296036506, ___pendingCommit_10)); }
	inline bool get_pendingCommit_10() const { return ___pendingCommit_10; }
	inline bool* get_address_of_pendingCommit_10() { return &___pendingCommit_10; }
	inline void set_pendingCommit_10(bool value)
	{
		___pendingCommit_10 = value;
	}

	inline static int32_t get_offset_of_nextRepeatTime_11() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t3296036506, ___nextRepeatTime_11)); }
	inline float get_nextRepeatTime_11() const { return ___nextRepeatTime_11; }
	inline float* get_address_of_nextRepeatTime_11() { return &___nextRepeatTime_11; }
	inline void set_nextRepeatTime_11(float value)
	{
		___nextRepeatTime_11 = value;
	}

	inline static int32_t get_offset_of_lastPressedTime_12() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t3296036506, ___lastPressedTime_12)); }
	inline float get_lastPressedTime_12() const { return ___lastPressedTime_12; }
	inline float* get_address_of_lastPressedTime_12() { return &___lastPressedTime_12; }
	inline void set_lastPressedTime_12(float value)
	{
		___lastPressedTime_12 = value;
	}

	inline static int32_t get_offset_of_wasRepeated_13() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t3296036506, ___wasRepeated_13)); }
	inline bool get_wasRepeated_13() const { return ___wasRepeated_13; }
	inline bool* get_address_of_wasRepeated_13() { return &___wasRepeated_13; }
	inline void set_wasRepeated_13(bool value)
	{
		___wasRepeated_13 = value;
	}

	inline static int32_t get_offset_of_clearInputState_14() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t3296036506, ___clearInputState_14)); }
	inline bool get_clearInputState_14() const { return ___clearInputState_14; }
	inline bool* get_address_of_clearInputState_14() { return &___clearInputState_14; }
	inline void set_clearInputState_14(bool value)
	{
		___clearInputState_14 = value;
	}

	inline static int32_t get_offset_of_lastState_15() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t3296036506, ___lastState_15)); }
	inline InputControlState_t4113868748  get_lastState_15() const { return ___lastState_15; }
	inline InputControlState_t4113868748 * get_address_of_lastState_15() { return &___lastState_15; }
	inline void set_lastState_15(InputControlState_t4113868748  value)
	{
		___lastState_15 = value;
	}

	inline static int32_t get_offset_of_nextState_16() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t3296036506, ___nextState_16)); }
	inline InputControlState_t4113868748  get_nextState_16() const { return ___nextState_16; }
	inline InputControlState_t4113868748 * get_address_of_nextState_16() { return &___nextState_16; }
	inline void set_nextState_16(InputControlState_t4113868748  value)
	{
		___nextState_16 = value;
	}

	inline static int32_t get_offset_of_thisState_17() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t3296036506, ___thisState_17)); }
	inline InputControlState_t4113868748  get_thisState_17() const { return ___thisState_17; }
	inline InputControlState_t4113868748 * get_address_of_thisState_17() { return &___thisState_17; }
	inline void set_thisState_17(InputControlState_t4113868748  value)
	{
		___thisState_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
