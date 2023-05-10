/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/Smithy_EXPORTS.h>
#include <smithy/tracing/TraceEventDataInterface.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace smithy {
    namespace components {
        namespace tracing {
            /**
             * Experimental - This definition is a work in progress API
             * changes are expected.
             *
             * A Trace event that is a message event.
             */
            class SMITHY_API TraceMessageEvent : public TraceEventDataInterface {
            private:
                Aws::String message;
            public:
                explicit TraceMessageEvent(Aws::String message) :
                    message(std::move(message)) {}

                inline TraceEventType getEventType() const override {
                    return TraceEventType::Msg;
                }

                inline const Aws::String &getMessage() const {
                    return message;
                }
            };
        }
    }
}
