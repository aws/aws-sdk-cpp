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

#include <aws/transcribestreaming/model/StartCallAnalyticsStreamTranscriptionInitialResponse.h>
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
        INITIAL_RESPONSE,
        UTTERANCEEVENT,
        CATEGORYEVENT,
        UNKNOWN
    };

    class StartCallAnalyticsStreamTranscriptionHandler : public Aws::Utils::Event::EventStreamHandler
    {
        typedef std::function<void(const StartCallAnalyticsStreamTranscriptionInitialResponse&)> StartCallAnalyticsStreamTranscriptionInitialResponseCallback;
        typedef std::function<void(const StartCallAnalyticsStreamTranscriptionInitialResponse&, const Utils::Event::InitialResponseType)> StartCallAnalyticsStreamTranscriptionInitialResponseCallbackEx;
        typedef std::function<void(const UtteranceEvent&)> UtteranceEventCallback;
        typedef std::function<void(const CategoryEvent&)> CategoryEventCallback;
        typedef std::function<void(const Aws::Client::AWSError<TranscribeStreamingServiceErrors>& error)> ErrorCallback;

    public:
        AWS_TRANSCRIBESTREAMINGSERVICE_API StartCallAnalyticsStreamTranscriptionHandler();
        AWS_TRANSCRIBESTREAMINGSERVICE_API StartCallAnalyticsStreamTranscriptionHandler& operator=(const StartCallAnalyticsStreamTranscriptionHandler&) = default;
        AWS_TRANSCRIBESTREAMINGSERVICE_API StartCallAnalyticsStreamTranscriptionHandler(const StartCallAnalyticsStreamTranscriptionHandler&) = default;

        AWS_TRANSCRIBESTREAMINGSERVICE_API virtual void OnEvent() override;

        ///@{
        /**
         * Sets an initial response callback. This callback gets called on the initial StartCallAnalyticsStreamTranscription Operation response.
         *   This can be either "initial-response" decoded event frame or decoded HTTP headers received on connection.
         *   This callback may get called more than once (i.e. on connection headers received and then on the initial-response event received).
         * @param callback
         */
        inline void SetInitialResponseCallbackEx(const StartCallAnalyticsStreamTranscriptionInitialResponseCallbackEx& callback) { m_onInitialResponse = callback; }
        /**
         * Sets an initial response callback (a legacy one that does not distinguish whether response originates from headers or from the event).
         */
        inline void SetInitialResponseCallback(const StartCallAnalyticsStreamTranscriptionInitialResponseCallback& noArgCallback)
        {
            m_onInitialResponse = [noArgCallback](const StartCallAnalyticsStreamTranscriptionInitialResponse& rs, const Utils::Event::InitialResponseType) { return noArgCallback(rs); };
        }
        ///@}
        inline void SetUtteranceEventCallback(const UtteranceEventCallback& callback) { m_onUtteranceEvent = callback; }
        inline void SetCategoryEventCallback(const CategoryEventCallback& callback) { m_onCategoryEvent = callback; }
        inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

        inline StartCallAnalyticsStreamTranscriptionInitialResponseCallbackEx& GetInitialResponseCallbackEx() { return m_onInitialResponse; }

    private:
        AWS_TRANSCRIBESTREAMINGSERVICE_API void HandleEventInMessage();
        AWS_TRANSCRIBESTREAMINGSERVICE_API void HandleErrorInMessage();
        AWS_TRANSCRIBESTREAMINGSERVICE_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

        StartCallAnalyticsStreamTranscriptionInitialResponseCallbackEx m_onInitialResponse;
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
