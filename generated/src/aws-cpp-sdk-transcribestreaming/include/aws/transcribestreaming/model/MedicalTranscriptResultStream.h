/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/model/MedicalTranscriptEvent.h>
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
   * <p>Contains detailed information about your streaming session.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/MedicalTranscriptResultStream">AWS
   * API Reference</a></p>
   */
  class MedicalTranscriptResultStream
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalTranscriptResultStream() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalTranscriptResultStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalTranscriptResultStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>MedicalTranscriptEvent</code> associated with a
     * <code>MedicalTranscriptResultStream</code>.</p> <p>Contains a set of
     * transcription results from one or more audio segments, along with additional
     * information per your request parameters. This can include information relating
     * to alternative transcriptions, channel identification, partial result
     * stabilization, language identification, and other transcription-related
     * data.</p>
     */
    inline const MedicalTranscriptEvent& GetTranscriptEvent() const { return m_transcriptEvent; }
    inline bool TranscriptEventHasBeenSet() const { return m_transcriptEventHasBeenSet; }
    template<typename TranscriptEventT = MedicalTranscriptEvent>
    void SetTranscriptEvent(TranscriptEventT&& value) { m_transcriptEventHasBeenSet = true; m_transcriptEvent = std::forward<TranscriptEventT>(value); }
    template<typename TranscriptEventT = MedicalTranscriptEvent>
    MedicalTranscriptResultStream& WithTranscriptEvent(TranscriptEventT&& value) { SetTranscriptEvent(std::forward<TranscriptEventT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TranscribeStreamingServiceError& GetBadRequestException() const { return m_badRequestException; }
    inline bool BadRequestExceptionHasBeenSet() const { return m_badRequestExceptionHasBeenSet; }
    template<typename BadRequestExceptionT = TranscribeStreamingServiceError>
    void SetBadRequestException(BadRequestExceptionT&& value) { m_badRequestExceptionHasBeenSet = true; m_badRequestException = std::forward<BadRequestExceptionT>(value); }
    template<typename BadRequestExceptionT = TranscribeStreamingServiceError>
    MedicalTranscriptResultStream& WithBadRequestException(BadRequestExceptionT&& value) { SetBadRequestException(std::forward<BadRequestExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TranscribeStreamingServiceError& GetLimitExceededException() const { return m_limitExceededException; }
    inline bool LimitExceededExceptionHasBeenSet() const { return m_limitExceededExceptionHasBeenSet; }
    template<typename LimitExceededExceptionT = TranscribeStreamingServiceError>
    void SetLimitExceededException(LimitExceededExceptionT&& value) { m_limitExceededExceptionHasBeenSet = true; m_limitExceededException = std::forward<LimitExceededExceptionT>(value); }
    template<typename LimitExceededExceptionT = TranscribeStreamingServiceError>
    MedicalTranscriptResultStream& WithLimitExceededException(LimitExceededExceptionT&& value) { SetLimitExceededException(std::forward<LimitExceededExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TranscribeStreamingServiceError& GetInternalFailureException() const { return m_internalFailureException; }
    inline bool InternalFailureExceptionHasBeenSet() const { return m_internalFailureExceptionHasBeenSet; }
    template<typename InternalFailureExceptionT = TranscribeStreamingServiceError>
    void SetInternalFailureException(InternalFailureExceptionT&& value) { m_internalFailureExceptionHasBeenSet = true; m_internalFailureException = std::forward<InternalFailureExceptionT>(value); }
    template<typename InternalFailureExceptionT = TranscribeStreamingServiceError>
    MedicalTranscriptResultStream& WithInternalFailureException(InternalFailureExceptionT&& value) { SetInternalFailureException(std::forward<InternalFailureExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TranscribeStreamingServiceError& GetConflictException() const { return m_conflictException; }
    inline bool ConflictExceptionHasBeenSet() const { return m_conflictExceptionHasBeenSet; }
    template<typename ConflictExceptionT = TranscribeStreamingServiceError>
    void SetConflictException(ConflictExceptionT&& value) { m_conflictExceptionHasBeenSet = true; m_conflictException = std::forward<ConflictExceptionT>(value); }
    template<typename ConflictExceptionT = TranscribeStreamingServiceError>
    MedicalTranscriptResultStream& WithConflictException(ConflictExceptionT&& value) { SetConflictException(std::forward<ConflictExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TranscribeStreamingServiceError& GetServiceUnavailableException() const { return m_serviceUnavailableException; }
    inline bool ServiceUnavailableExceptionHasBeenSet() const { return m_serviceUnavailableExceptionHasBeenSet; }
    template<typename ServiceUnavailableExceptionT = TranscribeStreamingServiceError>
    void SetServiceUnavailableException(ServiceUnavailableExceptionT&& value) { m_serviceUnavailableExceptionHasBeenSet = true; m_serviceUnavailableException = std::forward<ServiceUnavailableExceptionT>(value); }
    template<typename ServiceUnavailableExceptionT = TranscribeStreamingServiceError>
    MedicalTranscriptResultStream& WithServiceUnavailableException(ServiceUnavailableExceptionT&& value) { SetServiceUnavailableException(std::forward<ServiceUnavailableExceptionT>(value)); return *this;}
    ///@}
  private:

    MedicalTranscriptEvent m_transcriptEvent;
    bool m_transcriptEventHasBeenSet = false;

    TranscribeStreamingServiceError m_badRequestException;
    bool m_badRequestExceptionHasBeenSet = false;

    TranscribeStreamingServiceError m_limitExceededException;
    bool m_limitExceededExceptionHasBeenSet = false;

    TranscribeStreamingServiceError m_internalFailureException;
    bool m_internalFailureExceptionHasBeenSet = false;

    TranscribeStreamingServiceError m_conflictException;
    bool m_conflictExceptionHasBeenSet = false;

    TranscribeStreamingServiceError m_serviceUnavailableException;
    bool m_serviceUnavailableExceptionHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
