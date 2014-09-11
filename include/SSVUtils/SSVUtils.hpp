// Copyright (c) 2013-2014 Vittorio Romeo
// License: Academic Free License ("AFL") v. 3.0
// AFL License page: http://opensource.org/licenses/AFL-3.0

#ifndef SSVUTILS
#define SSVUTILS

// "Core" module.
#include "SSVUtils/Core/Core.hpp"

#include "SSVUtils/Test/Test.hpp"
#include "SSVUtils/Benchmark/Benchmark.hpp"
#include "SSVUtils/Timeline/Timeline.hpp"
#include "SSVUtils/Delegate/Delegate.hpp"
#include "SSVUtils/MemoryManager/MemoryManager.hpp"
#include "SSVUtils/TemplateSystem/TemplateSystem.hpp"
#include "SSVUtils/Timeline/TimelineManager.hpp"
#include "SSVUtils/Encryption/Encryption.hpp"
#include "SSVUtils/Bimap/Bimap.hpp"
#include "SSVUtils/CommandLine/CommandLine.hpp"
#include "SSVUtils/FatEnum/FatEnum.hpp"
#include "SSVUtils/HandleVector/HandleVector.hpp"
#include "SSVUtils/Easing/Easing.hpp"
#include "SSVUtils/RecPtr/RecPtr.hpp"
#include "SSVUtils/Ticker/Ticker.hpp"

#ifndef SSVUT_DISABLE
	#include "SSVUtils/Tests/Tests.hpp"
#endif

#endif

// TODO:
// * C++14!
// * .inl and .cpp FILES and SSVU_INLINE macro
// * Fix includes (old method was better)
// * consider moving tests to their headers? (investigate)
// * investigate metaprogramming code generation
// * test framework - write expected and actual value and more...
