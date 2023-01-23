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

#include <aws/transcribestreaming/model/UtteranceEvent.h>
#include <aws/transcribestreaming/model/CategoryEvent.h>

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{
    enum class StartCallAnalyticsStreamTranscriptionEventType
    {
        UTTERANCEEVENT,
        CATEGORYEVENT,
        UNKNOWN
    };

    class StartCallAnalyticsStreamTranscriptionHandler : public Aws::Utils::Event::EventStreamHandler
    {
        typedef std::function<void(const UtteranceEvent&)> UtteranceEventCallback;
        typedef std::function<void(const CategoryEvent&)> CategoryEventCallback;
        typedef std::function<void(const Aws::Client::AWSError<TranscribeStreamingServiceErrors>& error)> ErrorCallback;

    public:
        AWS_TRANSCRIBESTREAMINGSERVICE_API StartCallAnalyticsStreamTranscriptionHandler();
        AWS_TRANSCRIBESTREAMINGSERVICE_API StartCallAnalyticsStreamTranscriptionHandler& operator=(const StartCallAnalyticsStreamTranscriptionHandler&) = default;

        AWS_TRANSCRIBESTREAMINGSERVICE_API virtual void OnEvent() override;

        inline void SetUtteranceEventCallback(const UtteranceEventCallback& callback) { m_onUtteranceEvent = callback; }
        inline void SetCategoryEventCallback(const CategoryEventCallback& callback) { m_onCategoryEvent = callback; }
        inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

    private:
        AWS_TRANSCRIBESTREAMINGSERVICE_API void HandleEventInMessage();
        AWS_TRANSCRIBESTREAMINGSERVICE_API void HandleErrorInMessage();
        AWS_TRANSCRIBESTREAMINGSERVICE_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

        UtteranceEventCallback m_onUtteranceEvent;
        CategoryEventCallback m_onCategoryEvent;
        ErrorCallback m_onError;
    };

namespace StartCallAnalyticsStreamTranscriptionEventMapper
{
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartCallAnalyticsStreamTranscriptionEventType GetStartCallAnalyticsStreamTranscriptionEventTypeForName(const Aws::String& name);

    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForStartCallAnalyticsStreamTranscriptionEventType(StartCallAnalyticsStreamTranscriptionEventType value);
} // namespace StartCallAnalyticsStreamTranscriptionEventMapper
} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
