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

#include <aws/transcribestreaming/model/StartMedicalScribeStreamInitialResponse.h>
#include <aws/transcribestreaming/model/MedicalScribeTranscriptEvent.h>

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{
    enum class StartMedicalScribeStreamEventType
    {
        INITIAL_RESPONSE,
        TRANSCRIPTEVENT,
        UNKNOWN
    };

    class StartMedicalScribeStreamHandler : public Aws::Utils::Event::EventStreamHandler
    {
        typedef std::function<void(const StartMedicalScribeStreamInitialResponse&)> StartMedicalScribeStreamInitialResponseCallback;
        typedef std::function<void(const StartMedicalScribeStreamInitialResponse&, const Utils::Event::InitialResponseType)> StartMedicalScribeStreamInitialResponseCallbackEx;
        typedef std::function<void(const MedicalScribeTranscriptEvent&)> MedicalScribeTranscriptEventCallback;
        typedef std::function<void(const Aws::Client::AWSError<TranscribeStreamingServiceErrors>& error)> ErrorCallback;

    public:
        AWS_TRANSCRIBESTREAMINGSERVICE_API StartMedicalScribeStreamHandler();
        AWS_TRANSCRIBESTREAMINGSERVICE_API StartMedicalScribeStreamHandler& operator=(const StartMedicalScribeStreamHandler&) = default;
        AWS_TRANSCRIBESTREAMINGSERVICE_API StartMedicalScribeStreamHandler(const StartMedicalScribeStreamHandler&) = default;

        AWS_TRANSCRIBESTREAMINGSERVICE_API virtual void OnEvent() override;

        ///@{
        /**
         * Sets an initial response callback. This callback gets called on the initial StartMedicalScribeStream Operation response.
         *   This can be either "initial-response" decoded event frame or decoded HTTP headers received on connection.
         *   This callback may get called more than once (i.e. on connection headers received and then on the initial-response event received).
         * @param callback
         */
        inline void SetInitialResponseCallbackEx(const StartMedicalScribeStreamInitialResponseCallbackEx& callback) { m_onInitialResponse = callback; }
        /**
         * Sets an initial response callback (a legacy one that does not distinguish whether response originates from headers or from the event).
         */
        inline void SetInitialResponseCallback(const StartMedicalScribeStreamInitialResponseCallback& noArgCallback)
        {
            m_onInitialResponse = [noArgCallback](const StartMedicalScribeStreamInitialResponse& rs, const Utils::Event::InitialResponseType) { return noArgCallback(rs); };
        }
        ///@}
        inline void SetMedicalScribeTranscriptEventCallback(const MedicalScribeTranscriptEventCallback& callback) { m_onMedicalScribeTranscriptEvent = callback; }
        inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

        inline StartMedicalScribeStreamInitialResponseCallbackEx& GetInitialResponseCallbackEx() { return m_onInitialResponse; }

    private:
        AWS_TRANSCRIBESTREAMINGSERVICE_API void HandleEventInMessage();
        AWS_TRANSCRIBESTREAMINGSERVICE_API void HandleErrorInMessage();
        AWS_TRANSCRIBESTREAMINGSERVICE_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

        StartMedicalScribeStreamInitialResponseCallbackEx m_onInitialResponse;
        MedicalScribeTranscriptEventCallback m_onMedicalScribeTranscriptEvent;
        ErrorCallback m_onError;
    };

namespace StartMedicalScribeStreamEventMapper
{
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartMedicalScribeStreamEventType GetStartMedicalScribeStreamEventTypeForName(const Aws::String& name);

    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForStartMedicalScribeStreamEventType(StartMedicalScribeStreamEventType value);
} // namespace StartMedicalScribeStreamEventMapper
} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
