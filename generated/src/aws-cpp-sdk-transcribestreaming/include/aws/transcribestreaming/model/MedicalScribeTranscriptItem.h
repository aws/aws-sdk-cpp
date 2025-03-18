/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/model/MedicalScribeTranscriptItemType.h>
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
   * times. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/MedicalScribeTranscriptItem">AWS
   * API Reference</a></p>
   */
  class MedicalScribeTranscriptItem
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeTranscriptItem() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeTranscriptItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeTranscriptItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start time, in milliseconds, of the transcribed item.</p>
     */
    inline double GetBeginAudioTime() const { return m_beginAudioTime; }
    inline bool BeginAudioTimeHasBeenSet() const { return m_beginAudioTimeHasBeenSet; }
    inline void SetBeginAudioTime(double value) { m_beginAudioTimeHasBeenSet = true; m_beginAudioTime = value; }
    inline MedicalScribeTranscriptItem& WithBeginAudioTime(double value) { SetBeginAudioTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time, in milliseconds, of the transcribed item.</p>
     */
    inline double GetEndAudioTime() const { return m_endAudioTime; }
    inline bool EndAudioTimeHasBeenSet() const { return m_endAudioTimeHasBeenSet; }
    inline void SetEndAudioTime(double value) { m_endAudioTimeHasBeenSet = true; m_endAudioTime = value; }
    inline MedicalScribeTranscriptItem& WithEndAudioTime(double value) { SetEndAudioTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of item identified. Options are: <code>PRONUNCIATION</code> (spoken
     * words) and <code>PUNCTUATION</code>. </p>
     */
    inline MedicalScribeTranscriptItemType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(MedicalScribeTranscriptItemType value) { m_typeHasBeenSet = true; m_type = value; }
    inline MedicalScribeTranscriptItem& WithType(MedicalScribeTranscriptItemType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The confidence score associated with a word or phrase in your transcript.</p>
     * <p>Confidence scores are values between 0 and 1. A larger value indicates a
     * higher probability that the identified item correctly matches the item spoken in
     * your media. </p>
     */
    inline double GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline MedicalScribeTranscriptItem& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The word, phrase or punctuation mark that was transcribed.</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    MedicalScribeTranscriptItem& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the specified item matches a word in the vocabulary filter
     * included in your configuration event. If <code>true</code>, there is a
     * vocabulary filter match. </p>
     */
    inline bool GetVocabularyFilterMatch() const { return m_vocabularyFilterMatch; }
    inline bool VocabularyFilterMatchHasBeenSet() const { return m_vocabularyFilterMatchHasBeenSet; }
    inline void SetVocabularyFilterMatch(bool value) { m_vocabularyFilterMatchHasBeenSet = true; m_vocabularyFilterMatch = value; }
    inline MedicalScribeTranscriptItem& WithVocabularyFilterMatch(bool value) { SetVocabularyFilterMatch(value); return *this;}
    ///@}
  private:

    double m_beginAudioTime{0.0};
    bool m_beginAudioTimeHasBeenSet = false;

    double m_endAudioTime{0.0};
    bool m_endAudioTimeHasBeenSet = false;

    MedicalScribeTranscriptItemType m_type{MedicalScribeTranscriptItemType::NOT_SET};
    bool m_typeHasBeenSet = false;

    double m_confidence{0.0};
    bool m_confidenceHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    bool m_vocabularyFilterMatch{false};
    bool m_vocabularyFilterMatchHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
