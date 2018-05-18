#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_InControl_OneAxisInputControl3296036506.h"
#include "AssemblyU2DCSharp_InControl_BindingSourceType3503453366.h"

// InControl.PlayerAction
struct PlayerAction_t1085877033;
// System.Action`1<InControl.BindingSourceType>
struct Action_1_t3305252748;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayerOneAxisAction
struct  PlayerOneAxisAction_t2812169086  : public OneAxisInputControl_t3296036506
{
public:
	// InControl.PlayerAction InControl.PlayerOneAxisAction::negativeAction
	PlayerAction_t1085877033 * ___negativeAction_18;
	// InControl.PlayerAction InControl.PlayerOneAxisAction::positiveAction
	PlayerAction_t1085877033 * ___positiveAction_19;
	// InControl.BindingSourceType InControl.PlayerOneAxisAction::LastInputType
	int32_t ___LastInputType_20;
	// System.Action`1<InControl.BindingSourceType> InControl.PlayerOneAxisAction::OnLastInputTypeChanged
	Action_1_t3305252748 * ___OnLastInputTypeChanged_21;
	// System.Object InControl.PlayerOneAxisAction::<UserData>k__BackingField
	Il2CppObject * ___U3CUserDataU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_negativeAction_18() { return static_cast<int32_t>(offsetof(PlayerOneAxisAction_t2812169086, ___negativeAction_18)); }
	inline PlayerAction_t1085877033 * get_negativeAction_18() const { return ___negativeAction_18; }
	inline PlayerAction_t1085877033 ** get_address_of_negativeAction_18() { return &___negativeAction_18; }
	inline void set_negativeAction_18(PlayerAction_t1085877033 * value)
	{
		___negativeAction_18 = value;
		Il2CppCodeGenWriteBarrier(&___negativeAction_18, value);
	}

	inline static int32_t get_offset_of_positiveAction_19() { return static_cast<int32_t>(offsetof(PlayerOneAxisAction_t2812169086, ___positiveAction_19)); }
	inline PlayerAction_t1085877033 * get_positiveAction_19() const { return ___positiveAction_19; }
	inline PlayerAction_t1085877033 ** get_address_of_positiveAction_19() { return &___positiveAction_19; }
	inline void set_positiveAction_19(PlayerAction_t1085877033 * value)
	{
		___positiveAction_19 = value;
		Il2CppCodeGenWriteBarrier(&___positiveAction_19, value);
	}

	inline static int32_t get_offset_of_LastInputType_20() { return static_cast<int32_t>(offsetof(PlayerOneAxisAction_t2812169086, ___LastInputType_20)); }
	inline int32_t get_LastInputType_20() const { return ___LastInputType_20; }
	inline int32_t* get_address_of_LastInputType_20() { return &___LastInputType_20; }
	inline void set_LastInputType_20(int32_t value)
	{
		___LastInputType_20 = value;
	}

	inline static int32_t get_offset_of_OnLastInputTypeChanged_21() { return static_cast<int32_t>(offsetof(PlayerOneAxisAction_t2812169086, ___OnLastInputTypeChanged_21)); }
	inline Action_1_t3305252748 * get_OnLastInputTypeChanged_21() const { return ___OnLastInputTypeChanged_21; }
	inline Action_1_t3305252748 ** get_address_of_OnLastInputTypeChanged_21() { return &___OnLastInputTypeChanged_21; }
	inline void set_OnLastInputTypeChanged_21(Action_1_t3305252748 * value)
	{
		___OnLastInputTypeChanged_21 = value;
		Il2CppCodeGenWriteBarrier(&___OnLastInputTypeChanged_21, value);
	}

	inline static int32_t get_offset_of_U3CUserDataU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PlayerOneAxisAction_t2812169086, ___U3CUserDataU3Ek__BackingField_22)); }
	inline Il2CppObject * get_U3CUserDataU3Ek__BackingField_22() const { return ___U3CUserDataU3Ek__BackingField_22; }
	inline Il2CppObject ** get_address_of_U3CUserDataU3Ek__BackingField_22() { return &___U3CUserDataU3Ek__BackingField_22; }
	inline void set_U3CUserDataU3Ek__BackingField_22(Il2CppObject * value)
	{
		___U3CUserDataU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUserDataU3Ek__BackingField_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
