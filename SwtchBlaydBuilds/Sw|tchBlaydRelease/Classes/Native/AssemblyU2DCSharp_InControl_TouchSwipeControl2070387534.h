#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_InControl_TouchControl822291590.h"
#include "AssemblyU2DCSharp_InControl_TouchUnitType2282110055.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "AssemblyU2DCSharp_InControl_TouchControl_AnalogTar3220191662.h"
#include "AssemblyU2DCSharp_InControl_TouchControl_SnapAngle4111931623.h"
#include "AssemblyU2DCSharp_InControl_TouchControl_ButtonTarg576946334.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// InControl.Touch
struct Touch_t3813233509;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.TouchSwipeControl
struct  TouchSwipeControl_t2070387534  : public TouchControl_t822291590
{
public:
	// InControl.TouchUnitType InControl.TouchSwipeControl::areaUnitType
	int32_t ___areaUnitType_2;
	// UnityEngine.Rect InControl.TouchSwipeControl::activeArea
	Rect_t3681755626  ___activeArea_3;
	// System.Single InControl.TouchSwipeControl::sensitivity
	float ___sensitivity_4;
	// System.Boolean InControl.TouchSwipeControl::oneSwipePerTouch
	bool ___oneSwipePerTouch_5;
	// InControl.TouchControl/AnalogTarget InControl.TouchSwipeControl::target
	int32_t ___target_6;
	// InControl.TouchControl/SnapAngles InControl.TouchSwipeControl::snapAngles
	int32_t ___snapAngles_7;
	// InControl.TouchControl/ButtonTarget InControl.TouchSwipeControl::upTarget
	int32_t ___upTarget_8;
	// InControl.TouchControl/ButtonTarget InControl.TouchSwipeControl::downTarget
	int32_t ___downTarget_9;
	// InControl.TouchControl/ButtonTarget InControl.TouchSwipeControl::leftTarget
	int32_t ___leftTarget_10;
	// InControl.TouchControl/ButtonTarget InControl.TouchSwipeControl::rightTarget
	int32_t ___rightTarget_11;
	// InControl.TouchControl/ButtonTarget InControl.TouchSwipeControl::tapTarget
	int32_t ___tapTarget_12;
	// UnityEngine.Rect InControl.TouchSwipeControl::worldActiveArea
	Rect_t3681755626  ___worldActiveArea_13;
	// UnityEngine.Vector3 InControl.TouchSwipeControl::currentVector
	Vector3_t2243707580  ___currentVector_14;
	// System.Boolean InControl.TouchSwipeControl::currentVectorIsSet
	bool ___currentVectorIsSet_15;
	// UnityEngine.Vector3 InControl.TouchSwipeControl::beganPosition
	Vector3_t2243707580  ___beganPosition_16;
	// UnityEngine.Vector3 InControl.TouchSwipeControl::lastPosition
	Vector3_t2243707580  ___lastPosition_17;
	// InControl.Touch InControl.TouchSwipeControl::currentTouch
	Touch_t3813233509 * ___currentTouch_18;
	// System.Boolean InControl.TouchSwipeControl::fireButtonTarget
	bool ___fireButtonTarget_19;
	// InControl.TouchControl/ButtonTarget InControl.TouchSwipeControl::nextButtonTarget
	int32_t ___nextButtonTarget_20;
	// InControl.TouchControl/ButtonTarget InControl.TouchSwipeControl::lastButtonTarget
	int32_t ___lastButtonTarget_21;
	// System.Boolean InControl.TouchSwipeControl::dirty
	bool ___dirty_22;

public:
	inline static int32_t get_offset_of_areaUnitType_2() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2070387534, ___areaUnitType_2)); }
	inline int32_t get_areaUnitType_2() const { return ___areaUnitType_2; }
	inline int32_t* get_address_of_areaUnitType_2() { return &___areaUnitType_2; }
	inline void set_areaUnitType_2(int32_t value)
	{
		___areaUnitType_2 = value;
	}

	inline static int32_t get_offset_of_activeArea_3() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2070387534, ___activeArea_3)); }
	inline Rect_t3681755626  get_activeArea_3() const { return ___activeArea_3; }
	inline Rect_t3681755626 * get_address_of_activeArea_3() { return &___activeArea_3; }
	inline void set_activeArea_3(Rect_t3681755626  value)
	{
		___activeArea_3 = value;
	}

	inline static int32_t get_offset_of_sensitivity_4() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2070387534, ___sensitivity_4)); }
	inline float get_sensitivity_4() const { return ___sensitivity_4; }
	inline float* get_address_of_sensitivity_4() { return &___sensitivity_4; }
	inline void set_sensitivity_4(float value)
	{
		___sensitivity_4 = value;
	}

	inline static int32_t get_offset_of_oneSwipePerTouch_5() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2070387534, ___oneSwipePerTouch_5)); }
	inline bool get_oneSwipePerTouch_5() const { return ___oneSwipePerTouch_5; }
	inline bool* get_address_of_oneSwipePerTouch_5() { return &___oneSwipePerTouch_5; }
	inline void set_oneSwipePerTouch_5(bool value)
	{
		___oneSwipePerTouch_5 = value;
	}

	inline static int32_t get_offset_of_target_6() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2070387534, ___target_6)); }
	inline int32_t get_target_6() const { return ___target_6; }
	inline int32_t* get_address_of_target_6() { return &___target_6; }
	inline void set_target_6(int32_t value)
	{
		___target_6 = value;
	}

	inline static int32_t get_offset_of_snapAngles_7() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2070387534, ___snapAngles_7)); }
	inline int32_t get_snapAngles_7() const { return ___snapAngles_7; }
	inline int32_t* get_address_of_snapAngles_7() { return &___snapAngles_7; }
	inline void set_snapAngles_7(int32_t value)
	{
		___snapAngles_7 = value;
	}

	inline static int32_t get_offset_of_upTarget_8() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2070387534, ___upTarget_8)); }
	inline int32_t get_upTarget_8() const { return ___upTarget_8; }
	inline int32_t* get_address_of_upTarget_8() { return &___upTarget_8; }
	inline void set_upTarget_8(int32_t value)
	{
		___upTarget_8 = value;
	}

	inline static int32_t get_offset_of_downTarget_9() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2070387534, ___downTarget_9)); }
	inline int32_t get_downTarget_9() const { return ___downTarget_9; }
	inline int32_t* get_address_of_downTarget_9() { return &___downTarget_9; }
	inline void set_downTarget_9(int32_t value)
	{
		___downTarget_9 = value;
	}

	inline static int32_t get_offset_of_leftTarget_10() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2070387534, ___leftTarget_10)); }
	inline int32_t get_leftTarget_10() const { return ___leftTarget_10; }
	inline int32_t* get_address_of_leftTarget_10() { return &___leftTarget_10; }
	inline void set_leftTarget_10(int32_t value)
	{
		___leftTarget_10 = value;
	}

	inline static int32_t get_offset_of_rightTarget_11() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2070387534, ___rightTarget_11)); }
	inline int32_t get_rightTarget_11() const { return ___rightTarget_11; }
	inline int32_t* get_address_of_rightTarget_11() { return &___rightTarget_11; }
	inline void set_rightTarget_11(int32_t value)
	{
		___rightTarget_11 = value;
	}

	inline static int32_t get_offset_of_tapTarget_12() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2070387534, ___tapTarget_12)); }
	inline int32_t get_tapTarget_12() const { return ___tapTarget_12; }
	inline int32_t* get_address_of_tapTarget_12() { return &___tapTarget_12; }
	inline void set_tapTarget_12(int32_t value)
	{
		___tapTarget_12 = value;
	}

	inline static int32_t get_offset_of_worldActiveArea_13() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2070387534, ___worldActiveArea_13)); }
	inline Rect_t3681755626  get_worldActiveArea_13() const { return ___worldActiveArea_13; }
	inline Rect_t3681755626 * get_address_of_worldActiveArea_13() { return &___worldActiveArea_13; }
	inline void set_worldActiveArea_13(Rect_t3681755626  value)
	{
		___worldActiveArea_13 = value;
	}

	inline static int32_t get_offset_of_currentVector_14() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2070387534, ___currentVector_14)); }
	inline Vector3_t2243707580  get_currentVector_14() const { return ___currentVector_14; }
	inline Vector3_t2243707580 * get_address_of_currentVector_14() { return &___currentVector_14; }
	inline void set_currentVector_14(Vector3_t2243707580  value)
	{
		___currentVector_14 = value;
	}

	inline static int32_t get_offset_of_currentVectorIsSet_15() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2070387534, ___currentVectorIsSet_15)); }
	inline bool get_currentVectorIsSet_15() const { return ___currentVectorIsSet_15; }
	inline bool* get_address_of_currentVectorIsSet_15() { return &___currentVectorIsSet_15; }
	inline void set_currentVectorIsSet_15(bool value)
	{
		___currentVectorIsSet_15 = value;
	}

	inline static int32_t get_offset_of_beganPosition_16() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2070387534, ___beganPosition_16)); }
	inline Vector3_t2243707580  get_beganPosition_16() const { return ___beganPosition_16; }
	inline Vector3_t2243707580 * get_address_of_beganPosition_16() { return &___beganPosition_16; }
	inline void set_beganPosition_16(Vector3_t2243707580  value)
	{
		___beganPosition_16 = value;
	}

	inline static int32_t get_offset_of_lastPosition_17() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2070387534, ___lastPosition_17)); }
	inline Vector3_t2243707580  get_lastPosition_17() const { return ___lastPosition_17; }
	inline Vector3_t2243707580 * get_address_of_lastPosition_17() { return &___lastPosition_17; }
	inline void set_lastPosition_17(Vector3_t2243707580  value)
	{
		___lastPosition_17 = value;
	}

	inline static int32_t get_offset_of_currentTouch_18() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2070387534, ___currentTouch_18)); }
	inline Touch_t3813233509 * get_currentTouch_18() const { return ___currentTouch_18; }
	inline Touch_t3813233509 ** get_address_of_currentTouch_18() { return &___currentTouch_18; }
	inline void set_currentTouch_18(Touch_t3813233509 * value)
	{
		___currentTouch_18 = value;
		Il2CppCodeGenWriteBarrier(&___currentTouch_18, value);
	}

	inline static int32_t get_offset_of_fireButtonTarget_19() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2070387534, ___fireButtonTarget_19)); }
	inline bool get_fireButtonTarget_19() const { return ___fireButtonTarget_19; }
	inline bool* get_address_of_fireButtonTarget_19() { return &___fireButtonTarget_19; }
	inline void set_fireButtonTarget_19(bool value)
	{
		___fireButtonTarget_19 = value;
	}

	inline static int32_t get_offset_of_nextButtonTarget_20() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2070387534, ___nextButtonTarget_20)); }
	inline int32_t get_nextButtonTarget_20() const { return ___nextButtonTarget_20; }
	inline int32_t* get_address_of_nextButtonTarget_20() { return &___nextButtonTarget_20; }
	inline void set_nextButtonTarget_20(int32_t value)
	{
		___nextButtonTarget_20 = value;
	}

	inline static int32_t get_offset_of_lastButtonTarget_21() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2070387534, ___lastButtonTarget_21)); }
	inline int32_t get_lastButtonTarget_21() const { return ___lastButtonTarget_21; }
	inline int32_t* get_address_of_lastButtonTarget_21() { return &___lastButtonTarget_21; }
	inline void set_lastButtonTarget_21(int32_t value)
	{
		___lastButtonTarget_21 = value;
	}

	inline static int32_t get_offset_of_dirty_22() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2070387534, ___dirty_22)); }
	inline bool get_dirty_22() const { return ___dirty_22; }
	inline bool* get_address_of_dirty_22() { return &___dirty_22; }
	inline void set_dirty_22(bool value)
	{
		___dirty_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
