/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/Smithy_EXPORTS.h>
#include <smithy/tracing/TraceEventType.h>
#include <smithy/tracing/TraceEventLevel.h>
#include <smithy/tracing/TraceEventDataInterface.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/Optional.h>
#include <thread>

namespace smithy {
    namespace components {
        namespace tracing {
            /**
             * Experimental - This definition is a work in progress API
             * changes are expected.
             *
             * A generic event that can happen during a span.
             * This event has metadata about what span it belongs
             * to, along with other contextual information. It also
             * contains the actual event data that will be associated
             * with the span.
             */
            struct SMITHY_API TraceEvent {
                TraceEventLevel eventLevel;
                Aws::String eventId;
                Aws::String spanId;
                Aws::Crt::Optional<Aws::String> parentSpanId;
                Aws::String emittingComponentId;
                std::chrono::time_point<std::chrono::system_clock> timeEmitted;
                std::thread::id threadId;
                Aws::String eventName;
                std::shared_ptr<TraceEventDataInterface> event;

            private:
                TraceEvent(Aws::String &&eventName,
                    Aws::String spanId,
                    Aws::String emittingComponent,
                    std::shared_ptr<TraceEventDataInterface> event,
                    TraceEventLevel eventLevel = TraceEventLevel::Info);

                friend class TraceSpan;
            };
        }
    }
}
