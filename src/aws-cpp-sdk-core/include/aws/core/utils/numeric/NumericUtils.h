/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <cstdint>
#include <cstdlib>
#include <limits>

namespace Aws
{
    namespace Utils
    {
        constexpr double LLONG_MIN_AS_DOUBLE = static_cast<double>((std::numeric_limits<int64_t>::min)());
        constexpr double LLONG_MAX_PLUS_ONE = -static_cast<double>((std::numeric_limits<int64_t>::min)());

        inline bool IsRepresentableAsInt64(double value)
        {
            return value >= LLONG_MIN_AS_DOUBLE && value < LLONG_MAX_PLUS_ONE;
        }

        inline int64_t ToInt64Saturating(double value)
        {
            if (value != value)
            {
                return 0;
            }
            if (value >= LLONG_MAX_PLUS_ONE)
            {
                return (std::numeric_limits<int64_t>::max)();
            }
            if (value < LLONG_MIN_AS_DOUBLE)
            {
                return (std::numeric_limits<int64_t>::min)();
            }
            return static_cast<int64_t>(value);
        }

        inline int64_t LiteralToInt64(const char* literal, double valuedouble)
        {
            char* end = nullptr;
            const long long parsed = std::strtoll(literal, &end, 10);
            if (*end == '\0')
            {
                return parsed;
            }
            return ToInt64Saturating(valuedouble);
        }
    }
}
