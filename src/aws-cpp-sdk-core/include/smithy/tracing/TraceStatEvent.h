/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/Smithy_EXPORTS.h>
#include <smithy/tracing/TraceStatType.h>
#include <smithy/tracing/TraceEventDataInterface.h>

namespace smithy {
    namespace components {
        namespace tracing {
            /**
             * Experimental - This definition is a work in progress API
             * changes are expected.
             *
             * A Trace event that is a statistical measurement.
             */
            class SMITHY_API TraceStatEvent : public TraceEventDataInterface {
            private:
                TraceStatType statType = TraceStatType::Count;
                double value = 0.0;

            public:
                TraceStatEvent(TraceStatType statType, double value) :
                    statType(statType),
                    value(value) {}

                TraceEventType getEventType() const override {
                    return TraceEventType::Stat;
                }

                inline TraceStatType getStatType() const {
                    return statType;
                }

                inline double getValue() const {
                    return value;
                }
            };
        }
    }
}
