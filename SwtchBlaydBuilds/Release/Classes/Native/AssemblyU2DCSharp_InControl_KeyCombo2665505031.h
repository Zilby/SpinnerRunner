#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// System.Collections.Generic.Dictionary`2<System.UInt64,System.String>
struct Dictionary_2_t3970302298;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.KeyCombo
struct  KeyCombo_t2665505031 
{
public:
	// System.Int32 InControl.KeyCombo::includeSize
	int32_t ___includeSize_0;
	// System.UInt64 InControl.KeyCombo::includeData
	uint64_t ___includeData_1;
	// System.Int32 InControl.KeyCombo::excludeSize
	int32_t ___excludeSize_2;
	// System.UInt64 InControl.KeyCombo::excludeData
	uint64_t ___excludeData_3;

public:
	inline static int32_t get_offset_of_includeSize_0() { return static_cast<int32_t>(offsetof(KeyCombo_t2665505031, ___includeSize_0)); }
	inline int32_t get_includeSize_0() const { return ___includeSize_0; }
	inline int32_t* get_address_of_includeSize_0() { return &___includeSize_0; }
	inline void set_includeSize_0(int32_t value)
	{
		___includeSize_0 = value;
	}

	inline static int32_t get_offset_of_includeData_1() { return static_cast<int32_t>(offsetof(KeyCombo_t2665505031, ___includeData_1)); }
	inline uint64_t get_includeData_1() const { return ___includeData_1; }
	inline uint64_t* get_address_of_includeData_1() { return &___includeData_1; }
	inline void set_includeData_1(uint64_t value)
	{
		___includeData_1 = value;
	}

	inline static int32_t get_offset_of_excludeSize_2() { return static_cast<int32_t>(offsetof(KeyCombo_t2665505031, ___excludeSize_2)); }
	inline int32_t get_excludeSize_2() const { return ___excludeSize_2; }
	inline int32_t* get_address_of_excludeSize_2() { return &___excludeSize_2; }
	inline void set_excludeSize_2(int32_t value)
	{
		___excludeSize_2 = value;
	}

	inline static int32_t get_offset_of_excludeData_3() { return static_cast<int32_t>(offsetof(KeyCombo_t2665505031, ___excludeData_3)); }
	inline uint64_t get_excludeData_3() const { return ___excludeData_3; }
	inline uint64_t* get_address_of_excludeData_3() { return &___excludeData_3; }
	inline void set_excludeData_3(uint64_t value)
	{
		___excludeData_3 = value;
	}
};

struct KeyCombo_t2665505031_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.String> InControl.KeyCombo::cachedStrings
	Dictionary_2_t3970302298 * ___cachedStrings_4;

public:
	inline static int32_t get_offset_of_cachedStrings_4() { return static_cast<int32_t>(offsetof(KeyCombo_t2665505031_StaticFields, ___cachedStrings_4)); }
	inline Dictionary_2_t3970302298 * get_cachedStrings_4() const { return ___cachedStrings_4; }
	inline Dictionary_2_t3970302298 ** get_address_of_cachedStrings_4() { return &___cachedStrings_4; }
	inline void set_cachedStrings_4(Dictionary_2_t3970302298 * value)
	{
		___cachedStrings_4 = value;
		Il2CppCodeGenWriteBarrier(&___cachedStrings_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
