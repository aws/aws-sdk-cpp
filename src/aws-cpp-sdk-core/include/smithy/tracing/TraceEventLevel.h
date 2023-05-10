/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/Smithy_EXPORTS.h>

namespace smithy {
    namespace components {
        namespace tracing {
            /**
             * Experimental - This definition is a work in progress API
             * changes are expected.
             *
             * The level at which the trace exists.
             */
            enum class SMITHY_API TraceEventLevel {
                Fatal,
                Error,
                Warn,
                Info,
                Debug,
                Trace,
            };
        }
    }
}
