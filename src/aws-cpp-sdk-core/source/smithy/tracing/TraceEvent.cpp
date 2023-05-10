/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <smithy/tracing/TraceEvent.h>
#include <aws/core/utils/UUID.h>

#include <utility>

using namespace smithy::components::tracing;
using namespace Aws::Utils;

TraceEvent::TraceEvent(Aws::String &&eventName,
        Aws::String spanId,
        Aws::String emittingComponent,
        std::shared_ptr<TraceEventDataInterface> traceEvent,
        TraceEventLevel level) :
    eventLevel(level),
    eventId(UUID::PseudoRandomUUID()),
    spanId(std::move(spanId)),
    emittingComponentId(std::move(emittingComponent)),
    eventName(std::move(eventName)),
    event(std::move(traceEvent))
{
    timeEmitted = std::chrono::system_clock::now();
    threadId = std::this_thread::get_id();
}
