/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

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
namespace MediaConvert
{
namespace Model
{

  /**
   * Noise reducer filter settings for spatial filter.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/NoiseReducerSpatialFilterSettings">AWS
   * API Reference</a></p>
   */
  class NoiseReducerSpatialFilterSettings
  {
  public:
    AWS_MEDIACONVERT_API NoiseReducerSpatialFilterSettings() = default;
    AWS_MEDIACONVERT_API NoiseReducerSpatialFilterSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API NoiseReducerSpatialFilterSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify strength of post noise reduction sharpening filter, with 0 disabling the
     * filter and 3 enabling it at maximum strength.
     */
    inline int GetPostFilterSharpenStrength() const { return m_postFilterSharpenStrength; }
    inline bool PostFilterSharpenStrengthHasBeenSet() const { return m_postFilterSharpenStrengthHasBeenSet; }
    inline void SetPostFilterSharpenStrength(int value) { m_postFilterSharpenStrengthHasBeenSet = true; m_postFilterSharpenStrength = value; }
    inline NoiseReducerSpatialFilterSettings& WithPostFilterSharpenStrength(int value) { SetPostFilterSharpenStrength(value); return *this;}
    ///@}

    ///@{
    /**
     * The speed of the filter, from -2 (lower speed) to 3 (higher speed), with 0 being
     * the nominal value.
     */
    inline int GetSpeed() const { return m_speed; }
    inline bool SpeedHasBeenSet() const { return m_speedHasBeenSet; }
    inline void SetSpeed(int value) { m_speedHasBeenSet = true; m_speed = value; }
    inline NoiseReducerSpatialFilterSettings& WithSpeed(int value) { SetSpeed(value); return *this;}
    ///@}

    ///@{
    /**
     * Relative strength of noise reducing filter. Higher values produce stronger
     * filtering.
     */
    inline int GetStrength() const { return m_strength; }
    inline bool StrengthHasBeenSet() const { return m_strengthHasBeenSet; }
    inline void SetStrength(int value) { m_strengthHasBeenSet = true; m_strength = value; }
    inline NoiseReducerSpatialFilterSettings& WithStrength(int value) { SetStrength(value); return *this;}
    ///@}
  private:

    int m_postFilterSharpenStrength{0};
    bool m_postFilterSharpenStrengthHasBeenSet = false;

    int m_speed{0};
    bool m_speedHasBeenSet = false;

    int m_strength{0};
    bool m_strengthHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
