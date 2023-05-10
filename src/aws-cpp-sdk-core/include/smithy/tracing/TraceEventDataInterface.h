/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/Smithy_EXPORTS.h>
#include <smithy/tracing/TraceEventType.h>

namespace smithy {
    namespace components {
        namespace tracing {
            /**
             * Experimental - This definition is a work in progress API
             * changes are expected.
             *
             * A interface that all event data will implement.
             * Requires an event to denote what kind of event
             * type it is.
             */
            class SMITHY_API TraceEventDataInterface {
            public:
                virtual ~TraceEventDataInterface() = default;
                virtual TraceEventType getEventType() const = 0;
            };
        }
    }
}
