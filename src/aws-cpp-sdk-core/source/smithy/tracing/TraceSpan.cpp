/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <smithy/tracing/TraceSpan.h>
#include <smithy/tracing/TraceCountEvent.h>
#include <smithy/tracing/TraceMessageEvent.h>
#include <smithy/tracing/TraceStatEvent.h>
#include <smithy/tracing/TraceTimerEvent.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <mutex>

using namespace smithy::components::tracing;

static const char *ALLOC_TAG = "TraceSpan";

TraceSpan::TraceSpan(std::shared_ptr<TraceProbe> probe) : probe(std::move(probe)) {
    spanId = Aws::String(Aws::Utils::UUID::PseudoRandomUUID());
}

TraceSpan::TraceSpan(std::shared_ptr<TraceSpan> parentSpan) : parentSpan(std::move(parentSpan)) {
    spanId = Aws::String(Aws::Utils::UUID::PseudoRandomUUID());
}

TraceSpan::~TraceSpan() {
    flushEvents();
}

std::shared_ptr<TraceSpan> TraceSpan::newChildSpan() {
    return std::make_shared<TraceSpan>(this->shared_from_this());
}

void TraceSpan::emitTraceEvent(TraceEvent &&event) {
    if (parentSpan) {
        parentSpan->emitTraceEvent(std::move(event));
    } else {
        std::lock_guard<std::mutex> lockGuard(eventsLock);
        spanEvents.push_back(std::move(event));
    }
}

void TraceSpan::emitTraceEvents(std::vector<TraceEvent> &&events) {
    if (parentSpan) {
        parentSpan->emitTraceEvents(std::move(events));
    } else {
        {
            std::lock_guard<std::mutex> lockGuard(eventsLock);
            std::move(events.begin(), events.end(), std::back_inserter(spanEvents));
        }
    }
}

void TraceSpan::flushEvents() noexcept {
    if (probe) {
        Aws::Vector<TraceEvent> eventsMove;
        {
            std::lock_guard<std::mutex> lockGuard(eventsLock);
            eventsMove = std::move(spanEvents);
            spanEvents = Aws::Vector<TraceEvent>();
        }

        if (!eventsMove.empty()) {
            probe->dispatchEvents(eventsMove);
        }
    }
}

TraceEvent TraceSpan::newCountEvent(Aws::String &&eventName,
    const Aws::String &componentId,
    TraceEventLevel level,
    uint64_t count) const {

    TraceEvent event(std::move(eventName),
        spanId,
        componentId,
        Aws::MakeUnique<TraceCountEvent>(ALLOC_TAG, count),
        level);

    if (parentSpan) {
        event.parentSpanId = parentSpan->spanId;
    }

    return event;
}

TraceEvent TraceSpan::newTimerEvent(Aws::String &&eventName,
    const Aws::String &componentId,
    TraceEventLevel level,
    std::chrono::milliseconds timeTaken) const {

    TraceEvent event(std::move(eventName),
        spanId,
        componentId,
        Aws::MakeUnique<TraceTimerEvent>(ALLOC_TAG, timeTaken),
        level);

    if (parentSpan) {
        event.parentSpanId = parentSpan->spanId;
    }

    return event;
}

TraceEvent TraceSpan::newStatEvent(Aws::String &&eventName,
    const Aws::String &componentId,
    TraceEventLevel level,
    TraceStatType statType,
    double value) const {

    TraceEvent event(std::move(eventName),
        spanId,
        componentId,
        Aws::MakeUnique<TraceStatEvent>(ALLOC_TAG, statType, value),
        level);

    if (parentSpan) {
        event.parentSpanId = parentSpan->spanId;
    }

    return event;
}

TraceEvent TraceSpan::newMessageEvent(Aws::String &&eventName,
    const Aws::String &componentId,
    TraceEventLevel level,
    Aws::String &&message) const {

    TraceEvent event(std::move(eventName),
        spanId,
        componentId,
        Aws::MakeUnique<TraceMessageEvent>(ALLOC_TAG, std::move(message)),
        level);

    if (parentSpan) {
        event.parentSpanId = parentSpan->spanId;
    }

    return event;
}
