#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_EventSystems_StandaloneIn70867863.h"
#include "AssemblyU2DCSharp_InControl_InControlInputModule_B1279502533.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// InControl.InputDevice
struct InputDevice_t3241776736;
// InControl.TwoAxisInputControl
struct TwoAxisInputControl_t203125368;
// InControl.PlayerAction
struct PlayerAction_t1085877033;
// InControl.PlayerTwoAxisAction
struct PlayerTwoAxisAction_t3828748732;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.InControlInputModule
struct  InControlInputModule_t1750078838  : public StandaloneInputModule_t70867863
{
public:
	// InControl.InControlInputModule/Button InControl.InControlInputModule::submitButton
	int32_t ___submitButton_27;
	// InControl.InControlInputModule/Button InControl.InControlInputModule::cancelButton
	int32_t ___cancelButton_28;
	// System.Single InControl.InControlInputModule::analogMoveThreshold
	float ___analogMoveThreshold_29;
	// System.Single InControl.InControlInputModule::moveRepeatFirstDuration
	float ___moveRepeatFirstDuration_30;
	// System.Single InControl.InControlInputModule::moveRepeatDelayDuration
	float ___moveRepeatDelayDuration_31;
	// System.Boolean InControl.InControlInputModule::forceModuleActive
	bool ___forceModuleActive_32;
	// System.Boolean InControl.InControlInputModule::allowMouseInput
	bool ___allowMouseInput_33;
	// System.Boolean InControl.InControlInputModule::focusOnMouseHover
	bool ___focusOnMouseHover_34;
	// InControl.InputDevice InControl.InControlInputModule::inputDevice
	InputDevice_t3241776736 * ___inputDevice_35;
	// UnityEngine.Vector3 InControl.InControlInputModule::thisMousePosition
	Vector3_t2243707580  ___thisMousePosition_36;
	// UnityEngine.Vector3 InControl.InControlInputModule::lastMousePosition
	Vector3_t2243707580  ___lastMousePosition_37;
	// UnityEngine.Vector2 InControl.InControlInputModule::thisVectorState
	Vector2_t2243707579  ___thisVectorState_38;
	// UnityEngine.Vector2 InControl.InControlInputModule::lastVectorState
	Vector2_t2243707579  ___lastVectorState_39;
	// System.Boolean InControl.InControlInputModule::thisSubmitState
	bool ___thisSubmitState_40;
	// System.Boolean InControl.InControlInputModule::lastSubmitState
	bool ___lastSubmitState_41;
	// System.Boolean InControl.InControlInputModule::thisCancelState
	bool ___thisCancelState_42;
	// System.Boolean InControl.InControlInputModule::lastCancelState
	bool ___lastCancelState_43;
	// System.Single InControl.InControlInputModule::nextMoveRepeatTime
	float ___nextMoveRepeatTime_44;
	// System.Single InControl.InControlInputModule::lastVectorPressedTime
	float ___lastVectorPressedTime_45;
	// InControl.TwoAxisInputControl InControl.InControlInputModule::direction
	TwoAxisInputControl_t203125368 * ___direction_46;
	// InControl.PlayerAction InControl.InControlInputModule::<SubmitAction>k__BackingField
	PlayerAction_t1085877033 * ___U3CSubmitActionU3Ek__BackingField_47;
	// InControl.PlayerAction InControl.InControlInputModule::<CancelAction>k__BackingField
	PlayerAction_t1085877033 * ___U3CCancelActionU3Ek__BackingField_48;
	// InControl.PlayerTwoAxisAction InControl.InControlInputModule::<MoveAction>k__BackingField
	PlayerTwoAxisAction_t3828748732 * ___U3CMoveActionU3Ek__BackingField_49;

public:
	inline static int32_t get_offset_of_submitButton_27() { return static_cast<int32_t>(offsetof(InControlInputModule_t1750078838, ___submitButton_27)); }
	inline int32_t get_submitButton_27() const { return ___submitButton_27; }
	inline int32_t* get_address_of_submitButton_27() { return &___submitButton_27; }
	inline void set_submitButton_27(int32_t value)
	{
		___submitButton_27 = value;
	}

	inline static int32_t get_offset_of_cancelButton_28() { return static_cast<int32_t>(offsetof(InControlInputModule_t1750078838, ___cancelButton_28)); }
	inline int32_t get_cancelButton_28() const { return ___cancelButton_28; }
	inline int32_t* get_address_of_cancelButton_28() { return &___cancelButton_28; }
	inline void set_cancelButton_28(int32_t value)
	{
		___cancelButton_28 = value;
	}

	inline static int32_t get_offset_of_analogMoveThreshold_29() { return static_cast<int32_t>(offsetof(InControlInputModule_t1750078838, ___analogMoveThreshold_29)); }
	inline float get_analogMoveThreshold_29() const { return ___analogMoveThreshold_29; }
	inline float* get_address_of_analogMoveThreshold_29() { return &___analogMoveThreshold_29; }
	inline void set_analogMoveThreshold_29(float value)
	{
		___analogMoveThreshold_29 = value;
	}

	inline static int32_t get_offset_of_moveRepeatFirstDuration_30() { return static_cast<int32_t>(offsetof(InControlInputModule_t1750078838, ___moveRepeatFirstDuration_30)); }
	inline float get_moveRepeatFirstDuration_30() const { return ___moveRepeatFirstDuration_30; }
	inline float* get_address_of_moveRepeatFirstDuration_30() { return &___moveRepeatFirstDuration_30; }
	inline void set_moveRepeatFirstDuration_30(float value)
	{
		___moveRepeatFirstDuration_30 = value;
	}

	inline static int32_t get_offset_of_moveRepeatDelayDuration_31() { return static_cast<int32_t>(offsetof(InControlInputModule_t1750078838, ___moveRepeatDelayDuration_31)); }
	inline float get_moveRepeatDelayDuration_31() const { return ___moveRepeatDelayDuration_31; }
	inline float* get_address_of_moveRepeatDelayDuration_31() { return &___moveRepeatDelayDuration_31; }
	inline void set_moveRepeatDelayDuration_31(float value)
	{
		___moveRepeatDelayDuration_31 = value;
	}

	inline static int32_t get_offset_of_forceModuleActive_32() { return static_cast<int32_t>(offsetof(InControlInputModule_t1750078838, ___forceModuleActive_32)); }
	inline bool get_forceModuleActive_32() const { return ___forceModuleActive_32; }
	inline bool* get_address_of_forceModuleActive_32() { return &___forceModuleActive_32; }
	inline void set_forceModuleActive_32(bool value)
	{
		___forceModuleActive_32 = value;
	}

	inline static int32_t get_offset_of_allowMouseInput_33() { return static_cast<int32_t>(offsetof(InControlInputModule_t1750078838, ___allowMouseInput_33)); }
	inline bool get_allowMouseInput_33() const { return ___allowMouseInput_33; }
	inline bool* get_address_of_allowMouseInput_33() { return &___allowMouseInput_33; }
	inline void set_allowMouseInput_33(bool value)
	{
		___allowMouseInput_33 = value;
	}

	inline static int32_t get_offset_of_focusOnMouseHover_34() { return static_cast<int32_t>(offsetof(InControlInputModule_t1750078838, ___focusOnMouseHover_34)); }
	inline bool get_focusOnMouseHover_34() const { return ___focusOnMouseHover_34; }
	inline bool* get_address_of_focusOnMouseHover_34() { return &___focusOnMouseHover_34; }
	inline void set_focusOnMouseHover_34(bool value)
	{
		___focusOnMouseHover_34 = value;
	}

	inline static int32_t get_offset_of_inputDevice_35() { return static_cast<int32_t>(offsetof(InControlInputModule_t1750078838, ___inputDevice_35)); }
	inline InputDevice_t3241776736 * get_inputDevice_35() const { return ___inputDevice_35; }
	inline InputDevice_t3241776736 ** get_address_of_inputDevice_35() { return &___inputDevice_35; }
	inline void set_inputDevice_35(InputDevice_t3241776736 * value)
	{
		___inputDevice_35 = value;
		Il2CppCodeGenWriteBarrier(&___inputDevice_35, value);
	}

	inline static int32_t get_offset_of_thisMousePosition_36() { return static_cast<int32_t>(offsetof(InControlInputModule_t1750078838, ___thisMousePosition_36)); }
	inline Vector3_t2243707580  get_thisMousePosition_36() const { return ___thisMousePosition_36; }
	inline Vector3_t2243707580 * get_address_of_thisMousePosition_36() { return &___thisMousePosition_36; }
	inline void set_thisMousePosition_36(Vector3_t2243707580  value)
	{
		___thisMousePosition_36 = value;
	}

	inline static int32_t get_offset_of_lastMousePosition_37() { return static_cast<int32_t>(offsetof(InControlInputModule_t1750078838, ___lastMousePosition_37)); }
	inline Vector3_t2243707580  get_lastMousePosition_37() const { return ___lastMousePosition_37; }
	inline Vector3_t2243707580 * get_address_of_lastMousePosition_37() { return &___lastMousePosition_37; }
	inline void set_lastMousePosition_37(Vector3_t2243707580  value)
	{
		___lastMousePosition_37 = value;
	}

	inline static int32_t get_offset_of_thisVectorState_38() { return static_cast<int32_t>(offsetof(InControlInputModule_t1750078838, ___thisVectorState_38)); }
	inline Vector2_t2243707579  get_thisVectorState_38() const { return ___thisVectorState_38; }
	inline Vector2_t2243707579 * get_address_of_thisVectorState_38() { return &___thisVectorState_38; }
	inline void set_thisVectorState_38(Vector2_t2243707579  value)
	{
		___thisVectorState_38 = value;
	}

	inline static int32_t get_offset_of_lastVectorState_39() { return static_cast<int32_t>(offsetof(InControlInputModule_t1750078838, ___lastVectorState_39)); }
	inline Vector2_t2243707579  get_lastVectorState_39() const { return ___lastVectorState_39; }
	inline Vector2_t2243707579 * get_address_of_lastVectorState_39() { return &___lastVectorState_39; }
	inline void set_lastVectorState_39(Vector2_t2243707579  value)
	{
		___lastVectorState_39 = value;
	}

	inline static int32_t get_offset_of_thisSubmitState_40() { return static_cast<int32_t>(offsetof(InControlInputModule_t1750078838, ___thisSubmitState_40)); }
	inline bool get_thisSubmitState_40() const { return ___thisSubmitState_40; }
	inline bool* get_address_of_thisSubmitState_40() { return &___thisSubmitState_40; }
	inline void set_thisSubmitState_40(bool value)
	{
		___thisSubmitState_40 = value;
	}

	inline static int32_t get_offset_of_lastSubmitState_41() { return static_cast<int32_t>(offsetof(InControlInputModule_t1750078838, ___lastSubmitState_41)); }
	inline bool get_lastSubmitState_41() const { return ___lastSubmitState_41; }
	inline bool* get_address_of_lastSubmitState_41() { return &___lastSubmitState_41; }
	inline void set_lastSubmitState_41(bool value)
	{
		___lastSubmitState_41 = value;
	}

	inline static int32_t get_offset_of_thisCancelState_42() { return static_cast<int32_t>(offsetof(InControlInputModule_t1750078838, ___thisCancelState_42)); }
	inline bool get_thisCancelState_42() const { return ___thisCancelState_42; }
	inline bool* get_address_of_thisCancelState_42() { return &___thisCancelState_42; }
	inline void set_thisCancelState_42(bool value)
	{
		___thisCancelState_42 = value;
	}

	inline static int32_t get_offset_of_lastCancelState_43() { return static_cast<int32_t>(offsetof(InControlInputModule_t1750078838, ___lastCancelState_43)); }
	inline bool get_lastCancelState_43() const { return ___lastCancelState_43; }
	inline bool* get_address_of_lastCancelState_43() { return &___lastCancelState_43; }
	inline void set_lastCancelState_43(bool value)
	{
		___lastCancelState_43 = value;
	}

	inline static int32_t get_offset_of_nextMoveRepeatTime_44() { return static_cast<int32_t>(offsetof(InControlInputModule_t1750078838, ___nextMoveRepeatTime_44)); }
	inline float get_nextMoveRepeatTime_44() const { return ___nextMoveRepeatTime_44; }
	inline float* get_address_of_nextMoveRepeatTime_44() { return &___nextMoveRepeatTime_44; }
	inline void set_nextMoveRepeatTime_44(float value)
	{
		___nextMoveRepeatTime_44 = value;
	}

	inline static int32_t get_offset_of_lastVectorPressedTime_45() { return static_cast<int32_t>(offsetof(InControlInputModule_t1750078838, ___lastVectorPressedTime_45)); }
	inline float get_lastVectorPressedTime_45() const { return ___lastVectorPressedTime_45; }
	inline float* get_address_of_lastVectorPressedTime_45() { return &___lastVectorPressedTime_45; }
	inline void set_lastVectorPressedTime_45(float value)
	{
		___lastVectorPressedTime_45 = value;
	}

	inline static int32_t get_offset_of_direction_46() { return static_cast<int32_t>(offsetof(InControlInputModule_t1750078838, ___direction_46)); }
	inline TwoAxisInputControl_t203125368 * get_direction_46() const { return ___direction_46; }
	inline TwoAxisInputControl_t203125368 ** get_address_of_direction_46() { return &___direction_46; }
	inline void set_direction_46(TwoAxisInputControl_t203125368 * value)
	{
		___direction_46 = value;
		Il2CppCodeGenWriteBarrier(&___direction_46, value);
	}

	inline static int32_t get_offset_of_U3CSubmitActionU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(InControlInputModule_t1750078838, ___U3CSubmitActionU3Ek__BackingField_47)); }
	inline PlayerAction_t1085877033 * get_U3CSubmitActionU3Ek__BackingField_47() const { return ___U3CSubmitActionU3Ek__BackingField_47; }
	inline PlayerAction_t1085877033 ** get_address_of_U3CSubmitActionU3Ek__BackingField_47() { return &___U3CSubmitActionU3Ek__BackingField_47; }
	inline void set_U3CSubmitActionU3Ek__BackingField_47(PlayerAction_t1085877033 * value)
	{
		___U3CSubmitActionU3Ek__BackingField_47 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSubmitActionU3Ek__BackingField_47, value);
	}

	inline static int32_t get_offset_of_U3CCancelActionU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(InControlInputModule_t1750078838, ___U3CCancelActionU3Ek__BackingField_48)); }
	inline PlayerAction_t1085877033 * get_U3CCancelActionU3Ek__BackingField_48() const { return ___U3CCancelActionU3Ek__BackingField_48; }
	inline PlayerAction_t1085877033 ** get_address_of_U3CCancelActionU3Ek__BackingField_48() { return &___U3CCancelActionU3Ek__BackingField_48; }
	inline void set_U3CCancelActionU3Ek__BackingField_48(PlayerAction_t1085877033 * value)
	{
		___U3CCancelActionU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCancelActionU3Ek__BackingField_48, value);
	}

	inline static int32_t get_offset_of_U3CMoveActionU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(InControlInputModule_t1750078838, ___U3CMoveActionU3Ek__BackingField_49)); }
	inline PlayerTwoAxisAction_t3828748732 * get_U3CMoveActionU3Ek__BackingField_49() const { return ___U3CMoveActionU3Ek__BackingField_49; }
	inline PlayerTwoAxisAction_t3828748732 ** get_address_of_U3CMoveActionU3Ek__BackingField_49() { return &___U3CMoveActionU3Ek__BackingField_49; }
	inline void set_U3CMoveActionU3Ek__BackingField_49(PlayerTwoAxisAction_t3828748732 * value)
	{
		___U3CMoveActionU3Ek__BackingField_49 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMoveActionU3Ek__BackingField_49, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
