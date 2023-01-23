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
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/MedicalItem">AWS
   * API Reference</a></p>
   */
  class MedicalItem
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalItem();
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The start time, in milliseconds, of the transcribed item.</p>
     */
    inline double GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time, in milliseconds, of the transcribed item.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time, in milliseconds, of the transcribed item.</p>
     */
    inline void SetStartTime(double value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time, in milliseconds, of the transcribed item.</p>
     */
    inline MedicalItem& WithStartTime(double value) { SetStartTime(value); return *this;}


    /**
     * <p>The end time, in milliseconds, of the transcribed item.</p>
     */
    inline double GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time, in milliseconds, of the transcribed item.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time, in milliseconds, of the transcribed item.</p>
     */
    inline void SetEndTime(double value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time, in milliseconds, of the transcribed item.</p>
     */
    inline MedicalItem& WithEndTime(double value) { SetEndTime(value); return *this;}


    /**
     * <p>The type of item identified. Options are: <code>PRONUNCIATION</code> (spoken
     * words) and <code>PUNCTUATION</code>.</p>
     */
    inline const ItemType& GetType() const{ return m_type; }

    /**
     * <p>The type of item identified. Options are: <code>PRONUNCIATION</code> (spoken
     * words) and <code>PUNCTUATION</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of item identified. Options are: <code>PRONUNCIATION</code> (spoken
     * words) and <code>PUNCTUATION</code>.</p>
     */
    inline void SetType(const ItemType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of item identified. Options are: <code>PRONUNCIATION</code> (spoken
     * words) and <code>PUNCTUATION</code>.</p>
     */
    inline void SetType(ItemType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of item identified. Options are: <code>PRONUNCIATION</code> (spoken
     * words) and <code>PUNCTUATION</code>.</p>
     */
    inline MedicalItem& WithType(const ItemType& value) { SetType(value); return *this;}

    /**
     * <p>The type of item identified. Options are: <code>PRONUNCIATION</code> (spoken
     * words) and <code>PUNCTUATION</code>.</p>
     */
    inline MedicalItem& WithType(ItemType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The word or punctuation that was transcribed.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The word or punctuation that was transcribed.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The word or punctuation that was transcribed.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The word or punctuation that was transcribed.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The word or punctuation that was transcribed.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The word or punctuation that was transcribed.</p>
     */
    inline MedicalItem& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The word or punctuation that was transcribed.</p>
     */
    inline MedicalItem& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The word or punctuation that was transcribed.</p>
     */
    inline MedicalItem& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>The confidence score associated with a word or phrase in your transcript.</p>
     * <p>Confidence scores are values between 0 and 1. A larger value indicates a
     * higher probability that the identified item correctly matches the item spoken in
     * your media.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>The confidence score associated with a word or phrase in your transcript.</p>
     * <p>Confidence scores are values between 0 and 1. A larger value indicates a
     * higher probability that the identified item correctly matches the item spoken in
     * your media.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>The confidence score associated with a word or phrase in your transcript.</p>
     * <p>Confidence scores are values between 0 and 1. A larger value indicates a
     * higher probability that the identified item correctly matches the item spoken in
     * your media.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>The confidence score associated with a word or phrase in your transcript.</p>
     * <p>Confidence scores are values between 0 and 1. A larger value indicates a
     * higher probability that the identified item correctly matches the item spoken in
     * your media.</p>
     */
    inline MedicalItem& WithConfidence(double value) { SetConfidence(value); return *this;}


    /**
     * <p>If speaker partitioning is enabled, <code>Speaker</code> labels the speaker
     * of the specified item.</p>
     */
    inline const Aws::String& GetSpeaker() const{ return m_speaker; }

    /**
     * <p>If speaker partitioning is enabled, <code>Speaker</code> labels the speaker
     * of the specified item.</p>
     */
    inline bool SpeakerHasBeenSet() const { return m_speakerHasBeenSet; }

    /**
     * <p>If speaker partitioning is enabled, <code>Speaker</code> labels the speaker
     * of the specified item.</p>
     */
    inline void SetSpeaker(const Aws::String& value) { m_speakerHasBeenSet = true; m_speaker = value; }

    /**
     * <p>If speaker partitioning is enabled, <code>Speaker</code> labels the speaker
     * of the specified item.</p>
     */
    inline void SetSpeaker(Aws::String&& value) { m_speakerHasBeenSet = true; m_speaker = std::move(value); }

    /**
     * <p>If speaker partitioning is enabled, <code>Speaker</code> labels the speaker
     * of the specified item.</p>
     */
    inline void SetSpeaker(const char* value) { m_speakerHasBeenSet = true; m_speaker.assign(value); }

    /**
     * <p>If speaker partitioning is enabled, <code>Speaker</code> labels the speaker
     * of the specified item.</p>
     */
    inline MedicalItem& WithSpeaker(const Aws::String& value) { SetSpeaker(value); return *this;}

    /**
     * <p>If speaker partitioning is enabled, <code>Speaker</code> labels the speaker
     * of the specified item.</p>
     */
    inline MedicalItem& WithSpeaker(Aws::String&& value) { SetSpeaker(std::move(value)); return *this;}

    /**
     * <p>If speaker partitioning is enabled, <code>Speaker</code> labels the speaker
     * of the specified item.</p>
     */
    inline MedicalItem& WithSpeaker(const char* value) { SetSpeaker(value); return *this;}

  private:

    double m_startTime;
    bool m_startTimeHasBeenSet = false;

    double m_endTime;
    bool m_endTimeHasBeenSet = false;

    ItemType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    double m_confidence;
    bool m_confidenceHasBeenSet = false;

    Aws::String m_speaker;
    bool m_speakerHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
