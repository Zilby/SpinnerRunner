﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`1<InControl.LogMessage>
struct Action_1_t1742358957;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.Logger
struct  Logger_t2338124550  : public Il2CppObject
{
public:

public:
};

struct Logger_t2338124550_StaticFields
{
public:
	// System.Action`1<InControl.LogMessage> InControl.Logger::OnLogMessage
	Action_1_t1742358957 * ___OnLogMessage_0;

public:
	inline static int32_t get_offset_of_OnLogMessage_0() { return static_cast<int32_t>(offsetof(Logger_t2338124550_StaticFields, ___OnLogMessage_0)); }
	inline Action_1_t1742358957 * get_OnLogMessage_0() const { return ___OnLogMessage_0; }
	inline Action_1_t1742358957 ** get_address_of_OnLogMessage_0() { return &___OnLogMessage_0; }
	inline void set_OnLogMessage_0(Action_1_t1742358957 * value)
	{
		___OnLogMessage_0 = value;
		Il2CppCodeGenWriteBarrier(&___OnLogMessage_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif