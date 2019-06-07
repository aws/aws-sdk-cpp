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

#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/testing/mocks/event/MockEventStreamHandler.h>
#include <aws/core/utils/memory/AWSMemory.h>

class MockEventStreamDecoder : public Aws::Utils::Event::EventStreamDecoder
{
public:
    MockEventStreamDecoder(Aws::Utils::Event::EventStreamHandler* handler) : EventStreamDecoder(handler)
    {
        aws_event_stream_streaming_decoder_init(&m_decoder, Aws::get_aws_allocator(),
            onPayloadSegment,
            onPreludeReceived,
            onHeaderReceived,
            onError,
            (void*)handler);
    }

protected:
    static void onPayloadSegment(
        aws_event_stream_streaming_decoder* decoder,
        aws_byte_buf* payload,
        int8_t isFinalSegment,
        void* context)
    {
        auto handler = static_cast<MockEventStreamHandler*>(context);
        handler->m_onPayloadSegmentCount++;
        if (isFinalSegment == 1)
        {
            handler->m_onCompletePayloadCount++;
        }

        EventStreamDecoder::onPayloadSegment(decoder, payload, isFinalSegment, context);
    }

    static void onPreludeReceived(
        aws_event_stream_streaming_decoder* decoder,
        aws_event_stream_message_prelude* prelude,
        void* context)
    {
        auto handler = static_cast<MockEventStreamHandler*>(context);
        handler->m_onPreludeReceivedCount++;

        EventStreamDecoder::onPreludeReceived(decoder, prelude, context);
    }

    static void onHeaderReceived(
        aws_event_stream_streaming_decoder* decoder,
        aws_event_stream_message_prelude* prelude,
        aws_event_stream_header_value_pair* header,
        void* context)
    {
        auto handler = static_cast<MockEventStreamHandler*>(context);
        handler->m_onHeaderReceivedCount++;

        EventStreamDecoder::onHeaderReceived(decoder, prelude, header, context);
    }

    static void onError(
        aws_event_stream_streaming_decoder* decoder,
        aws_event_stream_message_prelude* prelude,
        int error_code,
        const char* message,
        void* context)
    {
        auto handler = static_cast<MockEventStreamHandler*>(context);
        handler->m_internalErrorsCount++;

        EventStreamDecoder::onError(decoder, prelude, error_code, message, context);
    }
};
