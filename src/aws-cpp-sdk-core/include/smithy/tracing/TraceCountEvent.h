/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/Smithy_EXPORTS.h>
#include <smithy/tracing/TraceEventDataInterface.h>
#include <cstdint>

namespace smithy {
    namespace components {
        namespace tracing {
            /**
             * Experimental - This definition is a work in progress API
             * changes are expected.
             *
             * A Trace event that is a count measurement.
             */
            class SMITHY_API TraceCountEvent : public TraceEventDataInterface {
            private:
                uint64_t count;

            public:
                explicit TraceCountEvent(uint64_t count) :
                    count(count) {}

                TraceEventType getEventType() const override {
                    return TraceEventType::Count;
                }

                inline uint64_t getCount() const {
                    return count;
                }
            };
        }
    }
}
