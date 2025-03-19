/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/BoundingBox.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/DominantColor.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>An instance of a label returned by Amazon Rekognition Image
   * (<a>DetectLabels</a>) or by Amazon Rekognition Video
   * (<a>GetLabelDetection</a>).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/Instance">AWS
   * API Reference</a></p>
   */
  class Instance
  {
  public:
    AWS_REKOGNITION_API Instance() = default;
    AWS_REKOGNITION_API Instance(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Instance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The position of the label instance on the image.</p>
     */
    inline const BoundingBox& GetBoundingBox() const { return m_boundingBox; }
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }
    template<typename BoundingBoxT = BoundingBox>
    void SetBoundingBox(BoundingBoxT&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::forward<BoundingBoxT>(value); }
    template<typename BoundingBoxT = BoundingBox>
    Instance& WithBoundingBox(BoundingBoxT&& value) { SetBoundingBox(std::forward<BoundingBoxT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The confidence that Amazon Rekognition has in the accuracy of the bounding
     * box.</p>
     */
    inline double GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline Instance& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dominant colors found in an individual instance of a label.</p>
     */
    inline const Aws::Vector<DominantColor>& GetDominantColors() const { return m_dominantColors; }
    inline bool DominantColorsHasBeenSet() const { return m_dominantColorsHasBeenSet; }
    template<typename DominantColorsT = Aws::Vector<DominantColor>>
    void SetDominantColors(DominantColorsT&& value) { m_dominantColorsHasBeenSet = true; m_dominantColors = std::forward<DominantColorsT>(value); }
    template<typename DominantColorsT = Aws::Vector<DominantColor>>
    Instance& WithDominantColors(DominantColorsT&& value) { SetDominantColors(std::forward<DominantColorsT>(value)); return *this;}
    template<typename DominantColorsT = DominantColor>
    Instance& AddDominantColors(DominantColorsT&& value) { m_dominantColorsHasBeenSet = true; m_dominantColors.emplace_back(std::forward<DominantColorsT>(value)); return *this; }
    ///@}
  private:

    BoundingBox m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;

    double m_confidence{0.0};
    bool m_confidenceHasBeenSet = false;

    Aws::Vector<DominantColor> m_dominantColors;
    bool m_dominantColorsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
