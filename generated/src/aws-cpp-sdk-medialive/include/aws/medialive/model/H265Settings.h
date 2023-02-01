/**
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


    /**
     * Adaptive quantization. Allows intra-frame quantizers to vary to improve visual
     * quality.
     */
    inline const H265AdaptiveQuantization& GetAdaptiveQuantization() const{ return m_adaptiveQuantization; }

    /**
     * Adaptive quantization. Allows intra-frame quantizers to vary to improve visual
     * quality.
     */
    inline bool AdaptiveQuantizationHasBeenSet() const { return m_adaptiveQuantizationHasBeenSet; }

    /**
     * Adaptive quantization. Allows intra-frame quantizers to vary to improve visual
     * quality.
     */
    inline void SetAdaptiveQuantization(const H265AdaptiveQuantization& value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = value; }

    /**
     * Adaptive quantization. Allows intra-frame quantizers to vary to improve visual
     * quality.
     */
    inline void SetAdaptiveQuantization(H265AdaptiveQuantization&& value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = std::move(value); }

    /**
     * Adaptive quantization. Allows intra-frame quantizers to vary to improve visual
     * quality.
     */
    inline H265Settings& WithAdaptiveQuantization(const H265AdaptiveQuantization& value) { SetAdaptiveQuantization(value); return *this;}

    /**
     * Adaptive quantization. Allows intra-frame quantizers to vary to improve visual
     * quality.
     */
    inline H265Settings& WithAdaptiveQuantization(H265AdaptiveQuantization&& value) { SetAdaptiveQuantization(std::move(value)); return *this;}


    /**
     * Indicates that AFD values will be written into the output stream.  If
     * afdSignaling is "auto", the system will try to preserve the input AFD value (in
     * cases where multiple AFD values are valid). If set to "fixed", the AFD value
     * will be the value configured in the fixedAfd parameter.
     */
    inline const AfdSignaling& GetAfdSignaling() const{ return m_afdSignaling; }

    /**
     * Indicates that AFD values will be written into the output stream.  If
     * afdSignaling is "auto", the system will try to preserve the input AFD value (in
     * cases where multiple AFD values are valid). If set to "fixed", the AFD value
     * will be the value configured in the fixedAfd parameter.
     */
    inline bool AfdSignalingHasBeenSet() const { return m_afdSignalingHasBeenSet; }

    /**
     * Indicates that AFD values will be written into the output stream.  If
     * afdSignaling is "auto", the system will try to preserve the input AFD value (in
     * cases where multiple AFD values are valid). If set to "fixed", the AFD value
     * will be the value configured in the fixedAfd parameter.
     */
    inline void SetAfdSignaling(const AfdSignaling& value) { m_afdSignalingHasBeenSet = true; m_afdSignaling = value; }

    /**
     * Indicates that AFD values will be written into the output stream.  If
     * afdSignaling is "auto", the system will try to preserve the input AFD value (in
     * cases where multiple AFD values are valid). If set to "fixed", the AFD value
     * will be the value configured in the fixedAfd parameter.
     */
    inline void SetAfdSignaling(AfdSignaling&& value) { m_afdSignalingHasBeenSet = true; m_afdSignaling = std::move(value); }

    /**
     * Indicates that AFD values will be written into the output stream.  If
     * afdSignaling is "auto", the system will try to preserve the input AFD value (in
     * cases where multiple AFD values are valid). If set to "fixed", the AFD value
     * will be the value configured in the fixedAfd parameter.
     */
    inline H265Settings& WithAfdSignaling(const AfdSignaling& value) { SetAfdSignaling(value); return *this;}

    /**
     * Indicates that AFD values will be written into the output stream.  If
     * afdSignaling is "auto", the system will try to preserve the input AFD value (in
     * cases where multiple AFD values are valid). If set to "fixed", the AFD value
     * will be the value configured in the fixedAfd parameter.
     */
    inline H265Settings& WithAfdSignaling(AfdSignaling&& value) { SetAfdSignaling(std::move(value)); return *this;}


    /**
     * Whether or not EML should insert an Alternative Transfer Function SEI message to
     * support backwards compatibility with non-HDR decoders and displays.
     */
    inline const H265AlternativeTransferFunction& GetAlternativeTransferFunction() const{ return m_alternativeTransferFunction; }

    /**
     * Whether or not EML should insert an Alternative Transfer Function SEI message to
     * support backwards compatibility with non-HDR decoders and displays.
     */
    inline bool AlternativeTransferFunctionHasBeenSet() const { return m_alternativeTransferFunctionHasBeenSet; }

    /**
     * Whether or not EML should insert an Alternative Transfer Function SEI message to
     * support backwards compatibility with non-HDR decoders and displays.
     */
    inline void SetAlternativeTransferFunction(const H265AlternativeTransferFunction& value) { m_alternativeTransferFunctionHasBeenSet = true; m_alternativeTransferFunction = value; }

    /**
     * Whether or not EML should insert an Alternative Transfer Function SEI message to
     * support backwards compatibility with non-HDR decoders and displays.
     */
    inline void SetAlternativeTransferFunction(H265AlternativeTransferFunction&& value) { m_alternativeTransferFunctionHasBeenSet = true; m_alternativeTransferFunction = std::move(value); }

    /**
     * Whether or not EML should insert an Alternative Transfer Function SEI message to
     * support backwards compatibility with non-HDR decoders and displays.
     */
    inline H265Settings& WithAlternativeTransferFunction(const H265AlternativeTransferFunction& value) { SetAlternativeTransferFunction(value); return *this;}

    /**
     * Whether or not EML should insert an Alternative Transfer Function SEI message to
     * support backwards compatibility with non-HDR decoders and displays.
     */
    inline H265Settings& WithAlternativeTransferFunction(H265AlternativeTransferFunction&& value) { SetAlternativeTransferFunction(std::move(value)); return *this;}


    /**
     * Average bitrate in bits/second. Required when the rate control mode is VBR or
     * CBR. Not used for QVBR. In an MS Smooth output group, each output must have a
     * unique value when its bitrate is rounded down to the nearest multiple of 1000.
     */
    inline int GetBitrate() const{ return m_bitrate; }

    /**
     * Average bitrate in bits/second. Required when the rate control mode is VBR or
     * CBR. Not used for QVBR. In an MS Smooth output group, each output must have a
     * unique value when its bitrate is rounded down to the nearest multiple of 1000.
     */
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }

    /**
     * Average bitrate in bits/second. Required when the rate control mode is VBR or
     * CBR. Not used for QVBR. In an MS Smooth output group, each output must have a
     * unique value when its bitrate is rounded down to the nearest multiple of 1000.
     */
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }

    /**
     * Average bitrate in bits/second. Required when the rate control mode is VBR or
     * CBR. Not used for QVBR. In an MS Smooth output group, each output must have a
     * unique value when its bitrate is rounded down to the nearest multiple of 1000.
     */
    inline H265Settings& WithBitrate(int value) { SetBitrate(value); return *this;}


    /**
     * Size of buffer (HRD buffer model) in bits.
     */
    inline int GetBufSize() const{ return m_bufSize; }

    /**
     * Size of buffer (HRD buffer model) in bits.
     */
    inline bool BufSizeHasBeenSet() const { return m_bufSizeHasBeenSet; }

    /**
     * Size of buffer (HRD buffer model) in bits.
     */
    inline void SetBufSize(int value) { m_bufSizeHasBeenSet = true; m_bufSize = value; }

    /**
     * Size of buffer (HRD buffer model) in bits.
     */
    inline H265Settings& WithBufSize(int value) { SetBufSize(value); return *this;}


    /**
     * Includes colorspace metadata in the output.
     */
    inline const H265ColorMetadata& GetColorMetadata() const{ return m_colorMetadata; }

    /**
     * Includes colorspace metadata in the output.
     */
    inline bool ColorMetadataHasBeenSet() const { return m_colorMetadataHasBeenSet; }

    /**
     * Includes colorspace metadata in the output.
     */
    inline void SetColorMetadata(const H265ColorMetadata& value) { m_colorMetadataHasBeenSet = true; m_colorMetadata = value; }

    /**
     * Includes colorspace metadata in the output.
     */
    inline void SetColorMetadata(H265ColorMetadata&& value) { m_colorMetadataHasBeenSet = true; m_colorMetadata = std::move(value); }

    /**
     * Includes colorspace metadata in the output.
     */
    inline H265Settings& WithColorMetadata(const H265ColorMetadata& value) { SetColorMetadata(value); return *this;}

    /**
     * Includes colorspace metadata in the output.
     */
    inline H265Settings& WithColorMetadata(H265ColorMetadata&& value) { SetColorMetadata(std::move(value)); return *this;}


    /**
     * Color Space settings
     */
    inline const H265ColorSpaceSettings& GetColorSpaceSettings() const{ return m_colorSpaceSettings; }

    /**
     * Color Space settings
     */
    inline bool ColorSpaceSettingsHasBeenSet() const { return m_colorSpaceSettingsHasBeenSet; }

    /**
     * Color Space settings
     */
    inline void SetColorSpaceSettings(const H265ColorSpaceSettings& value) { m_colorSpaceSettingsHasBeenSet = true; m_colorSpaceSettings = value; }

    /**
     * Color Space settings
     */
    inline void SetColorSpaceSettings(H265ColorSpaceSettings&& value) { m_colorSpaceSettingsHasBeenSet = true; m_colorSpaceSettings = std::move(value); }

    /**
     * Color Space settings
     */
    inline H265Settings& WithColorSpaceSettings(const H265ColorSpaceSettings& value) { SetColorSpaceSettings(value); return *this;}

    /**
     * Color Space settings
     */
    inline H265Settings& WithColorSpaceSettings(H265ColorSpaceSettings&& value) { SetColorSpaceSettings(std::move(value)); return *this;}


    /**
     * Optional filters that you can apply to an encode.
     */
    inline const H265FilterSettings& GetFilterSettings() const{ return m_filterSettings; }

    /**
     * Optional filters that you can apply to an encode.
     */
    inline bool FilterSettingsHasBeenSet() const { return m_filterSettingsHasBeenSet; }

    /**
     * Optional filters that you can apply to an encode.
     */
    inline void SetFilterSettings(const H265FilterSettings& value) { m_filterSettingsHasBeenSet = true; m_filterSettings = value; }

    /**
     * Optional filters that you can apply to an encode.
     */
    inline void SetFilterSettings(H265FilterSettings&& value) { m_filterSettingsHasBeenSet = true; m_filterSettings = std::move(value); }

    /**
     * Optional filters that you can apply to an encode.
     */
    inline H265Settings& WithFilterSettings(const H265FilterSettings& value) { SetFilterSettings(value); return *this;}

    /**
     * Optional filters that you can apply to an encode.
     */
    inline H265Settings& WithFilterSettings(H265FilterSettings&& value) { SetFilterSettings(std::move(value)); return *this;}


    /**
     * Four bit AFD value to write on all frames of video in the output stream. Only
     * valid when afdSignaling is set to 'Fixed'.
     */
    inline const FixedAfd& GetFixedAfd() const{ return m_fixedAfd; }

    /**
     * Four bit AFD value to write on all frames of video in the output stream. Only
     * valid when afdSignaling is set to 'Fixed'.
     */
    inline bool FixedAfdHasBeenSet() const { return m_fixedAfdHasBeenSet; }

    /**
     * Four bit AFD value to write on all frames of video in the output stream. Only
     * valid when afdSignaling is set to 'Fixed'.
     */
    inline void SetFixedAfd(const FixedAfd& value) { m_fixedAfdHasBeenSet = true; m_fixedAfd = value; }

    /**
     * Four bit AFD value to write on all frames of video in the output stream. Only
     * valid when afdSignaling is set to 'Fixed'.
     */
    inline void SetFixedAfd(FixedAfd&& value) { m_fixedAfdHasBeenSet = true; m_fixedAfd = std::move(value); }

    /**
     * Four bit AFD value to write on all frames of video in the output stream. Only
     * valid when afdSignaling is set to 'Fixed'.
     */
    inline H265Settings& WithFixedAfd(const FixedAfd& value) { SetFixedAfd(value); return *this;}

    /**
     * Four bit AFD value to write on all frames of video in the output stream. Only
     * valid when afdSignaling is set to 'Fixed'.
     */
    inline H265Settings& WithFixedAfd(FixedAfd&& value) { SetFixedAfd(std::move(value)); return *this;}


    /**
     * If set to enabled, adjust quantization within each frame to reduce flicker or
     * 'pop' on I-frames.
     */
    inline const H265FlickerAq& GetFlickerAq() const{ return m_flickerAq; }

    /**
     * If set to enabled, adjust quantization within each frame to reduce flicker or
     * 'pop' on I-frames.
     */
    inline bool FlickerAqHasBeenSet() const { return m_flickerAqHasBeenSet; }

    /**
     * If set to enabled, adjust quantization within each frame to reduce flicker or
     * 'pop' on I-frames.
     */
    inline void SetFlickerAq(const H265FlickerAq& value) { m_flickerAqHasBeenSet = true; m_flickerAq = value; }

    /**
     * If set to enabled, adjust quantization within each frame to reduce flicker or
     * 'pop' on I-frames.
     */
    inline void SetFlickerAq(H265FlickerAq&& value) { m_flickerAqHasBeenSet = true; m_flickerAq = std::move(value); }

    /**
     * If set to enabled, adjust quantization within each frame to reduce flicker or
     * 'pop' on I-frames.
     */
    inline H265Settings& WithFlickerAq(const H265FlickerAq& value) { SetFlickerAq(value); return *this;}

    /**
     * If set to enabled, adjust quantization within each frame to reduce flicker or
     * 'pop' on I-frames.
     */
    inline H265Settings& WithFlickerAq(H265FlickerAq&& value) { SetFlickerAq(std::move(value)); return *this;}


    /**
     * Framerate denominator.
     */
    inline int GetFramerateDenominator() const{ return m_framerateDenominator; }

    /**
     * Framerate denominator.
     */
    inline bool FramerateDenominatorHasBeenSet() const { return m_framerateDenominatorHasBeenSet; }

    /**
     * Framerate denominator.
     */
    inline void SetFramerateDenominator(int value) { m_framerateDenominatorHasBeenSet = true; m_framerateDenominator = value; }

    /**
     * Framerate denominator.
     */
    inline H265Settings& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}


    /**
     * Framerate numerator - framerate is a fraction, e.g. 24000 / 1001 = 23.976 fps.
     */
    inline int GetFramerateNumerator() const{ return m_framerateNumerator; }

    /**
     * Framerate numerator - framerate is a fraction, e.g. 24000 / 1001 = 23.976 fps.
     */
    inline bool FramerateNumeratorHasBeenSet() const { return m_framerateNumeratorHasBeenSet; }

    /**
     * Framerate numerator - framerate is a fraction, e.g. 24000 / 1001 = 23.976 fps.
     */
    inline void SetFramerateNumerator(int value) { m_framerateNumeratorHasBeenSet = true; m_framerateNumerator = value; }

    /**
     * Framerate numerator - framerate is a fraction, e.g. 24000 / 1001 = 23.976 fps.
     */
    inline H265Settings& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}


    /**
     * Frequency of closed GOPs. In streaming applications, it is recommended that this
     * be set to 1 so a decoder joining mid-stream will receive an IDR frame as quickly
     * as possible. Setting this value to 0 will break output segmenting.
     */
    inline int GetGopClosedCadence() const{ return m_gopClosedCadence; }

    /**
     * Frequency of closed GOPs. In streaming applications, it is recommended that this
     * be set to 1 so a decoder joining mid-stream will receive an IDR frame as quickly
     * as possible. Setting this value to 0 will break output segmenting.
     */
    inline bool GopClosedCadenceHasBeenSet() const { return m_gopClosedCadenceHasBeenSet; }

    /**
     * Frequency of closed GOPs. In streaming applications, it is recommended that this
     * be set to 1 so a decoder joining mid-stream will receive an IDR frame as quickly
     * as possible. Setting this value to 0 will break output segmenting.
     */
    inline void SetGopClosedCadence(int value) { m_gopClosedCadenceHasBeenSet = true; m_gopClosedCadence = value; }

    /**
     * Frequency of closed GOPs. In streaming applications, it is recommended that this
     * be set to 1 so a decoder joining mid-stream will receive an IDR frame as quickly
     * as possible. Setting this value to 0 will break output segmenting.
     */
    inline H265Settings& WithGopClosedCadence(int value) { SetGopClosedCadence(value); return *this;}


    /**
     * GOP size (keyframe interval) in units of either frames or seconds per
     * gopSizeUnits.
If gopSizeUnits is frames, gopSize must be an integer and must be
     * greater than or equal to 1.
If gopSizeUnits is seconds, gopSize must be greater
     * than 0, but need not be an integer.
     */
    inline double GetGopSize() const{ return m_gopSize; }

    /**
     * GOP size (keyframe interval) in units of either frames or seconds per
     * gopSizeUnits.
If gopSizeUnits is frames, gopSize must be an integer and must be
     * greater than or equal to 1.
If gopSizeUnits is seconds, gopSize must be greater
     * than 0, but need not be an integer.
     */
    inline bool GopSizeHasBeenSet() const { return m_gopSizeHasBeenSet; }

    /**
     * GOP size (keyframe interval) in units of either frames or seconds per
     * gopSizeUnits.
If gopSizeUnits is frames, gopSize must be an integer and must be
     * greater than or equal to 1.
If gopSizeUnits is seconds, gopSize must be greater
     * than 0, but need not be an integer.
     */
    inline void SetGopSize(double value) { m_gopSizeHasBeenSet = true; m_gopSize = value; }

    /**
     * GOP size (keyframe interval) in units of either frames or seconds per
     * gopSizeUnits.
If gopSizeUnits is frames, gopSize must be an integer and must be
     * greater than or equal to 1.
If gopSizeUnits is seconds, gopSize must be greater
     * than 0, but need not be an integer.
     */
    inline H265Settings& WithGopSize(double value) { SetGopSize(value); return *this;}


    /**
     * Indicates if the gopSize is specified in frames or seconds. If seconds the
     * system will convert the gopSize into a frame count at run time.
     */
    inline const H265GopSizeUnits& GetGopSizeUnits() const{ return m_gopSizeUnits; }

    /**
     * Indicates if the gopSize is specified in frames or seconds. If seconds the
     * system will convert the gopSize into a frame count at run time.
     */
    inline bool GopSizeUnitsHasBeenSet() const { return m_gopSizeUnitsHasBeenSet; }

    /**
     * Indicates if the gopSize is specified in frames or seconds. If seconds the
     * system will convert the gopSize into a frame count at run time.
     */
    inline void SetGopSizeUnits(const H265GopSizeUnits& value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = value; }

    /**
     * Indicates if the gopSize is specified in frames or seconds. If seconds the
     * system will convert the gopSize into a frame count at run time.
     */
    inline void SetGopSizeUnits(H265GopSizeUnits&& value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = std::move(value); }

    /**
     * Indicates if the gopSize is specified in frames or seconds. If seconds the
     * system will convert the gopSize into a frame count at run time.
     */
    inline H265Settings& WithGopSizeUnits(const H265GopSizeUnits& value) { SetGopSizeUnits(value); return *this;}

    /**
     * Indicates if the gopSize is specified in frames or seconds. If seconds the
     * system will convert the gopSize into a frame count at run time.
     */
    inline H265Settings& WithGopSizeUnits(H265GopSizeUnits&& value) { SetGopSizeUnits(std::move(value)); return *this;}


    /**
     * H.265 Level.
     */
    inline const H265Level& GetLevel() const{ return m_level; }

    /**
     * H.265 Level.
     */
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }

    /**
     * H.265 Level.
     */
    inline void SetLevel(const H265Level& value) { m_levelHasBeenSet = true; m_level = value; }

    /**
     * H.265 Level.
     */
    inline void SetLevel(H265Level&& value) { m_levelHasBeenSet = true; m_level = std::move(value); }

    /**
     * H.265 Level.
     */
    inline H265Settings& WithLevel(const H265Level& value) { SetLevel(value); return *this;}

    /**
     * H.265 Level.
     */
    inline H265Settings& WithLevel(H265Level&& value) { SetLevel(std::move(value)); return *this;}


    /**
     * Amount of lookahead. A value of low can decrease latency and memory usage, while
     * high can produce better quality for certain content.
     */
    inline const H265LookAheadRateControl& GetLookAheadRateControl() const{ return m_lookAheadRateControl; }

    /**
     * Amount of lookahead. A value of low can decrease latency and memory usage, while
     * high can produce better quality for certain content.
     */
    inline bool LookAheadRateControlHasBeenSet() const { return m_lookAheadRateControlHasBeenSet; }

    /**
     * Amount of lookahead. A value of low can decrease latency and memory usage, while
     * high can produce better quality for certain content.
     */
    inline void SetLookAheadRateControl(const H265LookAheadRateControl& value) { m_lookAheadRateControlHasBeenSet = true; m_lookAheadRateControl = value; }

    /**
     * Amount of lookahead. A value of low can decrease latency and memory usage, while
     * high can produce better quality for certain content.
     */
    inline void SetLookAheadRateControl(H265LookAheadRateControl&& value) { m_lookAheadRateControlHasBeenSet = true; m_lookAheadRateControl = std::move(value); }

    /**
     * Amount of lookahead. A value of low can decrease latency and memory usage, while
     * high can produce better quality for certain content.
     */
    inline H265Settings& WithLookAheadRateControl(const H265LookAheadRateControl& value) { SetLookAheadRateControl(value); return *this;}

    /**
     * Amount of lookahead. A value of low can decrease latency and memory usage, while
     * high can produce better quality for certain content.
     */
    inline H265Settings& WithLookAheadRateControl(H265LookAheadRateControl&& value) { SetLookAheadRateControl(std::move(value)); return *this;}


    /**
     * For QVBR: See the tooltip for Quality level
     */
    inline int GetMaxBitrate() const{ return m_maxBitrate; }

    /**
     * For QVBR: See the tooltip for Quality level
     */
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }

    /**
     * For QVBR: See the tooltip for Quality level
     */
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }

    /**
     * For QVBR: See the tooltip for Quality level
     */
    inline H265Settings& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}


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

    /**
     * Only meaningful if sceneChangeDetect is set to enabled.  Defaults to 5 if
     * multiplex rate control is used.  Enforces separation between repeated (cadence)
     * I-frames and I-frames inserted by Scene Change Detection. If a scene change
     * I-frame is within I-interval frames of a cadence I-frame, the GOP is shrunk
     * and/or stretched to the scene change I-frame. GOP stretch requires enabling
     * lookahead as well as setting I-interval. The normal cadence resumes for the next
     * GOP. Note: Maximum GOP stretch = GOP size + Min-I-interval - 1
     */
    inline bool MinIIntervalHasBeenSet() const { return m_minIIntervalHasBeenSet; }

    /**
     * Only meaningful if sceneChangeDetect is set to enabled.  Defaults to 5 if
     * multiplex rate control is used.  Enforces separation between repeated (cadence)
     * I-frames and I-frames inserted by Scene Change Detection. If a scene change
     * I-frame is within I-interval frames of a cadence I-frame, the GOP is shrunk
     * and/or stretched to the scene change I-frame. GOP stretch requires enabling
     * lookahead as well as setting I-interval. The normal cadence resumes for the next
     * GOP. Note: Maximum GOP stretch = GOP size + Min-I-interval - 1
     */
    inline void SetMinIInterval(int value) { m_minIIntervalHasBeenSet = true; m_minIInterval = value; }

    /**
     * Only meaningful if sceneChangeDetect is set to enabled.  Defaults to 5 if
     * multiplex rate control is used.  Enforces separation between repeated (cadence)
     * I-frames and I-frames inserted by Scene Change Detection. If a scene change
     * I-frame is within I-interval frames of a cadence I-frame, the GOP is shrunk
     * and/or stretched to the scene change I-frame. GOP stretch requires enabling
     * lookahead as well as setting I-interval. The normal cadence resumes for the next
     * GOP. Note: Maximum GOP stretch = GOP size + Min-I-interval - 1
     */
    inline H265Settings& WithMinIInterval(int value) { SetMinIInterval(value); return *this;}


    /**
     * Pixel Aspect Ratio denominator.
     */
    inline int GetParDenominator() const{ return m_parDenominator; }

    /**
     * Pixel Aspect Ratio denominator.
     */
    inline bool ParDenominatorHasBeenSet() const { return m_parDenominatorHasBeenSet; }

    /**
     * Pixel Aspect Ratio denominator.
     */
    inline void SetParDenominator(int value) { m_parDenominatorHasBeenSet = true; m_parDenominator = value; }

    /**
     * Pixel Aspect Ratio denominator.
     */
    inline H265Settings& WithParDenominator(int value) { SetParDenominator(value); return *this;}


    /**
     * Pixel Aspect Ratio numerator.
     */
    inline int GetParNumerator() const{ return m_parNumerator; }

    /**
     * Pixel Aspect Ratio numerator.
     */
    inline bool ParNumeratorHasBeenSet() const { return m_parNumeratorHasBeenSet; }

    /**
     * Pixel Aspect Ratio numerator.
     */
    inline void SetParNumerator(int value) { m_parNumeratorHasBeenSet = true; m_parNumerator = value; }

    /**
     * Pixel Aspect Ratio numerator.
     */
    inline H265Settings& WithParNumerator(int value) { SetParNumerator(value); return *this;}


    /**
     * H.265 Profile.
     */
    inline const H265Profile& GetProfile() const{ return m_profile; }

    /**
     * H.265 Profile.
     */
    inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }

    /**
     * H.265 Profile.
     */
    inline void SetProfile(const H265Profile& value) { m_profileHasBeenSet = true; m_profile = value; }

    /**
     * H.265 Profile.
     */
    inline void SetProfile(H265Profile&& value) { m_profileHasBeenSet = true; m_profile = std::move(value); }

    /**
     * H.265 Profile.
     */
    inline H265Settings& WithProfile(const H265Profile& value) { SetProfile(value); return *this;}

    /**
     * H.265 Profile.
     */
    inline H265Settings& WithProfile(H265Profile&& value) { SetProfile(std::move(value)); return *this;}


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
    inline bool QvbrQualityLevelHasBeenSet() const { return m_qvbrQualityLevelHasBeenSet; }

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
    inline void SetQvbrQualityLevel(int value) { m_qvbrQualityLevelHasBeenSet = true; m_qvbrQualityLevel = value; }

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
    inline H265Settings& WithQvbrQualityLevel(int value) { SetQvbrQualityLevel(value); return *this;}


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
    inline bool RateControlModeHasBeenSet() const { return m_rateControlModeHasBeenSet; }

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
    inline void SetRateControlMode(const H265RateControlMode& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = value; }

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
    inline void SetRateControlMode(H265RateControlMode&& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = std::move(value); }

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
    inline H265Settings& WithRateControlMode(const H265RateControlMode& value) { SetRateControlMode(value); return *this;}

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
    inline H265Settings& WithRateControlMode(H265RateControlMode&& value) { SetRateControlMode(std::move(value)); return *this;}


    /**
     * Sets the scan type of the output to progressive or top-field-first interlaced.
     */
    inline const H265ScanType& GetScanType() const{ return m_scanType; }

    /**
     * Sets the scan type of the output to progressive or top-field-first interlaced.
     */
    inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }

    /**
     * Sets the scan type of the output to progressive or top-field-first interlaced.
     */
    inline void SetScanType(const H265ScanType& value) { m_scanTypeHasBeenSet = true; m_scanType = value; }

    /**
     * Sets the scan type of the output to progressive or top-field-first interlaced.
     */
    inline void SetScanType(H265ScanType&& value) { m_scanTypeHasBeenSet = true; m_scanType = std::move(value); }

    /**
     * Sets the scan type of the output to progressive or top-field-first interlaced.
     */
    inline H265Settings& WithScanType(const H265ScanType& value) { SetScanType(value); return *this;}

    /**
     * Sets the scan type of the output to progressive or top-field-first interlaced.
     */
    inline H265Settings& WithScanType(H265ScanType&& value) { SetScanType(std::move(value)); return *this;}


    /**
     * Scene change detection.
     */
    inline const H265SceneChangeDetect& GetSceneChangeDetect() const{ return m_sceneChangeDetect; }

    /**
     * Scene change detection.
     */
    inline bool SceneChangeDetectHasBeenSet() const { return m_sceneChangeDetectHasBeenSet; }

    /**
     * Scene change detection.
     */
    inline void SetSceneChangeDetect(const H265SceneChangeDetect& value) { m_sceneChangeDetectHasBeenSet = true; m_sceneChangeDetect = value; }

    /**
     * Scene change detection.
     */
    inline void SetSceneChangeDetect(H265SceneChangeDetect&& value) { m_sceneChangeDetectHasBeenSet = true; m_sceneChangeDetect = std::move(value); }

    /**
     * Scene change detection.
     */
    inline H265Settings& WithSceneChangeDetect(const H265SceneChangeDetect& value) { SetSceneChangeDetect(value); return *this;}

    /**
     * Scene change detection.
     */
    inline H265Settings& WithSceneChangeDetect(H265SceneChangeDetect&& value) { SetSceneChangeDetect(std::move(value)); return *this;}


    /**
     * Number of slices per picture. Must be less than or equal to the number of
     * macroblock rows for progressive pictures, and less than or equal to half the
     * number of macroblock rows for interlaced pictures.
This field is optional; when
     * no value is specified the encoder will choose the number of slices based on
     * encode resolution.
     */
    inline int GetSlices() const{ return m_slices; }

    /**
     * Number of slices per picture. Must be less than or equal to the number of
     * macroblock rows for progressive pictures, and less than or equal to half the
     * number of macroblock rows for interlaced pictures.
This field is optional; when
     * no value is specified the encoder will choose the number of slices based on
     * encode resolution.
     */
    inline bool SlicesHasBeenSet() const { return m_slicesHasBeenSet; }

    /**
     * Number of slices per picture. Must be less than or equal to the number of
     * macroblock rows for progressive pictures, and less than or equal to half the
     * number of macroblock rows for interlaced pictures.
This field is optional; when
     * no value is specified the encoder will choose the number of slices based on
     * encode resolution.
     */
    inline void SetSlices(int value) { m_slicesHasBeenSet = true; m_slices = value; }

    /**
     * Number of slices per picture. Must be less than or equal to the number of
     * macroblock rows for progressive pictures, and less than or equal to half the
     * number of macroblock rows for interlaced pictures.
This field is optional; when
     * no value is specified the encoder will choose the number of slices based on
     * encode resolution.
     */
    inline H265Settings& WithSlices(int value) { SetSlices(value); return *this;}


    /**
     * H.265 Tier.
     */
    inline const H265Tier& GetTier() const{ return m_tier; }

    /**
     * H.265 Tier.
     */
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }

    /**
     * H.265 Tier.
     */
    inline void SetTier(const H265Tier& value) { m_tierHasBeenSet = true; m_tier = value; }

    /**
     * H.265 Tier.
     */
    inline void SetTier(H265Tier&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }

    /**
     * H.265 Tier.
     */
    inline H265Settings& WithTier(const H265Tier& value) { SetTier(value); return *this;}

    /**
     * H.265 Tier.
     */
    inline H265Settings& WithTier(H265Tier&& value) { SetTier(std::move(value)); return *this;}


    /**
     * Determines how timecodes should be inserted into the video elementary stream.
-
     * 'disabled': Do not include timecodes
- 'picTimingSei': Pass through picture
     * timing SEI messages from the source specified in Timecode Config
     */
    inline const H265TimecodeInsertionBehavior& GetTimecodeInsertion() const{ return m_timecodeInsertion; }

    /**
     * Determines how timecodes should be inserted into the video elementary stream.
-
     * 'disabled': Do not include timecodes
- 'picTimingSei': Pass through picture
     * timing SEI messages from the source specified in Timecode Config
     */
    inline bool TimecodeInsertionHasBeenSet() const { return m_timecodeInsertionHasBeenSet; }

    /**
     * Determines how timecodes should be inserted into the video elementary stream.
-
     * 'disabled': Do not include timecodes
- 'picTimingSei': Pass through picture
     * timing SEI messages from the source specified in Timecode Config
     */
    inline void SetTimecodeInsertion(const H265TimecodeInsertionBehavior& value) { m_timecodeInsertionHasBeenSet = true; m_timecodeInsertion = value; }

    /**
     * Determines how timecodes should be inserted into the video elementary stream.
-
     * 'disabled': Do not include timecodes
- 'picTimingSei': Pass through picture
     * timing SEI messages from the source specified in Timecode Config
     */
    inline void SetTimecodeInsertion(H265TimecodeInsertionBehavior&& value) { m_timecodeInsertionHasBeenSet = true; m_timecodeInsertion = std::move(value); }

    /**
     * Determines how timecodes should be inserted into the video elementary stream.
-
     * 'disabled': Do not include timecodes
- 'picTimingSei': Pass through picture
     * timing SEI messages from the source specified in Timecode Config
     */
    inline H265Settings& WithTimecodeInsertion(const H265TimecodeInsertionBehavior& value) { SetTimecodeInsertion(value); return *this;}

    /**
     * Determines how timecodes should be inserted into the video elementary stream.
-
     * 'disabled': Do not include timecodes
- 'picTimingSei': Pass through picture
     * timing SEI messages from the source specified in Timecode Config
     */
    inline H265Settings& WithTimecodeInsertion(H265TimecodeInsertionBehavior&& value) { SetTimecodeInsertion(std::move(value)); return *this;}


    /**
     * Timecode burn-in settings
     */
    inline const TimecodeBurninSettings& GetTimecodeBurninSettings() const{ return m_timecodeBurninSettings; }

    /**
     * Timecode burn-in settings
     */
    inline bool TimecodeBurninSettingsHasBeenSet() const { return m_timecodeBurninSettingsHasBeenSet; }

    /**
     * Timecode burn-in settings
     */
    inline void SetTimecodeBurninSettings(const TimecodeBurninSettings& value) { m_timecodeBurninSettingsHasBeenSet = true; m_timecodeBurninSettings = value; }

    /**
     * Timecode burn-in settings
     */
    inline void SetTimecodeBurninSettings(TimecodeBurninSettings&& value) { m_timecodeBurninSettingsHasBeenSet = true; m_timecodeBurninSettings = std::move(value); }

    /**
     * Timecode burn-in settings
     */
    inline H265Settings& WithTimecodeBurninSettings(const TimecodeBurninSettings& value) { SetTimecodeBurninSettings(value); return *this;}

    /**
     * Timecode burn-in settings
     */
    inline H265Settings& WithTimecodeBurninSettings(TimecodeBurninSettings&& value) { SetTimecodeBurninSettings(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
