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
    AWS_REKOGNITION_API DetectLabelsImageProperties();
    AWS_REKOGNITION_API DetectLabelsImageProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API DetectLabelsImageProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the quality of the image foreground as defined by
     * brightness, sharpness, and contrast. The higher the value the greater the
     * brightness, sharpness, and contrast respectively.</p>
     */
    inline const DetectLabelsImageQuality& GetQuality() const{ return m_quality; }

    /**
     * <p>Information about the quality of the image foreground as defined by
     * brightness, sharpness, and contrast. The higher the value the greater the
     * brightness, sharpness, and contrast respectively.</p>
     */
    inline bool QualityHasBeenSet() const { return m_qualityHasBeenSet; }

    /**
     * <p>Information about the quality of the image foreground as defined by
     * brightness, sharpness, and contrast. The higher the value the greater the
     * brightness, sharpness, and contrast respectively.</p>
     */
    inline void SetQuality(const DetectLabelsImageQuality& value) { m_qualityHasBeenSet = true; m_quality = value; }

    /**
     * <p>Information about the quality of the image foreground as defined by
     * brightness, sharpness, and contrast. The higher the value the greater the
     * brightness, sharpness, and contrast respectively.</p>
     */
    inline void SetQuality(DetectLabelsImageQuality&& value) { m_qualityHasBeenSet = true; m_quality = std::move(value); }

    /**
     * <p>Information about the quality of the image foreground as defined by
     * brightness, sharpness, and contrast. The higher the value the greater the
     * brightness, sharpness, and contrast respectively.</p>
     */
    inline DetectLabelsImageProperties& WithQuality(const DetectLabelsImageQuality& value) { SetQuality(value); return *this;}

    /**
     * <p>Information about the quality of the image foreground as defined by
     * brightness, sharpness, and contrast. The higher the value the greater the
     * brightness, sharpness, and contrast respectively.</p>
     */
    inline DetectLabelsImageProperties& WithQuality(DetectLabelsImageQuality&& value) { SetQuality(std::move(value)); return *this;}


    /**
     * <p>Information about the dominant colors found in an image, described with RGB
     * values, CSS color name, simplified color name, and PixelPercentage (the
     * percentage of image pixels that have a particular color).</p>
     */
    inline const Aws::Vector<DominantColor>& GetDominantColors() const{ return m_dominantColors; }

    /**
     * <p>Information about the dominant colors found in an image, described with RGB
     * values, CSS color name, simplified color name, and PixelPercentage (the
     * percentage of image pixels that have a particular color).</p>
     */
    inline bool DominantColorsHasBeenSet() const { return m_dominantColorsHasBeenSet; }

    /**
     * <p>Information about the dominant colors found in an image, described with RGB
     * values, CSS color name, simplified color name, and PixelPercentage (the
     * percentage of image pixels that have a particular color).</p>
     */
    inline void SetDominantColors(const Aws::Vector<DominantColor>& value) { m_dominantColorsHasBeenSet = true; m_dominantColors = value; }

    /**
     * <p>Information about the dominant colors found in an image, described with RGB
     * values, CSS color name, simplified color name, and PixelPercentage (the
     * percentage of image pixels that have a particular color).</p>
     */
    inline void SetDominantColors(Aws::Vector<DominantColor>&& value) { m_dominantColorsHasBeenSet = true; m_dominantColors = std::move(value); }

    /**
     * <p>Information about the dominant colors found in an image, described with RGB
     * values, CSS color name, simplified color name, and PixelPercentage (the
     * percentage of image pixels that have a particular color).</p>
     */
    inline DetectLabelsImageProperties& WithDominantColors(const Aws::Vector<DominantColor>& value) { SetDominantColors(value); return *this;}

    /**
     * <p>Information about the dominant colors found in an image, described with RGB
     * values, CSS color name, simplified color name, and PixelPercentage (the
     * percentage of image pixels that have a particular color).</p>
     */
    inline DetectLabelsImageProperties& WithDominantColors(Aws::Vector<DominantColor>&& value) { SetDominantColors(std::move(value)); return *this;}

    /**
     * <p>Information about the dominant colors found in an image, described with RGB
     * values, CSS color name, simplified color name, and PixelPercentage (the
     * percentage of image pixels that have a particular color).</p>
     */
    inline DetectLabelsImageProperties& AddDominantColors(const DominantColor& value) { m_dominantColorsHasBeenSet = true; m_dominantColors.push_back(value); return *this; }

    /**
     * <p>Information about the dominant colors found in an image, described with RGB
     * values, CSS color name, simplified color name, and PixelPercentage (the
     * percentage of image pixels that have a particular color).</p>
     */
    inline DetectLabelsImageProperties& AddDominantColors(DominantColor&& value) { m_dominantColorsHasBeenSet = true; m_dominantColors.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the properties of an image’s foreground, including the
     * foreground’s quality and dominant colors, including the quality and dominant
     * colors of the image.</p>
     */
    inline const DetectLabelsImageForeground& GetForeground() const{ return m_foreground; }

    /**
     * <p>Information about the properties of an image’s foreground, including the
     * foreground’s quality and dominant colors, including the quality and dominant
     * colors of the image.</p>
     */
    inline bool ForegroundHasBeenSet() const { return m_foregroundHasBeenSet; }

    /**
     * <p>Information about the properties of an image’s foreground, including the
     * foreground’s quality and dominant colors, including the quality and dominant
     * colors of the image.</p>
     */
    inline void SetForeground(const DetectLabelsImageForeground& value) { m_foregroundHasBeenSet = true; m_foreground = value; }

    /**
     * <p>Information about the properties of an image’s foreground, including the
     * foreground’s quality and dominant colors, including the quality and dominant
     * colors of the image.</p>
     */
    inline void SetForeground(DetectLabelsImageForeground&& value) { m_foregroundHasBeenSet = true; m_foreground = std::move(value); }

    /**
     * <p>Information about the properties of an image’s foreground, including the
     * foreground’s quality and dominant colors, including the quality and dominant
     * colors of the image.</p>
     */
    inline DetectLabelsImageProperties& WithForeground(const DetectLabelsImageForeground& value) { SetForeground(value); return *this;}

    /**
     * <p>Information about the properties of an image’s foreground, including the
     * foreground’s quality and dominant colors, including the quality and dominant
     * colors of the image.</p>
     */
    inline DetectLabelsImageProperties& WithForeground(DetectLabelsImageForeground&& value) { SetForeground(std::move(value)); return *this;}


    /**
     * <p>Information about the properties of an image’s background, including the
     * background’s quality and dominant colors, including the quality and dominant
     * colors of the image.</p>
     */
    inline const DetectLabelsImageBackground& GetBackground() const{ return m_background; }

    /**
     * <p>Information about the properties of an image’s background, including the
     * background’s quality and dominant colors, including the quality and dominant
     * colors of the image.</p>
     */
    inline bool BackgroundHasBeenSet() const { return m_backgroundHasBeenSet; }

    /**
     * <p>Information about the properties of an image’s background, including the
     * background’s quality and dominant colors, including the quality and dominant
     * colors of the image.</p>
     */
    inline void SetBackground(const DetectLabelsImageBackground& value) { m_backgroundHasBeenSet = true; m_background = value; }

    /**
     * <p>Information about the properties of an image’s background, including the
     * background’s quality and dominant colors, including the quality and dominant
     * colors of the image.</p>
     */
    inline void SetBackground(DetectLabelsImageBackground&& value) { m_backgroundHasBeenSet = true; m_background = std::move(value); }

    /**
     * <p>Information about the properties of an image’s background, including the
     * background’s quality and dominant colors, including the quality and dominant
     * colors of the image.</p>
     */
    inline DetectLabelsImageProperties& WithBackground(const DetectLabelsImageBackground& value) { SetBackground(value); return *this;}

    /**
     * <p>Information about the properties of an image’s background, including the
     * background’s quality and dominant colors, including the quality and dominant
     * colors of the image.</p>
     */
    inline DetectLabelsImageProperties& WithBackground(DetectLabelsImageBackground&& value) { SetBackground(std::move(value)); return *this;}

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
