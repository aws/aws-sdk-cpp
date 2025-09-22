/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AfdSignaling.h>
#include <aws/medialive/model/Av1ColorSpaceSettings.h>
#include <aws/medialive/model/FixedAfd.h>
#include <aws/medialive/model/Av1GopSizeUnits.h>
#include <aws/medialive/model/Av1Level.h>
#include <aws/medialive/model/Av1LookAheadRateControl.h>
#include <aws/medialive/model/Av1SceneChangeDetect.h>
#include <aws/medialive/model/TimecodeBurninSettings.h>
#include <aws/medialive/model/Av1RateControlMode.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Av1 Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Av1Settings">AWS
   * API Reference</a></p>
   */
  class Av1Settings
  {
  public:
    AWS_MEDIALIVE_API Av1Settings() = default;
    AWS_MEDIALIVE_API Av1Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Av1Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Configures whether MediaLive will write AFD values into the video.
AUTO:
     * MediaLive will try to preserve the input AFD value (in cases where multiple AFD
     * values are valid).
FIXED: the AFD value will be the value configured in the
     * fixedAfd parameter.
NONE: MediaLive won't write AFD into the video
     */
    inline AfdSignaling GetAfdSignaling() const { return m_afdSignaling; }
    inline bool AfdSignalingHasBeenSet() const { return m_afdSignalingHasBeenSet; }
    inline void SetAfdSignaling(AfdSignaling value) { m_afdSignalingHasBeenSet = true; m_afdSignaling = value; }
    inline Av1Settings& WithAfdSignaling(AfdSignaling value) { SetAfdSignaling(value); return *this;}
    ///@}

    ///@{
    /**
     * The size of the buffer (HRD buffer model) in bits.
     */
    inline int GetBufSize() const { return m_bufSize; }
    inline bool BufSizeHasBeenSet() const { return m_bufSizeHasBeenSet; }
    inline void SetBufSize(int value) { m_bufSizeHasBeenSet = true; m_bufSize = value; }
    inline Av1Settings& WithBufSize(int value) { SetBufSize(value); return *this;}
    ///@}

    ///@{
    /**
     * Color Space settings
     */
    inline const Av1ColorSpaceSettings& GetColorSpaceSettings() const { return m_colorSpaceSettings; }
    inline bool ColorSpaceSettingsHasBeenSet() const { return m_colorSpaceSettingsHasBeenSet; }
    template<typename ColorSpaceSettingsT = Av1ColorSpaceSettings>
    void SetColorSpaceSettings(ColorSpaceSettingsT&& value) { m_colorSpaceSettingsHasBeenSet = true; m_colorSpaceSettings = std::forward<ColorSpaceSettingsT>(value); }
    template<typename ColorSpaceSettingsT = Av1ColorSpaceSettings>
    Av1Settings& WithColorSpaceSettings(ColorSpaceSettingsT&& value) { SetColorSpaceSettings(std::forward<ColorSpaceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Complete this property only if you set the afdSignaling property to FIXED.
     * Choose the AFD value (4 bits) to write on all frames of the video encode.
     */
    inline FixedAfd GetFixedAfd() const { return m_fixedAfd; }
    inline bool FixedAfdHasBeenSet() const { return m_fixedAfdHasBeenSet; }
    inline void SetFixedAfd(FixedAfd value) { m_fixedAfdHasBeenSet = true; m_fixedAfd = value; }
    inline Av1Settings& WithFixedAfd(FixedAfd value) { SetFixedAfd(value); return *this;}
    ///@}

    ///@{
    /**
     * The denominator for the framerate. Framerate is a fraction, for example, 24000 /
     * 1001.
     */
    inline int GetFramerateDenominator() const { return m_framerateDenominator; }
    inline bool FramerateDenominatorHasBeenSet() const { return m_framerateDenominatorHasBeenSet; }
    inline void SetFramerateDenominator(int value) { m_framerateDenominatorHasBeenSet = true; m_framerateDenominator = value; }
    inline Av1Settings& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}
    ///@}

    ///@{
    /**
     * The numerator for the framerate. Framerate is a fraction, for example, 24000 /
     * 1001.
     */
    inline int GetFramerateNumerator() const { return m_framerateNumerator; }
    inline bool FramerateNumeratorHasBeenSet() const { return m_framerateNumeratorHasBeenSet; }
    inline void SetFramerateNumerator(int value) { m_framerateNumeratorHasBeenSet = true; m_framerateNumerator = value; }
    inline Av1Settings& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}
    ///@}

    ///@{
    /**
     * The GOP size (keyframe interval).
If GopSizeUnits is frames, GopSize must be a
     * whole number and must be greater than or equal to 1.
If GopSizeUnits is seconds,
     * GopSize must be greater than 0, but it can be a decimal.
     */
    inline double GetGopSize() const { return m_gopSize; }
    inline bool GopSizeHasBeenSet() const { return m_gopSizeHasBeenSet; }
    inline void SetGopSize(double value) { m_gopSizeHasBeenSet = true; m_gopSize = value; }
    inline Av1Settings& WithGopSize(double value) { SetGopSize(value); return *this;}
    ///@}

    ///@{
    /**
     * Choose the units for the GOP size: FRAMES or SECONDS. For SECONDS, MediaLive
     * converts the size into a frame count at run time.
     */
    inline Av1GopSizeUnits GetGopSizeUnits() const { return m_gopSizeUnits; }
    inline bool GopSizeUnitsHasBeenSet() const { return m_gopSizeUnitsHasBeenSet; }
    inline void SetGopSizeUnits(Av1GopSizeUnits value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = value; }
    inline Av1Settings& WithGopSizeUnits(Av1GopSizeUnits value) { SetGopSizeUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * Sets the level. This parameter is one of the properties of the encoding scheme
     * for AV1.
     */
    inline Av1Level GetLevel() const { return m_level; }
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
    inline void SetLevel(Av1Level value) { m_levelHasBeenSet = true; m_level = value; }
    inline Av1Settings& WithLevel(Av1Level value) { SetLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * Sets the amount of lookahead. A value of LOW can decrease latency and memory
     * usage. A value of HIGH can produce better quality for certain content.
     */
    inline Av1LookAheadRateControl GetLookAheadRateControl() const { return m_lookAheadRateControl; }
    inline bool LookAheadRateControlHasBeenSet() const { return m_lookAheadRateControlHasBeenSet; }
    inline void SetLookAheadRateControl(Av1LookAheadRateControl value) { m_lookAheadRateControlHasBeenSet = true; m_lookAheadRateControl = value; }
    inline Av1Settings& WithLookAheadRateControl(Av1LookAheadRateControl value) { SetLookAheadRateControl(value); return *this;}
    ///@}

    ///@{
    /**
     * The maximum bitrate to assign.
For recommendations, see the description for
     * qvbrQualityLevel.
     */
    inline int GetMaxBitrate() const { return m_maxBitrate; }
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }
    inline Av1Settings& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * Applies only if you enable SceneChangeDetect. Sets the interval between frames.
     * This property ensures a minimum separation between repeated (cadence) I-frames
     * and any I-frames inserted by scene change detection (SCD frames).
Enter a number
     * for the interval, measured in number of frames.
If an SCD frame and a cadence
     * frame are closer than the specified number of frames, MediaLive shrinks or
     * stretches the GOP to include the SCD frame. Then normal cadence resumes in the
     * next GOP. For GOP stretch to succeed, you must enable LookAheadRateControl.
Note
     * that the maximum GOP stretch = (GOP size) + (Minimum I-interval) - 1
     */
    inline int GetMinIInterval() const { return m_minIInterval; }
    inline bool MinIIntervalHasBeenSet() const { return m_minIIntervalHasBeenSet; }
    inline void SetMinIInterval(int value) { m_minIIntervalHasBeenSet = true; m_minIInterval = value; }
    inline Av1Settings& WithMinIInterval(int value) { SetMinIInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * The denominator for the output pixel aspect ratio (PAR).
     */
    inline int GetParDenominator() const { return m_parDenominator; }
    inline bool ParDenominatorHasBeenSet() const { return m_parDenominatorHasBeenSet; }
    inline void SetParDenominator(int value) { m_parDenominatorHasBeenSet = true; m_parDenominator = value; }
    inline Av1Settings& WithParDenominator(int value) { SetParDenominator(value); return *this;}
    ///@}

    ///@{
    /**
     * The numerator for the output pixel aspect ratio (PAR).
     */
    inline int GetParNumerator() const { return m_parNumerator; }
    inline bool ParNumeratorHasBeenSet() const { return m_parNumeratorHasBeenSet; }
    inline void SetParNumerator(int value) { m_parNumeratorHasBeenSet = true; m_parNumerator = value; }
    inline Av1Settings& WithParNumerator(int value) { SetParNumerator(value); return *this;}
    ///@}

    ///@{
    /**
     * Controls the target quality for the video encode. With QVBR rate control mode,
     * the final quality is the target quality, constrained by the maxBitrate.
Set
     * values for the qvbrQualityLevel property and maxBitrate property that suit your
     * most important viewing devices.
To let MediaLive set the quality level (AUTO
     * mode), leave the qvbrQualityLevel field empty. In this case, MediaLive uses the
     * maximum bitrate, and the quality follows from that: more complex content might
     * have a lower quality.
Or set a target quality level and a maximum bitrate. With
     * more complex content, MediaLive will try to achieve the target quality, but it
     * won't exceed the maximum bitrate. With less complex content, This option will
     * use only the bitrate needed to reach the target quality.
Recommended values
     * are:
Primary screen: qvbrQualityLevel: Leave empty. maxBitrate: 4,000,000
PC or
     * tablet: qvbrQualityLevel: Leave empty. maxBitrate: 1,500,000 to
     * 3,000,000
Smartphone: qvbrQualityLevel: Leave empty. maxBitrate: 1,000,000 to
     * 1,500,000
     */
    inline int GetQvbrQualityLevel() const { return m_qvbrQualityLevel; }
    inline bool QvbrQualityLevelHasBeenSet() const { return m_qvbrQualityLevelHasBeenSet; }
    inline void SetQvbrQualityLevel(int value) { m_qvbrQualityLevelHasBeenSet = true; m_qvbrQualityLevel = value; }
    inline Av1Settings& WithQvbrQualityLevel(int value) { SetQvbrQualityLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * Controls whether MediaLive inserts I-frames when it detects a scene change.
     * ENABLED or DISABLED.
     */
    inline Av1SceneChangeDetect GetSceneChangeDetect() const { return m_sceneChangeDetect; }
    inline bool SceneChangeDetectHasBeenSet() const { return m_sceneChangeDetectHasBeenSet; }
    inline void SetSceneChangeDetect(Av1SceneChangeDetect value) { m_sceneChangeDetectHasBeenSet = true; m_sceneChangeDetect = value; }
    inline Av1Settings& WithSceneChangeDetect(Av1SceneChangeDetect value) { SetSceneChangeDetect(value); return *this;}
    ///@}

    ///@{
    /**
     * Configures the timecode burn-in feature. If you enable this feature, the
     * timecode will become part of the video.
     */
    inline const TimecodeBurninSettings& GetTimecodeBurninSettings() const { return m_timecodeBurninSettings; }
    inline bool TimecodeBurninSettingsHasBeenSet() const { return m_timecodeBurninSettingsHasBeenSet; }
    template<typename TimecodeBurninSettingsT = TimecodeBurninSettings>
    void SetTimecodeBurninSettings(TimecodeBurninSettingsT&& value) { m_timecodeBurninSettingsHasBeenSet = true; m_timecodeBurninSettings = std::forward<TimecodeBurninSettingsT>(value); }
    template<typename TimecodeBurninSettingsT = TimecodeBurninSettings>
    Av1Settings& WithTimecodeBurninSettings(TimecodeBurninSettingsT&& value) { SetTimecodeBurninSettings(std::forward<TimecodeBurninSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Average bitrate in bits/second. Required when the rate control mode is CBR. Not
     * used for QVBR.
     */
    inline int GetBitrate() const { return m_bitrate; }
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }
    inline Av1Settings& WithBitrate(int value) { SetBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * Rate control mode.

QVBR: Quality will match the specified quality level except
     * when it is constrained by the
maximum bitrate.  Recommended if you or your
     * viewers pay for bandwidth.

CBR: Quality varies, depending on the video
     * complexity. Recommended only if you distribute
your assets to devices that
     * cannot handle variable bitrates.
     */
    inline Av1RateControlMode GetRateControlMode() const { return m_rateControlMode; }
    inline bool RateControlModeHasBeenSet() const { return m_rateControlModeHasBeenSet; }
    inline void SetRateControlMode(Av1RateControlMode value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = value; }
    inline Av1Settings& WithRateControlMode(Av1RateControlMode value) { SetRateControlMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Used for QVBR rate control mode only.
Optional.
Enter a minimum bitrate if you
     * want to keep the output bitrate about a threshold, in order to prevent the
     * downstream system from de-allocating network bandwidth for this output.
     */
    inline int GetMinBitrate() const { return m_minBitrate; }
    inline bool MinBitrateHasBeenSet() const { return m_minBitrateHasBeenSet; }
    inline void SetMinBitrate(int value) { m_minBitrateHasBeenSet = true; m_minBitrate = value; }
    inline Av1Settings& WithMinBitrate(int value) { SetMinBitrate(value); return *this;}
    ///@}
  private:

    AfdSignaling m_afdSignaling{AfdSignaling::NOT_SET};
    bool m_afdSignalingHasBeenSet = false;

    int m_bufSize{0};
    bool m_bufSizeHasBeenSet = false;

    Av1ColorSpaceSettings m_colorSpaceSettings;
    bool m_colorSpaceSettingsHasBeenSet = false;

    FixedAfd m_fixedAfd{FixedAfd::NOT_SET};
    bool m_fixedAfdHasBeenSet = false;

    int m_framerateDenominator{0};
    bool m_framerateDenominatorHasBeenSet = false;

    int m_framerateNumerator{0};
    bool m_framerateNumeratorHasBeenSet = false;

    double m_gopSize{0.0};
    bool m_gopSizeHasBeenSet = false;

    Av1GopSizeUnits m_gopSizeUnits{Av1GopSizeUnits::NOT_SET};
    bool m_gopSizeUnitsHasBeenSet = false;

    Av1Level m_level{Av1Level::NOT_SET};
    bool m_levelHasBeenSet = false;

    Av1LookAheadRateControl m_lookAheadRateControl{Av1LookAheadRateControl::NOT_SET};
    bool m_lookAheadRateControlHasBeenSet = false;

    int m_maxBitrate{0};
    bool m_maxBitrateHasBeenSet = false;

    int m_minIInterval{0};
    bool m_minIIntervalHasBeenSet = false;

    int m_parDenominator{0};
    bool m_parDenominatorHasBeenSet = false;

    int m_parNumerator{0};
    bool m_parNumeratorHasBeenSet = false;

    int m_qvbrQualityLevel{0};
    bool m_qvbrQualityLevelHasBeenSet = false;

    Av1SceneChangeDetect m_sceneChangeDetect{Av1SceneChangeDetect::NOT_SET};
    bool m_sceneChangeDetectHasBeenSet = false;

    TimecodeBurninSettings m_timecodeBurninSettings;
    bool m_timecodeBurninSettingsHasBeenSet = false;

    int m_bitrate{0};
    bool m_bitrateHasBeenSet = false;

    Av1RateControlMode m_rateControlMode{Av1RateControlMode::NOT_SET};
    bool m_rateControlModeHasBeenSet = false;

    int m_minBitrate{0};
    bool m_minBitrateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
