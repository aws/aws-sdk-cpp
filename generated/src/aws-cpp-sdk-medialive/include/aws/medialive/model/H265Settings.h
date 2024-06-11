﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/H265AdaptiveQuantization.h>
#include <aws/medialive/model/AfdSignaling.h>
#include <aws/medialive/model/H265AlternativeTransferFunction.h>
#include <aws/medialive/model/H265ColorMetadata.h>
#include <aws/medialive/model/H265ColorSpaceSettings.h>
#include <aws/medialive/model/H265FilterSettings.h>
#include <aws/medialive/model/FixedAfd.h>
#include <aws/medialive/model/H265FlickerAq.h>
#include <aws/medialive/model/H265GopSizeUnits.h>
#include <aws/medialive/model/H265Level.h>
#include <aws/medialive/model/H265LookAheadRateControl.h>
#include <aws/medialive/model/H265Profile.h>
#include <aws/medialive/model/H265RateControlMode.h>
#include <aws/medialive/model/H265ScanType.h>
#include <aws/medialive/model/H265SceneChangeDetect.h>
#include <aws/medialive/model/H265Tier.h>
#include <aws/medialive/model/H265TimecodeInsertionBehavior.h>
#include <aws/medialive/model/TimecodeBurninSettings.h>
#include <aws/medialive/model/H265MvOverPictureBoundaries.h>
#include <aws/medialive/model/H265MvTemporalPredictor.h>
#include <aws/medialive/model/H265TilePadding.h>
#include <aws/medialive/model/H265TreeblockSize.h>
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
   * H265 Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/H265Settings">AWS
   * API Reference</a></p>
   */
  class H265Settings
  {
  public:
    AWS_MEDIALIVE_API H265Settings();
    AWS_MEDIALIVE_API H265Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API H265Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Adaptive quantization. Allows intra-frame quantizers to vary to improve visual
     * quality.
     */
    inline const H265AdaptiveQuantization& GetAdaptiveQuantization() const{ return m_adaptiveQuantization; }
    inline bool AdaptiveQuantizationHasBeenSet() const { return m_adaptiveQuantizationHasBeenSet; }
    inline void SetAdaptiveQuantization(const H265AdaptiveQuantization& value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = value; }
    inline void SetAdaptiveQuantization(H265AdaptiveQuantization&& value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = std::move(value); }
    inline H265Settings& WithAdaptiveQuantization(const H265AdaptiveQuantization& value) { SetAdaptiveQuantization(value); return *this;}
    inline H265Settings& WithAdaptiveQuantization(H265AdaptiveQuantization&& value) { SetAdaptiveQuantization(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Indicates that AFD values will be written into the output stream.  If
     * afdSignaling is "auto", the system will try to preserve the input AFD value (in
     * cases where multiple AFD values are valid). If set to "fixed", the AFD value
     * will be the value configured in the fixedAfd parameter.
     */
    inline const AfdSignaling& GetAfdSignaling() const{ return m_afdSignaling; }
    inline bool AfdSignalingHasBeenSet() const { return m_afdSignalingHasBeenSet; }
    inline void SetAfdSignaling(const AfdSignaling& value) { m_afdSignalingHasBeenSet = true; m_afdSignaling = value; }
    inline void SetAfdSignaling(AfdSignaling&& value) { m_afdSignalingHasBeenSet = true; m_afdSignaling = std::move(value); }
    inline H265Settings& WithAfdSignaling(const AfdSignaling& value) { SetAfdSignaling(value); return *this;}
    inline H265Settings& WithAfdSignaling(AfdSignaling&& value) { SetAfdSignaling(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Whether or not EML should insert an Alternative Transfer Function SEI message to
     * support backwards compatibility with non-HDR decoders and displays.
     */
    inline const H265AlternativeTransferFunction& GetAlternativeTransferFunction() const{ return m_alternativeTransferFunction; }
    inline bool AlternativeTransferFunctionHasBeenSet() const { return m_alternativeTransferFunctionHasBeenSet; }
    inline void SetAlternativeTransferFunction(const H265AlternativeTransferFunction& value) { m_alternativeTransferFunctionHasBeenSet = true; m_alternativeTransferFunction = value; }
    inline void SetAlternativeTransferFunction(H265AlternativeTransferFunction&& value) { m_alternativeTransferFunctionHasBeenSet = true; m_alternativeTransferFunction = std::move(value); }
    inline H265Settings& WithAlternativeTransferFunction(const H265AlternativeTransferFunction& value) { SetAlternativeTransferFunction(value); return *this;}
    inline H265Settings& WithAlternativeTransferFunction(H265AlternativeTransferFunction&& value) { SetAlternativeTransferFunction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Average bitrate in bits/second. Required when the rate control mode is VBR or
     * CBR. Not used for QVBR. In an MS Smooth output group, each output must have a
     * unique value when its bitrate is rounded down to the nearest multiple of 1000.
     */
    inline int GetBitrate() const{ return m_bitrate; }
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }
    inline H265Settings& WithBitrate(int value) { SetBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * Size of buffer (HRD buffer model) in bits.
     */
    inline int GetBufSize() const{ return m_bufSize; }
    inline bool BufSizeHasBeenSet() const { return m_bufSizeHasBeenSet; }
    inline void SetBufSize(int value) { m_bufSizeHasBeenSet = true; m_bufSize = value; }
    inline H265Settings& WithBufSize(int value) { SetBufSize(value); return *this;}
    ///@}

    ///@{
    /**
     * Includes colorspace metadata in the output.
     */
    inline const H265ColorMetadata& GetColorMetadata() const{ return m_colorMetadata; }
    inline bool ColorMetadataHasBeenSet() const { return m_colorMetadataHasBeenSet; }
    inline void SetColorMetadata(const H265ColorMetadata& value) { m_colorMetadataHasBeenSet = true; m_colorMetadata = value; }
    inline void SetColorMetadata(H265ColorMetadata&& value) { m_colorMetadataHasBeenSet = true; m_colorMetadata = std::move(value); }
    inline H265Settings& WithColorMetadata(const H265ColorMetadata& value) { SetColorMetadata(value); return *this;}
    inline H265Settings& WithColorMetadata(H265ColorMetadata&& value) { SetColorMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Color Space settings
     */
    inline const H265ColorSpaceSettings& GetColorSpaceSettings() const{ return m_colorSpaceSettings; }
    inline bool ColorSpaceSettingsHasBeenSet() const { return m_colorSpaceSettingsHasBeenSet; }
    inline void SetColorSpaceSettings(const H265ColorSpaceSettings& value) { m_colorSpaceSettingsHasBeenSet = true; m_colorSpaceSettings = value; }
    inline void SetColorSpaceSettings(H265ColorSpaceSettings&& value) { m_colorSpaceSettingsHasBeenSet = true; m_colorSpaceSettings = std::move(value); }
    inline H265Settings& WithColorSpaceSettings(const H265ColorSpaceSettings& value) { SetColorSpaceSettings(value); return *this;}
    inline H265Settings& WithColorSpaceSettings(H265ColorSpaceSettings&& value) { SetColorSpaceSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional filters that you can apply to an encode.
     */
    inline const H265FilterSettings& GetFilterSettings() const{ return m_filterSettings; }
    inline bool FilterSettingsHasBeenSet() const { return m_filterSettingsHasBeenSet; }
    inline void SetFilterSettings(const H265FilterSettings& value) { m_filterSettingsHasBeenSet = true; m_filterSettings = value; }
    inline void SetFilterSettings(H265FilterSettings&& value) { m_filterSettingsHasBeenSet = true; m_filterSettings = std::move(value); }
    inline H265Settings& WithFilterSettings(const H265FilterSettings& value) { SetFilterSettings(value); return *this;}
    inline H265Settings& WithFilterSettings(H265FilterSettings&& value) { SetFilterSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Four bit AFD value to write on all frames of video in the output stream. Only
     * valid when afdSignaling is set to 'Fixed'.
     */
    inline const FixedAfd& GetFixedAfd() const{ return m_fixedAfd; }
    inline bool FixedAfdHasBeenSet() const { return m_fixedAfdHasBeenSet; }
    inline void SetFixedAfd(const FixedAfd& value) { m_fixedAfdHasBeenSet = true; m_fixedAfd = value; }
    inline void SetFixedAfd(FixedAfd&& value) { m_fixedAfdHasBeenSet = true; m_fixedAfd = std::move(value); }
    inline H265Settings& WithFixedAfd(const FixedAfd& value) { SetFixedAfd(value); return *this;}
    inline H265Settings& WithFixedAfd(FixedAfd&& value) { SetFixedAfd(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * If set to enabled, adjust quantization within each frame to reduce flicker or
     * 'pop' on I-frames.
     */
    inline const H265FlickerAq& GetFlickerAq() const{ return m_flickerAq; }
    inline bool FlickerAqHasBeenSet() const { return m_flickerAqHasBeenSet; }
    inline void SetFlickerAq(const H265FlickerAq& value) { m_flickerAqHasBeenSet = true; m_flickerAq = value; }
    inline void SetFlickerAq(H265FlickerAq&& value) { m_flickerAqHasBeenSet = true; m_flickerAq = std::move(value); }
    inline H265Settings& WithFlickerAq(const H265FlickerAq& value) { SetFlickerAq(value); return *this;}
    inline H265Settings& WithFlickerAq(H265FlickerAq&& value) { SetFlickerAq(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Framerate denominator.
     */
    inline int GetFramerateDenominator() const{ return m_framerateDenominator; }
    inline bool FramerateDenominatorHasBeenSet() const { return m_framerateDenominatorHasBeenSet; }
    inline void SetFramerateDenominator(int value) { m_framerateDenominatorHasBeenSet = true; m_framerateDenominator = value; }
    inline H265Settings& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}
    ///@}

    ///@{
    /**
     * Framerate numerator - framerate is a fraction, e.g. 24000 / 1001 = 23.976 fps.
     */
    inline int GetFramerateNumerator() const{ return m_framerateNumerator; }
    inline bool FramerateNumeratorHasBeenSet() const { return m_framerateNumeratorHasBeenSet; }
    inline void SetFramerateNumerator(int value) { m_framerateNumeratorHasBeenSet = true; m_framerateNumerator = value; }
    inline H265Settings& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}
    ///@}

    ///@{
    /**
     * Frequency of closed GOPs. In streaming applications, it is recommended that this
     * be set to 1 so a decoder joining mid-stream will receive an IDR frame as quickly
     * as possible. Setting this value to 0 will break output segmenting.
     */
    inline int GetGopClosedCadence() const{ return m_gopClosedCadence; }
    inline bool GopClosedCadenceHasBeenSet() const { return m_gopClosedCadenceHasBeenSet; }
    inline void SetGopClosedCadence(int value) { m_gopClosedCadenceHasBeenSet = true; m_gopClosedCadence = value; }
    inline H265Settings& WithGopClosedCadence(int value) { SetGopClosedCadence(value); return *this;}
    ///@}

    ///@{
    /**
     * GOP size (keyframe interval) in units of either frames or seconds per
     * gopSizeUnits.
If gopSizeUnits is frames, gopSize must be an integer and must be
     * greater than or equal to 1.
If gopSizeUnits is seconds, gopSize must be greater
     * than 0, but need not be an integer.
     */
    inline double GetGopSize() const{ return m_gopSize; }
    inline bool GopSizeHasBeenSet() const { return m_gopSizeHasBeenSet; }
    inline void SetGopSize(double value) { m_gopSizeHasBeenSet = true; m_gopSize = value; }
    inline H265Settings& WithGopSize(double value) { SetGopSize(value); return *this;}
    ///@}

    ///@{
    /**
     * Indicates if the gopSize is specified in frames or seconds. If seconds the
     * system will convert the gopSize into a frame count at run time.
     */
    inline const H265GopSizeUnits& GetGopSizeUnits() const{ return m_gopSizeUnits; }
    inline bool GopSizeUnitsHasBeenSet() const { return m_gopSizeUnitsHasBeenSet; }
    inline void SetGopSizeUnits(const H265GopSizeUnits& value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = value; }
    inline void SetGopSizeUnits(H265GopSizeUnits&& value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = std::move(value); }
    inline H265Settings& WithGopSizeUnits(const H265GopSizeUnits& value) { SetGopSizeUnits(value); return *this;}
    inline H265Settings& WithGopSizeUnits(H265GopSizeUnits&& value) { SetGopSizeUnits(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * H.265 Level.
     */
    inline const H265Level& GetLevel() const{ return m_level; }
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
    inline void SetLevel(const H265Level& value) { m_levelHasBeenSet = true; m_level = value; }
    inline void SetLevel(H265Level&& value) { m_levelHasBeenSet = true; m_level = std::move(value); }
    inline H265Settings& WithLevel(const H265Level& value) { SetLevel(value); return *this;}
    inline H265Settings& WithLevel(H265Level&& value) { SetLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Amount of lookahead. A value of low can decrease latency and memory usage, while
     * high can produce better quality for certain content.
     */
    inline const H265LookAheadRateControl& GetLookAheadRateControl() const{ return m_lookAheadRateControl; }
    inline bool LookAheadRateControlHasBeenSet() const { return m_lookAheadRateControlHasBeenSet; }
    inline void SetLookAheadRateControl(const H265LookAheadRateControl& value) { m_lookAheadRateControlHasBeenSet = true; m_lookAheadRateControl = value; }
    inline void SetLookAheadRateControl(H265LookAheadRateControl&& value) { m_lookAheadRateControlHasBeenSet = true; m_lookAheadRateControl = std::move(value); }
    inline H265Settings& WithLookAheadRateControl(const H265LookAheadRateControl& value) { SetLookAheadRateControl(value); return *this;}
    inline H265Settings& WithLookAheadRateControl(H265LookAheadRateControl&& value) { SetLookAheadRateControl(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * For QVBR: See the tooltip for Quality level
     */
    inline int GetMaxBitrate() const{ return m_maxBitrate; }
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }
    inline H265Settings& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * Only meaningful if sceneChangeDetect is set to enabled.  Defaults to 5 if
     * multiplex rate control is used.  Enforces separation between repeated (cadence)
     * I-frames and I-frames inserted by Scene Change Detection. If a scene change
     * I-frame is within I-interval frames of a cadence I-frame, the GOP is shrunk
     * and/or stretched to the scene change I-frame. GOP stretch requires enabling
     * lookahead as well as setting I-interval. The normal cadence resumes for the next
     * GOP. Note: Maximum GOP stretch = GOP size + Min-I-interval - 1
     */
    inline int GetMinIInterval() const{ return m_minIInterval; }
    inline bool MinIIntervalHasBeenSet() const { return m_minIIntervalHasBeenSet; }
    inline void SetMinIInterval(int value) { m_minIIntervalHasBeenSet = true; m_minIInterval = value; }
    inline H265Settings& WithMinIInterval(int value) { SetMinIInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * Pixel Aspect Ratio denominator.
     */
    inline int GetParDenominator() const{ return m_parDenominator; }
    inline bool ParDenominatorHasBeenSet() const { return m_parDenominatorHasBeenSet; }
    inline void SetParDenominator(int value) { m_parDenominatorHasBeenSet = true; m_parDenominator = value; }
    inline H265Settings& WithParDenominator(int value) { SetParDenominator(value); return *this;}
    ///@}

    ///@{
    /**
     * Pixel Aspect Ratio numerator.
     */
    inline int GetParNumerator() const{ return m_parNumerator; }
    inline bool ParNumeratorHasBeenSet() const { return m_parNumeratorHasBeenSet; }
    inline void SetParNumerator(int value) { m_parNumeratorHasBeenSet = true; m_parNumerator = value; }
    inline H265Settings& WithParNumerator(int value) { SetParNumerator(value); return *this;}
    ///@}

    ///@{
    /**
     * H.265 Profile.
     */
    inline const H265Profile& GetProfile() const{ return m_profile; }
    inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }
    inline void SetProfile(const H265Profile& value) { m_profileHasBeenSet = true; m_profile = value; }
    inline void SetProfile(H265Profile&& value) { m_profileHasBeenSet = true; m_profile = std::move(value); }
    inline H265Settings& WithProfile(const H265Profile& value) { SetProfile(value); return *this;}
    inline H265Settings& WithProfile(H265Profile&& value) { SetProfile(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Controls the target quality for the video encode. Applies only when the rate
     * control mode is QVBR. Set values for the QVBR quality level field and Max
     * bitrate field that suit your most important viewing devices. Recommended values
     * are:
- Primary screen: Quality level: 8 to 10. Max bitrate: 4M
- PC or tablet:
     * Quality level: 7. Max bitrate: 1.5M to 3M
- Smartphone: Quality level: 6. Max
     * bitrate: 1M to 1.5M
     */
    inline int GetQvbrQualityLevel() const{ return m_qvbrQualityLevel; }
    inline bool QvbrQualityLevelHasBeenSet() const { return m_qvbrQualityLevelHasBeenSet; }
    inline void SetQvbrQualityLevel(int value) { m_qvbrQualityLevelHasBeenSet = true; m_qvbrQualityLevel = value; }
    inline H265Settings& WithQvbrQualityLevel(int value) { SetQvbrQualityLevel(value); return *this;}
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

Multiplex: This rate control mode is only
     * supported (and is required) when the video is being
delivered to a MediaLive
     * Multiplex in which case the rate control configuration is controlled
by the
     * properties within the Multiplex Program.
     */
    inline const H265RateControlMode& GetRateControlMode() const{ return m_rateControlMode; }
    inline bool RateControlModeHasBeenSet() const { return m_rateControlModeHasBeenSet; }
    inline void SetRateControlMode(const H265RateControlMode& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = value; }
    inline void SetRateControlMode(H265RateControlMode&& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = std::move(value); }
    inline H265Settings& WithRateControlMode(const H265RateControlMode& value) { SetRateControlMode(value); return *this;}
    inline H265Settings& WithRateControlMode(H265RateControlMode&& value) { SetRateControlMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Sets the scan type of the output to progressive or top-field-first interlaced.
     */
    inline const H265ScanType& GetScanType() const{ return m_scanType; }
    inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }
    inline void SetScanType(const H265ScanType& value) { m_scanTypeHasBeenSet = true; m_scanType = value; }
    inline void SetScanType(H265ScanType&& value) { m_scanTypeHasBeenSet = true; m_scanType = std::move(value); }
    inline H265Settings& WithScanType(const H265ScanType& value) { SetScanType(value); return *this;}
    inline H265Settings& WithScanType(H265ScanType&& value) { SetScanType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Scene change detection.
     */
    inline const H265SceneChangeDetect& GetSceneChangeDetect() const{ return m_sceneChangeDetect; }
    inline bool SceneChangeDetectHasBeenSet() const { return m_sceneChangeDetectHasBeenSet; }
    inline void SetSceneChangeDetect(const H265SceneChangeDetect& value) { m_sceneChangeDetectHasBeenSet = true; m_sceneChangeDetect = value; }
    inline void SetSceneChangeDetect(H265SceneChangeDetect&& value) { m_sceneChangeDetectHasBeenSet = true; m_sceneChangeDetect = std::move(value); }
    inline H265Settings& WithSceneChangeDetect(const H265SceneChangeDetect& value) { SetSceneChangeDetect(value); return *this;}
    inline H265Settings& WithSceneChangeDetect(H265SceneChangeDetect&& value) { SetSceneChangeDetect(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Number of slices per picture. Must be less than or equal to the number of
     * macroblock rows for progressive pictures, and less than or equal to half the
     * number of macroblock rows for interlaced pictures.
This field is optional; when
     * no value is specified the encoder will choose the number of slices based on
     * encode resolution.
     */
    inline int GetSlices() const{ return m_slices; }
    inline bool SlicesHasBeenSet() const { return m_slicesHasBeenSet; }
    inline void SetSlices(int value) { m_slicesHasBeenSet = true; m_slices = value; }
    inline H265Settings& WithSlices(int value) { SetSlices(value); return *this;}
    ///@}

    ///@{
    /**
     * H.265 Tier.
     */
    inline const H265Tier& GetTier() const{ return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(const H265Tier& value) { m_tierHasBeenSet = true; m_tier = value; }
    inline void SetTier(H265Tier&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }
    inline H265Settings& WithTier(const H265Tier& value) { SetTier(value); return *this;}
    inline H265Settings& WithTier(H265Tier&& value) { SetTier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Determines how timecodes should be inserted into the video elementary stream.
-
     * 'disabled': Do not include timecodes
- 'picTimingSei': Pass through picture
     * timing SEI messages from the source specified in Timecode Config
     */
    inline const H265TimecodeInsertionBehavior& GetTimecodeInsertion() const{ return m_timecodeInsertion; }
    inline bool TimecodeInsertionHasBeenSet() const { return m_timecodeInsertionHasBeenSet; }
    inline void SetTimecodeInsertion(const H265TimecodeInsertionBehavior& value) { m_timecodeInsertionHasBeenSet = true; m_timecodeInsertion = value; }
    inline void SetTimecodeInsertion(H265TimecodeInsertionBehavior&& value) { m_timecodeInsertionHasBeenSet = true; m_timecodeInsertion = std::move(value); }
    inline H265Settings& WithTimecodeInsertion(const H265TimecodeInsertionBehavior& value) { SetTimecodeInsertion(value); return *this;}
    inline H265Settings& WithTimecodeInsertion(H265TimecodeInsertionBehavior&& value) { SetTimecodeInsertion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Timecode burn-in settings
     */
    inline const TimecodeBurninSettings& GetTimecodeBurninSettings() const{ return m_timecodeBurninSettings; }
    inline bool TimecodeBurninSettingsHasBeenSet() const { return m_timecodeBurninSettingsHasBeenSet; }
    inline void SetTimecodeBurninSettings(const TimecodeBurninSettings& value) { m_timecodeBurninSettingsHasBeenSet = true; m_timecodeBurninSettings = value; }
    inline void SetTimecodeBurninSettings(TimecodeBurninSettings&& value) { m_timecodeBurninSettingsHasBeenSet = true; m_timecodeBurninSettings = std::move(value); }
    inline H265Settings& WithTimecodeBurninSettings(const TimecodeBurninSettings& value) { SetTimecodeBurninSettings(value); return *this;}
    inline H265Settings& WithTimecodeBurninSettings(TimecodeBurninSettings&& value) { SetTimecodeBurninSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * If you are setting up the picture as a tile, you must set this to "disabled". In
     * all other configurations, you typically enter "enabled".
     */
    inline const H265MvOverPictureBoundaries& GetMvOverPictureBoundaries() const{ return m_mvOverPictureBoundaries; }
    inline bool MvOverPictureBoundariesHasBeenSet() const { return m_mvOverPictureBoundariesHasBeenSet; }
    inline void SetMvOverPictureBoundaries(const H265MvOverPictureBoundaries& value) { m_mvOverPictureBoundariesHasBeenSet = true; m_mvOverPictureBoundaries = value; }
    inline void SetMvOverPictureBoundaries(H265MvOverPictureBoundaries&& value) { m_mvOverPictureBoundariesHasBeenSet = true; m_mvOverPictureBoundaries = std::move(value); }
    inline H265Settings& WithMvOverPictureBoundaries(const H265MvOverPictureBoundaries& value) { SetMvOverPictureBoundaries(value); return *this;}
    inline H265Settings& WithMvOverPictureBoundaries(H265MvOverPictureBoundaries&& value) { SetMvOverPictureBoundaries(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * If you are setting up the picture as a tile, you must set this to "disabled". In
     * other configurations, you typically enter "enabled".
     */
    inline const H265MvTemporalPredictor& GetMvTemporalPredictor() const{ return m_mvTemporalPredictor; }
    inline bool MvTemporalPredictorHasBeenSet() const { return m_mvTemporalPredictorHasBeenSet; }
    inline void SetMvTemporalPredictor(const H265MvTemporalPredictor& value) { m_mvTemporalPredictorHasBeenSet = true; m_mvTemporalPredictor = value; }
    inline void SetMvTemporalPredictor(H265MvTemporalPredictor&& value) { m_mvTemporalPredictorHasBeenSet = true; m_mvTemporalPredictor = std::move(value); }
    inline H265Settings& WithMvTemporalPredictor(const H265MvTemporalPredictor& value) { SetMvTemporalPredictor(value); return *this;}
    inline H265Settings& WithMvTemporalPredictor(H265MvTemporalPredictor&& value) { SetMvTemporalPredictor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Set this field to set up the picture as a tile. You must also set tileWidth.
The
     * tile height must result in 22 or fewer rows in the frame. The tile width
must
     * result in 20 or fewer columns in the frame. And finally, the product of
     * the
column count and row count must be 64 of less.
If the tile width and height
     * are specified, MediaLive will override the video
codec slices field with a value
     * that MediaLive calculates
     */
    inline int GetTileHeight() const{ return m_tileHeight; }
    inline bool TileHeightHasBeenSet() const { return m_tileHeightHasBeenSet; }
    inline void SetTileHeight(int value) { m_tileHeightHasBeenSet = true; m_tileHeight = value; }
    inline H265Settings& WithTileHeight(int value) { SetTileHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * Set to "padded" to force MediaLive to add padding to the frame, to obtain a
     * frame that is a whole multiple of the tile size.
If you are setting up the
     * picture as a tile, you must enter "padded".
In all other configurations, you
     * typically enter "none".
     */
    inline const H265TilePadding& GetTilePadding() const{ return m_tilePadding; }
    inline bool TilePaddingHasBeenSet() const { return m_tilePaddingHasBeenSet; }
    inline void SetTilePadding(const H265TilePadding& value) { m_tilePaddingHasBeenSet = true; m_tilePadding = value; }
    inline void SetTilePadding(H265TilePadding&& value) { m_tilePaddingHasBeenSet = true; m_tilePadding = std::move(value); }
    inline H265Settings& WithTilePadding(const H265TilePadding& value) { SetTilePadding(value); return *this;}
    inline H265Settings& WithTilePadding(H265TilePadding&& value) { SetTilePadding(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Set this field to set up the picture as a tile. See tileHeight for more
     * information.
     */
    inline int GetTileWidth() const{ return m_tileWidth; }
    inline bool TileWidthHasBeenSet() const { return m_tileWidthHasBeenSet; }
    inline void SetTileWidth(int value) { m_tileWidthHasBeenSet = true; m_tileWidth = value; }
    inline H265Settings& WithTileWidth(int value) { SetTileWidth(value); return *this;}
    ///@}

    ///@{
    /**
     * Select the tree block size used for encoding. If you enter "auto", the encoder
     * will pick the best size. If you are setting up the picture as a tile, you must
     * set this to 32x32. In all other configurations, you typically enter "auto".
     */
    inline const H265TreeblockSize& GetTreeblockSize() const{ return m_treeblockSize; }
    inline bool TreeblockSizeHasBeenSet() const { return m_treeblockSizeHasBeenSet; }
    inline void SetTreeblockSize(const H265TreeblockSize& value) { m_treeblockSizeHasBeenSet = true; m_treeblockSize = value; }
    inline void SetTreeblockSize(H265TreeblockSize&& value) { m_treeblockSizeHasBeenSet = true; m_treeblockSize = std::move(value); }
    inline H265Settings& WithTreeblockSize(const H265TreeblockSize& value) { SetTreeblockSize(value); return *this;}
    inline H265Settings& WithTreeblockSize(H265TreeblockSize&& value) { SetTreeblockSize(std::move(value)); return *this;}
    ///@}
  private:

    H265AdaptiveQuantization m_adaptiveQuantization;
    bool m_adaptiveQuantizationHasBeenSet = false;

    AfdSignaling m_afdSignaling;
    bool m_afdSignalingHasBeenSet = false;

    H265AlternativeTransferFunction m_alternativeTransferFunction;
    bool m_alternativeTransferFunctionHasBeenSet = false;

    int m_bitrate;
    bool m_bitrateHasBeenSet = false;

    int m_bufSize;
    bool m_bufSizeHasBeenSet = false;

    H265ColorMetadata m_colorMetadata;
    bool m_colorMetadataHasBeenSet = false;

    H265ColorSpaceSettings m_colorSpaceSettings;
    bool m_colorSpaceSettingsHasBeenSet = false;

    H265FilterSettings m_filterSettings;
    bool m_filterSettingsHasBeenSet = false;

    FixedAfd m_fixedAfd;
    bool m_fixedAfdHasBeenSet = false;

    H265FlickerAq m_flickerAq;
    bool m_flickerAqHasBeenSet = false;

    int m_framerateDenominator;
    bool m_framerateDenominatorHasBeenSet = false;

    int m_framerateNumerator;
    bool m_framerateNumeratorHasBeenSet = false;

    int m_gopClosedCadence;
    bool m_gopClosedCadenceHasBeenSet = false;

    double m_gopSize;
    bool m_gopSizeHasBeenSet = false;

    H265GopSizeUnits m_gopSizeUnits;
    bool m_gopSizeUnitsHasBeenSet = false;

    H265Level m_level;
    bool m_levelHasBeenSet = false;

    H265LookAheadRateControl m_lookAheadRateControl;
    bool m_lookAheadRateControlHasBeenSet = false;

    int m_maxBitrate;
    bool m_maxBitrateHasBeenSet = false;

    int m_minIInterval;
    bool m_minIIntervalHasBeenSet = false;

    int m_parDenominator;
    bool m_parDenominatorHasBeenSet = false;

    int m_parNumerator;
    bool m_parNumeratorHasBeenSet = false;

    H265Profile m_profile;
    bool m_profileHasBeenSet = false;

    int m_qvbrQualityLevel;
    bool m_qvbrQualityLevelHasBeenSet = false;

    H265RateControlMode m_rateControlMode;
    bool m_rateControlModeHasBeenSet = false;

    H265ScanType m_scanType;
    bool m_scanTypeHasBeenSet = false;

    H265SceneChangeDetect m_sceneChangeDetect;
    bool m_sceneChangeDetectHasBeenSet = false;

    int m_slices;
    bool m_slicesHasBeenSet = false;

    H265Tier m_tier;
    bool m_tierHasBeenSet = false;

    H265TimecodeInsertionBehavior m_timecodeInsertion;
    bool m_timecodeInsertionHasBeenSet = false;

    TimecodeBurninSettings m_timecodeBurninSettings;
    bool m_timecodeBurninSettingsHasBeenSet = false;

    H265MvOverPictureBoundaries m_mvOverPictureBoundaries;
    bool m_mvOverPictureBoundariesHasBeenSet = false;

    H265MvTemporalPredictor m_mvTemporalPredictor;
    bool m_mvTemporalPredictorHasBeenSet = false;

    int m_tileHeight;
    bool m_tileHeightHasBeenSet = false;

    H265TilePadding m_tilePadding;
    bool m_tilePaddingHasBeenSet = false;

    int m_tileWidth;
    bool m_tileWidthHasBeenSet = false;

    H265TreeblockSize m_treeblockSize;
    bool m_treeblockSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
