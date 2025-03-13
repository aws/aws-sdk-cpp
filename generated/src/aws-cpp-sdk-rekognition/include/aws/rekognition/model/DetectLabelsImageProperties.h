/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/DetectLabelsImageQuality.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/DetectLabelsImageForeground.h>
#include <aws/rekognition/model/DetectLabelsImageBackground.h>
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
   * <p>Information about the quality and dominant colors of an input image. Quality
   * and color information is returned for the entire image, foreground, and
   * background.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectLabelsImageProperties">AWS
   * API Reference</a></p>
   */
  class DetectLabelsImageProperties
  {
  public:
    AWS_REKOGNITION_API DetectLabelsImageProperties() = default;
    AWS_REKOGNITION_API DetectLabelsImageProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API DetectLabelsImageProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the quality of the image foreground as defined by
     * brightness, sharpness, and contrast. The higher the value the greater the
     * brightness, sharpness, and contrast respectively.</p>
     */
    inline const DetectLabelsImageQuality& GetQuality() const { return m_quality; }
    inline bool QualityHasBeenSet() const { return m_qualityHasBeenSet; }
    template<typename QualityT = DetectLabelsImageQuality>
    void SetQuality(QualityT&& value) { m_qualityHasBeenSet = true; m_quality = std::forward<QualityT>(value); }
    template<typename QualityT = DetectLabelsImageQuality>
    DetectLabelsImageProperties& WithQuality(QualityT&& value) { SetQuality(std::forward<QualityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the dominant colors found in an image, described with RGB
     * values, CSS color name, simplified color name, and PixelPercentage (the
     * percentage of image pixels that have a particular color).</p>
     */
    inline const Aws::Vector<DominantColor>& GetDominantColors() const { return m_dominantColors; }
    inline bool DominantColorsHasBeenSet() const { return m_dominantColorsHasBeenSet; }
    template<typename DominantColorsT = Aws::Vector<DominantColor>>
    void SetDominantColors(DominantColorsT&& value) { m_dominantColorsHasBeenSet = true; m_dominantColors = std::forward<DominantColorsT>(value); }
    template<typename DominantColorsT = Aws::Vector<DominantColor>>
    DetectLabelsImageProperties& WithDominantColors(DominantColorsT&& value) { SetDominantColors(std::forward<DominantColorsT>(value)); return *this;}
    template<typename DominantColorsT = DominantColor>
    DetectLabelsImageProperties& AddDominantColors(DominantColorsT&& value) { m_dominantColorsHasBeenSet = true; m_dominantColors.emplace_back(std::forward<DominantColorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the properties of an image’s foreground, including the
     * foreground’s quality and dominant colors, including the quality and dominant
     * colors of the image.</p>
     */
    inline const DetectLabelsImageForeground& GetForeground() const { return m_foreground; }
    inline bool ForegroundHasBeenSet() const { return m_foregroundHasBeenSet; }
    template<typename ForegroundT = DetectLabelsImageForeground>
    void SetForeground(ForegroundT&& value) { m_foregroundHasBeenSet = true; m_foreground = std::forward<ForegroundT>(value); }
    template<typename ForegroundT = DetectLabelsImageForeground>
    DetectLabelsImageProperties& WithForeground(ForegroundT&& value) { SetForeground(std::forward<ForegroundT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the properties of an image’s background, including the
     * background’s quality and dominant colors, including the quality and dominant
     * colors of the image.</p>
     */
    inline const DetectLabelsImageBackground& GetBackground() const { return m_background; }
    inline bool BackgroundHasBeenSet() const { return m_backgroundHasBeenSet; }
    template<typename BackgroundT = DetectLabelsImageBackground>
    void SetBackground(BackgroundT&& value) { m_backgroundHasBeenSet = true; m_background = std::forward<BackgroundT>(value); }
    template<typename BackgroundT = DetectLabelsImageBackground>
    DetectLabelsImageProperties& WithBackground(BackgroundT&& value) { SetBackground(std::forward<BackgroundT>(value)); return *this;}
    ///@}
  private:

    DetectLabelsImageQuality m_quality;
    bool m_qualityHasBeenSet = false;

    Aws::Vector<DominantColor> m_dominantColors;
    bool m_dominantColorsHasBeenSet = false;

    DetectLabelsImageForeground m_foreground;
    bool m_foregroundHasBeenSet = false;

    DetectLabelsImageBackground m_background;
    bool m_backgroundHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
