/*
 * Copyright 2010-2018 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#pragma once

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/event/EventStreamHandler.h>
#include <aws/core/utils/logging/LogMacros.h>

static const char MOCK_EVENT_STREAM_HANDLER_CLASS_TAG[] = "MockEventStreamHandler";

static const int RECORDS_HASH = Aws::Utils::HashingUtils::HashString("Records");
static const int CONT_HASH = Aws::Utils::HashingUtils::HashString("Cont");
static const int PROGRESS_HASH = Aws::Utils::HashingUtils::HashString("Progress");
static const int STATS_HASH = Aws::Utils::HashingUtils::HashString("Stats");
static const int END_HASH = Aws::Utils::HashingUtils::HashString("End");

class MockEventStreamHandler : public Aws::Utils::Event::EventStreamHandler
{
public:

    enum class EventType
    {
        RECORDS,
        CONT,
        PROGRESS,
        STATS,
        END,
        UNKNOWN
    };

    MockEventStreamHandler() : EventStreamHandler(),
        m_onPayloadSegmentCount(0), m_onCompletePayloadCount(0), m_onPreludeReceivedCount(0),
        m_onHeaderReceivedCount(0), m_requestLevelErrorsCount(0), m_requestLevelExceptionsCount(0), m_onRecordsCount(0),
        m_onContCount(0), m_onProgressCount(0), m_onStatsCount(0),  m_onEndCount(0), m_internalErrorsCount(0),
        m_error(Aws::Utils::Event::EventStreamErrors::EVENT_STREAM_NO_ERROR), m_errorMessage("")
    {
    }

    void OnEvent() override
    {
        if (!*this)
        {
            m_error = GetInternalError();
            m_errorMessage = GetEventPayloadAsString();
        }

        auto headers = GetEventHeaders();
        if (headers.find(Aws::Utils::Event::MESSAGE_TYPE_HEADER) == headers.end())
        {
            AWS_LOGSTREAM_WARN(MOCK_EVENT_STREAM_HANDLER_CLASS_TAG, "Header: " << Aws::Utils::Event::MESSAGE_TYPE_HEADER << " not found in the message.");
            return;
        }

        switch (Aws::Utils::Event::Message::GetMessageTypeForName(headers[Aws::Utils::Event::MESSAGE_TYPE_HEADER].GetEventHeaderValueAsString()))
        {
        case Aws::Utils::Event::Message::MessageType::EVENT:
            if (headers.find(Aws::Utils::Event::EVENT_TYPE_HEADER) == headers.end())
            {
                AWS_LOGSTREAM_WARN(MOCK_EVENT_STREAM_HANDLER_CLASS_TAG, "Header: " << Aws::Utils::Event::EVENT_TYPE_HEADER << " not found in the message.");
                return;
            }
            switch (GetEventTypeForName(headers[Aws::Utils::Event::EVENT_TYPE_HEADER].GetEventHeaderValueAsString()))
            {
            case EventType::RECORDS:
                m_onRecordsCount++;
                break;
            case EventType::CONT:
                m_onContCount++;
                break;
            case EventType::PROGRESS:
                m_onProgressCount++;
                break;
            case EventType::STATS:
                m_onStatsCount++;
                break;
            case EventType::END:
                m_onEndCount++;
                break;
            default:
                AWS_LOGSTREAM_WARN(MOCK_EVENT_STREAM_HANDLER_CLASS_TAG, "Unexpected event type: " << headers[Aws::Utils::Event::EVENT_TYPE_HEADER].GetEventHeaderValueAsString());
                break;
            }
            break;
        case Aws::Utils::Event::Message::MessageType::REQUEST_LEVEL_ERROR:
            m_requestLevelErrorsCount++;
            break;
        case Aws::Utils::Event::Message::MessageType::REQUEST_LEVEL_EXCEPTION:
            m_requestLevelExceptionsCount++;
            break;
        default:
            AWS_LOGSTREAM_WARN(MOCK_EVENT_STREAM_HANDLER_CLASS_TAG, "Unexpected message type: " << headers[Aws::Utils::Event::MESSAGE_TYPE_HEADER].GetEventHeaderValueAsString());
            break;
        }
    }

    static EventType GetEventTypeForName(const Aws::String& name)
    {
        int hashCode = Aws::Utils::HashingUtils::HashString(name.c_str());
        if (hashCode == RECORDS_HASH)
        {
            return EventType::RECORDS;
        }
        else if (hashCode == CONT_HASH)
        {
            return EventType::CONT;
        }
        else if (hashCode == PROGRESS_HASH)
        {
            return EventType::PROGRESS;
        }
        else if (hashCode == STATS_HASH)
        {
            return EventType::STATS;
        }
        else if (hashCode == END_HASH)
        {
            return EventType::END;
        }
        else
        {
            return EventType::UNKNOWN;
        }
    }

    static Aws::String GetNameForEventType(EventType value)
    {
        switch (value)
        {
        case EventType::RECORDS:
            return "Records";
        case EventType::CONT:
            return "Cont";
        case EventType::PROGRESS:
            return "Progress";
        case EventType::STATS:
            return "Stats";
        case EventType::END:
            return "End";
        default:
            return "Unknown";
        }
    }

    size_t m_onPayloadSegmentCount;
    size_t m_onCompletePayloadCount;
    size_t m_onPreludeReceivedCount;
    size_t m_onHeaderReceivedCount;
    size_t m_requestLevelErrorsCount;
    size_t m_requestLevelExceptionsCount;

    size_t m_onRecordsCount;
    size_t m_onContCount;
    size_t m_onProgressCount;
    size_t m_onStatsCount;
    size_t m_onEndCount;

    size_t m_internalErrorsCount;
    Aws::Utils::Event::EventStreamErrors m_error;
    Aws::String m_errorMessage;
};
