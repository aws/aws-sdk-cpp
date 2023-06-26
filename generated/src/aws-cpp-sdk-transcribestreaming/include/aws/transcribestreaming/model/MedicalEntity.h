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
   * <p>Contains entities identified as personal health information (PHI) in your
   * transcription output, along with various associated attributes. Examples include
   * category, confidence score, type, stability score, and start and end
   * times.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/MedicalEntity">AWS
   * API Reference</a></p>
   */
  class MedicalEntity
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalEntity();
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The start time, in milliseconds, of the utterance that was identified as
     * PHI.</p>
     */
    inline double GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time, in milliseconds, of the utterance that was identified as
     * PHI.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time, in milliseconds, of the utterance that was identified as
     * PHI.</p>
     */
    inline void SetStartTime(double value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time, in milliseconds, of the utterance that was identified as
     * PHI.</p>
     */
    inline MedicalEntity& WithStartTime(double value) { SetStartTime(value); return *this;}


    /**
     * <p>The end time, in milliseconds, of the utterance that was identified as
     * PHI.</p>
     */
    inline double GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time, in milliseconds, of the utterance that was identified as
     * PHI.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time, in milliseconds, of the utterance that was identified as
     * PHI.</p>
     */
    inline void SetEndTime(double value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time, in milliseconds, of the utterance that was identified as
     * PHI.</p>
     */
    inline MedicalEntity& WithEndTime(double value) { SetEndTime(value); return *this;}


    /**
     * <p>The category of information identified. The only category is
     * <code>PHI</code>.</p>
     */
    inline const Aws::String& GetCategory() const{ return m_category; }

    /**
     * <p>The category of information identified. The only category is
     * <code>PHI</code>.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>The category of information identified. The only category is
     * <code>PHI</code>.</p>
     */
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>The category of information identified. The only category is
     * <code>PHI</code>.</p>
     */
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>The category of information identified. The only category is
     * <code>PHI</code>.</p>
     */
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }

    /**
     * <p>The category of information identified. The only category is
     * <code>PHI</code>.</p>
     */
    inline MedicalEntity& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}

    /**
     * <p>The category of information identified. The only category is
     * <code>PHI</code>.</p>
     */
    inline MedicalEntity& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * <p>The category of information identified. The only category is
     * <code>PHI</code>.</p>
     */
    inline MedicalEntity& WithCategory(const char* value) { SetCategory(value); return *this;}


    /**
     * <p>The word or words identified as PHI.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The word or words identified as PHI.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The word or words identified as PHI.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The word or words identified as PHI.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The word or words identified as PHI.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The word or words identified as PHI.</p>
     */
    inline MedicalEntity& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The word or words identified as PHI.</p>
     */
    inline MedicalEntity& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The word or words identified as PHI.</p>
     */
    inline MedicalEntity& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>The confidence score associated with the identified PHI entity in your
     * audio.</p> <p>Confidence scores are values between 0 and 1. A larger value
     * indicates a higher probability that the identified entity correctly matches the
     * entity spoken in your media.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>The confidence score associated with the identified PHI entity in your
     * audio.</p> <p>Confidence scores are values between 0 and 1. A larger value
     * indicates a higher probability that the identified entity correctly matches the
     * entity spoken in your media.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>The confidence score associated with the identified PHI entity in your
     * audio.</p> <p>Confidence scores are values between 0 and 1. A larger value
     * indicates a higher probability that the identified entity correctly matches the
     * entity spoken in your media.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>The confidence score associated with the identified PHI entity in your
     * audio.</p> <p>Confidence scores are values between 0 and 1. A larger value
     * indicates a higher probability that the identified entity correctly matches the
     * entity spoken in your media.</p>
     */
    inline MedicalEntity& WithConfidence(double value) { SetConfidence(value); return *this;}

  private:

    double m_startTime;
    bool m_startTimeHasBeenSet = false;

    double m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    double m_confidence;
    bool m_confidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
