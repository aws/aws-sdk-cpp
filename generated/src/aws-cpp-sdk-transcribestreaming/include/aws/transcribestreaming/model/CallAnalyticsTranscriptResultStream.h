/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/model/UtteranceEvent.h>
#include <aws/transcribestreaming/model/CategoryEvent.h>
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
   * <p>Contains detailed information about your Call Analytics streaming session.
   * These details are provided in the <code>UtteranceEvent</code> and
   * <code>CategoryEvent</code> objects.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/CallAnalyticsTranscriptResultStream">AWS
   * API Reference</a></p>
   */
  class CallAnalyticsTranscriptResultStream
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API CallAnalyticsTranscriptResultStream();
    AWS_TRANSCRIBESTREAMINGSERVICE_API CallAnalyticsTranscriptResultStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API CallAnalyticsTranscriptResultStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains set of transcription results from one or more audio segments, along
     * with additional information per your request parameters. This can include
     * information relating to channel definitions, partial result stabilization,
     * sentiment, issue detection, and other transcription-related data.</p>
     */
    inline const UtteranceEvent& GetUtteranceEvent() const{ return m_utteranceEvent; }

    /**
     * <p>Contains set of transcription results from one or more audio segments, along
     * with additional information per your request parameters. This can include
     * information relating to channel definitions, partial result stabilization,
     * sentiment, issue detection, and other transcription-related data.</p>
     */
    inline bool UtteranceEventHasBeenSet() const { return m_utteranceEventHasBeenSet; }

    /**
     * <p>Contains set of transcription results from one or more audio segments, along
     * with additional information per your request parameters. This can include
     * information relating to channel definitions, partial result stabilization,
     * sentiment, issue detection, and other transcription-related data.</p>
     */
    inline void SetUtteranceEvent(const UtteranceEvent& value) { m_utteranceEventHasBeenSet = true; m_utteranceEvent = value; }

    /**
     * <p>Contains set of transcription results from one or more audio segments, along
     * with additional information per your request parameters. This can include
     * information relating to channel definitions, partial result stabilization,
     * sentiment, issue detection, and other transcription-related data.</p>
     */
    inline void SetUtteranceEvent(UtteranceEvent&& value) { m_utteranceEventHasBeenSet = true; m_utteranceEvent = std::move(value); }

    /**
     * <p>Contains set of transcription results from one or more audio segments, along
     * with additional information per your request parameters. This can include
     * information relating to channel definitions, partial result stabilization,
     * sentiment, issue detection, and other transcription-related data.</p>
     */
    inline CallAnalyticsTranscriptResultStream& WithUtteranceEvent(const UtteranceEvent& value) { SetUtteranceEvent(value); return *this;}

    /**
     * <p>Contains set of transcription results from one or more audio segments, along
     * with additional information per your request parameters. This can include
     * information relating to channel definitions, partial result stabilization,
     * sentiment, issue detection, and other transcription-related data.</p>
     */
    inline CallAnalyticsTranscriptResultStream& WithUtteranceEvent(UtteranceEvent&& value) { SetUtteranceEvent(std::move(value)); return *this;}


    /**
     * <p>Provides information on matched categories that were used to generate
     * real-time supervisor alerts.</p>
     */
    inline const CategoryEvent& GetCategoryEvent() const{ return m_categoryEvent; }

    /**
     * <p>Provides information on matched categories that were used to generate
     * real-time supervisor alerts.</p>
     */
    inline bool CategoryEventHasBeenSet() const { return m_categoryEventHasBeenSet; }

    /**
     * <p>Provides information on matched categories that were used to generate
     * real-time supervisor alerts.</p>
     */
    inline void SetCategoryEvent(const CategoryEvent& value) { m_categoryEventHasBeenSet = true; m_categoryEvent = value; }

    /**
     * <p>Provides information on matched categories that were used to generate
     * real-time supervisor alerts.</p>
     */
    inline void SetCategoryEvent(CategoryEvent&& value) { m_categoryEventHasBeenSet = true; m_categoryEvent = std::move(value); }

    /**
     * <p>Provides information on matched categories that were used to generate
     * real-time supervisor alerts.</p>
     */
    inline CallAnalyticsTranscriptResultStream& WithCategoryEvent(const CategoryEvent& value) { SetCategoryEvent(value); return *this;}

    /**
     * <p>Provides information on matched categories that were used to generate
     * real-time supervisor alerts.</p>
     */
    inline CallAnalyticsTranscriptResultStream& WithCategoryEvent(CategoryEvent&& value) { SetCategoryEvent(std::move(value)); return *this;}


    
    inline const BadRequestException& GetBadRequestException() const{ return m_badRequestException; }

    
    inline bool BadRequestExceptionHasBeenSet() const { return m_badRequestExceptionHasBeenSet; }

    
    inline void SetBadRequestException(const BadRequestException& value) { m_badRequestExceptionHasBeenSet = true; m_badRequestException = value; }

    
    inline void SetBadRequestException(BadRequestException&& value) { m_badRequestExceptionHasBeenSet = true; m_badRequestException = std::move(value); }

    
    inline CallAnalyticsTranscriptResultStream& WithBadRequestException(const BadRequestException& value) { SetBadRequestException(value); return *this;}

    
    inline CallAnalyticsTranscriptResultStream& WithBadRequestException(BadRequestException&& value) { SetBadRequestException(std::move(value)); return *this;}


    
    inline const LimitExceededException& GetLimitExceededException() const{ return m_limitExceededException; }

    
    inline bool LimitExceededExceptionHasBeenSet() const { return m_limitExceededExceptionHasBeenSet; }

    
    inline void SetLimitExceededException(const LimitExceededException& value) { m_limitExceededExceptionHasBeenSet = true; m_limitExceededException = value; }

    
    inline void SetLimitExceededException(LimitExceededException&& value) { m_limitExceededExceptionHasBeenSet = true; m_limitExceededException = std::move(value); }

    
    inline CallAnalyticsTranscriptResultStream& WithLimitExceededException(const LimitExceededException& value) { SetLimitExceededException(value); return *this;}

    
    inline CallAnalyticsTranscriptResultStream& WithLimitExceededException(LimitExceededException&& value) { SetLimitExceededException(std::move(value)); return *this;}


    
    inline const InternalFailureException& GetInternalFailureException() const{ return m_internalFailureException; }

    
    inline bool InternalFailureExceptionHasBeenSet() const { return m_internalFailureExceptionHasBeenSet; }

    
    inline void SetInternalFailureException(const InternalFailureException& value) { m_internalFailureExceptionHasBeenSet = true; m_internalFailureException = value; }

    
    inline void SetInternalFailureException(InternalFailureException&& value) { m_internalFailureExceptionHasBeenSet = true; m_internalFailureException = std::move(value); }

    
    inline CallAnalyticsTranscriptResultStream& WithInternalFailureException(const InternalFailureException& value) { SetInternalFailureException(value); return *this;}

    
    inline CallAnalyticsTranscriptResultStream& WithInternalFailureException(InternalFailureException&& value) { SetInternalFailureException(std::move(value)); return *this;}


    
    inline const ConflictException& GetConflictException() const{ return m_conflictException; }

    
    inline bool ConflictExceptionHasBeenSet() const { return m_conflictExceptionHasBeenSet; }

    
    inline void SetConflictException(const ConflictException& value) { m_conflictExceptionHasBeenSet = true; m_conflictException = value; }

    
    inline void SetConflictException(ConflictException&& value) { m_conflictExceptionHasBeenSet = true; m_conflictException = std::move(value); }

    
    inline CallAnalyticsTranscriptResultStream& WithConflictException(const ConflictException& value) { SetConflictException(value); return *this;}

    
    inline CallAnalyticsTranscriptResultStream& WithConflictException(ConflictException&& value) { SetConflictException(std::move(value)); return *this;}


    
    inline const ServiceUnavailableException& GetServiceUnavailableException() const{ return m_serviceUnavailableException; }

    
    inline bool ServiceUnavailableExceptionHasBeenSet() const { return m_serviceUnavailableExceptionHasBeenSet; }

    
    inline void SetServiceUnavailableException(const ServiceUnavailableException& value) { m_serviceUnavailableExceptionHasBeenSet = true; m_serviceUnavailableException = value; }

    
    inline void SetServiceUnavailableException(ServiceUnavailableException&& value) { m_serviceUnavailableExceptionHasBeenSet = true; m_serviceUnavailableException = std::move(value); }

    
    inline CallAnalyticsTranscriptResultStream& WithServiceUnavailableException(const ServiceUnavailableException& value) { SetServiceUnavailableException(value); return *this;}

    
    inline CallAnalyticsTranscriptResultStream& WithServiceUnavailableException(ServiceUnavailableException&& value) { SetServiceUnavailableException(std::move(value)); return *this;}

  private:

    UtteranceEvent m_utteranceEvent;
    bool m_utteranceEventHasBeenSet = false;

    CategoryEvent m_categoryEvent;
    bool m_categoryEventHasBeenSet = false;

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
