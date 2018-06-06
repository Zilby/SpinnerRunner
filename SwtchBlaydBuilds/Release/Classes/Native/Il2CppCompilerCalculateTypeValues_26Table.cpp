#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Action
struct Action_t1264377477;
// System.Action`1<System.String>
struct Action_1_t2019918284;
// System.Action`1<UnityEngine.Store.UserInfo>
struct Action_1_t3058893588;
// System.String
struct String_t;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t3972987605;
// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_t2597455733;
// UnityEngine.Purchasing.ConfigurationBuilder
struct ConfigurationBuilder_t1618671084;
// IAPDemo
struct IAPDemo_t3681080565;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// System.Void
struct Void_t1185182177;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct Dictionary_2_t3872604895;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct Dictionary_2_t2541822629;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Rigidbody
struct Rigidbody_t3916780224;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t1812449865;
// UnityEngine.Purchasing.IAPListener/OnPurchaseCompletedEvent
struct OnPurchaseCompletedEvent_t1675809258;
// UnityEngine.Purchasing.IAPListener/OnPurchaseFailedEvent
struct OnPurchaseFailedEvent_t800864861;
// UnityEngine.UI.Button
struct Button_t4055032469;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.Shader
struct Shader_t4151988712;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t4087348596;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t4111643188;
// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
struct AxisMapping_t3982445645;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1690781147;
// UnityStandardAssets.Cameras.ProtectCameraFromWallClip/RayHitComparer
struct RayHitComparer_t2205555946;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366;
// UnityEngine.RenderTexture
struct RenderTexture_t2108887433;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t1033194329;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t2302988098;
// UnityEngine.Texture3D
struct Texture3D_t1884131049;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef UNITYCHANNELLOGINHANDLER_T2949829254_H
#define UNITYCHANNELLOGINHANDLER_T2949829254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IAPDemo/UnityChannelLoginHandler
struct  UnityChannelLoginHandler_t2949829254  : public RuntimeObject
{
public:
	// System.Action IAPDemo/UnityChannelLoginHandler::initializeSucceededAction
	Action_t1264377477 * ___initializeSucceededAction_0;
	// System.Action`1<System.String> IAPDemo/UnityChannelLoginHandler::initializeFailedAction
	Action_1_t2019918284 * ___initializeFailedAction_1;
	// System.Action`1<UnityEngine.Store.UserInfo> IAPDemo/UnityChannelLoginHandler::loginSucceededAction
	Action_1_t3058893588 * ___loginSucceededAction_2;
	// System.Action`1<System.String> IAPDemo/UnityChannelLoginHandler::loginFailedAction
	Action_1_t2019918284 * ___loginFailedAction_3;

public:
	inline static int32_t get_offset_of_initializeSucceededAction_0() { return static_cast<int32_t>(offsetof(UnityChannelLoginHandler_t2949829254, ___initializeSucceededAction_0)); }
	inline Action_t1264377477 * get_initializeSucceededAction_0() const { return ___initializeSucceededAction_0; }
	inline Action_t1264377477 ** get_address_of_initializeSucceededAction_0() { return &___initializeSucceededAction_0; }
	inline void set_initializeSucceededAction_0(Action_t1264377477 * value)
	{
		___initializeSucceededAction_0 = value;
		Il2CppCodeGenWriteBarrier((&___initializeSucceededAction_0), value);
	}

	inline static int32_t get_offset_of_initializeFailedAction_1() { return static_cast<int32_t>(offsetof(UnityChannelLoginHandler_t2949829254, ___initializeFailedAction_1)); }
	inline Action_1_t2019918284 * get_initializeFailedAction_1() const { return ___initializeFailedAction_1; }
	inline Action_1_t2019918284 ** get_address_of_initializeFailedAction_1() { return &___initializeFailedAction_1; }
	inline void set_initializeFailedAction_1(Action_1_t2019918284 * value)
	{
		___initializeFailedAction_1 = value;
		Il2CppCodeGenWriteBarrier((&___initializeFailedAction_1), value);
	}

	inline static int32_t get_offset_of_loginSucceededAction_2() { return static_cast<int32_t>(offsetof(UnityChannelLoginHandler_t2949829254, ___loginSucceededAction_2)); }
	inline Action_1_t3058893588 * get_loginSucceededAction_2() const { return ___loginSucceededAction_2; }
	inline Action_1_t3058893588 ** get_address_of_loginSucceededAction_2() { return &___loginSucceededAction_2; }
	inline void set_loginSucceededAction_2(Action_1_t3058893588 * value)
	{
		___loginSucceededAction_2 = value;
		Il2CppCodeGenWriteBarrier((&___loginSucceededAction_2), value);
	}

	inline static int32_t get_offset_of_loginFailedAction_3() { return static_cast<int32_t>(offsetof(UnityChannelLoginHandler_t2949829254, ___loginFailedAction_3)); }
	inline Action_1_t2019918284 * get_loginFailedAction_3() const { return ___loginFailedAction_3; }
	inline Action_1_t2019918284 ** get_address_of_loginFailedAction_3() { return &___loginFailedAction_3; }
	inline void set_loginFailedAction_3(Action_1_t2019918284 * value)
	{
		___loginFailedAction_3 = value;
		Il2CppCodeGenWriteBarrier((&___loginFailedAction_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYCHANNELLOGINHANDLER_T2949829254_H
#ifndef VIRTUALAXIS_T4087348596_H
#define VIRTUALAXIS_T4087348596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct  VirtualAxis_t4087348596  : public RuntimeObject
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::m_Value
	float ___m_Value_1;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualAxis_t4087348596, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(VirtualAxis_t4087348596, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_U3CmatchWithInputManagerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VirtualAxis_t4087348596, ___U3CmatchWithInputManagerU3Ek__BackingField_2)); }
	inline bool get_U3CmatchWithInputManagerU3Ek__BackingField_2() const { return ___U3CmatchWithInputManagerU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CmatchWithInputManagerU3Ek__BackingField_2() { return &___U3CmatchWithInputManagerU3Ek__BackingField_2; }
	inline void set_U3CmatchWithInputManagerU3Ek__BackingField_2(bool value)
	{
		___U3CmatchWithInputManagerU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALAXIS_T4087348596_H
#ifndef RAYHITCOMPARER_T2205555946_H
#define RAYHITCOMPARER_T2205555946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.ProtectCameraFromWallClip/RayHitComparer
struct  RayHitComparer_t2205555946  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYHITCOMPARER_T2205555946_H
#ifndef QUADS_T1152577304_H
#define QUADS_T1152577304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Quads
struct  Quads_t1152577304  : public RuntimeObject
{
public:

public:
};

struct Quads_t1152577304_StaticFields
{
public:
	// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Quads::meshes
	MeshU5BU5D_t3972987605* ___meshes_0;
	// System.Int32 UnityStandardAssets.ImageEffects.Quads::currentQuads
	int32_t ___currentQuads_1;

public:
	inline static int32_t get_offset_of_meshes_0() { return static_cast<int32_t>(offsetof(Quads_t1152577304_StaticFields, ___meshes_0)); }
	inline MeshU5BU5D_t3972987605* get_meshes_0() const { return ___meshes_0; }
	inline MeshU5BU5D_t3972987605** get_address_of_meshes_0() { return &___meshes_0; }
	inline void set_meshes_0(MeshU5BU5D_t3972987605* value)
	{
		___meshes_0 = value;
		Il2CppCodeGenWriteBarrier((&___meshes_0), value);
	}

	inline static int32_t get_offset_of_currentQuads_1() { return static_cast<int32_t>(offsetof(Quads_t1152577304_StaticFields, ___currentQuads_1)); }
	inline int32_t get_currentQuads_1() const { return ___currentQuads_1; }
	inline int32_t* get_address_of_currentQuads_1() { return &___currentQuads_1; }
	inline void set_currentQuads_1(int32_t value)
	{
		___currentQuads_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUADS_T1152577304_H
#ifndef IMAGEEFFECTS_T1214077586_H
#define IMAGEEFFECTS_T1214077586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ImageEffects
struct  ImageEffects_t1214077586  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGEEFFECTS_T1214077586_H
#ifndef CROSSPLATFORMINPUTMANAGER_T191731427_H
#define CROSSPLATFORMINPUTMANAGER_T191731427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
struct  CrossPlatformInputManager_t191731427  : public RuntimeObject
{
public:

public:
};

struct CrossPlatformInputManager_t191731427_StaticFields
{
public:
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::activeInput
	VirtualInput_t2597455733 * ___activeInput_0;
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::s_TouchInput
	VirtualInput_t2597455733 * ___s_TouchInput_1;
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::s_HardwareInput
	VirtualInput_t2597455733 * ___s_HardwareInput_2;

public:
	inline static int32_t get_offset_of_activeInput_0() { return static_cast<int32_t>(offsetof(CrossPlatformInputManager_t191731427_StaticFields, ___activeInput_0)); }
	inline VirtualInput_t2597455733 * get_activeInput_0() const { return ___activeInput_0; }
	inline VirtualInput_t2597455733 ** get_address_of_activeInput_0() { return &___activeInput_0; }
	inline void set_activeInput_0(VirtualInput_t2597455733 * value)
	{
		___activeInput_0 = value;
		Il2CppCodeGenWriteBarrier((&___activeInput_0), value);
	}

	inline static int32_t get_offset_of_s_TouchInput_1() { return static_cast<int32_t>(offsetof(CrossPlatformInputManager_t191731427_StaticFields, ___s_TouchInput_1)); }
	inline VirtualInput_t2597455733 * get_s_TouchInput_1() const { return ___s_TouchInput_1; }
	inline VirtualInput_t2597455733 ** get_address_of_s_TouchInput_1() { return &___s_TouchInput_1; }
	inline void set_s_TouchInput_1(VirtualInput_t2597455733 * value)
	{
		___s_TouchInput_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_TouchInput_1), value);
	}

	inline static int32_t get_offset_of_s_HardwareInput_2() { return static_cast<int32_t>(offsetof(CrossPlatformInputManager_t191731427_StaticFields, ___s_HardwareInput_2)); }
	inline VirtualInput_t2597455733 * get_s_HardwareInput_2() const { return ___s_HardwareInput_2; }
	inline VirtualInput_t2597455733 ** get_address_of_s_HardwareInput_2() { return &___s_HardwareInput_2; }
	inline void set_s_HardwareInput_2(VirtualInput_t2597455733 * value)
	{
		___s_HardwareInput_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_HardwareInput_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSPLATFORMINPUTMANAGER_T191731427_H
#ifndef VIRTUALBUTTON_T2756566330_H
#define VIRTUALBUTTON_T2756566330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct  VirtualButton_t2756566330  : public RuntimeObject
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_1;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_LastPressedFrame
	int32_t ___m_LastPressedFrame_2;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_ReleasedFrame
	int32_t ___m_ReleasedFrame_3;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_Pressed
	bool ___m_Pressed_4;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualButton_t2756566330, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CmatchWithInputManagerU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VirtualButton_t2756566330, ___U3CmatchWithInputManagerU3Ek__BackingField_1)); }
	inline bool get_U3CmatchWithInputManagerU3Ek__BackingField_1() const { return ___U3CmatchWithInputManagerU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CmatchWithInputManagerU3Ek__BackingField_1() { return &___U3CmatchWithInputManagerU3Ek__BackingField_1; }
	inline void set_U3CmatchWithInputManagerU3Ek__BackingField_1(bool value)
	{
		___U3CmatchWithInputManagerU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_m_LastPressedFrame_2() { return static_cast<int32_t>(offsetof(VirtualButton_t2756566330, ___m_LastPressedFrame_2)); }
	inline int32_t get_m_LastPressedFrame_2() const { return ___m_LastPressedFrame_2; }
	inline int32_t* get_address_of_m_LastPressedFrame_2() { return &___m_LastPressedFrame_2; }
	inline void set_m_LastPressedFrame_2(int32_t value)
	{
		___m_LastPressedFrame_2 = value;
	}

	inline static int32_t get_offset_of_m_ReleasedFrame_3() { return static_cast<int32_t>(offsetof(VirtualButton_t2756566330, ___m_ReleasedFrame_3)); }
	inline int32_t get_m_ReleasedFrame_3() const { return ___m_ReleasedFrame_3; }
	inline int32_t* get_address_of_m_ReleasedFrame_3() { return &___m_ReleasedFrame_3; }
	inline void set_m_ReleasedFrame_3(int32_t value)
	{
		___m_ReleasedFrame_3 = value;
	}

	inline static int32_t get_offset_of_m_Pressed_4() { return static_cast<int32_t>(offsetof(VirtualButton_t2756566330, ___m_Pressed_4)); }
	inline bool get_m_Pressed_4() const { return ___m_Pressed_4; }
	inline bool* get_address_of_m_Pressed_4() { return &___m_Pressed_4; }
	inline void set_m_Pressed_4(bool value)
	{
		___m_Pressed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALBUTTON_T2756566330_H
#ifndef U3CAWAKEU3EC__ANONSTOREY0_T2364586269_H
#define U3CAWAKEU3EC__ANONSTOREY0_T2364586269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IAPDemo/<Awake>c__AnonStorey0
struct  U3CAwakeU3Ec__AnonStorey0_t2364586269  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ConfigurationBuilder IAPDemo/<Awake>c__AnonStorey0::builder
	ConfigurationBuilder_t1618671084 * ___builder_0;
	// System.Action IAPDemo/<Awake>c__AnonStorey0::initializeUnityIap
	Action_t1264377477 * ___initializeUnityIap_1;
	// IAPDemo IAPDemo/<Awake>c__AnonStorey0::$this
	IAPDemo_t3681080565 * ___U24this_2;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(U3CAwakeU3Ec__AnonStorey0_t2364586269, ___builder_0)); }
	inline ConfigurationBuilder_t1618671084 * get_builder_0() const { return ___builder_0; }
	inline ConfigurationBuilder_t1618671084 ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(ConfigurationBuilder_t1618671084 * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier((&___builder_0), value);
	}

	inline static int32_t get_offset_of_initializeUnityIap_1() { return static_cast<int32_t>(offsetof(U3CAwakeU3Ec__AnonStorey0_t2364586269, ___initializeUnityIap_1)); }
	inline Action_t1264377477 * get_initializeUnityIap_1() const { return ___initializeUnityIap_1; }
	inline Action_t1264377477 ** get_address_of_initializeUnityIap_1() { return &___initializeUnityIap_1; }
	inline void set_initializeUnityIap_1(Action_t1264377477 * value)
	{
		___initializeUnityIap_1 = value;
		Il2CppCodeGenWriteBarrier((&___initializeUnityIap_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CAwakeU3Ec__AnonStorey0_t2364586269, ___U24this_2)); }
	inline IAPDemo_t3681080565 * get_U24this_2() const { return ___U24this_2; }
	inline IAPDemo_t3681080565 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(IAPDemo_t3681080565 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CAWAKEU3EC__ANONSTOREY0_T2364586269_H
#ifndef U3CVALIDATEBUTTONCLICKU3EC__ANONSTOREY1_T541528072_H
#define U3CVALIDATEBUTTONCLICKU3EC__ANONSTOREY1_T541528072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IAPDemo/<ValidateButtonClick>c__AnonStorey1
struct  U3CValidateButtonClickU3Ec__AnonStorey1_t541528072  : public RuntimeObject
{
public:
	// System.String IAPDemo/<ValidateButtonClick>c__AnonStorey1::txId
	String_t* ___txId_0;

public:
	inline static int32_t get_offset_of_txId_0() { return static_cast<int32_t>(offsetof(U3CValidateButtonClickU3Ec__AnonStorey1_t541528072, ___txId_0)); }
	inline String_t* get_txId_0() const { return ___txId_0; }
	inline String_t** get_address_of_txId_0() { return &___txId_0; }
	inline void set_txId_0(String_t* value)
	{
		___txId_0 = value;
		Il2CppCodeGenWriteBarrier((&___txId_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CVALIDATEBUTTONCLICKU3EC__ANONSTOREY1_T541528072_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef UNITYEVENT_2_T1877158062_H
#define UNITYEVENT_2_T1877158062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>
struct  UnityEvent_2_t1877158062  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_2_t1877158062, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_2_T1877158062_H
#ifndef UNITYEVENT_1_T4126069563_H
#define UNITYEVENT_1_T4126069563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.Purchasing.Product>
struct  UnityEvent_1_t4126069563  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t4126069563, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T4126069563_H
#ifndef LAYERMASK_T3493934918_H
#define LAYERMASK_T3493934918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t3493934918 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t3493934918, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_T3493934918_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef DOF34QUALITYSETTING_T3636551379_H
#define DOF34QUALITYSETTING_T3636551379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/Dof34QualitySetting
struct  Dof34QualitySetting_t3636551379 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/Dof34QualitySetting::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Dof34QualitySetting_t3636551379, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOF34QUALITYSETTING_T3636551379_H
#ifndef DOFRESOLUTION_T1566655669_H
#define DOFRESOLUTION_T1566655669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofResolution
struct  DofResolution_t1566655669 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofResolution::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DofResolution_t1566655669, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOFRESOLUTION_T1566655669_H
#ifndef DOFBLURRINESS_T473098480_H
#define DOFBLURRINESS_T473098480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness
struct  DofBlurriness_t473098480 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DofBlurriness_t473098480, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOFBLURRINESS_T473098480_H
#ifndef BOKEHDESTINATION_T1233703462_H
#define BOKEHDESTINATION_T1233703462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/BokehDestination
struct  BokehDestination_t1233703462 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/BokehDestination::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BokehDestination_t1233703462, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOKEHDESTINATION_T1233703462_H
#ifndef EDGEDETECTMODE_T1984240676_H
#define EDGEDETECTMODE_T1984240676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.EdgeDetection/EdgeDetectMode
struct  EdgeDetectMode_t1984240676 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.EdgeDetection/EdgeDetectMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EdgeDetectMode_t1984240676, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDGEDETECTMODE_T1984240676_H
#ifndef OVERLAYBLENDMODE_T429753458_H
#define OVERLAYBLENDMODE_T429753458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ScreenOverlay/OverlayBlendMode
struct  OverlayBlendMode_t429753458 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenOverlay/OverlayBlendMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OverlayBlendMode_t429753458, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OVERLAYBLENDMODE_T429753458_H
#ifndef BLURSAMPLECOUNT_T3210294001_H
#define BLURSAMPLECOUNT_T3210294001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.DepthOfField/BlurSampleCount
struct  BlurSampleCount_t3210294001 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.DepthOfField/BlurSampleCount::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BlurSampleCount_t3210294001, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLURSAMPLECOUNT_T3210294001_H
#ifndef RESOLUTION_T1804605042_H
#define RESOLUTION_T1804605042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.BloomOptimized/Resolution
struct  Resolution_t1804605042 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.BloomOptimized/Resolution::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Resolution_t1804605042, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLUTION_T1804605042_H
#ifndef BLURTYPE_T2416258039_H
#define BLURTYPE_T2416258039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.BloomOptimized/BlurType
struct  BlurType_t2416258039 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.BloomOptimized/BlurType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BlurType_t2416258039, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLURTYPE_T2416258039_H
#ifndef BLURTYPE_T1046251128_H
#define BLURTYPE_T1046251128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.BlurOptimized/BlurType
struct  BlurType_t1046251128 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.BlurOptimized/BlurType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BlurType_t1046251128, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLURTYPE_T1046251128_H
#ifndef MOTIONBLURFILTER_T520253047_H
#define MOTIONBLURFILTER_T520253047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter
struct  MotionBlurFilter_t520253047 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MotionBlurFilter_t520253047, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOTIONBLURFILTER_T520253047_H
#ifndef COLORCORRECTIONMODE_T1416458051_H
#define COLORCORRECTIONMODE_T1416458051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode
struct  ColorCorrectionMode_t1416458051 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ColorCorrectionMode_t1416458051, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORCORRECTIONMODE_T1416458051_H
#ifndef BLURTYPE_T3871645803_H
#define BLURTYPE_T3871645803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.DepthOfField/BlurType
struct  BlurType_t3871645803 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.DepthOfField/BlurType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BlurType_t3871645803, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLURTYPE_T3871645803_H
#ifndef SSAOSAMPLES_T2619211009_H
#define SSAOSAMPLES_T2619211009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion/SSAOSamples
struct  SSAOSamples_t2619211009 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion/SSAOSamples::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SSAOSamples_t2619211009, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSAOSAMPLES_T2619211009_H
#ifndef ONPURCHASEFAILEDEVENT_T800864861_H
#define ONPURCHASEFAILEDEVENT_T800864861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.IAPListener/OnPurchaseFailedEvent
struct  OnPurchaseFailedEvent_t800864861  : public UnityEvent_2_t1877158062
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONPURCHASEFAILEDEVENT_T800864861_H
#ifndef ONPURCHASECOMPLETEDEVENT_T1675809258_H
#define ONPURCHASECOMPLETEDEVENT_T1675809258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.IAPListener/OnPurchaseCompletedEvent
struct  OnPurchaseCompletedEvent_t1675809258  : public UnityEvent_1_t4126069563
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONPURCHASECOMPLETEDEVENT_T1675809258_H
#ifndef FILTERMODE_T3761284007_H
#define FILTERMODE_T3761284007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FilterMode
struct  FilterMode_t3761284007 
{
public:
	// System.Int32 UnityEngine.FilterMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FilterMode_t3761284007, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILTERMODE_T3761284007_H
#ifndef ADAPTIVETEXSIZE_T1062941056_H
#define ADAPTIVETEXSIZE_T1062941056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Tonemapping/AdaptiveTexSize
struct  AdaptiveTexSize_t1062941056 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.Tonemapping/AdaptiveTexSize::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AdaptiveTexSize_t1062941056, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADAPTIVETEXSIZE_T1062941056_H
#ifndef RENDERTEXTUREFORMAT_T962350765_H
#define RENDERTEXTUREFORMAT_T962350765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureFormat
struct  RenderTextureFormat_t962350765 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t962350765, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTUREFORMAT_T962350765_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef RAY_T3785851493_H
#define RAY_T3785851493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t3785851493 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t3722313464  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t3722313464  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Origin_0)); }
	inline Vector3_t3722313464  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t3722313464 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t3722313464  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Direction_1)); }
	inline Vector3_t3722313464  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t3722313464 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t3722313464  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T3785851493_H
#ifndef SUNSHAFTSRESOLUTION_T3826757637_H
#define SUNSHAFTSRESOLUTION_T3826757637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.SunShafts/SunShaftsResolution
struct  SunShaftsResolution_t3826757637 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.SunShafts/SunShaftsResolution::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SunShaftsResolution_t3826757637, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUNSHAFTSRESOLUTION_T3826757637_H
#ifndef SHAFTSSCREENBLENDMODE_T4165054462_H
#define SHAFTSSCREENBLENDMODE_T4165054462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.SunShafts/ShaftsScreenBlendMode
struct  ShaftsScreenBlendMode_t4165054462 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.SunShafts/ShaftsScreenBlendMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ShaftsScreenBlendMode_t4165054462, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHAFTSSCREENBLENDMODE_T4165054462_H
#ifndef TILTSHIFTMODE_T1375727185_H
#define TILTSHIFTMODE_T1375727185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.TiltShift/TiltShiftMode
struct  TiltShiftMode_t1375727185 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.TiltShift/TiltShiftMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TiltShiftMode_t1375727185, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILTSHIFTMODE_T1375727185_H
#ifndef TILTSHIFTQUALITY_T4173331534_H
#define TILTSHIFTQUALITY_T4173331534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.TiltShift/TiltShiftQuality
struct  TiltShiftQuality_t4173331534 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.TiltShift/TiltShiftQuality::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TiltShiftQuality_t4173331534, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILTSHIFTQUALITY_T4173331534_H
#ifndef TONEMAPPERTYPE_T52991894_H
#define TONEMAPPERTYPE_T52991894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Tonemapping/TonemapperType
struct  TonemapperType_t52991894 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.Tonemapping/TonemapperType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TonemapperType_t52991894, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TONEMAPPERTYPE_T52991894_H
#ifndef UPDATETYPE_T2449601881_H
#define UPDATETYPE_T2449601881_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.AbstractTargetFollower/UpdateType
struct  UpdateType_t2449601881 
{
public:
	// System.Int32 UnityStandardAssets.Cameras.AbstractTargetFollower/UpdateType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UpdateType_t2449601881, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATETYPE_T2449601881_H
#ifndef AXISOPTION_T1372819835_H
#define AXISOPTION_T1372819835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption
struct  AxisOption_t1372819835 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AxisOption_t1372819835, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISOPTION_T1372819835_H
#ifndef BLOOMQUALITY_T3369172721_H
#define BLOOMQUALITY_T3369172721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Bloom/BloomQuality
struct  BloomQuality_t3369172721 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.Bloom/BloomQuality::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BloomQuality_t3369172721, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOOMQUALITY_T3369172721_H
#ifndef AXISOPTIONS_T3101732129_H
#define AXISOPTIONS_T3101732129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions
struct  AxisOptions_t3101732129 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AxisOptions_t3101732129, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISOPTIONS_T3101732129_H
#ifndef AAMODE_T1871701680_H
#define AAMODE_T1871701680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.AAMode
struct  AAMode_t1871701680 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.AAMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AAMode_t1871701680, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AAMODE_T1871701680_H
#ifndef LENSFLARESTYLE_T630413071_H
#define LENSFLARESTYLE_T630413071_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Bloom/LensFlareStyle
struct  LensFlareStyle_t630413071 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.Bloom/LensFlareStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LensFlareStyle_t630413071, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LENSFLARESTYLE_T630413071_H
#ifndef AXISOPTION_T3128671669_H
#define AXISOPTION_T3128671669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption
struct  AxisOption_t3128671669 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AxisOption_t3128671669, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISOPTION_T3128671669_H
#ifndef BLOOMSCREENBLENDMODE_T2012607685_H
#define BLOOMSCREENBLENDMODE_T2012607685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Bloom/BloomScreenBlendMode
struct  BloomScreenBlendMode_t2012607685 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.Bloom/BloomScreenBlendMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BloomScreenBlendMode_t2012607685, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOOMSCREENBLENDMODE_T2012607685_H
#ifndef HDRBLOOMMODE_T3774419504_H
#define HDRBLOOMMODE_T3774419504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Bloom/HDRBloomMode
struct  HDRBloomMode_t3774419504 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.Bloom/HDRBloomMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HDRBloomMode_t3774419504, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HDRBLOOMMODE_T3774419504_H
#ifndef TWEAKMODE_T747557136_H
#define TWEAKMODE_T747557136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Bloom/TweakMode
struct  TweakMode_t747557136 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.Bloom/TweakMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TweakMode_t747557136, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEAKMODE_T747557136_H
#ifndef CONTROLSTYLE_T1372986211_H
#define CONTROLSTYLE_T1372986211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle
struct  ControlStyle_t1372986211 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ControlStyle_t1372986211, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLSTYLE_T1372986211_H
#ifndef BLOOMSCREENBLENDMODE_T19712272_H
#define BLOOMSCREENBLENDMODE_T19712272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.BloomScreenBlendMode
struct  BloomScreenBlendMode_t19712272 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.BloomScreenBlendMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BloomScreenBlendMode_t19712272, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOOMSCREENBLENDMODE_T19712272_H
#ifndef ACTIVEINPUTMETHOD_T139315314_H
#define ACTIVEINPUTMETHOD_T139315314_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod
struct  ActiveInputMethod_t139315314 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ActiveInputMethod_t139315314, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVEINPUTMETHOD_T139315314_H
#ifndef MAPPINGTYPE_T2039944511_H
#define MAPPINGTYPE_T2039944511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType
struct  MappingType_t2039944511 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MappingType_t2039944511, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPPINGTYPE_T2039944511_H
#ifndef TWEAKMODE34_T984135990_H
#define TWEAKMODE34_T984135990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.TweakMode34
struct  TweakMode34_t984135990 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.TweakMode34::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TweakMode34_t984135990, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEAKMODE34_T984135990_H
#ifndef VIRTUALINPUT_T2597455733_H
#define VIRTUALINPUT_T2597455733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct  VirtualInput_t2597455733  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::<virtualMousePosition>k__BackingField
	Vector3_t3722313464  ___U3CvirtualMousePositionU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualAxes
	Dictionary_2_t3872604895 * ___m_VirtualAxes_1;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualButtons
	Dictionary_2_t2541822629 * ___m_VirtualButtons_2;
	// System.Collections.Generic.List`1<System.String> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_AlwaysUseVirtual
	List_1_t3319525431 * ___m_AlwaysUseVirtual_3;

public:
	inline static int32_t get_offset_of_U3CvirtualMousePositionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualInput_t2597455733, ___U3CvirtualMousePositionU3Ek__BackingField_0)); }
	inline Vector3_t3722313464  get_U3CvirtualMousePositionU3Ek__BackingField_0() const { return ___U3CvirtualMousePositionU3Ek__BackingField_0; }
	inline Vector3_t3722313464 * get_address_of_U3CvirtualMousePositionU3Ek__BackingField_0() { return &___U3CvirtualMousePositionU3Ek__BackingField_0; }
	inline void set_U3CvirtualMousePositionU3Ek__BackingField_0(Vector3_t3722313464  value)
	{
		___U3CvirtualMousePositionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_VirtualAxes_1() { return static_cast<int32_t>(offsetof(VirtualInput_t2597455733, ___m_VirtualAxes_1)); }
	inline Dictionary_2_t3872604895 * get_m_VirtualAxes_1() const { return ___m_VirtualAxes_1; }
	inline Dictionary_2_t3872604895 ** get_address_of_m_VirtualAxes_1() { return &___m_VirtualAxes_1; }
	inline void set_m_VirtualAxes_1(Dictionary_2_t3872604895 * value)
	{
		___m_VirtualAxes_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_VirtualAxes_1), value);
	}

	inline static int32_t get_offset_of_m_VirtualButtons_2() { return static_cast<int32_t>(offsetof(VirtualInput_t2597455733, ___m_VirtualButtons_2)); }
	inline Dictionary_2_t2541822629 * get_m_VirtualButtons_2() const { return ___m_VirtualButtons_2; }
	inline Dictionary_2_t2541822629 ** get_address_of_m_VirtualButtons_2() { return &___m_VirtualButtons_2; }
	inline void set_m_VirtualButtons_2(Dictionary_2_t2541822629 * value)
	{
		___m_VirtualButtons_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_VirtualButtons_2), value);
	}

	inline static int32_t get_offset_of_m_AlwaysUseVirtual_3() { return static_cast<int32_t>(offsetof(VirtualInput_t2597455733, ___m_AlwaysUseVirtual_3)); }
	inline List_1_t3319525431 * get_m_AlwaysUseVirtual_3() const { return ___m_AlwaysUseVirtual_3; }
	inline List_1_t3319525431 ** get_address_of_m_AlwaysUseVirtual_3() { return &___m_AlwaysUseVirtual_3; }
	inline void set_m_AlwaysUseVirtual_3(List_1_t3319525431 * value)
	{
		___m_AlwaysUseVirtual_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_AlwaysUseVirtual_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALINPUT_T2597455733_H
#ifndef LENSFLARESTYLE34_T4260782719_H
#define LENSFLARESTYLE34_T4260782719_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.LensflareStyle34
struct  LensflareStyle34_t4260782719 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.LensflareStyle34::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LensflareStyle34_t4260782719, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LENSFLARESTYLE34_T4260782719_H
#ifndef HDRBLOOMMODE_T4271191419_H
#define HDRBLOOMMODE_T4271191419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.HDRBloomMode
struct  HDRBloomMode_t4271191419 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.HDRBloomMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HDRBloomMode_t4271191419, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HDRBLOOMMODE_T4271191419_H
#ifndef MOBILEINPUT_T2025745297_H
#define MOBILEINPUT_T2025745297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
struct  MobileInput_t2025745297  : public VirtualInput_t2597455733
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOBILEINPUT_T2025745297_H
#ifndef STANDALONEINPUT_T1343950252_H
#define STANDALONEINPUT_T1343950252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
struct  StandaloneInput_t1343950252  : public VirtualInput_t2597455733
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STANDALONEINPUT_T1343950252_H
#ifndef AXISMAPPING_T3982445645_H
#define AXISMAPPING_T3982445645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
struct  AxisMapping_t3982445645  : public RuntimeObject
{
public:
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::type
	int32_t ___type_0;
	// System.String UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::axisName
	String_t* ___axisName_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(AxisMapping_t3982445645, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_axisName_1() { return static_cast<int32_t>(offsetof(AxisMapping_t3982445645, ___axisName_1)); }
	inline String_t* get_axisName_1() const { return ___axisName_1; }
	inline String_t** get_address_of_axisName_1() { return &___axisName_1; }
	inline void set_axisName_1(String_t* value)
	{
		___axisName_1 = value;
		Il2CppCodeGenWriteBarrier((&___axisName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISMAPPING_T3982445645_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef ABSTRACTTARGETFOLLOWER_T1919708159_H
#define ABSTRACTTARGETFOLLOWER_T1919708159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.AbstractTargetFollower
struct  AbstractTargetFollower_t1919708159  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform UnityStandardAssets.Cameras.AbstractTargetFollower::m_Target
	Transform_t3600365921 * ___m_Target_2;
	// System.Boolean UnityStandardAssets.Cameras.AbstractTargetFollower::m_AutoTargetPlayer
	bool ___m_AutoTargetPlayer_3;
	// UnityStandardAssets.Cameras.AbstractTargetFollower/UpdateType UnityStandardAssets.Cameras.AbstractTargetFollower::m_UpdateType
	int32_t ___m_UpdateType_4;
	// UnityEngine.Rigidbody UnityStandardAssets.Cameras.AbstractTargetFollower::targetRigidbody
	Rigidbody_t3916780224 * ___targetRigidbody_5;

public:
	inline static int32_t get_offset_of_m_Target_2() { return static_cast<int32_t>(offsetof(AbstractTargetFollower_t1919708159, ___m_Target_2)); }
	inline Transform_t3600365921 * get_m_Target_2() const { return ___m_Target_2; }
	inline Transform_t3600365921 ** get_address_of_m_Target_2() { return &___m_Target_2; }
	inline void set_m_Target_2(Transform_t3600365921 * value)
	{
		___m_Target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_2), value);
	}

	inline static int32_t get_offset_of_m_AutoTargetPlayer_3() { return static_cast<int32_t>(offsetof(AbstractTargetFollower_t1919708159, ___m_AutoTargetPlayer_3)); }
	inline bool get_m_AutoTargetPlayer_3() const { return ___m_AutoTargetPlayer_3; }
	inline bool* get_address_of_m_AutoTargetPlayer_3() { return &___m_AutoTargetPlayer_3; }
	inline void set_m_AutoTargetPlayer_3(bool value)
	{
		___m_AutoTargetPlayer_3 = value;
	}

	inline static int32_t get_offset_of_m_UpdateType_4() { return static_cast<int32_t>(offsetof(AbstractTargetFollower_t1919708159, ___m_UpdateType_4)); }
	inline int32_t get_m_UpdateType_4() const { return ___m_UpdateType_4; }
	inline int32_t* get_address_of_m_UpdateType_4() { return &___m_UpdateType_4; }
	inline void set_m_UpdateType_4(int32_t value)
	{
		___m_UpdateType_4 = value;
	}

	inline static int32_t get_offset_of_targetRigidbody_5() { return static_cast<int32_t>(offsetof(AbstractTargetFollower_t1919708159, ___targetRigidbody_5)); }
	inline Rigidbody_t3916780224 * get_targetRigidbody_5() const { return ___targetRigidbody_5; }
	inline Rigidbody_t3916780224 ** get_address_of_targetRigidbody_5() { return &___targetRigidbody_5; }
	inline void set_targetRigidbody_5(Rigidbody_t3916780224 * value)
	{
		___targetRigidbody_5 = value;
		Il2CppCodeGenWriteBarrier((&___targetRigidbody_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTTARGETFOLLOWER_T1919708159_H
#ifndef POSTEFFECTSBASE_T2404315739_H
#define POSTEFFECTSBASE_T2404315739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.PostEffectsBase
struct  PostEffectsBase_t2404315739  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::supportHDRTextures
	bool ___supportHDRTextures_2;
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::supportDX11
	bool ___supportDX11_3;
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::isSupported
	bool ___isSupported_4;
	// System.Collections.Generic.List`1<UnityEngine.Material> UnityStandardAssets.ImageEffects.PostEffectsBase::createdMaterials
	List_1_t1812449865 * ___createdMaterials_5;

public:
	inline static int32_t get_offset_of_supportHDRTextures_2() { return static_cast<int32_t>(offsetof(PostEffectsBase_t2404315739, ___supportHDRTextures_2)); }
	inline bool get_supportHDRTextures_2() const { return ___supportHDRTextures_2; }
	inline bool* get_address_of_supportHDRTextures_2() { return &___supportHDRTextures_2; }
	inline void set_supportHDRTextures_2(bool value)
	{
		___supportHDRTextures_2 = value;
	}

	inline static int32_t get_offset_of_supportDX11_3() { return static_cast<int32_t>(offsetof(PostEffectsBase_t2404315739, ___supportDX11_3)); }
	inline bool get_supportDX11_3() const { return ___supportDX11_3; }
	inline bool* get_address_of_supportDX11_3() { return &___supportDX11_3; }
	inline void set_supportDX11_3(bool value)
	{
		___supportDX11_3 = value;
	}

	inline static int32_t get_offset_of_isSupported_4() { return static_cast<int32_t>(offsetof(PostEffectsBase_t2404315739, ___isSupported_4)); }
	inline bool get_isSupported_4() const { return ___isSupported_4; }
	inline bool* get_address_of_isSupported_4() { return &___isSupported_4; }
	inline void set_isSupported_4(bool value)
	{
		___isSupported_4 = value;
	}

	inline static int32_t get_offset_of_createdMaterials_5() { return static_cast<int32_t>(offsetof(PostEffectsBase_t2404315739, ___createdMaterials_5)); }
	inline List_1_t1812449865 * get_createdMaterials_5() const { return ___createdMaterials_5; }
	inline List_1_t1812449865 ** get_address_of_createdMaterials_5() { return &___createdMaterials_5; }
	inline void set_createdMaterials_5(List_1_t1812449865 * value)
	{
		___createdMaterials_5 = value;
		Il2CppCodeGenWriteBarrier((&___createdMaterials_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTEFFECTSBASE_T2404315739_H
#ifndef BUTTONHANDLER_T823762219_H
#define BUTTONHANDLER_T823762219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.ButtonHandler
struct  ButtonHandler_t823762219  : public MonoBehaviour_t3962482529
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.ButtonHandler::Name
	String_t* ___Name_2;

public:
	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(ButtonHandler_t823762219, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier((&___Name_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONHANDLER_T823762219_H
#ifndef IAPLISTENER_T2001792988_H
#define IAPLISTENER_T2001792988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.IAPListener
struct  IAPListener_t2001792988  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean UnityEngine.Purchasing.IAPListener::consumePurchase
	bool ___consumePurchase_2;
	// System.Boolean UnityEngine.Purchasing.IAPListener::dontDestroyOnLoad
	bool ___dontDestroyOnLoad_3;
	// UnityEngine.Purchasing.IAPListener/OnPurchaseCompletedEvent UnityEngine.Purchasing.IAPListener::onPurchaseComplete
	OnPurchaseCompletedEvent_t1675809258 * ___onPurchaseComplete_4;
	// UnityEngine.Purchasing.IAPListener/OnPurchaseFailedEvent UnityEngine.Purchasing.IAPListener::onPurchaseFailed
	OnPurchaseFailedEvent_t800864861 * ___onPurchaseFailed_5;

public:
	inline static int32_t get_offset_of_consumePurchase_2() { return static_cast<int32_t>(offsetof(IAPListener_t2001792988, ___consumePurchase_2)); }
	inline bool get_consumePurchase_2() const { return ___consumePurchase_2; }
	inline bool* get_address_of_consumePurchase_2() { return &___consumePurchase_2; }
	inline void set_consumePurchase_2(bool value)
	{
		___consumePurchase_2 = value;
	}

	inline static int32_t get_offset_of_dontDestroyOnLoad_3() { return static_cast<int32_t>(offsetof(IAPListener_t2001792988, ___dontDestroyOnLoad_3)); }
	inline bool get_dontDestroyOnLoad_3() const { return ___dontDestroyOnLoad_3; }
	inline bool* get_address_of_dontDestroyOnLoad_3() { return &___dontDestroyOnLoad_3; }
	inline void set_dontDestroyOnLoad_3(bool value)
	{
		___dontDestroyOnLoad_3 = value;
	}

	inline static int32_t get_offset_of_onPurchaseComplete_4() { return static_cast<int32_t>(offsetof(IAPListener_t2001792988, ___onPurchaseComplete_4)); }
	inline OnPurchaseCompletedEvent_t1675809258 * get_onPurchaseComplete_4() const { return ___onPurchaseComplete_4; }
	inline OnPurchaseCompletedEvent_t1675809258 ** get_address_of_onPurchaseComplete_4() { return &___onPurchaseComplete_4; }
	inline void set_onPurchaseComplete_4(OnPurchaseCompletedEvent_t1675809258 * value)
	{
		___onPurchaseComplete_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPurchaseComplete_4), value);
	}

	inline static int32_t get_offset_of_onPurchaseFailed_5() { return static_cast<int32_t>(offsetof(IAPListener_t2001792988, ___onPurchaseFailed_5)); }
	inline OnPurchaseFailedEvent_t800864861 * get_onPurchaseFailed_5() const { return ___onPurchaseFailed_5; }
	inline OnPurchaseFailedEvent_t800864861 ** get_address_of_onPurchaseFailed_5() { return &___onPurchaseFailed_5; }
	inline void set_onPurchaseFailed_5(OnPurchaseFailedEvent_t800864861 * value)
	{
		___onPurchaseFailed_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPurchaseFailed_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IAPLISTENER_T2001792988_H
#ifndef IAPDEMOPRODUCTUI_T922953754_H
#define IAPDEMOPRODUCTUI_T922953754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IAPDemoProductUI
struct  IAPDemoProductUI_t922953754  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Button IAPDemoProductUI::purchaseButton
	Button_t4055032469 * ___purchaseButton_2;
	// UnityEngine.UI.Button IAPDemoProductUI::receiptButton
	Button_t4055032469 * ___receiptButton_3;
	// UnityEngine.UI.Text IAPDemoProductUI::titleText
	Text_t1901882714 * ___titleText_4;
	// UnityEngine.UI.Text IAPDemoProductUI::descriptionText
	Text_t1901882714 * ___descriptionText_5;
	// UnityEngine.UI.Text IAPDemoProductUI::priceText
	Text_t1901882714 * ___priceText_6;
	// UnityEngine.UI.Text IAPDemoProductUI::statusText
	Text_t1901882714 * ___statusText_7;
	// System.String IAPDemoProductUI::m_ProductID
	String_t* ___m_ProductID_8;
	// System.Action`1<System.String> IAPDemoProductUI::m_PurchaseCallback
	Action_1_t2019918284 * ___m_PurchaseCallback_9;
	// System.String IAPDemoProductUI::m_Receipt
	String_t* ___m_Receipt_10;

public:
	inline static int32_t get_offset_of_purchaseButton_2() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t922953754, ___purchaseButton_2)); }
	inline Button_t4055032469 * get_purchaseButton_2() const { return ___purchaseButton_2; }
	inline Button_t4055032469 ** get_address_of_purchaseButton_2() { return &___purchaseButton_2; }
	inline void set_purchaseButton_2(Button_t4055032469 * value)
	{
		___purchaseButton_2 = value;
		Il2CppCodeGenWriteBarrier((&___purchaseButton_2), value);
	}

	inline static int32_t get_offset_of_receiptButton_3() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t922953754, ___receiptButton_3)); }
	inline Button_t4055032469 * get_receiptButton_3() const { return ___receiptButton_3; }
	inline Button_t4055032469 ** get_address_of_receiptButton_3() { return &___receiptButton_3; }
	inline void set_receiptButton_3(Button_t4055032469 * value)
	{
		___receiptButton_3 = value;
		Il2CppCodeGenWriteBarrier((&___receiptButton_3), value);
	}

	inline static int32_t get_offset_of_titleText_4() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t922953754, ___titleText_4)); }
	inline Text_t1901882714 * get_titleText_4() const { return ___titleText_4; }
	inline Text_t1901882714 ** get_address_of_titleText_4() { return &___titleText_4; }
	inline void set_titleText_4(Text_t1901882714 * value)
	{
		___titleText_4 = value;
		Il2CppCodeGenWriteBarrier((&___titleText_4), value);
	}

	inline static int32_t get_offset_of_descriptionText_5() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t922953754, ___descriptionText_5)); }
	inline Text_t1901882714 * get_descriptionText_5() const { return ___descriptionText_5; }
	inline Text_t1901882714 ** get_address_of_descriptionText_5() { return &___descriptionText_5; }
	inline void set_descriptionText_5(Text_t1901882714 * value)
	{
		___descriptionText_5 = value;
		Il2CppCodeGenWriteBarrier((&___descriptionText_5), value);
	}

	inline static int32_t get_offset_of_priceText_6() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t922953754, ___priceText_6)); }
	inline Text_t1901882714 * get_priceText_6() const { return ___priceText_6; }
	inline Text_t1901882714 ** get_address_of_priceText_6() { return &___priceText_6; }
	inline void set_priceText_6(Text_t1901882714 * value)
	{
		___priceText_6 = value;
		Il2CppCodeGenWriteBarrier((&___priceText_6), value);
	}

	inline static int32_t get_offset_of_statusText_7() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t922953754, ___statusText_7)); }
	inline Text_t1901882714 * get_statusText_7() const { return ___statusText_7; }
	inline Text_t1901882714 ** get_address_of_statusText_7() { return &___statusText_7; }
	inline void set_statusText_7(Text_t1901882714 * value)
	{
		___statusText_7 = value;
		Il2CppCodeGenWriteBarrier((&___statusText_7), value);
	}

	inline static int32_t get_offset_of_m_ProductID_8() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t922953754, ___m_ProductID_8)); }
	inline String_t* get_m_ProductID_8() const { return ___m_ProductID_8; }
	inline String_t** get_address_of_m_ProductID_8() { return &___m_ProductID_8; }
	inline void set_m_ProductID_8(String_t* value)
	{
		___m_ProductID_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_ProductID_8), value);
	}

	inline static int32_t get_offset_of_m_PurchaseCallback_9() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t922953754, ___m_PurchaseCallback_9)); }
	inline Action_1_t2019918284 * get_m_PurchaseCallback_9() const { return ___m_PurchaseCallback_9; }
	inline Action_1_t2019918284 ** get_address_of_m_PurchaseCallback_9() { return &___m_PurchaseCallback_9; }
	inline void set_m_PurchaseCallback_9(Action_1_t2019918284 * value)
	{
		___m_PurchaseCallback_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_PurchaseCallback_9), value);
	}

	inline static int32_t get_offset_of_m_Receipt_10() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t922953754, ___m_Receipt_10)); }
	inline String_t* get_m_Receipt_10() const { return ___m_Receipt_10; }
	inline String_t** get_address_of_m_Receipt_10() { return &___m_Receipt_10; }
	inline void set_m_Receipt_10(String_t* value)
	{
		___m_Receipt_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Receipt_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IAPDEMOPRODUCTUI_T922953754_H
#ifndef MOBILECONTROLRIG_T1964600252_H
#define MOBILECONTROLRIG_T1964600252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.MobileControlRig
struct  MobileControlRig_t1964600252  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOBILECONTROLRIG_T1964600252_H
#ifndef SCREENSPACEAMBIENTOCCLUSION_T1675618705_H
#define SCREENSPACEAMBIENTOCCLUSION_T1675618705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion
struct  ScreenSpaceAmbientOcclusion_t1675618705  : public MonoBehaviour_t3962482529
{
public:
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_Radius
	float ___m_Radius_2;
	// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion/SSAOSamples UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_SampleCount
	int32_t ___m_SampleCount_3;
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_OcclusionIntensity
	float ___m_OcclusionIntensity_4;
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_Blur
	int32_t ___m_Blur_5;
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_Downsampling
	int32_t ___m_Downsampling_6;
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_OcclusionAttenuation
	float ___m_OcclusionAttenuation_7;
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_MinZ
	float ___m_MinZ_8;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_SSAOShader
	Shader_t4151988712 * ___m_SSAOShader_9;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_SSAOMaterial
	Material_t340375123 * ___m_SSAOMaterial_10;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_RandomTexture
	Texture2D_t3840446185 * ___m_RandomTexture_11;
	// System.Boolean UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_Supported
	bool ___m_Supported_12;

public:
	inline static int32_t get_offset_of_m_Radius_2() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1675618705, ___m_Radius_2)); }
	inline float get_m_Radius_2() const { return ___m_Radius_2; }
	inline float* get_address_of_m_Radius_2() { return &___m_Radius_2; }
	inline void set_m_Radius_2(float value)
	{
		___m_Radius_2 = value;
	}

	inline static int32_t get_offset_of_m_SampleCount_3() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1675618705, ___m_SampleCount_3)); }
	inline int32_t get_m_SampleCount_3() const { return ___m_SampleCount_3; }
	inline int32_t* get_address_of_m_SampleCount_3() { return &___m_SampleCount_3; }
	inline void set_m_SampleCount_3(int32_t value)
	{
		___m_SampleCount_3 = value;
	}

	inline static int32_t get_offset_of_m_OcclusionIntensity_4() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1675618705, ___m_OcclusionIntensity_4)); }
	inline float get_m_OcclusionIntensity_4() const { return ___m_OcclusionIntensity_4; }
	inline float* get_address_of_m_OcclusionIntensity_4() { return &___m_OcclusionIntensity_4; }
	inline void set_m_OcclusionIntensity_4(float value)
	{
		___m_OcclusionIntensity_4 = value;
	}

	inline static int32_t get_offset_of_m_Blur_5() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1675618705, ___m_Blur_5)); }
	inline int32_t get_m_Blur_5() const { return ___m_Blur_5; }
	inline int32_t* get_address_of_m_Blur_5() { return &___m_Blur_5; }
	inline void set_m_Blur_5(int32_t value)
	{
		___m_Blur_5 = value;
	}

	inline static int32_t get_offset_of_m_Downsampling_6() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1675618705, ___m_Downsampling_6)); }
	inline int32_t get_m_Downsampling_6() const { return ___m_Downsampling_6; }
	inline int32_t* get_address_of_m_Downsampling_6() { return &___m_Downsampling_6; }
	inline void set_m_Downsampling_6(int32_t value)
	{
		___m_Downsampling_6 = value;
	}

	inline static int32_t get_offset_of_m_OcclusionAttenuation_7() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1675618705, ___m_OcclusionAttenuation_7)); }
	inline float get_m_OcclusionAttenuation_7() const { return ___m_OcclusionAttenuation_7; }
	inline float* get_address_of_m_OcclusionAttenuation_7() { return &___m_OcclusionAttenuation_7; }
	inline void set_m_OcclusionAttenuation_7(float value)
	{
		___m_OcclusionAttenuation_7 = value;
	}

	inline static int32_t get_offset_of_m_MinZ_8() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1675618705, ___m_MinZ_8)); }
	inline float get_m_MinZ_8() const { return ___m_MinZ_8; }
	inline float* get_address_of_m_MinZ_8() { return &___m_MinZ_8; }
	inline void set_m_MinZ_8(float value)
	{
		___m_MinZ_8 = value;
	}

	inline static int32_t get_offset_of_m_SSAOShader_9() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1675618705, ___m_SSAOShader_9)); }
	inline Shader_t4151988712 * get_m_SSAOShader_9() const { return ___m_SSAOShader_9; }
	inline Shader_t4151988712 ** get_address_of_m_SSAOShader_9() { return &___m_SSAOShader_9; }
	inline void set_m_SSAOShader_9(Shader_t4151988712 * value)
	{
		___m_SSAOShader_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_SSAOShader_9), value);
	}

	inline static int32_t get_offset_of_m_SSAOMaterial_10() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1675618705, ___m_SSAOMaterial_10)); }
	inline Material_t340375123 * get_m_SSAOMaterial_10() const { return ___m_SSAOMaterial_10; }
	inline Material_t340375123 ** get_address_of_m_SSAOMaterial_10() { return &___m_SSAOMaterial_10; }
	inline void set_m_SSAOMaterial_10(Material_t340375123 * value)
	{
		___m_SSAOMaterial_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_SSAOMaterial_10), value);
	}

	inline static int32_t get_offset_of_m_RandomTexture_11() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1675618705, ___m_RandomTexture_11)); }
	inline Texture2D_t3840446185 * get_m_RandomTexture_11() const { return ___m_RandomTexture_11; }
	inline Texture2D_t3840446185 ** get_address_of_m_RandomTexture_11() { return &___m_RandomTexture_11; }
	inline void set_m_RandomTexture_11(Texture2D_t3840446185 * value)
	{
		___m_RandomTexture_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_RandomTexture_11), value);
	}

	inline static int32_t get_offset_of_m_Supported_12() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1675618705, ___m_Supported_12)); }
	inline bool get_m_Supported_12() const { return ___m_Supported_12; }
	inline bool* get_address_of_m_Supported_12() { return &___m_Supported_12; }
	inline void set_m_Supported_12(bool value)
	{
		___m_Supported_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENSPACEAMBIENTOCCLUSION_T1675618705_H
#ifndef BLUR_T1038294851_H
#define BLUR_T1038294851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Blur
struct  Blur_t1038294851  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.Blur::iterations
	int32_t ___iterations_2;
	// System.Single UnityStandardAssets.ImageEffects.Blur::blurSpread
	float ___blurSpread_3;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Blur::blurShader
	Shader_t4151988712 * ___blurShader_4;

public:
	inline static int32_t get_offset_of_iterations_2() { return static_cast<int32_t>(offsetof(Blur_t1038294851, ___iterations_2)); }
	inline int32_t get_iterations_2() const { return ___iterations_2; }
	inline int32_t* get_address_of_iterations_2() { return &___iterations_2; }
	inline void set_iterations_2(int32_t value)
	{
		___iterations_2 = value;
	}

	inline static int32_t get_offset_of_blurSpread_3() { return static_cast<int32_t>(offsetof(Blur_t1038294851, ___blurSpread_3)); }
	inline float get_blurSpread_3() const { return ___blurSpread_3; }
	inline float* get_address_of_blurSpread_3() { return &___blurSpread_3; }
	inline void set_blurSpread_3(float value)
	{
		___blurSpread_3 = value;
	}

	inline static int32_t get_offset_of_blurShader_4() { return static_cast<int32_t>(offsetof(Blur_t1038294851, ___blurShader_4)); }
	inline Shader_t4151988712 * get_blurShader_4() const { return ___blurShader_4; }
	inline Shader_t4151988712 ** get_address_of_blurShader_4() { return &___blurShader_4; }
	inline void set_blurShader_4(Shader_t4151988712 * value)
	{
		___blurShader_4 = value;
		Il2CppCodeGenWriteBarrier((&___blurShader_4), value);
	}
};

struct Blur_t1038294851_StaticFields
{
public:
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Blur::m_Material
	Material_t340375123 * ___m_Material_5;

public:
	inline static int32_t get_offset_of_m_Material_5() { return static_cast<int32_t>(offsetof(Blur_t1038294851_StaticFields, ___m_Material_5)); }
	inline Material_t340375123 * get_m_Material_5() const { return ___m_Material_5; }
	inline Material_t340375123 ** get_address_of_m_Material_5() { return &___m_Material_5; }
	inline void set_m_Material_5(Material_t340375123 * value)
	{
		___m_Material_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLUR_T1038294851_H
#ifndef TOUCHPAD_T539039257_H
#define TOUCHPAD_T539039257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TouchPad
struct  TouchPad_t539039257  : public MonoBehaviour_t3962482529
{
public:
	// UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption UnityStandardAssets.CrossPlatformInput.TouchPad::axesToUse
	int32_t ___axesToUse_2;
	// UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle UnityStandardAssets.CrossPlatformInput.TouchPad::controlStyle
	int32_t ___controlStyle_3;
	// System.String UnityStandardAssets.CrossPlatformInput.TouchPad::horizontalAxisName
	String_t* ___horizontalAxisName_4;
	// System.String UnityStandardAssets.CrossPlatformInput.TouchPad::verticalAxisName
	String_t* ___verticalAxisName_5;
	// System.Single UnityStandardAssets.CrossPlatformInput.TouchPad::Xsensitivity
	float ___Xsensitivity_6;
	// System.Single UnityStandardAssets.CrossPlatformInput.TouchPad::Ysensitivity
	float ___Ysensitivity_7;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_StartPos
	Vector3_t3722313464  ___m_StartPos_8;
	// UnityEngine.Vector2 UnityStandardAssets.CrossPlatformInput.TouchPad::m_PreviousDelta
	Vector2_t2156229523  ___m_PreviousDelta_9;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_JoytickOutput
	Vector3_t3722313464  ___m_JoytickOutput_10;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_UseX
	bool ___m_UseX_11;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_UseY
	bool ___m_UseY_12;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TouchPad::m_HorizontalVirtualAxis
	VirtualAxis_t4087348596 * ___m_HorizontalVirtualAxis_13;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TouchPad::m_VerticalVirtualAxis
	VirtualAxis_t4087348596 * ___m_VerticalVirtualAxis_14;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_Dragging
	bool ___m_Dragging_15;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad::m_Id
	int32_t ___m_Id_16;
	// UnityEngine.Vector2 UnityStandardAssets.CrossPlatformInput.TouchPad::m_PreviousTouchPos
	Vector2_t2156229523  ___m_PreviousTouchPos_17;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_Center
	Vector3_t3722313464  ___m_Center_18;
	// UnityEngine.UI.Image UnityStandardAssets.CrossPlatformInput.TouchPad::m_Image
	Image_t2670269651 * ___m_Image_19;

public:
	inline static int32_t get_offset_of_axesToUse_2() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___axesToUse_2)); }
	inline int32_t get_axesToUse_2() const { return ___axesToUse_2; }
	inline int32_t* get_address_of_axesToUse_2() { return &___axesToUse_2; }
	inline void set_axesToUse_2(int32_t value)
	{
		___axesToUse_2 = value;
	}

	inline static int32_t get_offset_of_controlStyle_3() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___controlStyle_3)); }
	inline int32_t get_controlStyle_3() const { return ___controlStyle_3; }
	inline int32_t* get_address_of_controlStyle_3() { return &___controlStyle_3; }
	inline void set_controlStyle_3(int32_t value)
	{
		___controlStyle_3 = value;
	}

	inline static int32_t get_offset_of_horizontalAxisName_4() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___horizontalAxisName_4)); }
	inline String_t* get_horizontalAxisName_4() const { return ___horizontalAxisName_4; }
	inline String_t** get_address_of_horizontalAxisName_4() { return &___horizontalAxisName_4; }
	inline void set_horizontalAxisName_4(String_t* value)
	{
		___horizontalAxisName_4 = value;
		Il2CppCodeGenWriteBarrier((&___horizontalAxisName_4), value);
	}

	inline static int32_t get_offset_of_verticalAxisName_5() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___verticalAxisName_5)); }
	inline String_t* get_verticalAxisName_5() const { return ___verticalAxisName_5; }
	inline String_t** get_address_of_verticalAxisName_5() { return &___verticalAxisName_5; }
	inline void set_verticalAxisName_5(String_t* value)
	{
		___verticalAxisName_5 = value;
		Il2CppCodeGenWriteBarrier((&___verticalAxisName_5), value);
	}

	inline static int32_t get_offset_of_Xsensitivity_6() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___Xsensitivity_6)); }
	inline float get_Xsensitivity_6() const { return ___Xsensitivity_6; }
	inline float* get_address_of_Xsensitivity_6() { return &___Xsensitivity_6; }
	inline void set_Xsensitivity_6(float value)
	{
		___Xsensitivity_6 = value;
	}

	inline static int32_t get_offset_of_Ysensitivity_7() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___Ysensitivity_7)); }
	inline float get_Ysensitivity_7() const { return ___Ysensitivity_7; }
	inline float* get_address_of_Ysensitivity_7() { return &___Ysensitivity_7; }
	inline void set_Ysensitivity_7(float value)
	{
		___Ysensitivity_7 = value;
	}

	inline static int32_t get_offset_of_m_StartPos_8() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_StartPos_8)); }
	inline Vector3_t3722313464  get_m_StartPos_8() const { return ___m_StartPos_8; }
	inline Vector3_t3722313464 * get_address_of_m_StartPos_8() { return &___m_StartPos_8; }
	inline void set_m_StartPos_8(Vector3_t3722313464  value)
	{
		___m_StartPos_8 = value;
	}

	inline static int32_t get_offset_of_m_PreviousDelta_9() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_PreviousDelta_9)); }
	inline Vector2_t2156229523  get_m_PreviousDelta_9() const { return ___m_PreviousDelta_9; }
	inline Vector2_t2156229523 * get_address_of_m_PreviousDelta_9() { return &___m_PreviousDelta_9; }
	inline void set_m_PreviousDelta_9(Vector2_t2156229523  value)
	{
		___m_PreviousDelta_9 = value;
	}

	inline static int32_t get_offset_of_m_JoytickOutput_10() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_JoytickOutput_10)); }
	inline Vector3_t3722313464  get_m_JoytickOutput_10() const { return ___m_JoytickOutput_10; }
	inline Vector3_t3722313464 * get_address_of_m_JoytickOutput_10() { return &___m_JoytickOutput_10; }
	inline void set_m_JoytickOutput_10(Vector3_t3722313464  value)
	{
		___m_JoytickOutput_10 = value;
	}

	inline static int32_t get_offset_of_m_UseX_11() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_UseX_11)); }
	inline bool get_m_UseX_11() const { return ___m_UseX_11; }
	inline bool* get_address_of_m_UseX_11() { return &___m_UseX_11; }
	inline void set_m_UseX_11(bool value)
	{
		___m_UseX_11 = value;
	}

	inline static int32_t get_offset_of_m_UseY_12() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_UseY_12)); }
	inline bool get_m_UseY_12() const { return ___m_UseY_12; }
	inline bool* get_address_of_m_UseY_12() { return &___m_UseY_12; }
	inline void set_m_UseY_12(bool value)
	{
		___m_UseY_12 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalVirtualAxis_13() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_HorizontalVirtualAxis_13)); }
	inline VirtualAxis_t4087348596 * get_m_HorizontalVirtualAxis_13() const { return ___m_HorizontalVirtualAxis_13; }
	inline VirtualAxis_t4087348596 ** get_address_of_m_HorizontalVirtualAxis_13() { return &___m_HorizontalVirtualAxis_13; }
	inline void set_m_HorizontalVirtualAxis_13(VirtualAxis_t4087348596 * value)
	{
		___m_HorizontalVirtualAxis_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_HorizontalVirtualAxis_13), value);
	}

	inline static int32_t get_offset_of_m_VerticalVirtualAxis_14() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_VerticalVirtualAxis_14)); }
	inline VirtualAxis_t4087348596 * get_m_VerticalVirtualAxis_14() const { return ___m_VerticalVirtualAxis_14; }
	inline VirtualAxis_t4087348596 ** get_address_of_m_VerticalVirtualAxis_14() { return &___m_VerticalVirtualAxis_14; }
	inline void set_m_VerticalVirtualAxis_14(VirtualAxis_t4087348596 * value)
	{
		___m_VerticalVirtualAxis_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_VerticalVirtualAxis_14), value);
	}

	inline static int32_t get_offset_of_m_Dragging_15() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_Dragging_15)); }
	inline bool get_m_Dragging_15() const { return ___m_Dragging_15; }
	inline bool* get_address_of_m_Dragging_15() { return &___m_Dragging_15; }
	inline void set_m_Dragging_15(bool value)
	{
		___m_Dragging_15 = value;
	}

	inline static int32_t get_offset_of_m_Id_16() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_Id_16)); }
	inline int32_t get_m_Id_16() const { return ___m_Id_16; }
	inline int32_t* get_address_of_m_Id_16() { return &___m_Id_16; }
	inline void set_m_Id_16(int32_t value)
	{
		___m_Id_16 = value;
	}

	inline static int32_t get_offset_of_m_PreviousTouchPos_17() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_PreviousTouchPos_17)); }
	inline Vector2_t2156229523  get_m_PreviousTouchPos_17() const { return ___m_PreviousTouchPos_17; }
	inline Vector2_t2156229523 * get_address_of_m_PreviousTouchPos_17() { return &___m_PreviousTouchPos_17; }
	inline void set_m_PreviousTouchPos_17(Vector2_t2156229523  value)
	{
		___m_PreviousTouchPos_17 = value;
	}

	inline static int32_t get_offset_of_m_Center_18() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_Center_18)); }
	inline Vector3_t3722313464  get_m_Center_18() const { return ___m_Center_18; }
	inline Vector3_t3722313464 * get_address_of_m_Center_18() { return &___m_Center_18; }
	inline void set_m_Center_18(Vector3_t3722313464  value)
	{
		___m_Center_18 = value;
	}

	inline static int32_t get_offset_of_m_Image_19() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_Image_19)); }
	inline Image_t2670269651 * get_m_Image_19() const { return ___m_Image_19; }
	inline Image_t2670269651 ** get_address_of_m_Image_19() { return &___m_Image_19; }
	inline void set_m_Image_19(Image_t2670269651 * value)
	{
		___m_Image_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHPAD_T539039257_H
#ifndef NOISEANDSCRATCHES_T1457296845_H
#define NOISEANDSCRATCHES_T1457296845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.NoiseAndScratches
struct  NoiseAndScratches_t1457296845  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean UnityStandardAssets.ImageEffects.NoiseAndScratches::monochrome
	bool ___monochrome_2;
	// System.Boolean UnityStandardAssets.ImageEffects.NoiseAndScratches::rgbFallback
	bool ___rgbFallback_3;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::grainIntensityMin
	float ___grainIntensityMin_4;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::grainIntensityMax
	float ___grainIntensityMax_5;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::grainSize
	float ___grainSize_6;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchIntensityMin
	float ___scratchIntensityMin_7;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchIntensityMax
	float ___scratchIntensityMax_8;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchFPS
	float ___scratchFPS_9;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchJitter
	float ___scratchJitter_10;
	// UnityEngine.Texture UnityStandardAssets.ImageEffects.NoiseAndScratches::grainTexture
	Texture_t3661962703 * ___grainTexture_11;
	// UnityEngine.Texture UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchTexture
	Texture_t3661962703 * ___scratchTexture_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.NoiseAndScratches::shaderRGB
	Shader_t4151988712 * ___shaderRGB_13;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.NoiseAndScratches::shaderYUV
	Shader_t4151988712 * ___shaderYUV_14;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.NoiseAndScratches::m_MaterialRGB
	Material_t340375123 * ___m_MaterialRGB_15;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.NoiseAndScratches::m_MaterialYUV
	Material_t340375123 * ___m_MaterialYUV_16;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchTimeLeft
	float ___scratchTimeLeft_17;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchX
	float ___scratchX_18;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchY
	float ___scratchY_19;

public:
	inline static int32_t get_offset_of_monochrome_2() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t1457296845, ___monochrome_2)); }
	inline bool get_monochrome_2() const { return ___monochrome_2; }
	inline bool* get_address_of_monochrome_2() { return &___monochrome_2; }
	inline void set_monochrome_2(bool value)
	{
		___monochrome_2 = value;
	}

	inline static int32_t get_offset_of_rgbFallback_3() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t1457296845, ___rgbFallback_3)); }
	inline bool get_rgbFallback_3() const { return ___rgbFallback_3; }
	inline bool* get_address_of_rgbFallback_3() { return &___rgbFallback_3; }
	inline void set_rgbFallback_3(bool value)
	{
		___rgbFallback_3 = value;
	}

	inline static int32_t get_offset_of_grainIntensityMin_4() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t1457296845, ___grainIntensityMin_4)); }
	inline float get_grainIntensityMin_4() const { return ___grainIntensityMin_4; }
	inline float* get_address_of_grainIntensityMin_4() { return &___grainIntensityMin_4; }
	inline void set_grainIntensityMin_4(float value)
	{
		___grainIntensityMin_4 = value;
	}

	inline static int32_t get_offset_of_grainIntensityMax_5() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t1457296845, ___grainIntensityMax_5)); }
	inline float get_grainIntensityMax_5() const { return ___grainIntensityMax_5; }
	inline float* get_address_of_grainIntensityMax_5() { return &___grainIntensityMax_5; }
	inline void set_grainIntensityMax_5(float value)
	{
		___grainIntensityMax_5 = value;
	}

	inline static int32_t get_offset_of_grainSize_6() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t1457296845, ___grainSize_6)); }
	inline float get_grainSize_6() const { return ___grainSize_6; }
	inline float* get_address_of_grainSize_6() { return &___grainSize_6; }
	inline void set_grainSize_6(float value)
	{
		___grainSize_6 = value;
	}

	inline static int32_t get_offset_of_scratchIntensityMin_7() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t1457296845, ___scratchIntensityMin_7)); }
	inline float get_scratchIntensityMin_7() const { return ___scratchIntensityMin_7; }
	inline float* get_address_of_scratchIntensityMin_7() { return &___scratchIntensityMin_7; }
	inline void set_scratchIntensityMin_7(float value)
	{
		___scratchIntensityMin_7 = value;
	}

	inline static int32_t get_offset_of_scratchIntensityMax_8() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t1457296845, ___scratchIntensityMax_8)); }
	inline float get_scratchIntensityMax_8() const { return ___scratchIntensityMax_8; }
	inline float* get_address_of_scratchIntensityMax_8() { return &___scratchIntensityMax_8; }
	inline void set_scratchIntensityMax_8(float value)
	{
		___scratchIntensityMax_8 = value;
	}

	inline static int32_t get_offset_of_scratchFPS_9() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t1457296845, ___scratchFPS_9)); }
	inline float get_scratchFPS_9() const { return ___scratchFPS_9; }
	inline float* get_address_of_scratchFPS_9() { return &___scratchFPS_9; }
	inline void set_scratchFPS_9(float value)
	{
		___scratchFPS_9 = value;
	}

	inline static int32_t get_offset_of_scratchJitter_10() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t1457296845, ___scratchJitter_10)); }
	inline float get_scratchJitter_10() const { return ___scratchJitter_10; }
	inline float* get_address_of_scratchJitter_10() { return &___scratchJitter_10; }
	inline void set_scratchJitter_10(float value)
	{
		___scratchJitter_10 = value;
	}

	inline static int32_t get_offset_of_grainTexture_11() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t1457296845, ___grainTexture_11)); }
	inline Texture_t3661962703 * get_grainTexture_11() const { return ___grainTexture_11; }
	inline Texture_t3661962703 ** get_address_of_grainTexture_11() { return &___grainTexture_11; }
	inline void set_grainTexture_11(Texture_t3661962703 * value)
	{
		___grainTexture_11 = value;
		Il2CppCodeGenWriteBarrier((&___grainTexture_11), value);
	}

	inline static int32_t get_offset_of_scratchTexture_12() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t1457296845, ___scratchTexture_12)); }
	inline Texture_t3661962703 * get_scratchTexture_12() const { return ___scratchTexture_12; }
	inline Texture_t3661962703 ** get_address_of_scratchTexture_12() { return &___scratchTexture_12; }
	inline void set_scratchTexture_12(Texture_t3661962703 * value)
	{
		___scratchTexture_12 = value;
		Il2CppCodeGenWriteBarrier((&___scratchTexture_12), value);
	}

	inline static int32_t get_offset_of_shaderRGB_13() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t1457296845, ___shaderRGB_13)); }
	inline Shader_t4151988712 * get_shaderRGB_13() const { return ___shaderRGB_13; }
	inline Shader_t4151988712 ** get_address_of_shaderRGB_13() { return &___shaderRGB_13; }
	inline void set_shaderRGB_13(Shader_t4151988712 * value)
	{
		___shaderRGB_13 = value;
		Il2CppCodeGenWriteBarrier((&___shaderRGB_13), value);
	}

	inline static int32_t get_offset_of_shaderYUV_14() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t1457296845, ___shaderYUV_14)); }
	inline Shader_t4151988712 * get_shaderYUV_14() const { return ___shaderYUV_14; }
	inline Shader_t4151988712 ** get_address_of_shaderYUV_14() { return &___shaderYUV_14; }
	inline void set_shaderYUV_14(Shader_t4151988712 * value)
	{
		___shaderYUV_14 = value;
		Il2CppCodeGenWriteBarrier((&___shaderYUV_14), value);
	}

	inline static int32_t get_offset_of_m_MaterialRGB_15() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t1457296845, ___m_MaterialRGB_15)); }
	inline Material_t340375123 * get_m_MaterialRGB_15() const { return ___m_MaterialRGB_15; }
	inline Material_t340375123 ** get_address_of_m_MaterialRGB_15() { return &___m_MaterialRGB_15; }
	inline void set_m_MaterialRGB_15(Material_t340375123 * value)
	{
		___m_MaterialRGB_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaterialRGB_15), value);
	}

	inline static int32_t get_offset_of_m_MaterialYUV_16() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t1457296845, ___m_MaterialYUV_16)); }
	inline Material_t340375123 * get_m_MaterialYUV_16() const { return ___m_MaterialYUV_16; }
	inline Material_t340375123 ** get_address_of_m_MaterialYUV_16() { return &___m_MaterialYUV_16; }
	inline void set_m_MaterialYUV_16(Material_t340375123 * value)
	{
		___m_MaterialYUV_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaterialYUV_16), value);
	}

	inline static int32_t get_offset_of_scratchTimeLeft_17() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t1457296845, ___scratchTimeLeft_17)); }
	inline float get_scratchTimeLeft_17() const { return ___scratchTimeLeft_17; }
	inline float* get_address_of_scratchTimeLeft_17() { return &___scratchTimeLeft_17; }
	inline void set_scratchTimeLeft_17(float value)
	{
		___scratchTimeLeft_17 = value;
	}

	inline static int32_t get_offset_of_scratchX_18() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t1457296845, ___scratchX_18)); }
	inline float get_scratchX_18() const { return ___scratchX_18; }
	inline float* get_address_of_scratchX_18() { return &___scratchX_18; }
	inline void set_scratchX_18(float value)
	{
		___scratchX_18 = value;
	}

	inline static int32_t get_offset_of_scratchY_19() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t1457296845, ___scratchY_19)); }
	inline float get_scratchY_19() const { return ___scratchY_19; }
	inline float* get_address_of_scratchY_19() { return &___scratchY_19; }
	inline void set_scratchY_19(float value)
	{
		___scratchY_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOISEANDSCRATCHES_T1457296845_H
#ifndef INPUTAXISSCROLLBAR_T457958266_H
#define INPUTAXISSCROLLBAR_T457958266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar
struct  InputAxisScrollbar_t457958266  : public MonoBehaviour_t3962482529
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::axis
	String_t* ___axis_2;

public:
	inline static int32_t get_offset_of_axis_2() { return static_cast<int32_t>(offsetof(InputAxisScrollbar_t457958266, ___axis_2)); }
	inline String_t* get_axis_2() const { return ___axis_2; }
	inline String_t** get_address_of_axis_2() { return &___axis_2; }
	inline void set_axis_2(String_t* value)
	{
		___axis_2 = value;
		Il2CppCodeGenWriteBarrier((&___axis_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTAXISSCROLLBAR_T457958266_H
#ifndef CONTRASTSTRETCH_T3424449263_H
#define CONTRASTSTRETCH_T3424449263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ContrastStretch
struct  ContrastStretch_t3424449263  : public MonoBehaviour_t3962482529
{
public:
	// System.Single UnityStandardAssets.ImageEffects.ContrastStretch::adaptationSpeed
	float ___adaptationSpeed_2;
	// System.Single UnityStandardAssets.ImageEffects.ContrastStretch::limitMinimum
	float ___limitMinimum_3;
	// System.Single UnityStandardAssets.ImageEffects.ContrastStretch::limitMaximum
	float ___limitMaximum_4;
	// UnityEngine.RenderTexture[] UnityStandardAssets.ImageEffects.ContrastStretch::adaptRenderTex
	RenderTextureU5BU5D_t4111643188* ___adaptRenderTex_5;
	// System.Int32 UnityStandardAssets.ImageEffects.ContrastStretch::curAdaptIndex
	int32_t ___curAdaptIndex_6;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastStretch::shaderLum
	Shader_t4151988712 * ___shaderLum_7;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::m_materialLum
	Material_t340375123 * ___m_materialLum_8;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastStretch::shaderReduce
	Shader_t4151988712 * ___shaderReduce_9;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::m_materialReduce
	Material_t340375123 * ___m_materialReduce_10;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastStretch::shaderAdapt
	Shader_t4151988712 * ___shaderAdapt_11;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::m_materialAdapt
	Material_t340375123 * ___m_materialAdapt_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastStretch::shaderApply
	Shader_t4151988712 * ___shaderApply_13;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::m_materialApply
	Material_t340375123 * ___m_materialApply_14;

public:
	inline static int32_t get_offset_of_adaptationSpeed_2() { return static_cast<int32_t>(offsetof(ContrastStretch_t3424449263, ___adaptationSpeed_2)); }
	inline float get_adaptationSpeed_2() const { return ___adaptationSpeed_2; }
	inline float* get_address_of_adaptationSpeed_2() { return &___adaptationSpeed_2; }
	inline void set_adaptationSpeed_2(float value)
	{
		___adaptationSpeed_2 = value;
	}

	inline static int32_t get_offset_of_limitMinimum_3() { return static_cast<int32_t>(offsetof(ContrastStretch_t3424449263, ___limitMinimum_3)); }
	inline float get_limitMinimum_3() const { return ___limitMinimum_3; }
	inline float* get_address_of_limitMinimum_3() { return &___limitMinimum_3; }
	inline void set_limitMinimum_3(float value)
	{
		___limitMinimum_3 = value;
	}

	inline static int32_t get_offset_of_limitMaximum_4() { return static_cast<int32_t>(offsetof(ContrastStretch_t3424449263, ___limitMaximum_4)); }
	inline float get_limitMaximum_4() const { return ___limitMaximum_4; }
	inline float* get_address_of_limitMaximum_4() { return &___limitMaximum_4; }
	inline void set_limitMaximum_4(float value)
	{
		___limitMaximum_4 = value;
	}

	inline static int32_t get_offset_of_adaptRenderTex_5() { return static_cast<int32_t>(offsetof(ContrastStretch_t3424449263, ___adaptRenderTex_5)); }
	inline RenderTextureU5BU5D_t4111643188* get_adaptRenderTex_5() const { return ___adaptRenderTex_5; }
	inline RenderTextureU5BU5D_t4111643188** get_address_of_adaptRenderTex_5() { return &___adaptRenderTex_5; }
	inline void set_adaptRenderTex_5(RenderTextureU5BU5D_t4111643188* value)
	{
		___adaptRenderTex_5 = value;
		Il2CppCodeGenWriteBarrier((&___adaptRenderTex_5), value);
	}

	inline static int32_t get_offset_of_curAdaptIndex_6() { return static_cast<int32_t>(offsetof(ContrastStretch_t3424449263, ___curAdaptIndex_6)); }
	inline int32_t get_curAdaptIndex_6() const { return ___curAdaptIndex_6; }
	inline int32_t* get_address_of_curAdaptIndex_6() { return &___curAdaptIndex_6; }
	inline void set_curAdaptIndex_6(int32_t value)
	{
		___curAdaptIndex_6 = value;
	}

	inline static int32_t get_offset_of_shaderLum_7() { return static_cast<int32_t>(offsetof(ContrastStretch_t3424449263, ___shaderLum_7)); }
	inline Shader_t4151988712 * get_shaderLum_7() const { return ___shaderLum_7; }
	inline Shader_t4151988712 ** get_address_of_shaderLum_7() { return &___shaderLum_7; }
	inline void set_shaderLum_7(Shader_t4151988712 * value)
	{
		___shaderLum_7 = value;
		Il2CppCodeGenWriteBarrier((&___shaderLum_7), value);
	}

	inline static int32_t get_offset_of_m_materialLum_8() { return static_cast<int32_t>(offsetof(ContrastStretch_t3424449263, ___m_materialLum_8)); }
	inline Material_t340375123 * get_m_materialLum_8() const { return ___m_materialLum_8; }
	inline Material_t340375123 ** get_address_of_m_materialLum_8() { return &___m_materialLum_8; }
	inline void set_m_materialLum_8(Material_t340375123 * value)
	{
		___m_materialLum_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_materialLum_8), value);
	}

	inline static int32_t get_offset_of_shaderReduce_9() { return static_cast<int32_t>(offsetof(ContrastStretch_t3424449263, ___shaderReduce_9)); }
	inline Shader_t4151988712 * get_shaderReduce_9() const { return ___shaderReduce_9; }
	inline Shader_t4151988712 ** get_address_of_shaderReduce_9() { return &___shaderReduce_9; }
	inline void set_shaderReduce_9(Shader_t4151988712 * value)
	{
		___shaderReduce_9 = value;
		Il2CppCodeGenWriteBarrier((&___shaderReduce_9), value);
	}

	inline static int32_t get_offset_of_m_materialReduce_10() { return static_cast<int32_t>(offsetof(ContrastStretch_t3424449263, ___m_materialReduce_10)); }
	inline Material_t340375123 * get_m_materialReduce_10() const { return ___m_materialReduce_10; }
	inline Material_t340375123 ** get_address_of_m_materialReduce_10() { return &___m_materialReduce_10; }
	inline void set_m_materialReduce_10(Material_t340375123 * value)
	{
		___m_materialReduce_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_materialReduce_10), value);
	}

	inline static int32_t get_offset_of_shaderAdapt_11() { return static_cast<int32_t>(offsetof(ContrastStretch_t3424449263, ___shaderAdapt_11)); }
	inline Shader_t4151988712 * get_shaderAdapt_11() const { return ___shaderAdapt_11; }
	inline Shader_t4151988712 ** get_address_of_shaderAdapt_11() { return &___shaderAdapt_11; }
	inline void set_shaderAdapt_11(Shader_t4151988712 * value)
	{
		___shaderAdapt_11 = value;
		Il2CppCodeGenWriteBarrier((&___shaderAdapt_11), value);
	}

	inline static int32_t get_offset_of_m_materialAdapt_12() { return static_cast<int32_t>(offsetof(ContrastStretch_t3424449263, ___m_materialAdapt_12)); }
	inline Material_t340375123 * get_m_materialAdapt_12() const { return ___m_materialAdapt_12; }
	inline Material_t340375123 ** get_address_of_m_materialAdapt_12() { return &___m_materialAdapt_12; }
	inline void set_m_materialAdapt_12(Material_t340375123 * value)
	{
		___m_materialAdapt_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_materialAdapt_12), value);
	}

	inline static int32_t get_offset_of_shaderApply_13() { return static_cast<int32_t>(offsetof(ContrastStretch_t3424449263, ___shaderApply_13)); }
	inline Shader_t4151988712 * get_shaderApply_13() const { return ___shaderApply_13; }
	inline Shader_t4151988712 ** get_address_of_shaderApply_13() { return &___shaderApply_13; }
	inline void set_shaderApply_13(Shader_t4151988712 * value)
	{
		___shaderApply_13 = value;
		Il2CppCodeGenWriteBarrier((&___shaderApply_13), value);
	}

	inline static int32_t get_offset_of_m_materialApply_14() { return static_cast<int32_t>(offsetof(ContrastStretch_t3424449263, ___m_materialApply_14)); }
	inline Material_t340375123 * get_m_materialApply_14() const { return ___m_materialApply_14; }
	inline Material_t340375123 ** get_address_of_m_materialApply_14() { return &___m_materialApply_14; }
	inline void set_m_materialApply_14(Material_t340375123 * value)
	{
		___m_materialApply_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_materialApply_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTRASTSTRETCH_T3424449263_H
#ifndef TILTINPUT_T1639936653_H
#define TILTINPUT_T1639936653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TiltInput
struct  TiltInput_t1639936653  : public MonoBehaviour_t3962482529
{
public:
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping UnityStandardAssets.CrossPlatformInput.TiltInput::mapping
	AxisMapping_t3982445645 * ___mapping_2;
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions UnityStandardAssets.CrossPlatformInput.TiltInput::tiltAroundAxis
	int32_t ___tiltAroundAxis_3;
	// System.Single UnityStandardAssets.CrossPlatformInput.TiltInput::fullTiltAngle
	float ___fullTiltAngle_4;
	// System.Single UnityStandardAssets.CrossPlatformInput.TiltInput::centreAngleOffset
	float ___centreAngleOffset_5;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TiltInput::m_SteerAxis
	VirtualAxis_t4087348596 * ___m_SteerAxis_6;

public:
	inline static int32_t get_offset_of_mapping_2() { return static_cast<int32_t>(offsetof(TiltInput_t1639936653, ___mapping_2)); }
	inline AxisMapping_t3982445645 * get_mapping_2() const { return ___mapping_2; }
	inline AxisMapping_t3982445645 ** get_address_of_mapping_2() { return &___mapping_2; }
	inline void set_mapping_2(AxisMapping_t3982445645 * value)
	{
		___mapping_2 = value;
		Il2CppCodeGenWriteBarrier((&___mapping_2), value);
	}

	inline static int32_t get_offset_of_tiltAroundAxis_3() { return static_cast<int32_t>(offsetof(TiltInput_t1639936653, ___tiltAroundAxis_3)); }
	inline int32_t get_tiltAroundAxis_3() const { return ___tiltAroundAxis_3; }
	inline int32_t* get_address_of_tiltAroundAxis_3() { return &___tiltAroundAxis_3; }
	inline void set_tiltAroundAxis_3(int32_t value)
	{
		___tiltAroundAxis_3 = value;
	}

	inline static int32_t get_offset_of_fullTiltAngle_4() { return static_cast<int32_t>(offsetof(TiltInput_t1639936653, ___fullTiltAngle_4)); }
	inline float get_fullTiltAngle_4() const { return ___fullTiltAngle_4; }
	inline float* get_address_of_fullTiltAngle_4() { return &___fullTiltAngle_4; }
	inline void set_fullTiltAngle_4(float value)
	{
		___fullTiltAngle_4 = value;
	}

	inline static int32_t get_offset_of_centreAngleOffset_5() { return static_cast<int32_t>(offsetof(TiltInput_t1639936653, ___centreAngleOffset_5)); }
	inline float get_centreAngleOffset_5() const { return ___centreAngleOffset_5; }
	inline float* get_address_of_centreAngleOffset_5() { return &___centreAngleOffset_5; }
	inline void set_centreAngleOffset_5(float value)
	{
		___centreAngleOffset_5 = value;
	}

	inline static int32_t get_offset_of_m_SteerAxis_6() { return static_cast<int32_t>(offsetof(TiltInput_t1639936653, ___m_SteerAxis_6)); }
	inline VirtualAxis_t4087348596 * get_m_SteerAxis_6() const { return ___m_SteerAxis_6; }
	inline VirtualAxis_t4087348596 ** get_address_of_m_SteerAxis_6() { return &___m_SteerAxis_6; }
	inline void set_m_SteerAxis_6(VirtualAxis_t4087348596 * value)
	{
		___m_SteerAxis_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_SteerAxis_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILTINPUT_T1639936653_H
#ifndef POSTEFFECTSHELPER_T675066462_H
#define POSTEFFECTSHELPER_T675066462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.PostEffectsHelper
struct  PostEffectsHelper_t675066462  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTEFFECTSHELPER_T675066462_H
#ifndef IMAGEEFFECTBASE_T2026006575_H
#define IMAGEEFFECTBASE_T2026006575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ImageEffectBase
struct  ImageEffectBase_t2026006575  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ImageEffectBase::shader
	Shader_t4151988712 * ___shader_2;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ImageEffectBase::m_Material
	Material_t340375123 * ___m_Material_3;

public:
	inline static int32_t get_offset_of_shader_2() { return static_cast<int32_t>(offsetof(ImageEffectBase_t2026006575, ___shader_2)); }
	inline Shader_t4151988712 * get_shader_2() const { return ___shader_2; }
	inline Shader_t4151988712 ** get_address_of_shader_2() { return &___shader_2; }
	inline void set_shader_2(Shader_t4151988712 * value)
	{
		___shader_2 = value;
		Il2CppCodeGenWriteBarrier((&___shader_2), value);
	}

	inline static int32_t get_offset_of_m_Material_3() { return static_cast<int32_t>(offsetof(ImageEffectBase_t2026006575, ___m_Material_3)); }
	inline Material_t340375123 * get_m_Material_3() const { return ___m_Material_3; }
	inline Material_t340375123 ** get_address_of_m_Material_3() { return &___m_Material_3; }
	inline void set_m_Material_3(Material_t340375123 * value)
	{
		___m_Material_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGEEFFECTBASE_T2026006575_H
#ifndef PROTECTCAMERAFROMWALLCLIP_T303409715_H
#define PROTECTCAMERAFROMWALLCLIP_T303409715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.ProtectCameraFromWallClip
struct  ProtectCameraFromWallClip_t303409715  : public MonoBehaviour_t3962482529
{
public:
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::clipMoveTime
	float ___clipMoveTime_2;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::returnTime
	float ___returnTime_3;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::sphereCastRadius
	float ___sphereCastRadius_4;
	// System.Boolean UnityStandardAssets.Cameras.ProtectCameraFromWallClip::visualiseInEditor
	bool ___visualiseInEditor_5;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::closestDistance
	float ___closestDistance_6;
	// System.Boolean UnityStandardAssets.Cameras.ProtectCameraFromWallClip::<protecting>k__BackingField
	bool ___U3CprotectingU3Ek__BackingField_7;
	// System.String UnityStandardAssets.Cameras.ProtectCameraFromWallClip::dontClipTag
	String_t* ___dontClipTag_8;
	// UnityEngine.Transform UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_Cam
	Transform_t3600365921 * ___m_Cam_9;
	// UnityEngine.Transform UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_Pivot
	Transform_t3600365921 * ___m_Pivot_10;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_OriginalDist
	float ___m_OriginalDist_11;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_MoveVelocity
	float ___m_MoveVelocity_12;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_CurrentDist
	float ___m_CurrentDist_13;
	// UnityEngine.Ray UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_Ray
	Ray_t3785851493  ___m_Ray_14;
	// UnityEngine.RaycastHit[] UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_Hits
	RaycastHitU5BU5D_t1690781147* ___m_Hits_15;
	// UnityStandardAssets.Cameras.ProtectCameraFromWallClip/RayHitComparer UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_RayHitComparer
	RayHitComparer_t2205555946 * ___m_RayHitComparer_16;

public:
	inline static int32_t get_offset_of_clipMoveTime_2() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___clipMoveTime_2)); }
	inline float get_clipMoveTime_2() const { return ___clipMoveTime_2; }
	inline float* get_address_of_clipMoveTime_2() { return &___clipMoveTime_2; }
	inline void set_clipMoveTime_2(float value)
	{
		___clipMoveTime_2 = value;
	}

	inline static int32_t get_offset_of_returnTime_3() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___returnTime_3)); }
	inline float get_returnTime_3() const { return ___returnTime_3; }
	inline float* get_address_of_returnTime_3() { return &___returnTime_3; }
	inline void set_returnTime_3(float value)
	{
		___returnTime_3 = value;
	}

	inline static int32_t get_offset_of_sphereCastRadius_4() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___sphereCastRadius_4)); }
	inline float get_sphereCastRadius_4() const { return ___sphereCastRadius_4; }
	inline float* get_address_of_sphereCastRadius_4() { return &___sphereCastRadius_4; }
	inline void set_sphereCastRadius_4(float value)
	{
		___sphereCastRadius_4 = value;
	}

	inline static int32_t get_offset_of_visualiseInEditor_5() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___visualiseInEditor_5)); }
	inline bool get_visualiseInEditor_5() const { return ___visualiseInEditor_5; }
	inline bool* get_address_of_visualiseInEditor_5() { return &___visualiseInEditor_5; }
	inline void set_visualiseInEditor_5(bool value)
	{
		___visualiseInEditor_5 = value;
	}

	inline static int32_t get_offset_of_closestDistance_6() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___closestDistance_6)); }
	inline float get_closestDistance_6() const { return ___closestDistance_6; }
	inline float* get_address_of_closestDistance_6() { return &___closestDistance_6; }
	inline void set_closestDistance_6(float value)
	{
		___closestDistance_6 = value;
	}

	inline static int32_t get_offset_of_U3CprotectingU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___U3CprotectingU3Ek__BackingField_7)); }
	inline bool get_U3CprotectingU3Ek__BackingField_7() const { return ___U3CprotectingU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CprotectingU3Ek__BackingField_7() { return &___U3CprotectingU3Ek__BackingField_7; }
	inline void set_U3CprotectingU3Ek__BackingField_7(bool value)
	{
		___U3CprotectingU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_dontClipTag_8() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___dontClipTag_8)); }
	inline String_t* get_dontClipTag_8() const { return ___dontClipTag_8; }
	inline String_t** get_address_of_dontClipTag_8() { return &___dontClipTag_8; }
	inline void set_dontClipTag_8(String_t* value)
	{
		___dontClipTag_8 = value;
		Il2CppCodeGenWriteBarrier((&___dontClipTag_8), value);
	}

	inline static int32_t get_offset_of_m_Cam_9() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___m_Cam_9)); }
	inline Transform_t3600365921 * get_m_Cam_9() const { return ___m_Cam_9; }
	inline Transform_t3600365921 ** get_address_of_m_Cam_9() { return &___m_Cam_9; }
	inline void set_m_Cam_9(Transform_t3600365921 * value)
	{
		___m_Cam_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Cam_9), value);
	}

	inline static int32_t get_offset_of_m_Pivot_10() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___m_Pivot_10)); }
	inline Transform_t3600365921 * get_m_Pivot_10() const { return ___m_Pivot_10; }
	inline Transform_t3600365921 ** get_address_of_m_Pivot_10() { return &___m_Pivot_10; }
	inline void set_m_Pivot_10(Transform_t3600365921 * value)
	{
		___m_Pivot_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Pivot_10), value);
	}

	inline static int32_t get_offset_of_m_OriginalDist_11() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___m_OriginalDist_11)); }
	inline float get_m_OriginalDist_11() const { return ___m_OriginalDist_11; }
	inline float* get_address_of_m_OriginalDist_11() { return &___m_OriginalDist_11; }
	inline void set_m_OriginalDist_11(float value)
	{
		___m_OriginalDist_11 = value;
	}

	inline static int32_t get_offset_of_m_MoveVelocity_12() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___m_MoveVelocity_12)); }
	inline float get_m_MoveVelocity_12() const { return ___m_MoveVelocity_12; }
	inline float* get_address_of_m_MoveVelocity_12() { return &___m_MoveVelocity_12; }
	inline void set_m_MoveVelocity_12(float value)
	{
		___m_MoveVelocity_12 = value;
	}

	inline static int32_t get_offset_of_m_CurrentDist_13() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___m_CurrentDist_13)); }
	inline float get_m_CurrentDist_13() const { return ___m_CurrentDist_13; }
	inline float* get_address_of_m_CurrentDist_13() { return &___m_CurrentDist_13; }
	inline void set_m_CurrentDist_13(float value)
	{
		___m_CurrentDist_13 = value;
	}

	inline static int32_t get_offset_of_m_Ray_14() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___m_Ray_14)); }
	inline Ray_t3785851493  get_m_Ray_14() const { return ___m_Ray_14; }
	inline Ray_t3785851493 * get_address_of_m_Ray_14() { return &___m_Ray_14; }
	inline void set_m_Ray_14(Ray_t3785851493  value)
	{
		___m_Ray_14 = value;
	}

	inline static int32_t get_offset_of_m_Hits_15() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___m_Hits_15)); }
	inline RaycastHitU5BU5D_t1690781147* get_m_Hits_15() const { return ___m_Hits_15; }
	inline RaycastHitU5BU5D_t1690781147** get_address_of_m_Hits_15() { return &___m_Hits_15; }
	inline void set_m_Hits_15(RaycastHitU5BU5D_t1690781147* value)
	{
		___m_Hits_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_Hits_15), value);
	}

	inline static int32_t get_offset_of_m_RayHitComparer_16() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___m_RayHitComparer_16)); }
	inline RayHitComparer_t2205555946 * get_m_RayHitComparer_16() const { return ___m_RayHitComparer_16; }
	inline RayHitComparer_t2205555946 ** get_address_of_m_RayHitComparer_16() { return &___m_RayHitComparer_16; }
	inline void set_m_RayHitComparer_16(RayHitComparer_t2205555946 * value)
	{
		___m_RayHitComparer_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_RayHitComparer_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROTECTCAMERAFROMWALLCLIP_T303409715_H
#ifndef JOYSTICK_T2204371675_H
#define JOYSTICK_T2204371675_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.Joystick
struct  Joystick_t2204371675  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.Joystick::MovementRange
	int32_t ___MovementRange_2;
	// UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption UnityStandardAssets.CrossPlatformInput.Joystick::axesToUse
	int32_t ___axesToUse_3;
	// System.String UnityStandardAssets.CrossPlatformInput.Joystick::horizontalAxisName
	String_t* ___horizontalAxisName_4;
	// System.String UnityStandardAssets.CrossPlatformInput.Joystick::verticalAxisName
	String_t* ___verticalAxisName_5;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.Joystick::m_StartPos
	Vector3_t3722313464  ___m_StartPos_6;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::m_UseX
	bool ___m_UseX_7;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::m_UseY
	bool ___m_UseY_8;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.Joystick::m_HorizontalVirtualAxis
	VirtualAxis_t4087348596 * ___m_HorizontalVirtualAxis_9;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.Joystick::m_VerticalVirtualAxis
	VirtualAxis_t4087348596 * ___m_VerticalVirtualAxis_10;

public:
	inline static int32_t get_offset_of_MovementRange_2() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___MovementRange_2)); }
	inline int32_t get_MovementRange_2() const { return ___MovementRange_2; }
	inline int32_t* get_address_of_MovementRange_2() { return &___MovementRange_2; }
	inline void set_MovementRange_2(int32_t value)
	{
		___MovementRange_2 = value;
	}

	inline static int32_t get_offset_of_axesToUse_3() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___axesToUse_3)); }
	inline int32_t get_axesToUse_3() const { return ___axesToUse_3; }
	inline int32_t* get_address_of_axesToUse_3() { return &___axesToUse_3; }
	inline void set_axesToUse_3(int32_t value)
	{
		___axesToUse_3 = value;
	}

	inline static int32_t get_offset_of_horizontalAxisName_4() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___horizontalAxisName_4)); }
	inline String_t* get_horizontalAxisName_4() const { return ___horizontalAxisName_4; }
	inline String_t** get_address_of_horizontalAxisName_4() { return &___horizontalAxisName_4; }
	inline void set_horizontalAxisName_4(String_t* value)
	{
		___horizontalAxisName_4 = value;
		Il2CppCodeGenWriteBarrier((&___horizontalAxisName_4), value);
	}

	inline static int32_t get_offset_of_verticalAxisName_5() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___verticalAxisName_5)); }
	inline String_t* get_verticalAxisName_5() const { return ___verticalAxisName_5; }
	inline String_t** get_address_of_verticalAxisName_5() { return &___verticalAxisName_5; }
	inline void set_verticalAxisName_5(String_t* value)
	{
		___verticalAxisName_5 = value;
		Il2CppCodeGenWriteBarrier((&___verticalAxisName_5), value);
	}

	inline static int32_t get_offset_of_m_StartPos_6() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___m_StartPos_6)); }
	inline Vector3_t3722313464  get_m_StartPos_6() const { return ___m_StartPos_6; }
	inline Vector3_t3722313464 * get_address_of_m_StartPos_6() { return &___m_StartPos_6; }
	inline void set_m_StartPos_6(Vector3_t3722313464  value)
	{
		___m_StartPos_6 = value;
	}

	inline static int32_t get_offset_of_m_UseX_7() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___m_UseX_7)); }
	inline bool get_m_UseX_7() const { return ___m_UseX_7; }
	inline bool* get_address_of_m_UseX_7() { return &___m_UseX_7; }
	inline void set_m_UseX_7(bool value)
	{
		___m_UseX_7 = value;
	}

	inline static int32_t get_offset_of_m_UseY_8() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___m_UseY_8)); }
	inline bool get_m_UseY_8() const { return ___m_UseY_8; }
	inline bool* get_address_of_m_UseY_8() { return &___m_UseY_8; }
	inline void set_m_UseY_8(bool value)
	{
		___m_UseY_8 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalVirtualAxis_9() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___m_HorizontalVirtualAxis_9)); }
	inline VirtualAxis_t4087348596 * get_m_HorizontalVirtualAxis_9() const { return ___m_HorizontalVirtualAxis_9; }
	inline VirtualAxis_t4087348596 ** get_address_of_m_HorizontalVirtualAxis_9() { return &___m_HorizontalVirtualAxis_9; }
	inline void set_m_HorizontalVirtualAxis_9(VirtualAxis_t4087348596 * value)
	{
		___m_HorizontalVirtualAxis_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_HorizontalVirtualAxis_9), value);
	}

	inline static int32_t get_offset_of_m_VerticalVirtualAxis_10() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___m_VerticalVirtualAxis_10)); }
	inline VirtualAxis_t4087348596 * get_m_VerticalVirtualAxis_10() const { return ___m_VerticalVirtualAxis_10; }
	inline VirtualAxis_t4087348596 ** get_address_of_m_VerticalVirtualAxis_10() { return &___m_VerticalVirtualAxis_10; }
	inline void set_m_VerticalVirtualAxis_10(VirtualAxis_t4087348596 * value)
	{
		___m_VerticalVirtualAxis_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_VerticalVirtualAxis_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOYSTICK_T2204371675_H
#ifndef AXISTOUCHBUTTON_T3522881333_H
#define AXISTOUCHBUTTON_T3522881333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
struct  AxisTouchButton_t3522881333  : public MonoBehaviour_t3962482529
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.AxisTouchButton::axisName
	String_t* ___axisName_2;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::axisValue
	float ___axisValue_3;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::responseSpeed
	float ___responseSpeed_4;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::returnToCentreSpeed
	float ___returnToCentreSpeed_5;
	// UnityStandardAssets.CrossPlatformInput.AxisTouchButton UnityStandardAssets.CrossPlatformInput.AxisTouchButton::m_PairedWith
	AxisTouchButton_t3522881333 * ___m_PairedWith_6;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.AxisTouchButton::m_Axis
	VirtualAxis_t4087348596 * ___m_Axis_7;

public:
	inline static int32_t get_offset_of_axisName_2() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3522881333, ___axisName_2)); }
	inline String_t* get_axisName_2() const { return ___axisName_2; }
	inline String_t** get_address_of_axisName_2() { return &___axisName_2; }
	inline void set_axisName_2(String_t* value)
	{
		___axisName_2 = value;
		Il2CppCodeGenWriteBarrier((&___axisName_2), value);
	}

	inline static int32_t get_offset_of_axisValue_3() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3522881333, ___axisValue_3)); }
	inline float get_axisValue_3() const { return ___axisValue_3; }
	inline float* get_address_of_axisValue_3() { return &___axisValue_3; }
	inline void set_axisValue_3(float value)
	{
		___axisValue_3 = value;
	}

	inline static int32_t get_offset_of_responseSpeed_4() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3522881333, ___responseSpeed_4)); }
	inline float get_responseSpeed_4() const { return ___responseSpeed_4; }
	inline float* get_address_of_responseSpeed_4() { return &___responseSpeed_4; }
	inline void set_responseSpeed_4(float value)
	{
		___responseSpeed_4 = value;
	}

	inline static int32_t get_offset_of_returnToCentreSpeed_5() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3522881333, ___returnToCentreSpeed_5)); }
	inline float get_returnToCentreSpeed_5() const { return ___returnToCentreSpeed_5; }
	inline float* get_address_of_returnToCentreSpeed_5() { return &___returnToCentreSpeed_5; }
	inline void set_returnToCentreSpeed_5(float value)
	{
		___returnToCentreSpeed_5 = value;
	}

	inline static int32_t get_offset_of_m_PairedWith_6() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3522881333, ___m_PairedWith_6)); }
	inline AxisTouchButton_t3522881333 * get_m_PairedWith_6() const { return ___m_PairedWith_6; }
	inline AxisTouchButton_t3522881333 ** get_address_of_m_PairedWith_6() { return &___m_PairedWith_6; }
	inline void set_m_PairedWith_6(AxisTouchButton_t3522881333 * value)
	{
		___m_PairedWith_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_PairedWith_6), value);
	}

	inline static int32_t get_offset_of_m_Axis_7() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3522881333, ___m_Axis_7)); }
	inline VirtualAxis_t4087348596 * get_m_Axis_7() const { return ___m_Axis_7; }
	inline VirtualAxis_t4087348596 ** get_address_of_m_Axis_7() { return &___m_Axis_7; }
	inline void set_m_Axis_7(VirtualAxis_t4087348596 * value)
	{
		___m_Axis_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Axis_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISTOUCHBUTTON_T3522881333_H
#ifndef LOOKATTARGET_T3260877718_H
#define LOOKATTARGET_T3260877718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.LookatTarget
struct  LookatTarget_t3260877718  : public AbstractTargetFollower_t1919708159
{
public:
	// UnityEngine.Vector2 UnityStandardAssets.Cameras.LookatTarget::m_RotationRange
	Vector2_t2156229523  ___m_RotationRange_6;
	// System.Single UnityStandardAssets.Cameras.LookatTarget::m_FollowSpeed
	float ___m_FollowSpeed_7;
	// UnityEngine.Vector3 UnityStandardAssets.Cameras.LookatTarget::m_FollowAngles
	Vector3_t3722313464  ___m_FollowAngles_8;
	// UnityEngine.Quaternion UnityStandardAssets.Cameras.LookatTarget::m_OriginalRotation
	Quaternion_t2301928331  ___m_OriginalRotation_9;
	// UnityEngine.Vector3 UnityStandardAssets.Cameras.LookatTarget::m_FollowVelocity
	Vector3_t3722313464  ___m_FollowVelocity_10;

public:
	inline static int32_t get_offset_of_m_RotationRange_6() { return static_cast<int32_t>(offsetof(LookatTarget_t3260877718, ___m_RotationRange_6)); }
	inline Vector2_t2156229523  get_m_RotationRange_6() const { return ___m_RotationRange_6; }
	inline Vector2_t2156229523 * get_address_of_m_RotationRange_6() { return &___m_RotationRange_6; }
	inline void set_m_RotationRange_6(Vector2_t2156229523  value)
	{
		___m_RotationRange_6 = value;
	}

	inline static int32_t get_offset_of_m_FollowSpeed_7() { return static_cast<int32_t>(offsetof(LookatTarget_t3260877718, ___m_FollowSpeed_7)); }
	inline float get_m_FollowSpeed_7() const { return ___m_FollowSpeed_7; }
	inline float* get_address_of_m_FollowSpeed_7() { return &___m_FollowSpeed_7; }
	inline void set_m_FollowSpeed_7(float value)
	{
		___m_FollowSpeed_7 = value;
	}

	inline static int32_t get_offset_of_m_FollowAngles_8() { return static_cast<int32_t>(offsetof(LookatTarget_t3260877718, ___m_FollowAngles_8)); }
	inline Vector3_t3722313464  get_m_FollowAngles_8() const { return ___m_FollowAngles_8; }
	inline Vector3_t3722313464 * get_address_of_m_FollowAngles_8() { return &___m_FollowAngles_8; }
	inline void set_m_FollowAngles_8(Vector3_t3722313464  value)
	{
		___m_FollowAngles_8 = value;
	}

	inline static int32_t get_offset_of_m_OriginalRotation_9() { return static_cast<int32_t>(offsetof(LookatTarget_t3260877718, ___m_OriginalRotation_9)); }
	inline Quaternion_t2301928331  get_m_OriginalRotation_9() const { return ___m_OriginalRotation_9; }
	inline Quaternion_t2301928331 * get_address_of_m_OriginalRotation_9() { return &___m_OriginalRotation_9; }
	inline void set_m_OriginalRotation_9(Quaternion_t2301928331  value)
	{
		___m_OriginalRotation_9 = value;
	}

	inline static int32_t get_offset_of_m_FollowVelocity_10() { return static_cast<int32_t>(offsetof(LookatTarget_t3260877718, ___m_FollowVelocity_10)); }
	inline Vector3_t3722313464  get_m_FollowVelocity_10() const { return ___m_FollowVelocity_10; }
	inline Vector3_t3722313464 * get_address_of_m_FollowVelocity_10() { return &___m_FollowVelocity_10; }
	inline void set_m_FollowVelocity_10(Vector3_t3722313464  value)
	{
		___m_FollowVelocity_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOOKATTARGET_T3260877718_H
#ifndef TILTSHIFT_T2891301701_H
#define TILTSHIFT_T2891301701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.TiltShift
struct  TiltShift_t2891301701  : public PostEffectsBase_t2404315739
{
public:
	// UnityStandardAssets.ImageEffects.TiltShift/TiltShiftMode UnityStandardAssets.ImageEffects.TiltShift::mode
	int32_t ___mode_6;
	// UnityStandardAssets.ImageEffects.TiltShift/TiltShiftQuality UnityStandardAssets.ImageEffects.TiltShift::quality
	int32_t ___quality_7;
	// System.Single UnityStandardAssets.ImageEffects.TiltShift::blurArea
	float ___blurArea_8;
	// System.Single UnityStandardAssets.ImageEffects.TiltShift::maxBlurSize
	float ___maxBlurSize_9;
	// System.Int32 UnityStandardAssets.ImageEffects.TiltShift::downsample
	int32_t ___downsample_10;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.TiltShift::tiltShiftShader
	Shader_t4151988712 * ___tiltShiftShader_11;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.TiltShift::tiltShiftMaterial
	Material_t340375123 * ___tiltShiftMaterial_12;

public:
	inline static int32_t get_offset_of_mode_6() { return static_cast<int32_t>(offsetof(TiltShift_t2891301701, ___mode_6)); }
	inline int32_t get_mode_6() const { return ___mode_6; }
	inline int32_t* get_address_of_mode_6() { return &___mode_6; }
	inline void set_mode_6(int32_t value)
	{
		___mode_6 = value;
	}

	inline static int32_t get_offset_of_quality_7() { return static_cast<int32_t>(offsetof(TiltShift_t2891301701, ___quality_7)); }
	inline int32_t get_quality_7() const { return ___quality_7; }
	inline int32_t* get_address_of_quality_7() { return &___quality_7; }
	inline void set_quality_7(int32_t value)
	{
		___quality_7 = value;
	}

	inline static int32_t get_offset_of_blurArea_8() { return static_cast<int32_t>(offsetof(TiltShift_t2891301701, ___blurArea_8)); }
	inline float get_blurArea_8() const { return ___blurArea_8; }
	inline float* get_address_of_blurArea_8() { return &___blurArea_8; }
	inline void set_blurArea_8(float value)
	{
		___blurArea_8 = value;
	}

	inline static int32_t get_offset_of_maxBlurSize_9() { return static_cast<int32_t>(offsetof(TiltShift_t2891301701, ___maxBlurSize_9)); }
	inline float get_maxBlurSize_9() const { return ___maxBlurSize_9; }
	inline float* get_address_of_maxBlurSize_9() { return &___maxBlurSize_9; }
	inline void set_maxBlurSize_9(float value)
	{
		___maxBlurSize_9 = value;
	}

	inline static int32_t get_offset_of_downsample_10() { return static_cast<int32_t>(offsetof(TiltShift_t2891301701, ___downsample_10)); }
	inline int32_t get_downsample_10() const { return ___downsample_10; }
	inline int32_t* get_address_of_downsample_10() { return &___downsample_10; }
	inline void set_downsample_10(int32_t value)
	{
		___downsample_10 = value;
	}

	inline static int32_t get_offset_of_tiltShiftShader_11() { return static_cast<int32_t>(offsetof(TiltShift_t2891301701, ___tiltShiftShader_11)); }
	inline Shader_t4151988712 * get_tiltShiftShader_11() const { return ___tiltShiftShader_11; }
	inline Shader_t4151988712 ** get_address_of_tiltShiftShader_11() { return &___tiltShiftShader_11; }
	inline void set_tiltShiftShader_11(Shader_t4151988712 * value)
	{
		___tiltShiftShader_11 = value;
		Il2CppCodeGenWriteBarrier((&___tiltShiftShader_11), value);
	}

	inline static int32_t get_offset_of_tiltShiftMaterial_12() { return static_cast<int32_t>(offsetof(TiltShift_t2891301701, ___tiltShiftMaterial_12)); }
	inline Material_t340375123 * get_tiltShiftMaterial_12() const { return ___tiltShiftMaterial_12; }
	inline Material_t340375123 ** get_address_of_tiltShiftMaterial_12() { return &___tiltShiftMaterial_12; }
	inline void set_tiltShiftMaterial_12(Material_t340375123 * value)
	{
		___tiltShiftMaterial_12 = value;
		Il2CppCodeGenWriteBarrier((&___tiltShiftMaterial_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILTSHIFT_T2891301701_H
#ifndef TONEMAPPING_T2837480251_H
#define TONEMAPPING_T2837480251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Tonemapping
struct  Tonemapping_t2837480251  : public PostEffectsBase_t2404315739
{
public:
	// UnityStandardAssets.ImageEffects.Tonemapping/TonemapperType UnityStandardAssets.ImageEffects.Tonemapping::type
	int32_t ___type_6;
	// UnityStandardAssets.ImageEffects.Tonemapping/AdaptiveTexSize UnityStandardAssets.ImageEffects.Tonemapping::adaptiveTextureSize
	int32_t ___adaptiveTextureSize_7;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.Tonemapping::remapCurve
	AnimationCurve_t3046754366 * ___remapCurve_8;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.Tonemapping::curveTex
	Texture2D_t3840446185 * ___curveTex_9;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::exposureAdjustment
	float ___exposureAdjustment_10;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::middleGrey
	float ___middleGrey_11;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::white
	float ___white_12;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::adaptionSpeed
	float ___adaptionSpeed_13;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Tonemapping::tonemapper
	Shader_t4151988712 * ___tonemapper_14;
	// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::validRenderTextureFormat
	bool ___validRenderTextureFormat_15;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Tonemapping::tonemapMaterial
	Material_t340375123 * ___tonemapMaterial_16;
	// UnityEngine.RenderTexture UnityStandardAssets.ImageEffects.Tonemapping::rt
	RenderTexture_t2108887433 * ___rt_17;
	// UnityEngine.RenderTextureFormat UnityStandardAssets.ImageEffects.Tonemapping::rtFormat
	int32_t ___rtFormat_18;

public:
	inline static int32_t get_offset_of_type_6() { return static_cast<int32_t>(offsetof(Tonemapping_t2837480251, ___type_6)); }
	inline int32_t get_type_6() const { return ___type_6; }
	inline int32_t* get_address_of_type_6() { return &___type_6; }
	inline void set_type_6(int32_t value)
	{
		___type_6 = value;
	}

	inline static int32_t get_offset_of_adaptiveTextureSize_7() { return static_cast<int32_t>(offsetof(Tonemapping_t2837480251, ___adaptiveTextureSize_7)); }
	inline int32_t get_adaptiveTextureSize_7() const { return ___adaptiveTextureSize_7; }
	inline int32_t* get_address_of_adaptiveTextureSize_7() { return &___adaptiveTextureSize_7; }
	inline void set_adaptiveTextureSize_7(int32_t value)
	{
		___adaptiveTextureSize_7 = value;
	}

	inline static int32_t get_offset_of_remapCurve_8() { return static_cast<int32_t>(offsetof(Tonemapping_t2837480251, ___remapCurve_8)); }
	inline AnimationCurve_t3046754366 * get_remapCurve_8() const { return ___remapCurve_8; }
	inline AnimationCurve_t3046754366 ** get_address_of_remapCurve_8() { return &___remapCurve_8; }
	inline void set_remapCurve_8(AnimationCurve_t3046754366 * value)
	{
		___remapCurve_8 = value;
		Il2CppCodeGenWriteBarrier((&___remapCurve_8), value);
	}

	inline static int32_t get_offset_of_curveTex_9() { return static_cast<int32_t>(offsetof(Tonemapping_t2837480251, ___curveTex_9)); }
	inline Texture2D_t3840446185 * get_curveTex_9() const { return ___curveTex_9; }
	inline Texture2D_t3840446185 ** get_address_of_curveTex_9() { return &___curveTex_9; }
	inline void set_curveTex_9(Texture2D_t3840446185 * value)
	{
		___curveTex_9 = value;
		Il2CppCodeGenWriteBarrier((&___curveTex_9), value);
	}

	inline static int32_t get_offset_of_exposureAdjustment_10() { return static_cast<int32_t>(offsetof(Tonemapping_t2837480251, ___exposureAdjustment_10)); }
	inline float get_exposureAdjustment_10() const { return ___exposureAdjustment_10; }
	inline float* get_address_of_exposureAdjustment_10() { return &___exposureAdjustment_10; }
	inline void set_exposureAdjustment_10(float value)
	{
		___exposureAdjustment_10 = value;
	}

	inline static int32_t get_offset_of_middleGrey_11() { return static_cast<int32_t>(offsetof(Tonemapping_t2837480251, ___middleGrey_11)); }
	inline float get_middleGrey_11() const { return ___middleGrey_11; }
	inline float* get_address_of_middleGrey_11() { return &___middleGrey_11; }
	inline void set_middleGrey_11(float value)
	{
		___middleGrey_11 = value;
	}

	inline static int32_t get_offset_of_white_12() { return static_cast<int32_t>(offsetof(Tonemapping_t2837480251, ___white_12)); }
	inline float get_white_12() const { return ___white_12; }
	inline float* get_address_of_white_12() { return &___white_12; }
	inline void set_white_12(float value)
	{
		___white_12 = value;
	}

	inline static int32_t get_offset_of_adaptionSpeed_13() { return static_cast<int32_t>(offsetof(Tonemapping_t2837480251, ___adaptionSpeed_13)); }
	inline float get_adaptionSpeed_13() const { return ___adaptionSpeed_13; }
	inline float* get_address_of_adaptionSpeed_13() { return &___adaptionSpeed_13; }
	inline void set_adaptionSpeed_13(float value)
	{
		___adaptionSpeed_13 = value;
	}

	inline static int32_t get_offset_of_tonemapper_14() { return static_cast<int32_t>(offsetof(Tonemapping_t2837480251, ___tonemapper_14)); }
	inline Shader_t4151988712 * get_tonemapper_14() const { return ___tonemapper_14; }
	inline Shader_t4151988712 ** get_address_of_tonemapper_14() { return &___tonemapper_14; }
	inline void set_tonemapper_14(Shader_t4151988712 * value)
	{
		___tonemapper_14 = value;
		Il2CppCodeGenWriteBarrier((&___tonemapper_14), value);
	}

	inline static int32_t get_offset_of_validRenderTextureFormat_15() { return static_cast<int32_t>(offsetof(Tonemapping_t2837480251, ___validRenderTextureFormat_15)); }
	inline bool get_validRenderTextureFormat_15() const { return ___validRenderTextureFormat_15; }
	inline bool* get_address_of_validRenderTextureFormat_15() { return &___validRenderTextureFormat_15; }
	inline void set_validRenderTextureFormat_15(bool value)
	{
		___validRenderTextureFormat_15 = value;
	}

	inline static int32_t get_offset_of_tonemapMaterial_16() { return static_cast<int32_t>(offsetof(Tonemapping_t2837480251, ___tonemapMaterial_16)); }
	inline Material_t340375123 * get_tonemapMaterial_16() const { return ___tonemapMaterial_16; }
	inline Material_t340375123 ** get_address_of_tonemapMaterial_16() { return &___tonemapMaterial_16; }
	inline void set_tonemapMaterial_16(Material_t340375123 * value)
	{
		___tonemapMaterial_16 = value;
		Il2CppCodeGenWriteBarrier((&___tonemapMaterial_16), value);
	}

	inline static int32_t get_offset_of_rt_17() { return static_cast<int32_t>(offsetof(Tonemapping_t2837480251, ___rt_17)); }
	inline RenderTexture_t2108887433 * get_rt_17() const { return ___rt_17; }
	inline RenderTexture_t2108887433 ** get_address_of_rt_17() { return &___rt_17; }
	inline void set_rt_17(RenderTexture_t2108887433 * value)
	{
		___rt_17 = value;
		Il2CppCodeGenWriteBarrier((&___rt_17), value);
	}

	inline static int32_t get_offset_of_rtFormat_18() { return static_cast<int32_t>(offsetof(Tonemapping_t2837480251, ___rtFormat_18)); }
	inline int32_t get_rtFormat_18() const { return ___rtFormat_18; }
	inline int32_t* get_address_of_rtFormat_18() { return &___rtFormat_18; }
	inline void set_rtFormat_18(int32_t value)
	{
		___rtFormat_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TONEMAPPING_T2837480251_H
#ifndef PIVOTBASEDCAMERARIG_T3786953582_H
#define PIVOTBASEDCAMERARIG_T3786953582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.PivotBasedCameraRig
struct  PivotBasedCameraRig_t3786953582  : public AbstractTargetFollower_t1919708159
{
public:
	// UnityEngine.Transform UnityStandardAssets.Cameras.PivotBasedCameraRig::m_Cam
	Transform_t3600365921 * ___m_Cam_6;
	// UnityEngine.Transform UnityStandardAssets.Cameras.PivotBasedCameraRig::m_Pivot
	Transform_t3600365921 * ___m_Pivot_7;
	// UnityEngine.Vector3 UnityStandardAssets.Cameras.PivotBasedCameraRig::m_LastTargetPosition
	Vector3_t3722313464  ___m_LastTargetPosition_8;

public:
	inline static int32_t get_offset_of_m_Cam_6() { return static_cast<int32_t>(offsetof(PivotBasedCameraRig_t3786953582, ___m_Cam_6)); }
	inline Transform_t3600365921 * get_m_Cam_6() const { return ___m_Cam_6; }
	inline Transform_t3600365921 ** get_address_of_m_Cam_6() { return &___m_Cam_6; }
	inline void set_m_Cam_6(Transform_t3600365921 * value)
	{
		___m_Cam_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Cam_6), value);
	}

	inline static int32_t get_offset_of_m_Pivot_7() { return static_cast<int32_t>(offsetof(PivotBasedCameraRig_t3786953582, ___m_Pivot_7)); }
	inline Transform_t3600365921 * get_m_Pivot_7() const { return ___m_Pivot_7; }
	inline Transform_t3600365921 ** get_address_of_m_Pivot_7() { return &___m_Pivot_7; }
	inline void set_m_Pivot_7(Transform_t3600365921 * value)
	{
		___m_Pivot_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Pivot_7), value);
	}

	inline static int32_t get_offset_of_m_LastTargetPosition_8() { return static_cast<int32_t>(offsetof(PivotBasedCameraRig_t3786953582, ___m_LastTargetPosition_8)); }
	inline Vector3_t3722313464  get_m_LastTargetPosition_8() const { return ___m_LastTargetPosition_8; }
	inline Vector3_t3722313464 * get_address_of_m_LastTargetPosition_8() { return &___m_LastTargetPosition_8; }
	inline void set_m_LastTargetPosition_8(Vector3_t3722313464  value)
	{
		___m_LastTargetPosition_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PIVOTBASEDCAMERARIG_T3786953582_H
#ifndef EDGEDETECTION_T506487406_H
#define EDGEDETECTION_T506487406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.EdgeDetection
struct  EdgeDetection_t506487406  : public PostEffectsBase_t2404315739
{
public:
	// UnityStandardAssets.ImageEffects.EdgeDetection/EdgeDetectMode UnityStandardAssets.ImageEffects.EdgeDetection::mode
	int32_t ___mode_6;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::sensitivityDepth
	float ___sensitivityDepth_7;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::sensitivityNormals
	float ___sensitivityNormals_8;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::lumThreshold
	float ___lumThreshold_9;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::edgeExp
	float ___edgeExp_10;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::sampleDist
	float ___sampleDist_11;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::edgesOnly
	float ___edgesOnly_12;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.EdgeDetection::edgesOnlyBgColor
	Color_t2555686324  ___edgesOnlyBgColor_13;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.EdgeDetection::edgeDetectShader
	Shader_t4151988712 * ___edgeDetectShader_14;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.EdgeDetection::edgeDetectMaterial
	Material_t340375123 * ___edgeDetectMaterial_15;
	// UnityStandardAssets.ImageEffects.EdgeDetection/EdgeDetectMode UnityStandardAssets.ImageEffects.EdgeDetection::oldMode
	int32_t ___oldMode_16;

public:
	inline static int32_t get_offset_of_mode_6() { return static_cast<int32_t>(offsetof(EdgeDetection_t506487406, ___mode_6)); }
	inline int32_t get_mode_6() const { return ___mode_6; }
	inline int32_t* get_address_of_mode_6() { return &___mode_6; }
	inline void set_mode_6(int32_t value)
	{
		___mode_6 = value;
	}

	inline static int32_t get_offset_of_sensitivityDepth_7() { return static_cast<int32_t>(offsetof(EdgeDetection_t506487406, ___sensitivityDepth_7)); }
	inline float get_sensitivityDepth_7() const { return ___sensitivityDepth_7; }
	inline float* get_address_of_sensitivityDepth_7() { return &___sensitivityDepth_7; }
	inline void set_sensitivityDepth_7(float value)
	{
		___sensitivityDepth_7 = value;
	}

	inline static int32_t get_offset_of_sensitivityNormals_8() { return static_cast<int32_t>(offsetof(EdgeDetection_t506487406, ___sensitivityNormals_8)); }
	inline float get_sensitivityNormals_8() const { return ___sensitivityNormals_8; }
	inline float* get_address_of_sensitivityNormals_8() { return &___sensitivityNormals_8; }
	inline void set_sensitivityNormals_8(float value)
	{
		___sensitivityNormals_8 = value;
	}

	inline static int32_t get_offset_of_lumThreshold_9() { return static_cast<int32_t>(offsetof(EdgeDetection_t506487406, ___lumThreshold_9)); }
	inline float get_lumThreshold_9() const { return ___lumThreshold_9; }
	inline float* get_address_of_lumThreshold_9() { return &___lumThreshold_9; }
	inline void set_lumThreshold_9(float value)
	{
		___lumThreshold_9 = value;
	}

	inline static int32_t get_offset_of_edgeExp_10() { return static_cast<int32_t>(offsetof(EdgeDetection_t506487406, ___edgeExp_10)); }
	inline float get_edgeExp_10() const { return ___edgeExp_10; }
	inline float* get_address_of_edgeExp_10() { return &___edgeExp_10; }
	inline void set_edgeExp_10(float value)
	{
		___edgeExp_10 = value;
	}

	inline static int32_t get_offset_of_sampleDist_11() { return static_cast<int32_t>(offsetof(EdgeDetection_t506487406, ___sampleDist_11)); }
	inline float get_sampleDist_11() const { return ___sampleDist_11; }
	inline float* get_address_of_sampleDist_11() { return &___sampleDist_11; }
	inline void set_sampleDist_11(float value)
	{
		___sampleDist_11 = value;
	}

	inline static int32_t get_offset_of_edgesOnly_12() { return static_cast<int32_t>(offsetof(EdgeDetection_t506487406, ___edgesOnly_12)); }
	inline float get_edgesOnly_12() const { return ___edgesOnly_12; }
	inline float* get_address_of_edgesOnly_12() { return &___edgesOnly_12; }
	inline void set_edgesOnly_12(float value)
	{
		___edgesOnly_12 = value;
	}

	inline static int32_t get_offset_of_edgesOnlyBgColor_13() { return static_cast<int32_t>(offsetof(EdgeDetection_t506487406, ___edgesOnlyBgColor_13)); }
	inline Color_t2555686324  get_edgesOnlyBgColor_13() const { return ___edgesOnlyBgColor_13; }
	inline Color_t2555686324 * get_address_of_edgesOnlyBgColor_13() { return &___edgesOnlyBgColor_13; }
	inline void set_edgesOnlyBgColor_13(Color_t2555686324  value)
	{
		___edgesOnlyBgColor_13 = value;
	}

	inline static int32_t get_offset_of_edgeDetectShader_14() { return static_cast<int32_t>(offsetof(EdgeDetection_t506487406, ___edgeDetectShader_14)); }
	inline Shader_t4151988712 * get_edgeDetectShader_14() const { return ___edgeDetectShader_14; }
	inline Shader_t4151988712 ** get_address_of_edgeDetectShader_14() { return &___edgeDetectShader_14; }
	inline void set_edgeDetectShader_14(Shader_t4151988712 * value)
	{
		___edgeDetectShader_14 = value;
		Il2CppCodeGenWriteBarrier((&___edgeDetectShader_14), value);
	}

	inline static int32_t get_offset_of_edgeDetectMaterial_15() { return static_cast<int32_t>(offsetof(EdgeDetection_t506487406, ___edgeDetectMaterial_15)); }
	inline Material_t340375123 * get_edgeDetectMaterial_15() const { return ___edgeDetectMaterial_15; }
	inline Material_t340375123 ** get_address_of_edgeDetectMaterial_15() { return &___edgeDetectMaterial_15; }
	inline void set_edgeDetectMaterial_15(Material_t340375123 * value)
	{
		___edgeDetectMaterial_15 = value;
		Il2CppCodeGenWriteBarrier((&___edgeDetectMaterial_15), value);
	}

	inline static int32_t get_offset_of_oldMode_16() { return static_cast<int32_t>(offsetof(EdgeDetection_t506487406, ___oldMode_16)); }
	inline int32_t get_oldMode_16() const { return ___oldMode_16; }
	inline int32_t* get_address_of_oldMode_16() { return &___oldMode_16; }
	inline void set_oldMode_16(int32_t value)
	{
		___oldMode_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDGEDETECTION_T506487406_H
#ifndef ANTIALIASING_T1691315015_H
#define ANTIALIASING_T1691315015_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Antialiasing
struct  Antialiasing_t1691315015  : public PostEffectsBase_t2404315739
{
public:
	// UnityStandardAssets.ImageEffects.AAMode UnityStandardAssets.ImageEffects.Antialiasing::mode
	int32_t ___mode_6;
	// System.Boolean UnityStandardAssets.ImageEffects.Antialiasing::showGeneratedNormals
	bool ___showGeneratedNormals_7;
	// System.Single UnityStandardAssets.ImageEffects.Antialiasing::offsetScale
	float ___offsetScale_8;
	// System.Single UnityStandardAssets.ImageEffects.Antialiasing::blurRadius
	float ___blurRadius_9;
	// System.Single UnityStandardAssets.ImageEffects.Antialiasing::edgeThresholdMin
	float ___edgeThresholdMin_10;
	// System.Single UnityStandardAssets.ImageEffects.Antialiasing::edgeThreshold
	float ___edgeThreshold_11;
	// System.Single UnityStandardAssets.ImageEffects.Antialiasing::edgeSharpness
	float ___edgeSharpness_12;
	// System.Boolean UnityStandardAssets.ImageEffects.Antialiasing::dlaaSharp
	bool ___dlaaSharp_13;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Antialiasing::ssaaShader
	Shader_t4151988712 * ___ssaaShader_14;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::ssaa
	Material_t340375123 * ___ssaa_15;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Antialiasing::dlaaShader
	Shader_t4151988712 * ___dlaaShader_16;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::dlaa
	Material_t340375123 * ___dlaa_17;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Antialiasing::nfaaShader
	Shader_t4151988712 * ___nfaaShader_18;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::nfaa
	Material_t340375123 * ___nfaa_19;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Antialiasing::shaderFXAAPreset2
	Shader_t4151988712 * ___shaderFXAAPreset2_20;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::materialFXAAPreset2
	Material_t340375123 * ___materialFXAAPreset2_21;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Antialiasing::shaderFXAAPreset3
	Shader_t4151988712 * ___shaderFXAAPreset3_22;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::materialFXAAPreset3
	Material_t340375123 * ___materialFXAAPreset3_23;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Antialiasing::shaderFXAAII
	Shader_t4151988712 * ___shaderFXAAII_24;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::materialFXAAII
	Material_t340375123 * ___materialFXAAII_25;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Antialiasing::shaderFXAAIII
	Shader_t4151988712 * ___shaderFXAAIII_26;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::materialFXAAIII
	Material_t340375123 * ___materialFXAAIII_27;

public:
	inline static int32_t get_offset_of_mode_6() { return static_cast<int32_t>(offsetof(Antialiasing_t1691315015, ___mode_6)); }
	inline int32_t get_mode_6() const { return ___mode_6; }
	inline int32_t* get_address_of_mode_6() { return &___mode_6; }
	inline void set_mode_6(int32_t value)
	{
		___mode_6 = value;
	}

	inline static int32_t get_offset_of_showGeneratedNormals_7() { return static_cast<int32_t>(offsetof(Antialiasing_t1691315015, ___showGeneratedNormals_7)); }
	inline bool get_showGeneratedNormals_7() const { return ___showGeneratedNormals_7; }
	inline bool* get_address_of_showGeneratedNormals_7() { return &___showGeneratedNormals_7; }
	inline void set_showGeneratedNormals_7(bool value)
	{
		___showGeneratedNormals_7 = value;
	}

	inline static int32_t get_offset_of_offsetScale_8() { return static_cast<int32_t>(offsetof(Antialiasing_t1691315015, ___offsetScale_8)); }
	inline float get_offsetScale_8() const { return ___offsetScale_8; }
	inline float* get_address_of_offsetScale_8() { return &___offsetScale_8; }
	inline void set_offsetScale_8(float value)
	{
		___offsetScale_8 = value;
	}

	inline static int32_t get_offset_of_blurRadius_9() { return static_cast<int32_t>(offsetof(Antialiasing_t1691315015, ___blurRadius_9)); }
	inline float get_blurRadius_9() const { return ___blurRadius_9; }
	inline float* get_address_of_blurRadius_9() { return &___blurRadius_9; }
	inline void set_blurRadius_9(float value)
	{
		___blurRadius_9 = value;
	}

	inline static int32_t get_offset_of_edgeThresholdMin_10() { return static_cast<int32_t>(offsetof(Antialiasing_t1691315015, ___edgeThresholdMin_10)); }
	inline float get_edgeThresholdMin_10() const { return ___edgeThresholdMin_10; }
	inline float* get_address_of_edgeThresholdMin_10() { return &___edgeThresholdMin_10; }
	inline void set_edgeThresholdMin_10(float value)
	{
		___edgeThresholdMin_10 = value;
	}

	inline static int32_t get_offset_of_edgeThreshold_11() { return static_cast<int32_t>(offsetof(Antialiasing_t1691315015, ___edgeThreshold_11)); }
	inline float get_edgeThreshold_11() const { return ___edgeThreshold_11; }
	inline float* get_address_of_edgeThreshold_11() { return &___edgeThreshold_11; }
	inline void set_edgeThreshold_11(float value)
	{
		___edgeThreshold_11 = value;
	}

	inline static int32_t get_offset_of_edgeSharpness_12() { return static_cast<int32_t>(offsetof(Antialiasing_t1691315015, ___edgeSharpness_12)); }
	inline float get_edgeSharpness_12() const { return ___edgeSharpness_12; }
	inline float* get_address_of_edgeSharpness_12() { return &___edgeSharpness_12; }
	inline void set_edgeSharpness_12(float value)
	{
		___edgeSharpness_12 = value;
	}

	inline static int32_t get_offset_of_dlaaSharp_13() { return static_cast<int32_t>(offsetof(Antialiasing_t1691315015, ___dlaaSharp_13)); }
	inline bool get_dlaaSharp_13() const { return ___dlaaSharp_13; }
	inline bool* get_address_of_dlaaSharp_13() { return &___dlaaSharp_13; }
	inline void set_dlaaSharp_13(bool value)
	{
		___dlaaSharp_13 = value;
	}

	inline static int32_t get_offset_of_ssaaShader_14() { return static_cast<int32_t>(offsetof(Antialiasing_t1691315015, ___ssaaShader_14)); }
	inline Shader_t4151988712 * get_ssaaShader_14() const { return ___ssaaShader_14; }
	inline Shader_t4151988712 ** get_address_of_ssaaShader_14() { return &___ssaaShader_14; }
	inline void set_ssaaShader_14(Shader_t4151988712 * value)
	{
		___ssaaShader_14 = value;
		Il2CppCodeGenWriteBarrier((&___ssaaShader_14), value);
	}

	inline static int32_t get_offset_of_ssaa_15() { return static_cast<int32_t>(offsetof(Antialiasing_t1691315015, ___ssaa_15)); }
	inline Material_t340375123 * get_ssaa_15() const { return ___ssaa_15; }
	inline Material_t340375123 ** get_address_of_ssaa_15() { return &___ssaa_15; }
	inline void set_ssaa_15(Material_t340375123 * value)
	{
		___ssaa_15 = value;
		Il2CppCodeGenWriteBarrier((&___ssaa_15), value);
	}

	inline static int32_t get_offset_of_dlaaShader_16() { return static_cast<int32_t>(offsetof(Antialiasing_t1691315015, ___dlaaShader_16)); }
	inline Shader_t4151988712 * get_dlaaShader_16() const { return ___dlaaShader_16; }
	inline Shader_t4151988712 ** get_address_of_dlaaShader_16() { return &___dlaaShader_16; }
	inline void set_dlaaShader_16(Shader_t4151988712 * value)
	{
		___dlaaShader_16 = value;
		Il2CppCodeGenWriteBarrier((&___dlaaShader_16), value);
	}

	inline static int32_t get_offset_of_dlaa_17() { return static_cast<int32_t>(offsetof(Antialiasing_t1691315015, ___dlaa_17)); }
	inline Material_t340375123 * get_dlaa_17() const { return ___dlaa_17; }
	inline Material_t340375123 ** get_address_of_dlaa_17() { return &___dlaa_17; }
	inline void set_dlaa_17(Material_t340375123 * value)
	{
		___dlaa_17 = value;
		Il2CppCodeGenWriteBarrier((&___dlaa_17), value);
	}

	inline static int32_t get_offset_of_nfaaShader_18() { return static_cast<int32_t>(offsetof(Antialiasing_t1691315015, ___nfaaShader_18)); }
	inline Shader_t4151988712 * get_nfaaShader_18() const { return ___nfaaShader_18; }
	inline Shader_t4151988712 ** get_address_of_nfaaShader_18() { return &___nfaaShader_18; }
	inline void set_nfaaShader_18(Shader_t4151988712 * value)
	{
		___nfaaShader_18 = value;
		Il2CppCodeGenWriteBarrier((&___nfaaShader_18), value);
	}

	inline static int32_t get_offset_of_nfaa_19() { return static_cast<int32_t>(offsetof(Antialiasing_t1691315015, ___nfaa_19)); }
	inline Material_t340375123 * get_nfaa_19() const { return ___nfaa_19; }
	inline Material_t340375123 ** get_address_of_nfaa_19() { return &___nfaa_19; }
	inline void set_nfaa_19(Material_t340375123 * value)
	{
		___nfaa_19 = value;
		Il2CppCodeGenWriteBarrier((&___nfaa_19), value);
	}

	inline static int32_t get_offset_of_shaderFXAAPreset2_20() { return static_cast<int32_t>(offsetof(Antialiasing_t1691315015, ___shaderFXAAPreset2_20)); }
	inline Shader_t4151988712 * get_shaderFXAAPreset2_20() const { return ___shaderFXAAPreset2_20; }
	inline Shader_t4151988712 ** get_address_of_shaderFXAAPreset2_20() { return &___shaderFXAAPreset2_20; }
	inline void set_shaderFXAAPreset2_20(Shader_t4151988712 * value)
	{
		___shaderFXAAPreset2_20 = value;
		Il2CppCodeGenWriteBarrier((&___shaderFXAAPreset2_20), value);
	}

	inline static int32_t get_offset_of_materialFXAAPreset2_21() { return static_cast<int32_t>(offsetof(Antialiasing_t1691315015, ___materialFXAAPreset2_21)); }
	inline Material_t340375123 * get_materialFXAAPreset2_21() const { return ___materialFXAAPreset2_21; }
	inline Material_t340375123 ** get_address_of_materialFXAAPreset2_21() { return &___materialFXAAPreset2_21; }
	inline void set_materialFXAAPreset2_21(Material_t340375123 * value)
	{
		___materialFXAAPreset2_21 = value;
		Il2CppCodeGenWriteBarrier((&___materialFXAAPreset2_21), value);
	}

	inline static int32_t get_offset_of_shaderFXAAPreset3_22() { return static_cast<int32_t>(offsetof(Antialiasing_t1691315015, ___shaderFXAAPreset3_22)); }
	inline Shader_t4151988712 * get_shaderFXAAPreset3_22() const { return ___shaderFXAAPreset3_22; }
	inline Shader_t4151988712 ** get_address_of_shaderFXAAPreset3_22() { return &___shaderFXAAPreset3_22; }
	inline void set_shaderFXAAPreset3_22(Shader_t4151988712 * value)
	{
		___shaderFXAAPreset3_22 = value;
		Il2CppCodeGenWriteBarrier((&___shaderFXAAPreset3_22), value);
	}

	inline static int32_t get_offset_of_materialFXAAPreset3_23() { return static_cast<int32_t>(offsetof(Antialiasing_t1691315015, ___materialFXAAPreset3_23)); }
	inline Material_t340375123 * get_materialFXAAPreset3_23() const { return ___materialFXAAPreset3_23; }
	inline Material_t340375123 ** get_address_of_materialFXAAPreset3_23() { return &___materialFXAAPreset3_23; }
	inline void set_materialFXAAPreset3_23(Material_t340375123 * value)
	{
		___materialFXAAPreset3_23 = value;
		Il2CppCodeGenWriteBarrier((&___materialFXAAPreset3_23), value);
	}

	inline static int32_t get_offset_of_shaderFXAAII_24() { return static_cast<int32_t>(offsetof(Antialiasing_t1691315015, ___shaderFXAAII_24)); }
	inline Shader_t4151988712 * get_shaderFXAAII_24() const { return ___shaderFXAAII_24; }
	inline Shader_t4151988712 ** get_address_of_shaderFXAAII_24() { return &___shaderFXAAII_24; }
	inline void set_shaderFXAAII_24(Shader_t4151988712 * value)
	{
		___shaderFXAAII_24 = value;
		Il2CppCodeGenWriteBarrier((&___shaderFXAAII_24), value);
	}

	inline static int32_t get_offset_of_materialFXAAII_25() { return static_cast<int32_t>(offsetof(Antialiasing_t1691315015, ___materialFXAAII_25)); }
	inline Material_t340375123 * get_materialFXAAII_25() const { return ___materialFXAAII_25; }
	inline Material_t340375123 ** get_address_of_materialFXAAII_25() { return &___materialFXAAII_25; }
	inline void set_materialFXAAII_25(Material_t340375123 * value)
	{
		___materialFXAAII_25 = value;
		Il2CppCodeGenWriteBarrier((&___materialFXAAII_25), value);
	}

	inline static int32_t get_offset_of_shaderFXAAIII_26() { return static_cast<int32_t>(offsetof(Antialiasing_t1691315015, ___shaderFXAAIII_26)); }
	inline Shader_t4151988712 * get_shaderFXAAIII_26() const { return ___shaderFXAAIII_26; }
	inline Shader_t4151988712 ** get_address_of_shaderFXAAIII_26() { return &___shaderFXAAIII_26; }
	inline void set_shaderFXAAIII_26(Shader_t4151988712 * value)
	{
		___shaderFXAAIII_26 = value;
		Il2CppCodeGenWriteBarrier((&___shaderFXAAIII_26), value);
	}

	inline static int32_t get_offset_of_materialFXAAIII_27() { return static_cast<int32_t>(offsetof(Antialiasing_t1691315015, ___materialFXAAIII_27)); }
	inline Material_t340375123 * get_materialFXAAIII_27() const { return ___materialFXAAIII_27; }
	inline Material_t340375123 ** get_address_of_materialFXAAIII_27() { return &___materialFXAAIII_27; }
	inline void set_materialFXAAIII_27(Material_t340375123 * value)
	{
		___materialFXAAIII_27 = value;
		Il2CppCodeGenWriteBarrier((&___materialFXAAIII_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANTIALIASING_T1691315015_H
#ifndef BLOOM_T1125654350_H
#define BLOOM_T1125654350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Bloom
struct  Bloom_t1125654350  : public PostEffectsBase_t2404315739
{
public:
	// UnityStandardAssets.ImageEffects.Bloom/TweakMode UnityStandardAssets.ImageEffects.Bloom::tweakMode
	int32_t ___tweakMode_6;
	// UnityStandardAssets.ImageEffects.Bloom/BloomScreenBlendMode UnityStandardAssets.ImageEffects.Bloom::screenBlendMode
	int32_t ___screenBlendMode_7;
	// UnityStandardAssets.ImageEffects.Bloom/HDRBloomMode UnityStandardAssets.ImageEffects.Bloom::hdr
	int32_t ___hdr_8;
	// System.Boolean UnityStandardAssets.ImageEffects.Bloom::doHdr
	bool ___doHdr_9;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::sepBlurSpread
	float ___sepBlurSpread_10;
	// UnityStandardAssets.ImageEffects.Bloom/BloomQuality UnityStandardAssets.ImageEffects.Bloom::quality
	int32_t ___quality_11;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::bloomIntensity
	float ___bloomIntensity_12;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::bloomThreshold
	float ___bloomThreshold_13;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::bloomThresholdColor
	Color_t2555686324  ___bloomThresholdColor_14;
	// System.Int32 UnityStandardAssets.ImageEffects.Bloom::bloomBlurIterations
	int32_t ___bloomBlurIterations_15;
	// System.Int32 UnityStandardAssets.ImageEffects.Bloom::hollywoodFlareBlurIterations
	int32_t ___hollywoodFlareBlurIterations_16;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::flareRotation
	float ___flareRotation_17;
	// UnityStandardAssets.ImageEffects.Bloom/LensFlareStyle UnityStandardAssets.ImageEffects.Bloom::lensflareMode
	int32_t ___lensflareMode_18;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::hollyStretchWidth
	float ___hollyStretchWidth_19;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::lensflareIntensity
	float ___lensflareIntensity_20;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::lensflareThreshold
	float ___lensflareThreshold_21;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::lensFlareSaturation
	float ___lensFlareSaturation_22;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::flareColorA
	Color_t2555686324  ___flareColorA_23;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::flareColorB
	Color_t2555686324  ___flareColorB_24;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::flareColorC
	Color_t2555686324  ___flareColorC_25;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::flareColorD
	Color_t2555686324  ___flareColorD_26;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.Bloom::lensFlareVignetteMask
	Texture2D_t3840446185 * ___lensFlareVignetteMask_27;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Bloom::lensFlareShader
	Shader_t4151988712 * ___lensFlareShader_28;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Bloom::lensFlareMaterial
	Material_t340375123 * ___lensFlareMaterial_29;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Bloom::screenBlendShader
	Shader_t4151988712 * ___screenBlendShader_30;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Bloom::screenBlend
	Material_t340375123 * ___screenBlend_31;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Bloom::blurAndFlaresShader
	Shader_t4151988712 * ___blurAndFlaresShader_32;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Bloom::blurAndFlaresMaterial
	Material_t340375123 * ___blurAndFlaresMaterial_33;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Bloom::brightPassFilterShader
	Shader_t4151988712 * ___brightPassFilterShader_34;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Bloom::brightPassFilterMaterial
	Material_t340375123 * ___brightPassFilterMaterial_35;

public:
	inline static int32_t get_offset_of_tweakMode_6() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___tweakMode_6)); }
	inline int32_t get_tweakMode_6() const { return ___tweakMode_6; }
	inline int32_t* get_address_of_tweakMode_6() { return &___tweakMode_6; }
	inline void set_tweakMode_6(int32_t value)
	{
		___tweakMode_6 = value;
	}

	inline static int32_t get_offset_of_screenBlendMode_7() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___screenBlendMode_7)); }
	inline int32_t get_screenBlendMode_7() const { return ___screenBlendMode_7; }
	inline int32_t* get_address_of_screenBlendMode_7() { return &___screenBlendMode_7; }
	inline void set_screenBlendMode_7(int32_t value)
	{
		___screenBlendMode_7 = value;
	}

	inline static int32_t get_offset_of_hdr_8() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___hdr_8)); }
	inline int32_t get_hdr_8() const { return ___hdr_8; }
	inline int32_t* get_address_of_hdr_8() { return &___hdr_8; }
	inline void set_hdr_8(int32_t value)
	{
		___hdr_8 = value;
	}

	inline static int32_t get_offset_of_doHdr_9() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___doHdr_9)); }
	inline bool get_doHdr_9() const { return ___doHdr_9; }
	inline bool* get_address_of_doHdr_9() { return &___doHdr_9; }
	inline void set_doHdr_9(bool value)
	{
		___doHdr_9 = value;
	}

	inline static int32_t get_offset_of_sepBlurSpread_10() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___sepBlurSpread_10)); }
	inline float get_sepBlurSpread_10() const { return ___sepBlurSpread_10; }
	inline float* get_address_of_sepBlurSpread_10() { return &___sepBlurSpread_10; }
	inline void set_sepBlurSpread_10(float value)
	{
		___sepBlurSpread_10 = value;
	}

	inline static int32_t get_offset_of_quality_11() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___quality_11)); }
	inline int32_t get_quality_11() const { return ___quality_11; }
	inline int32_t* get_address_of_quality_11() { return &___quality_11; }
	inline void set_quality_11(int32_t value)
	{
		___quality_11 = value;
	}

	inline static int32_t get_offset_of_bloomIntensity_12() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___bloomIntensity_12)); }
	inline float get_bloomIntensity_12() const { return ___bloomIntensity_12; }
	inline float* get_address_of_bloomIntensity_12() { return &___bloomIntensity_12; }
	inline void set_bloomIntensity_12(float value)
	{
		___bloomIntensity_12 = value;
	}

	inline static int32_t get_offset_of_bloomThreshold_13() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___bloomThreshold_13)); }
	inline float get_bloomThreshold_13() const { return ___bloomThreshold_13; }
	inline float* get_address_of_bloomThreshold_13() { return &___bloomThreshold_13; }
	inline void set_bloomThreshold_13(float value)
	{
		___bloomThreshold_13 = value;
	}

	inline static int32_t get_offset_of_bloomThresholdColor_14() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___bloomThresholdColor_14)); }
	inline Color_t2555686324  get_bloomThresholdColor_14() const { return ___bloomThresholdColor_14; }
	inline Color_t2555686324 * get_address_of_bloomThresholdColor_14() { return &___bloomThresholdColor_14; }
	inline void set_bloomThresholdColor_14(Color_t2555686324  value)
	{
		___bloomThresholdColor_14 = value;
	}

	inline static int32_t get_offset_of_bloomBlurIterations_15() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___bloomBlurIterations_15)); }
	inline int32_t get_bloomBlurIterations_15() const { return ___bloomBlurIterations_15; }
	inline int32_t* get_address_of_bloomBlurIterations_15() { return &___bloomBlurIterations_15; }
	inline void set_bloomBlurIterations_15(int32_t value)
	{
		___bloomBlurIterations_15 = value;
	}

	inline static int32_t get_offset_of_hollywoodFlareBlurIterations_16() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___hollywoodFlareBlurIterations_16)); }
	inline int32_t get_hollywoodFlareBlurIterations_16() const { return ___hollywoodFlareBlurIterations_16; }
	inline int32_t* get_address_of_hollywoodFlareBlurIterations_16() { return &___hollywoodFlareBlurIterations_16; }
	inline void set_hollywoodFlareBlurIterations_16(int32_t value)
	{
		___hollywoodFlareBlurIterations_16 = value;
	}

	inline static int32_t get_offset_of_flareRotation_17() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___flareRotation_17)); }
	inline float get_flareRotation_17() const { return ___flareRotation_17; }
	inline float* get_address_of_flareRotation_17() { return &___flareRotation_17; }
	inline void set_flareRotation_17(float value)
	{
		___flareRotation_17 = value;
	}

	inline static int32_t get_offset_of_lensflareMode_18() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___lensflareMode_18)); }
	inline int32_t get_lensflareMode_18() const { return ___lensflareMode_18; }
	inline int32_t* get_address_of_lensflareMode_18() { return &___lensflareMode_18; }
	inline void set_lensflareMode_18(int32_t value)
	{
		___lensflareMode_18 = value;
	}

	inline static int32_t get_offset_of_hollyStretchWidth_19() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___hollyStretchWidth_19)); }
	inline float get_hollyStretchWidth_19() const { return ___hollyStretchWidth_19; }
	inline float* get_address_of_hollyStretchWidth_19() { return &___hollyStretchWidth_19; }
	inline void set_hollyStretchWidth_19(float value)
	{
		___hollyStretchWidth_19 = value;
	}

	inline static int32_t get_offset_of_lensflareIntensity_20() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___lensflareIntensity_20)); }
	inline float get_lensflareIntensity_20() const { return ___lensflareIntensity_20; }
	inline float* get_address_of_lensflareIntensity_20() { return &___lensflareIntensity_20; }
	inline void set_lensflareIntensity_20(float value)
	{
		___lensflareIntensity_20 = value;
	}

	inline static int32_t get_offset_of_lensflareThreshold_21() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___lensflareThreshold_21)); }
	inline float get_lensflareThreshold_21() const { return ___lensflareThreshold_21; }
	inline float* get_address_of_lensflareThreshold_21() { return &___lensflareThreshold_21; }
	inline void set_lensflareThreshold_21(float value)
	{
		___lensflareThreshold_21 = value;
	}

	inline static int32_t get_offset_of_lensFlareSaturation_22() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___lensFlareSaturation_22)); }
	inline float get_lensFlareSaturation_22() const { return ___lensFlareSaturation_22; }
	inline float* get_address_of_lensFlareSaturation_22() { return &___lensFlareSaturation_22; }
	inline void set_lensFlareSaturation_22(float value)
	{
		___lensFlareSaturation_22 = value;
	}

	inline static int32_t get_offset_of_flareColorA_23() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___flareColorA_23)); }
	inline Color_t2555686324  get_flareColorA_23() const { return ___flareColorA_23; }
	inline Color_t2555686324 * get_address_of_flareColorA_23() { return &___flareColorA_23; }
	inline void set_flareColorA_23(Color_t2555686324  value)
	{
		___flareColorA_23 = value;
	}

	inline static int32_t get_offset_of_flareColorB_24() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___flareColorB_24)); }
	inline Color_t2555686324  get_flareColorB_24() const { return ___flareColorB_24; }
	inline Color_t2555686324 * get_address_of_flareColorB_24() { return &___flareColorB_24; }
	inline void set_flareColorB_24(Color_t2555686324  value)
	{
		___flareColorB_24 = value;
	}

	inline static int32_t get_offset_of_flareColorC_25() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___flareColorC_25)); }
	inline Color_t2555686324  get_flareColorC_25() const { return ___flareColorC_25; }
	inline Color_t2555686324 * get_address_of_flareColorC_25() { return &___flareColorC_25; }
	inline void set_flareColorC_25(Color_t2555686324  value)
	{
		___flareColorC_25 = value;
	}

	inline static int32_t get_offset_of_flareColorD_26() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___flareColorD_26)); }
	inline Color_t2555686324  get_flareColorD_26() const { return ___flareColorD_26; }
	inline Color_t2555686324 * get_address_of_flareColorD_26() { return &___flareColorD_26; }
	inline void set_flareColorD_26(Color_t2555686324  value)
	{
		___flareColorD_26 = value;
	}

	inline static int32_t get_offset_of_lensFlareVignetteMask_27() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___lensFlareVignetteMask_27)); }
	inline Texture2D_t3840446185 * get_lensFlareVignetteMask_27() const { return ___lensFlareVignetteMask_27; }
	inline Texture2D_t3840446185 ** get_address_of_lensFlareVignetteMask_27() { return &___lensFlareVignetteMask_27; }
	inline void set_lensFlareVignetteMask_27(Texture2D_t3840446185 * value)
	{
		___lensFlareVignetteMask_27 = value;
		Il2CppCodeGenWriteBarrier((&___lensFlareVignetteMask_27), value);
	}

	inline static int32_t get_offset_of_lensFlareShader_28() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___lensFlareShader_28)); }
	inline Shader_t4151988712 * get_lensFlareShader_28() const { return ___lensFlareShader_28; }
	inline Shader_t4151988712 ** get_address_of_lensFlareShader_28() { return &___lensFlareShader_28; }
	inline void set_lensFlareShader_28(Shader_t4151988712 * value)
	{
		___lensFlareShader_28 = value;
		Il2CppCodeGenWriteBarrier((&___lensFlareShader_28), value);
	}

	inline static int32_t get_offset_of_lensFlareMaterial_29() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___lensFlareMaterial_29)); }
	inline Material_t340375123 * get_lensFlareMaterial_29() const { return ___lensFlareMaterial_29; }
	inline Material_t340375123 ** get_address_of_lensFlareMaterial_29() { return &___lensFlareMaterial_29; }
	inline void set_lensFlareMaterial_29(Material_t340375123 * value)
	{
		___lensFlareMaterial_29 = value;
		Il2CppCodeGenWriteBarrier((&___lensFlareMaterial_29), value);
	}

	inline static int32_t get_offset_of_screenBlendShader_30() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___screenBlendShader_30)); }
	inline Shader_t4151988712 * get_screenBlendShader_30() const { return ___screenBlendShader_30; }
	inline Shader_t4151988712 ** get_address_of_screenBlendShader_30() { return &___screenBlendShader_30; }
	inline void set_screenBlendShader_30(Shader_t4151988712 * value)
	{
		___screenBlendShader_30 = value;
		Il2CppCodeGenWriteBarrier((&___screenBlendShader_30), value);
	}

	inline static int32_t get_offset_of_screenBlend_31() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___screenBlend_31)); }
	inline Material_t340375123 * get_screenBlend_31() const { return ___screenBlend_31; }
	inline Material_t340375123 ** get_address_of_screenBlend_31() { return &___screenBlend_31; }
	inline void set_screenBlend_31(Material_t340375123 * value)
	{
		___screenBlend_31 = value;
		Il2CppCodeGenWriteBarrier((&___screenBlend_31), value);
	}

	inline static int32_t get_offset_of_blurAndFlaresShader_32() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___blurAndFlaresShader_32)); }
	inline Shader_t4151988712 * get_blurAndFlaresShader_32() const { return ___blurAndFlaresShader_32; }
	inline Shader_t4151988712 ** get_address_of_blurAndFlaresShader_32() { return &___blurAndFlaresShader_32; }
	inline void set_blurAndFlaresShader_32(Shader_t4151988712 * value)
	{
		___blurAndFlaresShader_32 = value;
		Il2CppCodeGenWriteBarrier((&___blurAndFlaresShader_32), value);
	}

	inline static int32_t get_offset_of_blurAndFlaresMaterial_33() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___blurAndFlaresMaterial_33)); }
	inline Material_t340375123 * get_blurAndFlaresMaterial_33() const { return ___blurAndFlaresMaterial_33; }
	inline Material_t340375123 ** get_address_of_blurAndFlaresMaterial_33() { return &___blurAndFlaresMaterial_33; }
	inline void set_blurAndFlaresMaterial_33(Material_t340375123 * value)
	{
		___blurAndFlaresMaterial_33 = value;
		Il2CppCodeGenWriteBarrier((&___blurAndFlaresMaterial_33), value);
	}

	inline static int32_t get_offset_of_brightPassFilterShader_34() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___brightPassFilterShader_34)); }
	inline Shader_t4151988712 * get_brightPassFilterShader_34() const { return ___brightPassFilterShader_34; }
	inline Shader_t4151988712 ** get_address_of_brightPassFilterShader_34() { return &___brightPassFilterShader_34; }
	inline void set_brightPassFilterShader_34(Shader_t4151988712 * value)
	{
		___brightPassFilterShader_34 = value;
		Il2CppCodeGenWriteBarrier((&___brightPassFilterShader_34), value);
	}

	inline static int32_t get_offset_of_brightPassFilterMaterial_35() { return static_cast<int32_t>(offsetof(Bloom_t1125654350, ___brightPassFilterMaterial_35)); }
	inline Material_t340375123 * get_brightPassFilterMaterial_35() const { return ___brightPassFilterMaterial_35; }
	inline Material_t340375123 ** get_address_of_brightPassFilterMaterial_35() { return &___brightPassFilterMaterial_35; }
	inline void set_brightPassFilterMaterial_35(Material_t340375123 * value)
	{
		___brightPassFilterMaterial_35 = value;
		Il2CppCodeGenWriteBarrier((&___brightPassFilterMaterial_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOOM_T1125654350_H
#ifndef DEPTHOFFIELDDEPRECATED_T4187663194_H
#define DEPTHOFFIELDDEPRECATED_T4187663194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated
struct  DepthOfFieldDeprecated_t4187663194  : public PostEffectsBase_t2404315739
{
public:
	// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/Dof34QualitySetting UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::quality
	int32_t ___quality_8;
	// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofResolution UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::resolution
	int32_t ___resolution_9;
	// System.Boolean UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::simpleTweakMode
	bool ___simpleTweakMode_10;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::focalPoint
	float ___focalPoint_11;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::smoothness
	float ___smoothness_12;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::focalZDistance
	float ___focalZDistance_13;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::focalZStartCurve
	float ___focalZStartCurve_14;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::focalZEndCurve
	float ___focalZEndCurve_15;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::focalStartCurve
	float ___focalStartCurve_16;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::focalEndCurve
	float ___focalEndCurve_17;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::focalDistance01
	float ___focalDistance01_18;
	// UnityEngine.Transform UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::objectFocus
	Transform_t3600365921 * ___objectFocus_19;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::focalSize
	float ___focalSize_20;
	// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::bluriness
	int32_t ___bluriness_21;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::maxBlurSpread
	float ___maxBlurSpread_22;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::foregroundBlurExtrude
	float ___foregroundBlurExtrude_23;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::dofBlurShader
	Shader_t4151988712 * ___dofBlurShader_24;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::dofBlurMaterial
	Material_t340375123 * ___dofBlurMaterial_25;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::dofShader
	Shader_t4151988712 * ___dofShader_26;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::dofMaterial
	Material_t340375123 * ___dofMaterial_27;
	// System.Boolean UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::visualize
	bool ___visualize_28;
	// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/BokehDestination UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::bokehDestination
	int32_t ___bokehDestination_29;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::widthOverHeight
	float ___widthOverHeight_30;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::oneOverBaseSize
	float ___oneOverBaseSize_31;
	// System.Boolean UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::bokeh
	bool ___bokeh_32;
	// System.Boolean UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::bokehSupport
	bool ___bokehSupport_33;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::bokehShader
	Shader_t4151988712 * ___bokehShader_34;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::bokehTexture
	Texture2D_t3840446185 * ___bokehTexture_35;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::bokehScale
	float ___bokehScale_36;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::bokehIntensity
	float ___bokehIntensity_37;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::bokehThresholdContrast
	float ___bokehThresholdContrast_38;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::bokehThresholdLuminance
	float ___bokehThresholdLuminance_39;
	// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::bokehDownsample
	int32_t ___bokehDownsample_40;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::bokehMaterial
	Material_t340375123 * ___bokehMaterial_41;
	// UnityEngine.Camera UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::_camera
	Camera_t4157153871 * ____camera_42;
	// UnityEngine.RenderTexture UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::foregroundTexture
	RenderTexture_t2108887433 * ___foregroundTexture_43;
	// UnityEngine.RenderTexture UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::mediumRezWorkTexture
	RenderTexture_t2108887433 * ___mediumRezWorkTexture_44;
	// UnityEngine.RenderTexture UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::finalDefocus
	RenderTexture_t2108887433 * ___finalDefocus_45;
	// UnityEngine.RenderTexture UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::lowRezWorkTexture
	RenderTexture_t2108887433 * ___lowRezWorkTexture_46;
	// UnityEngine.RenderTexture UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::bokehSource
	RenderTexture_t2108887433 * ___bokehSource_47;
	// UnityEngine.RenderTexture UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::bokehSource2
	RenderTexture_t2108887433 * ___bokehSource2_48;

public:
	inline static int32_t get_offset_of_quality_8() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___quality_8)); }
	inline int32_t get_quality_8() const { return ___quality_8; }
	inline int32_t* get_address_of_quality_8() { return &___quality_8; }
	inline void set_quality_8(int32_t value)
	{
		___quality_8 = value;
	}

	inline static int32_t get_offset_of_resolution_9() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___resolution_9)); }
	inline int32_t get_resolution_9() const { return ___resolution_9; }
	inline int32_t* get_address_of_resolution_9() { return &___resolution_9; }
	inline void set_resolution_9(int32_t value)
	{
		___resolution_9 = value;
	}

	inline static int32_t get_offset_of_simpleTweakMode_10() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___simpleTweakMode_10)); }
	inline bool get_simpleTweakMode_10() const { return ___simpleTweakMode_10; }
	inline bool* get_address_of_simpleTweakMode_10() { return &___simpleTweakMode_10; }
	inline void set_simpleTweakMode_10(bool value)
	{
		___simpleTweakMode_10 = value;
	}

	inline static int32_t get_offset_of_focalPoint_11() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___focalPoint_11)); }
	inline float get_focalPoint_11() const { return ___focalPoint_11; }
	inline float* get_address_of_focalPoint_11() { return &___focalPoint_11; }
	inline void set_focalPoint_11(float value)
	{
		___focalPoint_11 = value;
	}

	inline static int32_t get_offset_of_smoothness_12() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___smoothness_12)); }
	inline float get_smoothness_12() const { return ___smoothness_12; }
	inline float* get_address_of_smoothness_12() { return &___smoothness_12; }
	inline void set_smoothness_12(float value)
	{
		___smoothness_12 = value;
	}

	inline static int32_t get_offset_of_focalZDistance_13() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___focalZDistance_13)); }
	inline float get_focalZDistance_13() const { return ___focalZDistance_13; }
	inline float* get_address_of_focalZDistance_13() { return &___focalZDistance_13; }
	inline void set_focalZDistance_13(float value)
	{
		___focalZDistance_13 = value;
	}

	inline static int32_t get_offset_of_focalZStartCurve_14() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___focalZStartCurve_14)); }
	inline float get_focalZStartCurve_14() const { return ___focalZStartCurve_14; }
	inline float* get_address_of_focalZStartCurve_14() { return &___focalZStartCurve_14; }
	inline void set_focalZStartCurve_14(float value)
	{
		___focalZStartCurve_14 = value;
	}

	inline static int32_t get_offset_of_focalZEndCurve_15() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___focalZEndCurve_15)); }
	inline float get_focalZEndCurve_15() const { return ___focalZEndCurve_15; }
	inline float* get_address_of_focalZEndCurve_15() { return &___focalZEndCurve_15; }
	inline void set_focalZEndCurve_15(float value)
	{
		___focalZEndCurve_15 = value;
	}

	inline static int32_t get_offset_of_focalStartCurve_16() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___focalStartCurve_16)); }
	inline float get_focalStartCurve_16() const { return ___focalStartCurve_16; }
	inline float* get_address_of_focalStartCurve_16() { return &___focalStartCurve_16; }
	inline void set_focalStartCurve_16(float value)
	{
		___focalStartCurve_16 = value;
	}

	inline static int32_t get_offset_of_focalEndCurve_17() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___focalEndCurve_17)); }
	inline float get_focalEndCurve_17() const { return ___focalEndCurve_17; }
	inline float* get_address_of_focalEndCurve_17() { return &___focalEndCurve_17; }
	inline void set_focalEndCurve_17(float value)
	{
		___focalEndCurve_17 = value;
	}

	inline static int32_t get_offset_of_focalDistance01_18() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___focalDistance01_18)); }
	inline float get_focalDistance01_18() const { return ___focalDistance01_18; }
	inline float* get_address_of_focalDistance01_18() { return &___focalDistance01_18; }
	inline void set_focalDistance01_18(float value)
	{
		___focalDistance01_18 = value;
	}

	inline static int32_t get_offset_of_objectFocus_19() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___objectFocus_19)); }
	inline Transform_t3600365921 * get_objectFocus_19() const { return ___objectFocus_19; }
	inline Transform_t3600365921 ** get_address_of_objectFocus_19() { return &___objectFocus_19; }
	inline void set_objectFocus_19(Transform_t3600365921 * value)
	{
		___objectFocus_19 = value;
		Il2CppCodeGenWriteBarrier((&___objectFocus_19), value);
	}

	inline static int32_t get_offset_of_focalSize_20() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___focalSize_20)); }
	inline float get_focalSize_20() const { return ___focalSize_20; }
	inline float* get_address_of_focalSize_20() { return &___focalSize_20; }
	inline void set_focalSize_20(float value)
	{
		___focalSize_20 = value;
	}

	inline static int32_t get_offset_of_bluriness_21() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___bluriness_21)); }
	inline int32_t get_bluriness_21() const { return ___bluriness_21; }
	inline int32_t* get_address_of_bluriness_21() { return &___bluriness_21; }
	inline void set_bluriness_21(int32_t value)
	{
		___bluriness_21 = value;
	}

	inline static int32_t get_offset_of_maxBlurSpread_22() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___maxBlurSpread_22)); }
	inline float get_maxBlurSpread_22() const { return ___maxBlurSpread_22; }
	inline float* get_address_of_maxBlurSpread_22() { return &___maxBlurSpread_22; }
	inline void set_maxBlurSpread_22(float value)
	{
		___maxBlurSpread_22 = value;
	}

	inline static int32_t get_offset_of_foregroundBlurExtrude_23() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___foregroundBlurExtrude_23)); }
	inline float get_foregroundBlurExtrude_23() const { return ___foregroundBlurExtrude_23; }
	inline float* get_address_of_foregroundBlurExtrude_23() { return &___foregroundBlurExtrude_23; }
	inline void set_foregroundBlurExtrude_23(float value)
	{
		___foregroundBlurExtrude_23 = value;
	}

	inline static int32_t get_offset_of_dofBlurShader_24() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___dofBlurShader_24)); }
	inline Shader_t4151988712 * get_dofBlurShader_24() const { return ___dofBlurShader_24; }
	inline Shader_t4151988712 ** get_address_of_dofBlurShader_24() { return &___dofBlurShader_24; }
	inline void set_dofBlurShader_24(Shader_t4151988712 * value)
	{
		___dofBlurShader_24 = value;
		Il2CppCodeGenWriteBarrier((&___dofBlurShader_24), value);
	}

	inline static int32_t get_offset_of_dofBlurMaterial_25() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___dofBlurMaterial_25)); }
	inline Material_t340375123 * get_dofBlurMaterial_25() const { return ___dofBlurMaterial_25; }
	inline Material_t340375123 ** get_address_of_dofBlurMaterial_25() { return &___dofBlurMaterial_25; }
	inline void set_dofBlurMaterial_25(Material_t340375123 * value)
	{
		___dofBlurMaterial_25 = value;
		Il2CppCodeGenWriteBarrier((&___dofBlurMaterial_25), value);
	}

	inline static int32_t get_offset_of_dofShader_26() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___dofShader_26)); }
	inline Shader_t4151988712 * get_dofShader_26() const { return ___dofShader_26; }
	inline Shader_t4151988712 ** get_address_of_dofShader_26() { return &___dofShader_26; }
	inline void set_dofShader_26(Shader_t4151988712 * value)
	{
		___dofShader_26 = value;
		Il2CppCodeGenWriteBarrier((&___dofShader_26), value);
	}

	inline static int32_t get_offset_of_dofMaterial_27() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___dofMaterial_27)); }
	inline Material_t340375123 * get_dofMaterial_27() const { return ___dofMaterial_27; }
	inline Material_t340375123 ** get_address_of_dofMaterial_27() { return &___dofMaterial_27; }
	inline void set_dofMaterial_27(Material_t340375123 * value)
	{
		___dofMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((&___dofMaterial_27), value);
	}

	inline static int32_t get_offset_of_visualize_28() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___visualize_28)); }
	inline bool get_visualize_28() const { return ___visualize_28; }
	inline bool* get_address_of_visualize_28() { return &___visualize_28; }
	inline void set_visualize_28(bool value)
	{
		___visualize_28 = value;
	}

	inline static int32_t get_offset_of_bokehDestination_29() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___bokehDestination_29)); }
	inline int32_t get_bokehDestination_29() const { return ___bokehDestination_29; }
	inline int32_t* get_address_of_bokehDestination_29() { return &___bokehDestination_29; }
	inline void set_bokehDestination_29(int32_t value)
	{
		___bokehDestination_29 = value;
	}

	inline static int32_t get_offset_of_widthOverHeight_30() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___widthOverHeight_30)); }
	inline float get_widthOverHeight_30() const { return ___widthOverHeight_30; }
	inline float* get_address_of_widthOverHeight_30() { return &___widthOverHeight_30; }
	inline void set_widthOverHeight_30(float value)
	{
		___widthOverHeight_30 = value;
	}

	inline static int32_t get_offset_of_oneOverBaseSize_31() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___oneOverBaseSize_31)); }
	inline float get_oneOverBaseSize_31() const { return ___oneOverBaseSize_31; }
	inline float* get_address_of_oneOverBaseSize_31() { return &___oneOverBaseSize_31; }
	inline void set_oneOverBaseSize_31(float value)
	{
		___oneOverBaseSize_31 = value;
	}

	inline static int32_t get_offset_of_bokeh_32() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___bokeh_32)); }
	inline bool get_bokeh_32() const { return ___bokeh_32; }
	inline bool* get_address_of_bokeh_32() { return &___bokeh_32; }
	inline void set_bokeh_32(bool value)
	{
		___bokeh_32 = value;
	}

	inline static int32_t get_offset_of_bokehSupport_33() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___bokehSupport_33)); }
	inline bool get_bokehSupport_33() const { return ___bokehSupport_33; }
	inline bool* get_address_of_bokehSupport_33() { return &___bokehSupport_33; }
	inline void set_bokehSupport_33(bool value)
	{
		___bokehSupport_33 = value;
	}

	inline static int32_t get_offset_of_bokehShader_34() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___bokehShader_34)); }
	inline Shader_t4151988712 * get_bokehShader_34() const { return ___bokehShader_34; }
	inline Shader_t4151988712 ** get_address_of_bokehShader_34() { return &___bokehShader_34; }
	inline void set_bokehShader_34(Shader_t4151988712 * value)
	{
		___bokehShader_34 = value;
		Il2CppCodeGenWriteBarrier((&___bokehShader_34), value);
	}

	inline static int32_t get_offset_of_bokehTexture_35() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___bokehTexture_35)); }
	inline Texture2D_t3840446185 * get_bokehTexture_35() const { return ___bokehTexture_35; }
	inline Texture2D_t3840446185 ** get_address_of_bokehTexture_35() { return &___bokehTexture_35; }
	inline void set_bokehTexture_35(Texture2D_t3840446185 * value)
	{
		___bokehTexture_35 = value;
		Il2CppCodeGenWriteBarrier((&___bokehTexture_35), value);
	}

	inline static int32_t get_offset_of_bokehScale_36() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___bokehScale_36)); }
	inline float get_bokehScale_36() const { return ___bokehScale_36; }
	inline float* get_address_of_bokehScale_36() { return &___bokehScale_36; }
	inline void set_bokehScale_36(float value)
	{
		___bokehScale_36 = value;
	}

	inline static int32_t get_offset_of_bokehIntensity_37() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___bokehIntensity_37)); }
	inline float get_bokehIntensity_37() const { return ___bokehIntensity_37; }
	inline float* get_address_of_bokehIntensity_37() { return &___bokehIntensity_37; }
	inline void set_bokehIntensity_37(float value)
	{
		___bokehIntensity_37 = value;
	}

	inline static int32_t get_offset_of_bokehThresholdContrast_38() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___bokehThresholdContrast_38)); }
	inline float get_bokehThresholdContrast_38() const { return ___bokehThresholdContrast_38; }
	inline float* get_address_of_bokehThresholdContrast_38() { return &___bokehThresholdContrast_38; }
	inline void set_bokehThresholdContrast_38(float value)
	{
		___bokehThresholdContrast_38 = value;
	}

	inline static int32_t get_offset_of_bokehThresholdLuminance_39() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___bokehThresholdLuminance_39)); }
	inline float get_bokehThresholdLuminance_39() const { return ___bokehThresholdLuminance_39; }
	inline float* get_address_of_bokehThresholdLuminance_39() { return &___bokehThresholdLuminance_39; }
	inline void set_bokehThresholdLuminance_39(float value)
	{
		___bokehThresholdLuminance_39 = value;
	}

	inline static int32_t get_offset_of_bokehDownsample_40() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___bokehDownsample_40)); }
	inline int32_t get_bokehDownsample_40() const { return ___bokehDownsample_40; }
	inline int32_t* get_address_of_bokehDownsample_40() { return &___bokehDownsample_40; }
	inline void set_bokehDownsample_40(int32_t value)
	{
		___bokehDownsample_40 = value;
	}

	inline static int32_t get_offset_of_bokehMaterial_41() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___bokehMaterial_41)); }
	inline Material_t340375123 * get_bokehMaterial_41() const { return ___bokehMaterial_41; }
	inline Material_t340375123 ** get_address_of_bokehMaterial_41() { return &___bokehMaterial_41; }
	inline void set_bokehMaterial_41(Material_t340375123 * value)
	{
		___bokehMaterial_41 = value;
		Il2CppCodeGenWriteBarrier((&___bokehMaterial_41), value);
	}

	inline static int32_t get_offset_of__camera_42() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ____camera_42)); }
	inline Camera_t4157153871 * get__camera_42() const { return ____camera_42; }
	inline Camera_t4157153871 ** get_address_of__camera_42() { return &____camera_42; }
	inline void set__camera_42(Camera_t4157153871 * value)
	{
		____camera_42 = value;
		Il2CppCodeGenWriteBarrier((&____camera_42), value);
	}

	inline static int32_t get_offset_of_foregroundTexture_43() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___foregroundTexture_43)); }
	inline RenderTexture_t2108887433 * get_foregroundTexture_43() const { return ___foregroundTexture_43; }
	inline RenderTexture_t2108887433 ** get_address_of_foregroundTexture_43() { return &___foregroundTexture_43; }
	inline void set_foregroundTexture_43(RenderTexture_t2108887433 * value)
	{
		___foregroundTexture_43 = value;
		Il2CppCodeGenWriteBarrier((&___foregroundTexture_43), value);
	}

	inline static int32_t get_offset_of_mediumRezWorkTexture_44() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___mediumRezWorkTexture_44)); }
	inline RenderTexture_t2108887433 * get_mediumRezWorkTexture_44() const { return ___mediumRezWorkTexture_44; }
	inline RenderTexture_t2108887433 ** get_address_of_mediumRezWorkTexture_44() { return &___mediumRezWorkTexture_44; }
	inline void set_mediumRezWorkTexture_44(RenderTexture_t2108887433 * value)
	{
		___mediumRezWorkTexture_44 = value;
		Il2CppCodeGenWriteBarrier((&___mediumRezWorkTexture_44), value);
	}

	inline static int32_t get_offset_of_finalDefocus_45() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___finalDefocus_45)); }
	inline RenderTexture_t2108887433 * get_finalDefocus_45() const { return ___finalDefocus_45; }
	inline RenderTexture_t2108887433 ** get_address_of_finalDefocus_45() { return &___finalDefocus_45; }
	inline void set_finalDefocus_45(RenderTexture_t2108887433 * value)
	{
		___finalDefocus_45 = value;
		Il2CppCodeGenWriteBarrier((&___finalDefocus_45), value);
	}

	inline static int32_t get_offset_of_lowRezWorkTexture_46() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___lowRezWorkTexture_46)); }
	inline RenderTexture_t2108887433 * get_lowRezWorkTexture_46() const { return ___lowRezWorkTexture_46; }
	inline RenderTexture_t2108887433 ** get_address_of_lowRezWorkTexture_46() { return &___lowRezWorkTexture_46; }
	inline void set_lowRezWorkTexture_46(RenderTexture_t2108887433 * value)
	{
		___lowRezWorkTexture_46 = value;
		Il2CppCodeGenWriteBarrier((&___lowRezWorkTexture_46), value);
	}

	inline static int32_t get_offset_of_bokehSource_47() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___bokehSource_47)); }
	inline RenderTexture_t2108887433 * get_bokehSource_47() const { return ___bokehSource_47; }
	inline RenderTexture_t2108887433 ** get_address_of_bokehSource_47() { return &___bokehSource_47; }
	inline void set_bokehSource_47(RenderTexture_t2108887433 * value)
	{
		___bokehSource_47 = value;
		Il2CppCodeGenWriteBarrier((&___bokehSource_47), value);
	}

	inline static int32_t get_offset_of_bokehSource2_48() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194, ___bokehSource2_48)); }
	inline RenderTexture_t2108887433 * get_bokehSource2_48() const { return ___bokehSource2_48; }
	inline RenderTexture_t2108887433 ** get_address_of_bokehSource2_48() { return &___bokehSource2_48; }
	inline void set_bokehSource2_48(RenderTexture_t2108887433 * value)
	{
		___bokehSource2_48 = value;
		Il2CppCodeGenWriteBarrier((&___bokehSource2_48), value);
	}
};

struct DepthOfFieldDeprecated_t4187663194_StaticFields
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::SMOOTH_DOWNSAMPLE_PASS
	int32_t ___SMOOTH_DOWNSAMPLE_PASS_6;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::BOKEH_EXTRA_BLUR
	float ___BOKEH_EXTRA_BLUR_7;

public:
	inline static int32_t get_offset_of_SMOOTH_DOWNSAMPLE_PASS_6() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194_StaticFields, ___SMOOTH_DOWNSAMPLE_PASS_6)); }
	inline int32_t get_SMOOTH_DOWNSAMPLE_PASS_6() const { return ___SMOOTH_DOWNSAMPLE_PASS_6; }
	inline int32_t* get_address_of_SMOOTH_DOWNSAMPLE_PASS_6() { return &___SMOOTH_DOWNSAMPLE_PASS_6; }
	inline void set_SMOOTH_DOWNSAMPLE_PASS_6(int32_t value)
	{
		___SMOOTH_DOWNSAMPLE_PASS_6 = value;
	}

	inline static int32_t get_offset_of_BOKEH_EXTRA_BLUR_7() { return static_cast<int32_t>(offsetof(DepthOfFieldDeprecated_t4187663194_StaticFields, ___BOKEH_EXTRA_BLUR_7)); }
	inline float get_BOKEH_EXTRA_BLUR_7() const { return ___BOKEH_EXTRA_BLUR_7; }
	inline float* get_address_of_BOKEH_EXTRA_BLUR_7() { return &___BOKEH_EXTRA_BLUR_7; }
	inline void set_BOKEH_EXTRA_BLUR_7(float value)
	{
		___BOKEH_EXTRA_BLUR_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEPTHOFFIELDDEPRECATED_T4187663194_H
#ifndef DEPTHOFFIELD_T1116783936_H
#define DEPTHOFFIELD_T1116783936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.DepthOfField
struct  DepthOfField_t1116783936  : public PostEffectsBase_t2404315739
{
public:
	// System.Boolean UnityStandardAssets.ImageEffects.DepthOfField::visualizeFocus
	bool ___visualizeFocus_6;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::focalLength
	float ___focalLength_7;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::focalSize
	float ___focalSize_8;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::aperture
	float ___aperture_9;
	// UnityEngine.Transform UnityStandardAssets.ImageEffects.DepthOfField::focalTransform
	Transform_t3600365921 * ___focalTransform_10;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::maxBlurSize
	float ___maxBlurSize_11;
	// System.Boolean UnityStandardAssets.ImageEffects.DepthOfField::highResolution
	bool ___highResolution_12;
	// UnityStandardAssets.ImageEffects.DepthOfField/BlurType UnityStandardAssets.ImageEffects.DepthOfField::blurType
	int32_t ___blurType_13;
	// UnityStandardAssets.ImageEffects.DepthOfField/BlurSampleCount UnityStandardAssets.ImageEffects.DepthOfField::blurSampleCount
	int32_t ___blurSampleCount_14;
	// System.Boolean UnityStandardAssets.ImageEffects.DepthOfField::nearBlur
	bool ___nearBlur_15;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::foregroundOverlap
	float ___foregroundOverlap_16;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.DepthOfField::dofHdrShader
	Shader_t4151988712 * ___dofHdrShader_17;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.DepthOfField::dofHdrMaterial
	Material_t340375123 * ___dofHdrMaterial_18;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehShader
	Shader_t4151988712 * ___dx11BokehShader_19;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.DepthOfField::dx11bokehMaterial
	Material_t340375123 * ___dx11bokehMaterial_20;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehThreshold
	float ___dx11BokehThreshold_21;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::dx11SpawnHeuristic
	float ___dx11SpawnHeuristic_22;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehTexture
	Texture2D_t3840446185 * ___dx11BokehTexture_23;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehScale
	float ___dx11BokehScale_24;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehIntensity
	float ___dx11BokehIntensity_25;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::focalDistance01
	float ___focalDistance01_26;
	// UnityEngine.ComputeBuffer UnityStandardAssets.ImageEffects.DepthOfField::cbDrawArgs
	ComputeBuffer_t1033194329 * ___cbDrawArgs_27;
	// UnityEngine.ComputeBuffer UnityStandardAssets.ImageEffects.DepthOfField::cbPoints
	ComputeBuffer_t1033194329 * ___cbPoints_28;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::internalBlurWidth
	float ___internalBlurWidth_29;
	// UnityEngine.Camera UnityStandardAssets.ImageEffects.DepthOfField::cachedCamera
	Camera_t4157153871 * ___cachedCamera_30;

public:
	inline static int32_t get_offset_of_visualizeFocus_6() { return static_cast<int32_t>(offsetof(DepthOfField_t1116783936, ___visualizeFocus_6)); }
	inline bool get_visualizeFocus_6() const { return ___visualizeFocus_6; }
	inline bool* get_address_of_visualizeFocus_6() { return &___visualizeFocus_6; }
	inline void set_visualizeFocus_6(bool value)
	{
		___visualizeFocus_6 = value;
	}

	inline static int32_t get_offset_of_focalLength_7() { return static_cast<int32_t>(offsetof(DepthOfField_t1116783936, ___focalLength_7)); }
	inline float get_focalLength_7() const { return ___focalLength_7; }
	inline float* get_address_of_focalLength_7() { return &___focalLength_7; }
	inline void set_focalLength_7(float value)
	{
		___focalLength_7 = value;
	}

	inline static int32_t get_offset_of_focalSize_8() { return static_cast<int32_t>(offsetof(DepthOfField_t1116783936, ___focalSize_8)); }
	inline float get_focalSize_8() const { return ___focalSize_8; }
	inline float* get_address_of_focalSize_8() { return &___focalSize_8; }
	inline void set_focalSize_8(float value)
	{
		___focalSize_8 = value;
	}

	inline static int32_t get_offset_of_aperture_9() { return static_cast<int32_t>(offsetof(DepthOfField_t1116783936, ___aperture_9)); }
	inline float get_aperture_9() const { return ___aperture_9; }
	inline float* get_address_of_aperture_9() { return &___aperture_9; }
	inline void set_aperture_9(float value)
	{
		___aperture_9 = value;
	}

	inline static int32_t get_offset_of_focalTransform_10() { return static_cast<int32_t>(offsetof(DepthOfField_t1116783936, ___focalTransform_10)); }
	inline Transform_t3600365921 * get_focalTransform_10() const { return ___focalTransform_10; }
	inline Transform_t3600365921 ** get_address_of_focalTransform_10() { return &___focalTransform_10; }
	inline void set_focalTransform_10(Transform_t3600365921 * value)
	{
		___focalTransform_10 = value;
		Il2CppCodeGenWriteBarrier((&___focalTransform_10), value);
	}

	inline static int32_t get_offset_of_maxBlurSize_11() { return static_cast<int32_t>(offsetof(DepthOfField_t1116783936, ___maxBlurSize_11)); }
	inline float get_maxBlurSize_11() const { return ___maxBlurSize_11; }
	inline float* get_address_of_maxBlurSize_11() { return &___maxBlurSize_11; }
	inline void set_maxBlurSize_11(float value)
	{
		___maxBlurSize_11 = value;
	}

	inline static int32_t get_offset_of_highResolution_12() { return static_cast<int32_t>(offsetof(DepthOfField_t1116783936, ___highResolution_12)); }
	inline bool get_highResolution_12() const { return ___highResolution_12; }
	inline bool* get_address_of_highResolution_12() { return &___highResolution_12; }
	inline void set_highResolution_12(bool value)
	{
		___highResolution_12 = value;
	}

	inline static int32_t get_offset_of_blurType_13() { return static_cast<int32_t>(offsetof(DepthOfField_t1116783936, ___blurType_13)); }
	inline int32_t get_blurType_13() const { return ___blurType_13; }
	inline int32_t* get_address_of_blurType_13() { return &___blurType_13; }
	inline void set_blurType_13(int32_t value)
	{
		___blurType_13 = value;
	}

	inline static int32_t get_offset_of_blurSampleCount_14() { return static_cast<int32_t>(offsetof(DepthOfField_t1116783936, ___blurSampleCount_14)); }
	inline int32_t get_blurSampleCount_14() const { return ___blurSampleCount_14; }
	inline int32_t* get_address_of_blurSampleCount_14() { return &___blurSampleCount_14; }
	inline void set_blurSampleCount_14(int32_t value)
	{
		___blurSampleCount_14 = value;
	}

	inline static int32_t get_offset_of_nearBlur_15() { return static_cast<int32_t>(offsetof(DepthOfField_t1116783936, ___nearBlur_15)); }
	inline bool get_nearBlur_15() const { return ___nearBlur_15; }
	inline bool* get_address_of_nearBlur_15() { return &___nearBlur_15; }
	inline void set_nearBlur_15(bool value)
	{
		___nearBlur_15 = value;
	}

	inline static int32_t get_offset_of_foregroundOverlap_16() { return static_cast<int32_t>(offsetof(DepthOfField_t1116783936, ___foregroundOverlap_16)); }
	inline float get_foregroundOverlap_16() const { return ___foregroundOverlap_16; }
	inline float* get_address_of_foregroundOverlap_16() { return &___foregroundOverlap_16; }
	inline void set_foregroundOverlap_16(float value)
	{
		___foregroundOverlap_16 = value;
	}

	inline static int32_t get_offset_of_dofHdrShader_17() { return static_cast<int32_t>(offsetof(DepthOfField_t1116783936, ___dofHdrShader_17)); }
	inline Shader_t4151988712 * get_dofHdrShader_17() const { return ___dofHdrShader_17; }
	inline Shader_t4151988712 ** get_address_of_dofHdrShader_17() { return &___dofHdrShader_17; }
	inline void set_dofHdrShader_17(Shader_t4151988712 * value)
	{
		___dofHdrShader_17 = value;
		Il2CppCodeGenWriteBarrier((&___dofHdrShader_17), value);
	}

	inline static int32_t get_offset_of_dofHdrMaterial_18() { return static_cast<int32_t>(offsetof(DepthOfField_t1116783936, ___dofHdrMaterial_18)); }
	inline Material_t340375123 * get_dofHdrMaterial_18() const { return ___dofHdrMaterial_18; }
	inline Material_t340375123 ** get_address_of_dofHdrMaterial_18() { return &___dofHdrMaterial_18; }
	inline void set_dofHdrMaterial_18(Material_t340375123 * value)
	{
		___dofHdrMaterial_18 = value;
		Il2CppCodeGenWriteBarrier((&___dofHdrMaterial_18), value);
	}

	inline static int32_t get_offset_of_dx11BokehShader_19() { return static_cast<int32_t>(offsetof(DepthOfField_t1116783936, ___dx11BokehShader_19)); }
	inline Shader_t4151988712 * get_dx11BokehShader_19() const { return ___dx11BokehShader_19; }
	inline Shader_t4151988712 ** get_address_of_dx11BokehShader_19() { return &___dx11BokehShader_19; }
	inline void set_dx11BokehShader_19(Shader_t4151988712 * value)
	{
		___dx11BokehShader_19 = value;
		Il2CppCodeGenWriteBarrier((&___dx11BokehShader_19), value);
	}

	inline static int32_t get_offset_of_dx11bokehMaterial_20() { return static_cast<int32_t>(offsetof(DepthOfField_t1116783936, ___dx11bokehMaterial_20)); }
	inline Material_t340375123 * get_dx11bokehMaterial_20() const { return ___dx11bokehMaterial_20; }
	inline Material_t340375123 ** get_address_of_dx11bokehMaterial_20() { return &___dx11bokehMaterial_20; }
	inline void set_dx11bokehMaterial_20(Material_t340375123 * value)
	{
		___dx11bokehMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___dx11bokehMaterial_20), value);
	}

	inline static int32_t get_offset_of_dx11BokehThreshold_21() { return static_cast<int32_t>(offsetof(DepthOfField_t1116783936, ___dx11BokehThreshold_21)); }
	inline float get_dx11BokehThreshold_21() const { return ___dx11BokehThreshold_21; }
	inline float* get_address_of_dx11BokehThreshold_21() { return &___dx11BokehThreshold_21; }
	inline void set_dx11BokehThreshold_21(float value)
	{
		___dx11BokehThreshold_21 = value;
	}

	inline static int32_t get_offset_of_dx11SpawnHeuristic_22() { return static_cast<int32_t>(offsetof(DepthOfField_t1116783936, ___dx11SpawnHeuristic_22)); }
	inline float get_dx11SpawnHeuristic_22() const { return ___dx11SpawnHeuristic_22; }
	inline float* get_address_of_dx11SpawnHeuristic_22() { return &___dx11SpawnHeuristic_22; }
	inline void set_dx11SpawnHeuristic_22(float value)
	{
		___dx11SpawnHeuristic_22 = value;
	}

	inline static int32_t get_offset_of_dx11BokehTexture_23() { return static_cast<int32_t>(offsetof(DepthOfField_t1116783936, ___dx11BokehTexture_23)); }
	inline Texture2D_t3840446185 * get_dx11BokehTexture_23() const { return ___dx11BokehTexture_23; }
	inline Texture2D_t3840446185 ** get_address_of_dx11BokehTexture_23() { return &___dx11BokehTexture_23; }
	inline void set_dx11BokehTexture_23(Texture2D_t3840446185 * value)
	{
		___dx11BokehTexture_23 = value;
		Il2CppCodeGenWriteBarrier((&___dx11BokehTexture_23), value);
	}

	inline static int32_t get_offset_of_dx11BokehScale_24() { return static_cast<int32_t>(offsetof(DepthOfField_t1116783936, ___dx11BokehScale_24)); }
	inline float get_dx11BokehScale_24() const { return ___dx11BokehScale_24; }
	inline float* get_address_of_dx11BokehScale_24() { return &___dx11BokehScale_24; }
	inline void set_dx11BokehScale_24(float value)
	{
		___dx11BokehScale_24 = value;
	}

	inline static int32_t get_offset_of_dx11BokehIntensity_25() { return static_cast<int32_t>(offsetof(DepthOfField_t1116783936, ___dx11BokehIntensity_25)); }
	inline float get_dx11BokehIntensity_25() const { return ___dx11BokehIntensity_25; }
	inline float* get_address_of_dx11BokehIntensity_25() { return &___dx11BokehIntensity_25; }
	inline void set_dx11BokehIntensity_25(float value)
	{
		___dx11BokehIntensity_25 = value;
	}

	inline static int32_t get_offset_of_focalDistance01_26() { return static_cast<int32_t>(offsetof(DepthOfField_t1116783936, ___focalDistance01_26)); }
	inline float get_focalDistance01_26() const { return ___focalDistance01_26; }
	inline float* get_address_of_focalDistance01_26() { return &___focalDistance01_26; }
	inline void set_focalDistance01_26(float value)
	{
		___focalDistance01_26 = value;
	}

	inline static int32_t get_offset_of_cbDrawArgs_27() { return static_cast<int32_t>(offsetof(DepthOfField_t1116783936, ___cbDrawArgs_27)); }
	inline ComputeBuffer_t1033194329 * get_cbDrawArgs_27() const { return ___cbDrawArgs_27; }
	inline ComputeBuffer_t1033194329 ** get_address_of_cbDrawArgs_27() { return &___cbDrawArgs_27; }
	inline void set_cbDrawArgs_27(ComputeBuffer_t1033194329 * value)
	{
		___cbDrawArgs_27 = value;
		Il2CppCodeGenWriteBarrier((&___cbDrawArgs_27), value);
	}

	inline static int32_t get_offset_of_cbPoints_28() { return static_cast<int32_t>(offsetof(DepthOfField_t1116783936, ___cbPoints_28)); }
	inline ComputeBuffer_t1033194329 * get_cbPoints_28() const { return ___cbPoints_28; }
	inline ComputeBuffer_t1033194329 ** get_address_of_cbPoints_28() { return &___cbPoints_28; }
	inline void set_cbPoints_28(ComputeBuffer_t1033194329 * value)
	{
		___cbPoints_28 = value;
		Il2CppCodeGenWriteBarrier((&___cbPoints_28), value);
	}

	inline static int32_t get_offset_of_internalBlurWidth_29() { return static_cast<int32_t>(offsetof(DepthOfField_t1116783936, ___internalBlurWidth_29)); }
	inline float get_internalBlurWidth_29() const { return ___internalBlurWidth_29; }
	inline float* get_address_of_internalBlurWidth_29() { return &___internalBlurWidth_29; }
	inline void set_internalBlurWidth_29(float value)
	{
		___internalBlurWidth_29 = value;
	}

	inline static int32_t get_offset_of_cachedCamera_30() { return static_cast<int32_t>(offsetof(DepthOfField_t1116783936, ___cachedCamera_30)); }
	inline Camera_t4157153871 * get_cachedCamera_30() const { return ___cachedCamera_30; }
	inline Camera_t4157153871 ** get_address_of_cachedCamera_30() { return &___cachedCamera_30; }
	inline void set_cachedCamera_30(Camera_t4157153871 * value)
	{
		___cachedCamera_30 = value;
		Il2CppCodeGenWriteBarrier((&___cachedCamera_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEPTHOFFIELD_T1116783936_H
#ifndef CREASESHADING_T1200394124_H
#define CREASESHADING_T1200394124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.CreaseShading
struct  CreaseShading_t1200394124  : public PostEffectsBase_t2404315739
{
public:
	// System.Single UnityStandardAssets.ImageEffects.CreaseShading::intensity
	float ___intensity_6;
	// System.Int32 UnityStandardAssets.ImageEffects.CreaseShading::softness
	int32_t ___softness_7;
	// System.Single UnityStandardAssets.ImageEffects.CreaseShading::spread
	float ___spread_8;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.CreaseShading::blurShader
	Shader_t4151988712 * ___blurShader_9;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.CreaseShading::blurMaterial
	Material_t340375123 * ___blurMaterial_10;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.CreaseShading::depthFetchShader
	Shader_t4151988712 * ___depthFetchShader_11;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.CreaseShading::depthFetchMaterial
	Material_t340375123 * ___depthFetchMaterial_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.CreaseShading::creaseApplyShader
	Shader_t4151988712 * ___creaseApplyShader_13;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.CreaseShading::creaseApplyMaterial
	Material_t340375123 * ___creaseApplyMaterial_14;

public:
	inline static int32_t get_offset_of_intensity_6() { return static_cast<int32_t>(offsetof(CreaseShading_t1200394124, ___intensity_6)); }
	inline float get_intensity_6() const { return ___intensity_6; }
	inline float* get_address_of_intensity_6() { return &___intensity_6; }
	inline void set_intensity_6(float value)
	{
		___intensity_6 = value;
	}

	inline static int32_t get_offset_of_softness_7() { return static_cast<int32_t>(offsetof(CreaseShading_t1200394124, ___softness_7)); }
	inline int32_t get_softness_7() const { return ___softness_7; }
	inline int32_t* get_address_of_softness_7() { return &___softness_7; }
	inline void set_softness_7(int32_t value)
	{
		___softness_7 = value;
	}

	inline static int32_t get_offset_of_spread_8() { return static_cast<int32_t>(offsetof(CreaseShading_t1200394124, ___spread_8)); }
	inline float get_spread_8() const { return ___spread_8; }
	inline float* get_address_of_spread_8() { return &___spread_8; }
	inline void set_spread_8(float value)
	{
		___spread_8 = value;
	}

	inline static int32_t get_offset_of_blurShader_9() { return static_cast<int32_t>(offsetof(CreaseShading_t1200394124, ___blurShader_9)); }
	inline Shader_t4151988712 * get_blurShader_9() const { return ___blurShader_9; }
	inline Shader_t4151988712 ** get_address_of_blurShader_9() { return &___blurShader_9; }
	inline void set_blurShader_9(Shader_t4151988712 * value)
	{
		___blurShader_9 = value;
		Il2CppCodeGenWriteBarrier((&___blurShader_9), value);
	}

	inline static int32_t get_offset_of_blurMaterial_10() { return static_cast<int32_t>(offsetof(CreaseShading_t1200394124, ___blurMaterial_10)); }
	inline Material_t340375123 * get_blurMaterial_10() const { return ___blurMaterial_10; }
	inline Material_t340375123 ** get_address_of_blurMaterial_10() { return &___blurMaterial_10; }
	inline void set_blurMaterial_10(Material_t340375123 * value)
	{
		___blurMaterial_10 = value;
		Il2CppCodeGenWriteBarrier((&___blurMaterial_10), value);
	}

	inline static int32_t get_offset_of_depthFetchShader_11() { return static_cast<int32_t>(offsetof(CreaseShading_t1200394124, ___depthFetchShader_11)); }
	inline Shader_t4151988712 * get_depthFetchShader_11() const { return ___depthFetchShader_11; }
	inline Shader_t4151988712 ** get_address_of_depthFetchShader_11() { return &___depthFetchShader_11; }
	inline void set_depthFetchShader_11(Shader_t4151988712 * value)
	{
		___depthFetchShader_11 = value;
		Il2CppCodeGenWriteBarrier((&___depthFetchShader_11), value);
	}

	inline static int32_t get_offset_of_depthFetchMaterial_12() { return static_cast<int32_t>(offsetof(CreaseShading_t1200394124, ___depthFetchMaterial_12)); }
	inline Material_t340375123 * get_depthFetchMaterial_12() const { return ___depthFetchMaterial_12; }
	inline Material_t340375123 ** get_address_of_depthFetchMaterial_12() { return &___depthFetchMaterial_12; }
	inline void set_depthFetchMaterial_12(Material_t340375123 * value)
	{
		___depthFetchMaterial_12 = value;
		Il2CppCodeGenWriteBarrier((&___depthFetchMaterial_12), value);
	}

	inline static int32_t get_offset_of_creaseApplyShader_13() { return static_cast<int32_t>(offsetof(CreaseShading_t1200394124, ___creaseApplyShader_13)); }
	inline Shader_t4151988712 * get_creaseApplyShader_13() const { return ___creaseApplyShader_13; }
	inline Shader_t4151988712 ** get_address_of_creaseApplyShader_13() { return &___creaseApplyShader_13; }
	inline void set_creaseApplyShader_13(Shader_t4151988712 * value)
	{
		___creaseApplyShader_13 = value;
		Il2CppCodeGenWriteBarrier((&___creaseApplyShader_13), value);
	}

	inline static int32_t get_offset_of_creaseApplyMaterial_14() { return static_cast<int32_t>(offsetof(CreaseShading_t1200394124, ___creaseApplyMaterial_14)); }
	inline Material_t340375123 * get_creaseApplyMaterial_14() const { return ___creaseApplyMaterial_14; }
	inline Material_t340375123 ** get_address_of_creaseApplyMaterial_14() { return &___creaseApplyMaterial_14; }
	inline void set_creaseApplyMaterial_14(Material_t340375123 * value)
	{
		___creaseApplyMaterial_14 = value;
		Il2CppCodeGenWriteBarrier((&___creaseApplyMaterial_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREASESHADING_T1200394124_H
#ifndef BLOOMOPTIMIZED_T2685819829_H
#define BLOOMOPTIMIZED_T2685819829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.BloomOptimized
struct  BloomOptimized_t2685819829  : public PostEffectsBase_t2404315739
{
public:
	// System.Single UnityStandardAssets.ImageEffects.BloomOptimized::threshold
	float ___threshold_6;
	// System.Single UnityStandardAssets.ImageEffects.BloomOptimized::intensity
	float ___intensity_7;
	// System.Single UnityStandardAssets.ImageEffects.BloomOptimized::blurSize
	float ___blurSize_8;
	// UnityStandardAssets.ImageEffects.BloomOptimized/Resolution UnityStandardAssets.ImageEffects.BloomOptimized::resolution
	int32_t ___resolution_9;
	// System.Int32 UnityStandardAssets.ImageEffects.BloomOptimized::blurIterations
	int32_t ___blurIterations_10;
	// UnityStandardAssets.ImageEffects.BloomOptimized/BlurType UnityStandardAssets.ImageEffects.BloomOptimized::blurType
	int32_t ___blurType_11;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomOptimized::fastBloomShader
	Shader_t4151988712 * ___fastBloomShader_12;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomOptimized::fastBloomMaterial
	Material_t340375123 * ___fastBloomMaterial_13;

public:
	inline static int32_t get_offset_of_threshold_6() { return static_cast<int32_t>(offsetof(BloomOptimized_t2685819829, ___threshold_6)); }
	inline float get_threshold_6() const { return ___threshold_6; }
	inline float* get_address_of_threshold_6() { return &___threshold_6; }
	inline void set_threshold_6(float value)
	{
		___threshold_6 = value;
	}

	inline static int32_t get_offset_of_intensity_7() { return static_cast<int32_t>(offsetof(BloomOptimized_t2685819829, ___intensity_7)); }
	inline float get_intensity_7() const { return ___intensity_7; }
	inline float* get_address_of_intensity_7() { return &___intensity_7; }
	inline void set_intensity_7(float value)
	{
		___intensity_7 = value;
	}

	inline static int32_t get_offset_of_blurSize_8() { return static_cast<int32_t>(offsetof(BloomOptimized_t2685819829, ___blurSize_8)); }
	inline float get_blurSize_8() const { return ___blurSize_8; }
	inline float* get_address_of_blurSize_8() { return &___blurSize_8; }
	inline void set_blurSize_8(float value)
	{
		___blurSize_8 = value;
	}

	inline static int32_t get_offset_of_resolution_9() { return static_cast<int32_t>(offsetof(BloomOptimized_t2685819829, ___resolution_9)); }
	inline int32_t get_resolution_9() const { return ___resolution_9; }
	inline int32_t* get_address_of_resolution_9() { return &___resolution_9; }
	inline void set_resolution_9(int32_t value)
	{
		___resolution_9 = value;
	}

	inline static int32_t get_offset_of_blurIterations_10() { return static_cast<int32_t>(offsetof(BloomOptimized_t2685819829, ___blurIterations_10)); }
	inline int32_t get_blurIterations_10() const { return ___blurIterations_10; }
	inline int32_t* get_address_of_blurIterations_10() { return &___blurIterations_10; }
	inline void set_blurIterations_10(int32_t value)
	{
		___blurIterations_10 = value;
	}

	inline static int32_t get_offset_of_blurType_11() { return static_cast<int32_t>(offsetof(BloomOptimized_t2685819829, ___blurType_11)); }
	inline int32_t get_blurType_11() const { return ___blurType_11; }
	inline int32_t* get_address_of_blurType_11() { return &___blurType_11; }
	inline void set_blurType_11(int32_t value)
	{
		___blurType_11 = value;
	}

	inline static int32_t get_offset_of_fastBloomShader_12() { return static_cast<int32_t>(offsetof(BloomOptimized_t2685819829, ___fastBloomShader_12)); }
	inline Shader_t4151988712 * get_fastBloomShader_12() const { return ___fastBloomShader_12; }
	inline Shader_t4151988712 ** get_address_of_fastBloomShader_12() { return &___fastBloomShader_12; }
	inline void set_fastBloomShader_12(Shader_t4151988712 * value)
	{
		___fastBloomShader_12 = value;
		Il2CppCodeGenWriteBarrier((&___fastBloomShader_12), value);
	}

	inline static int32_t get_offset_of_fastBloomMaterial_13() { return static_cast<int32_t>(offsetof(BloomOptimized_t2685819829, ___fastBloomMaterial_13)); }
	inline Material_t340375123 * get_fastBloomMaterial_13() const { return ___fastBloomMaterial_13; }
	inline Material_t340375123 ** get_address_of_fastBloomMaterial_13() { return &___fastBloomMaterial_13; }
	inline void set_fastBloomMaterial_13(Material_t340375123 * value)
	{
		___fastBloomMaterial_13 = value;
		Il2CppCodeGenWriteBarrier((&___fastBloomMaterial_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOOMOPTIMIZED_T2685819829_H
#ifndef BLUROPTIMIZED_T3334654964_H
#define BLUROPTIMIZED_T3334654964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.BlurOptimized
struct  BlurOptimized_t3334654964  : public PostEffectsBase_t2404315739
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.BlurOptimized::downsample
	int32_t ___downsample_6;
	// System.Single UnityStandardAssets.ImageEffects.BlurOptimized::blurSize
	float ___blurSize_7;
	// System.Int32 UnityStandardAssets.ImageEffects.BlurOptimized::blurIterations
	int32_t ___blurIterations_8;
	// UnityStandardAssets.ImageEffects.BlurOptimized/BlurType UnityStandardAssets.ImageEffects.BlurOptimized::blurType
	int32_t ___blurType_9;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BlurOptimized::blurShader
	Shader_t4151988712 * ___blurShader_10;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BlurOptimized::blurMaterial
	Material_t340375123 * ___blurMaterial_11;

public:
	inline static int32_t get_offset_of_downsample_6() { return static_cast<int32_t>(offsetof(BlurOptimized_t3334654964, ___downsample_6)); }
	inline int32_t get_downsample_6() const { return ___downsample_6; }
	inline int32_t* get_address_of_downsample_6() { return &___downsample_6; }
	inline void set_downsample_6(int32_t value)
	{
		___downsample_6 = value;
	}

	inline static int32_t get_offset_of_blurSize_7() { return static_cast<int32_t>(offsetof(BlurOptimized_t3334654964, ___blurSize_7)); }
	inline float get_blurSize_7() const { return ___blurSize_7; }
	inline float* get_address_of_blurSize_7() { return &___blurSize_7; }
	inline void set_blurSize_7(float value)
	{
		___blurSize_7 = value;
	}

	inline static int32_t get_offset_of_blurIterations_8() { return static_cast<int32_t>(offsetof(BlurOptimized_t3334654964, ___blurIterations_8)); }
	inline int32_t get_blurIterations_8() const { return ___blurIterations_8; }
	inline int32_t* get_address_of_blurIterations_8() { return &___blurIterations_8; }
	inline void set_blurIterations_8(int32_t value)
	{
		___blurIterations_8 = value;
	}

	inline static int32_t get_offset_of_blurType_9() { return static_cast<int32_t>(offsetof(BlurOptimized_t3334654964, ___blurType_9)); }
	inline int32_t get_blurType_9() const { return ___blurType_9; }
	inline int32_t* get_address_of_blurType_9() { return &___blurType_9; }
	inline void set_blurType_9(int32_t value)
	{
		___blurType_9 = value;
	}

	inline static int32_t get_offset_of_blurShader_10() { return static_cast<int32_t>(offsetof(BlurOptimized_t3334654964, ___blurShader_10)); }
	inline Shader_t4151988712 * get_blurShader_10() const { return ___blurShader_10; }
	inline Shader_t4151988712 ** get_address_of_blurShader_10() { return &___blurShader_10; }
	inline void set_blurShader_10(Shader_t4151988712 * value)
	{
		___blurShader_10 = value;
		Il2CppCodeGenWriteBarrier((&___blurShader_10), value);
	}

	inline static int32_t get_offset_of_blurMaterial_11() { return static_cast<int32_t>(offsetof(BlurOptimized_t3334654964, ___blurMaterial_11)); }
	inline Material_t340375123 * get_blurMaterial_11() const { return ___blurMaterial_11; }
	inline Material_t340375123 ** get_address_of_blurMaterial_11() { return &___blurMaterial_11; }
	inline void set_blurMaterial_11(Material_t340375123 * value)
	{
		___blurMaterial_11 = value;
		Il2CppCodeGenWriteBarrier((&___blurMaterial_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLUROPTIMIZED_T3334654964_H
#ifndef CAMERAMOTIONBLUR_T2812046500_H
#define CAMERAMOTIONBLUR_T2812046500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.CameraMotionBlur
struct  CameraMotionBlur_t2812046500  : public PostEffectsBase_t2404315739
{
public:
	// UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter UnityStandardAssets.ImageEffects.CameraMotionBlur::filterType
	int32_t ___filterType_7;
	// System.Boolean UnityStandardAssets.ImageEffects.CameraMotionBlur::preview
	bool ___preview_8;
	// UnityEngine.Vector3 UnityStandardAssets.ImageEffects.CameraMotionBlur::previewScale
	Vector3_t3722313464  ___previewScale_9;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::movementScale
	float ___movementScale_10;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::rotationScale
	float ___rotationScale_11;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::maxVelocity
	float ___maxVelocity_12;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::minVelocity
	float ___minVelocity_13;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::velocityScale
	float ___velocityScale_14;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::softZDistance
	float ___softZDistance_15;
	// System.Int32 UnityStandardAssets.ImageEffects.CameraMotionBlur::velocityDownsample
	int32_t ___velocityDownsample_16;
	// UnityEngine.LayerMask UnityStandardAssets.ImageEffects.CameraMotionBlur::excludeLayers
	LayerMask_t3493934918  ___excludeLayers_17;
	// UnityEngine.GameObject UnityStandardAssets.ImageEffects.CameraMotionBlur::tmpCam
	GameObject_t1113636619 * ___tmpCam_18;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.CameraMotionBlur::shader
	Shader_t4151988712 * ___shader_19;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.CameraMotionBlur::dx11MotionBlurShader
	Shader_t4151988712 * ___dx11MotionBlurShader_20;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.CameraMotionBlur::replacementClear
	Shader_t4151988712 * ___replacementClear_21;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.CameraMotionBlur::motionBlurMaterial
	Material_t340375123 * ___motionBlurMaterial_22;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.CameraMotionBlur::dx11MotionBlurMaterial
	Material_t340375123 * ___dx11MotionBlurMaterial_23;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.CameraMotionBlur::noiseTexture
	Texture2D_t3840446185 * ___noiseTexture_24;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::jitter
	float ___jitter_25;
	// System.Boolean UnityStandardAssets.ImageEffects.CameraMotionBlur::showVelocity
	bool ___showVelocity_26;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::showVelocityScale
	float ___showVelocityScale_27;
	// UnityEngine.Matrix4x4 UnityStandardAssets.ImageEffects.CameraMotionBlur::currentViewProjMat
	Matrix4x4_t1817901843  ___currentViewProjMat_28;
	// UnityEngine.Matrix4x4[] UnityStandardAssets.ImageEffects.CameraMotionBlur::currentStereoViewProjMat
	Matrix4x4U5BU5D_t2302988098* ___currentStereoViewProjMat_29;
	// UnityEngine.Matrix4x4 UnityStandardAssets.ImageEffects.CameraMotionBlur::prevViewProjMat
	Matrix4x4_t1817901843  ___prevViewProjMat_30;
	// UnityEngine.Matrix4x4[] UnityStandardAssets.ImageEffects.CameraMotionBlur::prevStereoViewProjMat
	Matrix4x4U5BU5D_t2302988098* ___prevStereoViewProjMat_31;
	// System.Int32 UnityStandardAssets.ImageEffects.CameraMotionBlur::prevFrameCount
	int32_t ___prevFrameCount_32;
	// System.Boolean UnityStandardAssets.ImageEffects.CameraMotionBlur::wasActive
	bool ___wasActive_33;
	// UnityEngine.Vector3 UnityStandardAssets.ImageEffects.CameraMotionBlur::prevFrameForward
	Vector3_t3722313464  ___prevFrameForward_34;
	// UnityEngine.Vector3 UnityStandardAssets.ImageEffects.CameraMotionBlur::prevFrameUp
	Vector3_t3722313464  ___prevFrameUp_35;
	// UnityEngine.Vector3 UnityStandardAssets.ImageEffects.CameraMotionBlur::prevFramePos
	Vector3_t3722313464  ___prevFramePos_36;
	// UnityEngine.Camera UnityStandardAssets.ImageEffects.CameraMotionBlur::_camera
	Camera_t4157153871 * ____camera_37;

public:
	inline static int32_t get_offset_of_filterType_7() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___filterType_7)); }
	inline int32_t get_filterType_7() const { return ___filterType_7; }
	inline int32_t* get_address_of_filterType_7() { return &___filterType_7; }
	inline void set_filterType_7(int32_t value)
	{
		___filterType_7 = value;
	}

	inline static int32_t get_offset_of_preview_8() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___preview_8)); }
	inline bool get_preview_8() const { return ___preview_8; }
	inline bool* get_address_of_preview_8() { return &___preview_8; }
	inline void set_preview_8(bool value)
	{
		___preview_8 = value;
	}

	inline static int32_t get_offset_of_previewScale_9() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___previewScale_9)); }
	inline Vector3_t3722313464  get_previewScale_9() const { return ___previewScale_9; }
	inline Vector3_t3722313464 * get_address_of_previewScale_9() { return &___previewScale_9; }
	inline void set_previewScale_9(Vector3_t3722313464  value)
	{
		___previewScale_9 = value;
	}

	inline static int32_t get_offset_of_movementScale_10() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___movementScale_10)); }
	inline float get_movementScale_10() const { return ___movementScale_10; }
	inline float* get_address_of_movementScale_10() { return &___movementScale_10; }
	inline void set_movementScale_10(float value)
	{
		___movementScale_10 = value;
	}

	inline static int32_t get_offset_of_rotationScale_11() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___rotationScale_11)); }
	inline float get_rotationScale_11() const { return ___rotationScale_11; }
	inline float* get_address_of_rotationScale_11() { return &___rotationScale_11; }
	inline void set_rotationScale_11(float value)
	{
		___rotationScale_11 = value;
	}

	inline static int32_t get_offset_of_maxVelocity_12() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___maxVelocity_12)); }
	inline float get_maxVelocity_12() const { return ___maxVelocity_12; }
	inline float* get_address_of_maxVelocity_12() { return &___maxVelocity_12; }
	inline void set_maxVelocity_12(float value)
	{
		___maxVelocity_12 = value;
	}

	inline static int32_t get_offset_of_minVelocity_13() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___minVelocity_13)); }
	inline float get_minVelocity_13() const { return ___minVelocity_13; }
	inline float* get_address_of_minVelocity_13() { return &___minVelocity_13; }
	inline void set_minVelocity_13(float value)
	{
		___minVelocity_13 = value;
	}

	inline static int32_t get_offset_of_velocityScale_14() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___velocityScale_14)); }
	inline float get_velocityScale_14() const { return ___velocityScale_14; }
	inline float* get_address_of_velocityScale_14() { return &___velocityScale_14; }
	inline void set_velocityScale_14(float value)
	{
		___velocityScale_14 = value;
	}

	inline static int32_t get_offset_of_softZDistance_15() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___softZDistance_15)); }
	inline float get_softZDistance_15() const { return ___softZDistance_15; }
	inline float* get_address_of_softZDistance_15() { return &___softZDistance_15; }
	inline void set_softZDistance_15(float value)
	{
		___softZDistance_15 = value;
	}

	inline static int32_t get_offset_of_velocityDownsample_16() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___velocityDownsample_16)); }
	inline int32_t get_velocityDownsample_16() const { return ___velocityDownsample_16; }
	inline int32_t* get_address_of_velocityDownsample_16() { return &___velocityDownsample_16; }
	inline void set_velocityDownsample_16(int32_t value)
	{
		___velocityDownsample_16 = value;
	}

	inline static int32_t get_offset_of_excludeLayers_17() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___excludeLayers_17)); }
	inline LayerMask_t3493934918  get_excludeLayers_17() const { return ___excludeLayers_17; }
	inline LayerMask_t3493934918 * get_address_of_excludeLayers_17() { return &___excludeLayers_17; }
	inline void set_excludeLayers_17(LayerMask_t3493934918  value)
	{
		___excludeLayers_17 = value;
	}

	inline static int32_t get_offset_of_tmpCam_18() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___tmpCam_18)); }
	inline GameObject_t1113636619 * get_tmpCam_18() const { return ___tmpCam_18; }
	inline GameObject_t1113636619 ** get_address_of_tmpCam_18() { return &___tmpCam_18; }
	inline void set_tmpCam_18(GameObject_t1113636619 * value)
	{
		___tmpCam_18 = value;
		Il2CppCodeGenWriteBarrier((&___tmpCam_18), value);
	}

	inline static int32_t get_offset_of_shader_19() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___shader_19)); }
	inline Shader_t4151988712 * get_shader_19() const { return ___shader_19; }
	inline Shader_t4151988712 ** get_address_of_shader_19() { return &___shader_19; }
	inline void set_shader_19(Shader_t4151988712 * value)
	{
		___shader_19 = value;
		Il2CppCodeGenWriteBarrier((&___shader_19), value);
	}

	inline static int32_t get_offset_of_dx11MotionBlurShader_20() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___dx11MotionBlurShader_20)); }
	inline Shader_t4151988712 * get_dx11MotionBlurShader_20() const { return ___dx11MotionBlurShader_20; }
	inline Shader_t4151988712 ** get_address_of_dx11MotionBlurShader_20() { return &___dx11MotionBlurShader_20; }
	inline void set_dx11MotionBlurShader_20(Shader_t4151988712 * value)
	{
		___dx11MotionBlurShader_20 = value;
		Il2CppCodeGenWriteBarrier((&___dx11MotionBlurShader_20), value);
	}

	inline static int32_t get_offset_of_replacementClear_21() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___replacementClear_21)); }
	inline Shader_t4151988712 * get_replacementClear_21() const { return ___replacementClear_21; }
	inline Shader_t4151988712 ** get_address_of_replacementClear_21() { return &___replacementClear_21; }
	inline void set_replacementClear_21(Shader_t4151988712 * value)
	{
		___replacementClear_21 = value;
		Il2CppCodeGenWriteBarrier((&___replacementClear_21), value);
	}

	inline static int32_t get_offset_of_motionBlurMaterial_22() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___motionBlurMaterial_22)); }
	inline Material_t340375123 * get_motionBlurMaterial_22() const { return ___motionBlurMaterial_22; }
	inline Material_t340375123 ** get_address_of_motionBlurMaterial_22() { return &___motionBlurMaterial_22; }
	inline void set_motionBlurMaterial_22(Material_t340375123 * value)
	{
		___motionBlurMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((&___motionBlurMaterial_22), value);
	}

	inline static int32_t get_offset_of_dx11MotionBlurMaterial_23() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___dx11MotionBlurMaterial_23)); }
	inline Material_t340375123 * get_dx11MotionBlurMaterial_23() const { return ___dx11MotionBlurMaterial_23; }
	inline Material_t340375123 ** get_address_of_dx11MotionBlurMaterial_23() { return &___dx11MotionBlurMaterial_23; }
	inline void set_dx11MotionBlurMaterial_23(Material_t340375123 * value)
	{
		___dx11MotionBlurMaterial_23 = value;
		Il2CppCodeGenWriteBarrier((&___dx11MotionBlurMaterial_23), value);
	}

	inline static int32_t get_offset_of_noiseTexture_24() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___noiseTexture_24)); }
	inline Texture2D_t3840446185 * get_noiseTexture_24() const { return ___noiseTexture_24; }
	inline Texture2D_t3840446185 ** get_address_of_noiseTexture_24() { return &___noiseTexture_24; }
	inline void set_noiseTexture_24(Texture2D_t3840446185 * value)
	{
		___noiseTexture_24 = value;
		Il2CppCodeGenWriteBarrier((&___noiseTexture_24), value);
	}

	inline static int32_t get_offset_of_jitter_25() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___jitter_25)); }
	inline float get_jitter_25() const { return ___jitter_25; }
	inline float* get_address_of_jitter_25() { return &___jitter_25; }
	inline void set_jitter_25(float value)
	{
		___jitter_25 = value;
	}

	inline static int32_t get_offset_of_showVelocity_26() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___showVelocity_26)); }
	inline bool get_showVelocity_26() const { return ___showVelocity_26; }
	inline bool* get_address_of_showVelocity_26() { return &___showVelocity_26; }
	inline void set_showVelocity_26(bool value)
	{
		___showVelocity_26 = value;
	}

	inline static int32_t get_offset_of_showVelocityScale_27() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___showVelocityScale_27)); }
	inline float get_showVelocityScale_27() const { return ___showVelocityScale_27; }
	inline float* get_address_of_showVelocityScale_27() { return &___showVelocityScale_27; }
	inline void set_showVelocityScale_27(float value)
	{
		___showVelocityScale_27 = value;
	}

	inline static int32_t get_offset_of_currentViewProjMat_28() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___currentViewProjMat_28)); }
	inline Matrix4x4_t1817901843  get_currentViewProjMat_28() const { return ___currentViewProjMat_28; }
	inline Matrix4x4_t1817901843 * get_address_of_currentViewProjMat_28() { return &___currentViewProjMat_28; }
	inline void set_currentViewProjMat_28(Matrix4x4_t1817901843  value)
	{
		___currentViewProjMat_28 = value;
	}

	inline static int32_t get_offset_of_currentStereoViewProjMat_29() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___currentStereoViewProjMat_29)); }
	inline Matrix4x4U5BU5D_t2302988098* get_currentStereoViewProjMat_29() const { return ___currentStereoViewProjMat_29; }
	inline Matrix4x4U5BU5D_t2302988098** get_address_of_currentStereoViewProjMat_29() { return &___currentStereoViewProjMat_29; }
	inline void set_currentStereoViewProjMat_29(Matrix4x4U5BU5D_t2302988098* value)
	{
		___currentStereoViewProjMat_29 = value;
		Il2CppCodeGenWriteBarrier((&___currentStereoViewProjMat_29), value);
	}

	inline static int32_t get_offset_of_prevViewProjMat_30() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___prevViewProjMat_30)); }
	inline Matrix4x4_t1817901843  get_prevViewProjMat_30() const { return ___prevViewProjMat_30; }
	inline Matrix4x4_t1817901843 * get_address_of_prevViewProjMat_30() { return &___prevViewProjMat_30; }
	inline void set_prevViewProjMat_30(Matrix4x4_t1817901843  value)
	{
		___prevViewProjMat_30 = value;
	}

	inline static int32_t get_offset_of_prevStereoViewProjMat_31() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___prevStereoViewProjMat_31)); }
	inline Matrix4x4U5BU5D_t2302988098* get_prevStereoViewProjMat_31() const { return ___prevStereoViewProjMat_31; }
	inline Matrix4x4U5BU5D_t2302988098** get_address_of_prevStereoViewProjMat_31() { return &___prevStereoViewProjMat_31; }
	inline void set_prevStereoViewProjMat_31(Matrix4x4U5BU5D_t2302988098* value)
	{
		___prevStereoViewProjMat_31 = value;
		Il2CppCodeGenWriteBarrier((&___prevStereoViewProjMat_31), value);
	}

	inline static int32_t get_offset_of_prevFrameCount_32() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___prevFrameCount_32)); }
	inline int32_t get_prevFrameCount_32() const { return ___prevFrameCount_32; }
	inline int32_t* get_address_of_prevFrameCount_32() { return &___prevFrameCount_32; }
	inline void set_prevFrameCount_32(int32_t value)
	{
		___prevFrameCount_32 = value;
	}

	inline static int32_t get_offset_of_wasActive_33() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___wasActive_33)); }
	inline bool get_wasActive_33() const { return ___wasActive_33; }
	inline bool* get_address_of_wasActive_33() { return &___wasActive_33; }
	inline void set_wasActive_33(bool value)
	{
		___wasActive_33 = value;
	}

	inline static int32_t get_offset_of_prevFrameForward_34() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___prevFrameForward_34)); }
	inline Vector3_t3722313464  get_prevFrameForward_34() const { return ___prevFrameForward_34; }
	inline Vector3_t3722313464 * get_address_of_prevFrameForward_34() { return &___prevFrameForward_34; }
	inline void set_prevFrameForward_34(Vector3_t3722313464  value)
	{
		___prevFrameForward_34 = value;
	}

	inline static int32_t get_offset_of_prevFrameUp_35() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___prevFrameUp_35)); }
	inline Vector3_t3722313464  get_prevFrameUp_35() const { return ___prevFrameUp_35; }
	inline Vector3_t3722313464 * get_address_of_prevFrameUp_35() { return &___prevFrameUp_35; }
	inline void set_prevFrameUp_35(Vector3_t3722313464  value)
	{
		___prevFrameUp_35 = value;
	}

	inline static int32_t get_offset_of_prevFramePos_36() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ___prevFramePos_36)); }
	inline Vector3_t3722313464  get_prevFramePos_36() const { return ___prevFramePos_36; }
	inline Vector3_t3722313464 * get_address_of_prevFramePos_36() { return &___prevFramePos_36; }
	inline void set_prevFramePos_36(Vector3_t3722313464  value)
	{
		___prevFramePos_36 = value;
	}

	inline static int32_t get_offset_of__camera_37() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500, ____camera_37)); }
	inline Camera_t4157153871 * get__camera_37() const { return ____camera_37; }
	inline Camera_t4157153871 ** get_address_of__camera_37() { return &____camera_37; }
	inline void set__camera_37(Camera_t4157153871 * value)
	{
		____camera_37 = value;
		Il2CppCodeGenWriteBarrier((&____camera_37), value);
	}
};

struct CameraMotionBlur_t2812046500_StaticFields
{
public:
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::MAX_RADIUS
	float ___MAX_RADIUS_6;

public:
	inline static int32_t get_offset_of_MAX_RADIUS_6() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t2812046500_StaticFields, ___MAX_RADIUS_6)); }
	inline float get_MAX_RADIUS_6() const { return ___MAX_RADIUS_6; }
	inline float* get_address_of_MAX_RADIUS_6() { return &___MAX_RADIUS_6; }
	inline void set_MAX_RADIUS_6(float value)
	{
		___MAX_RADIUS_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAMOTIONBLUR_T2812046500_H
#ifndef COLORCORRECTIONCURVES_T3742166504_H
#define COLORCORRECTIONCURVES_T3742166504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ColorCorrectionCurves
struct  ColorCorrectionCurves_t3742166504  : public PostEffectsBase_t2404315739
{
public:
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::redChannel
	AnimationCurve_t3046754366 * ___redChannel_6;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::greenChannel
	AnimationCurve_t3046754366 * ___greenChannel_7;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::blueChannel
	AnimationCurve_t3046754366 * ___blueChannel_8;
	// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionCurves::useDepthCorrection
	bool ___useDepthCorrection_9;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::zCurve
	AnimationCurve_t3046754366 * ___zCurve_10;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::depthRedChannel
	AnimationCurve_t3046754366 * ___depthRedChannel_11;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::depthGreenChannel
	AnimationCurve_t3046754366 * ___depthGreenChannel_12;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::depthBlueChannel
	AnimationCurve_t3046754366 * ___depthBlueChannel_13;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ColorCorrectionCurves::ccMaterial
	Material_t340375123 * ___ccMaterial_14;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ColorCorrectionCurves::ccDepthMaterial
	Material_t340375123 * ___ccDepthMaterial_15;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ColorCorrectionCurves::selectiveCcMaterial
	Material_t340375123 * ___selectiveCcMaterial_16;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ColorCorrectionCurves::rgbChannelTex
	Texture2D_t3840446185 * ___rgbChannelTex_17;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ColorCorrectionCurves::rgbDepthChannelTex
	Texture2D_t3840446185 * ___rgbDepthChannelTex_18;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ColorCorrectionCurves::zCurveTex
	Texture2D_t3840446185 * ___zCurveTex_19;
	// System.Single UnityStandardAssets.ImageEffects.ColorCorrectionCurves::saturation
	float ___saturation_20;
	// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionCurves::selectiveCc
	bool ___selectiveCc_21;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.ColorCorrectionCurves::selectiveFromColor
	Color_t2555686324  ___selectiveFromColor_22;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.ColorCorrectionCurves::selectiveToColor
	Color_t2555686324  ___selectiveToColor_23;
	// UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode UnityStandardAssets.ImageEffects.ColorCorrectionCurves::mode
	int32_t ___mode_24;
	// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionCurves::updateTextures
	bool ___updateTextures_25;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ColorCorrectionCurves::colorCorrectionCurvesShader
	Shader_t4151988712 * ___colorCorrectionCurvesShader_26;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ColorCorrectionCurves::simpleColorCorrectionCurvesShader
	Shader_t4151988712 * ___simpleColorCorrectionCurvesShader_27;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ColorCorrectionCurves::colorCorrectionSelectiveShader
	Shader_t4151988712 * ___colorCorrectionSelectiveShader_28;
	// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionCurves::updateTexturesOnStartup
	bool ___updateTexturesOnStartup_29;

public:
	inline static int32_t get_offset_of_redChannel_6() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3742166504, ___redChannel_6)); }
	inline AnimationCurve_t3046754366 * get_redChannel_6() const { return ___redChannel_6; }
	inline AnimationCurve_t3046754366 ** get_address_of_redChannel_6() { return &___redChannel_6; }
	inline void set_redChannel_6(AnimationCurve_t3046754366 * value)
	{
		___redChannel_6 = value;
		Il2CppCodeGenWriteBarrier((&___redChannel_6), value);
	}

	inline static int32_t get_offset_of_greenChannel_7() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3742166504, ___greenChannel_7)); }
	inline AnimationCurve_t3046754366 * get_greenChannel_7() const { return ___greenChannel_7; }
	inline AnimationCurve_t3046754366 ** get_address_of_greenChannel_7() { return &___greenChannel_7; }
	inline void set_greenChannel_7(AnimationCurve_t3046754366 * value)
	{
		___greenChannel_7 = value;
		Il2CppCodeGenWriteBarrier((&___greenChannel_7), value);
	}

	inline static int32_t get_offset_of_blueChannel_8() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3742166504, ___blueChannel_8)); }
	inline AnimationCurve_t3046754366 * get_blueChannel_8() const { return ___blueChannel_8; }
	inline AnimationCurve_t3046754366 ** get_address_of_blueChannel_8() { return &___blueChannel_8; }
	inline void set_blueChannel_8(AnimationCurve_t3046754366 * value)
	{
		___blueChannel_8 = value;
		Il2CppCodeGenWriteBarrier((&___blueChannel_8), value);
	}

	inline static int32_t get_offset_of_useDepthCorrection_9() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3742166504, ___useDepthCorrection_9)); }
	inline bool get_useDepthCorrection_9() const { return ___useDepthCorrection_9; }
	inline bool* get_address_of_useDepthCorrection_9() { return &___useDepthCorrection_9; }
	inline void set_useDepthCorrection_9(bool value)
	{
		___useDepthCorrection_9 = value;
	}

	inline static int32_t get_offset_of_zCurve_10() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3742166504, ___zCurve_10)); }
	inline AnimationCurve_t3046754366 * get_zCurve_10() const { return ___zCurve_10; }
	inline AnimationCurve_t3046754366 ** get_address_of_zCurve_10() { return &___zCurve_10; }
	inline void set_zCurve_10(AnimationCurve_t3046754366 * value)
	{
		___zCurve_10 = value;
		Il2CppCodeGenWriteBarrier((&___zCurve_10), value);
	}

	inline static int32_t get_offset_of_depthRedChannel_11() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3742166504, ___depthRedChannel_11)); }
	inline AnimationCurve_t3046754366 * get_depthRedChannel_11() const { return ___depthRedChannel_11; }
	inline AnimationCurve_t3046754366 ** get_address_of_depthRedChannel_11() { return &___depthRedChannel_11; }
	inline void set_depthRedChannel_11(AnimationCurve_t3046754366 * value)
	{
		___depthRedChannel_11 = value;
		Il2CppCodeGenWriteBarrier((&___depthRedChannel_11), value);
	}

	inline static int32_t get_offset_of_depthGreenChannel_12() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3742166504, ___depthGreenChannel_12)); }
	inline AnimationCurve_t3046754366 * get_depthGreenChannel_12() const { return ___depthGreenChannel_12; }
	inline AnimationCurve_t3046754366 ** get_address_of_depthGreenChannel_12() { return &___depthGreenChannel_12; }
	inline void set_depthGreenChannel_12(AnimationCurve_t3046754366 * value)
	{
		___depthGreenChannel_12 = value;
		Il2CppCodeGenWriteBarrier((&___depthGreenChannel_12), value);
	}

	inline static int32_t get_offset_of_depthBlueChannel_13() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3742166504, ___depthBlueChannel_13)); }
	inline AnimationCurve_t3046754366 * get_depthBlueChannel_13() const { return ___depthBlueChannel_13; }
	inline AnimationCurve_t3046754366 ** get_address_of_depthBlueChannel_13() { return &___depthBlueChannel_13; }
	inline void set_depthBlueChannel_13(AnimationCurve_t3046754366 * value)
	{
		___depthBlueChannel_13 = value;
		Il2CppCodeGenWriteBarrier((&___depthBlueChannel_13), value);
	}

	inline static int32_t get_offset_of_ccMaterial_14() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3742166504, ___ccMaterial_14)); }
	inline Material_t340375123 * get_ccMaterial_14() const { return ___ccMaterial_14; }
	inline Material_t340375123 ** get_address_of_ccMaterial_14() { return &___ccMaterial_14; }
	inline void set_ccMaterial_14(Material_t340375123 * value)
	{
		___ccMaterial_14 = value;
		Il2CppCodeGenWriteBarrier((&___ccMaterial_14), value);
	}

	inline static int32_t get_offset_of_ccDepthMaterial_15() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3742166504, ___ccDepthMaterial_15)); }
	inline Material_t340375123 * get_ccDepthMaterial_15() const { return ___ccDepthMaterial_15; }
	inline Material_t340375123 ** get_address_of_ccDepthMaterial_15() { return &___ccDepthMaterial_15; }
	inline void set_ccDepthMaterial_15(Material_t340375123 * value)
	{
		___ccDepthMaterial_15 = value;
		Il2CppCodeGenWriteBarrier((&___ccDepthMaterial_15), value);
	}

	inline static int32_t get_offset_of_selectiveCcMaterial_16() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3742166504, ___selectiveCcMaterial_16)); }
	inline Material_t340375123 * get_selectiveCcMaterial_16() const { return ___selectiveCcMaterial_16; }
	inline Material_t340375123 ** get_address_of_selectiveCcMaterial_16() { return &___selectiveCcMaterial_16; }
	inline void set_selectiveCcMaterial_16(Material_t340375123 * value)
	{
		___selectiveCcMaterial_16 = value;
		Il2CppCodeGenWriteBarrier((&___selectiveCcMaterial_16), value);
	}

	inline static int32_t get_offset_of_rgbChannelTex_17() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3742166504, ___rgbChannelTex_17)); }
	inline Texture2D_t3840446185 * get_rgbChannelTex_17() const { return ___rgbChannelTex_17; }
	inline Texture2D_t3840446185 ** get_address_of_rgbChannelTex_17() { return &___rgbChannelTex_17; }
	inline void set_rgbChannelTex_17(Texture2D_t3840446185 * value)
	{
		___rgbChannelTex_17 = value;
		Il2CppCodeGenWriteBarrier((&___rgbChannelTex_17), value);
	}

	inline static int32_t get_offset_of_rgbDepthChannelTex_18() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3742166504, ___rgbDepthChannelTex_18)); }
	inline Texture2D_t3840446185 * get_rgbDepthChannelTex_18() const { return ___rgbDepthChannelTex_18; }
	inline Texture2D_t3840446185 ** get_address_of_rgbDepthChannelTex_18() { return &___rgbDepthChannelTex_18; }
	inline void set_rgbDepthChannelTex_18(Texture2D_t3840446185 * value)
	{
		___rgbDepthChannelTex_18 = value;
		Il2CppCodeGenWriteBarrier((&___rgbDepthChannelTex_18), value);
	}

	inline static int32_t get_offset_of_zCurveTex_19() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3742166504, ___zCurveTex_19)); }
	inline Texture2D_t3840446185 * get_zCurveTex_19() const { return ___zCurveTex_19; }
	inline Texture2D_t3840446185 ** get_address_of_zCurveTex_19() { return &___zCurveTex_19; }
	inline void set_zCurveTex_19(Texture2D_t3840446185 * value)
	{
		___zCurveTex_19 = value;
		Il2CppCodeGenWriteBarrier((&___zCurveTex_19), value);
	}

	inline static int32_t get_offset_of_saturation_20() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3742166504, ___saturation_20)); }
	inline float get_saturation_20() const { return ___saturation_20; }
	inline float* get_address_of_saturation_20() { return &___saturation_20; }
	inline void set_saturation_20(float value)
	{
		___saturation_20 = value;
	}

	inline static int32_t get_offset_of_selectiveCc_21() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3742166504, ___selectiveCc_21)); }
	inline bool get_selectiveCc_21() const { return ___selectiveCc_21; }
	inline bool* get_address_of_selectiveCc_21() { return &___selectiveCc_21; }
	inline void set_selectiveCc_21(bool value)
	{
		___selectiveCc_21 = value;
	}

	inline static int32_t get_offset_of_selectiveFromColor_22() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3742166504, ___selectiveFromColor_22)); }
	inline Color_t2555686324  get_selectiveFromColor_22() const { return ___selectiveFromColor_22; }
	inline Color_t2555686324 * get_address_of_selectiveFromColor_22() { return &___selectiveFromColor_22; }
	inline void set_selectiveFromColor_22(Color_t2555686324  value)
	{
		___selectiveFromColor_22 = value;
	}

	inline static int32_t get_offset_of_selectiveToColor_23() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3742166504, ___selectiveToColor_23)); }
	inline Color_t2555686324  get_selectiveToColor_23() const { return ___selectiveToColor_23; }
	inline Color_t2555686324 * get_address_of_selectiveToColor_23() { return &___selectiveToColor_23; }
	inline void set_selectiveToColor_23(Color_t2555686324  value)
	{
		___selectiveToColor_23 = value;
	}

	inline static int32_t get_offset_of_mode_24() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3742166504, ___mode_24)); }
	inline int32_t get_mode_24() const { return ___mode_24; }
	inline int32_t* get_address_of_mode_24() { return &___mode_24; }
	inline void set_mode_24(int32_t value)
	{
		___mode_24 = value;
	}

	inline static int32_t get_offset_of_updateTextures_25() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3742166504, ___updateTextures_25)); }
	inline bool get_updateTextures_25() const { return ___updateTextures_25; }
	inline bool* get_address_of_updateTextures_25() { return &___updateTextures_25; }
	inline void set_updateTextures_25(bool value)
	{
		___updateTextures_25 = value;
	}

	inline static int32_t get_offset_of_colorCorrectionCurvesShader_26() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3742166504, ___colorCorrectionCurvesShader_26)); }
	inline Shader_t4151988712 * get_colorCorrectionCurvesShader_26() const { return ___colorCorrectionCurvesShader_26; }
	inline Shader_t4151988712 ** get_address_of_colorCorrectionCurvesShader_26() { return &___colorCorrectionCurvesShader_26; }
	inline void set_colorCorrectionCurvesShader_26(Shader_t4151988712 * value)
	{
		___colorCorrectionCurvesShader_26 = value;
		Il2CppCodeGenWriteBarrier((&___colorCorrectionCurvesShader_26), value);
	}

	inline static int32_t get_offset_of_simpleColorCorrectionCurvesShader_27() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3742166504, ___simpleColorCorrectionCurvesShader_27)); }
	inline Shader_t4151988712 * get_simpleColorCorrectionCurvesShader_27() const { return ___simpleColorCorrectionCurvesShader_27; }
	inline Shader_t4151988712 ** get_address_of_simpleColorCorrectionCurvesShader_27() { return &___simpleColorCorrectionCurvesShader_27; }
	inline void set_simpleColorCorrectionCurvesShader_27(Shader_t4151988712 * value)
	{
		___simpleColorCorrectionCurvesShader_27 = value;
		Il2CppCodeGenWriteBarrier((&___simpleColorCorrectionCurvesShader_27), value);
	}

	inline static int32_t get_offset_of_colorCorrectionSelectiveShader_28() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3742166504, ___colorCorrectionSelectiveShader_28)); }
	inline Shader_t4151988712 * get_colorCorrectionSelectiveShader_28() const { return ___colorCorrectionSelectiveShader_28; }
	inline Shader_t4151988712 ** get_address_of_colorCorrectionSelectiveShader_28() { return &___colorCorrectionSelectiveShader_28; }
	inline void set_colorCorrectionSelectiveShader_28(Shader_t4151988712 * value)
	{
		___colorCorrectionSelectiveShader_28 = value;
		Il2CppCodeGenWriteBarrier((&___colorCorrectionSelectiveShader_28), value);
	}

	inline static int32_t get_offset_of_updateTexturesOnStartup_29() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t3742166504, ___updateTexturesOnStartup_29)); }
	inline bool get_updateTexturesOnStartup_29() const { return ___updateTexturesOnStartup_29; }
	inline bool* get_address_of_updateTexturesOnStartup_29() { return &___updateTexturesOnStartup_29; }
	inline void set_updateTexturesOnStartup_29(bool value)
	{
		___updateTexturesOnStartup_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORCORRECTIONCURVES_T3742166504_H
#ifndef COLORCORRECTIONRAMP_T3562116199_H
#define COLORCORRECTIONRAMP_T3562116199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ColorCorrectionRamp
struct  ColorCorrectionRamp_t3562116199  : public ImageEffectBase_t2026006575
{
public:
	// UnityEngine.Texture UnityStandardAssets.ImageEffects.ColorCorrectionRamp::textureRamp
	Texture_t3661962703 * ___textureRamp_4;

public:
	inline static int32_t get_offset_of_textureRamp_4() { return static_cast<int32_t>(offsetof(ColorCorrectionRamp_t3562116199, ___textureRamp_4)); }
	inline Texture_t3661962703 * get_textureRamp_4() const { return ___textureRamp_4; }
	inline Texture_t3661962703 ** get_address_of_textureRamp_4() { return &___textureRamp_4; }
	inline void set_textureRamp_4(Texture_t3661962703 * value)
	{
		___textureRamp_4 = value;
		Il2CppCodeGenWriteBarrier((&___textureRamp_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORCORRECTIONRAMP_T3562116199_H
#ifndef CONTRASTENHANCE_T640919481_H
#define CONTRASTENHANCE_T640919481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ContrastEnhance
struct  ContrastEnhance_t640919481  : public PostEffectsBase_t2404315739
{
public:
	// System.Single UnityStandardAssets.ImageEffects.ContrastEnhance::intensity
	float ___intensity_6;
	// System.Single UnityStandardAssets.ImageEffects.ContrastEnhance::threshold
	float ___threshold_7;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastEnhance::separableBlurMaterial
	Material_t340375123 * ___separableBlurMaterial_8;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastEnhance::contrastCompositeMaterial
	Material_t340375123 * ___contrastCompositeMaterial_9;
	// System.Single UnityStandardAssets.ImageEffects.ContrastEnhance::blurSpread
	float ___blurSpread_10;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastEnhance::separableBlurShader
	Shader_t4151988712 * ___separableBlurShader_11;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastEnhance::contrastCompositeShader
	Shader_t4151988712 * ___contrastCompositeShader_12;

public:
	inline static int32_t get_offset_of_intensity_6() { return static_cast<int32_t>(offsetof(ContrastEnhance_t640919481, ___intensity_6)); }
	inline float get_intensity_6() const { return ___intensity_6; }
	inline float* get_address_of_intensity_6() { return &___intensity_6; }
	inline void set_intensity_6(float value)
	{
		___intensity_6 = value;
	}

	inline static int32_t get_offset_of_threshold_7() { return static_cast<int32_t>(offsetof(ContrastEnhance_t640919481, ___threshold_7)); }
	inline float get_threshold_7() const { return ___threshold_7; }
	inline float* get_address_of_threshold_7() { return &___threshold_7; }
	inline void set_threshold_7(float value)
	{
		___threshold_7 = value;
	}

	inline static int32_t get_offset_of_separableBlurMaterial_8() { return static_cast<int32_t>(offsetof(ContrastEnhance_t640919481, ___separableBlurMaterial_8)); }
	inline Material_t340375123 * get_separableBlurMaterial_8() const { return ___separableBlurMaterial_8; }
	inline Material_t340375123 ** get_address_of_separableBlurMaterial_8() { return &___separableBlurMaterial_8; }
	inline void set_separableBlurMaterial_8(Material_t340375123 * value)
	{
		___separableBlurMaterial_8 = value;
		Il2CppCodeGenWriteBarrier((&___separableBlurMaterial_8), value);
	}

	inline static int32_t get_offset_of_contrastCompositeMaterial_9() { return static_cast<int32_t>(offsetof(ContrastEnhance_t640919481, ___contrastCompositeMaterial_9)); }
	inline Material_t340375123 * get_contrastCompositeMaterial_9() const { return ___contrastCompositeMaterial_9; }
	inline Material_t340375123 ** get_address_of_contrastCompositeMaterial_9() { return &___contrastCompositeMaterial_9; }
	inline void set_contrastCompositeMaterial_9(Material_t340375123 * value)
	{
		___contrastCompositeMaterial_9 = value;
		Il2CppCodeGenWriteBarrier((&___contrastCompositeMaterial_9), value);
	}

	inline static int32_t get_offset_of_blurSpread_10() { return static_cast<int32_t>(offsetof(ContrastEnhance_t640919481, ___blurSpread_10)); }
	inline float get_blurSpread_10() const { return ___blurSpread_10; }
	inline float* get_address_of_blurSpread_10() { return &___blurSpread_10; }
	inline void set_blurSpread_10(float value)
	{
		___blurSpread_10 = value;
	}

	inline static int32_t get_offset_of_separableBlurShader_11() { return static_cast<int32_t>(offsetof(ContrastEnhance_t640919481, ___separableBlurShader_11)); }
	inline Shader_t4151988712 * get_separableBlurShader_11() const { return ___separableBlurShader_11; }
	inline Shader_t4151988712 ** get_address_of_separableBlurShader_11() { return &___separableBlurShader_11; }
	inline void set_separableBlurShader_11(Shader_t4151988712 * value)
	{
		___separableBlurShader_11 = value;
		Il2CppCodeGenWriteBarrier((&___separableBlurShader_11), value);
	}

	inline static int32_t get_offset_of_contrastCompositeShader_12() { return static_cast<int32_t>(offsetof(ContrastEnhance_t640919481, ___contrastCompositeShader_12)); }
	inline Shader_t4151988712 * get_contrastCompositeShader_12() const { return ___contrastCompositeShader_12; }
	inline Shader_t4151988712 ** get_address_of_contrastCompositeShader_12() { return &___contrastCompositeShader_12; }
	inline void set_contrastCompositeShader_12(Shader_t4151988712 * value)
	{
		___contrastCompositeShader_12 = value;
		Il2CppCodeGenWriteBarrier((&___contrastCompositeShader_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTRASTENHANCE_T640919481_H
#ifndef FISHEYE_T4101461743_H
#define FISHEYE_T4101461743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Fisheye
struct  Fisheye_t4101461743  : public PostEffectsBase_t2404315739
{
public:
	// System.Single UnityStandardAssets.ImageEffects.Fisheye::strengthX
	float ___strengthX_6;
	// System.Single UnityStandardAssets.ImageEffects.Fisheye::strengthY
	float ___strengthY_7;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Fisheye::fishEyeShader
	Shader_t4151988712 * ___fishEyeShader_8;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Fisheye::fisheyeMaterial
	Material_t340375123 * ___fisheyeMaterial_9;

public:
	inline static int32_t get_offset_of_strengthX_6() { return static_cast<int32_t>(offsetof(Fisheye_t4101461743, ___strengthX_6)); }
	inline float get_strengthX_6() const { return ___strengthX_6; }
	inline float* get_address_of_strengthX_6() { return &___strengthX_6; }
	inline void set_strengthX_6(float value)
	{
		___strengthX_6 = value;
	}

	inline static int32_t get_offset_of_strengthY_7() { return static_cast<int32_t>(offsetof(Fisheye_t4101461743, ___strengthY_7)); }
	inline float get_strengthY_7() const { return ___strengthY_7; }
	inline float* get_address_of_strengthY_7() { return &___strengthY_7; }
	inline void set_strengthY_7(float value)
	{
		___strengthY_7 = value;
	}

	inline static int32_t get_offset_of_fishEyeShader_8() { return static_cast<int32_t>(offsetof(Fisheye_t4101461743, ___fishEyeShader_8)); }
	inline Shader_t4151988712 * get_fishEyeShader_8() const { return ___fishEyeShader_8; }
	inline Shader_t4151988712 ** get_address_of_fishEyeShader_8() { return &___fishEyeShader_8; }
	inline void set_fishEyeShader_8(Shader_t4151988712 * value)
	{
		___fishEyeShader_8 = value;
		Il2CppCodeGenWriteBarrier((&___fishEyeShader_8), value);
	}

	inline static int32_t get_offset_of_fisheyeMaterial_9() { return static_cast<int32_t>(offsetof(Fisheye_t4101461743, ___fisheyeMaterial_9)); }
	inline Material_t340375123 * get_fisheyeMaterial_9() const { return ___fisheyeMaterial_9; }
	inline Material_t340375123 ** get_address_of_fisheyeMaterial_9() { return &___fisheyeMaterial_9; }
	inline void set_fisheyeMaterial_9(Material_t340375123 * value)
	{
		___fisheyeMaterial_9 = value;
		Il2CppCodeGenWriteBarrier((&___fisheyeMaterial_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FISHEYE_T4101461743_H
#ifndef BLOOMANDFLARES_T2848767628_H
#define BLOOMANDFLARES_T2848767628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.BloomAndFlares
struct  BloomAndFlares_t2848767628  : public PostEffectsBase_t2404315739
{
public:
	// UnityStandardAssets.ImageEffects.TweakMode34 UnityStandardAssets.ImageEffects.BloomAndFlares::tweakMode
	int32_t ___tweakMode_6;
	// UnityStandardAssets.ImageEffects.BloomScreenBlendMode UnityStandardAssets.ImageEffects.BloomAndFlares::screenBlendMode
	int32_t ___screenBlendMode_7;
	// UnityStandardAssets.ImageEffects.HDRBloomMode UnityStandardAssets.ImageEffects.BloomAndFlares::hdr
	int32_t ___hdr_8;
	// System.Boolean UnityStandardAssets.ImageEffects.BloomAndFlares::doHdr
	bool ___doHdr_9;
	// System.Single UnityStandardAssets.ImageEffects.BloomAndFlares::sepBlurSpread
	float ___sepBlurSpread_10;
	// System.Single UnityStandardAssets.ImageEffects.BloomAndFlares::useSrcAlphaAsMask
	float ___useSrcAlphaAsMask_11;
	// System.Single UnityStandardAssets.ImageEffects.BloomAndFlares::bloomIntensity
	float ___bloomIntensity_12;
	// System.Single UnityStandardAssets.ImageEffects.BloomAndFlares::bloomThreshold
	float ___bloomThreshold_13;
	// System.Int32 UnityStandardAssets.ImageEffects.BloomAndFlares::bloomBlurIterations
	int32_t ___bloomBlurIterations_14;
	// System.Boolean UnityStandardAssets.ImageEffects.BloomAndFlares::lensflares
	bool ___lensflares_15;
	// System.Int32 UnityStandardAssets.ImageEffects.BloomAndFlares::hollywoodFlareBlurIterations
	int32_t ___hollywoodFlareBlurIterations_16;
	// UnityStandardAssets.ImageEffects.LensflareStyle34 UnityStandardAssets.ImageEffects.BloomAndFlares::lensflareMode
	int32_t ___lensflareMode_17;
	// System.Single UnityStandardAssets.ImageEffects.BloomAndFlares::hollyStretchWidth
	float ___hollyStretchWidth_18;
	// System.Single UnityStandardAssets.ImageEffects.BloomAndFlares::lensflareIntensity
	float ___lensflareIntensity_19;
	// System.Single UnityStandardAssets.ImageEffects.BloomAndFlares::lensflareThreshold
	float ___lensflareThreshold_20;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.BloomAndFlares::flareColorA
	Color_t2555686324  ___flareColorA_21;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.BloomAndFlares::flareColorB
	Color_t2555686324  ___flareColorB_22;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.BloomAndFlares::flareColorC
	Color_t2555686324  ___flareColorC_23;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.BloomAndFlares::flareColorD
	Color_t2555686324  ___flareColorD_24;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.BloomAndFlares::lensFlareVignetteMask
	Texture2D_t3840446185 * ___lensFlareVignetteMask_25;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomAndFlares::lensFlareShader
	Shader_t4151988712 * ___lensFlareShader_26;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomAndFlares::lensFlareMaterial
	Material_t340375123 * ___lensFlareMaterial_27;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomAndFlares::vignetteShader
	Shader_t4151988712 * ___vignetteShader_28;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomAndFlares::vignetteMaterial
	Material_t340375123 * ___vignetteMaterial_29;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomAndFlares::separableBlurShader
	Shader_t4151988712 * ___separableBlurShader_30;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomAndFlares::separableBlurMaterial
	Material_t340375123 * ___separableBlurMaterial_31;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomAndFlares::addBrightStuffOneOneShader
	Shader_t4151988712 * ___addBrightStuffOneOneShader_32;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomAndFlares::addBrightStuffBlendOneOneMaterial
	Material_t340375123 * ___addBrightStuffBlendOneOneMaterial_33;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomAndFlares::screenBlendShader
	Shader_t4151988712 * ___screenBlendShader_34;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomAndFlares::screenBlend
	Material_t340375123 * ___screenBlend_35;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomAndFlares::hollywoodFlaresShader
	Shader_t4151988712 * ___hollywoodFlaresShader_36;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomAndFlares::hollywoodFlaresMaterial
	Material_t340375123 * ___hollywoodFlaresMaterial_37;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomAndFlares::brightPassFilterShader
	Shader_t4151988712 * ___brightPassFilterShader_38;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomAndFlares::brightPassFilterMaterial
	Material_t340375123 * ___brightPassFilterMaterial_39;

public:
	inline static int32_t get_offset_of_tweakMode_6() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___tweakMode_6)); }
	inline int32_t get_tweakMode_6() const { return ___tweakMode_6; }
	inline int32_t* get_address_of_tweakMode_6() { return &___tweakMode_6; }
	inline void set_tweakMode_6(int32_t value)
	{
		___tweakMode_6 = value;
	}

	inline static int32_t get_offset_of_screenBlendMode_7() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___screenBlendMode_7)); }
	inline int32_t get_screenBlendMode_7() const { return ___screenBlendMode_7; }
	inline int32_t* get_address_of_screenBlendMode_7() { return &___screenBlendMode_7; }
	inline void set_screenBlendMode_7(int32_t value)
	{
		___screenBlendMode_7 = value;
	}

	inline static int32_t get_offset_of_hdr_8() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___hdr_8)); }
	inline int32_t get_hdr_8() const { return ___hdr_8; }
	inline int32_t* get_address_of_hdr_8() { return &___hdr_8; }
	inline void set_hdr_8(int32_t value)
	{
		___hdr_8 = value;
	}

	inline static int32_t get_offset_of_doHdr_9() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___doHdr_9)); }
	inline bool get_doHdr_9() const { return ___doHdr_9; }
	inline bool* get_address_of_doHdr_9() { return &___doHdr_9; }
	inline void set_doHdr_9(bool value)
	{
		___doHdr_9 = value;
	}

	inline static int32_t get_offset_of_sepBlurSpread_10() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___sepBlurSpread_10)); }
	inline float get_sepBlurSpread_10() const { return ___sepBlurSpread_10; }
	inline float* get_address_of_sepBlurSpread_10() { return &___sepBlurSpread_10; }
	inline void set_sepBlurSpread_10(float value)
	{
		___sepBlurSpread_10 = value;
	}

	inline static int32_t get_offset_of_useSrcAlphaAsMask_11() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___useSrcAlphaAsMask_11)); }
	inline float get_useSrcAlphaAsMask_11() const { return ___useSrcAlphaAsMask_11; }
	inline float* get_address_of_useSrcAlphaAsMask_11() { return &___useSrcAlphaAsMask_11; }
	inline void set_useSrcAlphaAsMask_11(float value)
	{
		___useSrcAlphaAsMask_11 = value;
	}

	inline static int32_t get_offset_of_bloomIntensity_12() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___bloomIntensity_12)); }
	inline float get_bloomIntensity_12() const { return ___bloomIntensity_12; }
	inline float* get_address_of_bloomIntensity_12() { return &___bloomIntensity_12; }
	inline void set_bloomIntensity_12(float value)
	{
		___bloomIntensity_12 = value;
	}

	inline static int32_t get_offset_of_bloomThreshold_13() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___bloomThreshold_13)); }
	inline float get_bloomThreshold_13() const { return ___bloomThreshold_13; }
	inline float* get_address_of_bloomThreshold_13() { return &___bloomThreshold_13; }
	inline void set_bloomThreshold_13(float value)
	{
		___bloomThreshold_13 = value;
	}

	inline static int32_t get_offset_of_bloomBlurIterations_14() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___bloomBlurIterations_14)); }
	inline int32_t get_bloomBlurIterations_14() const { return ___bloomBlurIterations_14; }
	inline int32_t* get_address_of_bloomBlurIterations_14() { return &___bloomBlurIterations_14; }
	inline void set_bloomBlurIterations_14(int32_t value)
	{
		___bloomBlurIterations_14 = value;
	}

	inline static int32_t get_offset_of_lensflares_15() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___lensflares_15)); }
	inline bool get_lensflares_15() const { return ___lensflares_15; }
	inline bool* get_address_of_lensflares_15() { return &___lensflares_15; }
	inline void set_lensflares_15(bool value)
	{
		___lensflares_15 = value;
	}

	inline static int32_t get_offset_of_hollywoodFlareBlurIterations_16() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___hollywoodFlareBlurIterations_16)); }
	inline int32_t get_hollywoodFlareBlurIterations_16() const { return ___hollywoodFlareBlurIterations_16; }
	inline int32_t* get_address_of_hollywoodFlareBlurIterations_16() { return &___hollywoodFlareBlurIterations_16; }
	inline void set_hollywoodFlareBlurIterations_16(int32_t value)
	{
		___hollywoodFlareBlurIterations_16 = value;
	}

	inline static int32_t get_offset_of_lensflareMode_17() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___lensflareMode_17)); }
	inline int32_t get_lensflareMode_17() const { return ___lensflareMode_17; }
	inline int32_t* get_address_of_lensflareMode_17() { return &___lensflareMode_17; }
	inline void set_lensflareMode_17(int32_t value)
	{
		___lensflareMode_17 = value;
	}

	inline static int32_t get_offset_of_hollyStretchWidth_18() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___hollyStretchWidth_18)); }
	inline float get_hollyStretchWidth_18() const { return ___hollyStretchWidth_18; }
	inline float* get_address_of_hollyStretchWidth_18() { return &___hollyStretchWidth_18; }
	inline void set_hollyStretchWidth_18(float value)
	{
		___hollyStretchWidth_18 = value;
	}

	inline static int32_t get_offset_of_lensflareIntensity_19() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___lensflareIntensity_19)); }
	inline float get_lensflareIntensity_19() const { return ___lensflareIntensity_19; }
	inline float* get_address_of_lensflareIntensity_19() { return &___lensflareIntensity_19; }
	inline void set_lensflareIntensity_19(float value)
	{
		___lensflareIntensity_19 = value;
	}

	inline static int32_t get_offset_of_lensflareThreshold_20() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___lensflareThreshold_20)); }
	inline float get_lensflareThreshold_20() const { return ___lensflareThreshold_20; }
	inline float* get_address_of_lensflareThreshold_20() { return &___lensflareThreshold_20; }
	inline void set_lensflareThreshold_20(float value)
	{
		___lensflareThreshold_20 = value;
	}

	inline static int32_t get_offset_of_flareColorA_21() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___flareColorA_21)); }
	inline Color_t2555686324  get_flareColorA_21() const { return ___flareColorA_21; }
	inline Color_t2555686324 * get_address_of_flareColorA_21() { return &___flareColorA_21; }
	inline void set_flareColorA_21(Color_t2555686324  value)
	{
		___flareColorA_21 = value;
	}

	inline static int32_t get_offset_of_flareColorB_22() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___flareColorB_22)); }
	inline Color_t2555686324  get_flareColorB_22() const { return ___flareColorB_22; }
	inline Color_t2555686324 * get_address_of_flareColorB_22() { return &___flareColorB_22; }
	inline void set_flareColorB_22(Color_t2555686324  value)
	{
		___flareColorB_22 = value;
	}

	inline static int32_t get_offset_of_flareColorC_23() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___flareColorC_23)); }
	inline Color_t2555686324  get_flareColorC_23() const { return ___flareColorC_23; }
	inline Color_t2555686324 * get_address_of_flareColorC_23() { return &___flareColorC_23; }
	inline void set_flareColorC_23(Color_t2555686324  value)
	{
		___flareColorC_23 = value;
	}

	inline static int32_t get_offset_of_flareColorD_24() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___flareColorD_24)); }
	inline Color_t2555686324  get_flareColorD_24() const { return ___flareColorD_24; }
	inline Color_t2555686324 * get_address_of_flareColorD_24() { return &___flareColorD_24; }
	inline void set_flareColorD_24(Color_t2555686324  value)
	{
		___flareColorD_24 = value;
	}

	inline static int32_t get_offset_of_lensFlareVignetteMask_25() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___lensFlareVignetteMask_25)); }
	inline Texture2D_t3840446185 * get_lensFlareVignetteMask_25() const { return ___lensFlareVignetteMask_25; }
	inline Texture2D_t3840446185 ** get_address_of_lensFlareVignetteMask_25() { return &___lensFlareVignetteMask_25; }
	inline void set_lensFlareVignetteMask_25(Texture2D_t3840446185 * value)
	{
		___lensFlareVignetteMask_25 = value;
		Il2CppCodeGenWriteBarrier((&___lensFlareVignetteMask_25), value);
	}

	inline static int32_t get_offset_of_lensFlareShader_26() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___lensFlareShader_26)); }
	inline Shader_t4151988712 * get_lensFlareShader_26() const { return ___lensFlareShader_26; }
	inline Shader_t4151988712 ** get_address_of_lensFlareShader_26() { return &___lensFlareShader_26; }
	inline void set_lensFlareShader_26(Shader_t4151988712 * value)
	{
		___lensFlareShader_26 = value;
		Il2CppCodeGenWriteBarrier((&___lensFlareShader_26), value);
	}

	inline static int32_t get_offset_of_lensFlareMaterial_27() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___lensFlareMaterial_27)); }
	inline Material_t340375123 * get_lensFlareMaterial_27() const { return ___lensFlareMaterial_27; }
	inline Material_t340375123 ** get_address_of_lensFlareMaterial_27() { return &___lensFlareMaterial_27; }
	inline void set_lensFlareMaterial_27(Material_t340375123 * value)
	{
		___lensFlareMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((&___lensFlareMaterial_27), value);
	}

	inline static int32_t get_offset_of_vignetteShader_28() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___vignetteShader_28)); }
	inline Shader_t4151988712 * get_vignetteShader_28() const { return ___vignetteShader_28; }
	inline Shader_t4151988712 ** get_address_of_vignetteShader_28() { return &___vignetteShader_28; }
	inline void set_vignetteShader_28(Shader_t4151988712 * value)
	{
		___vignetteShader_28 = value;
		Il2CppCodeGenWriteBarrier((&___vignetteShader_28), value);
	}

	inline static int32_t get_offset_of_vignetteMaterial_29() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___vignetteMaterial_29)); }
	inline Material_t340375123 * get_vignetteMaterial_29() const { return ___vignetteMaterial_29; }
	inline Material_t340375123 ** get_address_of_vignetteMaterial_29() { return &___vignetteMaterial_29; }
	inline void set_vignetteMaterial_29(Material_t340375123 * value)
	{
		___vignetteMaterial_29 = value;
		Il2CppCodeGenWriteBarrier((&___vignetteMaterial_29), value);
	}

	inline static int32_t get_offset_of_separableBlurShader_30() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___separableBlurShader_30)); }
	inline Shader_t4151988712 * get_separableBlurShader_30() const { return ___separableBlurShader_30; }
	inline Shader_t4151988712 ** get_address_of_separableBlurShader_30() { return &___separableBlurShader_30; }
	inline void set_separableBlurShader_30(Shader_t4151988712 * value)
	{
		___separableBlurShader_30 = value;
		Il2CppCodeGenWriteBarrier((&___separableBlurShader_30), value);
	}

	inline static int32_t get_offset_of_separableBlurMaterial_31() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___separableBlurMaterial_31)); }
	inline Material_t340375123 * get_separableBlurMaterial_31() const { return ___separableBlurMaterial_31; }
	inline Material_t340375123 ** get_address_of_separableBlurMaterial_31() { return &___separableBlurMaterial_31; }
	inline void set_separableBlurMaterial_31(Material_t340375123 * value)
	{
		___separableBlurMaterial_31 = value;
		Il2CppCodeGenWriteBarrier((&___separableBlurMaterial_31), value);
	}

	inline static int32_t get_offset_of_addBrightStuffOneOneShader_32() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___addBrightStuffOneOneShader_32)); }
	inline Shader_t4151988712 * get_addBrightStuffOneOneShader_32() const { return ___addBrightStuffOneOneShader_32; }
	inline Shader_t4151988712 ** get_address_of_addBrightStuffOneOneShader_32() { return &___addBrightStuffOneOneShader_32; }
	inline void set_addBrightStuffOneOneShader_32(Shader_t4151988712 * value)
	{
		___addBrightStuffOneOneShader_32 = value;
		Il2CppCodeGenWriteBarrier((&___addBrightStuffOneOneShader_32), value);
	}

	inline static int32_t get_offset_of_addBrightStuffBlendOneOneMaterial_33() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___addBrightStuffBlendOneOneMaterial_33)); }
	inline Material_t340375123 * get_addBrightStuffBlendOneOneMaterial_33() const { return ___addBrightStuffBlendOneOneMaterial_33; }
	inline Material_t340375123 ** get_address_of_addBrightStuffBlendOneOneMaterial_33() { return &___addBrightStuffBlendOneOneMaterial_33; }
	inline void set_addBrightStuffBlendOneOneMaterial_33(Material_t340375123 * value)
	{
		___addBrightStuffBlendOneOneMaterial_33 = value;
		Il2CppCodeGenWriteBarrier((&___addBrightStuffBlendOneOneMaterial_33), value);
	}

	inline static int32_t get_offset_of_screenBlendShader_34() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___screenBlendShader_34)); }
	inline Shader_t4151988712 * get_screenBlendShader_34() const { return ___screenBlendShader_34; }
	inline Shader_t4151988712 ** get_address_of_screenBlendShader_34() { return &___screenBlendShader_34; }
	inline void set_screenBlendShader_34(Shader_t4151988712 * value)
	{
		___screenBlendShader_34 = value;
		Il2CppCodeGenWriteBarrier((&___screenBlendShader_34), value);
	}

	inline static int32_t get_offset_of_screenBlend_35() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___screenBlend_35)); }
	inline Material_t340375123 * get_screenBlend_35() const { return ___screenBlend_35; }
	inline Material_t340375123 ** get_address_of_screenBlend_35() { return &___screenBlend_35; }
	inline void set_screenBlend_35(Material_t340375123 * value)
	{
		___screenBlend_35 = value;
		Il2CppCodeGenWriteBarrier((&___screenBlend_35), value);
	}

	inline static int32_t get_offset_of_hollywoodFlaresShader_36() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___hollywoodFlaresShader_36)); }
	inline Shader_t4151988712 * get_hollywoodFlaresShader_36() const { return ___hollywoodFlaresShader_36; }
	inline Shader_t4151988712 ** get_address_of_hollywoodFlaresShader_36() { return &___hollywoodFlaresShader_36; }
	inline void set_hollywoodFlaresShader_36(Shader_t4151988712 * value)
	{
		___hollywoodFlaresShader_36 = value;
		Il2CppCodeGenWriteBarrier((&___hollywoodFlaresShader_36), value);
	}

	inline static int32_t get_offset_of_hollywoodFlaresMaterial_37() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___hollywoodFlaresMaterial_37)); }
	inline Material_t340375123 * get_hollywoodFlaresMaterial_37() const { return ___hollywoodFlaresMaterial_37; }
	inline Material_t340375123 ** get_address_of_hollywoodFlaresMaterial_37() { return &___hollywoodFlaresMaterial_37; }
	inline void set_hollywoodFlaresMaterial_37(Material_t340375123 * value)
	{
		___hollywoodFlaresMaterial_37 = value;
		Il2CppCodeGenWriteBarrier((&___hollywoodFlaresMaterial_37), value);
	}

	inline static int32_t get_offset_of_brightPassFilterShader_38() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___brightPassFilterShader_38)); }
	inline Shader_t4151988712 * get_brightPassFilterShader_38() const { return ___brightPassFilterShader_38; }
	inline Shader_t4151988712 ** get_address_of_brightPassFilterShader_38() { return &___brightPassFilterShader_38; }
	inline void set_brightPassFilterShader_38(Shader_t4151988712 * value)
	{
		___brightPassFilterShader_38 = value;
		Il2CppCodeGenWriteBarrier((&___brightPassFilterShader_38), value);
	}

	inline static int32_t get_offset_of_brightPassFilterMaterial_39() { return static_cast<int32_t>(offsetof(BloomAndFlares_t2848767628, ___brightPassFilterMaterial_39)); }
	inline Material_t340375123 * get_brightPassFilterMaterial_39() const { return ___brightPassFilterMaterial_39; }
	inline Material_t340375123 ** get_address_of_brightPassFilterMaterial_39() { return &___brightPassFilterMaterial_39; }
	inline void set_brightPassFilterMaterial_39(Material_t340375123 * value)
	{
		___brightPassFilterMaterial_39 = value;
		Il2CppCodeGenWriteBarrier((&___brightPassFilterMaterial_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOOMANDFLARES_T2848767628_H
#ifndef TARGETFIELDOFVIEW_T3060904718_H
#define TARGETFIELDOFVIEW_T3060904718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.TargetFieldOfView
struct  TargetFieldOfView_t3060904718  : public AbstractTargetFollower_t1919708159
{
public:
	// System.Single UnityStandardAssets.Cameras.TargetFieldOfView::m_FovAdjustTime
	float ___m_FovAdjustTime_6;
	// System.Single UnityStandardAssets.Cameras.TargetFieldOfView::m_ZoomAmountMultiplier
	float ___m_ZoomAmountMultiplier_7;
	// System.Boolean UnityStandardAssets.Cameras.TargetFieldOfView::m_IncludeEffectsInSize
	bool ___m_IncludeEffectsInSize_8;
	// System.Single UnityStandardAssets.Cameras.TargetFieldOfView::m_BoundSize
	float ___m_BoundSize_9;
	// System.Single UnityStandardAssets.Cameras.TargetFieldOfView::m_FovAdjustVelocity
	float ___m_FovAdjustVelocity_10;
	// UnityEngine.Camera UnityStandardAssets.Cameras.TargetFieldOfView::m_Cam
	Camera_t4157153871 * ___m_Cam_11;
	// UnityEngine.Transform UnityStandardAssets.Cameras.TargetFieldOfView::m_LastTarget
	Transform_t3600365921 * ___m_LastTarget_12;

public:
	inline static int32_t get_offset_of_m_FovAdjustTime_6() { return static_cast<int32_t>(offsetof(TargetFieldOfView_t3060904718, ___m_FovAdjustTime_6)); }
	inline float get_m_FovAdjustTime_6() const { return ___m_FovAdjustTime_6; }
	inline float* get_address_of_m_FovAdjustTime_6() { return &___m_FovAdjustTime_6; }
	inline void set_m_FovAdjustTime_6(float value)
	{
		___m_FovAdjustTime_6 = value;
	}

	inline static int32_t get_offset_of_m_ZoomAmountMultiplier_7() { return static_cast<int32_t>(offsetof(TargetFieldOfView_t3060904718, ___m_ZoomAmountMultiplier_7)); }
	inline float get_m_ZoomAmountMultiplier_7() const { return ___m_ZoomAmountMultiplier_7; }
	inline float* get_address_of_m_ZoomAmountMultiplier_7() { return &___m_ZoomAmountMultiplier_7; }
	inline void set_m_ZoomAmountMultiplier_7(float value)
	{
		___m_ZoomAmountMultiplier_7 = value;
	}

	inline static int32_t get_offset_of_m_IncludeEffectsInSize_8() { return static_cast<int32_t>(offsetof(TargetFieldOfView_t3060904718, ___m_IncludeEffectsInSize_8)); }
	inline bool get_m_IncludeEffectsInSize_8() const { return ___m_IncludeEffectsInSize_8; }
	inline bool* get_address_of_m_IncludeEffectsInSize_8() { return &___m_IncludeEffectsInSize_8; }
	inline void set_m_IncludeEffectsInSize_8(bool value)
	{
		___m_IncludeEffectsInSize_8 = value;
	}

	inline static int32_t get_offset_of_m_BoundSize_9() { return static_cast<int32_t>(offsetof(TargetFieldOfView_t3060904718, ___m_BoundSize_9)); }
	inline float get_m_BoundSize_9() const { return ___m_BoundSize_9; }
	inline float* get_address_of_m_BoundSize_9() { return &___m_BoundSize_9; }
	inline void set_m_BoundSize_9(float value)
	{
		___m_BoundSize_9 = value;
	}

	inline static int32_t get_offset_of_m_FovAdjustVelocity_10() { return static_cast<int32_t>(offsetof(TargetFieldOfView_t3060904718, ___m_FovAdjustVelocity_10)); }
	inline float get_m_FovAdjustVelocity_10() const { return ___m_FovAdjustVelocity_10; }
	inline float* get_address_of_m_FovAdjustVelocity_10() { return &___m_FovAdjustVelocity_10; }
	inline void set_m_FovAdjustVelocity_10(float value)
	{
		___m_FovAdjustVelocity_10 = value;
	}

	inline static int32_t get_offset_of_m_Cam_11() { return static_cast<int32_t>(offsetof(TargetFieldOfView_t3060904718, ___m_Cam_11)); }
	inline Camera_t4157153871 * get_m_Cam_11() const { return ___m_Cam_11; }
	inline Camera_t4157153871 ** get_address_of_m_Cam_11() { return &___m_Cam_11; }
	inline void set_m_Cam_11(Camera_t4157153871 * value)
	{
		___m_Cam_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Cam_11), value);
	}

	inline static int32_t get_offset_of_m_LastTarget_12() { return static_cast<int32_t>(offsetof(TargetFieldOfView_t3060904718, ___m_LastTarget_12)); }
	inline Transform_t3600365921 * get_m_LastTarget_12() const { return ___m_LastTarget_12; }
	inline Transform_t3600365921 ** get_address_of_m_LastTarget_12() { return &___m_LastTarget_12; }
	inline void set_m_LastTarget_12(Transform_t3600365921 * value)
	{
		___m_LastTarget_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastTarget_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETFIELDOFVIEW_T3060904718_H
#ifndef SCREENOVERLAY_T3772274400_H
#define SCREENOVERLAY_T3772274400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ScreenOverlay
struct  ScreenOverlay_t3772274400  : public PostEffectsBase_t2404315739
{
public:
	// UnityStandardAssets.ImageEffects.ScreenOverlay/OverlayBlendMode UnityStandardAssets.ImageEffects.ScreenOverlay::blendMode
	int32_t ___blendMode_6;
	// System.Single UnityStandardAssets.ImageEffects.ScreenOverlay::intensity
	float ___intensity_7;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ScreenOverlay::texture
	Texture2D_t3840446185 * ___texture_8;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ScreenOverlay::overlayShader
	Shader_t4151988712 * ___overlayShader_9;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ScreenOverlay::overlayMaterial
	Material_t340375123 * ___overlayMaterial_10;

public:
	inline static int32_t get_offset_of_blendMode_6() { return static_cast<int32_t>(offsetof(ScreenOverlay_t3772274400, ___blendMode_6)); }
	inline int32_t get_blendMode_6() const { return ___blendMode_6; }
	inline int32_t* get_address_of_blendMode_6() { return &___blendMode_6; }
	inline void set_blendMode_6(int32_t value)
	{
		___blendMode_6 = value;
	}

	inline static int32_t get_offset_of_intensity_7() { return static_cast<int32_t>(offsetof(ScreenOverlay_t3772274400, ___intensity_7)); }
	inline float get_intensity_7() const { return ___intensity_7; }
	inline float* get_address_of_intensity_7() { return &___intensity_7; }
	inline void set_intensity_7(float value)
	{
		___intensity_7 = value;
	}

	inline static int32_t get_offset_of_texture_8() { return static_cast<int32_t>(offsetof(ScreenOverlay_t3772274400, ___texture_8)); }
	inline Texture2D_t3840446185 * get_texture_8() const { return ___texture_8; }
	inline Texture2D_t3840446185 ** get_address_of_texture_8() { return &___texture_8; }
	inline void set_texture_8(Texture2D_t3840446185 * value)
	{
		___texture_8 = value;
		Il2CppCodeGenWriteBarrier((&___texture_8), value);
	}

	inline static int32_t get_offset_of_overlayShader_9() { return static_cast<int32_t>(offsetof(ScreenOverlay_t3772274400, ___overlayShader_9)); }
	inline Shader_t4151988712 * get_overlayShader_9() const { return ___overlayShader_9; }
	inline Shader_t4151988712 ** get_address_of_overlayShader_9() { return &___overlayShader_9; }
	inline void set_overlayShader_9(Shader_t4151988712 * value)
	{
		___overlayShader_9 = value;
		Il2CppCodeGenWriteBarrier((&___overlayShader_9), value);
	}

	inline static int32_t get_offset_of_overlayMaterial_10() { return static_cast<int32_t>(offsetof(ScreenOverlay_t3772274400, ___overlayMaterial_10)); }
	inline Material_t340375123 * get_overlayMaterial_10() const { return ___overlayMaterial_10; }
	inline Material_t340375123 ** get_address_of_overlayMaterial_10() { return &___overlayMaterial_10; }
	inline void set_overlayMaterial_10(Material_t340375123 * value)
	{
		___overlayMaterial_10 = value;
		Il2CppCodeGenWriteBarrier((&___overlayMaterial_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENOVERLAY_T3772274400_H
#ifndef SCREENSPACEAMBIENTOBSCURANCE_T1844081910_H
#define SCREENSPACEAMBIENTOBSCURANCE_T1844081910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance
struct  ScreenSpaceAmbientObscurance_t1844081910  : public PostEffectsBase_t2404315739
{
public:
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::intensity
	float ___intensity_6;
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::radius
	float ___radius_7;
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::blurIterations
	int32_t ___blurIterations_8;
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::blurFilterDistance
	float ___blurFilterDistance_9;
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::downsample
	int32_t ___downsample_10;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::rand
	Texture2D_t3840446185 * ___rand_11;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::aoShader
	Shader_t4151988712 * ___aoShader_12;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::aoMaterial
	Material_t340375123 * ___aoMaterial_13;

public:
	inline static int32_t get_offset_of_intensity_6() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientObscurance_t1844081910, ___intensity_6)); }
	inline float get_intensity_6() const { return ___intensity_6; }
	inline float* get_address_of_intensity_6() { return &___intensity_6; }
	inline void set_intensity_6(float value)
	{
		___intensity_6 = value;
	}

	inline static int32_t get_offset_of_radius_7() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientObscurance_t1844081910, ___radius_7)); }
	inline float get_radius_7() const { return ___radius_7; }
	inline float* get_address_of_radius_7() { return &___radius_7; }
	inline void set_radius_7(float value)
	{
		___radius_7 = value;
	}

	inline static int32_t get_offset_of_blurIterations_8() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientObscurance_t1844081910, ___blurIterations_8)); }
	inline int32_t get_blurIterations_8() const { return ___blurIterations_8; }
	inline int32_t* get_address_of_blurIterations_8() { return &___blurIterations_8; }
	inline void set_blurIterations_8(int32_t value)
	{
		___blurIterations_8 = value;
	}

	inline static int32_t get_offset_of_blurFilterDistance_9() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientObscurance_t1844081910, ___blurFilterDistance_9)); }
	inline float get_blurFilterDistance_9() const { return ___blurFilterDistance_9; }
	inline float* get_address_of_blurFilterDistance_9() { return &___blurFilterDistance_9; }
	inline void set_blurFilterDistance_9(float value)
	{
		___blurFilterDistance_9 = value;
	}

	inline static int32_t get_offset_of_downsample_10() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientObscurance_t1844081910, ___downsample_10)); }
	inline int32_t get_downsample_10() const { return ___downsample_10; }
	inline int32_t* get_address_of_downsample_10() { return &___downsample_10; }
	inline void set_downsample_10(int32_t value)
	{
		___downsample_10 = value;
	}

	inline static int32_t get_offset_of_rand_11() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientObscurance_t1844081910, ___rand_11)); }
	inline Texture2D_t3840446185 * get_rand_11() const { return ___rand_11; }
	inline Texture2D_t3840446185 ** get_address_of_rand_11() { return &___rand_11; }
	inline void set_rand_11(Texture2D_t3840446185 * value)
	{
		___rand_11 = value;
		Il2CppCodeGenWriteBarrier((&___rand_11), value);
	}

	inline static int32_t get_offset_of_aoShader_12() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientObscurance_t1844081910, ___aoShader_12)); }
	inline Shader_t4151988712 * get_aoShader_12() const { return ___aoShader_12; }
	inline Shader_t4151988712 ** get_address_of_aoShader_12() { return &___aoShader_12; }
	inline void set_aoShader_12(Shader_t4151988712 * value)
	{
		___aoShader_12 = value;
		Il2CppCodeGenWriteBarrier((&___aoShader_12), value);
	}

	inline static int32_t get_offset_of_aoMaterial_13() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientObscurance_t1844081910, ___aoMaterial_13)); }
	inline Material_t340375123 * get_aoMaterial_13() const { return ___aoMaterial_13; }
	inline Material_t340375123 ** get_address_of_aoMaterial_13() { return &___aoMaterial_13; }
	inline void set_aoMaterial_13(Material_t340375123 * value)
	{
		___aoMaterial_13 = value;
		Il2CppCodeGenWriteBarrier((&___aoMaterial_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENSPACEAMBIENTOBSCURANCE_T1844081910_H
#ifndef SEPIATONE_T4259761740_H
#define SEPIATONE_T4259761740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.SepiaTone
struct  SepiaTone_t4259761740  : public ImageEffectBase_t2026006575
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEPIATONE_T4259761740_H
#ifndef SUNSHAFTS_T2328921421_H
#define SUNSHAFTS_T2328921421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.SunShafts
struct  SunShafts_t2328921421  : public PostEffectsBase_t2404315739
{
public:
	// UnityStandardAssets.ImageEffects.SunShafts/SunShaftsResolution UnityStandardAssets.ImageEffects.SunShafts::resolution
	int32_t ___resolution_6;
	// UnityStandardAssets.ImageEffects.SunShafts/ShaftsScreenBlendMode UnityStandardAssets.ImageEffects.SunShafts::screenBlendMode
	int32_t ___screenBlendMode_7;
	// UnityEngine.Transform UnityStandardAssets.ImageEffects.SunShafts::sunTransform
	Transform_t3600365921 * ___sunTransform_8;
	// System.Int32 UnityStandardAssets.ImageEffects.SunShafts::radialBlurIterations
	int32_t ___radialBlurIterations_9;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.SunShafts::sunColor
	Color_t2555686324  ___sunColor_10;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.SunShafts::sunThreshold
	Color_t2555686324  ___sunThreshold_11;
	// System.Single UnityStandardAssets.ImageEffects.SunShafts::sunShaftBlurRadius
	float ___sunShaftBlurRadius_12;
	// System.Single UnityStandardAssets.ImageEffects.SunShafts::sunShaftIntensity
	float ___sunShaftIntensity_13;
	// System.Single UnityStandardAssets.ImageEffects.SunShafts::maxRadius
	float ___maxRadius_14;
	// System.Boolean UnityStandardAssets.ImageEffects.SunShafts::useDepthTexture
	bool ___useDepthTexture_15;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.SunShafts::sunShaftsShader
	Shader_t4151988712 * ___sunShaftsShader_16;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.SunShafts::sunShaftsMaterial
	Material_t340375123 * ___sunShaftsMaterial_17;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.SunShafts::simpleClearShader
	Shader_t4151988712 * ___simpleClearShader_18;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.SunShafts::simpleClearMaterial
	Material_t340375123 * ___simpleClearMaterial_19;

public:
	inline static int32_t get_offset_of_resolution_6() { return static_cast<int32_t>(offsetof(SunShafts_t2328921421, ___resolution_6)); }
	inline int32_t get_resolution_6() const { return ___resolution_6; }
	inline int32_t* get_address_of_resolution_6() { return &___resolution_6; }
	inline void set_resolution_6(int32_t value)
	{
		___resolution_6 = value;
	}

	inline static int32_t get_offset_of_screenBlendMode_7() { return static_cast<int32_t>(offsetof(SunShafts_t2328921421, ___screenBlendMode_7)); }
	inline int32_t get_screenBlendMode_7() const { return ___screenBlendMode_7; }
	inline int32_t* get_address_of_screenBlendMode_7() { return &___screenBlendMode_7; }
	inline void set_screenBlendMode_7(int32_t value)
	{
		___screenBlendMode_7 = value;
	}

	inline static int32_t get_offset_of_sunTransform_8() { return static_cast<int32_t>(offsetof(SunShafts_t2328921421, ___sunTransform_8)); }
	inline Transform_t3600365921 * get_sunTransform_8() const { return ___sunTransform_8; }
	inline Transform_t3600365921 ** get_address_of_sunTransform_8() { return &___sunTransform_8; }
	inline void set_sunTransform_8(Transform_t3600365921 * value)
	{
		___sunTransform_8 = value;
		Il2CppCodeGenWriteBarrier((&___sunTransform_8), value);
	}

	inline static int32_t get_offset_of_radialBlurIterations_9() { return static_cast<int32_t>(offsetof(SunShafts_t2328921421, ___radialBlurIterations_9)); }
	inline int32_t get_radialBlurIterations_9() const { return ___radialBlurIterations_9; }
	inline int32_t* get_address_of_radialBlurIterations_9() { return &___radialBlurIterations_9; }
	inline void set_radialBlurIterations_9(int32_t value)
	{
		___radialBlurIterations_9 = value;
	}

	inline static int32_t get_offset_of_sunColor_10() { return static_cast<int32_t>(offsetof(SunShafts_t2328921421, ___sunColor_10)); }
	inline Color_t2555686324  get_sunColor_10() const { return ___sunColor_10; }
	inline Color_t2555686324 * get_address_of_sunColor_10() { return &___sunColor_10; }
	inline void set_sunColor_10(Color_t2555686324  value)
	{
		___sunColor_10 = value;
	}

	inline static int32_t get_offset_of_sunThreshold_11() { return static_cast<int32_t>(offsetof(SunShafts_t2328921421, ___sunThreshold_11)); }
	inline Color_t2555686324  get_sunThreshold_11() const { return ___sunThreshold_11; }
	inline Color_t2555686324 * get_address_of_sunThreshold_11() { return &___sunThreshold_11; }
	inline void set_sunThreshold_11(Color_t2555686324  value)
	{
		___sunThreshold_11 = value;
	}

	inline static int32_t get_offset_of_sunShaftBlurRadius_12() { return static_cast<int32_t>(offsetof(SunShafts_t2328921421, ___sunShaftBlurRadius_12)); }
	inline float get_sunShaftBlurRadius_12() const { return ___sunShaftBlurRadius_12; }
	inline float* get_address_of_sunShaftBlurRadius_12() { return &___sunShaftBlurRadius_12; }
	inline void set_sunShaftBlurRadius_12(float value)
	{
		___sunShaftBlurRadius_12 = value;
	}

	inline static int32_t get_offset_of_sunShaftIntensity_13() { return static_cast<int32_t>(offsetof(SunShafts_t2328921421, ___sunShaftIntensity_13)); }
	inline float get_sunShaftIntensity_13() const { return ___sunShaftIntensity_13; }
	inline float* get_address_of_sunShaftIntensity_13() { return &___sunShaftIntensity_13; }
	inline void set_sunShaftIntensity_13(float value)
	{
		___sunShaftIntensity_13 = value;
	}

	inline static int32_t get_offset_of_maxRadius_14() { return static_cast<int32_t>(offsetof(SunShafts_t2328921421, ___maxRadius_14)); }
	inline float get_maxRadius_14() const { return ___maxRadius_14; }
	inline float* get_address_of_maxRadius_14() { return &___maxRadius_14; }
	inline void set_maxRadius_14(float value)
	{
		___maxRadius_14 = value;
	}

	inline static int32_t get_offset_of_useDepthTexture_15() { return static_cast<int32_t>(offsetof(SunShafts_t2328921421, ___useDepthTexture_15)); }
	inline bool get_useDepthTexture_15() const { return ___useDepthTexture_15; }
	inline bool* get_address_of_useDepthTexture_15() { return &___useDepthTexture_15; }
	inline void set_useDepthTexture_15(bool value)
	{
		___useDepthTexture_15 = value;
	}

	inline static int32_t get_offset_of_sunShaftsShader_16() { return static_cast<int32_t>(offsetof(SunShafts_t2328921421, ___sunShaftsShader_16)); }
	inline Shader_t4151988712 * get_sunShaftsShader_16() const { return ___sunShaftsShader_16; }
	inline Shader_t4151988712 ** get_address_of_sunShaftsShader_16() { return &___sunShaftsShader_16; }
	inline void set_sunShaftsShader_16(Shader_t4151988712 * value)
	{
		___sunShaftsShader_16 = value;
		Il2CppCodeGenWriteBarrier((&___sunShaftsShader_16), value);
	}

	inline static int32_t get_offset_of_sunShaftsMaterial_17() { return static_cast<int32_t>(offsetof(SunShafts_t2328921421, ___sunShaftsMaterial_17)); }
	inline Material_t340375123 * get_sunShaftsMaterial_17() const { return ___sunShaftsMaterial_17; }
	inline Material_t340375123 ** get_address_of_sunShaftsMaterial_17() { return &___sunShaftsMaterial_17; }
	inline void set_sunShaftsMaterial_17(Material_t340375123 * value)
	{
		___sunShaftsMaterial_17 = value;
		Il2CppCodeGenWriteBarrier((&___sunShaftsMaterial_17), value);
	}

	inline static int32_t get_offset_of_simpleClearShader_18() { return static_cast<int32_t>(offsetof(SunShafts_t2328921421, ___simpleClearShader_18)); }
	inline Shader_t4151988712 * get_simpleClearShader_18() const { return ___simpleClearShader_18; }
	inline Shader_t4151988712 ** get_address_of_simpleClearShader_18() { return &___simpleClearShader_18; }
	inline void set_simpleClearShader_18(Shader_t4151988712 * value)
	{
		___simpleClearShader_18 = value;
		Il2CppCodeGenWriteBarrier((&___simpleClearShader_18), value);
	}

	inline static int32_t get_offset_of_simpleClearMaterial_19() { return static_cast<int32_t>(offsetof(SunShafts_t2328921421, ___simpleClearMaterial_19)); }
	inline Material_t340375123 * get_simpleClearMaterial_19() const { return ___simpleClearMaterial_19; }
	inline Material_t340375123 ** get_address_of_simpleClearMaterial_19() { return &___simpleClearMaterial_19; }
	inline void set_simpleClearMaterial_19(Material_t340375123 * value)
	{
		___simpleClearMaterial_19 = value;
		Il2CppCodeGenWriteBarrier((&___simpleClearMaterial_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUNSHAFTS_T2328921421_H
#ifndef NOISEANDGRAIN_T3814230817_H
#define NOISEANDGRAIN_T3814230817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.NoiseAndGrain
struct  NoiseAndGrain_t3814230817  : public PostEffectsBase_t2404315739
{
public:
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::intensityMultiplier
	float ___intensityMultiplier_6;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::generalIntensity
	float ___generalIntensity_7;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::blackIntensity
	float ___blackIntensity_8;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::whiteIntensity
	float ___whiteIntensity_9;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::midGrey
	float ___midGrey_10;
	// System.Boolean UnityStandardAssets.ImageEffects.NoiseAndGrain::dx11Grain
	bool ___dx11Grain_11;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::softness
	float ___softness_12;
	// System.Boolean UnityStandardAssets.ImageEffects.NoiseAndGrain::monochrome
	bool ___monochrome_13;
	// UnityEngine.Vector3 UnityStandardAssets.ImageEffects.NoiseAndGrain::intensities
	Vector3_t3722313464  ___intensities_14;
	// UnityEngine.Vector3 UnityStandardAssets.ImageEffects.NoiseAndGrain::tiling
	Vector3_t3722313464  ___tiling_15;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::monochromeTiling
	float ___monochromeTiling_16;
	// UnityEngine.FilterMode UnityStandardAssets.ImageEffects.NoiseAndGrain::filterMode
	int32_t ___filterMode_17;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.NoiseAndGrain::noiseTexture
	Texture2D_t3840446185 * ___noiseTexture_18;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.NoiseAndGrain::noiseShader
	Shader_t4151988712 * ___noiseShader_19;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.NoiseAndGrain::noiseMaterial
	Material_t340375123 * ___noiseMaterial_20;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.NoiseAndGrain::dx11NoiseShader
	Shader_t4151988712 * ___dx11NoiseShader_21;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.NoiseAndGrain::dx11NoiseMaterial
	Material_t340375123 * ___dx11NoiseMaterial_22;

public:
	inline static int32_t get_offset_of_intensityMultiplier_6() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3814230817, ___intensityMultiplier_6)); }
	inline float get_intensityMultiplier_6() const { return ___intensityMultiplier_6; }
	inline float* get_address_of_intensityMultiplier_6() { return &___intensityMultiplier_6; }
	inline void set_intensityMultiplier_6(float value)
	{
		___intensityMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_generalIntensity_7() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3814230817, ___generalIntensity_7)); }
	inline float get_generalIntensity_7() const { return ___generalIntensity_7; }
	inline float* get_address_of_generalIntensity_7() { return &___generalIntensity_7; }
	inline void set_generalIntensity_7(float value)
	{
		___generalIntensity_7 = value;
	}

	inline static int32_t get_offset_of_blackIntensity_8() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3814230817, ___blackIntensity_8)); }
	inline float get_blackIntensity_8() const { return ___blackIntensity_8; }
	inline float* get_address_of_blackIntensity_8() { return &___blackIntensity_8; }
	inline void set_blackIntensity_8(float value)
	{
		___blackIntensity_8 = value;
	}

	inline static int32_t get_offset_of_whiteIntensity_9() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3814230817, ___whiteIntensity_9)); }
	inline float get_whiteIntensity_9() const { return ___whiteIntensity_9; }
	inline float* get_address_of_whiteIntensity_9() { return &___whiteIntensity_9; }
	inline void set_whiteIntensity_9(float value)
	{
		___whiteIntensity_9 = value;
	}

	inline static int32_t get_offset_of_midGrey_10() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3814230817, ___midGrey_10)); }
	inline float get_midGrey_10() const { return ___midGrey_10; }
	inline float* get_address_of_midGrey_10() { return &___midGrey_10; }
	inline void set_midGrey_10(float value)
	{
		___midGrey_10 = value;
	}

	inline static int32_t get_offset_of_dx11Grain_11() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3814230817, ___dx11Grain_11)); }
	inline bool get_dx11Grain_11() const { return ___dx11Grain_11; }
	inline bool* get_address_of_dx11Grain_11() { return &___dx11Grain_11; }
	inline void set_dx11Grain_11(bool value)
	{
		___dx11Grain_11 = value;
	}

	inline static int32_t get_offset_of_softness_12() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3814230817, ___softness_12)); }
	inline float get_softness_12() const { return ___softness_12; }
	inline float* get_address_of_softness_12() { return &___softness_12; }
	inline void set_softness_12(float value)
	{
		___softness_12 = value;
	}

	inline static int32_t get_offset_of_monochrome_13() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3814230817, ___monochrome_13)); }
	inline bool get_monochrome_13() const { return ___monochrome_13; }
	inline bool* get_address_of_monochrome_13() { return &___monochrome_13; }
	inline void set_monochrome_13(bool value)
	{
		___monochrome_13 = value;
	}

	inline static int32_t get_offset_of_intensities_14() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3814230817, ___intensities_14)); }
	inline Vector3_t3722313464  get_intensities_14() const { return ___intensities_14; }
	inline Vector3_t3722313464 * get_address_of_intensities_14() { return &___intensities_14; }
	inline void set_intensities_14(Vector3_t3722313464  value)
	{
		___intensities_14 = value;
	}

	inline static int32_t get_offset_of_tiling_15() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3814230817, ___tiling_15)); }
	inline Vector3_t3722313464  get_tiling_15() const { return ___tiling_15; }
	inline Vector3_t3722313464 * get_address_of_tiling_15() { return &___tiling_15; }
	inline void set_tiling_15(Vector3_t3722313464  value)
	{
		___tiling_15 = value;
	}

	inline static int32_t get_offset_of_monochromeTiling_16() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3814230817, ___monochromeTiling_16)); }
	inline float get_monochromeTiling_16() const { return ___monochromeTiling_16; }
	inline float* get_address_of_monochromeTiling_16() { return &___monochromeTiling_16; }
	inline void set_monochromeTiling_16(float value)
	{
		___monochromeTiling_16 = value;
	}

	inline static int32_t get_offset_of_filterMode_17() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3814230817, ___filterMode_17)); }
	inline int32_t get_filterMode_17() const { return ___filterMode_17; }
	inline int32_t* get_address_of_filterMode_17() { return &___filterMode_17; }
	inline void set_filterMode_17(int32_t value)
	{
		___filterMode_17 = value;
	}

	inline static int32_t get_offset_of_noiseTexture_18() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3814230817, ___noiseTexture_18)); }
	inline Texture2D_t3840446185 * get_noiseTexture_18() const { return ___noiseTexture_18; }
	inline Texture2D_t3840446185 ** get_address_of_noiseTexture_18() { return &___noiseTexture_18; }
	inline void set_noiseTexture_18(Texture2D_t3840446185 * value)
	{
		___noiseTexture_18 = value;
		Il2CppCodeGenWriteBarrier((&___noiseTexture_18), value);
	}

	inline static int32_t get_offset_of_noiseShader_19() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3814230817, ___noiseShader_19)); }
	inline Shader_t4151988712 * get_noiseShader_19() const { return ___noiseShader_19; }
	inline Shader_t4151988712 ** get_address_of_noiseShader_19() { return &___noiseShader_19; }
	inline void set_noiseShader_19(Shader_t4151988712 * value)
	{
		___noiseShader_19 = value;
		Il2CppCodeGenWriteBarrier((&___noiseShader_19), value);
	}

	inline static int32_t get_offset_of_noiseMaterial_20() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3814230817, ___noiseMaterial_20)); }
	inline Material_t340375123 * get_noiseMaterial_20() const { return ___noiseMaterial_20; }
	inline Material_t340375123 ** get_address_of_noiseMaterial_20() { return &___noiseMaterial_20; }
	inline void set_noiseMaterial_20(Material_t340375123 * value)
	{
		___noiseMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___noiseMaterial_20), value);
	}

	inline static int32_t get_offset_of_dx11NoiseShader_21() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3814230817, ___dx11NoiseShader_21)); }
	inline Shader_t4151988712 * get_dx11NoiseShader_21() const { return ___dx11NoiseShader_21; }
	inline Shader_t4151988712 ** get_address_of_dx11NoiseShader_21() { return &___dx11NoiseShader_21; }
	inline void set_dx11NoiseShader_21(Shader_t4151988712 * value)
	{
		___dx11NoiseShader_21 = value;
		Il2CppCodeGenWriteBarrier((&___dx11NoiseShader_21), value);
	}

	inline static int32_t get_offset_of_dx11NoiseMaterial_22() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3814230817, ___dx11NoiseMaterial_22)); }
	inline Material_t340375123 * get_dx11NoiseMaterial_22() const { return ___dx11NoiseMaterial_22; }
	inline Material_t340375123 ** get_address_of_dx11NoiseMaterial_22() { return &___dx11NoiseMaterial_22; }
	inline void set_dx11NoiseMaterial_22(Material_t340375123 * value)
	{
		___dx11NoiseMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((&___dx11NoiseMaterial_22), value);
	}
};

struct NoiseAndGrain_t3814230817_StaticFields
{
public:
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::TILE_AMOUNT
	float ___TILE_AMOUNT_23;

public:
	inline static int32_t get_offset_of_TILE_AMOUNT_23() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3814230817_StaticFields, ___TILE_AMOUNT_23)); }
	inline float get_TILE_AMOUNT_23() const { return ___TILE_AMOUNT_23; }
	inline float* get_address_of_TILE_AMOUNT_23() { return &___TILE_AMOUNT_23; }
	inline void set_TILE_AMOUNT_23(float value)
	{
		___TILE_AMOUNT_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOISEANDGRAIN_T3814230817_H
#ifndef COLORCORRECTIONLOOKUP_T1159177774_H
#define COLORCORRECTIONLOOKUP_T1159177774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ColorCorrectionLookup
struct  ColorCorrectionLookup_t1159177774  : public PostEffectsBase_t2404315739
{
public:
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ColorCorrectionLookup::shader
	Shader_t4151988712 * ___shader_6;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ColorCorrectionLookup::material
	Material_t340375123 * ___material_7;
	// UnityEngine.Texture3D UnityStandardAssets.ImageEffects.ColorCorrectionLookup::converted3DLut
	Texture3D_t1884131049 * ___converted3DLut_8;
	// System.String UnityStandardAssets.ImageEffects.ColorCorrectionLookup::basedOnTempTex
	String_t* ___basedOnTempTex_9;

public:
	inline static int32_t get_offset_of_shader_6() { return static_cast<int32_t>(offsetof(ColorCorrectionLookup_t1159177774, ___shader_6)); }
	inline Shader_t4151988712 * get_shader_6() const { return ___shader_6; }
	inline Shader_t4151988712 ** get_address_of_shader_6() { return &___shader_6; }
	inline void set_shader_6(Shader_t4151988712 * value)
	{
		___shader_6 = value;
		Il2CppCodeGenWriteBarrier((&___shader_6), value);
	}

	inline static int32_t get_offset_of_material_7() { return static_cast<int32_t>(offsetof(ColorCorrectionLookup_t1159177774, ___material_7)); }
	inline Material_t340375123 * get_material_7() const { return ___material_7; }
	inline Material_t340375123 ** get_address_of_material_7() { return &___material_7; }
	inline void set_material_7(Material_t340375123 * value)
	{
		___material_7 = value;
		Il2CppCodeGenWriteBarrier((&___material_7), value);
	}

	inline static int32_t get_offset_of_converted3DLut_8() { return static_cast<int32_t>(offsetof(ColorCorrectionLookup_t1159177774, ___converted3DLut_8)); }
	inline Texture3D_t1884131049 * get_converted3DLut_8() const { return ___converted3DLut_8; }
	inline Texture3D_t1884131049 ** get_address_of_converted3DLut_8() { return &___converted3DLut_8; }
	inline void set_converted3DLut_8(Texture3D_t1884131049 * value)
	{
		___converted3DLut_8 = value;
		Il2CppCodeGenWriteBarrier((&___converted3DLut_8), value);
	}

	inline static int32_t get_offset_of_basedOnTempTex_9() { return static_cast<int32_t>(offsetof(ColorCorrectionLookup_t1159177774, ___basedOnTempTex_9)); }
	inline String_t* get_basedOnTempTex_9() const { return ___basedOnTempTex_9; }
	inline String_t** get_address_of_basedOnTempTex_9() { return &___basedOnTempTex_9; }
	inline void set_basedOnTempTex_9(String_t* value)
	{
		___basedOnTempTex_9 = value;
		Il2CppCodeGenWriteBarrier((&___basedOnTempTex_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORCORRECTIONLOOKUP_T1159177774_H
#ifndef GLOBALFOG_T900542613_H
#define GLOBALFOG_T900542613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.GlobalFog
struct  GlobalFog_t900542613  : public PostEffectsBase_t2404315739
{
public:
	// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::distanceFog
	bool ___distanceFog_6;
	// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::excludeFarPixels
	bool ___excludeFarPixels_7;
	// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::useRadialDistance
	bool ___useRadialDistance_8;
	// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::heightFog
	bool ___heightFog_9;
	// System.Single UnityStandardAssets.ImageEffects.GlobalFog::height
	float ___height_10;
	// System.Single UnityStandardAssets.ImageEffects.GlobalFog::heightDensity
	float ___heightDensity_11;
	// System.Single UnityStandardAssets.ImageEffects.GlobalFog::startDistance
	float ___startDistance_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.GlobalFog::fogShader
	Shader_t4151988712 * ___fogShader_13;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.GlobalFog::fogMaterial
	Material_t340375123 * ___fogMaterial_14;

public:
	inline static int32_t get_offset_of_distanceFog_6() { return static_cast<int32_t>(offsetof(GlobalFog_t900542613, ___distanceFog_6)); }
	inline bool get_distanceFog_6() const { return ___distanceFog_6; }
	inline bool* get_address_of_distanceFog_6() { return &___distanceFog_6; }
	inline void set_distanceFog_6(bool value)
	{
		___distanceFog_6 = value;
	}

	inline static int32_t get_offset_of_excludeFarPixels_7() { return static_cast<int32_t>(offsetof(GlobalFog_t900542613, ___excludeFarPixels_7)); }
	inline bool get_excludeFarPixels_7() const { return ___excludeFarPixels_7; }
	inline bool* get_address_of_excludeFarPixels_7() { return &___excludeFarPixels_7; }
	inline void set_excludeFarPixels_7(bool value)
	{
		___excludeFarPixels_7 = value;
	}

	inline static int32_t get_offset_of_useRadialDistance_8() { return static_cast<int32_t>(offsetof(GlobalFog_t900542613, ___useRadialDistance_8)); }
	inline bool get_useRadialDistance_8() const { return ___useRadialDistance_8; }
	inline bool* get_address_of_useRadialDistance_8() { return &___useRadialDistance_8; }
	inline void set_useRadialDistance_8(bool value)
	{
		___useRadialDistance_8 = value;
	}

	inline static int32_t get_offset_of_heightFog_9() { return static_cast<int32_t>(offsetof(GlobalFog_t900542613, ___heightFog_9)); }
	inline bool get_heightFog_9() const { return ___heightFog_9; }
	inline bool* get_address_of_heightFog_9() { return &___heightFog_9; }
	inline void set_heightFog_9(bool value)
	{
		___heightFog_9 = value;
	}

	inline static int32_t get_offset_of_height_10() { return static_cast<int32_t>(offsetof(GlobalFog_t900542613, ___height_10)); }
	inline float get_height_10() const { return ___height_10; }
	inline float* get_address_of_height_10() { return &___height_10; }
	inline void set_height_10(float value)
	{
		___height_10 = value;
	}

	inline static int32_t get_offset_of_heightDensity_11() { return static_cast<int32_t>(offsetof(GlobalFog_t900542613, ___heightDensity_11)); }
	inline float get_heightDensity_11() const { return ___heightDensity_11; }
	inline float* get_address_of_heightDensity_11() { return &___heightDensity_11; }
	inline void set_heightDensity_11(float value)
	{
		___heightDensity_11 = value;
	}

	inline static int32_t get_offset_of_startDistance_12() { return static_cast<int32_t>(offsetof(GlobalFog_t900542613, ___startDistance_12)); }
	inline float get_startDistance_12() const { return ___startDistance_12; }
	inline float* get_address_of_startDistance_12() { return &___startDistance_12; }
	inline void set_startDistance_12(float value)
	{
		___startDistance_12 = value;
	}

	inline static int32_t get_offset_of_fogShader_13() { return static_cast<int32_t>(offsetof(GlobalFog_t900542613, ___fogShader_13)); }
	inline Shader_t4151988712 * get_fogShader_13() const { return ___fogShader_13; }
	inline Shader_t4151988712 ** get_address_of_fogShader_13() { return &___fogShader_13; }
	inline void set_fogShader_13(Shader_t4151988712 * value)
	{
		___fogShader_13 = value;
		Il2CppCodeGenWriteBarrier((&___fogShader_13), value);
	}

	inline static int32_t get_offset_of_fogMaterial_14() { return static_cast<int32_t>(offsetof(GlobalFog_t900542613, ___fogMaterial_14)); }
	inline Material_t340375123 * get_fogMaterial_14() const { return ___fogMaterial_14; }
	inline Material_t340375123 ** get_address_of_fogMaterial_14() { return &___fogMaterial_14; }
	inline void set_fogMaterial_14(Material_t340375123 * value)
	{
		___fogMaterial_14 = value;
		Il2CppCodeGenWriteBarrier((&___fogMaterial_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLOBALFOG_T900542613_H
#ifndef GRAYSCALE_T1707485390_H
#define GRAYSCALE_T1707485390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Grayscale
struct  Grayscale_t1707485390  : public ImageEffectBase_t2026006575
{
public:
	// UnityEngine.Texture UnityStandardAssets.ImageEffects.Grayscale::textureRamp
	Texture_t3661962703 * ___textureRamp_4;
	// System.Single UnityStandardAssets.ImageEffects.Grayscale::rampOffset
	float ___rampOffset_5;

public:
	inline static int32_t get_offset_of_textureRamp_4() { return static_cast<int32_t>(offsetof(Grayscale_t1707485390, ___textureRamp_4)); }
	inline Texture_t3661962703 * get_textureRamp_4() const { return ___textureRamp_4; }
	inline Texture_t3661962703 ** get_address_of_textureRamp_4() { return &___textureRamp_4; }
	inline void set_textureRamp_4(Texture_t3661962703 * value)
	{
		___textureRamp_4 = value;
		Il2CppCodeGenWriteBarrier((&___textureRamp_4), value);
	}

	inline static int32_t get_offset_of_rampOffset_5() { return static_cast<int32_t>(offsetof(Grayscale_t1707485390, ___rampOffset_5)); }
	inline float get_rampOffset_5() const { return ___rampOffset_5; }
	inline float* get_address_of_rampOffset_5() { return &___rampOffset_5; }
	inline void set_rampOffset_5(float value)
	{
		___rampOffset_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAYSCALE_T1707485390_H
#ifndef MOTIONBLUR_T1587267364_H
#define MOTIONBLUR_T1587267364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.MotionBlur
struct  MotionBlur_t1587267364  : public ImageEffectBase_t2026006575
{
public:
	// System.Single UnityStandardAssets.ImageEffects.MotionBlur::blurAmount
	float ___blurAmount_4;
	// System.Boolean UnityStandardAssets.ImageEffects.MotionBlur::extraBlur
	bool ___extraBlur_5;
	// UnityEngine.RenderTexture UnityStandardAssets.ImageEffects.MotionBlur::accumTexture
	RenderTexture_t2108887433 * ___accumTexture_6;

public:
	inline static int32_t get_offset_of_blurAmount_4() { return static_cast<int32_t>(offsetof(MotionBlur_t1587267364, ___blurAmount_4)); }
	inline float get_blurAmount_4() const { return ___blurAmount_4; }
	inline float* get_address_of_blurAmount_4() { return &___blurAmount_4; }
	inline void set_blurAmount_4(float value)
	{
		___blurAmount_4 = value;
	}

	inline static int32_t get_offset_of_extraBlur_5() { return static_cast<int32_t>(offsetof(MotionBlur_t1587267364, ___extraBlur_5)); }
	inline bool get_extraBlur_5() const { return ___extraBlur_5; }
	inline bool* get_address_of_extraBlur_5() { return &___extraBlur_5; }
	inline void set_extraBlur_5(bool value)
	{
		___extraBlur_5 = value;
	}

	inline static int32_t get_offset_of_accumTexture_6() { return static_cast<int32_t>(offsetof(MotionBlur_t1587267364, ___accumTexture_6)); }
	inline RenderTexture_t2108887433 * get_accumTexture_6() const { return ___accumTexture_6; }
	inline RenderTexture_t2108887433 ** get_address_of_accumTexture_6() { return &___accumTexture_6; }
	inline void set_accumTexture_6(RenderTexture_t2108887433 * value)
	{
		___accumTexture_6 = value;
		Il2CppCodeGenWriteBarrier((&___accumTexture_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOTIONBLUR_T1587267364_H
#ifndef HANDHELDCAM_T450595784_H
#define HANDHELDCAM_T450595784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.HandHeldCam
struct  HandHeldCam_t450595784  : public LookatTarget_t3260877718
{
public:
	// System.Single UnityStandardAssets.Cameras.HandHeldCam::m_SwaySpeed
	float ___m_SwaySpeed_11;
	// System.Single UnityStandardAssets.Cameras.HandHeldCam::m_BaseSwayAmount
	float ___m_BaseSwayAmount_12;
	// System.Single UnityStandardAssets.Cameras.HandHeldCam::m_TrackingSwayAmount
	float ___m_TrackingSwayAmount_13;
	// System.Single UnityStandardAssets.Cameras.HandHeldCam::m_TrackingBias
	float ___m_TrackingBias_14;

public:
	inline static int32_t get_offset_of_m_SwaySpeed_11() { return static_cast<int32_t>(offsetof(HandHeldCam_t450595784, ___m_SwaySpeed_11)); }
	inline float get_m_SwaySpeed_11() const { return ___m_SwaySpeed_11; }
	inline float* get_address_of_m_SwaySpeed_11() { return &___m_SwaySpeed_11; }
	inline void set_m_SwaySpeed_11(float value)
	{
		___m_SwaySpeed_11 = value;
	}

	inline static int32_t get_offset_of_m_BaseSwayAmount_12() { return static_cast<int32_t>(offsetof(HandHeldCam_t450595784, ___m_BaseSwayAmount_12)); }
	inline float get_m_BaseSwayAmount_12() const { return ___m_BaseSwayAmount_12; }
	inline float* get_address_of_m_BaseSwayAmount_12() { return &___m_BaseSwayAmount_12; }
	inline void set_m_BaseSwayAmount_12(float value)
	{
		___m_BaseSwayAmount_12 = value;
	}

	inline static int32_t get_offset_of_m_TrackingSwayAmount_13() { return static_cast<int32_t>(offsetof(HandHeldCam_t450595784, ___m_TrackingSwayAmount_13)); }
	inline float get_m_TrackingSwayAmount_13() const { return ___m_TrackingSwayAmount_13; }
	inline float* get_address_of_m_TrackingSwayAmount_13() { return &___m_TrackingSwayAmount_13; }
	inline void set_m_TrackingSwayAmount_13(float value)
	{
		___m_TrackingSwayAmount_13 = value;
	}

	inline static int32_t get_offset_of_m_TrackingBias_14() { return static_cast<int32_t>(offsetof(HandHeldCam_t450595784, ___m_TrackingBias_14)); }
	inline float get_m_TrackingBias_14() const { return ___m_TrackingBias_14; }
	inline float* get_address_of_m_TrackingBias_14() { return &___m_TrackingBias_14; }
	inline void set_m_TrackingBias_14(float value)
	{
		___m_TrackingBias_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDHELDCAM_T450595784_H
#ifndef FREELOOKCAM_T2000732766_H
#define FREELOOKCAM_T2000732766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.FreeLookCam
struct  FreeLookCam_t2000732766  : public PivotBasedCameraRig_t3786953582
{
public:
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_MoveSpeed
	float ___m_MoveSpeed_9;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_TurnSpeed
	float ___m_TurnSpeed_10;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_TurnSmoothing
	float ___m_TurnSmoothing_11;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_TiltMax
	float ___m_TiltMax_12;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_TiltMin
	float ___m_TiltMin_13;
	// System.Boolean UnityStandardAssets.Cameras.FreeLookCam::m_LockCursor
	bool ___m_LockCursor_14;
	// System.Boolean UnityStandardAssets.Cameras.FreeLookCam::m_VerticalAutoReturn
	bool ___m_VerticalAutoReturn_15;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_LookAngle
	float ___m_LookAngle_16;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_TiltAngle
	float ___m_TiltAngle_17;
	// UnityEngine.Vector3 UnityStandardAssets.Cameras.FreeLookCam::m_PivotEulers
	Vector3_t3722313464  ___m_PivotEulers_19;
	// UnityEngine.Quaternion UnityStandardAssets.Cameras.FreeLookCam::m_PivotTargetRot
	Quaternion_t2301928331  ___m_PivotTargetRot_20;
	// UnityEngine.Quaternion UnityStandardAssets.Cameras.FreeLookCam::m_TransformTargetRot
	Quaternion_t2301928331  ___m_TransformTargetRot_21;

public:
	inline static int32_t get_offset_of_m_MoveSpeed_9() { return static_cast<int32_t>(offsetof(FreeLookCam_t2000732766, ___m_MoveSpeed_9)); }
	inline float get_m_MoveSpeed_9() const { return ___m_MoveSpeed_9; }
	inline float* get_address_of_m_MoveSpeed_9() { return &___m_MoveSpeed_9; }
	inline void set_m_MoveSpeed_9(float value)
	{
		___m_MoveSpeed_9 = value;
	}

	inline static int32_t get_offset_of_m_TurnSpeed_10() { return static_cast<int32_t>(offsetof(FreeLookCam_t2000732766, ___m_TurnSpeed_10)); }
	inline float get_m_TurnSpeed_10() const { return ___m_TurnSpeed_10; }
	inline float* get_address_of_m_TurnSpeed_10() { return &___m_TurnSpeed_10; }
	inline void set_m_TurnSpeed_10(float value)
	{
		___m_TurnSpeed_10 = value;
	}

	inline static int32_t get_offset_of_m_TurnSmoothing_11() { return static_cast<int32_t>(offsetof(FreeLookCam_t2000732766, ___m_TurnSmoothing_11)); }
	inline float get_m_TurnSmoothing_11() const { return ___m_TurnSmoothing_11; }
	inline float* get_address_of_m_TurnSmoothing_11() { return &___m_TurnSmoothing_11; }
	inline void set_m_TurnSmoothing_11(float value)
	{
		___m_TurnSmoothing_11 = value;
	}

	inline static int32_t get_offset_of_m_TiltMax_12() { return static_cast<int32_t>(offsetof(FreeLookCam_t2000732766, ___m_TiltMax_12)); }
	inline float get_m_TiltMax_12() const { return ___m_TiltMax_12; }
	inline float* get_address_of_m_TiltMax_12() { return &___m_TiltMax_12; }
	inline void set_m_TiltMax_12(float value)
	{
		___m_TiltMax_12 = value;
	}

	inline static int32_t get_offset_of_m_TiltMin_13() { return static_cast<int32_t>(offsetof(FreeLookCam_t2000732766, ___m_TiltMin_13)); }
	inline float get_m_TiltMin_13() const { return ___m_TiltMin_13; }
	inline float* get_address_of_m_TiltMin_13() { return &___m_TiltMin_13; }
	inline void set_m_TiltMin_13(float value)
	{
		___m_TiltMin_13 = value;
	}

	inline static int32_t get_offset_of_m_LockCursor_14() { return static_cast<int32_t>(offsetof(FreeLookCam_t2000732766, ___m_LockCursor_14)); }
	inline bool get_m_LockCursor_14() const { return ___m_LockCursor_14; }
	inline bool* get_address_of_m_LockCursor_14() { return &___m_LockCursor_14; }
	inline void set_m_LockCursor_14(bool value)
	{
		___m_LockCursor_14 = value;
	}

	inline static int32_t get_offset_of_m_VerticalAutoReturn_15() { return static_cast<int32_t>(offsetof(FreeLookCam_t2000732766, ___m_VerticalAutoReturn_15)); }
	inline bool get_m_VerticalAutoReturn_15() const { return ___m_VerticalAutoReturn_15; }
	inline bool* get_address_of_m_VerticalAutoReturn_15() { return &___m_VerticalAutoReturn_15; }
	inline void set_m_VerticalAutoReturn_15(bool value)
	{
		___m_VerticalAutoReturn_15 = value;
	}

	inline static int32_t get_offset_of_m_LookAngle_16() { return static_cast<int32_t>(offsetof(FreeLookCam_t2000732766, ___m_LookAngle_16)); }
	inline float get_m_LookAngle_16() const { return ___m_LookAngle_16; }
	inline float* get_address_of_m_LookAngle_16() { return &___m_LookAngle_16; }
	inline void set_m_LookAngle_16(float value)
	{
		___m_LookAngle_16 = value;
	}

	inline static int32_t get_offset_of_m_TiltAngle_17() { return static_cast<int32_t>(offsetof(FreeLookCam_t2000732766, ___m_TiltAngle_17)); }
	inline float get_m_TiltAngle_17() const { return ___m_TiltAngle_17; }
	inline float* get_address_of_m_TiltAngle_17() { return &___m_TiltAngle_17; }
	inline void set_m_TiltAngle_17(float value)
	{
		___m_TiltAngle_17 = value;
	}

	inline static int32_t get_offset_of_m_PivotEulers_19() { return static_cast<int32_t>(offsetof(FreeLookCam_t2000732766, ___m_PivotEulers_19)); }
	inline Vector3_t3722313464  get_m_PivotEulers_19() const { return ___m_PivotEulers_19; }
	inline Vector3_t3722313464 * get_address_of_m_PivotEulers_19() { return &___m_PivotEulers_19; }
	inline void set_m_PivotEulers_19(Vector3_t3722313464  value)
	{
		___m_PivotEulers_19 = value;
	}

	inline static int32_t get_offset_of_m_PivotTargetRot_20() { return static_cast<int32_t>(offsetof(FreeLookCam_t2000732766, ___m_PivotTargetRot_20)); }
	inline Quaternion_t2301928331  get_m_PivotTargetRot_20() const { return ___m_PivotTargetRot_20; }
	inline Quaternion_t2301928331 * get_address_of_m_PivotTargetRot_20() { return &___m_PivotTargetRot_20; }
	inline void set_m_PivotTargetRot_20(Quaternion_t2301928331  value)
	{
		___m_PivotTargetRot_20 = value;
	}

	inline static int32_t get_offset_of_m_TransformTargetRot_21() { return static_cast<int32_t>(offsetof(FreeLookCam_t2000732766, ___m_TransformTargetRot_21)); }
	inline Quaternion_t2301928331  get_m_TransformTargetRot_21() const { return ___m_TransformTargetRot_21; }
	inline Quaternion_t2301928331 * get_address_of_m_TransformTargetRot_21() { return &___m_TransformTargetRot_21; }
	inline void set_m_TransformTargetRot_21(Quaternion_t2301928331  value)
	{
		___m_TransformTargetRot_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FREELOOKCAM_T2000732766_H
#ifndef AUTOCAM_T137911967_H
#define AUTOCAM_T137911967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.AutoCam
struct  AutoCam_t137911967  : public PivotBasedCameraRig_t3786953582
{
public:
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_MoveSpeed
	float ___m_MoveSpeed_9;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_TurnSpeed
	float ___m_TurnSpeed_10;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_RollSpeed
	float ___m_RollSpeed_11;
	// System.Boolean UnityStandardAssets.Cameras.AutoCam::m_FollowVelocity
	bool ___m_FollowVelocity_12;
	// System.Boolean UnityStandardAssets.Cameras.AutoCam::m_FollowTilt
	bool ___m_FollowTilt_13;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_SpinTurnLimit
	float ___m_SpinTurnLimit_14;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_TargetVelocityLowerLimit
	float ___m_TargetVelocityLowerLimit_15;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_SmoothTurnTime
	float ___m_SmoothTurnTime_16;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_LastFlatAngle
	float ___m_LastFlatAngle_17;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_CurrentTurnAmount
	float ___m_CurrentTurnAmount_18;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_TurnSpeedVelocityChange
	float ___m_TurnSpeedVelocityChange_19;
	// UnityEngine.Vector3 UnityStandardAssets.Cameras.AutoCam::m_RollUp
	Vector3_t3722313464  ___m_RollUp_20;

public:
	inline static int32_t get_offset_of_m_MoveSpeed_9() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_MoveSpeed_9)); }
	inline float get_m_MoveSpeed_9() const { return ___m_MoveSpeed_9; }
	inline float* get_address_of_m_MoveSpeed_9() { return &___m_MoveSpeed_9; }
	inline void set_m_MoveSpeed_9(float value)
	{
		___m_MoveSpeed_9 = value;
	}

	inline static int32_t get_offset_of_m_TurnSpeed_10() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_TurnSpeed_10)); }
	inline float get_m_TurnSpeed_10() const { return ___m_TurnSpeed_10; }
	inline float* get_address_of_m_TurnSpeed_10() { return &___m_TurnSpeed_10; }
	inline void set_m_TurnSpeed_10(float value)
	{
		___m_TurnSpeed_10 = value;
	}

	inline static int32_t get_offset_of_m_RollSpeed_11() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_RollSpeed_11)); }
	inline float get_m_RollSpeed_11() const { return ___m_RollSpeed_11; }
	inline float* get_address_of_m_RollSpeed_11() { return &___m_RollSpeed_11; }
	inline void set_m_RollSpeed_11(float value)
	{
		___m_RollSpeed_11 = value;
	}

	inline static int32_t get_offset_of_m_FollowVelocity_12() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_FollowVelocity_12)); }
	inline bool get_m_FollowVelocity_12() const { return ___m_FollowVelocity_12; }
	inline bool* get_address_of_m_FollowVelocity_12() { return &___m_FollowVelocity_12; }
	inline void set_m_FollowVelocity_12(bool value)
	{
		___m_FollowVelocity_12 = value;
	}

	inline static int32_t get_offset_of_m_FollowTilt_13() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_FollowTilt_13)); }
	inline bool get_m_FollowTilt_13() const { return ___m_FollowTilt_13; }
	inline bool* get_address_of_m_FollowTilt_13() { return &___m_FollowTilt_13; }
	inline void set_m_FollowTilt_13(bool value)
	{
		___m_FollowTilt_13 = value;
	}

	inline static int32_t get_offset_of_m_SpinTurnLimit_14() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_SpinTurnLimit_14)); }
	inline float get_m_SpinTurnLimit_14() const { return ___m_SpinTurnLimit_14; }
	inline float* get_address_of_m_SpinTurnLimit_14() { return &___m_SpinTurnLimit_14; }
	inline void set_m_SpinTurnLimit_14(float value)
	{
		___m_SpinTurnLimit_14 = value;
	}

	inline static int32_t get_offset_of_m_TargetVelocityLowerLimit_15() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_TargetVelocityLowerLimit_15)); }
	inline float get_m_TargetVelocityLowerLimit_15() const { return ___m_TargetVelocityLowerLimit_15; }
	inline float* get_address_of_m_TargetVelocityLowerLimit_15() { return &___m_TargetVelocityLowerLimit_15; }
	inline void set_m_TargetVelocityLowerLimit_15(float value)
	{
		___m_TargetVelocityLowerLimit_15 = value;
	}

	inline static int32_t get_offset_of_m_SmoothTurnTime_16() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_SmoothTurnTime_16)); }
	inline float get_m_SmoothTurnTime_16() const { return ___m_SmoothTurnTime_16; }
	inline float* get_address_of_m_SmoothTurnTime_16() { return &___m_SmoothTurnTime_16; }
	inline void set_m_SmoothTurnTime_16(float value)
	{
		___m_SmoothTurnTime_16 = value;
	}

	inline static int32_t get_offset_of_m_LastFlatAngle_17() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_LastFlatAngle_17)); }
	inline float get_m_LastFlatAngle_17() const { return ___m_LastFlatAngle_17; }
	inline float* get_address_of_m_LastFlatAngle_17() { return &___m_LastFlatAngle_17; }
	inline void set_m_LastFlatAngle_17(float value)
	{
		___m_LastFlatAngle_17 = value;
	}

	inline static int32_t get_offset_of_m_CurrentTurnAmount_18() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_CurrentTurnAmount_18)); }
	inline float get_m_CurrentTurnAmount_18() const { return ___m_CurrentTurnAmount_18; }
	inline float* get_address_of_m_CurrentTurnAmount_18() { return &___m_CurrentTurnAmount_18; }
	inline void set_m_CurrentTurnAmount_18(float value)
	{
		___m_CurrentTurnAmount_18 = value;
	}

	inline static int32_t get_offset_of_m_TurnSpeedVelocityChange_19() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_TurnSpeedVelocityChange_19)); }
	inline float get_m_TurnSpeedVelocityChange_19() const { return ___m_TurnSpeedVelocityChange_19; }
	inline float* get_address_of_m_TurnSpeedVelocityChange_19() { return &___m_TurnSpeedVelocityChange_19; }
	inline void set_m_TurnSpeedVelocityChange_19(float value)
	{
		___m_TurnSpeedVelocityChange_19 = value;
	}

	inline static int32_t get_offset_of_m_RollUp_20() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_RollUp_20)); }
	inline Vector3_t3722313464  get_m_RollUp_20() const { return ___m_RollUp_20; }
	inline Vector3_t3722313464 * get_address_of_m_RollUp_20() { return &___m_RollUp_20; }
	inline void set_m_RollUp_20(Vector3_t3722313464  value)
	{
		___m_RollUp_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTOCAM_T137911967_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2600 = { sizeof (UnityChannelLoginHandler_t2949829254), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2600[4] = 
{
	UnityChannelLoginHandler_t2949829254::get_offset_of_initializeSucceededAction_0(),
	UnityChannelLoginHandler_t2949829254::get_offset_of_initializeFailedAction_1(),
	UnityChannelLoginHandler_t2949829254::get_offset_of_loginSucceededAction_2(),
	UnityChannelLoginHandler_t2949829254::get_offset_of_loginFailedAction_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2601 = { sizeof (U3CAwakeU3Ec__AnonStorey0_t2364586269), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2601[3] = 
{
	U3CAwakeU3Ec__AnonStorey0_t2364586269::get_offset_of_builder_0(),
	U3CAwakeU3Ec__AnonStorey0_t2364586269::get_offset_of_initializeUnityIap_1(),
	U3CAwakeU3Ec__AnonStorey0_t2364586269::get_offset_of_U24this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2602 = { sizeof (U3CValidateButtonClickU3Ec__AnonStorey1_t541528072), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2602[1] = 
{
	U3CValidateButtonClickU3Ec__AnonStorey1_t541528072::get_offset_of_txId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2603 = { sizeof (IAPDemoProductUI_t922953754), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2603[9] = 
{
	IAPDemoProductUI_t922953754::get_offset_of_purchaseButton_2(),
	IAPDemoProductUI_t922953754::get_offset_of_receiptButton_3(),
	IAPDemoProductUI_t922953754::get_offset_of_titleText_4(),
	IAPDemoProductUI_t922953754::get_offset_of_descriptionText_5(),
	IAPDemoProductUI_t922953754::get_offset_of_priceText_6(),
	IAPDemoProductUI_t922953754::get_offset_of_statusText_7(),
	IAPDemoProductUI_t922953754::get_offset_of_m_ProductID_8(),
	IAPDemoProductUI_t922953754::get_offset_of_m_PurchaseCallback_9(),
	IAPDemoProductUI_t922953754::get_offset_of_m_Receipt_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2604 = { sizeof (IAPListener_t2001792988), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2604[4] = 
{
	IAPListener_t2001792988::get_offset_of_consumePurchase_2(),
	IAPListener_t2001792988::get_offset_of_dontDestroyOnLoad_3(),
	IAPListener_t2001792988::get_offset_of_onPurchaseComplete_4(),
	IAPListener_t2001792988::get_offset_of_onPurchaseFailed_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2605 = { sizeof (OnPurchaseCompletedEvent_t1675809258), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2606 = { sizeof (OnPurchaseFailedEvent_t800864861), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2607 = { sizeof (AbstractTargetFollower_t1919708159), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2607[4] = 
{
	AbstractTargetFollower_t1919708159::get_offset_of_m_Target_2(),
	AbstractTargetFollower_t1919708159::get_offset_of_m_AutoTargetPlayer_3(),
	AbstractTargetFollower_t1919708159::get_offset_of_m_UpdateType_4(),
	AbstractTargetFollower_t1919708159::get_offset_of_targetRigidbody_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2608 = { sizeof (UpdateType_t2449601881)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2608[4] = 
{
	UpdateType_t2449601881::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2609 = { sizeof (AutoCam_t137911967), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2609[12] = 
{
	AutoCam_t137911967::get_offset_of_m_MoveSpeed_9(),
	AutoCam_t137911967::get_offset_of_m_TurnSpeed_10(),
	AutoCam_t137911967::get_offset_of_m_RollSpeed_11(),
	AutoCam_t137911967::get_offset_of_m_FollowVelocity_12(),
	AutoCam_t137911967::get_offset_of_m_FollowTilt_13(),
	AutoCam_t137911967::get_offset_of_m_SpinTurnLimit_14(),
	AutoCam_t137911967::get_offset_of_m_TargetVelocityLowerLimit_15(),
	AutoCam_t137911967::get_offset_of_m_SmoothTurnTime_16(),
	AutoCam_t137911967::get_offset_of_m_LastFlatAngle_17(),
	AutoCam_t137911967::get_offset_of_m_CurrentTurnAmount_18(),
	AutoCam_t137911967::get_offset_of_m_TurnSpeedVelocityChange_19(),
	AutoCam_t137911967::get_offset_of_m_RollUp_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2610 = { sizeof (FreeLookCam_t2000732766), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2610[13] = 
{
	FreeLookCam_t2000732766::get_offset_of_m_MoveSpeed_9(),
	FreeLookCam_t2000732766::get_offset_of_m_TurnSpeed_10(),
	FreeLookCam_t2000732766::get_offset_of_m_TurnSmoothing_11(),
	FreeLookCam_t2000732766::get_offset_of_m_TiltMax_12(),
	FreeLookCam_t2000732766::get_offset_of_m_TiltMin_13(),
	FreeLookCam_t2000732766::get_offset_of_m_LockCursor_14(),
	FreeLookCam_t2000732766::get_offset_of_m_VerticalAutoReturn_15(),
	FreeLookCam_t2000732766::get_offset_of_m_LookAngle_16(),
	FreeLookCam_t2000732766::get_offset_of_m_TiltAngle_17(),
	0,
	FreeLookCam_t2000732766::get_offset_of_m_PivotEulers_19(),
	FreeLookCam_t2000732766::get_offset_of_m_PivotTargetRot_20(),
	FreeLookCam_t2000732766::get_offset_of_m_TransformTargetRot_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2611 = { sizeof (HandHeldCam_t450595784), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2611[4] = 
{
	HandHeldCam_t450595784::get_offset_of_m_SwaySpeed_11(),
	HandHeldCam_t450595784::get_offset_of_m_BaseSwayAmount_12(),
	HandHeldCam_t450595784::get_offset_of_m_TrackingSwayAmount_13(),
	HandHeldCam_t450595784::get_offset_of_m_TrackingBias_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2612 = { sizeof (LookatTarget_t3260877718), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2612[5] = 
{
	LookatTarget_t3260877718::get_offset_of_m_RotationRange_6(),
	LookatTarget_t3260877718::get_offset_of_m_FollowSpeed_7(),
	LookatTarget_t3260877718::get_offset_of_m_FollowAngles_8(),
	LookatTarget_t3260877718::get_offset_of_m_OriginalRotation_9(),
	LookatTarget_t3260877718::get_offset_of_m_FollowVelocity_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2613 = { sizeof (PivotBasedCameraRig_t3786953582), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2613[3] = 
{
	PivotBasedCameraRig_t3786953582::get_offset_of_m_Cam_6(),
	PivotBasedCameraRig_t3786953582::get_offset_of_m_Pivot_7(),
	PivotBasedCameraRig_t3786953582::get_offset_of_m_LastTargetPosition_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2614 = { sizeof (ProtectCameraFromWallClip_t303409715), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2614[15] = 
{
	ProtectCameraFromWallClip_t303409715::get_offset_of_clipMoveTime_2(),
	ProtectCameraFromWallClip_t303409715::get_offset_of_returnTime_3(),
	ProtectCameraFromWallClip_t303409715::get_offset_of_sphereCastRadius_4(),
	ProtectCameraFromWallClip_t303409715::get_offset_of_visualiseInEditor_5(),
	ProtectCameraFromWallClip_t303409715::get_offset_of_closestDistance_6(),
	ProtectCameraFromWallClip_t303409715::get_offset_of_U3CprotectingU3Ek__BackingField_7(),
	ProtectCameraFromWallClip_t303409715::get_offset_of_dontClipTag_8(),
	ProtectCameraFromWallClip_t303409715::get_offset_of_m_Cam_9(),
	ProtectCameraFromWallClip_t303409715::get_offset_of_m_Pivot_10(),
	ProtectCameraFromWallClip_t303409715::get_offset_of_m_OriginalDist_11(),
	ProtectCameraFromWallClip_t303409715::get_offset_of_m_MoveVelocity_12(),
	ProtectCameraFromWallClip_t303409715::get_offset_of_m_CurrentDist_13(),
	ProtectCameraFromWallClip_t303409715::get_offset_of_m_Ray_14(),
	ProtectCameraFromWallClip_t303409715::get_offset_of_m_Hits_15(),
	ProtectCameraFromWallClip_t303409715::get_offset_of_m_RayHitComparer_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2615 = { sizeof (RayHitComparer_t2205555946), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2616 = { sizeof (TargetFieldOfView_t3060904718), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2616[7] = 
{
	TargetFieldOfView_t3060904718::get_offset_of_m_FovAdjustTime_6(),
	TargetFieldOfView_t3060904718::get_offset_of_m_ZoomAmountMultiplier_7(),
	TargetFieldOfView_t3060904718::get_offset_of_m_IncludeEffectsInSize_8(),
	TargetFieldOfView_t3060904718::get_offset_of_m_BoundSize_9(),
	TargetFieldOfView_t3060904718::get_offset_of_m_FovAdjustVelocity_10(),
	TargetFieldOfView_t3060904718::get_offset_of_m_Cam_11(),
	TargetFieldOfView_t3060904718::get_offset_of_m_LastTarget_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2617 = { sizeof (AxisTouchButton_t3522881333), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2617[6] = 
{
	AxisTouchButton_t3522881333::get_offset_of_axisName_2(),
	AxisTouchButton_t3522881333::get_offset_of_axisValue_3(),
	AxisTouchButton_t3522881333::get_offset_of_responseSpeed_4(),
	AxisTouchButton_t3522881333::get_offset_of_returnToCentreSpeed_5(),
	AxisTouchButton_t3522881333::get_offset_of_m_PairedWith_6(),
	AxisTouchButton_t3522881333::get_offset_of_m_Axis_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2618 = { sizeof (ButtonHandler_t823762219), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2618[1] = 
{
	ButtonHandler_t823762219::get_offset_of_Name_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2619 = { sizeof (CrossPlatformInputManager_t191731427), -1, sizeof(CrossPlatformInputManager_t191731427_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2619[3] = 
{
	CrossPlatformInputManager_t191731427_StaticFields::get_offset_of_activeInput_0(),
	CrossPlatformInputManager_t191731427_StaticFields::get_offset_of_s_TouchInput_1(),
	CrossPlatformInputManager_t191731427_StaticFields::get_offset_of_s_HardwareInput_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2620 = { sizeof (ActiveInputMethod_t139315314)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2620[3] = 
{
	ActiveInputMethod_t139315314::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2621 = { sizeof (VirtualAxis_t4087348596), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2621[3] = 
{
	VirtualAxis_t4087348596::get_offset_of_U3CnameU3Ek__BackingField_0(),
	VirtualAxis_t4087348596::get_offset_of_m_Value_1(),
	VirtualAxis_t4087348596::get_offset_of_U3CmatchWithInputManagerU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2622 = { sizeof (VirtualButton_t2756566330), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2622[5] = 
{
	VirtualButton_t2756566330::get_offset_of_U3CnameU3Ek__BackingField_0(),
	VirtualButton_t2756566330::get_offset_of_U3CmatchWithInputManagerU3Ek__BackingField_1(),
	VirtualButton_t2756566330::get_offset_of_m_LastPressedFrame_2(),
	VirtualButton_t2756566330::get_offset_of_m_ReleasedFrame_3(),
	VirtualButton_t2756566330::get_offset_of_m_Pressed_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2623 = { sizeof (InputAxisScrollbar_t457958266), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2623[1] = 
{
	InputAxisScrollbar_t457958266::get_offset_of_axis_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2624 = { sizeof (Joystick_t2204371675), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2624[9] = 
{
	Joystick_t2204371675::get_offset_of_MovementRange_2(),
	Joystick_t2204371675::get_offset_of_axesToUse_3(),
	Joystick_t2204371675::get_offset_of_horizontalAxisName_4(),
	Joystick_t2204371675::get_offset_of_verticalAxisName_5(),
	Joystick_t2204371675::get_offset_of_m_StartPos_6(),
	Joystick_t2204371675::get_offset_of_m_UseX_7(),
	Joystick_t2204371675::get_offset_of_m_UseY_8(),
	Joystick_t2204371675::get_offset_of_m_HorizontalVirtualAxis_9(),
	Joystick_t2204371675::get_offset_of_m_VerticalVirtualAxis_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2625 = { sizeof (AxisOption_t3128671669)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2625[4] = 
{
	AxisOption_t3128671669::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2626 = { sizeof (MobileControlRig_t1964600252), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2627 = { sizeof (MobileInput_t2025745297), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2628 = { sizeof (StandaloneInput_t1343950252), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2629 = { sizeof (TiltInput_t1639936653), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2629[5] = 
{
	TiltInput_t1639936653::get_offset_of_mapping_2(),
	TiltInput_t1639936653::get_offset_of_tiltAroundAxis_3(),
	TiltInput_t1639936653::get_offset_of_fullTiltAngle_4(),
	TiltInput_t1639936653::get_offset_of_centreAngleOffset_5(),
	TiltInput_t1639936653::get_offset_of_m_SteerAxis_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2630 = { sizeof (AxisOptions_t3101732129)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2630[3] = 
{
	AxisOptions_t3101732129::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2631 = { sizeof (AxisMapping_t3982445645), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2631[2] = 
{
	AxisMapping_t3982445645::get_offset_of_type_0(),
	AxisMapping_t3982445645::get_offset_of_axisName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2632 = { sizeof (MappingType_t2039944511)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2632[5] = 
{
	MappingType_t2039944511::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2633 = { sizeof (TouchPad_t539039257), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2633[18] = 
{
	TouchPad_t539039257::get_offset_of_axesToUse_2(),
	TouchPad_t539039257::get_offset_of_controlStyle_3(),
	TouchPad_t539039257::get_offset_of_horizontalAxisName_4(),
	TouchPad_t539039257::get_offset_of_verticalAxisName_5(),
	TouchPad_t539039257::get_offset_of_Xsensitivity_6(),
	TouchPad_t539039257::get_offset_of_Ysensitivity_7(),
	TouchPad_t539039257::get_offset_of_m_StartPos_8(),
	TouchPad_t539039257::get_offset_of_m_PreviousDelta_9(),
	TouchPad_t539039257::get_offset_of_m_JoytickOutput_10(),
	TouchPad_t539039257::get_offset_of_m_UseX_11(),
	TouchPad_t539039257::get_offset_of_m_UseY_12(),
	TouchPad_t539039257::get_offset_of_m_HorizontalVirtualAxis_13(),
	TouchPad_t539039257::get_offset_of_m_VerticalVirtualAxis_14(),
	TouchPad_t539039257::get_offset_of_m_Dragging_15(),
	TouchPad_t539039257::get_offset_of_m_Id_16(),
	TouchPad_t539039257::get_offset_of_m_PreviousTouchPos_17(),
	TouchPad_t539039257::get_offset_of_m_Center_18(),
	TouchPad_t539039257::get_offset_of_m_Image_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2634 = { sizeof (AxisOption_t1372819835)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2634[4] = 
{
	AxisOption_t1372819835::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2635 = { sizeof (ControlStyle_t1372986211)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2635[4] = 
{
	ControlStyle_t1372986211::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2636 = { sizeof (VirtualInput_t2597455733), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2636[4] = 
{
	VirtualInput_t2597455733::get_offset_of_U3CvirtualMousePositionU3Ek__BackingField_0(),
	VirtualInput_t2597455733::get_offset_of_m_VirtualAxes_1(),
	VirtualInput_t2597455733::get_offset_of_m_VirtualButtons_2(),
	VirtualInput_t2597455733::get_offset_of_m_AlwaysUseVirtual_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2637 = { sizeof (AAMode_t1871701680)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2637[8] = 
{
	AAMode_t1871701680::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2638 = { sizeof (Antialiasing_t1691315015), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2638[22] = 
{
	Antialiasing_t1691315015::get_offset_of_mode_6(),
	Antialiasing_t1691315015::get_offset_of_showGeneratedNormals_7(),
	Antialiasing_t1691315015::get_offset_of_offsetScale_8(),
	Antialiasing_t1691315015::get_offset_of_blurRadius_9(),
	Antialiasing_t1691315015::get_offset_of_edgeThresholdMin_10(),
	Antialiasing_t1691315015::get_offset_of_edgeThreshold_11(),
	Antialiasing_t1691315015::get_offset_of_edgeSharpness_12(),
	Antialiasing_t1691315015::get_offset_of_dlaaSharp_13(),
	Antialiasing_t1691315015::get_offset_of_ssaaShader_14(),
	Antialiasing_t1691315015::get_offset_of_ssaa_15(),
	Antialiasing_t1691315015::get_offset_of_dlaaShader_16(),
	Antialiasing_t1691315015::get_offset_of_dlaa_17(),
	Antialiasing_t1691315015::get_offset_of_nfaaShader_18(),
	Antialiasing_t1691315015::get_offset_of_nfaa_19(),
	Antialiasing_t1691315015::get_offset_of_shaderFXAAPreset2_20(),
	Antialiasing_t1691315015::get_offset_of_materialFXAAPreset2_21(),
	Antialiasing_t1691315015::get_offset_of_shaderFXAAPreset3_22(),
	Antialiasing_t1691315015::get_offset_of_materialFXAAPreset3_23(),
	Antialiasing_t1691315015::get_offset_of_shaderFXAAII_24(),
	Antialiasing_t1691315015::get_offset_of_materialFXAAII_25(),
	Antialiasing_t1691315015::get_offset_of_shaderFXAAIII_26(),
	Antialiasing_t1691315015::get_offset_of_materialFXAAIII_27(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2639 = { sizeof (Bloom_t1125654350), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2639[30] = 
{
	Bloom_t1125654350::get_offset_of_tweakMode_6(),
	Bloom_t1125654350::get_offset_of_screenBlendMode_7(),
	Bloom_t1125654350::get_offset_of_hdr_8(),
	Bloom_t1125654350::get_offset_of_doHdr_9(),
	Bloom_t1125654350::get_offset_of_sepBlurSpread_10(),
	Bloom_t1125654350::get_offset_of_quality_11(),
	Bloom_t1125654350::get_offset_of_bloomIntensity_12(),
	Bloom_t1125654350::get_offset_of_bloomThreshold_13(),
	Bloom_t1125654350::get_offset_of_bloomThresholdColor_14(),
	Bloom_t1125654350::get_offset_of_bloomBlurIterations_15(),
	Bloom_t1125654350::get_offset_of_hollywoodFlareBlurIterations_16(),
	Bloom_t1125654350::get_offset_of_flareRotation_17(),
	Bloom_t1125654350::get_offset_of_lensflareMode_18(),
	Bloom_t1125654350::get_offset_of_hollyStretchWidth_19(),
	Bloom_t1125654350::get_offset_of_lensflareIntensity_20(),
	Bloom_t1125654350::get_offset_of_lensflareThreshold_21(),
	Bloom_t1125654350::get_offset_of_lensFlareSaturation_22(),
	Bloom_t1125654350::get_offset_of_flareColorA_23(),
	Bloom_t1125654350::get_offset_of_flareColorB_24(),
	Bloom_t1125654350::get_offset_of_flareColorC_25(),
	Bloom_t1125654350::get_offset_of_flareColorD_26(),
	Bloom_t1125654350::get_offset_of_lensFlareVignetteMask_27(),
	Bloom_t1125654350::get_offset_of_lensFlareShader_28(),
	Bloom_t1125654350::get_offset_of_lensFlareMaterial_29(),
	Bloom_t1125654350::get_offset_of_screenBlendShader_30(),
	Bloom_t1125654350::get_offset_of_screenBlend_31(),
	Bloom_t1125654350::get_offset_of_blurAndFlaresShader_32(),
	Bloom_t1125654350::get_offset_of_blurAndFlaresMaterial_33(),
	Bloom_t1125654350::get_offset_of_brightPassFilterShader_34(),
	Bloom_t1125654350::get_offset_of_brightPassFilterMaterial_35(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2640 = { sizeof (LensFlareStyle_t630413071)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2640[4] = 
{
	LensFlareStyle_t630413071::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2641 = { sizeof (TweakMode_t747557136)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2641[3] = 
{
	TweakMode_t747557136::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2642 = { sizeof (HDRBloomMode_t3774419504)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2642[4] = 
{
	HDRBloomMode_t3774419504::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2643 = { sizeof (BloomScreenBlendMode_t2012607685)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2643[3] = 
{
	BloomScreenBlendMode_t2012607685::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2644 = { sizeof (BloomQuality_t3369172721)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2644[3] = 
{
	BloomQuality_t3369172721::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2645 = { sizeof (LensflareStyle34_t4260782719)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2645[4] = 
{
	LensflareStyle34_t4260782719::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2646 = { sizeof (TweakMode34_t984135990)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2646[3] = 
{
	TweakMode34_t984135990::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2647 = { sizeof (HDRBloomMode_t4271191419)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2647[4] = 
{
	HDRBloomMode_t4271191419::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2648 = { sizeof (BloomScreenBlendMode_t19712272)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2648[3] = 
{
	BloomScreenBlendMode_t19712272::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2649 = { sizeof (BloomAndFlares_t2848767628), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2649[34] = 
{
	BloomAndFlares_t2848767628::get_offset_of_tweakMode_6(),
	BloomAndFlares_t2848767628::get_offset_of_screenBlendMode_7(),
	BloomAndFlares_t2848767628::get_offset_of_hdr_8(),
	BloomAndFlares_t2848767628::get_offset_of_doHdr_9(),
	BloomAndFlares_t2848767628::get_offset_of_sepBlurSpread_10(),
	BloomAndFlares_t2848767628::get_offset_of_useSrcAlphaAsMask_11(),
	BloomAndFlares_t2848767628::get_offset_of_bloomIntensity_12(),
	BloomAndFlares_t2848767628::get_offset_of_bloomThreshold_13(),
	BloomAndFlares_t2848767628::get_offset_of_bloomBlurIterations_14(),
	BloomAndFlares_t2848767628::get_offset_of_lensflares_15(),
	BloomAndFlares_t2848767628::get_offset_of_hollywoodFlareBlurIterations_16(),
	BloomAndFlares_t2848767628::get_offset_of_lensflareMode_17(),
	BloomAndFlares_t2848767628::get_offset_of_hollyStretchWidth_18(),
	BloomAndFlares_t2848767628::get_offset_of_lensflareIntensity_19(),
	BloomAndFlares_t2848767628::get_offset_of_lensflareThreshold_20(),
	BloomAndFlares_t2848767628::get_offset_of_flareColorA_21(),
	BloomAndFlares_t2848767628::get_offset_of_flareColorB_22(),
	BloomAndFlares_t2848767628::get_offset_of_flareColorC_23(),
	BloomAndFlares_t2848767628::get_offset_of_flareColorD_24(),
	BloomAndFlares_t2848767628::get_offset_of_lensFlareVignetteMask_25(),
	BloomAndFlares_t2848767628::get_offset_of_lensFlareShader_26(),
	BloomAndFlares_t2848767628::get_offset_of_lensFlareMaterial_27(),
	BloomAndFlares_t2848767628::get_offset_of_vignetteShader_28(),
	BloomAndFlares_t2848767628::get_offset_of_vignetteMaterial_29(),
	BloomAndFlares_t2848767628::get_offset_of_separableBlurShader_30(),
	BloomAndFlares_t2848767628::get_offset_of_separableBlurMaterial_31(),
	BloomAndFlares_t2848767628::get_offset_of_addBrightStuffOneOneShader_32(),
	BloomAndFlares_t2848767628::get_offset_of_addBrightStuffBlendOneOneMaterial_33(),
	BloomAndFlares_t2848767628::get_offset_of_screenBlendShader_34(),
	BloomAndFlares_t2848767628::get_offset_of_screenBlend_35(),
	BloomAndFlares_t2848767628::get_offset_of_hollywoodFlaresShader_36(),
	BloomAndFlares_t2848767628::get_offset_of_hollywoodFlaresMaterial_37(),
	BloomAndFlares_t2848767628::get_offset_of_brightPassFilterShader_38(),
	BloomAndFlares_t2848767628::get_offset_of_brightPassFilterMaterial_39(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2650 = { sizeof (BloomOptimized_t2685819829), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2650[8] = 
{
	BloomOptimized_t2685819829::get_offset_of_threshold_6(),
	BloomOptimized_t2685819829::get_offset_of_intensity_7(),
	BloomOptimized_t2685819829::get_offset_of_blurSize_8(),
	BloomOptimized_t2685819829::get_offset_of_resolution_9(),
	BloomOptimized_t2685819829::get_offset_of_blurIterations_10(),
	BloomOptimized_t2685819829::get_offset_of_blurType_11(),
	BloomOptimized_t2685819829::get_offset_of_fastBloomShader_12(),
	BloomOptimized_t2685819829::get_offset_of_fastBloomMaterial_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2651 = { sizeof (Resolution_t1804605042)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2651[3] = 
{
	Resolution_t1804605042::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2652 = { sizeof (BlurType_t2416258039)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2652[3] = 
{
	BlurType_t2416258039::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2653 = { sizeof (Blur_t1038294851), -1, sizeof(Blur_t1038294851_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2653[4] = 
{
	Blur_t1038294851::get_offset_of_iterations_2(),
	Blur_t1038294851::get_offset_of_blurSpread_3(),
	Blur_t1038294851::get_offset_of_blurShader_4(),
	Blur_t1038294851_StaticFields::get_offset_of_m_Material_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2654 = { sizeof (BlurOptimized_t3334654964), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2654[6] = 
{
	BlurOptimized_t3334654964::get_offset_of_downsample_6(),
	BlurOptimized_t3334654964::get_offset_of_blurSize_7(),
	BlurOptimized_t3334654964::get_offset_of_blurIterations_8(),
	BlurOptimized_t3334654964::get_offset_of_blurType_9(),
	BlurOptimized_t3334654964::get_offset_of_blurShader_10(),
	BlurOptimized_t3334654964::get_offset_of_blurMaterial_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2655 = { sizeof (BlurType_t1046251128)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2655[3] = 
{
	BlurType_t1046251128::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2656 = { sizeof (CameraMotionBlur_t2812046500), -1, sizeof(CameraMotionBlur_t2812046500_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2656[32] = 
{
	CameraMotionBlur_t2812046500_StaticFields::get_offset_of_MAX_RADIUS_6(),
	CameraMotionBlur_t2812046500::get_offset_of_filterType_7(),
	CameraMotionBlur_t2812046500::get_offset_of_preview_8(),
	CameraMotionBlur_t2812046500::get_offset_of_previewScale_9(),
	CameraMotionBlur_t2812046500::get_offset_of_movementScale_10(),
	CameraMotionBlur_t2812046500::get_offset_of_rotationScale_11(),
	CameraMotionBlur_t2812046500::get_offset_of_maxVelocity_12(),
	CameraMotionBlur_t2812046500::get_offset_of_minVelocity_13(),
	CameraMotionBlur_t2812046500::get_offset_of_velocityScale_14(),
	CameraMotionBlur_t2812046500::get_offset_of_softZDistance_15(),
	CameraMotionBlur_t2812046500::get_offset_of_velocityDownsample_16(),
	CameraMotionBlur_t2812046500::get_offset_of_excludeLayers_17(),
	CameraMotionBlur_t2812046500::get_offset_of_tmpCam_18(),
	CameraMotionBlur_t2812046500::get_offset_of_shader_19(),
	CameraMotionBlur_t2812046500::get_offset_of_dx11MotionBlurShader_20(),
	CameraMotionBlur_t2812046500::get_offset_of_replacementClear_21(),
	CameraMotionBlur_t2812046500::get_offset_of_motionBlurMaterial_22(),
	CameraMotionBlur_t2812046500::get_offset_of_dx11MotionBlurMaterial_23(),
	CameraMotionBlur_t2812046500::get_offset_of_noiseTexture_24(),
	CameraMotionBlur_t2812046500::get_offset_of_jitter_25(),
	CameraMotionBlur_t2812046500::get_offset_of_showVelocity_26(),
	CameraMotionBlur_t2812046500::get_offset_of_showVelocityScale_27(),
	CameraMotionBlur_t2812046500::get_offset_of_currentViewProjMat_28(),
	CameraMotionBlur_t2812046500::get_offset_of_currentStereoViewProjMat_29(),
	CameraMotionBlur_t2812046500::get_offset_of_prevViewProjMat_30(),
	CameraMotionBlur_t2812046500::get_offset_of_prevStereoViewProjMat_31(),
	CameraMotionBlur_t2812046500::get_offset_of_prevFrameCount_32(),
	CameraMotionBlur_t2812046500::get_offset_of_wasActive_33(),
	CameraMotionBlur_t2812046500::get_offset_of_prevFrameForward_34(),
	CameraMotionBlur_t2812046500::get_offset_of_prevFrameUp_35(),
	CameraMotionBlur_t2812046500::get_offset_of_prevFramePos_36(),
	CameraMotionBlur_t2812046500::get_offset_of__camera_37(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2657 = { sizeof (MotionBlurFilter_t520253047)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2657[6] = 
{
	MotionBlurFilter_t520253047::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2658 = { sizeof (ColorCorrectionCurves_t3742166504), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2658[24] = 
{
	ColorCorrectionCurves_t3742166504::get_offset_of_redChannel_6(),
	ColorCorrectionCurves_t3742166504::get_offset_of_greenChannel_7(),
	ColorCorrectionCurves_t3742166504::get_offset_of_blueChannel_8(),
	ColorCorrectionCurves_t3742166504::get_offset_of_useDepthCorrection_9(),
	ColorCorrectionCurves_t3742166504::get_offset_of_zCurve_10(),
	ColorCorrectionCurves_t3742166504::get_offset_of_depthRedChannel_11(),
	ColorCorrectionCurves_t3742166504::get_offset_of_depthGreenChannel_12(),
	ColorCorrectionCurves_t3742166504::get_offset_of_depthBlueChannel_13(),
	ColorCorrectionCurves_t3742166504::get_offset_of_ccMaterial_14(),
	ColorCorrectionCurves_t3742166504::get_offset_of_ccDepthMaterial_15(),
	ColorCorrectionCurves_t3742166504::get_offset_of_selectiveCcMaterial_16(),
	ColorCorrectionCurves_t3742166504::get_offset_of_rgbChannelTex_17(),
	ColorCorrectionCurves_t3742166504::get_offset_of_rgbDepthChannelTex_18(),
	ColorCorrectionCurves_t3742166504::get_offset_of_zCurveTex_19(),
	ColorCorrectionCurves_t3742166504::get_offset_of_saturation_20(),
	ColorCorrectionCurves_t3742166504::get_offset_of_selectiveCc_21(),
	ColorCorrectionCurves_t3742166504::get_offset_of_selectiveFromColor_22(),
	ColorCorrectionCurves_t3742166504::get_offset_of_selectiveToColor_23(),
	ColorCorrectionCurves_t3742166504::get_offset_of_mode_24(),
	ColorCorrectionCurves_t3742166504::get_offset_of_updateTextures_25(),
	ColorCorrectionCurves_t3742166504::get_offset_of_colorCorrectionCurvesShader_26(),
	ColorCorrectionCurves_t3742166504::get_offset_of_simpleColorCorrectionCurvesShader_27(),
	ColorCorrectionCurves_t3742166504::get_offset_of_colorCorrectionSelectiveShader_28(),
	ColorCorrectionCurves_t3742166504::get_offset_of_updateTexturesOnStartup_29(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2659 = { sizeof (ColorCorrectionMode_t1416458051)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2659[3] = 
{
	ColorCorrectionMode_t1416458051::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2660 = { sizeof (ColorCorrectionLookup_t1159177774), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2660[4] = 
{
	ColorCorrectionLookup_t1159177774::get_offset_of_shader_6(),
	ColorCorrectionLookup_t1159177774::get_offset_of_material_7(),
	ColorCorrectionLookup_t1159177774::get_offset_of_converted3DLut_8(),
	ColorCorrectionLookup_t1159177774::get_offset_of_basedOnTempTex_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2661 = { sizeof (ColorCorrectionRamp_t3562116199), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2661[1] = 
{
	ColorCorrectionRamp_t3562116199::get_offset_of_textureRamp_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2662 = { sizeof (ContrastEnhance_t640919481), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2662[7] = 
{
	ContrastEnhance_t640919481::get_offset_of_intensity_6(),
	ContrastEnhance_t640919481::get_offset_of_threshold_7(),
	ContrastEnhance_t640919481::get_offset_of_separableBlurMaterial_8(),
	ContrastEnhance_t640919481::get_offset_of_contrastCompositeMaterial_9(),
	ContrastEnhance_t640919481::get_offset_of_blurSpread_10(),
	ContrastEnhance_t640919481::get_offset_of_separableBlurShader_11(),
	ContrastEnhance_t640919481::get_offset_of_contrastCompositeShader_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2663 = { sizeof (ContrastStretch_t3424449263), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2663[13] = 
{
	ContrastStretch_t3424449263::get_offset_of_adaptationSpeed_2(),
	ContrastStretch_t3424449263::get_offset_of_limitMinimum_3(),
	ContrastStretch_t3424449263::get_offset_of_limitMaximum_4(),
	ContrastStretch_t3424449263::get_offset_of_adaptRenderTex_5(),
	ContrastStretch_t3424449263::get_offset_of_curAdaptIndex_6(),
	ContrastStretch_t3424449263::get_offset_of_shaderLum_7(),
	ContrastStretch_t3424449263::get_offset_of_m_materialLum_8(),
	ContrastStretch_t3424449263::get_offset_of_shaderReduce_9(),
	ContrastStretch_t3424449263::get_offset_of_m_materialReduce_10(),
	ContrastStretch_t3424449263::get_offset_of_shaderAdapt_11(),
	ContrastStretch_t3424449263::get_offset_of_m_materialAdapt_12(),
	ContrastStretch_t3424449263::get_offset_of_shaderApply_13(),
	ContrastStretch_t3424449263::get_offset_of_m_materialApply_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2664 = { sizeof (CreaseShading_t1200394124), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2664[9] = 
{
	CreaseShading_t1200394124::get_offset_of_intensity_6(),
	CreaseShading_t1200394124::get_offset_of_softness_7(),
	CreaseShading_t1200394124::get_offset_of_spread_8(),
	CreaseShading_t1200394124::get_offset_of_blurShader_9(),
	CreaseShading_t1200394124::get_offset_of_blurMaterial_10(),
	CreaseShading_t1200394124::get_offset_of_depthFetchShader_11(),
	CreaseShading_t1200394124::get_offset_of_depthFetchMaterial_12(),
	CreaseShading_t1200394124::get_offset_of_creaseApplyShader_13(),
	CreaseShading_t1200394124::get_offset_of_creaseApplyMaterial_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2665 = { sizeof (DepthOfField_t1116783936), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2665[25] = 
{
	DepthOfField_t1116783936::get_offset_of_visualizeFocus_6(),
	DepthOfField_t1116783936::get_offset_of_focalLength_7(),
	DepthOfField_t1116783936::get_offset_of_focalSize_8(),
	DepthOfField_t1116783936::get_offset_of_aperture_9(),
	DepthOfField_t1116783936::get_offset_of_focalTransform_10(),
	DepthOfField_t1116783936::get_offset_of_maxBlurSize_11(),
	DepthOfField_t1116783936::get_offset_of_highResolution_12(),
	DepthOfField_t1116783936::get_offset_of_blurType_13(),
	DepthOfField_t1116783936::get_offset_of_blurSampleCount_14(),
	DepthOfField_t1116783936::get_offset_of_nearBlur_15(),
	DepthOfField_t1116783936::get_offset_of_foregroundOverlap_16(),
	DepthOfField_t1116783936::get_offset_of_dofHdrShader_17(),
	DepthOfField_t1116783936::get_offset_of_dofHdrMaterial_18(),
	DepthOfField_t1116783936::get_offset_of_dx11BokehShader_19(),
	DepthOfField_t1116783936::get_offset_of_dx11bokehMaterial_20(),
	DepthOfField_t1116783936::get_offset_of_dx11BokehThreshold_21(),
	DepthOfField_t1116783936::get_offset_of_dx11SpawnHeuristic_22(),
	DepthOfField_t1116783936::get_offset_of_dx11BokehTexture_23(),
	DepthOfField_t1116783936::get_offset_of_dx11BokehScale_24(),
	DepthOfField_t1116783936::get_offset_of_dx11BokehIntensity_25(),
	DepthOfField_t1116783936::get_offset_of_focalDistance01_26(),
	DepthOfField_t1116783936::get_offset_of_cbDrawArgs_27(),
	DepthOfField_t1116783936::get_offset_of_cbPoints_28(),
	DepthOfField_t1116783936::get_offset_of_internalBlurWidth_29(),
	DepthOfField_t1116783936::get_offset_of_cachedCamera_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2666 = { sizeof (BlurType_t3871645803)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2666[3] = 
{
	BlurType_t3871645803::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2667 = { sizeof (BlurSampleCount_t3210294001)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2667[4] = 
{
	BlurSampleCount_t3210294001::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2668 = { sizeof (DepthOfFieldDeprecated_t4187663194), -1, sizeof(DepthOfFieldDeprecated_t4187663194_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2668[43] = 
{
	DepthOfFieldDeprecated_t4187663194_StaticFields::get_offset_of_SMOOTH_DOWNSAMPLE_PASS_6(),
	DepthOfFieldDeprecated_t4187663194_StaticFields::get_offset_of_BOKEH_EXTRA_BLUR_7(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_quality_8(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_resolution_9(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_simpleTweakMode_10(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_focalPoint_11(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_smoothness_12(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_focalZDistance_13(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_focalZStartCurve_14(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_focalZEndCurve_15(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_focalStartCurve_16(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_focalEndCurve_17(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_focalDistance01_18(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_objectFocus_19(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_focalSize_20(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_bluriness_21(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_maxBlurSpread_22(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_foregroundBlurExtrude_23(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_dofBlurShader_24(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_dofBlurMaterial_25(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_dofShader_26(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_dofMaterial_27(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_visualize_28(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_bokehDestination_29(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_widthOverHeight_30(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_oneOverBaseSize_31(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_bokeh_32(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_bokehSupport_33(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_bokehShader_34(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_bokehTexture_35(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_bokehScale_36(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_bokehIntensity_37(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_bokehThresholdContrast_38(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_bokehThresholdLuminance_39(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_bokehDownsample_40(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_bokehMaterial_41(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of__camera_42(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_foregroundTexture_43(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_mediumRezWorkTexture_44(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_finalDefocus_45(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_lowRezWorkTexture_46(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_bokehSource_47(),
	DepthOfFieldDeprecated_t4187663194::get_offset_of_bokehSource2_48(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2669 = { sizeof (Dof34QualitySetting_t3636551379)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2669[3] = 
{
	Dof34QualitySetting_t3636551379::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2670 = { sizeof (DofResolution_t1566655669)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2670[4] = 
{
	DofResolution_t1566655669::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2671 = { sizeof (DofBlurriness_t473098480)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2671[4] = 
{
	DofBlurriness_t473098480::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2672 = { sizeof (BokehDestination_t1233703462)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2672[4] = 
{
	BokehDestination_t1233703462::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2673 = { sizeof (EdgeDetection_t506487406), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2673[11] = 
{
	EdgeDetection_t506487406::get_offset_of_mode_6(),
	EdgeDetection_t506487406::get_offset_of_sensitivityDepth_7(),
	EdgeDetection_t506487406::get_offset_of_sensitivityNormals_8(),
	EdgeDetection_t506487406::get_offset_of_lumThreshold_9(),
	EdgeDetection_t506487406::get_offset_of_edgeExp_10(),
	EdgeDetection_t506487406::get_offset_of_sampleDist_11(),
	EdgeDetection_t506487406::get_offset_of_edgesOnly_12(),
	EdgeDetection_t506487406::get_offset_of_edgesOnlyBgColor_13(),
	EdgeDetection_t506487406::get_offset_of_edgeDetectShader_14(),
	EdgeDetection_t506487406::get_offset_of_edgeDetectMaterial_15(),
	EdgeDetection_t506487406::get_offset_of_oldMode_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2674 = { sizeof (EdgeDetectMode_t1984240676)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2674[6] = 
{
	EdgeDetectMode_t1984240676::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2675 = { sizeof (Fisheye_t4101461743), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2675[4] = 
{
	Fisheye_t4101461743::get_offset_of_strengthX_6(),
	Fisheye_t4101461743::get_offset_of_strengthY_7(),
	Fisheye_t4101461743::get_offset_of_fishEyeShader_8(),
	Fisheye_t4101461743::get_offset_of_fisheyeMaterial_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2676 = { sizeof (GlobalFog_t900542613), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2676[9] = 
{
	GlobalFog_t900542613::get_offset_of_distanceFog_6(),
	GlobalFog_t900542613::get_offset_of_excludeFarPixels_7(),
	GlobalFog_t900542613::get_offset_of_useRadialDistance_8(),
	GlobalFog_t900542613::get_offset_of_heightFog_9(),
	GlobalFog_t900542613::get_offset_of_height_10(),
	GlobalFog_t900542613::get_offset_of_heightDensity_11(),
	GlobalFog_t900542613::get_offset_of_startDistance_12(),
	GlobalFog_t900542613::get_offset_of_fogShader_13(),
	GlobalFog_t900542613::get_offset_of_fogMaterial_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2677 = { sizeof (Grayscale_t1707485390), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2677[2] = 
{
	Grayscale_t1707485390::get_offset_of_textureRamp_4(),
	Grayscale_t1707485390::get_offset_of_rampOffset_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2678 = { sizeof (ImageEffectBase_t2026006575), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2678[2] = 
{
	ImageEffectBase_t2026006575::get_offset_of_shader_2(),
	ImageEffectBase_t2026006575::get_offset_of_m_Material_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2679 = { sizeof (ImageEffects_t1214077586), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2680 = { sizeof (MotionBlur_t1587267364), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2680[3] = 
{
	MotionBlur_t1587267364::get_offset_of_blurAmount_4(),
	MotionBlur_t1587267364::get_offset_of_extraBlur_5(),
	MotionBlur_t1587267364::get_offset_of_accumTexture_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2681 = { sizeof (NoiseAndGrain_t3814230817), -1, sizeof(NoiseAndGrain_t3814230817_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2681[18] = 
{
	NoiseAndGrain_t3814230817::get_offset_of_intensityMultiplier_6(),
	NoiseAndGrain_t3814230817::get_offset_of_generalIntensity_7(),
	NoiseAndGrain_t3814230817::get_offset_of_blackIntensity_8(),
	NoiseAndGrain_t3814230817::get_offset_of_whiteIntensity_9(),
	NoiseAndGrain_t3814230817::get_offset_of_midGrey_10(),
	NoiseAndGrain_t3814230817::get_offset_of_dx11Grain_11(),
	NoiseAndGrain_t3814230817::get_offset_of_softness_12(),
	NoiseAndGrain_t3814230817::get_offset_of_monochrome_13(),
	NoiseAndGrain_t3814230817::get_offset_of_intensities_14(),
	NoiseAndGrain_t3814230817::get_offset_of_tiling_15(),
	NoiseAndGrain_t3814230817::get_offset_of_monochromeTiling_16(),
	NoiseAndGrain_t3814230817::get_offset_of_filterMode_17(),
	NoiseAndGrain_t3814230817::get_offset_of_noiseTexture_18(),
	NoiseAndGrain_t3814230817::get_offset_of_noiseShader_19(),
	NoiseAndGrain_t3814230817::get_offset_of_noiseMaterial_20(),
	NoiseAndGrain_t3814230817::get_offset_of_dx11NoiseShader_21(),
	NoiseAndGrain_t3814230817::get_offset_of_dx11NoiseMaterial_22(),
	NoiseAndGrain_t3814230817_StaticFields::get_offset_of_TILE_AMOUNT_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2682 = { sizeof (NoiseAndScratches_t1457296845), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2682[18] = 
{
	NoiseAndScratches_t1457296845::get_offset_of_monochrome_2(),
	NoiseAndScratches_t1457296845::get_offset_of_rgbFallback_3(),
	NoiseAndScratches_t1457296845::get_offset_of_grainIntensityMin_4(),
	NoiseAndScratches_t1457296845::get_offset_of_grainIntensityMax_5(),
	NoiseAndScratches_t1457296845::get_offset_of_grainSize_6(),
	NoiseAndScratches_t1457296845::get_offset_of_scratchIntensityMin_7(),
	NoiseAndScratches_t1457296845::get_offset_of_scratchIntensityMax_8(),
	NoiseAndScratches_t1457296845::get_offset_of_scratchFPS_9(),
	NoiseAndScratches_t1457296845::get_offset_of_scratchJitter_10(),
	NoiseAndScratches_t1457296845::get_offset_of_grainTexture_11(),
	NoiseAndScratches_t1457296845::get_offset_of_scratchTexture_12(),
	NoiseAndScratches_t1457296845::get_offset_of_shaderRGB_13(),
	NoiseAndScratches_t1457296845::get_offset_of_shaderYUV_14(),
	NoiseAndScratches_t1457296845::get_offset_of_m_MaterialRGB_15(),
	NoiseAndScratches_t1457296845::get_offset_of_m_MaterialYUV_16(),
	NoiseAndScratches_t1457296845::get_offset_of_scratchTimeLeft_17(),
	NoiseAndScratches_t1457296845::get_offset_of_scratchX_18(),
	NoiseAndScratches_t1457296845::get_offset_of_scratchY_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2683 = { sizeof (PostEffectsBase_t2404315739), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2683[4] = 
{
	PostEffectsBase_t2404315739::get_offset_of_supportHDRTextures_2(),
	PostEffectsBase_t2404315739::get_offset_of_supportDX11_3(),
	PostEffectsBase_t2404315739::get_offset_of_isSupported_4(),
	PostEffectsBase_t2404315739::get_offset_of_createdMaterials_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2684 = { sizeof (PostEffectsHelper_t675066462), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2685 = { sizeof (Quads_t1152577304), -1, sizeof(Quads_t1152577304_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2685[2] = 
{
	Quads_t1152577304_StaticFields::get_offset_of_meshes_0(),
	Quads_t1152577304_StaticFields::get_offset_of_currentQuads_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2686 = { sizeof (ScreenOverlay_t3772274400), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2686[5] = 
{
	ScreenOverlay_t3772274400::get_offset_of_blendMode_6(),
	ScreenOverlay_t3772274400::get_offset_of_intensity_7(),
	ScreenOverlay_t3772274400::get_offset_of_texture_8(),
	ScreenOverlay_t3772274400::get_offset_of_overlayShader_9(),
	ScreenOverlay_t3772274400::get_offset_of_overlayMaterial_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2687 = { sizeof (OverlayBlendMode_t429753458)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2687[6] = 
{
	OverlayBlendMode_t429753458::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2688 = { sizeof (ScreenSpaceAmbientObscurance_t1844081910), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2688[8] = 
{
	ScreenSpaceAmbientObscurance_t1844081910::get_offset_of_intensity_6(),
	ScreenSpaceAmbientObscurance_t1844081910::get_offset_of_radius_7(),
	ScreenSpaceAmbientObscurance_t1844081910::get_offset_of_blurIterations_8(),
	ScreenSpaceAmbientObscurance_t1844081910::get_offset_of_blurFilterDistance_9(),
	ScreenSpaceAmbientObscurance_t1844081910::get_offset_of_downsample_10(),
	ScreenSpaceAmbientObscurance_t1844081910::get_offset_of_rand_11(),
	ScreenSpaceAmbientObscurance_t1844081910::get_offset_of_aoShader_12(),
	ScreenSpaceAmbientObscurance_t1844081910::get_offset_of_aoMaterial_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2689 = { sizeof (ScreenSpaceAmbientOcclusion_t1675618705), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2689[11] = 
{
	ScreenSpaceAmbientOcclusion_t1675618705::get_offset_of_m_Radius_2(),
	ScreenSpaceAmbientOcclusion_t1675618705::get_offset_of_m_SampleCount_3(),
	ScreenSpaceAmbientOcclusion_t1675618705::get_offset_of_m_OcclusionIntensity_4(),
	ScreenSpaceAmbientOcclusion_t1675618705::get_offset_of_m_Blur_5(),
	ScreenSpaceAmbientOcclusion_t1675618705::get_offset_of_m_Downsampling_6(),
	ScreenSpaceAmbientOcclusion_t1675618705::get_offset_of_m_OcclusionAttenuation_7(),
	ScreenSpaceAmbientOcclusion_t1675618705::get_offset_of_m_MinZ_8(),
	ScreenSpaceAmbientOcclusion_t1675618705::get_offset_of_m_SSAOShader_9(),
	ScreenSpaceAmbientOcclusion_t1675618705::get_offset_of_m_SSAOMaterial_10(),
	ScreenSpaceAmbientOcclusion_t1675618705::get_offset_of_m_RandomTexture_11(),
	ScreenSpaceAmbientOcclusion_t1675618705::get_offset_of_m_Supported_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2690 = { sizeof (SSAOSamples_t2619211009)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2690[4] = 
{
	SSAOSamples_t2619211009::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2691 = { sizeof (SepiaTone_t4259761740), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2692 = { sizeof (SunShafts_t2328921421), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2692[14] = 
{
	SunShafts_t2328921421::get_offset_of_resolution_6(),
	SunShafts_t2328921421::get_offset_of_screenBlendMode_7(),
	SunShafts_t2328921421::get_offset_of_sunTransform_8(),
	SunShafts_t2328921421::get_offset_of_radialBlurIterations_9(),
	SunShafts_t2328921421::get_offset_of_sunColor_10(),
	SunShafts_t2328921421::get_offset_of_sunThreshold_11(),
	SunShafts_t2328921421::get_offset_of_sunShaftBlurRadius_12(),
	SunShafts_t2328921421::get_offset_of_sunShaftIntensity_13(),
	SunShafts_t2328921421::get_offset_of_maxRadius_14(),
	SunShafts_t2328921421::get_offset_of_useDepthTexture_15(),
	SunShafts_t2328921421::get_offset_of_sunShaftsShader_16(),
	SunShafts_t2328921421::get_offset_of_sunShaftsMaterial_17(),
	SunShafts_t2328921421::get_offset_of_simpleClearShader_18(),
	SunShafts_t2328921421::get_offset_of_simpleClearMaterial_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2693 = { sizeof (SunShaftsResolution_t3826757637)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2693[4] = 
{
	SunShaftsResolution_t3826757637::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2694 = { sizeof (ShaftsScreenBlendMode_t4165054462)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2694[3] = 
{
	ShaftsScreenBlendMode_t4165054462::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2695 = { sizeof (TiltShift_t2891301701), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2695[7] = 
{
	TiltShift_t2891301701::get_offset_of_mode_6(),
	TiltShift_t2891301701::get_offset_of_quality_7(),
	TiltShift_t2891301701::get_offset_of_blurArea_8(),
	TiltShift_t2891301701::get_offset_of_maxBlurSize_9(),
	TiltShift_t2891301701::get_offset_of_downsample_10(),
	TiltShift_t2891301701::get_offset_of_tiltShiftShader_11(),
	TiltShift_t2891301701::get_offset_of_tiltShiftMaterial_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2696 = { sizeof (TiltShiftMode_t1375727185)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2696[3] = 
{
	TiltShiftMode_t1375727185::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2697 = { sizeof (TiltShiftQuality_t4173331534)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2697[5] = 
{
	TiltShiftQuality_t4173331534::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2698 = { sizeof (Tonemapping_t2837480251), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2698[13] = 
{
	Tonemapping_t2837480251::get_offset_of_type_6(),
	Tonemapping_t2837480251::get_offset_of_adaptiveTextureSize_7(),
	Tonemapping_t2837480251::get_offset_of_remapCurve_8(),
	Tonemapping_t2837480251::get_offset_of_curveTex_9(),
	Tonemapping_t2837480251::get_offset_of_exposureAdjustment_10(),
	Tonemapping_t2837480251::get_offset_of_middleGrey_11(),
	Tonemapping_t2837480251::get_offset_of_white_12(),
	Tonemapping_t2837480251::get_offset_of_adaptionSpeed_13(),
	Tonemapping_t2837480251::get_offset_of_tonemapper_14(),
	Tonemapping_t2837480251::get_offset_of_validRenderTextureFormat_15(),
	Tonemapping_t2837480251::get_offset_of_tonemapMaterial_16(),
	Tonemapping_t2837480251::get_offset_of_rt_17(),
	Tonemapping_t2837480251::get_offset_of_rtFormat_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2699 = { sizeof (TonemapperType_t52991894)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2699[8] = 
{
	TonemapperType_t52991894::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
