/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/event/EventStreamHandler.h>
#include <aws/core/client/AWSError.h>
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceErrors.h>

#include <aws/transcribestreaming/model/TranscriptEvent.h>

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{
    enum class StartStreamTranscriptionEventType
    {
        TRANSCRIPTEVENT,
        UNKNOWN
    };

    class StartStreamTranscriptionHandler : public Aws::Utils::Event::EventStreamHandler
    {
        typedef std::function<void(const TranscriptEvent&)> TranscriptEventCallback;
        typedef std::function<void(const Aws::Client::AWSError<TranscribeStreamingServiceErrors>& error)> ErrorCallback;

    public:
        AWS_TRANSCRIBESTREAMINGSERVICE_API StartStreamTranscriptionHandler();
        AWS_TRANSCRIBESTREAMINGSERVICE_API StartStreamTranscriptionHandler& operator=(const StartStreamTranscriptionHandler&) = default;

        AWS_TRANSCRIBESTREAMINGSERVICE_API virtual void OnEvent() override;

        inline void SetTranscriptEventCallback(const TranscriptEventCallback& callback) { m_onTranscriptEvent = callback; }
        inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

    private:
        AWS_TRANSCRIBESTREAMINGSERVICE_API void HandleEventInMessage();
        AWS_TRANSCRIBESTREAMINGSERVICE_API void HandleErrorInMessage();
        AWS_TRANSCRIBESTREAMINGSERVICE_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

        TranscriptEventCallback m_onTranscriptEvent;
        ErrorCallback m_onError;
    };

namespace StartStreamTranscriptionEventMapper
{
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartStreamTranscriptionEventType GetStartStreamTranscriptionEventTypeForName(const Aws::String& name);

    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForStartStreamTranscriptionEventType(StartStreamTranscriptionEventType value);
} // namespace StartStreamTranscriptionEventMapper
} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
