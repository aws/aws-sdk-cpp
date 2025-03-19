/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/model/MedicalScribeTranscriptEvent.h>
#include <aws/transcribestreaming/model/BadRequestException.h>
#include <aws/transcribestreaming/model/LimitExceededException.h>
#include <aws/transcribestreaming/model/InternalFailureException.h>
#include <aws/transcribestreaming/model/ConflictException.h>
#include <aws/transcribestreaming/model/ServiceUnavailableException.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace TranscribeStreamingService
{
namespace Model
{

  /**
   * <p>Result stream where you will receive the output events. The details are
   * provided in the <code>MedicalScribeTranscriptEvent</code> object. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/MedicalScribeResultStream">AWS
   * API Reference</a></p>
   */
  class MedicalScribeResultStream
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeResultStream() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeResultStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeResultStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The transcript event that contains real-time transcription results. </p>
     */
    inline const MedicalScribeTranscriptEvent& GetTranscriptEvent() const { return m_transcriptEvent; }
    inline bool TranscriptEventHasBeenSet() const { return m_transcriptEventHasBeenSet; }
    template<typename TranscriptEventT = MedicalScribeTranscriptEvent>
    void SetTranscriptEvent(TranscriptEventT&& value) { m_transcriptEventHasBeenSet = true; m_transcriptEvent = std::forward<TranscriptEventT>(value); }
    template<typename TranscriptEventT = MedicalScribeTranscriptEvent>
    MedicalScribeResultStream& WithTranscriptEvent(TranscriptEventT&& value) { SetTranscriptEvent(std::forward<TranscriptEventT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const BadRequestException& GetBadRequestException() const { return m_badRequestException; }
    inline bool BadRequestExceptionHasBeenSet() const { return m_badRequestExceptionHasBeenSet; }
    template<typename BadRequestExceptionT = BadRequestException>
    void SetBadRequestException(BadRequestExceptionT&& value) { m_badRequestExceptionHasBeenSet = true; m_badRequestException = std::forward<BadRequestExceptionT>(value); }
    template<typename BadRequestExceptionT = BadRequestException>
    MedicalScribeResultStream& WithBadRequestException(BadRequestExceptionT&& value) { SetBadRequestException(std::forward<BadRequestExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LimitExceededException& GetLimitExceededException() const { return m_limitExceededException; }
    inline bool LimitExceededExceptionHasBeenSet() const { return m_limitExceededExceptionHasBeenSet; }
    template<typename LimitExceededExceptionT = LimitExceededException>
    void SetLimitExceededException(LimitExceededExceptionT&& value) { m_limitExceededExceptionHasBeenSet = true; m_limitExceededException = std::forward<LimitExceededExceptionT>(value); }
    template<typename LimitExceededExceptionT = LimitExceededException>
    MedicalScribeResultStream& WithLimitExceededException(LimitExceededExceptionT&& value) { SetLimitExceededException(std::forward<LimitExceededExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const InternalFailureException& GetInternalFailureException() const { return m_internalFailureException; }
    inline bool InternalFailureExceptionHasBeenSet() const { return m_internalFailureExceptionHasBeenSet; }
    template<typename InternalFailureExceptionT = InternalFailureException>
    void SetInternalFailureException(InternalFailureExceptionT&& value) { m_internalFailureExceptionHasBeenSet = true; m_internalFailureException = std::forward<InternalFailureExceptionT>(value); }
    template<typename InternalFailureExceptionT = InternalFailureException>
    MedicalScribeResultStream& WithInternalFailureException(InternalFailureExceptionT&& value) { SetInternalFailureException(std::forward<InternalFailureExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ConflictException& GetConflictException() const { return m_conflictException; }
    inline bool ConflictExceptionHasBeenSet() const { return m_conflictExceptionHasBeenSet; }
    template<typename ConflictExceptionT = ConflictException>
    void SetConflictException(ConflictExceptionT&& value) { m_conflictExceptionHasBeenSet = true; m_conflictException = std::forward<ConflictExceptionT>(value); }
    template<typename ConflictExceptionT = ConflictException>
    MedicalScribeResultStream& WithConflictException(ConflictExceptionT&& value) { SetConflictException(std::forward<ConflictExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ServiceUnavailableException& GetServiceUnavailableException() const { return m_serviceUnavailableException; }
    inline bool ServiceUnavailableExceptionHasBeenSet() const { return m_serviceUnavailableExceptionHasBeenSet; }
    template<typename ServiceUnavailableExceptionT = ServiceUnavailableException>
    void SetServiceUnavailableException(ServiceUnavailableExceptionT&& value) { m_serviceUnavailableExceptionHasBeenSet = true; m_serviceUnavailableException = std::forward<ServiceUnavailableExceptionT>(value); }
    template<typename ServiceUnavailableExceptionT = ServiceUnavailableException>
    MedicalScribeResultStream& WithServiceUnavailableException(ServiceUnavailableExceptionT&& value) { SetServiceUnavailableException(std::forward<ServiceUnavailableExceptionT>(value)); return *this;}
    ///@}
  private:

    MedicalScribeTranscriptEvent m_transcriptEvent;
    bool m_transcriptEventHasBeenSet = false;

    BadRequestException m_badRequestException;
    bool m_badRequestExceptionHasBeenSet = false;

    LimitExceededException m_limitExceededException;
    bool m_limitExceededExceptionHasBeenSet = false;

    InternalFailureException m_internalFailureException;
    bool m_internalFailureExceptionHasBeenSet = false;

    ConflictException m_conflictException;
    bool m_conflictExceptionHasBeenSet = false;

    ServiceUnavailableException m_serviceUnavailableException;
    bool m_serviceUnavailableExceptionHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
