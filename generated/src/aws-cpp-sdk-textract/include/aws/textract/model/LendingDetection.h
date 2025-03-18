/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/model/SelectionStatus.h>
#include <aws/textract/model/Geometry.h>
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
   * <p>The results extracted for a lending document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/LendingDetection">AWS
   * API Reference</a></p>
   */
  class LendingDetection
  {
  public:
    AWS_TEXTRACT_API LendingDetection() = default;
    AWS_TEXTRACT_API LendingDetection(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API LendingDetection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The text extracted for a detected value in a lending document.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    LendingDetection& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The selection status of a selection element, such as an option button or
     * check box.</p>
     */
    inline SelectionStatus GetSelectionStatus() const { return m_selectionStatus; }
    inline bool SelectionStatusHasBeenSet() const { return m_selectionStatusHasBeenSet; }
    inline void SetSelectionStatus(SelectionStatus value) { m_selectionStatusHasBeenSet = true; m_selectionStatus = value; }
    inline LendingDetection& WithSelectionStatus(SelectionStatus value) { SetSelectionStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Geometry& GetGeometry() const { return m_geometry; }
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }
    template<typename GeometryT = Geometry>
    void SetGeometry(GeometryT&& value) { m_geometryHasBeenSet = true; m_geometry = std::forward<GeometryT>(value); }
    template<typename GeometryT = Geometry>
    LendingDetection& WithGeometry(GeometryT&& value) { SetGeometry(std::forward<GeometryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The confidence level for the text of a detected value in a lending
     * document.</p>
     */
    inline double GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline LendingDetection& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}
  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    SelectionStatus m_selectionStatus{SelectionStatus::NOT_SET};
    bool m_selectionStatusHasBeenSet = false;

    Geometry m_geometry;
    bool m_geometryHasBeenSet = false;

    double m_confidence{0.0};
    bool m_confidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
