/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/Smithy_EXPORTS.h>
#include <smithy/tracing/TraceEvent.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace smithy {
    namespace components {
        namespace tracing {
            /**
             * Experimental - This definition is a work in progress API
             * changes are expected.
             *
             * A interface for dispatching a list of traces to a arbitrary
             * back end. This should not block and queue requests to a agent
             * for off precess processing.
             */
            class SMITHY_API TraceProbe {
            public:
                virtual ~TraceProbe() = default;

                virtual void dispatchEvents(const Aws::Vector<TraceEvent> &events) = 0;
            };
        }
    }
}
