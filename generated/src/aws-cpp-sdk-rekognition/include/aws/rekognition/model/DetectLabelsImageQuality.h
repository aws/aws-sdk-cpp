/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>

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
   * <p>The quality of an image provided for label detection, with regard to
   * brightness, sharpness, and contrast.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectLabelsImageQuality">AWS
   * API Reference</a></p>
   */
  class DetectLabelsImageQuality
  {
  public:
    AWS_REKOGNITION_API DetectLabelsImageQuality();
    AWS_REKOGNITION_API DetectLabelsImageQuality(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API DetectLabelsImageQuality& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The brightness of an image provided for label detection.</p>
     */
    inline double GetBrightness() const{ return m_brightness; }

    /**
     * <p>The brightness of an image provided for label detection.</p>
     */
    inline bool BrightnessHasBeenSet() const { return m_brightnessHasBeenSet; }

    /**
     * <p>The brightness of an image provided for label detection.</p>
     */
    inline void SetBrightness(double value) { m_brightnessHasBeenSet = true; m_brightness = value; }

    /**
     * <p>The brightness of an image provided for label detection.</p>
     */
    inline DetectLabelsImageQuality& WithBrightness(double value) { SetBrightness(value); return *this;}


    /**
     * <p>The sharpness of an image provided for label detection.</p>
     */
    inline double GetSharpness() const{ return m_sharpness; }

    /**
     * <p>The sharpness of an image provided for label detection.</p>
     */
    inline bool SharpnessHasBeenSet() const { return m_sharpnessHasBeenSet; }

    /**
     * <p>The sharpness of an image provided for label detection.</p>
     */
    inline void SetSharpness(double value) { m_sharpnessHasBeenSet = true; m_sharpness = value; }

    /**
     * <p>The sharpness of an image provided for label detection.</p>
     */
    inline DetectLabelsImageQuality& WithSharpness(double value) { SetSharpness(value); return *this;}


    /**
     * <p>The contrast of an image provided for label detection.</p>
     */
    inline double GetContrast() const{ return m_contrast; }

    /**
     * <p>The contrast of an image provided for label detection.</p>
     */
    inline bool ContrastHasBeenSet() const { return m_contrastHasBeenSet; }

    /**
     * <p>The contrast of an image provided for label detection.</p>
     */
    inline void SetContrast(double value) { m_contrastHasBeenSet = true; m_contrast = value; }

    /**
     * <p>The contrast of an image provided for label detection.</p>
     */
    inline DetectLabelsImageQuality& WithContrast(double value) { SetContrast(value); return *this;}

  private:

    double m_brightness;
    bool m_brightnessHasBeenSet = false;

    double m_sharpness;
    bool m_sharpnessHasBeenSet = false;

    double m_contrast;
    bool m_contrastHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
