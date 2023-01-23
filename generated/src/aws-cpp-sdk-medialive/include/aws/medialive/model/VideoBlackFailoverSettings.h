/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>

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
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for VideoBlackFailoverSettings<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/VideoBlackFailoverSettings">AWS
   * API Reference</a></p>
   */
  class VideoBlackFailoverSettings
  {
  public:
    AWS_MEDIALIVE_API VideoBlackFailoverSettings();
    AWS_MEDIALIVE_API VideoBlackFailoverSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API VideoBlackFailoverSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A value used in calculating the threshold below which MediaLive considers a
     * pixel to be 'black'. For the input to be considered black, every pixel in a
     * frame must be below this threshold. The threshold is calculated as a percentage
     * (expressed as a decimal) of white. Therefore .1 means 10% white (or 90% black).
     * Note how the formula works for any color depth. For example, if you set this
     * field to 0.1 in 10-bit color depth: (1023*0.1=102.3), which means a pixel value
     * of 102 or less is 'black'. If you set this field to .1 in an 8-bit color depth:
     * (255*0.1=25.5), which means a pixel value of 25 or less is 'black'. The range is
     * 0.0 to 1.0, with any number of decimal places.
     */
    inline double GetBlackDetectThreshold() const{ return m_blackDetectThreshold; }

    /**
     * A value used in calculating the threshold below which MediaLive considers a
     * pixel to be 'black'. For the input to be considered black, every pixel in a
     * frame must be below this threshold. The threshold is calculated as a percentage
     * (expressed as a decimal) of white. Therefore .1 means 10% white (or 90% black).
     * Note how the formula works for any color depth. For example, if you set this
     * field to 0.1 in 10-bit color depth: (1023*0.1=102.3), which means a pixel value
     * of 102 or less is 'black'. If you set this field to .1 in an 8-bit color depth:
     * (255*0.1=25.5), which means a pixel value of 25 or less is 'black'. The range is
     * 0.0 to 1.0, with any number of decimal places.
     */
    inline bool BlackDetectThresholdHasBeenSet() const { return m_blackDetectThresholdHasBeenSet; }

    /**
     * A value used in calculating the threshold below which MediaLive considers a
     * pixel to be 'black'. For the input to be considered black, every pixel in a
     * frame must be below this threshold. The threshold is calculated as a percentage
     * (expressed as a decimal) of white. Therefore .1 means 10% white (or 90% black).
     * Note how the formula works for any color depth. For example, if you set this
     * field to 0.1 in 10-bit color depth: (1023*0.1=102.3), which means a pixel value
     * of 102 or less is 'black'. If you set this field to .1 in an 8-bit color depth:
     * (255*0.1=25.5), which means a pixel value of 25 or less is 'black'. The range is
     * 0.0 to 1.0, with any number of decimal places.
     */
    inline void SetBlackDetectThreshold(double value) { m_blackDetectThresholdHasBeenSet = true; m_blackDetectThreshold = value; }

    /**
     * A value used in calculating the threshold below which MediaLive considers a
     * pixel to be 'black'. For the input to be considered black, every pixel in a
     * frame must be below this threshold. The threshold is calculated as a percentage
     * (expressed as a decimal) of white. Therefore .1 means 10% white (or 90% black).
     * Note how the formula works for any color depth. For example, if you set this
     * field to 0.1 in 10-bit color depth: (1023*0.1=102.3), which means a pixel value
     * of 102 or less is 'black'. If you set this field to .1 in an 8-bit color depth:
     * (255*0.1=25.5), which means a pixel value of 25 or less is 'black'. The range is
     * 0.0 to 1.0, with any number of decimal places.
     */
    inline VideoBlackFailoverSettings& WithBlackDetectThreshold(double value) { SetBlackDetectThreshold(value); return *this;}


    /**
     * The amount of time (in milliseconds) that the active input must be black before
     * automatic input failover occurs.
     */
    inline int GetVideoBlackThresholdMsec() const{ return m_videoBlackThresholdMsec; }

    /**
     * The amount of time (in milliseconds) that the active input must be black before
     * automatic input failover occurs.
     */
    inline bool VideoBlackThresholdMsecHasBeenSet() const { return m_videoBlackThresholdMsecHasBeenSet; }

    /**
     * The amount of time (in milliseconds) that the active input must be black before
     * automatic input failover occurs.
     */
    inline void SetVideoBlackThresholdMsec(int value) { m_videoBlackThresholdMsecHasBeenSet = true; m_videoBlackThresholdMsec = value; }

    /**
     * The amount of time (in milliseconds) that the active input must be black before
     * automatic input failover occurs.
     */
    inline VideoBlackFailoverSettings& WithVideoBlackThresholdMsec(int value) { SetVideoBlackThresholdMsec(value); return *this;}

  private:

    double m_blackDetectThreshold;
    bool m_blackDetectThresholdHasBeenSet = false;

    int m_videoBlackThresholdMsec;
    bool m_videoBlackThresholdMsecHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
