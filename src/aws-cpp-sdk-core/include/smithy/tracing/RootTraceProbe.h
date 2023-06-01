/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/Smithy_EXPORTS.h>
#include <smithy/tracing/TraceEvent.h>
#include <smithy/tracing/TraceProbe.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace smithy {
    namespace components {
        namespace tracing {
            /**
             * Experimental - This definition is a work in progress API
             * changes are expected.
             *
             * A specific Implementation of TraceProbe that keeps track
             * of a list of TraceProbes, that will dispatch a list of events
             * to each probe. The intention is that this class will be used
             * as the root entry point to emitting traces to a list of
             * arbitrary backends.
             */
            class SMITHY_API RootTraceProbe : public TraceProbe {
            public:
                void dispatchEvents(const Aws::Vector<TraceEvent> &events) override;

                void registerProbe(Aws::UniquePtr<TraceProbe> probe);

                RootTraceProbe() = default;
                RootTraceProbe(RootTraceProbe&) = delete;
                RootTraceProbe& operator=(const RootTraceProbe&) = delete;

            private:
                Aws::Vector<Aws::UniquePtr<TraceProbe>> traceProbes;
            };
        }
    }
}
