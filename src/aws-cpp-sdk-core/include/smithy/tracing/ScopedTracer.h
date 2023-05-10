/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/tracing/TraceSpan.h>

namespace smithy {
    namespace components {
        namespace tracing {
            /**
             * Experimental - This definition is a work in progress API
             * changes are expected.
             *
             * A RAII container for trace usage and tracking current span. Can be
             * constructed with a referenced probe that will eventually emit the trace,
             * or alternatively with a existing tracer, that will create a child span.
             * upon destruction all spans and correlating events will be flushed to the
             * probe.
             */
            class SMITHY_API ScopedTracer {
            public:
                ScopedTracer(std::shared_ptr<TraceProbe> probe) :
                    m_currentSpanScope(std::make_shared<TraceSpan>(std::move(probe))) {}

                ScopedTracer(ScopedTracer &parent) :
                    m_currentSpanScope(parent.getCurrentSpan()->newChildSpan()) {}

                virtual ~ScopedTracer() = default;

                void OnCountEvent(Aws::String &&eventName,
                    const Aws::String &componentId,
                    TraceEventLevel level,
                    uint64_t count)
                {
                    TraceEvent event = getCurrentSpan()->newCountEvent(std::move(eventName),
                        componentId,
                        level,
                        count);
                    TraceSpan *pSpan = getCurrentSpan();
                    pSpan->emitTraceEvent(std::move(event));
                }

                void OnTimerEvent(Aws::String &&eventName,
                    const Aws::String &componentId,
                    TraceEventLevel level,
                    std::chrono::milliseconds timeTaken)
                {
                    TraceEvent event = getCurrentSpan()->newTimerEvent(std::move(eventName),
                        componentId,
                        level,
                        timeTaken);
                    TraceSpan *pSpan = getCurrentSpan();
                    pSpan->emitTraceEvent(std::move(event));
                }


                void OnStatEvent(Aws::String &&eventName,
                    const Aws::String &componentId,
                    TraceEventLevel level,
                    TraceStatType statType,
                    double value)
                {
                    TraceEvent event = getCurrentSpan()->newStatEvent(std::move(eventName),
                        componentId,
                        level,
                        statType,
                        value);
                    TraceSpan *pSpan = getCurrentSpan();
                    pSpan->emitTraceEvent(std::move(event));
                }


                void OnMessageEvent(Aws::String &&eventName,
                    const Aws::String &componentId,
                    TraceEventLevel level,
                    Aws::String &&message)
                {
                    TraceEvent event = getCurrentSpan()->newMessageEvent(std::move(eventName),
                        componentId,
                        level,
                        std::move(message));
                    TraceSpan *pSpan = getCurrentSpan();
                    pSpan->emitTraceEvent(std::move(event));
                }

                inline TraceSpan *getCurrentSpan() const {
                    return m_currentSpanScope.get();
                }

            private:
                const std::shared_ptr<TraceSpan> m_currentSpanScope;

                ScopedTracer() = delete;
            };
        }
    }
}
