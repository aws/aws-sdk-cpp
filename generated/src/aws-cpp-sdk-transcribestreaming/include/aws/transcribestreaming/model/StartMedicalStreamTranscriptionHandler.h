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

#include <aws/transcribestreaming/model/StartMedicalStreamTranscriptionInitialResponse.h>
#include <aws/transcribestreaming/model/MedicalTranscriptEvent.h>

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{
    enum class StartMedicalStreamTranscriptionEventType
    {
        INITIAL_RESPONSE,
        TRANSCRIPTEVENT,
        UNKNOWN
    };

    class StartMedicalStreamTranscriptionHandler : public Aws::Utils::Event::EventStreamHandler
    {
        typedef std::function<void(const StartMedicalStreamTranscriptionInitialResponse&)> StartMedicalStreamTranscriptionInitialResponseCallback;
        typedef std::function<void(const StartMedicalStreamTranscriptionInitialResponse&, const Utils::Event::InitialResponseType)> StartMedicalStreamTranscriptionInitialResponseCallbackEx;
        typedef std::function<void(const MedicalTranscriptEvent&)> MedicalTranscriptEventCallback;
        typedef std::function<void(const Aws::Client::AWSError<TranscribeStreamingServiceErrors>& error)> ErrorCallback;

    public:
        AWS_TRANSCRIBESTREAMINGSERVICE_API StartMedicalStreamTranscriptionHandler();
        AWS_TRANSCRIBESTREAMINGSERVICE_API StartMedicalStreamTranscriptionHandler& operator=(const StartMedicalStreamTranscriptionHandler&) = default;
        AWS_TRANSCRIBESTREAMINGSERVICE_API StartMedicalStreamTranscriptionHandler(const StartMedicalStreamTranscriptionHandler&) = default;

        AWS_TRANSCRIBESTREAMINGSERVICE_API virtual void OnEvent() override;

        ///@{
        /**
         * Sets an initial response callback. This callback gets called on the initial StartMedicalStreamTranscription Operation response.
         *   This can be either "initial-response" decoded event frame or decoded HTTP headers received on connection.
         *   This callback may get called more than once (i.e. on connection headers received and then on the initial-response event received).
         * @param callback
         */
        inline void SetInitialResponseCallbackEx(const StartMedicalStreamTranscriptionInitialResponseCallbackEx& callback) { m_onInitialResponse = callback; }
        /**
         * Sets an initial response callback (a legacy one that does not distinguish whether response originates from headers or from the event).
         */
        inline void SetInitialResponseCallback(const StartMedicalStreamTranscriptionInitialResponseCallback& noArgCallback)
        {
            m_onInitialResponse = [noArgCallback](const StartMedicalStreamTranscriptionInitialResponse& rs, const Utils::Event::InitialResponseType) { return noArgCallback(rs); };
        }
        ///@}
        inline void SetMedicalTranscriptEventCallback(const MedicalTranscriptEventCallback& callback) { m_onMedicalTranscriptEvent = callback; }
        inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

        inline StartMedicalStreamTranscriptionInitialResponseCallbackEx& GetInitialResponseCallbackEx() { return m_onInitialResponse; }

    private:
        AWS_TRANSCRIBESTREAMINGSERVICE_API void HandleEventInMessage();
        AWS_TRANSCRIBESTREAMINGSERVICE_API void HandleErrorInMessage();
        AWS_TRANSCRIBESTREAMINGSERVICE_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

        StartMedicalStreamTranscriptionInitialResponseCallbackEx m_onInitialResponse;
        MedicalTranscriptEventCallback m_onMedicalTranscriptEvent;
        ErrorCallback m_onError;
    };

namespace StartMedicalStreamTranscriptionEventMapper
{
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartMedicalStreamTranscriptionEventType GetStartMedicalStreamTranscriptionEventTypeForName(const Aws::String& name);

    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForStartMedicalStreamTranscriptionEventType(StartMedicalStreamTranscriptionEventType value);
} // namespace StartMedicalStreamTranscriptionEventMapper
} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
