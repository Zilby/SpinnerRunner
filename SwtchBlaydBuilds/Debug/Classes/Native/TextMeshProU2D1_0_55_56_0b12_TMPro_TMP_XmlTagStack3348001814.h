#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_XmlTagStack`1<System.Object>
struct  TMP_XmlTagStack_1_t3348001814 
{
public:
	// T[] TMPro.TMP_XmlTagStack`1::itemStack
	ObjectU5BU5D_t3614634134* ___itemStack_0;
	// System.Int32 TMPro.TMP_XmlTagStack`1::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_XmlTagStack`1::m_capacity
	int32_t ___m_capacity_2;
	// T TMPro.TMP_XmlTagStack`1::m_defaultItem
	Il2CppObject * ___m_defaultItem_3;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t3348001814, ___itemStack_0)); }
	inline ObjectU5BU5D_t3614634134* get_itemStack_0() const { return ___itemStack_0; }
	inline ObjectU5BU5D_t3614634134** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(ObjectU5BU5D_t3614634134* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier(&___itemStack_0, value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t3348001814, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_capacity_2() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t3348001814, ___m_capacity_2)); }
	inline int32_t get_m_capacity_2() const { return ___m_capacity_2; }
	inline int32_t* get_address_of_m_capacity_2() { return &___m_capacity_2; }
	inline void set_m_capacity_2(int32_t value)
	{
		___m_capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultItem_3() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t3348001814, ___m_defaultItem_3)); }
	inline Il2CppObject * get_m_defaultItem_3() const { return ___m_defaultItem_3; }
	inline Il2CppObject ** get_address_of_m_defaultItem_3() { return &___m_defaultItem_3; }
	inline void set_m_defaultItem_3(Il2CppObject * value)
	{
		___m_defaultItem_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_defaultItem_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
