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
    AWS_REKOGNITION_API DetectLabelsImageQuality() = default;
    AWS_REKOGNITION_API DetectLabelsImageQuality(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API DetectLabelsImageQuality& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The brightness of an image provided for label detection.</p>
     */
    inline double GetBrightness() const { return m_brightness; }
    inline bool BrightnessHasBeenSet() const { return m_brightnessHasBeenSet; }
    inline void SetBrightness(double value) { m_brightnessHasBeenSet = true; m_brightness = value; }
    inline DetectLabelsImageQuality& WithBrightness(double value) { SetBrightness(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sharpness of an image provided for label detection.</p>
     */
    inline double GetSharpness() const { return m_sharpness; }
    inline bool SharpnessHasBeenSet() const { return m_sharpnessHasBeenSet; }
    inline void SetSharpness(double value) { m_sharpnessHasBeenSet = true; m_sharpness = value; }
    inline DetectLabelsImageQuality& WithSharpness(double value) { SetSharpness(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contrast of an image provided for label detection.</p>
     */
    inline double GetContrast() const { return m_contrast; }
    inline bool ContrastHasBeenSet() const { return m_contrastHasBeenSet; }
    inline void SetContrast(double value) { m_contrastHasBeenSet = true; m_contrast = value; }
    inline DetectLabelsImageQuality& WithContrast(double value) { SetContrast(value); return *this;}
    ///@}
  private:

    double m_brightness{0.0};
    bool m_brightnessHasBeenSet = false;

    double m_sharpness{0.0};
    bool m_sharpnessHasBeenSet = false;

    double m_contrast{0.0};
    bool m_contrastHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
