/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/model/ItemType.h>
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
   * <p>A word, phrase, or punctuation mark in your Call Analytics transcription
   * output, along with various associated attributes, such as confidence score,
   * type, and start and end times.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/CallAnalyticsItem">AWS
   * API Reference</a></p>
   */
  class CallAnalyticsItem
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API CallAnalyticsItem() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API CallAnalyticsItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API CallAnalyticsItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time, in milliseconds, from the beginning of the audio stream to the
     * start of the identified item.</p>
     */
    inline long long GetBeginOffsetMillis() const { return m_beginOffsetMillis; }
    inline bool BeginOffsetMillisHasBeenSet() const { return m_beginOffsetMillisHasBeenSet; }
    inline void SetBeginOffsetMillis(long long value) { m_beginOffsetMillisHasBeenSet = true; m_beginOffsetMillis = value; }
    inline CallAnalyticsItem& WithBeginOffsetMillis(long long value) { SetBeginOffsetMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds, from the beginning of the audio stream to the end
     * of the identified item.</p>
     */
    inline long long GetEndOffsetMillis() const { return m_endOffsetMillis; }
    inline bool EndOffsetMillisHasBeenSet() const { return m_endOffsetMillisHasBeenSet; }
    inline void SetEndOffsetMillis(long long value) { m_endOffsetMillisHasBeenSet = true; m_endOffsetMillis = value; }
    inline CallAnalyticsItem& WithEndOffsetMillis(long long value) { SetEndOffsetMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of item identified. Options are: <code>PRONUNCIATION</code> (spoken
     * words) and <code>PUNCTUATION</code>.</p>
     */
    inline ItemType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ItemType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CallAnalyticsItem& WithType(ItemType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The word or punctuation that was transcribed.</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    CallAnalyticsItem& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The confidence score associated with a word or phrase in your transcript.</p>
     * <p>Confidence scores are values between 0 and 1. A larger value indicates a
     * higher probability that the identified item correctly matches the item spoken in
     * your media.</p>
     */
    inline double GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline CallAnalyticsItem& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the specified item matches a word in the vocabulary filter
     * included in your Call Analytics request. If <code>true</code>, there is a
     * vocabulary filter match.</p>
     */
    inline bool GetVocabularyFilterMatch() const { return m_vocabularyFilterMatch; }
    inline bool VocabularyFilterMatchHasBeenSet() const { return m_vocabularyFilterMatchHasBeenSet; }
    inline void SetVocabularyFilterMatch(bool value) { m_vocabularyFilterMatchHasBeenSet = true; m_vocabularyFilterMatch = value; }
    inline CallAnalyticsItem& WithVocabularyFilterMatch(bool value) { SetVocabularyFilterMatch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If partial result stabilization is enabled, <code>Stable</code> indicates
     * whether the specified item is stable (<code>true</code>) or if it may change
     * when the segment is complete (<code>false</code>).</p>
     */
    inline bool GetStable() const { return m_stable; }
    inline bool StableHasBeenSet() const { return m_stableHasBeenSet; }
    inline void SetStable(bool value) { m_stableHasBeenSet = true; m_stable = value; }
    inline CallAnalyticsItem& WithStable(bool value) { SetStable(value); return *this;}
    ///@}
  private:

    long long m_beginOffsetMillis{0};
    bool m_beginOffsetMillisHasBeenSet = false;

    long long m_endOffsetMillis{0};
    bool m_endOffsetMillisHasBeenSet = false;

    ItemType m_type{ItemType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    double m_confidence{0.0};
    bool m_confidenceHasBeenSet = false;

    bool m_vocabularyFilterMatch{false};
    bool m_vocabularyFilterMatchHasBeenSet = false;

    bool m_stable{false};
    bool m_stableHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
