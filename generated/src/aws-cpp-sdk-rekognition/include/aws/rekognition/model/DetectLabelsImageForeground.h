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
    AWS_REKOGNITION_API DetectLabelsImageForeground();
    AWS_REKOGNITION_API DetectLabelsImageForeground(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API DetectLabelsImageForeground& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The quality of the image foreground as defined by brightness and
     * sharpness.</p>
     */
    inline const DetectLabelsImageQuality& GetQuality() const{ return m_quality; }

    /**
     * <p>The quality of the image foreground as defined by brightness and
     * sharpness.</p>
     */
    inline bool QualityHasBeenSet() const { return m_qualityHasBeenSet; }

    /**
     * <p>The quality of the image foreground as defined by brightness and
     * sharpness.</p>
     */
    inline void SetQuality(const DetectLabelsImageQuality& value) { m_qualityHasBeenSet = true; m_quality = value; }

    /**
     * <p>The quality of the image foreground as defined by brightness and
     * sharpness.</p>
     */
    inline void SetQuality(DetectLabelsImageQuality&& value) { m_qualityHasBeenSet = true; m_quality = std::move(value); }

    /**
     * <p>The quality of the image foreground as defined by brightness and
     * sharpness.</p>
     */
    inline DetectLabelsImageForeground& WithQuality(const DetectLabelsImageQuality& value) { SetQuality(value); return *this;}

    /**
     * <p>The quality of the image foreground as defined by brightness and
     * sharpness.</p>
     */
    inline DetectLabelsImageForeground& WithQuality(DetectLabelsImageQuality&& value) { SetQuality(std::move(value)); return *this;}


    /**
     * <p>The dominant colors found in the foreground of an image, defined with RGB
     * values, CSS color name, simplified color name, and PixelPercentage (the
     * percentage of image pixels that have a particular color).</p>
     */
    inline const Aws::Vector<DominantColor>& GetDominantColors() const{ return m_dominantColors; }

    /**
     * <p>The dominant colors found in the foreground of an image, defined with RGB
     * values, CSS color name, simplified color name, and PixelPercentage (the
     * percentage of image pixels that have a particular color).</p>
     */
    inline bool DominantColorsHasBeenSet() const { return m_dominantColorsHasBeenSet; }

    /**
     * <p>The dominant colors found in the foreground of an image, defined with RGB
     * values, CSS color name, simplified color name, and PixelPercentage (the
     * percentage of image pixels that have a particular color).</p>
     */
    inline void SetDominantColors(const Aws::Vector<DominantColor>& value) { m_dominantColorsHasBeenSet = true; m_dominantColors = value; }

    /**
     * <p>The dominant colors found in the foreground of an image, defined with RGB
     * values, CSS color name, simplified color name, and PixelPercentage (the
     * percentage of image pixels that have a particular color).</p>
     */
    inline void SetDominantColors(Aws::Vector<DominantColor>&& value) { m_dominantColorsHasBeenSet = true; m_dominantColors = std::move(value); }

    /**
     * <p>The dominant colors found in the foreground of an image, defined with RGB
     * values, CSS color name, simplified color name, and PixelPercentage (the
     * percentage of image pixels that have a particular color).</p>
     */
    inline DetectLabelsImageForeground& WithDominantColors(const Aws::Vector<DominantColor>& value) { SetDominantColors(value); return *this;}

    /**
     * <p>The dominant colors found in the foreground of an image, defined with RGB
     * values, CSS color name, simplified color name, and PixelPercentage (the
     * percentage of image pixels that have a particular color).</p>
     */
    inline DetectLabelsImageForeground& WithDominantColors(Aws::Vector<DominantColor>&& value) { SetDominantColors(std::move(value)); return *this;}

    /**
     * <p>The dominant colors found in the foreground of an image, defined with RGB
     * values, CSS color name, simplified color name, and PixelPercentage (the
     * percentage of image pixels that have a particular color).</p>
     */
    inline DetectLabelsImageForeground& AddDominantColors(const DominantColor& value) { m_dominantColorsHasBeenSet = true; m_dominantColors.push_back(value); return *this; }

    /**
     * <p>The dominant colors found in the foreground of an image, defined with RGB
     * values, CSS color name, simplified color name, and PixelPercentage (the
     * percentage of image pixels that have a particular color).</p>
     */
    inline DetectLabelsImageForeground& AddDominantColors(DominantColor&& value) { m_dominantColorsHasBeenSet = true; m_dominantColors.push_back(std::move(value)); return *this; }

  private:

    DetectLabelsImageQuality m_quality;
    bool m_qualityHasBeenSet = false;

    Aws::Vector<DominantColor> m_dominantColors;
    bool m_dominantColorsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
