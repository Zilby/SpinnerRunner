#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// InterfaceMovement.Button
struct Button_t3886791202;
// InControl.TwoAxisInputControl
struct TwoAxisInputControl_t203125368;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InterfaceMovement.ButtonManager
struct  ButtonManager_t2745117129  : public MonoBehaviour_t1158329972
{
public:
	// InterfaceMovement.Button InterfaceMovement.ButtonManager::focusedButton
	Button_t3886791202 * ___focusedButton_2;
	// InControl.TwoAxisInputControl InterfaceMovement.ButtonManager::filteredDirection
	TwoAxisInputControl_t203125368 * ___filteredDirection_3;

public:
	inline static int32_t get_offset_of_focusedButton_2() { return static_cast<int32_t>(offsetof(ButtonManager_t2745117129, ___focusedButton_2)); }
	inline Button_t3886791202 * get_focusedButton_2() const { return ___focusedButton_2; }
	inline Button_t3886791202 ** get_address_of_focusedButton_2() { return &___focusedButton_2; }
	inline void set_focusedButton_2(Button_t3886791202 * value)
	{
		___focusedButton_2 = value;
		Il2CppCodeGenWriteBarrier(&___focusedButton_2, value);
	}

	inline static int32_t get_offset_of_filteredDirection_3() { return static_cast<int32_t>(offsetof(ButtonManager_t2745117129, ___filteredDirection_3)); }
	inline TwoAxisInputControl_t203125368 * get_filteredDirection_3() const { return ___filteredDirection_3; }
	inline TwoAxisInputControl_t203125368 ** get_address_of_filteredDirection_3() { return &___filteredDirection_3; }
	inline void set_filteredDirection_3(TwoAxisInputControl_t203125368 * value)
	{
		___filteredDirection_3 = value;
		Il2CppCodeGenWriteBarrier(&___filteredDirection_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
