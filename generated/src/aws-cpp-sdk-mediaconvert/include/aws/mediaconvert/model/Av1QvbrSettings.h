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
   * Settings for quality-defined variable bitrate encoding with the AV1 codec. Use
   * these settings only when you set QVBR for Rate control mode
   * (RateControlMode).<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Av1QvbrSettings">AWS
   * API Reference</a></p>
   */
  class Av1QvbrSettings
  {
  public:
    AWS_MEDIACONVERT_API Av1QvbrSettings();
    AWS_MEDIACONVERT_API Av1QvbrSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Av1QvbrSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Use this setting only when you set Rate control mode (RateControlMode) to QVBR.
     * Specify the target quality level for this output. MediaConvert determines the
     * right number of bits to use for each part of the video to maintain the video
     * quality that you specify. When you keep the default value, AUTO, MediaConvert
     * picks a quality level for you, based on characteristics of your input video. If
     * you prefer to specify a quality level, specify a number from 1 through 10. Use
     * higher numbers for greater quality. Level 10 results in nearly lossless
     * compression. The quality level for most broadcast-quality transcodes is between
     * 6 and 9. Optionally, to specify a value between whole numbers, also provide a
     * value for the setting qvbrQualityLevelFineTune. For example, if you want your
     * QVBR quality level to be 7.33, set qvbrQualityLevel to 7 and set
     * qvbrQualityLevelFineTune to .33.
     */
    inline int GetQvbrQualityLevel() const{ return m_qvbrQualityLevel; }

    /**
     * Use this setting only when you set Rate control mode (RateControlMode) to QVBR.
     * Specify the target quality level for this output. MediaConvert determines the
     * right number of bits to use for each part of the video to maintain the video
     * quality that you specify. When you keep the default value, AUTO, MediaConvert
     * picks a quality level for you, based on characteristics of your input video. If
     * you prefer to specify a quality level, specify a number from 1 through 10. Use
     * higher numbers for greater quality. Level 10 results in nearly lossless
     * compression. The quality level for most broadcast-quality transcodes is between
     * 6 and 9. Optionally, to specify a value between whole numbers, also provide a
     * value for the setting qvbrQualityLevelFineTune. For example, if you want your
     * QVBR quality level to be 7.33, set qvbrQualityLevel to 7 and set
     * qvbrQualityLevelFineTune to .33.
     */
    inline bool QvbrQualityLevelHasBeenSet() const { return m_qvbrQualityLevelHasBeenSet; }

    /**
     * Use this setting only when you set Rate control mode (RateControlMode) to QVBR.
     * Specify the target quality level for this output. MediaConvert determines the
     * right number of bits to use for each part of the video to maintain the video
     * quality that you specify. When you keep the default value, AUTO, MediaConvert
     * picks a quality level for you, based on characteristics of your input video. If
     * you prefer to specify a quality level, specify a number from 1 through 10. Use
     * higher numbers for greater quality. Level 10 results in nearly lossless
     * compression. The quality level for most broadcast-quality transcodes is between
     * 6 and 9. Optionally, to specify a value between whole numbers, also provide a
     * value for the setting qvbrQualityLevelFineTune. For example, if you want your
     * QVBR quality level to be 7.33, set qvbrQualityLevel to 7 and set
     * qvbrQualityLevelFineTune to .33.
     */
    inline void SetQvbrQualityLevel(int value) { m_qvbrQualityLevelHasBeenSet = true; m_qvbrQualityLevel = value; }

    /**
     * Use this setting only when you set Rate control mode (RateControlMode) to QVBR.
     * Specify the target quality level for this output. MediaConvert determines the
     * right number of bits to use for each part of the video to maintain the video
     * quality that you specify. When you keep the default value, AUTO, MediaConvert
     * picks a quality level for you, based on characteristics of your input video. If
     * you prefer to specify a quality level, specify a number from 1 through 10. Use
     * higher numbers for greater quality. Level 10 results in nearly lossless
     * compression. The quality level for most broadcast-quality transcodes is between
     * 6 and 9. Optionally, to specify a value between whole numbers, also provide a
     * value for the setting qvbrQualityLevelFineTune. For example, if you want your
     * QVBR quality level to be 7.33, set qvbrQualityLevel to 7 and set
     * qvbrQualityLevelFineTune to .33.
     */
    inline Av1QvbrSettings& WithQvbrQualityLevel(int value) { SetQvbrQualityLevel(value); return *this;}


    /**
     * Optional. Specify a value here to set the QVBR quality to a level that is
     * between whole numbers. For example, if you want your QVBR quality level to be
     * 7.33, set qvbrQualityLevel to 7 and set qvbrQualityLevelFineTune to .33.
     * MediaConvert rounds your QVBR quality level to the nearest third of a whole
     * number. For example, if you set qvbrQualityLevel to 7 and you set
     * qvbrQualityLevelFineTune to .25, your actual QVBR quality level is 7.33.
     */
    inline double GetQvbrQualityLevelFineTune() const{ return m_qvbrQualityLevelFineTune; }

    /**
     * Optional. Specify a value here to set the QVBR quality to a level that is
     * between whole numbers. For example, if you want your QVBR quality level to be
     * 7.33, set qvbrQualityLevel to 7 and set qvbrQualityLevelFineTune to .33.
     * MediaConvert rounds your QVBR quality level to the nearest third of a whole
     * number. For example, if you set qvbrQualityLevel to 7 and you set
     * qvbrQualityLevelFineTune to .25, your actual QVBR quality level is 7.33.
     */
    inline bool QvbrQualityLevelFineTuneHasBeenSet() const { return m_qvbrQualityLevelFineTuneHasBeenSet; }

    /**
     * Optional. Specify a value here to set the QVBR quality to a level that is
     * between whole numbers. For example, if you want your QVBR quality level to be
     * 7.33, set qvbrQualityLevel to 7 and set qvbrQualityLevelFineTune to .33.
     * MediaConvert rounds your QVBR quality level to the nearest third of a whole
     * number. For example, if you set qvbrQualityLevel to 7 and you set
     * qvbrQualityLevelFineTune to .25, your actual QVBR quality level is 7.33.
     */
    inline void SetQvbrQualityLevelFineTune(double value) { m_qvbrQualityLevelFineTuneHasBeenSet = true; m_qvbrQualityLevelFineTune = value; }

    /**
     * Optional. Specify a value here to set the QVBR quality to a level that is
     * between whole numbers. For example, if you want your QVBR quality level to be
     * 7.33, set qvbrQualityLevel to 7 and set qvbrQualityLevelFineTune to .33.
     * MediaConvert rounds your QVBR quality level to the nearest third of a whole
     * number. For example, if you set qvbrQualityLevel to 7 and you set
     * qvbrQualityLevelFineTune to .25, your actual QVBR quality level is 7.33.
     */
    inline Av1QvbrSettings& WithQvbrQualityLevelFineTune(double value) { SetQvbrQualityLevelFineTune(value); return *this;}

  private:

    int m_qvbrQualityLevel;
    bool m_qvbrQualityLevelHasBeenSet = false;

    double m_qvbrQualityLevelFineTune;
    bool m_qvbrQualityLevelFineTuneHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
