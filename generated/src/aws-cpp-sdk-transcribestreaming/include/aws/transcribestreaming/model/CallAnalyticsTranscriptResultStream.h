/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/model/UtteranceEvent.h>
#include <aws/transcribestreaming/model/CategoryEvent.h>
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
   * <p>Contains detailed information about your real-time Call Analytics session.
   * These details are provided in the <code>UtteranceEvent</code> and
   * <code>CategoryEvent</code> objects.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/CallAnalyticsTranscriptResultStream">AWS
   * API Reference</a></p>
   */
  class CallAnalyticsTranscriptResultStream
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API CallAnalyticsTranscriptResultStream() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API CallAnalyticsTranscriptResultStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API CallAnalyticsTranscriptResultStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains set of transcription results from one or more audio segments, along
     * with additional information per your request parameters. This can include
     * information relating to channel definitions, partial result stabilization,
     * sentiment, issue detection, and other transcription-related data.</p>
     */
    inline const UtteranceEvent& GetUtteranceEvent() const { return m_utteranceEvent; }
    inline bool UtteranceEventHasBeenSet() const { return m_utteranceEventHasBeenSet; }
    template<typename UtteranceEventT = UtteranceEvent>
    void SetUtteranceEvent(UtteranceEventT&& value) { m_utteranceEventHasBeenSet = true; m_utteranceEvent = std::forward<UtteranceEventT>(value); }
    template<typename UtteranceEventT = UtteranceEvent>
    CallAnalyticsTranscriptResultStream& WithUtteranceEvent(UtteranceEventT&& value) { SetUtteranceEvent(std::forward<UtteranceEventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information on matched categories that were used to generate
     * real-time supervisor alerts.</p>
     */
    inline const CategoryEvent& GetCategoryEvent() const { return m_categoryEvent; }
    inline bool CategoryEventHasBeenSet() const { return m_categoryEventHasBeenSet; }
    template<typename CategoryEventT = CategoryEvent>
    void SetCategoryEvent(CategoryEventT&& value) { m_categoryEventHasBeenSet = true; m_categoryEvent = std::forward<CategoryEventT>(value); }
    template<typename CategoryEventT = CategoryEvent>
    CallAnalyticsTranscriptResultStream& WithCategoryEvent(CategoryEventT&& value) { SetCategoryEvent(std::forward<CategoryEventT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TranscribeStreamingServiceError& GetBadRequestException() const { return m_badRequestException; }
    inline bool BadRequestExceptionHasBeenSet() const { return m_badRequestExceptionHasBeenSet; }
    template<typename BadRequestExceptionT = TranscribeStreamingServiceError>
    void SetBadRequestException(BadRequestExceptionT&& value) { m_badRequestExceptionHasBeenSet = true; m_badRequestException = std::forward<BadRequestExceptionT>(value); }
    template<typename BadRequestExceptionT = TranscribeStreamingServiceError>
    CallAnalyticsTranscriptResultStream& WithBadRequestException(BadRequestExceptionT&& value) { SetBadRequestException(std::forward<BadRequestExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TranscribeStreamingServiceError& GetLimitExceededException() const { return m_limitExceededException; }
    inline bool LimitExceededExceptionHasBeenSet() const { return m_limitExceededExceptionHasBeenSet; }
    template<typename LimitExceededExceptionT = TranscribeStreamingServiceError>
    void SetLimitExceededException(LimitExceededExceptionT&& value) { m_limitExceededExceptionHasBeenSet = true; m_limitExceededException = std::forward<LimitExceededExceptionT>(value); }
    template<typename LimitExceededExceptionT = TranscribeStreamingServiceError>
    CallAnalyticsTranscriptResultStream& WithLimitExceededException(LimitExceededExceptionT&& value) { SetLimitExceededException(std::forward<LimitExceededExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TranscribeStreamingServiceError& GetInternalFailureException() const { return m_internalFailureException; }
    inline bool InternalFailureExceptionHasBeenSet() const { return m_internalFailureExceptionHasBeenSet; }
    template<typename InternalFailureExceptionT = TranscribeStreamingServiceError>
    void SetInternalFailureException(InternalFailureExceptionT&& value) { m_internalFailureExceptionHasBeenSet = true; m_internalFailureException = std::forward<InternalFailureExceptionT>(value); }
    template<typename InternalFailureExceptionT = TranscribeStreamingServiceError>
    CallAnalyticsTranscriptResultStream& WithInternalFailureException(InternalFailureExceptionT&& value) { SetInternalFailureException(std::forward<InternalFailureExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TranscribeStreamingServiceError& GetConflictException() const { return m_conflictException; }
    inline bool ConflictExceptionHasBeenSet() const { return m_conflictExceptionHasBeenSet; }
    template<typename ConflictExceptionT = TranscribeStreamingServiceError>
    void SetConflictException(ConflictExceptionT&& value) { m_conflictExceptionHasBeenSet = true; m_conflictException = std::forward<ConflictExceptionT>(value); }
    template<typename ConflictExceptionT = TranscribeStreamingServiceError>
    CallAnalyticsTranscriptResultStream& WithConflictException(ConflictExceptionT&& value) { SetConflictException(std::forward<ConflictExceptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TranscribeStreamingServiceError& GetServiceUnavailableException() const { return m_serviceUnavailableException; }
    inline bool ServiceUnavailableExceptionHasBeenSet() const { return m_serviceUnavailableExceptionHasBeenSet; }
    template<typename ServiceUnavailableExceptionT = TranscribeStreamingServiceError>
    void SetServiceUnavailableException(ServiceUnavailableExceptionT&& value) { m_serviceUnavailableExceptionHasBeenSet = true; m_serviceUnavailableException = std::forward<ServiceUnavailableExceptionT>(value); }
    template<typename ServiceUnavailableExceptionT = TranscribeStreamingServiceError>
    CallAnalyticsTranscriptResultStream& WithServiceUnavailableException(ServiceUnavailableExceptionT&& value) { SetServiceUnavailableException(std::forward<ServiceUnavailableExceptionT>(value)); return *this;}
    ///@}
  private:

    UtteranceEvent m_utteranceEvent;
    bool m_utteranceEventHasBeenSet = false;

    CategoryEvent m_categoryEvent;
    bool m_categoryEventHasBeenSet = false;

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
