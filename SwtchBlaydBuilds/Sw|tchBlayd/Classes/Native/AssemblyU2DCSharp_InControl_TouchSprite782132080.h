﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharp_InControl_TouchSpriteShape2350087275.h"
#include "AssemblyU2DCSharp_InControl_TouchUnitType2282110055.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.TouchSprite
struct  TouchSprite_t782132080  : public Il2CppObject
{
public:
	// UnityEngine.Sprite InControl.TouchSprite::idleSprite
	Sprite_t309593783 * ___idleSprite_0;
	// UnityEngine.Sprite InControl.TouchSprite::busySprite
	Sprite_t309593783 * ___busySprite_1;
	// UnityEngine.Color InControl.TouchSprite::idleColor
	Color_t2020392075  ___idleColor_2;
	// UnityEngine.Color InControl.TouchSprite::busyColor
	Color_t2020392075  ___busyColor_3;
	// InControl.TouchSpriteShape InControl.TouchSprite::shape
	int32_t ___shape_4;
	// InControl.TouchUnitType InControl.TouchSprite::sizeUnitType
	int32_t ___sizeUnitType_5;
	// UnityEngine.Vector2 InControl.TouchSprite::size
	Vector2_t2243707579  ___size_6;
	// System.Boolean InControl.TouchSprite::lockAspectRatio
	bool ___lockAspectRatio_7;
	// UnityEngine.Vector2 InControl.TouchSprite::worldSize
	Vector2_t2243707579  ___worldSize_8;
	// UnityEngine.Transform InControl.TouchSprite::spriteParentTransform
	Transform_t3275118058 * ___spriteParentTransform_9;
	// UnityEngine.GameObject InControl.TouchSprite::spriteGameObject
	GameObject_t1756533147 * ___spriteGameObject_10;
	// UnityEngine.SpriteRenderer InControl.TouchSprite::spriteRenderer
	SpriteRenderer_t1209076198 * ___spriteRenderer_11;
	// System.Boolean InControl.TouchSprite::state
	bool ___state_12;
	// System.Boolean InControl.TouchSprite::<Dirty>k__BackingField
	bool ___U3CDirtyU3Ek__BackingField_13;
	// System.Boolean InControl.TouchSprite::<Ready>k__BackingField
	bool ___U3CReadyU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_idleSprite_0() { return static_cast<int32_t>(offsetof(TouchSprite_t782132080, ___idleSprite_0)); }
	inline Sprite_t309593783 * get_idleSprite_0() const { return ___idleSprite_0; }
	inline Sprite_t309593783 ** get_address_of_idleSprite_0() { return &___idleSprite_0; }
	inline void set_idleSprite_0(Sprite_t309593783 * value)
	{
		___idleSprite_0 = value;
		Il2CppCodeGenWriteBarrier(&___idleSprite_0, value);
	}

	inline static int32_t get_offset_of_busySprite_1() { return static_cast<int32_t>(offsetof(TouchSprite_t782132080, ___busySprite_1)); }
	inline Sprite_t309593783 * get_busySprite_1() const { return ___busySprite_1; }
	inline Sprite_t309593783 ** get_address_of_busySprite_1() { return &___busySprite_1; }
	inline void set_busySprite_1(Sprite_t309593783 * value)
	{
		___busySprite_1 = value;
		Il2CppCodeGenWriteBarrier(&___busySprite_1, value);
	}

	inline static int32_t get_offset_of_idleColor_2() { return static_cast<int32_t>(offsetof(TouchSprite_t782132080, ___idleColor_2)); }
	inline Color_t2020392075  get_idleColor_2() const { return ___idleColor_2; }
	inline Color_t2020392075 * get_address_of_idleColor_2() { return &___idleColor_2; }
	inline void set_idleColor_2(Color_t2020392075  value)
	{
		___idleColor_2 = value;
	}

	inline static int32_t get_offset_of_busyColor_3() { return static_cast<int32_t>(offsetof(TouchSprite_t782132080, ___busyColor_3)); }
	inline Color_t2020392075  get_busyColor_3() const { return ___busyColor_3; }
	inline Color_t2020392075 * get_address_of_busyColor_3() { return &___busyColor_3; }
	inline void set_busyColor_3(Color_t2020392075  value)
	{
		___busyColor_3 = value;
	}

	inline static int32_t get_offset_of_shape_4() { return static_cast<int32_t>(offsetof(TouchSprite_t782132080, ___shape_4)); }
	inline int32_t get_shape_4() const { return ___shape_4; }
	inline int32_t* get_address_of_shape_4() { return &___shape_4; }
	inline void set_shape_4(int32_t value)
	{
		___shape_4 = value;
	}

	inline static int32_t get_offset_of_sizeUnitType_5() { return static_cast<int32_t>(offsetof(TouchSprite_t782132080, ___sizeUnitType_5)); }
	inline int32_t get_sizeUnitType_5() const { return ___sizeUnitType_5; }
	inline int32_t* get_address_of_sizeUnitType_5() { return &___sizeUnitType_5; }
	inline void set_sizeUnitType_5(int32_t value)
	{
		___sizeUnitType_5 = value;
	}

	inline static int32_t get_offset_of_size_6() { return static_cast<int32_t>(offsetof(TouchSprite_t782132080, ___size_6)); }
	inline Vector2_t2243707579  get_size_6() const { return ___size_6; }
	inline Vector2_t2243707579 * get_address_of_size_6() { return &___size_6; }
	inline void set_size_6(Vector2_t2243707579  value)
	{
		___size_6 = value;
	}

	inline static int32_t get_offset_of_lockAspectRatio_7() { return static_cast<int32_t>(offsetof(TouchSprite_t782132080, ___lockAspectRatio_7)); }
	inline bool get_lockAspectRatio_7() const { return ___lockAspectRatio_7; }
	inline bool* get_address_of_lockAspectRatio_7() { return &___lockAspectRatio_7; }
	inline void set_lockAspectRatio_7(bool value)
	{
		___lockAspectRatio_7 = value;
	}

	inline static int32_t get_offset_of_worldSize_8() { return static_cast<int32_t>(offsetof(TouchSprite_t782132080, ___worldSize_8)); }
	inline Vector2_t2243707579  get_worldSize_8() const { return ___worldSize_8; }
	inline Vector2_t2243707579 * get_address_of_worldSize_8() { return &___worldSize_8; }
	inline void set_worldSize_8(Vector2_t2243707579  value)
	{
		___worldSize_8 = value;
	}

	inline static int32_t get_offset_of_spriteParentTransform_9() { return static_cast<int32_t>(offsetof(TouchSprite_t782132080, ___spriteParentTransform_9)); }
	inline Transform_t3275118058 * get_spriteParentTransform_9() const { return ___spriteParentTransform_9; }
	inline Transform_t3275118058 ** get_address_of_spriteParentTransform_9() { return &___spriteParentTransform_9; }
	inline void set_spriteParentTransform_9(Transform_t3275118058 * value)
	{
		___spriteParentTransform_9 = value;
		Il2CppCodeGenWriteBarrier(&___spriteParentTransform_9, value);
	}

	inline static int32_t get_offset_of_spriteGameObject_10() { return static_cast<int32_t>(offsetof(TouchSprite_t782132080, ___spriteGameObject_10)); }
	inline GameObject_t1756533147 * get_spriteGameObject_10() const { return ___spriteGameObject_10; }
	inline GameObject_t1756533147 ** get_address_of_spriteGameObject_10() { return &___spriteGameObject_10; }
	inline void set_spriteGameObject_10(GameObject_t1756533147 * value)
	{
		___spriteGameObject_10 = value;
		Il2CppCodeGenWriteBarrier(&___spriteGameObject_10, value);
	}

	inline static int32_t get_offset_of_spriteRenderer_11() { return static_cast<int32_t>(offsetof(TouchSprite_t782132080, ___spriteRenderer_11)); }
	inline SpriteRenderer_t1209076198 * get_spriteRenderer_11() const { return ___spriteRenderer_11; }
	inline SpriteRenderer_t1209076198 ** get_address_of_spriteRenderer_11() { return &___spriteRenderer_11; }
	inline void set_spriteRenderer_11(SpriteRenderer_t1209076198 * value)
	{
		___spriteRenderer_11 = value;
		Il2CppCodeGenWriteBarrier(&___spriteRenderer_11, value);
	}

	inline static int32_t get_offset_of_state_12() { return static_cast<int32_t>(offsetof(TouchSprite_t782132080, ___state_12)); }
	inline bool get_state_12() const { return ___state_12; }
	inline bool* get_address_of_state_12() { return &___state_12; }
	inline void set_state_12(bool value)
	{
		___state_12 = value;
	}

	inline static int32_t get_offset_of_U3CDirtyU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(TouchSprite_t782132080, ___U3CDirtyU3Ek__BackingField_13)); }
	inline bool get_U3CDirtyU3Ek__BackingField_13() const { return ___U3CDirtyU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CDirtyU3Ek__BackingField_13() { return &___U3CDirtyU3Ek__BackingField_13; }
	inline void set_U3CDirtyU3Ek__BackingField_13(bool value)
	{
		___U3CDirtyU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CReadyU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(TouchSprite_t782132080, ___U3CReadyU3Ek__BackingField_14)); }
	inline bool get_U3CReadyU3Ek__BackingField_14() const { return ___U3CReadyU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CReadyU3Ek__BackingField_14() { return &___U3CReadyU3Ek__BackingField_14; }
	inline void set_U3CReadyU3Ek__BackingField_14(bool value)
	{
		___U3CReadyU3Ek__BackingField_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
