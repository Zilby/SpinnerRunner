#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_InControl_TouchControl822291590.h"
#include "AssemblyU2DCSharp_InControl_TouchControlAnchor2038361615.h"
#include "AssemblyU2DCSharp_InControl_TouchUnitType2282110055.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_InControl_TouchControl_ButtonTarg576946334.h"

// InControl.TouchSprite
struct TouchSprite_t782132080;
// InControl.Touch
struct Touch_t3813233509;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.TouchButtonControl
struct  TouchButtonControl_t1084509438  : public TouchControl_t822291590
{
public:
	// InControl.TouchControlAnchor InControl.TouchButtonControl::anchor
	int32_t ___anchor_2;
	// InControl.TouchUnitType InControl.TouchButtonControl::offsetUnitType
	int32_t ___offsetUnitType_3;
	// UnityEngine.Vector2 InControl.TouchButtonControl::offset
	Vector2_t2243707579  ___offset_4;
	// System.Boolean InControl.TouchButtonControl::lockAspectRatio
	bool ___lockAspectRatio_5;
	// InControl.TouchControl/ButtonTarget InControl.TouchButtonControl::target
	int32_t ___target_6;
	// System.Boolean InControl.TouchButtonControl::allowSlideToggle
	bool ___allowSlideToggle_7;
	// System.Boolean InControl.TouchButtonControl::toggleOnLeave
	bool ___toggleOnLeave_8;
	// System.Boolean InControl.TouchButtonControl::pressureSensitive
	bool ___pressureSensitive_9;
	// InControl.TouchSprite InControl.TouchButtonControl::button
	TouchSprite_t782132080 * ___button_10;
	// System.Boolean InControl.TouchButtonControl::buttonState
	bool ___buttonState_11;
	// InControl.Touch InControl.TouchButtonControl::currentTouch
	Touch_t3813233509 * ___currentTouch_12;
	// System.Boolean InControl.TouchButtonControl::dirty
	bool ___dirty_13;

public:
	inline static int32_t get_offset_of_anchor_2() { return static_cast<int32_t>(offsetof(TouchButtonControl_t1084509438, ___anchor_2)); }
	inline int32_t get_anchor_2() const { return ___anchor_2; }
	inline int32_t* get_address_of_anchor_2() { return &___anchor_2; }
	inline void set_anchor_2(int32_t value)
	{
		___anchor_2 = value;
	}

	inline static int32_t get_offset_of_offsetUnitType_3() { return static_cast<int32_t>(offsetof(TouchButtonControl_t1084509438, ___offsetUnitType_3)); }
	inline int32_t get_offsetUnitType_3() const { return ___offsetUnitType_3; }
	inline int32_t* get_address_of_offsetUnitType_3() { return &___offsetUnitType_3; }
	inline void set_offsetUnitType_3(int32_t value)
	{
		___offsetUnitType_3 = value;
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(TouchButtonControl_t1084509438, ___offset_4)); }
	inline Vector2_t2243707579  get_offset_4() const { return ___offset_4; }
	inline Vector2_t2243707579 * get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(Vector2_t2243707579  value)
	{
		___offset_4 = value;
	}

	inline static int32_t get_offset_of_lockAspectRatio_5() { return static_cast<int32_t>(offsetof(TouchButtonControl_t1084509438, ___lockAspectRatio_5)); }
	inline bool get_lockAspectRatio_5() const { return ___lockAspectRatio_5; }
	inline bool* get_address_of_lockAspectRatio_5() { return &___lockAspectRatio_5; }
	inline void set_lockAspectRatio_5(bool value)
	{
		___lockAspectRatio_5 = value;
	}

	inline static int32_t get_offset_of_target_6() { return static_cast<int32_t>(offsetof(TouchButtonControl_t1084509438, ___target_6)); }
	inline int32_t get_target_6() const { return ___target_6; }
	inline int32_t* get_address_of_target_6() { return &___target_6; }
	inline void set_target_6(int32_t value)
	{
		___target_6 = value;
	}

	inline static int32_t get_offset_of_allowSlideToggle_7() { return static_cast<int32_t>(offsetof(TouchButtonControl_t1084509438, ___allowSlideToggle_7)); }
	inline bool get_allowSlideToggle_7() const { return ___allowSlideToggle_7; }
	inline bool* get_address_of_allowSlideToggle_7() { return &___allowSlideToggle_7; }
	inline void set_allowSlideToggle_7(bool value)
	{
		___allowSlideToggle_7 = value;
	}

	inline static int32_t get_offset_of_toggleOnLeave_8() { return static_cast<int32_t>(offsetof(TouchButtonControl_t1084509438, ___toggleOnLeave_8)); }
	inline bool get_toggleOnLeave_8() const { return ___toggleOnLeave_8; }
	inline bool* get_address_of_toggleOnLeave_8() { return &___toggleOnLeave_8; }
	inline void set_toggleOnLeave_8(bool value)
	{
		___toggleOnLeave_8 = value;
	}

	inline static int32_t get_offset_of_pressureSensitive_9() { return static_cast<int32_t>(offsetof(TouchButtonControl_t1084509438, ___pressureSensitive_9)); }
	inline bool get_pressureSensitive_9() const { return ___pressureSensitive_9; }
	inline bool* get_address_of_pressureSensitive_9() { return &___pressureSensitive_9; }
	inline void set_pressureSensitive_9(bool value)
	{
		___pressureSensitive_9 = value;
	}

	inline static int32_t get_offset_of_button_10() { return static_cast<int32_t>(offsetof(TouchButtonControl_t1084509438, ___button_10)); }
	inline TouchSprite_t782132080 * get_button_10() const { return ___button_10; }
	inline TouchSprite_t782132080 ** get_address_of_button_10() { return &___button_10; }
	inline void set_button_10(TouchSprite_t782132080 * value)
	{
		___button_10 = value;
		Il2CppCodeGenWriteBarrier(&___button_10, value);
	}

	inline static int32_t get_offset_of_buttonState_11() { return static_cast<int32_t>(offsetof(TouchButtonControl_t1084509438, ___buttonState_11)); }
	inline bool get_buttonState_11() const { return ___buttonState_11; }
	inline bool* get_address_of_buttonState_11() { return &___buttonState_11; }
	inline void set_buttonState_11(bool value)
	{
		___buttonState_11 = value;
	}

	inline static int32_t get_offset_of_currentTouch_12() { return static_cast<int32_t>(offsetof(TouchButtonControl_t1084509438, ___currentTouch_12)); }
	inline Touch_t3813233509 * get_currentTouch_12() const { return ___currentTouch_12; }
	inline Touch_t3813233509 ** get_address_of_currentTouch_12() { return &___currentTouch_12; }
	inline void set_currentTouch_12(Touch_t3813233509 * value)
	{
		___currentTouch_12 = value;
		Il2CppCodeGenWriteBarrier(&___currentTouch_12, value);
	}

	inline static int32_t get_offset_of_dirty_13() { return static_cast<int32_t>(offsetof(TouchButtonControl_t1084509438, ___dirty_13)); }
	inline bool get_dirty_13() const { return ___dirty_13; }
	inline bool* get_address_of_dirty_13() { return &___dirty_13; }
	inline void set_dirty_13(bool value)
	{
		___dirty_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
