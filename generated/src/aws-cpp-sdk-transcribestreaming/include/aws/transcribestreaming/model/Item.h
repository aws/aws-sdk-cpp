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
   * <p>A word, phrase, or punctuation mark in your transcription output, along with
   * various associated attributes, such as confidence score, type, and start and end
   * times.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/Item">AWS
   * API Reference</a></p>
   */
  class Item
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API Item() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API Item(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Item& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start time of the transcribed item in seconds, with millisecond precision
     * (e.g., 1.056)</p>
     */
    inline double GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(double value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline Item& WithStartTime(double value) { SetStartTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the transcribed item in seconds, with millisecond precision
     * (e.g., 1.056)</p>
     */
    inline double GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(double value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline Item& WithEndTime(double value) { SetEndTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of item identified. Options are: <code>PRONUNCIATION</code> (spoken
     * words) and <code>PUNCTUATION</code>.</p>
     */
    inline ItemType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ItemType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Item& WithType(ItemType value) { SetType(value); return *this;}
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
    Item& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the specified item matches a word in the vocabulary filter
     * included in your request. If <code>true</code>, there is a vocabulary filter
     * match.</p>
     */
    inline bool GetVocabularyFilterMatch() const { return m_vocabularyFilterMatch; }
    inline bool VocabularyFilterMatchHasBeenSet() const { return m_vocabularyFilterMatchHasBeenSet; }
    inline void SetVocabularyFilterMatch(bool value) { m_vocabularyFilterMatchHasBeenSet = true; m_vocabularyFilterMatch = value; }
    inline Item& WithVocabularyFilterMatch(bool value) { SetVocabularyFilterMatch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If speaker partitioning is enabled, <code>Speaker</code> labels the speaker
     * of the specified item.</p>
     */
    inline const Aws::String& GetSpeaker() const { return m_speaker; }
    inline bool SpeakerHasBeenSet() const { return m_speakerHasBeenSet; }
    template<typename SpeakerT = Aws::String>
    void SetSpeaker(SpeakerT&& value) { m_speakerHasBeenSet = true; m_speaker = std::forward<SpeakerT>(value); }
    template<typename SpeakerT = Aws::String>
    Item& WithSpeaker(SpeakerT&& value) { SetSpeaker(std::forward<SpeakerT>(value)); return *this;}
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
    inline Item& WithConfidence(double value) { SetConfidence(value); return *this;}
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
    inline Item& WithStable(bool value) { SetStable(value); return *this;}
    ///@}
  private:

    double m_startTime{0.0};
    bool m_startTimeHasBeenSet = false;

    double m_endTime{0.0};
    bool m_endTimeHasBeenSet = false;

    ItemType m_type{ItemType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    bool m_vocabularyFilterMatch{false};
    bool m_vocabularyFilterMatchHasBeenSet = false;

    Aws::String m_speaker;
    bool m_speakerHasBeenSet = false;

    double m_confidence{0.0};
    bool m_confidenceHasBeenSet = false;

    bool m_stable{false};
    bool m_stableHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
