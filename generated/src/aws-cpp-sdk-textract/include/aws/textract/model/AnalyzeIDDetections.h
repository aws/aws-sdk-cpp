/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/model/NormalizedValue.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>Used to contain the information detected by an AnalyzeID
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/AnalyzeIDDetections">AWS
   * API Reference</a></p>
   */
  class AnalyzeIDDetections
  {
  public:
    AWS_TEXTRACT_API AnalyzeIDDetections() = default;
    AWS_TEXTRACT_API AnalyzeIDDetections(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API AnalyzeIDDetections& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Text of either the normalized field or value associated with it.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    AnalyzeIDDetections& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only returned for dates, returns the type of value detected and the date
     * written in a more machine readable way.</p>
     */
    inline const NormalizedValue& GetNormalizedValue() const { return m_normalizedValue; }
    inline bool NormalizedValueHasBeenSet() const { return m_normalizedValueHasBeenSet; }
    template<typename NormalizedValueT = NormalizedValue>
    void SetNormalizedValue(NormalizedValueT&& value) { m_normalizedValueHasBeenSet = true; m_normalizedValue = std::forward<NormalizedValueT>(value); }
    template<typename NormalizedValueT = NormalizedValue>
    AnalyzeIDDetections& WithNormalizedValue(NormalizedValueT&& value) { SetNormalizedValue(std::forward<NormalizedValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The confidence score of the detected text.</p>
     */
    inline double GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline AnalyzeIDDetections& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}
  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    NormalizedValue m_normalizedValue;
    bool m_normalizedValueHasBeenSet = false;

    double m_confidence{0.0};
    bool m_confidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
