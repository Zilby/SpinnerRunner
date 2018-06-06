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

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// UnityStandardAssets.ImageEffects.TiltShift
struct TiltShift_t2891301701;
// UnityStandardAssets.ImageEffects.PostEffectsBase
struct PostEffectsBase_t2404315739;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Shader
struct Shader_t4151988712;
// UnityEngine.RenderTexture
struct RenderTexture_t2108887433;
// UnityEngine.Texture
struct Texture_t3661962703;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t631007953;
// UnityStandardAssets.ImageEffects.Tonemapping
struct Tonemapping_t2837480251;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t1068524471;
// UnityStandardAssets.ImageEffects.Triangles
struct Triangles_t2090031681;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t3972987605;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityStandardAssets.ImageEffects.Twirl
struct Twirl_t2760508880;
// UnityStandardAssets.ImageEffects.ImageEffectBase
struct ImageEffectBase_t2026006575;
// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration
struct VignetteAndChromaticAberration_t3308099924;
// UnityStandardAssets.ImageEffects.Vortex
struct Vortex_t3420399868;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t1812449865;

extern RuntimeClass* Graphics_t783367614_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3553953719;
extern String_t* _stringLiteral145622282;
extern String_t* _stringLiteral3225765488;
extern const uint32_t TiltShift_OnRenderImage_m394892405_MetadataUsageId;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern const uint32_t Tonemapping_CheckResources_m3600518521_MetadataUsageId;
extern RuntimeClass* KeyframeU5BU5D_t1068524471_il2cpp_TypeInfo_var;
extern RuntimeClass* AnimationCurve_t3046754366_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern const uint32_t Tonemapping_UpdateCurve_m2076606369_MetadataUsageId;
extern const uint32_t Tonemapping_OnDisable_m2152428322_MetadataUsageId;
extern RuntimeClass* RenderTexture_t2108887433_il2cpp_TypeInfo_var;
extern const uint32_t Tonemapping_CreateInternalRenderTexture_m2587854304_MetadataUsageId;
extern RuntimeClass* RenderTextureU5BU5D_t4111643188_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3711134867;
extern String_t* _stringLiteral56112754;
extern String_t* _stringLiteral2208124131;
extern String_t* _stringLiteral1177274495;
extern String_t* _stringLiteral812496408;
extern String_t* _stringLiteral2267843788;
extern String_t* _stringLiteral486078342;
extern const uint32_t Tonemapping_OnRenderImage_m3080456075_MetadataUsageId;
extern RuntimeClass* Triangles_t2090031681_il2cpp_TypeInfo_var;
extern const uint32_t Triangles_HasMeshes_m1063919596_MetadataUsageId;
extern const uint32_t Triangles_Cleanup_m1309207721_MetadataUsageId;
extern RuntimeClass* MeshU5BU5D_t3972987605_il2cpp_TypeInfo_var;
extern const uint32_t Triangles_GetMeshes_m3491158630_MetadataUsageId;
extern RuntimeClass* Mesh_t3648964284_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern const uint32_t Triangles_GetMesh_m1896089306_MetadataUsageId;
extern RuntimeClass* Vector4_t3319028937_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1624685711;
extern String_t* _stringLiteral3952415593;
extern String_t* _stringLiteral3560662707;
extern String_t* _stringLiteral3020016099;
extern String_t* _stringLiteral1596491694;
extern String_t* _stringLiteral1767284560;
extern String_t* _stringLiteral1772571274;
extern String_t* _stringLiteral2859884931;
extern const uint32_t VignetteAndChromaticAberration_OnRenderImage_m4061427208_MetadataUsageId;

struct KeyframeU5BU5D_t1068524471;
struct RenderTextureU5BU5D_t4111643188;
struct MeshU5BU5D_t3972987605;
struct Vector3U5BU5D_t1718750761;
struct Vector2U5BU5D_t1457185986;
struct Int32U5BU5D_t385246372;


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
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
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
#ifndef TRIANGLES_T2090031681_H
#define TRIANGLES_T2090031681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Triangles
struct  Triangles_t2090031681  : public RuntimeObject
{
public:

public:
};

struct Triangles_t2090031681_StaticFields
{
public:
	// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Triangles::meshes
	MeshU5BU5D_t3972987605* ___meshes_0;
	// System.Int32 UnityStandardAssets.ImageEffects.Triangles::currentTris
	int32_t ___currentTris_1;

public:
	inline static int32_t get_offset_of_meshes_0() { return static_cast<int32_t>(offsetof(Triangles_t2090031681_StaticFields, ___meshes_0)); }
	inline MeshU5BU5D_t3972987605* get_meshes_0() const { return ___meshes_0; }
	inline MeshU5BU5D_t3972987605** get_address_of_meshes_0() { return &___meshes_0; }
	inline void set_meshes_0(MeshU5BU5D_t3972987605* value)
	{
		___meshes_0 = value;
		Il2CppCodeGenWriteBarrier((&___meshes_0), value);
	}

	inline static int32_t get_offset_of_currentTris_1() { return static_cast<int32_t>(offsetof(Triangles_t2090031681_StaticFields, ___currentTris_1)); }
	inline int32_t get_currentTris_1() const { return ___currentTris_1; }
	inline int32_t* get_address_of_currentTris_1() { return &___currentTris_1; }
	inline void set_currentTris_1(int32_t value)
	{
		___currentTris_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIANGLES_T2090031681_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
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
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
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
#ifndef KEYFRAME_T4206410242_H
#define KEYFRAME_T4206410242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Keyframe
struct  Keyframe_t4206410242 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYFRAME_T4206410242_H
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
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
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
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef MATHF_T3464937446_H
#define MATHF_T3464937446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mathf
struct  Mathf_t3464937446 
{
public:

public:
};

struct Mathf_t3464937446_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t3464937446_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHF_T3464937446_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
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
#ifndef HIDEFLAGS_T4250555765_H
#define HIDEFLAGS_T4250555765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t4250555765 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HideFlags_t4250555765, ___value___1)); }
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
#endif // HIDEFLAGS_T4250555765_H
#ifndef TEXTUREWRAPMODE_T584250749_H
#define TEXTUREWRAPMODE_T584250749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureWrapMode
struct  TextureWrapMode_t584250749 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureWrapMode_t584250749, ___value___1)); }
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
#endif // TEXTUREWRAPMODE_T584250749_H
#ifndef ANIMATIONCURVE_T3046754366_H
#define ANIMATIONCURVE_T3046754366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_t3046754366  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t3046754366, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_T3046754366_H
#ifndef ABERRATIONMODE_T218549536_H
#define ABERRATIONMODE_T218549536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration/AberrationMode
struct  AberrationMode_t218549536 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration/AberrationMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AberrationMode_t218549536, ___value___1)); }
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
#endif // ABERRATIONMODE_T218549536_H
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
#ifndef TEXTUREFORMAT_T2701165832_H
#define TEXTUREFORMAT_T2701165832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2701165832 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureFormat_t2701165832, ___value___1)); }
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
#endif // TEXTUREFORMAT_T2701165832_H
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
#ifndef SHADER_T4151988712_H
#define SHADER_T4151988712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Shader
struct  Shader_t4151988712  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADER_T4151988712_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef MESH_T3648964284_H
#define MESH_T3648964284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t3648964284  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T3648964284_H
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
#ifndef RENDERTEXTURE_T2108887433_H
#define RENDERTEXTURE_T2108887433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t2108887433  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T2108887433_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
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
#ifndef TWIRL_T2760508880_H
#define TWIRL_T2760508880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Twirl
struct  Twirl_t2760508880  : public ImageEffectBase_t2026006575
{
public:
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Twirl::radius
	Vector2_t2156229523  ___radius_4;
	// System.Single UnityStandardAssets.ImageEffects.Twirl::angle
	float ___angle_5;
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Twirl::center
	Vector2_t2156229523  ___center_6;

public:
	inline static int32_t get_offset_of_radius_4() { return static_cast<int32_t>(offsetof(Twirl_t2760508880, ___radius_4)); }
	inline Vector2_t2156229523  get_radius_4() const { return ___radius_4; }
	inline Vector2_t2156229523 * get_address_of_radius_4() { return &___radius_4; }
	inline void set_radius_4(Vector2_t2156229523  value)
	{
		___radius_4 = value;
	}

	inline static int32_t get_offset_of_angle_5() { return static_cast<int32_t>(offsetof(Twirl_t2760508880, ___angle_5)); }
	inline float get_angle_5() const { return ___angle_5; }
	inline float* get_address_of_angle_5() { return &___angle_5; }
	inline void set_angle_5(float value)
	{
		___angle_5 = value;
	}

	inline static int32_t get_offset_of_center_6() { return static_cast<int32_t>(offsetof(Twirl_t2760508880, ___center_6)); }
	inline Vector2_t2156229523  get_center_6() const { return ___center_6; }
	inline Vector2_t2156229523 * get_address_of_center_6() { return &___center_6; }
	inline void set_center_6(Vector2_t2156229523  value)
	{
		___center_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWIRL_T2760508880_H
#ifndef VIGNETTEANDCHROMATICABERRATION_T3308099924_H
#define VIGNETTEANDCHROMATICABERRATION_T3308099924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration
struct  VignetteAndChromaticAberration_t3308099924  : public PostEffectsBase_t2404315739
{
public:
	// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration/AberrationMode UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::mode
	int32_t ___mode_6;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::intensity
	float ___intensity_7;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::chromaticAberration
	float ___chromaticAberration_8;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::axialAberration
	float ___axialAberration_9;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blur
	float ___blur_10;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blurSpread
	float ___blurSpread_11;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::luminanceDependency
	float ___luminanceDependency_12;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blurDistance
	float ___blurDistance_13;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::vignetteShader
	Shader_t4151988712 * ___vignetteShader_14;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::separableBlurShader
	Shader_t4151988712 * ___separableBlurShader_15;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::chromAberrationShader
	Shader_t4151988712 * ___chromAberrationShader_16;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_VignetteMaterial
	Material_t340375123 * ___m_VignetteMaterial_17;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_SeparableBlurMaterial
	Material_t340375123 * ___m_SeparableBlurMaterial_18;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_ChromAberrationMaterial
	Material_t340375123 * ___m_ChromAberrationMaterial_19;

public:
	inline static int32_t get_offset_of_mode_6() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___mode_6)); }
	inline int32_t get_mode_6() const { return ___mode_6; }
	inline int32_t* get_address_of_mode_6() { return &___mode_6; }
	inline void set_mode_6(int32_t value)
	{
		___mode_6 = value;
	}

	inline static int32_t get_offset_of_intensity_7() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___intensity_7)); }
	inline float get_intensity_7() const { return ___intensity_7; }
	inline float* get_address_of_intensity_7() { return &___intensity_7; }
	inline void set_intensity_7(float value)
	{
		___intensity_7 = value;
	}

	inline static int32_t get_offset_of_chromaticAberration_8() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___chromaticAberration_8)); }
	inline float get_chromaticAberration_8() const { return ___chromaticAberration_8; }
	inline float* get_address_of_chromaticAberration_8() { return &___chromaticAberration_8; }
	inline void set_chromaticAberration_8(float value)
	{
		___chromaticAberration_8 = value;
	}

	inline static int32_t get_offset_of_axialAberration_9() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___axialAberration_9)); }
	inline float get_axialAberration_9() const { return ___axialAberration_9; }
	inline float* get_address_of_axialAberration_9() { return &___axialAberration_9; }
	inline void set_axialAberration_9(float value)
	{
		___axialAberration_9 = value;
	}

	inline static int32_t get_offset_of_blur_10() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___blur_10)); }
	inline float get_blur_10() const { return ___blur_10; }
	inline float* get_address_of_blur_10() { return &___blur_10; }
	inline void set_blur_10(float value)
	{
		___blur_10 = value;
	}

	inline static int32_t get_offset_of_blurSpread_11() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___blurSpread_11)); }
	inline float get_blurSpread_11() const { return ___blurSpread_11; }
	inline float* get_address_of_blurSpread_11() { return &___blurSpread_11; }
	inline void set_blurSpread_11(float value)
	{
		___blurSpread_11 = value;
	}

	inline static int32_t get_offset_of_luminanceDependency_12() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___luminanceDependency_12)); }
	inline float get_luminanceDependency_12() const { return ___luminanceDependency_12; }
	inline float* get_address_of_luminanceDependency_12() { return &___luminanceDependency_12; }
	inline void set_luminanceDependency_12(float value)
	{
		___luminanceDependency_12 = value;
	}

	inline static int32_t get_offset_of_blurDistance_13() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___blurDistance_13)); }
	inline float get_blurDistance_13() const { return ___blurDistance_13; }
	inline float* get_address_of_blurDistance_13() { return &___blurDistance_13; }
	inline void set_blurDistance_13(float value)
	{
		___blurDistance_13 = value;
	}

	inline static int32_t get_offset_of_vignetteShader_14() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___vignetteShader_14)); }
	inline Shader_t4151988712 * get_vignetteShader_14() const { return ___vignetteShader_14; }
	inline Shader_t4151988712 ** get_address_of_vignetteShader_14() { return &___vignetteShader_14; }
	inline void set_vignetteShader_14(Shader_t4151988712 * value)
	{
		___vignetteShader_14 = value;
		Il2CppCodeGenWriteBarrier((&___vignetteShader_14), value);
	}

	inline static int32_t get_offset_of_separableBlurShader_15() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___separableBlurShader_15)); }
	inline Shader_t4151988712 * get_separableBlurShader_15() const { return ___separableBlurShader_15; }
	inline Shader_t4151988712 ** get_address_of_separableBlurShader_15() { return &___separableBlurShader_15; }
	inline void set_separableBlurShader_15(Shader_t4151988712 * value)
	{
		___separableBlurShader_15 = value;
		Il2CppCodeGenWriteBarrier((&___separableBlurShader_15), value);
	}

	inline static int32_t get_offset_of_chromAberrationShader_16() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___chromAberrationShader_16)); }
	inline Shader_t4151988712 * get_chromAberrationShader_16() const { return ___chromAberrationShader_16; }
	inline Shader_t4151988712 ** get_address_of_chromAberrationShader_16() { return &___chromAberrationShader_16; }
	inline void set_chromAberrationShader_16(Shader_t4151988712 * value)
	{
		___chromAberrationShader_16 = value;
		Il2CppCodeGenWriteBarrier((&___chromAberrationShader_16), value);
	}

	inline static int32_t get_offset_of_m_VignetteMaterial_17() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___m_VignetteMaterial_17)); }
	inline Material_t340375123 * get_m_VignetteMaterial_17() const { return ___m_VignetteMaterial_17; }
	inline Material_t340375123 ** get_address_of_m_VignetteMaterial_17() { return &___m_VignetteMaterial_17; }
	inline void set_m_VignetteMaterial_17(Material_t340375123 * value)
	{
		___m_VignetteMaterial_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_VignetteMaterial_17), value);
	}

	inline static int32_t get_offset_of_m_SeparableBlurMaterial_18() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___m_SeparableBlurMaterial_18)); }
	inline Material_t340375123 * get_m_SeparableBlurMaterial_18() const { return ___m_SeparableBlurMaterial_18; }
	inline Material_t340375123 ** get_address_of_m_SeparableBlurMaterial_18() { return &___m_SeparableBlurMaterial_18; }
	inline void set_m_SeparableBlurMaterial_18(Material_t340375123 * value)
	{
		___m_SeparableBlurMaterial_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_SeparableBlurMaterial_18), value);
	}

	inline static int32_t get_offset_of_m_ChromAberrationMaterial_19() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t3308099924, ___m_ChromAberrationMaterial_19)); }
	inline Material_t340375123 * get_m_ChromAberrationMaterial_19() const { return ___m_ChromAberrationMaterial_19; }
	inline Material_t340375123 ** get_address_of_m_ChromAberrationMaterial_19() { return &___m_ChromAberrationMaterial_19; }
	inline void set_m_ChromAberrationMaterial_19(Material_t340375123 * value)
	{
		___m_ChromAberrationMaterial_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChromAberrationMaterial_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIGNETTEANDCHROMATICABERRATION_T3308099924_H
#ifndef VORTEX_T3420399868_H
#define VORTEX_T3420399868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Vortex
struct  Vortex_t3420399868  : public ImageEffectBase_t2026006575
{
public:
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Vortex::radius
	Vector2_t2156229523  ___radius_4;
	// System.Single UnityStandardAssets.ImageEffects.Vortex::angle
	float ___angle_5;
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Vortex::center
	Vector2_t2156229523  ___center_6;

public:
	inline static int32_t get_offset_of_radius_4() { return static_cast<int32_t>(offsetof(Vortex_t3420399868, ___radius_4)); }
	inline Vector2_t2156229523  get_radius_4() const { return ___radius_4; }
	inline Vector2_t2156229523 * get_address_of_radius_4() { return &___radius_4; }
	inline void set_radius_4(Vector2_t2156229523  value)
	{
		___radius_4 = value;
	}

	inline static int32_t get_offset_of_angle_5() { return static_cast<int32_t>(offsetof(Vortex_t3420399868, ___angle_5)); }
	inline float get_angle_5() const { return ___angle_5; }
	inline float* get_address_of_angle_5() { return &___angle_5; }
	inline void set_angle_5(float value)
	{
		___angle_5 = value;
	}

	inline static int32_t get_offset_of_center_6() { return static_cast<int32_t>(offsetof(Vortex_t3420399868, ___center_6)); }
	inline Vector2_t2156229523  get_center_6() const { return ___center_6; }
	inline Vector2_t2156229523 * get_address_of_center_6() { return &___center_6; }
	inline void set_center_6(Vector2_t2156229523  value)
	{
		___center_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VORTEX_T3420399868_H
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t1068524471  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Keyframe_t4206410242  m_Items[1];

public:
	inline Keyframe_t4206410242  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_t4206410242 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_t4206410242  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_t4206410242  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_t4206410242 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_t4206410242  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t4111643188  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RenderTexture_t2108887433 * m_Items[1];

public:
	inline RenderTexture_t2108887433 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RenderTexture_t2108887433 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RenderTexture_t2108887433 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RenderTexture_t2108887433 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RenderTexture_t2108887433 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RenderTexture_t2108887433 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Mesh[]
struct MeshU5BU5D_t3972987605  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Mesh_t3648964284 * m_Items[1];

public:
	inline Mesh_t3648964284 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Mesh_t3648964284 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Mesh_t3648964284 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Mesh_t3648964284 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Mesh_t3648964284 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Mesh_t3648964284 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_t2156229523  m_Items[1];

public:
	inline Vector2_t2156229523  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t2156229523  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};



// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::.ctor()
extern "C"  void PostEffectsBase__ctor_m3249494038 (PostEffectsBase_t2404315739 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean)
extern "C"  bool PostEffectsBase_CheckSupport_m2449300828 (PostEffectsBase_t2404315739 * __this, bool ___needDepth0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
extern "C"  Material_t340375123 * PostEffectsBase_CheckShaderAndCreateMaterial_m242186546 (PostEffectsBase_t2404315739 * __this, Shader_t4151988712 * ___s0, Material_t340375123 * ___m2Create1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::ReportAutoDisable()
extern "C"  void PostEffectsBase_ReportAutoDisable_m412809422 (PostEffectsBase_t2404315739 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
extern "C"  void Graphics_Blit_m1336850842 (RuntimeObject * __this /* static, unused */, Texture_t3661962703 * p0, RenderTexture_t2108887433 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C"  void Material_SetFloat_m3226510453 (Material_t340375123 * __this, String_t* p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
extern "C"  void Texture_set_filterMode_m3078068058 (Texture_t3661962703 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTextureFormat UnityEngine.RenderTexture::get_format()
extern "C"  int32_t RenderTexture_get_format_m3846871418 (RenderTexture_t2108887433 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
extern "C"  RenderTexture_t2108887433 * RenderTexture_GetTemporary_m3378328322 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C"  void Graphics_Blit_m4126770912 (RuntimeObject * __this /* static, unused */, Texture_t3661962703 * p0, RenderTexture_t2108887433 * p1, Material_t340375123 * p2, int32_t p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
extern "C"  void Material_SetTexture_m1829349465 (Material_t340375123 * __this, String_t* p0, Texture_t3661962703 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
extern "C"  void RenderTexture_ReleaseTemporary_m2400081536 (RuntimeObject * __this /* static, unused */, RenderTexture_t2108887433 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean,System.Boolean)
extern "C"  bool PostEffectsBase_CheckSupport_m533724629 (PostEffectsBase_t2404315739 * __this, bool ___needDepth0, bool ___needHdr1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
extern "C"  void Texture2D__ctor_m1269666504 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, int32_t p2, bool p3, bool p4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
extern "C"  void Texture_set_wrapMode_m587872754 (Texture_t3661962703 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C"  void Object_set_hideFlags_m1648752846 (Object_t631007953 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
extern "C"  KeyframeU5BU5D_t1068524471* AnimationCurve_get_keys_m1672862131 (AnimationCurve_t3046754366 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
extern "C"  void Keyframe__ctor_m391431887 (Keyframe_t4206410242 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C"  void AnimationCurve__ctor_m1565662948 (AnimationCurve_t3046754366 * __this, KeyframeU5BU5D_t1068524471* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationCurve::get_length()
extern "C"  int32_t AnimationCurve_get_length_m1548433259 (AnimationCurve_t3046754366 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
extern "C"  Keyframe_t4206410242  AnimationCurve_get_Item_m4209227769 (AnimationCurve_t3046754366 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Keyframe::get_time()
extern "C"  float Keyframe_get_time_m803196188 (Keyframe_t4206410242 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern "C"  float AnimationCurve_Evaluate_m2125563588 (AnimationCurve_t3046754366 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m286683560 (Color_t2555686324 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
extern "C"  void Texture2D_SetPixel_m2984741184 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, Color_t2555686324  p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply()
extern "C"  void Texture2D_Apply_m2271746283 (Texture2D_t3840446185 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C"  void Object_DestroyImmediate_m3193525861 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SystemInfo::SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat)
extern "C"  bool SystemInfo_SupportsRenderTextureFormat_m1663449629 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
extern "C"  void RenderTexture__ctor_m2187158709 (RenderTexture_t2108887433 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.ImageEffects.Tonemapping::UpdateCurve()
extern "C"  float Tonemapping_UpdateCurve_m2076606369 (Tonemapping_t2837480251 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::CreateInternalRenderTexture()
extern "C"  bool Tonemapping_CreateInternalRenderTexture_m2587854304 (Tonemapping_t2837480251 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Log(System.Single,System.Single)
extern "C"  float Mathf_Log_m2177375338 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::MarkRestoreExpected()
extern "C"  void RenderTexture_MarkRestoreExpected_m1721809840 (RenderTexture_t2108887433 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Vector4__ctor_m2498754347 (Vector4_t3319028937 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
extern "C"  void Material_SetVector_m4214217286 (Material_t340375123 * __this, String_t* p0, Vector4_t3319028937  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.Triangles::HasMeshes()
extern "C"  bool Triangles_HasMeshes_m1063919596 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
extern "C"  int32_t Mathf_CeilToInt_m432108984 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t Mathf_Clamp_m2756574208 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
extern "C"  int32_t Mathf_FloorToInt_m1870542928 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh UnityStandardAssets.ImageEffects.Triangles::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  Mesh_t3648964284 * Triangles_GetMesh_m1896089306 (RuntimeObject * __this /* static, unused */, int32_t ___triCount0, int32_t ___triOffset1, int32_t ___totalWidth2, int32_t ___totalHeight3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::.ctor()
extern "C"  void Mesh__ctor_m2533762929 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C"  void Mesh_set_vertices_m2084450642 (Mesh_t3648964284 * __this, Vector3U5BU5D_t1718750761* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C"  void Mesh_set_triangles_m255556250 (Mesh_t3648964284 * __this, Int32U5BU5D_t385246372* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C"  void Mesh_set_uv_m1258646872 (Mesh_t3648964284 * __this, Vector2U5BU5D_t1457185986* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv2(UnityEngine.Vector2[])
extern "C"  void Mesh_set_uv2_m2840654016 (Mesh_t3648964284 * __this, Vector2U5BU5D_t1457185986* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ImageEffectBase::.ctor()
extern "C"  void ImageEffectBase__ctor_m3682424896 (ImageEffectBase_t2026006575 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ImageEffectBase::get_material()
extern "C"  Material_t340375123 * ImageEffectBase_get_material_m3574076220 (ImageEffectBase_t2026006575 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::RenderDistortion(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  void ImageEffects_RenderDistortion_m2367323920 (RuntimeObject * __this /* static, unused */, Material_t340375123 * ___material0, RenderTexture_t2108887433 * ___source1, RenderTexture_t2108887433 * ___destination2, float ___angle3, Vector2_t2156229523  ___center4, Vector2_t2156229523  ___radius5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C"  void Graphics_Blit_m890955694 (RuntimeObject * __this /* static, unused */, Texture_t3661962703 * p0, RenderTexture_t2108887433 * p1, Material_t340375123 * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector4_t3319028937  Vector4_op_Implicit_m237151757 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C"  float Mathf_Max_m3146388979 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.ImageEffects.TiltShift::.ctor()
extern "C"  void TiltShift__ctor_m4188253826 (TiltShift_t2891301701 * __this, const RuntimeMethod* method)
{
	{
		__this->set_quality_7(2);
		__this->set_blurArea_8((1.0f));
		__this->set_maxBlurSize_9((5.0f));
		PostEffectsBase__ctor_m3249494038(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.TiltShift::CheckResources()
extern "C"  bool TiltShift_CheckResources_m3503263950 (TiltShift_t2891301701 * __this, const RuntimeMethod* method)
{
	{
		PostEffectsBase_CheckSupport_m2449300828(__this, (bool)0, /*hidden argument*/NULL);
		Shader_t4151988712 * L_0 = __this->get_tiltShiftShader_11();
		Material_t340375123 * L_1 = __this->get_tiltShiftMaterial_12();
		Material_t340375123 * L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m242186546(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->set_tiltShiftMaterial_12(L_2);
		bool L_3 = ((PostEffectsBase_t2404315739 *)__this)->get_isSupported_4();
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		PostEffectsBase_ReportAutoDisable_m412809422(__this, /*hidden argument*/NULL);
	}

IL_0031:
	{
		bool L_4 = ((PostEffectsBase_t2404315739 *)__this)->get_isSupported_4();
		return L_4;
	}
}
// System.Void UnityStandardAssets.ImageEffects.TiltShift::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void TiltShift_OnRenderImage_m394892405 (TiltShift_t2891301701 * __this, RenderTexture_t2108887433 * ___source0, RenderTexture_t2108887433 * ___destination1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TiltShift_OnRenderImage_m394892405_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t2108887433 * V_0 = NULL;
	int32_t V_1 = 0;
	String_t* G_B4_0 = NULL;
	Material_t340375123 * G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	Material_t340375123 * G_B3_1 = NULL;
	float G_B5_0 = 0.0f;
	String_t* G_B5_1 = NULL;
	Material_t340375123 * G_B5_2 = NULL;
	Material_t340375123 * G_B9_0 = NULL;
	RenderTexture_t2108887433 * G_B9_1 = NULL;
	RenderTexture_t2108887433 * G_B9_2 = NULL;
	Material_t340375123 * G_B8_0 = NULL;
	RenderTexture_t2108887433 * G_B8_1 = NULL;
	RenderTexture_t2108887433 * G_B8_2 = NULL;
	int32_t G_B10_0 = 0;
	Material_t340375123 * G_B10_1 = NULL;
	RenderTexture_t2108887433 * G_B10_2 = NULL;
	RenderTexture_t2108887433 * G_B10_3 = NULL;
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RenderTexture_t2108887433 * L_1 = ___source0;
		RenderTexture_t2108887433 * L_2 = ___destination1;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m1336850842(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		Material_t340375123 * L_3 = __this->get_tiltShiftMaterial_12();
		float L_4 = __this->get_maxBlurSize_9();
		G_B3_0 = _stringLiteral3553953719;
		G_B3_1 = L_3;
		if ((!(((float)L_4) < ((float)(0.0f)))))
		{
			G_B4_0 = _stringLiteral3553953719;
			G_B4_1 = L_3;
			goto IL_0038;
		}
	}
	{
		G_B5_0 = (0.0f);
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_003e;
	}

IL_0038:
	{
		float L_5 = __this->get_maxBlurSize_9();
		G_B5_0 = L_5;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_003e:
	{
		NullCheck(G_B5_2);
		Material_SetFloat_m3226510453(G_B5_2, G_B5_1, G_B5_0, /*hidden argument*/NULL);
		Material_t340375123 * L_6 = __this->get_tiltShiftMaterial_12();
		float L_7 = __this->get_blurArea_8();
		NullCheck(L_6);
		Material_SetFloat_m3226510453(L_6, _stringLiteral145622282, L_7, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_8 = ___source0;
		NullCheck(L_8);
		Texture_set_filterMode_m3078068058(L_8, 1, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_9 = ___destination1;
		V_0 = L_9;
		int32_t L_10 = __this->get_downsample_10();
		if ((!(((float)(((float)((float)L_10)))) > ((float)(0.0f)))))
		{
			goto IL_00a7;
		}
	}
	{
		RenderTexture_t2108887433 * L_11 = ___source0;
		NullCheck(L_11);
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_11);
		int32_t L_13 = __this->get_downsample_10();
		RenderTexture_t2108887433 * L_14 = ___source0;
		NullCheck(L_14);
		int32_t L_15 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_14);
		int32_t L_16 = __this->get_downsample_10();
		RenderTexture_t2108887433 * L_17 = ___source0;
		NullCheck(L_17);
		int32_t L_18 = RenderTexture_get_format_m3846871418(L_17, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_19 = RenderTexture_GetTemporary_m3378328322(NULL /*static, unused*/, ((int32_t)((int32_t)L_12>>(int32_t)((int32_t)((int32_t)L_13&(int32_t)((int32_t)31))))), ((int32_t)((int32_t)L_15>>(int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)31))))), 0, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		RenderTexture_t2108887433 * L_20 = V_0;
		NullCheck(L_20);
		Texture_set_filterMode_m3078068058(L_20, 1, /*hidden argument*/NULL);
	}

IL_00a7:
	{
		int32_t L_21 = __this->get_quality_7();
		V_1 = L_21;
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_22, (int32_t)2));
		RenderTexture_t2108887433 * L_23 = ___source0;
		RenderTexture_t2108887433 * L_24 = V_0;
		Material_t340375123 * L_25 = __this->get_tiltShiftMaterial_12();
		int32_t L_26 = __this->get_mode_6();
		G_B8_0 = L_25;
		G_B8_1 = L_24;
		G_B8_2 = L_23;
		if (L_26)
		{
			G_B9_0 = L_25;
			G_B9_1 = L_24;
			G_B9_2 = L_23;
			goto IL_00cb;
		}
	}
	{
		int32_t L_27 = V_1;
		G_B10_0 = L_27;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		G_B10_3 = G_B8_2;
		goto IL_00ce;
	}

IL_00cb:
	{
		int32_t L_28 = V_1;
		G_B10_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
		G_B10_3 = G_B9_2;
	}

IL_00ce:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m4126770912(NULL /*static, unused*/, G_B10_3, G_B10_2, G_B10_1, G_B10_0, /*hidden argument*/NULL);
		int32_t L_29 = __this->get_downsample_10();
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_00fe;
		}
	}
	{
		Material_t340375123 * L_30 = __this->get_tiltShiftMaterial_12();
		RenderTexture_t2108887433 * L_31 = V_0;
		NullCheck(L_30);
		Material_SetTexture_m1829349465(L_30, _stringLiteral3225765488, L_31, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_32 = ___source0;
		RenderTexture_t2108887433 * L_33 = ___destination1;
		Material_t340375123 * L_34 = __this->get_tiltShiftMaterial_12();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m4126770912(NULL /*static, unused*/, L_32, L_33, L_34, 8, /*hidden argument*/NULL);
	}

IL_00fe:
	{
		RenderTexture_t2108887433 * L_35 = V_0;
		RenderTexture_t2108887433 * L_36 = ___destination1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_37 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0110;
		}
	}
	{
		RenderTexture_t2108887433 * L_38 = V_0;
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
	}

IL_0110:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.ImageEffects.Tonemapping::.ctor()
extern "C"  void Tonemapping__ctor_m3025441895 (Tonemapping_t2837480251 * __this, const RuntimeMethod* method)
{
	{
		__this->set_type_6(3);
		__this->set_adaptiveTextureSize_7(((int32_t)256));
		__this->set_exposureAdjustment_10((1.5f));
		__this->set_middleGrey_11((0.4f));
		__this->set_white_12((2.0f));
		__this->set_adaptionSpeed_13((1.5f));
		__this->set_validRenderTextureFormat_15((bool)1);
		__this->set_rtFormat_18(2);
		PostEffectsBase__ctor_m3249494038(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::CheckResources()
extern "C"  bool Tonemapping_CheckResources_m3600518521 (Tonemapping_t2837480251 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tonemapping_CheckResources_m3600518521_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PostEffectsBase_CheckSupport_m533724629(__this, (bool)0, (bool)1, /*hidden argument*/NULL);
		Shader_t4151988712 * L_0 = __this->get_tonemapper_14();
		Material_t340375123 * L_1 = __this->get_tonemapMaterial_16();
		Material_t340375123 * L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m242186546(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->set_tonemapMaterial_16(L_2);
		Texture2D_t3840446185 * L_3 = __this->get_curveTex_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_5 = __this->get_type_6();
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0076;
		}
	}
	{
		Texture2D_t3840446185 * L_6 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m1269666504(L_6, ((int32_t)256), 1, 5, (bool)0, (bool)1, /*hidden argument*/NULL);
		__this->set_curveTex_9(L_6);
		Texture2D_t3840446185 * L_7 = __this->get_curveTex_9();
		NullCheck(L_7);
		Texture_set_filterMode_m3078068058(L_7, 1, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_8 = __this->get_curveTex_9();
		NullCheck(L_8);
		Texture_set_wrapMode_m587872754(L_8, 1, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_9 = __this->get_curveTex_9();
		NullCheck(L_9);
		Object_set_hideFlags_m1648752846(L_9, ((int32_t)52), /*hidden argument*/NULL);
	}

IL_0076:
	{
		bool L_10 = ((PostEffectsBase_t2404315739 *)__this)->get_isSupported_4();
		if (L_10)
		{
			goto IL_0087;
		}
	}
	{
		PostEffectsBase_ReportAutoDisable_m412809422(__this, /*hidden argument*/NULL);
	}

IL_0087:
	{
		bool L_11 = ((PostEffectsBase_t2404315739 *)__this)->get_isSupported_4();
		return L_11;
	}
}
// System.Single UnityStandardAssets.ImageEffects.Tonemapping::UpdateCurve()
extern "C"  float Tonemapping_UpdateCurve_m2076606369 (Tonemapping_t2837480251 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tonemapping_UpdateCurve_m2076606369_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Keyframe_t4206410242  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		V_0 = (1.0f);
		AnimationCurve_t3046754366 * L_0 = __this->get_remapCurve_8();
		NullCheck(L_0);
		KeyframeU5BU5D_t1068524471* L_1 = AnimationCurve_get_keys_m1672862131(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}
	{
		KeyframeU5BU5D_t1068524471* L_2 = ((KeyframeU5BU5D_t1068524471*)SZArrayNew(KeyframeU5BU5D_t1068524471_il2cpp_TypeInfo_var, (uint32_t)2));
		NullCheck(L_2);
		Keyframe_t4206410242  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Keyframe__ctor_m391431887((&L_3), (0.0f), (0.0f), /*hidden argument*/NULL);
		*(Keyframe_t4206410242 *)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_3;
		KeyframeU5BU5D_t1068524471* L_4 = L_2;
		NullCheck(L_4);
		Keyframe_t4206410242  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Keyframe__ctor_m391431887((&L_5), (2.0f), (1.0f), /*hidden argument*/NULL);
		*(Keyframe_t4206410242 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_5;
		AnimationCurve_t3046754366 * L_6 = (AnimationCurve_t3046754366 *)il2cpp_codegen_object_new(AnimationCurve_t3046754366_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m1565662948(L_6, L_4, /*hidden argument*/NULL);
		__this->set_remapCurve_8(L_6);
	}

IL_0060:
	{
		AnimationCurve_t3046754366 * L_7 = __this->get_remapCurve_8();
		if (!L_7)
		{
			goto IL_00fc;
		}
	}
	{
		AnimationCurve_t3046754366 * L_8 = __this->get_remapCurve_8();
		NullCheck(L_8);
		int32_t L_9 = AnimationCurve_get_length_m1548433259(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_009d;
		}
	}
	{
		AnimationCurve_t3046754366 * L_10 = __this->get_remapCurve_8();
		AnimationCurve_t3046754366 * L_11 = __this->get_remapCurve_8();
		NullCheck(L_11);
		int32_t L_12 = AnimationCurve_get_length_m1548433259(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Keyframe_t4206410242  L_13 = AnimationCurve_get_Item_m4209227769(L_10, ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_13;
		float L_14 = Keyframe_get_time_m803196188((&V_1), /*hidden argument*/NULL);
		V_0 = L_14;
	}

IL_009d:
	{
		V_2 = (0.0f);
		goto IL_00e6;
	}

IL_00a8:
	{
		AnimationCurve_t3046754366 * L_15 = __this->get_remapCurve_8();
		float L_16 = V_2;
		float L_17 = V_0;
		NullCheck(L_15);
		float L_18 = AnimationCurve_Evaluate_m2125563588(L_15, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_16, (float)(1.0f))), (float)L_17)), /*hidden argument*/NULL);
		V_3 = L_18;
		Texture2D_t3840446185 * L_19 = __this->get_curveTex_9();
		float L_20 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_21 = floorf(((float)il2cpp_codegen_multiply((float)L_20, (float)(255.0f))));
		float L_22 = V_3;
		float L_23 = V_3;
		float L_24 = V_3;
		Color_t2555686324  L_25;
		memset(&L_25, 0, sizeof(L_25));
		Color__ctor_m286683560((&L_25), L_22, L_23, L_24, /*hidden argument*/NULL);
		NullCheck(L_19);
		Texture2D_SetPixel_m2984741184(L_19, (((int32_t)((int32_t)L_21))), 0, L_25, /*hidden argument*/NULL);
		float L_26 = V_2;
		V_2 = ((float)il2cpp_codegen_add((float)L_26, (float)(0.003921569f)));
	}

IL_00e6:
	{
		float L_27 = V_2;
		if ((((float)L_27) <= ((float)(1.0f))))
		{
			goto IL_00a8;
		}
	}
	{
		Texture2D_t3840446185 * L_28 = __this->get_curveTex_9();
		NullCheck(L_28);
		Texture2D_Apply_m2271746283(L_28, /*hidden argument*/NULL);
	}

IL_00fc:
	{
		float L_29 = V_0;
		return ((float)((float)(1.0f)/(float)L_29));
	}
}
// System.Void UnityStandardAssets.ImageEffects.Tonemapping::OnDisable()
extern "C"  void Tonemapping_OnDisable_m2152428322 (Tonemapping_t2837480251 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tonemapping_OnDisable_m2152428322_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RenderTexture_t2108887433 * L_0 = __this->get_rt_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RenderTexture_t2108887433 * L_2 = __this->get_rt_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m3193525861(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_rt_17((RenderTexture_t2108887433 *)NULL);
	}

IL_0022:
	{
		Material_t340375123 * L_3 = __this->get_tonemapMaterial_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		Material_t340375123 * L_5 = __this->get_tonemapMaterial_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m3193525861(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->set_tonemapMaterial_16((Material_t340375123 *)NULL);
	}

IL_0044:
	{
		Texture2D_t3840446185 * L_6 = __this->get_curveTex_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		Texture2D_t3840446185 * L_8 = __this->get_curveTex_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m3193525861(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		__this->set_curveTex_9((Texture2D_t3840446185 *)NULL);
	}

IL_0066:
	{
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::CreateInternalRenderTexture()
extern "C"  bool Tonemapping_CreateInternalRenderTexture_m2587854304 (Tonemapping_t2837480251 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tonemapping_CreateInternalRenderTexture_m2587854304_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tonemapping_t2837480251 * G_B4_0 = NULL;
	Tonemapping_t2837480251 * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	Tonemapping_t2837480251 * G_B5_1 = NULL;
	{
		RenderTexture_t2108887433 * L_0 = __this->get_rt_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		bool L_2 = SystemInfo_SupportsRenderTextureFormat_m1663449629(NULL /*static, unused*/, ((int32_t)13), /*hidden argument*/NULL);
		G_B3_0 = __this;
		if (!L_2)
		{
			G_B4_0 = __this;
			goto IL_0026;
		}
	}
	{
		G_B5_0 = ((int32_t)13);
		G_B5_1 = G_B3_0;
		goto IL_0027;
	}

IL_0026:
	{
		G_B5_0 = 2;
		G_B5_1 = G_B4_0;
	}

IL_0027:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_rtFormat_18(G_B5_0);
		int32_t L_3 = __this->get_rtFormat_18();
		RenderTexture_t2108887433 * L_4 = (RenderTexture_t2108887433 *)il2cpp_codegen_object_new(RenderTexture_t2108887433_il2cpp_TypeInfo_var);
		RenderTexture__ctor_m2187158709(L_4, 1, 1, 0, L_3, /*hidden argument*/NULL);
		__this->set_rt_17(L_4);
		RenderTexture_t2108887433 * L_5 = __this->get_rt_17();
		NullCheck(L_5);
		Object_set_hideFlags_m1648752846(L_5, ((int32_t)52), /*hidden argument*/NULL);
		return (bool)1;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Tonemapping::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Tonemapping_OnRenderImage_m3080456075 (Tonemapping_t2837480251 * __this, RenderTexture_t2108887433 * ___source0, RenderTexture_t2108887433 * ___destination1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tonemapping_OnRenderImage_m3080456075_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	RenderTexture_t2108887433 * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RenderTextureU5BU5D_t4111643188* V_5 = NULL;
	int32_t V_6 = 0;
	RenderTexture_t2108887433 * V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Tonemapping_t2837480251 * G_B4_0 = NULL;
	Tonemapping_t2837480251 * G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	Tonemapping_t2837480251 * G_B5_1 = NULL;
	Tonemapping_t2837480251 * G_B29_0 = NULL;
	Tonemapping_t2837480251 * G_B28_0 = NULL;
	float G_B30_0 = 0.0f;
	Tonemapping_t2837480251 * G_B30_1 = NULL;
	Material_t340375123 * G_B32_0 = NULL;
	RenderTexture_t2108887433 * G_B32_1 = NULL;
	RenderTexture_t2108887433 * G_B32_2 = NULL;
	Material_t340375123 * G_B31_0 = NULL;
	RenderTexture_t2108887433 * G_B31_1 = NULL;
	RenderTexture_t2108887433 * G_B31_2 = NULL;
	int32_t G_B33_0 = 0;
	Material_t340375123 * G_B33_1 = NULL;
	RenderTexture_t2108887433 * G_B33_2 = NULL;
	RenderTexture_t2108887433 * G_B33_3 = NULL;
	Tonemapping_t2837480251 * G_B35_0 = NULL;
	Tonemapping_t2837480251 * G_B34_0 = NULL;
	float G_B36_0 = 0.0f;
	Tonemapping_t2837480251 * G_B36_1 = NULL;
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RenderTexture_t2108887433 * L_1 = ___source0;
		RenderTexture_t2108887433 * L_2 = ___destination1;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m1336850842(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		float L_3 = __this->get_exposureAdjustment_10();
		G_B3_0 = __this;
		if ((!(((float)L_3) < ((float)(0.001f)))))
		{
			G_B4_0 = __this;
			goto IL_002e;
		}
	}
	{
		G_B5_0 = (0.001f);
		G_B5_1 = G_B3_0;
		goto IL_0034;
	}

IL_002e:
	{
		float L_4 = __this->get_exposureAdjustment_10();
		G_B5_0 = L_4;
		G_B5_1 = G_B4_0;
	}

IL_0034:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_exposureAdjustment_10(G_B5_0);
		int32_t L_5 = __this->get_type_6();
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0082;
		}
	}
	{
		float L_6 = Tonemapping_UpdateCurve_m2076606369(__this, /*hidden argument*/NULL);
		V_0 = L_6;
		Material_t340375123 * L_7 = __this->get_tonemapMaterial_16();
		float L_8 = V_0;
		NullCheck(L_7);
		Material_SetFloat_m3226510453(L_7, _stringLiteral3711134867, L_8, /*hidden argument*/NULL);
		Material_t340375123 * L_9 = __this->get_tonemapMaterial_16();
		Texture2D_t3840446185 * L_10 = __this->get_curveTex_9();
		NullCheck(L_9);
		Material_SetTexture_m1829349465(L_9, _stringLiteral56112754, L_10, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_11 = ___source0;
		RenderTexture_t2108887433 * L_12 = ___destination1;
		Material_t340375123 * L_13 = __this->get_tonemapMaterial_16();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m4126770912(NULL /*static, unused*/, L_11, L_12, L_13, 4, /*hidden argument*/NULL);
		return;
	}

IL_0082:
	{
		int32_t L_14 = __this->get_type_6();
		if (L_14)
		{
			goto IL_00b2;
		}
	}
	{
		Material_t340375123 * L_15 = __this->get_tonemapMaterial_16();
		float L_16 = __this->get_exposureAdjustment_10();
		NullCheck(L_15);
		Material_SetFloat_m3226510453(L_15, _stringLiteral2208124131, L_16, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_17 = ___source0;
		RenderTexture_t2108887433 * L_18 = ___destination1;
		Material_t340375123 * L_19 = __this->get_tonemapMaterial_16();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m4126770912(NULL /*static, unused*/, L_17, L_18, L_19, 6, /*hidden argument*/NULL);
		return;
	}

IL_00b2:
	{
		int32_t L_20 = __this->get_type_6();
		if ((!(((uint32_t)L_20) == ((uint32_t)2))))
		{
			goto IL_00e3;
		}
	}
	{
		Material_t340375123 * L_21 = __this->get_tonemapMaterial_16();
		float L_22 = __this->get_exposureAdjustment_10();
		NullCheck(L_21);
		Material_SetFloat_m3226510453(L_21, _stringLiteral2208124131, L_22, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_23 = ___source0;
		RenderTexture_t2108887433 * L_24 = ___destination1;
		Material_t340375123 * L_25 = __this->get_tonemapMaterial_16();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m4126770912(NULL /*static, unused*/, L_23, L_24, L_25, 5, /*hidden argument*/NULL);
		return;
	}

IL_00e3:
	{
		int32_t L_26 = __this->get_type_6();
		if ((!(((uint32_t)L_26) == ((uint32_t)3))))
		{
			goto IL_0114;
		}
	}
	{
		Material_t340375123 * L_27 = __this->get_tonemapMaterial_16();
		float L_28 = __this->get_exposureAdjustment_10();
		NullCheck(L_27);
		Material_SetFloat_m3226510453(L_27, _stringLiteral2208124131, L_28, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_29 = ___source0;
		RenderTexture_t2108887433 * L_30 = ___destination1;
		Material_t340375123 * L_31 = __this->get_tonemapMaterial_16();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m4126770912(NULL /*static, unused*/, L_29, L_30, L_31, 8, /*hidden argument*/NULL);
		return;
	}

IL_0114:
	{
		int32_t L_32 = __this->get_type_6();
		if ((!(((uint32_t)L_32) == ((uint32_t)4))))
		{
			goto IL_014b;
		}
	}
	{
		Material_t340375123 * L_33 = __this->get_tonemapMaterial_16();
		float L_34 = __this->get_exposureAdjustment_10();
		NullCheck(L_33);
		Material_SetFloat_m3226510453(L_33, _stringLiteral2208124131, ((float)il2cpp_codegen_multiply((float)(0.5f), (float)L_34)), /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_35 = ___source0;
		RenderTexture_t2108887433 * L_36 = ___destination1;
		Material_t340375123 * L_37 = __this->get_tonemapMaterial_16();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m4126770912(NULL /*static, unused*/, L_35, L_36, L_37, 7, /*hidden argument*/NULL);
		return;
	}

IL_014b:
	{
		bool L_38 = Tonemapping_CreateInternalRenderTexture_m2587854304(__this, /*hidden argument*/NULL);
		V_1 = L_38;
		int32_t L_39 = __this->get_adaptiveTextureSize_7();
		int32_t L_40 = __this->get_adaptiveTextureSize_7();
		int32_t L_41 = __this->get_rtFormat_18();
		RenderTexture_t2108887433 * L_42 = RenderTexture_GetTemporary_m3378328322(NULL /*static, unused*/, L_39, L_40, 0, L_41, /*hidden argument*/NULL);
		V_2 = L_42;
		RenderTexture_t2108887433 * L_43 = ___source0;
		RenderTexture_t2108887433 * L_44 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m1336850842(NULL /*static, unused*/, L_43, L_44, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_45 = V_2;
		NullCheck(L_45);
		int32_t L_46 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_45);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_47 = Mathf_Log_m2177375338(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)(((float)((float)L_46))), (float)(1.0f))), (2.0f), /*hidden argument*/NULL);
		V_3 = (((int32_t)((int32_t)L_47)));
		V_4 = 2;
		int32_t L_48 = V_3;
		V_5 = ((RenderTextureU5BU5D_t4111643188*)SZArrayNew(RenderTextureU5BU5D_t4111643188_il2cpp_TypeInfo_var, (uint32_t)L_48));
		V_6 = 0;
		goto IL_01cd;
	}

IL_019e:
	{
		RenderTextureU5BU5D_t4111643188* L_49 = V_5;
		int32_t L_50 = V_6;
		RenderTexture_t2108887433 * L_51 = V_2;
		NullCheck(L_51);
		int32_t L_52 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_51);
		int32_t L_53 = V_4;
		RenderTexture_t2108887433 * L_54 = V_2;
		NullCheck(L_54);
		int32_t L_55 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_54);
		int32_t L_56 = V_4;
		int32_t L_57 = __this->get_rtFormat_18();
		RenderTexture_t2108887433 * L_58 = RenderTexture_GetTemporary_m3378328322(NULL /*static, unused*/, ((int32_t)((int32_t)L_52/(int32_t)L_53)), ((int32_t)((int32_t)L_55/(int32_t)L_56)), 0, L_57, /*hidden argument*/NULL);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_58);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(L_50), (RenderTexture_t2108887433 *)L_58);
		int32_t L_59 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_59, (int32_t)2));
		int32_t L_60 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
	}

IL_01cd:
	{
		int32_t L_61 = V_6;
		int32_t L_62 = V_3;
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_019e;
		}
	}
	{
		RenderTextureU5BU5D_t4111643188* L_63 = V_5;
		int32_t L_64 = V_3;
		NullCheck(L_63);
		int32_t L_65 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_64, (int32_t)1));
		RenderTexture_t2108887433 * L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_7 = L_66;
		RenderTexture_t2108887433 * L_67 = V_2;
		RenderTextureU5BU5D_t4111643188* L_68 = V_5;
		NullCheck(L_68);
		int32_t L_69 = 0;
		RenderTexture_t2108887433 * L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		Material_t340375123 * L_71 = __this->get_tonemapMaterial_16();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m4126770912(NULL /*static, unused*/, L_67, L_70, L_71, 1, /*hidden argument*/NULL);
		int32_t L_72 = __this->get_type_6();
		if ((!(((uint32_t)L_72) == ((uint32_t)6))))
		{
			goto IL_0239;
		}
	}
	{
		V_8 = 0;
		goto IL_022a;
	}

IL_0202:
	{
		RenderTextureU5BU5D_t4111643188* L_73 = V_5;
		int32_t L_74 = V_8;
		NullCheck(L_73);
		int32_t L_75 = L_74;
		RenderTexture_t2108887433 * L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		RenderTextureU5BU5D_t4111643188* L_77 = V_5;
		int32_t L_78 = V_8;
		NullCheck(L_77);
		int32_t L_79 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1));
		RenderTexture_t2108887433 * L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		Material_t340375123 * L_81 = __this->get_tonemapMaterial_16();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m4126770912(NULL /*static, unused*/, L_76, L_80, L_81, ((int32_t)9), /*hidden argument*/NULL);
		RenderTextureU5BU5D_t4111643188* L_82 = V_5;
		int32_t L_83 = V_8;
		NullCheck(L_82);
		int32_t L_84 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)1));
		RenderTexture_t2108887433 * L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		V_7 = L_85;
		int32_t L_86 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)1));
	}

IL_022a:
	{
		int32_t L_87 = V_8;
		int32_t L_88 = V_3;
		if ((((int32_t)L_87) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_88, (int32_t)1)))))
		{
			goto IL_0202;
		}
	}
	{
		goto IL_0277;
	}

IL_0239:
	{
		int32_t L_89 = __this->get_type_6();
		if ((!(((uint32_t)L_89) == ((uint32_t)5))))
		{
			goto IL_0277;
		}
	}
	{
		V_9 = 0;
		goto IL_026d;
	}

IL_024d:
	{
		RenderTextureU5BU5D_t4111643188* L_90 = V_5;
		int32_t L_91 = V_9;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		RenderTexture_t2108887433 * L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		RenderTextureU5BU5D_t4111643188* L_94 = V_5;
		int32_t L_95 = V_9;
		NullCheck(L_94);
		int32_t L_96 = ((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1));
		RenderTexture_t2108887433 * L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m1336850842(NULL /*static, unused*/, L_93, L_97, /*hidden argument*/NULL);
		RenderTextureU5BU5D_t4111643188* L_98 = V_5;
		int32_t L_99 = V_9;
		NullCheck(L_98);
		int32_t L_100 = ((int32_t)il2cpp_codegen_add((int32_t)L_99, (int32_t)1));
		RenderTexture_t2108887433 * L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		V_7 = L_101;
		int32_t L_102 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_102, (int32_t)1));
	}

IL_026d:
	{
		int32_t L_103 = V_9;
		int32_t L_104 = V_3;
		if ((((int32_t)L_103) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_104, (int32_t)1)))))
		{
			goto IL_024d;
		}
	}

IL_0277:
	{
		float L_105 = __this->get_adaptionSpeed_13();
		G_B28_0 = __this;
		if ((!(((float)L_105) < ((float)(0.001f)))))
		{
			G_B29_0 = __this;
			goto IL_0292;
		}
	}
	{
		G_B30_0 = (0.001f);
		G_B30_1 = G_B28_0;
		goto IL_0298;
	}

IL_0292:
	{
		float L_106 = __this->get_adaptionSpeed_13();
		G_B30_0 = L_106;
		G_B30_1 = G_B29_0;
	}

IL_0298:
	{
		NullCheck(G_B30_1);
		G_B30_1->set_adaptionSpeed_13(G_B30_0);
		Material_t340375123 * L_107 = __this->get_tonemapMaterial_16();
		float L_108 = __this->get_adaptionSpeed_13();
		NullCheck(L_107);
		Material_SetFloat_m3226510453(L_107, _stringLiteral1177274495, L_108, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_109 = __this->get_rt_17();
		NullCheck(L_109);
		RenderTexture_MarkRestoreExpected_m1721809840(L_109, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_110 = V_7;
		RenderTexture_t2108887433 * L_111 = __this->get_rt_17();
		Material_t340375123 * L_112 = __this->get_tonemapMaterial_16();
		bool L_113 = V_1;
		G_B31_0 = L_112;
		G_B31_1 = L_111;
		G_B31_2 = L_110;
		if (!L_113)
		{
			G_B32_0 = L_112;
			G_B32_1 = L_111;
			G_B32_2 = L_110;
			goto IL_02d8;
		}
	}
	{
		G_B33_0 = 3;
		G_B33_1 = G_B31_0;
		G_B33_2 = G_B31_1;
		G_B33_3 = G_B31_2;
		goto IL_02d9;
	}

IL_02d8:
	{
		G_B33_0 = 2;
		G_B33_1 = G_B32_0;
		G_B33_2 = G_B32_1;
		G_B33_3 = G_B32_2;
	}

IL_02d9:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m4126770912(NULL /*static, unused*/, G_B33_3, G_B33_2, G_B33_1, G_B33_0, /*hidden argument*/NULL);
		float L_114 = __this->get_middleGrey_11();
		G_B34_0 = __this;
		if ((!(((float)L_114) < ((float)(0.001f)))))
		{
			G_B35_0 = __this;
			goto IL_02f9;
		}
	}
	{
		G_B36_0 = (0.001f);
		G_B36_1 = G_B34_0;
		goto IL_02ff;
	}

IL_02f9:
	{
		float L_115 = __this->get_middleGrey_11();
		G_B36_0 = L_115;
		G_B36_1 = G_B35_0;
	}

IL_02ff:
	{
		NullCheck(G_B36_1);
		G_B36_1->set_middleGrey_11(G_B36_0);
		Material_t340375123 * L_116 = __this->get_tonemapMaterial_16();
		float L_117 = __this->get_middleGrey_11();
		float L_118 = __this->get_middleGrey_11();
		float L_119 = __this->get_middleGrey_11();
		float L_120 = __this->get_white_12();
		float L_121 = __this->get_white_12();
		Vector4_t3319028937  L_122;
		memset(&L_122, 0, sizeof(L_122));
		Vector4__ctor_m2498754347((&L_122), L_117, L_118, L_119, ((float)il2cpp_codegen_multiply((float)L_120, (float)L_121)), /*hidden argument*/NULL);
		NullCheck(L_116);
		Material_SetVector_m4214217286(L_116, _stringLiteral812496408, L_122, /*hidden argument*/NULL);
		Material_t340375123 * L_123 = __this->get_tonemapMaterial_16();
		RenderTexture_t2108887433 * L_124 = __this->get_rt_17();
		NullCheck(L_123);
		Material_SetTexture_m1829349465(L_123, _stringLiteral2267843788, L_124, /*hidden argument*/NULL);
		int32_t L_125 = __this->get_type_6();
		if ((!(((uint32_t)L_125) == ((uint32_t)5))))
		{
			goto IL_036d;
		}
	}
	{
		RenderTexture_t2108887433 * L_126 = ___source0;
		RenderTexture_t2108887433 * L_127 = ___destination1;
		Material_t340375123 * L_128 = __this->get_tonemapMaterial_16();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m4126770912(NULL /*static, unused*/, L_126, L_127, L_128, 0, /*hidden argument*/NULL);
		goto IL_039e;
	}

IL_036d:
	{
		int32_t L_129 = __this->get_type_6();
		if ((!(((uint32_t)L_129) == ((uint32_t)6))))
		{
			goto IL_038d;
		}
	}
	{
		RenderTexture_t2108887433 * L_130 = ___source0;
		RenderTexture_t2108887433 * L_131 = ___destination1;
		Material_t340375123 * L_132 = __this->get_tonemapMaterial_16();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m4126770912(NULL /*static, unused*/, L_130, L_131, L_132, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_039e;
	}

IL_038d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral486078342, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_133 = ___source0;
		RenderTexture_t2108887433 * L_134 = ___destination1;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m1336850842(NULL /*static, unused*/, L_133, L_134, /*hidden argument*/NULL);
	}

IL_039e:
	{
		V_10 = 0;
		goto IL_03b6;
	}

IL_03a6:
	{
		RenderTextureU5BU5D_t4111643188* L_135 = V_5;
		int32_t L_136 = V_10;
		NullCheck(L_135);
		int32_t L_137 = L_136;
		RenderTexture_t2108887433 * L_138 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_138, /*hidden argument*/NULL);
		int32_t L_139 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_139, (int32_t)1));
	}

IL_03b6:
	{
		int32_t L_140 = V_10;
		int32_t L_141 = V_3;
		if ((((int32_t)L_140) < ((int32_t)L_141)))
		{
			goto IL_03a6;
		}
	}
	{
		RenderTexture_t2108887433 * L_142 = V_2;
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_142, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.ImageEffects.Triangles::.ctor()
extern "C"  void Triangles__ctor_m3521099058 (Triangles_t2090031681 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.Triangles::HasMeshes()
extern "C"  bool Triangles_HasMeshes_m1063919596 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Triangles_HasMeshes_m1063919596_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_0 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		V_0 = 0;
		goto IL_002b;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_1 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Mesh_t3648964284 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		return (bool)0;
	}

IL_0027:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_002b:
	{
		int32_t L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_8 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_0013;
		}
	}
	{
		return (bool)1;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Triangles::Cleanup()
extern "C"  void Triangles_Cleanup_m1309207721 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Triangles_Cleanup_m1309207721_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_0 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		V_0 = 0;
		goto IL_003c;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_1 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Mesh_t3648964284 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, (Object_t631007953 *)NULL, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_6 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Mesh_t3648964284 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m3193525861(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		MeshU5BU5D_t3972987605* L_10 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, NULL);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Mesh_t3648964284 *)NULL);
	}

IL_0038:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_003c:
	{
		int32_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_14 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->set_meshes_0((MeshU5BU5D_t3972987605*)NULL);
		return;
	}
}
// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Triangles::GetMeshes(System.Int32,System.Int32)
extern "C"  MeshU5BU5D_t3972987605* Triangles_GetMeshes_m3491158630 (RuntimeObject * __this /* static, unused */, int32_t ___totalWidth0, int32_t ___totalHeight1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Triangles_GetMeshes_m3491158630_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		bool L_0 = Triangles_HasMeshes_m1063919596(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_currentTris_1();
		int32_t L_2 = ___totalWidth0;
		int32_t L_3 = ___totalHeight1;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3))))))
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_4 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		return L_4;
	}

IL_001d:
	{
		V_0 = ((int32_t)21666);
		int32_t L_5 = ___totalWidth0;
		int32_t L_6 = ___totalHeight1;
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)L_6));
		int32_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->set_currentTris_1(L_7);
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_10 = Mathf_CeilToInt_m432108984(NULL /*static, unused*/, ((float)((float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)(((float)((float)L_8)))))/(float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)(((float)((float)L_9))))))), /*hidden argument*/NULL);
		V_2 = L_10;
		int32_t L_11 = V_2;
		((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->set_meshes_0(((MeshU5BU5D_t3972987605*)SZArrayNew(MeshU5BU5D_t3972987605_il2cpp_TypeInfo_var, (uint32_t)L_11)));
		V_3 = 0;
		V_4 = 0;
		V_3 = 0;
		goto IL_0089;
	}

IL_005b:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_3;
		int32_t L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_15 = Mathf_Clamp_m2756574208(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_13)), 0, L_14, /*hidden argument*/NULL);
		int32_t L_16 = Mathf_FloorToInt_m1870542928(NULL /*static, unused*/, (((float)((float)L_15))), /*hidden argument*/NULL);
		V_5 = L_16;
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_17 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		int32_t L_18 = V_4;
		int32_t L_19 = V_5;
		int32_t L_20 = V_3;
		int32_t L_21 = ___totalWidth0;
		int32_t L_22 = ___totalHeight1;
		Mesh_t3648964284 * L_23 = Triangles_GetMesh_m1896089306(NULL /*static, unused*/, L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_23);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (Mesh_t3648964284 *)L_23);
		int32_t L_24 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		int32_t L_25 = V_3;
		int32_t L_26 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)L_26));
	}

IL_0089:
	{
		int32_t L_27 = V_3;
		int32_t L_28 = V_1;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_005b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t2090031681_il2cpp_TypeInfo_var);
		MeshU5BU5D_t3972987605* L_29 = ((Triangles_t2090031681_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t2090031681_il2cpp_TypeInfo_var))->get_meshes_0();
		return L_29;
	}
}
// UnityEngine.Mesh UnityStandardAssets.ImageEffects.Triangles::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  Mesh_t3648964284 * Triangles_GetMesh_m1896089306 (RuntimeObject * __this /* static, unused */, int32_t ___triCount0, int32_t ___triOffset1, int32_t ___totalWidth2, int32_t ___totalHeight3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Triangles_GetMesh_m1896089306_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t3648964284 * V_0 = NULL;
	Vector3U5BU5D_t1718750761* V_1 = NULL;
	Vector2U5BU5D_t1457185986* V_2 = NULL;
	Vector2U5BU5D_t1457185986* V_3 = NULL;
	Int32U5BU5D_t385246372* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Vector3_t3722313464  V_10;
	memset(&V_10, 0, sizeof(V_10));
	{
		Mesh_t3648964284 * L_0 = (Mesh_t3648964284 *)il2cpp_codegen_object_new(Mesh_t3648964284_il2cpp_TypeInfo_var);
		Mesh__ctor_m2533762929(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Mesh_t3648964284 * L_1 = V_0;
		NullCheck(L_1);
		Object_set_hideFlags_m1648752846(L_1, ((int32_t)52), /*hidden argument*/NULL);
		int32_t L_2 = ___triCount0;
		V_1 = ((Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)3))));
		int32_t L_3 = ___triCount0;
		V_2 = ((Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)3))));
		int32_t L_4 = ___triCount0;
		V_3 = ((Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)3))));
		int32_t L_5 = ___triCount0;
		V_4 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)3))));
		V_5 = 0;
		goto IL_017f;
	}

IL_003b:
	{
		int32_t L_6 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)3));
		int32_t L_7 = ___triOffset1;
		int32_t L_8 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8));
		int32_t L_9 = V_7;
		int32_t L_10 = ___totalWidth2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_11 = floorf((((float)((float)((int32_t)((int32_t)L_9%(int32_t)L_10))))));
		int32_t L_12 = ___totalWidth2;
		V_8 = ((float)((float)L_11/(float)(((float)((float)L_12)))));
		int32_t L_13 = V_7;
		int32_t L_14 = ___totalWidth2;
		float L_15 = floorf((((float)((float)((int32_t)((int32_t)L_13/(int32_t)L_14))))));
		int32_t L_16 = ___totalHeight3;
		V_9 = ((float)((float)L_15/(float)(((float)((float)L_16)))));
		float L_17 = V_8;
		float L_18 = V_9;
		Vector3__ctor_m3353183577((&V_10), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_17, (float)(2.0f))), (float)(1.0f))), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_18, (float)(2.0f))), (float)(1.0f))), (1.0f), /*hidden argument*/NULL);
		Vector3U5BU5D_t1718750761* L_19 = V_1;
		int32_t L_20 = V_6;
		NullCheck(L_19);
		Vector3_t3722313464  L_21 = V_10;
		*(Vector3_t3722313464 *)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))) = L_21;
		Vector3U5BU5D_t1718750761* L_22 = V_1;
		int32_t L_23 = V_6;
		NullCheck(L_22);
		Vector3_t3722313464  L_24 = V_10;
		*(Vector3_t3722313464 *)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1))))) = L_24;
		Vector3U5BU5D_t1718750761* L_25 = V_1;
		int32_t L_26 = V_6;
		NullCheck(L_25);
		Vector3_t3722313464  L_27 = V_10;
		*(Vector3_t3722313464 *)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)2))))) = L_27;
		Vector2U5BU5D_t1457185986* L_28 = V_2;
		int32_t L_29 = V_6;
		NullCheck(L_28);
		Vector2_t2156229523  L_30;
		memset(&L_30, 0, sizeof(L_30));
		Vector2__ctor_m3970636864((&L_30), (0.0f), (0.0f), /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))) = L_30;
		Vector2U5BU5D_t1457185986* L_31 = V_2;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		Vector2_t2156229523  L_33;
		memset(&L_33, 0, sizeof(L_33));
		Vector2__ctor_m3970636864((&L_33), (1.0f), (0.0f), /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1))))) = L_33;
		Vector2U5BU5D_t1457185986* L_34 = V_2;
		int32_t L_35 = V_6;
		NullCheck(L_34);
		Vector2_t2156229523  L_36;
		memset(&L_36, 0, sizeof(L_36));
		Vector2__ctor_m3970636864((&L_36), (0.0f), (1.0f), /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)2))))) = L_36;
		Vector2U5BU5D_t1457185986* L_37 = V_3;
		int32_t L_38 = V_6;
		NullCheck(L_37);
		float L_39 = V_8;
		float L_40 = V_9;
		Vector2_t2156229523  L_41;
		memset(&L_41, 0, sizeof(L_41));
		Vector2__ctor_m3970636864((&L_41), L_39, L_40, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38))) = L_41;
		Vector2U5BU5D_t1457185986* L_42 = V_3;
		int32_t L_43 = V_6;
		NullCheck(L_42);
		float L_44 = V_8;
		float L_45 = V_9;
		Vector2_t2156229523  L_46;
		memset(&L_46, 0, sizeof(L_46));
		Vector2__ctor_m3970636864((&L_46), L_44, L_45, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1))))) = L_46;
		Vector2U5BU5D_t1457185986* L_47 = V_3;
		int32_t L_48 = V_6;
		NullCheck(L_47);
		float L_49 = V_8;
		float L_50 = V_9;
		Vector2_t2156229523  L_51;
		memset(&L_51, 0, sizeof(L_51));
		Vector2__ctor_m3970636864((&L_51), L_49, L_50, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)2))))) = L_51;
		Int32U5BU5D_t385246372* L_52 = V_4;
		int32_t L_53 = V_6;
		int32_t L_54 = V_6;
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (int32_t)L_54);
		Int32U5BU5D_t385246372* L_55 = V_4;
		int32_t L_56 = V_6;
		int32_t L_57 = V_6;
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1)));
		Int32U5BU5D_t385246372* L_58 = V_4;
		int32_t L_59 = V_6;
		int32_t L_60 = V_6;
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)2))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)2)));
		int32_t L_61 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
	}

IL_017f:
	{
		int32_t L_62 = V_5;
		int32_t L_63 = ___triCount0;
		if ((((int32_t)L_62) < ((int32_t)L_63)))
		{
			goto IL_003b;
		}
	}
	{
		Mesh_t3648964284 * L_64 = V_0;
		Vector3U5BU5D_t1718750761* L_65 = V_1;
		NullCheck(L_64);
		Mesh_set_vertices_m2084450642(L_64, L_65, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_66 = V_0;
		Int32U5BU5D_t385246372* L_67 = V_4;
		NullCheck(L_66);
		Mesh_set_triangles_m255556250(L_66, L_67, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_68 = V_0;
		Vector2U5BU5D_t1457185986* L_69 = V_2;
		NullCheck(L_68);
		Mesh_set_uv_m1258646872(L_68, L_69, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_70 = V_0;
		Vector2U5BU5D_t1457185986* L_71 = V_3;
		NullCheck(L_70);
		Mesh_set_uv2_m2840654016(L_70, L_71, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_72 = V_0;
		return L_72;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Triangles::.cctor()
extern "C"  void Triangles__cctor_m11028289 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.ImageEffects.Twirl::.ctor()
extern "C"  void Twirl__ctor_m790112101 (Twirl_t2760508880 * __this, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector2__ctor_m3970636864((&L_0), (0.3f), (0.3f), /*hidden argument*/NULL);
		__this->set_radius_4(L_0);
		__this->set_angle_5((50.0f));
		Vector2_t2156229523  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector2__ctor_m3970636864((&L_1), (0.5f), (0.5f), /*hidden argument*/NULL);
		__this->set_center_6(L_1);
		ImageEffectBase__ctor_m3682424896(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Twirl::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Twirl_OnRenderImage_m3285159984 (Twirl_t2760508880 * __this, RenderTexture_t2108887433 * ___source0, RenderTexture_t2108887433 * ___destination1, const RuntimeMethod* method)
{
	{
		Material_t340375123 * L_0 = ImageEffectBase_get_material_m3574076220(__this, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_1 = ___source0;
		RenderTexture_t2108887433 * L_2 = ___destination1;
		float L_3 = __this->get_angle_5();
		Vector2_t2156229523  L_4 = __this->get_center_6();
		Vector2_t2156229523  L_5 = __this->get_radius_4();
		ImageEffects_RenderDistortion_m2367323920(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::.ctor()
extern "C"  void VignetteAndChromaticAberration__ctor_m1547855563 (VignetteAndChromaticAberration_t3308099924 * __this, const RuntimeMethod* method)
{
	{
		__this->set_intensity_7((0.036f));
		__this->set_chromaticAberration_8((0.2f));
		__this->set_axialAberration_9((0.5f));
		__this->set_blurSpread_11((0.75f));
		__this->set_luminanceDependency_12((0.25f));
		__this->set_blurDistance_13((2.5f));
		PostEffectsBase__ctor_m3249494038(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::CheckResources()
extern "C"  bool VignetteAndChromaticAberration_CheckResources_m328480231 (VignetteAndChromaticAberration_t3308099924 * __this, const RuntimeMethod* method)
{
	{
		PostEffectsBase_CheckSupport_m2449300828(__this, (bool)0, /*hidden argument*/NULL);
		Shader_t4151988712 * L_0 = __this->get_vignetteShader_14();
		Material_t340375123 * L_1 = __this->get_m_VignetteMaterial_17();
		Material_t340375123 * L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m242186546(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->set_m_VignetteMaterial_17(L_2);
		Shader_t4151988712 * L_3 = __this->get_separableBlurShader_15();
		Material_t340375123 * L_4 = __this->get_m_SeparableBlurMaterial_18();
		Material_t340375123 * L_5 = PostEffectsBase_CheckShaderAndCreateMaterial_m242186546(__this, L_3, L_4, /*hidden argument*/NULL);
		__this->set_m_SeparableBlurMaterial_18(L_5);
		Shader_t4151988712 * L_6 = __this->get_chromAberrationShader_16();
		Material_t340375123 * L_7 = __this->get_m_ChromAberrationMaterial_19();
		Material_t340375123 * L_8 = PostEffectsBase_CheckShaderAndCreateMaterial_m242186546(__this, L_6, L_7, /*hidden argument*/NULL);
		__this->set_m_ChromAberrationMaterial_19(L_8);
		bool L_9 = ((PostEffectsBase_t2404315739 *)__this)->get_isSupported_4();
		if (L_9)
		{
			goto IL_0061;
		}
	}
	{
		PostEffectsBase_ReportAutoDisable_m412809422(__this, /*hidden argument*/NULL);
	}

IL_0061:
	{
		bool L_10 = ((PostEffectsBase_t2404315739 *)__this)->get_isSupported_4();
		return L_10;
	}
}
// System.Void UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void VignetteAndChromaticAberration_OnRenderImage_m4061427208 (VignetteAndChromaticAberration_t3308099924 * __this, RenderTexture_t2108887433 * ___source0, RenderTexture_t2108887433 * ___destination1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VignetteAndChromaticAberration_OnRenderImage_m4061427208_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	float V_3 = 0.0f;
	RenderTexture_t2108887433 * V_4 = NULL;
	RenderTexture_t2108887433 * V_5 = NULL;
	int32_t V_6 = 0;
	RenderTexture_t2108887433 * V_7 = NULL;
	int32_t G_B5_0 = 0;
	RenderTexture_t2108887433 * G_B17_0 = NULL;
	Material_t340375123 * G_B19_0 = NULL;
	RenderTexture_t2108887433 * G_B19_1 = NULL;
	RenderTexture_t2108887433 * G_B19_2 = NULL;
	Material_t340375123 * G_B18_0 = NULL;
	RenderTexture_t2108887433 * G_B18_1 = NULL;
	RenderTexture_t2108887433 * G_B18_2 = NULL;
	int32_t G_B20_0 = 0;
	Material_t340375123 * G_B20_1 = NULL;
	RenderTexture_t2108887433 * G_B20_2 = NULL;
	RenderTexture_t2108887433 * G_B20_3 = NULL;
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RenderTexture_t2108887433 * L_1 = ___source0;
		RenderTexture_t2108887433 * L_2 = ___destination1;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m1336850842(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		RenderTexture_t2108887433 * L_3 = ___source0;
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		V_0 = L_4;
		RenderTexture_t2108887433 * L_5 = ___source0;
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
		V_1 = L_6;
		float L_7 = __this->get_blur_10();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_8 = fabsf(L_7);
		if ((((float)L_8) > ((float)(0.0f))))
		{
			goto IL_004a;
		}
	}
	{
		float L_9 = __this->get_intensity_7();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_10 = fabsf(L_9);
		G_B5_0 = ((((float)L_10) > ((float)(0.0f)))? 1 : 0);
		goto IL_004b;
	}

IL_004a:
	{
		G_B5_0 = 1;
	}

IL_004b:
	{
		V_2 = (bool)G_B5_0;
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		V_3 = ((float)((float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)(((float)((float)L_11)))))/(float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)(((float)((float)L_12)))))));
		V_4 = (RenderTexture_t2108887433 *)NULL;
		V_5 = (RenderTexture_t2108887433 *)NULL;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_01ef;
		}
	}
	{
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		RenderTexture_t2108887433 * L_16 = ___source0;
		NullCheck(L_16);
		int32_t L_17 = RenderTexture_get_format_m3846871418(L_16, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_18 = RenderTexture_GetTemporary_m3378328322(NULL /*static, unused*/, L_14, L_15, 0, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		float L_19 = __this->get_blur_10();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_20 = fabsf(L_19);
		if ((!(((float)L_20) > ((float)(0.0f)))))
		{
			goto IL_017e;
		}
	}
	{
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		RenderTexture_t2108887433 * L_23 = ___source0;
		NullCheck(L_23);
		int32_t L_24 = RenderTexture_get_format_m3846871418(L_23, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_25 = RenderTexture_GetTemporary_m3378328322(NULL /*static, unused*/, ((int32_t)((int32_t)L_21/(int32_t)2)), ((int32_t)((int32_t)L_22/(int32_t)2)), 0, L_24, /*hidden argument*/NULL);
		V_5 = L_25;
		RenderTexture_t2108887433 * L_26 = ___source0;
		RenderTexture_t2108887433 * L_27 = V_5;
		Material_t340375123 * L_28 = __this->get_m_ChromAberrationMaterial_19();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m4126770912(NULL /*static, unused*/, L_26, L_27, L_28, 0, /*hidden argument*/NULL);
		V_6 = 0;
		goto IL_0176;
	}

IL_00ba:
	{
		Material_t340375123 * L_29 = __this->get_m_SeparableBlurMaterial_18();
		float L_30 = __this->get_blurSpread_11();
		Vector4_t3319028937  L_31;
		memset(&L_31, 0, sizeof(L_31));
		Vector4__ctor_m2498754347((&L_31), (0.0f), ((float)il2cpp_codegen_multiply((float)L_30, (float)(0.001953125f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_29);
		Material_SetVector_m4214217286(L_29, _stringLiteral1624685711, L_31, /*hidden argument*/NULL);
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		RenderTexture_t2108887433 * L_34 = ___source0;
		NullCheck(L_34);
		int32_t L_35 = RenderTexture_get_format_m3846871418(L_34, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_36 = RenderTexture_GetTemporary_m3378328322(NULL /*static, unused*/, ((int32_t)((int32_t)L_32/(int32_t)2)), ((int32_t)((int32_t)L_33/(int32_t)2)), 0, L_35, /*hidden argument*/NULL);
		V_7 = L_36;
		RenderTexture_t2108887433 * L_37 = V_5;
		RenderTexture_t2108887433 * L_38 = V_7;
		Material_t340375123 * L_39 = __this->get_m_SeparableBlurMaterial_18();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m890955694(NULL /*static, unused*/, L_37, L_38, L_39, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_40 = V_5;
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		Material_t340375123 * L_41 = __this->get_m_SeparableBlurMaterial_18();
		float L_42 = __this->get_blurSpread_11();
		float L_43 = V_3;
		Vector4_t3319028937  L_44;
		memset(&L_44, 0, sizeof(L_44));
		Vector4__ctor_m2498754347((&L_44), ((float)((float)((float)il2cpp_codegen_multiply((float)L_42, (float)(0.001953125f)))/(float)L_43)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_41);
		Material_SetVector_m4214217286(L_41, _stringLiteral1624685711, L_44, /*hidden argument*/NULL);
		int32_t L_45 = V_0;
		int32_t L_46 = V_1;
		RenderTexture_t2108887433 * L_47 = ___source0;
		NullCheck(L_47);
		int32_t L_48 = RenderTexture_get_format_m3846871418(L_47, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_49 = RenderTexture_GetTemporary_m3378328322(NULL /*static, unused*/, ((int32_t)((int32_t)L_45/(int32_t)2)), ((int32_t)((int32_t)L_46/(int32_t)2)), 0, L_48, /*hidden argument*/NULL);
		V_5 = L_49;
		RenderTexture_t2108887433 * L_50 = V_7;
		RenderTexture_t2108887433 * L_51 = V_5;
		Material_t340375123 * L_52 = __this->get_m_SeparableBlurMaterial_18();
		Graphics_Blit_m890955694(NULL /*static, unused*/, L_50, L_51, L_52, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_53 = V_7;
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		int32_t L_54 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_0176:
	{
		int32_t L_55 = V_6;
		if ((((int32_t)L_55) < ((int32_t)2)))
		{
			goto IL_00ba;
		}
	}

IL_017e:
	{
		Material_t340375123 * L_56 = __this->get_m_VignetteMaterial_17();
		float L_57 = __this->get_intensity_7();
		NullCheck(L_56);
		Material_SetFloat_m3226510453(L_56, _stringLiteral3952415593, ((float)il2cpp_codegen_subtract((float)((float)((float)(1.0f)/(float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_57)))), (float)(1.0f))), /*hidden argument*/NULL);
		Material_t340375123 * L_58 = __this->get_m_VignetteMaterial_17();
		float L_59 = __this->get_blur_10();
		NullCheck(L_58);
		Material_SetFloat_m3226510453(L_58, _stringLiteral3560662707, ((float)il2cpp_codegen_subtract((float)((float)((float)(1.0f)/(float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_59)))), (float)(1.0f))), /*hidden argument*/NULL);
		Material_t340375123 * L_60 = __this->get_m_VignetteMaterial_17();
		RenderTexture_t2108887433 * L_61 = V_5;
		NullCheck(L_60);
		Material_SetTexture_m1829349465(L_60, _stringLiteral3020016099, L_61, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_62 = ___source0;
		RenderTexture_t2108887433 * L_63 = V_4;
		Material_t340375123 * L_64 = __this->get_m_VignetteMaterial_17();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m4126770912(NULL /*static, unused*/, L_62, L_63, L_64, 0, /*hidden argument*/NULL);
	}

IL_01ef:
	{
		Material_t340375123 * L_65 = __this->get_m_ChromAberrationMaterial_19();
		float L_66 = __this->get_chromaticAberration_8();
		NullCheck(L_65);
		Material_SetFloat_m3226510453(L_65, _stringLiteral1596491694, L_66, /*hidden argument*/NULL);
		Material_t340375123 * L_67 = __this->get_m_ChromAberrationMaterial_19();
		float L_68 = __this->get_axialAberration_9();
		NullCheck(L_67);
		Material_SetFloat_m3226510453(L_67, _stringLiteral1767284560, L_68, /*hidden argument*/NULL);
		Material_t340375123 * L_69 = __this->get_m_ChromAberrationMaterial_19();
		float L_70 = __this->get_blurDistance_13();
		float L_71 = __this->get_blurDistance_13();
		Vector2_t2156229523  L_72;
		memset(&L_72, 0, sizeof(L_72));
		Vector2__ctor_m3970636864((&L_72), ((-L_70)), L_71, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_73 = Vector4_op_Implicit_m237151757(NULL /*static, unused*/, L_72, /*hidden argument*/NULL);
		NullCheck(L_69);
		Material_SetVector_m4214217286(L_69, _stringLiteral1772571274, L_73, /*hidden argument*/NULL);
		Material_t340375123 * L_74 = __this->get_m_ChromAberrationMaterial_19();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_75 = ((Mathf_t3464937446_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t3464937446_il2cpp_TypeInfo_var))->get_Epsilon_0();
		float L_76 = __this->get_luminanceDependency_12();
		float L_77 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_75, L_76, /*hidden argument*/NULL);
		NullCheck(L_74);
		Material_SetFloat_m3226510453(L_74, _stringLiteral2859884931, ((float)((float)(1.0f)/(float)L_77)), /*hidden argument*/NULL);
		bool L_78 = V_2;
		if (!L_78)
		{
			goto IL_027b;
		}
	}
	{
		RenderTexture_t2108887433 * L_79 = V_4;
		NullCheck(L_79);
		Texture_set_wrapMode_m587872754(L_79, 1, /*hidden argument*/NULL);
		goto IL_0282;
	}

IL_027b:
	{
		RenderTexture_t2108887433 * L_80 = ___source0;
		NullCheck(L_80);
		Texture_set_wrapMode_m587872754(L_80, 1, /*hidden argument*/NULL);
	}

IL_0282:
	{
		bool L_81 = V_2;
		if (!L_81)
		{
			goto IL_028f;
		}
	}
	{
		RenderTexture_t2108887433 * L_82 = V_4;
		G_B17_0 = L_82;
		goto IL_0290;
	}

IL_028f:
	{
		RenderTexture_t2108887433 * L_83 = ___source0;
		G_B17_0 = L_83;
	}

IL_0290:
	{
		RenderTexture_t2108887433 * L_84 = ___destination1;
		Material_t340375123 * L_85 = __this->get_m_ChromAberrationMaterial_19();
		int32_t L_86 = __this->get_mode_6();
		G_B18_0 = L_85;
		G_B18_1 = L_84;
		G_B18_2 = G_B17_0;
		if ((!(((uint32_t)L_86) == ((uint32_t)1))))
		{
			G_B19_0 = L_85;
			G_B19_1 = L_84;
			G_B19_2 = G_B17_0;
			goto IL_02a9;
		}
	}
	{
		G_B20_0 = 2;
		G_B20_1 = G_B18_0;
		G_B20_2 = G_B18_1;
		G_B20_3 = G_B18_2;
		goto IL_02aa;
	}

IL_02a9:
	{
		G_B20_0 = 1;
		G_B20_1 = G_B19_0;
		G_B20_2 = G_B19_1;
		G_B20_3 = G_B19_2;
	}

IL_02aa:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m4126770912(NULL /*static, unused*/, G_B20_3, G_B20_2, G_B20_1, G_B20_0, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_87 = V_4;
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_87, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_88 = V_5;
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_88, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.ImageEffects.Vortex::.ctor()
extern "C"  void Vortex__ctor_m4031313303 (Vortex_t3420399868 * __this, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector2__ctor_m3970636864((&L_0), (0.4f), (0.4f), /*hidden argument*/NULL);
		__this->set_radius_4(L_0);
		__this->set_angle_5((50.0f));
		Vector2_t2156229523  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector2__ctor_m3970636864((&L_1), (0.5f), (0.5f), /*hidden argument*/NULL);
		__this->set_center_6(L_1);
		ImageEffectBase__ctor_m3682424896(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Vortex::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Vortex_OnRenderImage_m3910833119 (Vortex_t3420399868 * __this, RenderTexture_t2108887433 * ___source0, RenderTexture_t2108887433 * ___destination1, const RuntimeMethod* method)
{
	{
		Material_t340375123 * L_0 = ImageEffectBase_get_material_m3574076220(__this, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_1 = ___source0;
		RenderTexture_t2108887433 * L_2 = ___destination1;
		float L_3 = __this->get_angle_5();
		Vector2_t2156229523  L_4 = __this->get_center_6();
		Vector2_t2156229523  L_5 = __this->get_radius_4();
		ImageEffects_RenderDistortion_m2367323920(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
