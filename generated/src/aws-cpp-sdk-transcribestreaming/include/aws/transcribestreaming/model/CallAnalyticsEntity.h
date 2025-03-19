/**
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
    AWS_TRANSCRIBESTREAMINGSERVICE_API CallAnalyticsEntity() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API CallAnalyticsEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API CallAnalyticsEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time, in milliseconds, from the beginning of the audio stream to the
     * start of the identified entity.</p>
     */
    inline long long GetBeginOffsetMillis() const { return m_beginOffsetMillis; }
    inline bool BeginOffsetMillisHasBeenSet() const { return m_beginOffsetMillisHasBeenSet; }
    inline void SetBeginOffsetMillis(long long value) { m_beginOffsetMillisHasBeenSet = true; m_beginOffsetMillis = value; }
    inline CallAnalyticsEntity& WithBeginOffsetMillis(long long value) { SetBeginOffsetMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds, from the beginning of the audio stream to the end
     * of the identified entity.</p>
     */
    inline long long GetEndOffsetMillis() const { return m_endOffsetMillis; }
    inline bool EndOffsetMillisHasBeenSet() const { return m_endOffsetMillisHasBeenSet; }
    inline void SetEndOffsetMillis(long long value) { m_endOffsetMillisHasBeenSet = true; m_endOffsetMillis = value; }
    inline CallAnalyticsEntity& WithEndOffsetMillis(long long value) { SetEndOffsetMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of information identified. For example, <code>PII</code>.</p>
     */
    inline const Aws::String& GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    template<typename CategoryT = Aws::String>
    void SetCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category = std::forward<CategoryT>(value); }
    template<typename CategoryT = Aws::String>
    CallAnalyticsEntity& WithCategory(CategoryT&& value) { SetCategory(std::forward<CategoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of PII identified. For example, <code>NAME</code> or
     * <code>CREDIT_DEBIT_NUMBER</code>.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    CallAnalyticsEntity& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The word or words that represent the identified entity.</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    CallAnalyticsEntity& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The confidence score associated with the identification of an entity in your
     * transcript.</p> <p>Confidence scores are values between 0 and 1. A larger value
     * indicates a higher probability that the identified entity correctly matches the
     * entity spoken in your media.</p>
     */
    inline double GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline CallAnalyticsEntity& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}
  private:

    long long m_beginOffsetMillis{0};
    bool m_beginOffsetMillisHasBeenSet = false;

    long long m_endOffsetMillis{0};
    bool m_endOffsetMillisHasBeenSet = false;

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    double m_confidence{0.0};
    bool m_confidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
