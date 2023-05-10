/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/tracing/TraceProbe.h>
#include <smithy/tracing/RootTraceProbe.h>
#include <smithy/tracing/ScopedTracer.h>
#include <smithy/tracing/TraceMessageEvent.h>
#include <smithy/tracing/TraceCountEvent.h>
#include <smithy/tracing/TraceStatEvent.h>
#include <smithy/tracing/TraceTimerEvent.h>

using namespace smithy::components::tracing;

static const char *ALLOC_TAG = "SMITHY_TRACING_ALLOC";

class TestProbe : public TraceProbe {
public:
    explicit TestProbe(Aws::Vector<TraceEvent> &receivedEvents) :
        m_receivedEvents(receivedEvents) {}

    void dispatchEvents(const Aws::Vector<TraceEvent> &events) override {
        m_receivedEvents.insert(m_receivedEvents.end(), events.begin(), events.end());
    }

    Aws::Vector<TraceEvent> &m_receivedEvents;
};

class SmithyTracingTest : public Aws::Testing::AwsCppSdkGTestSuite {
};

TEST_F(SmithyTracingTest, TestTraceSpanNesting) {
    Aws::Vector<TraceEvent> receivedEvents;
    auto testProbe = Aws::MakeUnique<TestProbe>(ALLOC_TAG, receivedEvents);
    auto rootProbe = Aws::MakeShared<RootTraceProbe>(ALLOC_TAG);
    rootProbe->registerProbe(std::move(testProbe));
    {
        ScopedTracer messageParent(rootProbe);
        messageParent.OnMessageEvent("test msg event",
            "test component 0",
            TraceEventLevel::Info,
            "test message");

        ScopedTracer countChild(messageParent);
        countChild.OnCountEvent("test count event",
            "test component 1",
            TraceEventLevel::Debug,
            4);

        ScopedTracer statChild(countChild);
        statChild.OnStatEvent("test stat event",
            "test component 2",
            TraceEventLevel::Error,
            TraceStatType::MAX,
            (double) 47);

        ScopedTracer timerChild(rootProbe);
        timerChild.OnTimerEvent("test timer event",
            "test component 3",
            TraceEventLevel::Trace,
            std::chrono::milliseconds(5));
    }
    ASSERT_EQ(4u, receivedEvents.size());

    //Assert Message Event
    auto msgEvent = std::find_if(receivedEvents.cbegin(),
        receivedEvents.cend(),
        [](const TraceEvent &event) -> bool {
            return event.event->getEventType() == TraceEventType::Msg;
        });
    ASSERT_NE(msgEvent, receivedEvents.end());
    ASSERT_FALSE(msgEvent->parentSpanId.has_value());
    ASSERT_FALSE(msgEvent->spanId.empty());
    ASSERT_TRUE(msgEvent->eventLevel == TraceEventLevel::Info);
    ASSERT_EQ("test msg event", msgEvent->eventName);
    ASSERT_TRUE(msgEvent->threadId == std::this_thread::get_id());
    ASSERT_TRUE(msgEvent->timeEmitted.time_since_epoch().count() > 0 &&
                msgEvent->timeEmitted < std::chrono::system_clock::now());
    ASSERT_FALSE(msgEvent->eventId.empty());
    ASSERT_EQ("test component 0", msgEvent->emittingComponentId);
    auto foundMessageEvent = std::dynamic_pointer_cast<TraceMessageEvent>(msgEvent->event);
    ASSERT_EQ("test message", foundMessageEvent->getMessage());

    //Assert Count Event
    auto countEvent = std::find_if(receivedEvents.cbegin(),
        receivedEvents.cend(),
        [](const TraceEvent &event) -> bool {
            return event.event->getEventType() == TraceEventType::Count;
        });
    ASSERT_NE(countEvent, receivedEvents.end());
    ASSERT_TRUE(countEvent->parentSpanId.has_value());
    ASSERT_EQ(msgEvent->spanId, countEvent->parentSpanId.value());
    ASSERT_FALSE(countEvent->spanId.empty());
    ASSERT_TRUE(countEvent->eventLevel == TraceEventLevel::Debug);
    ASSERT_EQ("test count event", countEvent->eventName);
    ASSERT_TRUE(countEvent->threadId == std::this_thread::get_id());
    ASSERT_TRUE(countEvent->timeEmitted.time_since_epoch().count() > 0 &&
                countEvent->timeEmitted < std::chrono::system_clock::now());
    ASSERT_FALSE(countEvent->eventId.empty());
    ASSERT_EQ("test component 1", countEvent->emittingComponentId);
    auto foundCountEvent = std::dynamic_pointer_cast<TraceCountEvent>(countEvent->event);
    ASSERT_EQ(4u, foundCountEvent->getCount());

    //Assert Stat Event
    auto statEvent = std::find_if(receivedEvents.cbegin(),
        receivedEvents.cend(),
        [](const TraceEvent &event) -> bool {
            return event.event->getEventType() == TraceEventType::Stat;
        });
    ASSERT_NE(statEvent, receivedEvents.end());
    ASSERT_TRUE(statEvent->parentSpanId.has_value());
    ASSERT_EQ(countEvent->spanId, statEvent->parentSpanId.value());
    ASSERT_FALSE(statEvent->spanId.empty());
    ASSERT_TRUE(statEvent->eventLevel == TraceEventLevel::Error);
    ASSERT_EQ("test stat event", statEvent->eventName);
    ASSERT_TRUE(statEvent->threadId == std::this_thread::get_id());
    ASSERT_TRUE(statEvent->timeEmitted.time_since_epoch().count() > 0 &&
                statEvent->timeEmitted < std::chrono::system_clock::now());
    ASSERT_FALSE(statEvent->eventId.empty());
    ASSERT_EQ("test component 2", statEvent->emittingComponentId);
    auto foundStatEvent = std::dynamic_pointer_cast<TraceStatEvent>(statEvent->event);
    ASSERT_EQ(TraceStatType::MAX, foundStatEvent->getStatType());
    ASSERT_DOUBLE_EQ((double) 47, foundStatEvent->getValue());

    //Assert Timer Event
    auto timerEvent = std::find_if(receivedEvents.cbegin(),
        receivedEvents.cend(),
        [](const TraceEvent &event) -> bool {
            return event.event->getEventType() == TraceEventType::Timer;
        });
    ASSERT_NE(timerEvent, receivedEvents.end());
    ASSERT_FALSE(timerEvent->parentSpanId.has_value());
    ASSERT_FALSE(timerEvent->spanId.empty());
    ASSERT_TRUE(timerEvent->eventLevel == TraceEventLevel::Trace);
    ASSERT_EQ("test timer event", timerEvent->eventName);
    ASSERT_TRUE(timerEvent->threadId == std::this_thread::get_id());
    ASSERT_TRUE(timerEvent->timeEmitted.time_since_epoch().count() > 0 &&
                timerEvent->timeEmitted < std::chrono::system_clock::now());
    ASSERT_FALSE(timerEvent->eventId.empty());
    ASSERT_EQ("test component 3", timerEvent->emittingComponentId);
    auto foundTimerEvent = std::dynamic_pointer_cast<TraceTimerEvent>(timerEvent->event);
    ASSERT_EQ(std::chrono::milliseconds(5), foundTimerEvent->getTimeTaken());
}
