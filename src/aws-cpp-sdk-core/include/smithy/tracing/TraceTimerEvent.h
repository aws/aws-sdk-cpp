/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/Smithy_EXPORTS.h>
#include <smithy/tracing/TraceEventDataInterface.h>
#include <chrono>

namespace smithy {
    namespace components {
        namespace tracing {
            /**
             * Experimental - This definition is a work in progress API
             * changes are expected.
             *
             * A Trace event that is a temporal measurement.
             */
            class SMITHY_API TraceTimerEvent : public TraceEventDataInterface {
                std::chrono::milliseconds timeTaken;
            public:
                explicit TraceTimerEvent(const std::chrono::milliseconds &timeTaken) :
                    timeTaken(timeTaken) {}

                TraceEventType getEventType() const override {
                    return TraceEventType::Timer;
                }

                const std::chrono::milliseconds &getTimeTaken() const {
                    return timeTaken;
                }
            };
        }
    }
}
