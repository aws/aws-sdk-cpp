/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/Smithy_EXPORTS.h>
#include <cstdint>

namespace smithy {
    namespace components {
        namespace tracing {
            /**
             * Experimental - This definition is a work in progress API
             * changes are expected.
             *
             * The different type of statistics that the
             * Stat event type supports.
             */
            enum class SMITHY_API TraceStatType {
                Sum,
                Count,
                Mode,
                P_50,
                P_90,
                P_95,
                P_99,
                MIN,
                MAX,
            };
        }
    }
}
