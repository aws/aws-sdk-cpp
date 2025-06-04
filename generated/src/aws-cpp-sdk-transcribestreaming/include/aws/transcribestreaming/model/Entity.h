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
   * include category, confidence score, type, stability score, and start and end
   * times.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/Entity">AWS
   * API Reference</a></p>
   */
  class Entity
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API Entity() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API Entity(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Entity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start time of the utterance that was identified as PII in seconds, with
     * millisecond precision (e.g., 1.056)</p>
     */
    inline double GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(double value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline Entity& WithStartTime(double value) { SetStartTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the utterance that was identified as PII in seconds, with
     * millisecond precision (e.g., 1.056)</p>
     */
    inline double GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(double value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline Entity& WithEndTime(double value) { SetEndTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of information identified. The only category is
     * <code>PII</code>.</p>
     */
    inline const Aws::String& GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    template<typename CategoryT = Aws::String>
    void SetCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category = std::forward<CategoryT>(value); }
    template<typename CategoryT = Aws::String>
    Entity& WithCategory(CategoryT&& value) { SetCategory(std::forward<CategoryT>(value)); return *this;}
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
    Entity& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The word or words identified as PII.</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    Entity& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The confidence score associated with the identified PII entity in your
     * audio.</p> <p>Confidence scores are values between 0 and 1. A larger value
     * indicates a higher probability that the identified entity correctly matches the
     * entity spoken in your media.</p>
     */
    inline double GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline Entity& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}
  private:

    double m_startTime{0.0};
    bool m_startTimeHasBeenSet = false;

    double m_endTime{0.0};
    bool m_endTimeHasBeenSet = false;

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
