#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_InControl_SingletonMonoBehavior_2801505438.h"
#include "AssemblyU2DCSharp_InControl_TouchManager_GizmoShow1651273647.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.Camera
struct Camera_t189460977;
// System.Action
struct Action_t3226471752;
// InControl.InputDevice
struct InputDevice_t3241776736;
// InControl.TouchControl[]
struct TouchControlU5BU5D_t314565283;
// InControl.TouchPool
struct TouchPool_t2418451197;
// System.Collections.Generic.List`1<InControl.Touch>
struct List_1_t3182354641;
// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.Touch>
struct ReadOnlyCollection_1_t3999019201;
// InControl.Touch
struct Touch_t3813233509;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.TouchManager
struct  TouchManager_t3404711208  : public SingletonMonoBehavior_2_t2801505438
{
public:
	// UnityEngine.Camera InControl.TouchManager::touchCamera
	Camera_t189460977 * ___touchCamera_5;
	// InControl.TouchManager/GizmoShowOption InControl.TouchManager::controlsShowGizmos
	int32_t ___controlsShowGizmos_6;
	// System.Boolean InControl.TouchManager::enableControlsOnTouch
	bool ___enableControlsOnTouch_7;
	// System.Boolean InControl.TouchManager::_controlsEnabled
	bool ____controlsEnabled_8;
	// System.Int32 InControl.TouchManager::controlsLayer
	int32_t ___controlsLayer_9;
	// InControl.InputDevice InControl.TouchManager::device
	InputDevice_t3241776736 * ___device_11;
	// UnityEngine.Vector3 InControl.TouchManager::viewSize
	Vector3_t2243707580  ___viewSize_12;
	// UnityEngine.Vector2 InControl.TouchManager::screenSize
	Vector2_t2243707579  ___screenSize_13;
	// UnityEngine.Vector2 InControl.TouchManager::halfScreenSize
	Vector2_t2243707579  ___halfScreenSize_14;
	// System.Single InControl.TouchManager::percentToWorld
	float ___percentToWorld_15;
	// System.Single InControl.TouchManager::halfPercentToWorld
	float ___halfPercentToWorld_16;
	// System.Single InControl.TouchManager::pixelToWorld
	float ___pixelToWorld_17;
	// System.Single InControl.TouchManager::halfPixelToWorld
	float ___halfPixelToWorld_18;
	// InControl.TouchControl[] InControl.TouchManager::touchControls
	TouchControlU5BU5D_t314565283* ___touchControls_19;
	// InControl.TouchPool InControl.TouchManager::cachedTouches
	TouchPool_t2418451197 * ___cachedTouches_20;
	// System.Collections.Generic.List`1<InControl.Touch> InControl.TouchManager::activeTouches
	List_1_t3182354641 * ___activeTouches_21;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.Touch> InControl.TouchManager::readOnlyActiveTouches
	ReadOnlyCollection_1_t3999019201 * ___readOnlyActiveTouches_22;
	// UnityEngine.Vector2 InControl.TouchManager::lastMousePosition
	Vector2_t2243707579  ___lastMousePosition_23;
	// System.Boolean InControl.TouchManager::isReady
	bool ___isReady_24;
	// InControl.Touch InControl.TouchManager::mouseTouch
	Touch_t3813233509 * ___mouseTouch_25;

public:
	inline static int32_t get_offset_of_touchCamera_5() { return static_cast<int32_t>(offsetof(TouchManager_t3404711208, ___touchCamera_5)); }
	inline Camera_t189460977 * get_touchCamera_5() const { return ___touchCamera_5; }
	inline Camera_t189460977 ** get_address_of_touchCamera_5() { return &___touchCamera_5; }
	inline void set_touchCamera_5(Camera_t189460977 * value)
	{
		___touchCamera_5 = value;
		Il2CppCodeGenWriteBarrier(&___touchCamera_5, value);
	}

	inline static int32_t get_offset_of_controlsShowGizmos_6() { return static_cast<int32_t>(offsetof(TouchManager_t3404711208, ___controlsShowGizmos_6)); }
	inline int32_t get_controlsShowGizmos_6() const { return ___controlsShowGizmos_6; }
	inline int32_t* get_address_of_controlsShowGizmos_6() { return &___controlsShowGizmos_6; }
	inline void set_controlsShowGizmos_6(int32_t value)
	{
		___controlsShowGizmos_6 = value;
	}

	inline static int32_t get_offset_of_enableControlsOnTouch_7() { return static_cast<int32_t>(offsetof(TouchManager_t3404711208, ___enableControlsOnTouch_7)); }
	inline bool get_enableControlsOnTouch_7() const { return ___enableControlsOnTouch_7; }
	inline bool* get_address_of_enableControlsOnTouch_7() { return &___enableControlsOnTouch_7; }
	inline void set_enableControlsOnTouch_7(bool value)
	{
		___enableControlsOnTouch_7 = value;
	}

	inline static int32_t get_offset_of__controlsEnabled_8() { return static_cast<int32_t>(offsetof(TouchManager_t3404711208, ____controlsEnabled_8)); }
	inline bool get__controlsEnabled_8() const { return ____controlsEnabled_8; }
	inline bool* get_address_of__controlsEnabled_8() { return &____controlsEnabled_8; }
	inline void set__controlsEnabled_8(bool value)
	{
		____controlsEnabled_8 = value;
	}

	inline static int32_t get_offset_of_controlsLayer_9() { return static_cast<int32_t>(offsetof(TouchManager_t3404711208, ___controlsLayer_9)); }
	inline int32_t get_controlsLayer_9() const { return ___controlsLayer_9; }
	inline int32_t* get_address_of_controlsLayer_9() { return &___controlsLayer_9; }
	inline void set_controlsLayer_9(int32_t value)
	{
		___controlsLayer_9 = value;
	}

	inline static int32_t get_offset_of_device_11() { return static_cast<int32_t>(offsetof(TouchManager_t3404711208, ___device_11)); }
	inline InputDevice_t3241776736 * get_device_11() const { return ___device_11; }
	inline InputDevice_t3241776736 ** get_address_of_device_11() { return &___device_11; }
	inline void set_device_11(InputDevice_t3241776736 * value)
	{
		___device_11 = value;
		Il2CppCodeGenWriteBarrier(&___device_11, value);
	}

	inline static int32_t get_offset_of_viewSize_12() { return static_cast<int32_t>(offsetof(TouchManager_t3404711208, ___viewSize_12)); }
	inline Vector3_t2243707580  get_viewSize_12() const { return ___viewSize_12; }
	inline Vector3_t2243707580 * get_address_of_viewSize_12() { return &___viewSize_12; }
	inline void set_viewSize_12(Vector3_t2243707580  value)
	{
		___viewSize_12 = value;
	}

	inline static int32_t get_offset_of_screenSize_13() { return static_cast<int32_t>(offsetof(TouchManager_t3404711208, ___screenSize_13)); }
	inline Vector2_t2243707579  get_screenSize_13() const { return ___screenSize_13; }
	inline Vector2_t2243707579 * get_address_of_screenSize_13() { return &___screenSize_13; }
	inline void set_screenSize_13(Vector2_t2243707579  value)
	{
		___screenSize_13 = value;
	}

	inline static int32_t get_offset_of_halfScreenSize_14() { return static_cast<int32_t>(offsetof(TouchManager_t3404711208, ___halfScreenSize_14)); }
	inline Vector2_t2243707579  get_halfScreenSize_14() const { return ___halfScreenSize_14; }
	inline Vector2_t2243707579 * get_address_of_halfScreenSize_14() { return &___halfScreenSize_14; }
	inline void set_halfScreenSize_14(Vector2_t2243707579  value)
	{
		___halfScreenSize_14 = value;
	}

	inline static int32_t get_offset_of_percentToWorld_15() { return static_cast<int32_t>(offsetof(TouchManager_t3404711208, ___percentToWorld_15)); }
	inline float get_percentToWorld_15() const { return ___percentToWorld_15; }
	inline float* get_address_of_percentToWorld_15() { return &___percentToWorld_15; }
	inline void set_percentToWorld_15(float value)
	{
		___percentToWorld_15 = value;
	}

	inline static int32_t get_offset_of_halfPercentToWorld_16() { return static_cast<int32_t>(offsetof(TouchManager_t3404711208, ___halfPercentToWorld_16)); }
	inline float get_halfPercentToWorld_16() const { return ___halfPercentToWorld_16; }
	inline float* get_address_of_halfPercentToWorld_16() { return &___halfPercentToWorld_16; }
	inline void set_halfPercentToWorld_16(float value)
	{
		___halfPercentToWorld_16 = value;
	}

	inline static int32_t get_offset_of_pixelToWorld_17() { return static_cast<int32_t>(offsetof(TouchManager_t3404711208, ___pixelToWorld_17)); }
	inline float get_pixelToWorld_17() const { return ___pixelToWorld_17; }
	inline float* get_address_of_pixelToWorld_17() { return &___pixelToWorld_17; }
	inline void set_pixelToWorld_17(float value)
	{
		___pixelToWorld_17 = value;
	}

	inline static int32_t get_offset_of_halfPixelToWorld_18() { return static_cast<int32_t>(offsetof(TouchManager_t3404711208, ___halfPixelToWorld_18)); }
	inline float get_halfPixelToWorld_18() const { return ___halfPixelToWorld_18; }
	inline float* get_address_of_halfPixelToWorld_18() { return &___halfPixelToWorld_18; }
	inline void set_halfPixelToWorld_18(float value)
	{
		___halfPixelToWorld_18 = value;
	}

	inline static int32_t get_offset_of_touchControls_19() { return static_cast<int32_t>(offsetof(TouchManager_t3404711208, ___touchControls_19)); }
	inline TouchControlU5BU5D_t314565283* get_touchControls_19() const { return ___touchControls_19; }
	inline TouchControlU5BU5D_t314565283** get_address_of_touchControls_19() { return &___touchControls_19; }
	inline void set_touchControls_19(TouchControlU5BU5D_t314565283* value)
	{
		___touchControls_19 = value;
		Il2CppCodeGenWriteBarrier(&___touchControls_19, value);
	}

	inline static int32_t get_offset_of_cachedTouches_20() { return static_cast<int32_t>(offsetof(TouchManager_t3404711208, ___cachedTouches_20)); }
	inline TouchPool_t2418451197 * get_cachedTouches_20() const { return ___cachedTouches_20; }
	inline TouchPool_t2418451197 ** get_address_of_cachedTouches_20() { return &___cachedTouches_20; }
	inline void set_cachedTouches_20(TouchPool_t2418451197 * value)
	{
		___cachedTouches_20 = value;
		Il2CppCodeGenWriteBarrier(&___cachedTouches_20, value);
	}

	inline static int32_t get_offset_of_activeTouches_21() { return static_cast<int32_t>(offsetof(TouchManager_t3404711208, ___activeTouches_21)); }
	inline List_1_t3182354641 * get_activeTouches_21() const { return ___activeTouches_21; }
	inline List_1_t3182354641 ** get_address_of_activeTouches_21() { return &___activeTouches_21; }
	inline void set_activeTouches_21(List_1_t3182354641 * value)
	{
		___activeTouches_21 = value;
		Il2CppCodeGenWriteBarrier(&___activeTouches_21, value);
	}

	inline static int32_t get_offset_of_readOnlyActiveTouches_22() { return static_cast<int32_t>(offsetof(TouchManager_t3404711208, ___readOnlyActiveTouches_22)); }
	inline ReadOnlyCollection_1_t3999019201 * get_readOnlyActiveTouches_22() const { return ___readOnlyActiveTouches_22; }
	inline ReadOnlyCollection_1_t3999019201 ** get_address_of_readOnlyActiveTouches_22() { return &___readOnlyActiveTouches_22; }
	inline void set_readOnlyActiveTouches_22(ReadOnlyCollection_1_t3999019201 * value)
	{
		___readOnlyActiveTouches_22 = value;
		Il2CppCodeGenWriteBarrier(&___readOnlyActiveTouches_22, value);
	}

	inline static int32_t get_offset_of_lastMousePosition_23() { return static_cast<int32_t>(offsetof(TouchManager_t3404711208, ___lastMousePosition_23)); }
	inline Vector2_t2243707579  get_lastMousePosition_23() const { return ___lastMousePosition_23; }
	inline Vector2_t2243707579 * get_address_of_lastMousePosition_23() { return &___lastMousePosition_23; }
	inline void set_lastMousePosition_23(Vector2_t2243707579  value)
	{
		___lastMousePosition_23 = value;
	}

	inline static int32_t get_offset_of_isReady_24() { return static_cast<int32_t>(offsetof(TouchManager_t3404711208, ___isReady_24)); }
	inline bool get_isReady_24() const { return ___isReady_24; }
	inline bool* get_address_of_isReady_24() { return &___isReady_24; }
	inline void set_isReady_24(bool value)
	{
		___isReady_24 = value;
	}

	inline static int32_t get_offset_of_mouseTouch_25() { return static_cast<int32_t>(offsetof(TouchManager_t3404711208, ___mouseTouch_25)); }
	inline Touch_t3813233509 * get_mouseTouch_25() const { return ___mouseTouch_25; }
	inline Touch_t3813233509 ** get_address_of_mouseTouch_25() { return &___mouseTouch_25; }
	inline void set_mouseTouch_25(Touch_t3813233509 * value)
	{
		___mouseTouch_25 = value;
		Il2CppCodeGenWriteBarrier(&___mouseTouch_25, value);
	}
};

struct TouchManager_t3404711208_StaticFields
{
public:
	// System.Action InControl.TouchManager::OnSetup
	Action_t3226471752 * ___OnSetup_10;

public:
	inline static int32_t get_offset_of_OnSetup_10() { return static_cast<int32_t>(offsetof(TouchManager_t3404711208_StaticFields, ___OnSetup_10)); }
	inline Action_t3226471752 * get_OnSetup_10() const { return ___OnSetup_10; }
	inline Action_t3226471752 ** get_address_of_OnSetup_10() { return &___OnSetup_10; }
	inline void set_OnSetup_10(Action_t3226471752 * value)
	{
		___OnSetup_10 = value;
		Il2CppCodeGenWriteBarrier(&___OnSetup_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
