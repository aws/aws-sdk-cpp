/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <chrono>

// TODO: delete the fallback branch once the SDK's minimum standard is C++17.
#if defined(__cpp_lib_chrono) && __cpp_lib_chrono >= 201510L

namespace Aws
{
    namespace chrono
    {
        using std::chrono::abs;
    }
}

#else

#include <type_traits>
#include <limits>

namespace Aws
{
    namespace chrono
    {
        template <class Rep, class Period>
        constexpr typename std::enable_if<std::numeric_limits<Rep>::is_signed,
                                          std::chrono::duration<Rep, Period>>::type
        abs(std::chrono::duration<Rep, Period> d)
        {
            return d >= d.zero() ? d : -d;
        }
    }
}

#endif
