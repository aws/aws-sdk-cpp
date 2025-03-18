/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/DetectLabelsImageQuality.h>
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
   * <p>The foreground of the image with regard to image quality and dominant
   * colors.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectLabelsImageForeground">AWS
   * API Reference</a></p>
   */
  class DetectLabelsImageForeground
  {
  public:
    AWS_REKOGNITION_API DetectLabelsImageForeground() = default;
    AWS_REKOGNITION_API DetectLabelsImageForeground(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API DetectLabelsImageForeground& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The quality of the image foreground as defined by brightness and
     * sharpness.</p>
     */
    inline const DetectLabelsImageQuality& GetQuality() const { return m_quality; }
    inline bool QualityHasBeenSet() const { return m_qualityHasBeenSet; }
    template<typename QualityT = DetectLabelsImageQuality>
    void SetQuality(QualityT&& value) { m_qualityHasBeenSet = true; m_quality = std::forward<QualityT>(value); }
    template<typename QualityT = DetectLabelsImageQuality>
    DetectLabelsImageForeground& WithQuality(QualityT&& value) { SetQuality(std::forward<QualityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dominant colors found in the foreground of an image, defined with RGB
     * values, CSS color name, simplified color name, and PixelPercentage (the
     * percentage of image pixels that have a particular color).</p>
     */
    inline const Aws::Vector<DominantColor>& GetDominantColors() const { return m_dominantColors; }
    inline bool DominantColorsHasBeenSet() const { return m_dominantColorsHasBeenSet; }
    template<typename DominantColorsT = Aws::Vector<DominantColor>>
    void SetDominantColors(DominantColorsT&& value) { m_dominantColorsHasBeenSet = true; m_dominantColors = std::forward<DominantColorsT>(value); }
    template<typename DominantColorsT = Aws::Vector<DominantColor>>
    DetectLabelsImageForeground& WithDominantColors(DominantColorsT&& value) { SetDominantColors(std::forward<DominantColorsT>(value)); return *this;}
    template<typename DominantColorsT = DominantColor>
    DetectLabelsImageForeground& AddDominantColors(DominantColorsT&& value) { m_dominantColorsHasBeenSet = true; m_dominantColors.emplace_back(std::forward<DominantColorsT>(value)); return *this; }
    ///@}
  private:

    DetectLabelsImageQuality m_quality;
    bool m_qualityHasBeenSet = false;

    Aws::Vector<DominantColor> m_dominantColors;
    bool m_dominantColorsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
