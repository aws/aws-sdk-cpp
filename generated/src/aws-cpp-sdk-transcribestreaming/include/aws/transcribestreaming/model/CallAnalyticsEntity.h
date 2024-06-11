﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains entities identified as personally identifiable information (PII) in
   * your transcription output, along with various associated attributes. Examples
   * include category, confidence score, content, type, and start and end
   * times.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/CallAnalyticsEntity">AWS
   * API Reference</a></p>
   */
  class CallAnalyticsEntity
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API CallAnalyticsEntity();
    AWS_TRANSCRIBESTREAMINGSERVICE_API CallAnalyticsEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API CallAnalyticsEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time, in milliseconds, from the beginning of the audio stream to the
     * start of the identified entity.</p>
     */
    inline long long GetBeginOffsetMillis() const{ return m_beginOffsetMillis; }
    inline bool BeginOffsetMillisHasBeenSet() const { return m_beginOffsetMillisHasBeenSet; }
    inline void SetBeginOffsetMillis(long long value) { m_beginOffsetMillisHasBeenSet = true; m_beginOffsetMillis = value; }
    inline CallAnalyticsEntity& WithBeginOffsetMillis(long long value) { SetBeginOffsetMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds, from the beginning of the audio stream to the end
     * of the identified entity.</p>
     */
    inline long long GetEndOffsetMillis() const{ return m_endOffsetMillis; }
    inline bool EndOffsetMillisHasBeenSet() const { return m_endOffsetMillisHasBeenSet; }
    inline void SetEndOffsetMillis(long long value) { m_endOffsetMillisHasBeenSet = true; m_endOffsetMillis = value; }
    inline CallAnalyticsEntity& WithEndOffsetMillis(long long value) { SetEndOffsetMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of information identified. For example, <code>PII</code>.</p>
     */
    inline const Aws::String& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }
    inline CallAnalyticsEntity& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}
    inline CallAnalyticsEntity& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}
    inline CallAnalyticsEntity& WithCategory(const char* value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of PII identified. For example, <code>NAME</code> or
     * <code>CREDIT_DEBIT_NUMBER</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline CallAnalyticsEntity& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline CallAnalyticsEntity& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline CallAnalyticsEntity& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The word or words that represent the identified entity.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }
    inline CallAnalyticsEntity& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline CallAnalyticsEntity& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline CallAnalyticsEntity& WithContent(const char* value) { SetContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The confidence score associated with the identification of an entity in your
     * transcript.</p> <p>Confidence scores are values between 0 and 1. A larger value
     * indicates a higher probability that the identified entity correctly matches the
     * entity spoken in your media.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline CallAnalyticsEntity& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}
  private:

    long long m_beginOffsetMillis;
    bool m_beginOffsetMillisHasBeenSet = false;

    long long m_endOffsetMillis;
    bool m_endOffsetMillisHasBeenSet = false;

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    double m_confidence;
    bool m_confidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
