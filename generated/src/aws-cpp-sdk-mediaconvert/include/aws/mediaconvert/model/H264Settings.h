﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/H264AdaptiveQuantization.h>
#include <aws/mediaconvert/model/BandwidthReductionFilter.h>
#include <aws/mediaconvert/model/H264CodecLevel.h>
#include <aws/mediaconvert/model/H264CodecProfile.h>
#include <aws/mediaconvert/model/H264DynamicSubGop.h>
#include <aws/mediaconvert/model/H264EndOfStreamMarkers.h>
#include <aws/mediaconvert/model/H264EntropyEncoding.h>
#include <aws/mediaconvert/model/H264FieldEncoding.h>
#include <aws/mediaconvert/model/H264FlickerAdaptiveQuantization.h>
#include <aws/mediaconvert/model/H264FramerateControl.h>
#include <aws/mediaconvert/model/H264FramerateConversionAlgorithm.h>
#include <aws/mediaconvert/model/H264GopBReference.h>
#include <aws/mediaconvert/model/H264GopSizeUnits.h>
#include <aws/mediaconvert/model/H264InterlaceMode.h>
#include <aws/mediaconvert/model/H264ParControl.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/H264QualityTuningLevel.h>
#include <aws/mediaconvert/model/H264QvbrSettings.h>
#include <aws/mediaconvert/model/H264RateControlMode.h>
#include <aws/mediaconvert/model/H264RepeatPps.h>
#include <aws/mediaconvert/model/H264SaliencyAwareEncoding.h>
#include <aws/mediaconvert/model/H264ScanTypeConversionMode.h>
#include <aws/mediaconvert/model/H264SceneChangeDetect.h>
#include <aws/mediaconvert/model/H264SlowPal.h>
#include <aws/mediaconvert/model/H264SpatialAdaptiveQuantization.h>
#include <aws/mediaconvert/model/H264Syntax.h>
#include <aws/mediaconvert/model/H264Telecine.h>
#include <aws/mediaconvert/model/H264TemporalAdaptiveQuantization.h>
#include <aws/mediaconvert/model/H264UnregisteredSeiTimecode.h>
#include <aws/mediaconvert/model/H264WriteMp4PackagingType.h>
#include <aws/mediaconvert/model/FrameMetricType.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Required when you set Codec to the value H_264.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/H264Settings">AWS
   * API Reference</a></p>
   */
  class H264Settings
  {
  public:
    AWS_MEDIACONVERT_API H264Settings() = default;
    AWS_MEDIACONVERT_API H264Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API H264Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Keep the default value, Auto, for this setting to have MediaConvert
     * automatically apply the best types of quantization for your video content. When
     * you want to apply your quantization settings manually, you must set
     * H264AdaptiveQuantization to a value other than Auto. Use this setting to specify
     * the strength of any adaptive quantization filters that you enable. If you don't
     * want MediaConvert to do any adaptive quantization in this transcode, set
     * Adaptive quantization to Off. Related settings: The value that you choose here
     * applies to the following settings: H264FlickerAdaptiveQuantization,
     * H264SpatialAdaptiveQuantization, and H264TemporalAdaptiveQuantization.
     */
    inline H264AdaptiveQuantization GetAdaptiveQuantization() const { return m_adaptiveQuantization; }
    inline bool AdaptiveQuantizationHasBeenSet() const { return m_adaptiveQuantizationHasBeenSet; }
    inline void SetAdaptiveQuantization(H264AdaptiveQuantization value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = value; }
    inline H264Settings& WithAdaptiveQuantization(H264AdaptiveQuantization value) { SetAdaptiveQuantization(value); return *this;}
    ///@}

    ///@{
    /**
     * The Bandwidth reduction filter increases the video quality of your output
     * relative to its bitrate. Use to lower the bitrate of your constant quality QVBR
     * output, with little or no perceptual decrease in quality. Or, use to increase
     * the video quality of outputs with other rate control modes relative to the
     * bitrate that you specify. Bandwidth reduction increases further when your input
     * is low quality or noisy. Outputs that use this feature incur pro-tier pricing.
     * When you include Bandwidth reduction filter, you cannot include the Noise
     * reducer preprocessor.
     */
    inline const BandwidthReductionFilter& GetBandwidthReductionFilter() const { return m_bandwidthReductionFilter; }
    inline bool BandwidthReductionFilterHasBeenSet() const { return m_bandwidthReductionFilterHasBeenSet; }
    template<typename BandwidthReductionFilterT = BandwidthReductionFilter>
    void SetBandwidthReductionFilter(BandwidthReductionFilterT&& value) { m_bandwidthReductionFilterHasBeenSet = true; m_bandwidthReductionFilter = std::forward<BandwidthReductionFilterT>(value); }
    template<typename BandwidthReductionFilterT = BandwidthReductionFilter>
    H264Settings& WithBandwidthReductionFilter(BandwidthReductionFilterT&& value) { SetBandwidthReductionFilter(std::forward<BandwidthReductionFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the average bitrate in bits per second. Required for VBR and CBR. For MS
     * Smooth outputs, bitrates must be unique when rounded down to the nearest
     * multiple of 1000.
     */
    inline int GetBitrate() const { return m_bitrate; }
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }
    inline H264Settings& WithBitrate(int value) { SetBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify an H.264 level that is consistent with your output video settings. If
     * you aren't sure what level to specify, choose Auto.
     */
    inline H264CodecLevel GetCodecLevel() const { return m_codecLevel; }
    inline bool CodecLevelHasBeenSet() const { return m_codecLevelHasBeenSet; }
    inline void SetCodecLevel(H264CodecLevel value) { m_codecLevelHasBeenSet = true; m_codecLevel = value; }
    inline H264Settings& WithCodecLevel(H264CodecLevel value) { SetCodecLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * H.264 Profile. High 4:2:2 and 10-bit profiles are only available with the AVC-I
     * License.
     */
    inline H264CodecProfile GetCodecProfile() const { return m_codecProfile; }
    inline bool CodecProfileHasBeenSet() const { return m_codecProfileHasBeenSet; }
    inline void SetCodecProfile(H264CodecProfile value) { m_codecProfileHasBeenSet = true; m_codecProfile = value; }
    inline H264Settings& WithCodecProfile(H264CodecProfile value) { SetCodecProfile(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify whether to allow the number of B-frames in your output GOP structure to
     * vary or not depending on your input video content. To improve the subjective
     * video quality of your output that has high-motion content: Leave blank or keep
     * the default value Adaptive. MediaConvert will use fewer B-frames for high-motion
     * video content than low-motion content. The maximum number of B- frames is
     * limited by the value that you choose for B-frames between reference frames. To
     * use the same number B-frames for all types of content: Choose Static.
     */
    inline H264DynamicSubGop GetDynamicSubGop() const { return m_dynamicSubGop; }
    inline bool DynamicSubGopHasBeenSet() const { return m_dynamicSubGopHasBeenSet; }
    inline void SetDynamicSubGop(H264DynamicSubGop value) { m_dynamicSubGopHasBeenSet = true; m_dynamicSubGop = value; }
    inline H264Settings& WithDynamicSubGop(H264DynamicSubGop value) { SetDynamicSubGop(value); return *this;}
    ///@}

    ///@{
    /**
     * Optionally include or suppress markers at the end of your output that signal the
     * end of the video stream. To include end of stream markers: Leave blank or keep
     * the default value, Include. To not include end of stream markers: Choose
     * Suppress. This is useful when your output will be inserted into another stream.
     */
    inline H264EndOfStreamMarkers GetEndOfStreamMarkers() const { return m_endOfStreamMarkers; }
    inline bool EndOfStreamMarkersHasBeenSet() const { return m_endOfStreamMarkersHasBeenSet; }
    inline void SetEndOfStreamMarkers(H264EndOfStreamMarkers value) { m_endOfStreamMarkersHasBeenSet = true; m_endOfStreamMarkers = value; }
    inline H264Settings& WithEndOfStreamMarkers(H264EndOfStreamMarkers value) { SetEndOfStreamMarkers(value); return *this;}
    ///@}

    ///@{
    /**
     * Entropy encoding mode. Use CABAC (must be in Main or High profile) or CAVLC.
     */
    inline H264EntropyEncoding GetEntropyEncoding() const { return m_entropyEncoding; }
    inline bool EntropyEncodingHasBeenSet() const { return m_entropyEncodingHasBeenSet; }
    inline void SetEntropyEncoding(H264EntropyEncoding value) { m_entropyEncodingHasBeenSet = true; m_entropyEncoding = value; }
    inline H264Settings& WithEntropyEncoding(H264EntropyEncoding value) { SetEntropyEncoding(value); return *this;}
    ///@}

    ///@{
    /**
     * The video encoding method for your MPEG-4 AVC output. Keep the default value,
     * PAFF, to have MediaConvert use PAFF encoding for interlaced outputs. Choose
     * Force field to disable PAFF encoding and create separate interlaced fields.
     * Choose MBAFF to disable PAFF and have MediaConvert use MBAFF encoding for
     * interlaced outputs.
     */
    inline H264FieldEncoding GetFieldEncoding() const { return m_fieldEncoding; }
    inline bool FieldEncodingHasBeenSet() const { return m_fieldEncodingHasBeenSet; }
    inline void SetFieldEncoding(H264FieldEncoding value) { m_fieldEncodingHasBeenSet = true; m_fieldEncoding = value; }
    inline H264Settings& WithFieldEncoding(H264FieldEncoding value) { SetFieldEncoding(value); return *this;}
    ///@}

    ///@{
    /**
     * Only use this setting when you change the default value, AUTO, for the setting
     * H264AdaptiveQuantization. When you keep all defaults, excluding
     * H264AdaptiveQuantization and all other adaptive quantization from your JSON job
     * specification, MediaConvert automatically applies the best types of quantization
     * for your video content. When you set H264AdaptiveQuantization to a value other
     * than AUTO, the default value for H264FlickerAdaptiveQuantization is Disabled.
     * Change this value to Enabled to reduce I-frame pop. I-frame pop appears as a
     * visual flicker that can arise when the encoder saves bits by copying some
     * macroblocks many times from frame to frame, and then refreshes them at the
     * I-frame. When you enable this setting, the encoder updates these macroblocks
     * slightly more often to smooth out the flicker. To manually enable or disable
     * H264FlickerAdaptiveQuantization, you must set Adaptive quantization to a value
     * other than AUTO.
     */
    inline H264FlickerAdaptiveQuantization GetFlickerAdaptiveQuantization() const { return m_flickerAdaptiveQuantization; }
    inline bool FlickerAdaptiveQuantizationHasBeenSet() const { return m_flickerAdaptiveQuantizationHasBeenSet; }
    inline void SetFlickerAdaptiveQuantization(H264FlickerAdaptiveQuantization value) { m_flickerAdaptiveQuantizationHasBeenSet = true; m_flickerAdaptiveQuantization = value; }
    inline H264Settings& WithFlickerAdaptiveQuantization(H264FlickerAdaptiveQuantization value) { SetFlickerAdaptiveQuantization(value); return *this;}
    ///@}

    ///@{
    /**
     * If you are using the console, use the Framerate setting to specify the frame
     * rate for this output. If you want to keep the same frame rate as the input
     * video, choose Follow source. If you want to do frame rate conversion, choose a
     * frame rate from the dropdown list or choose Custom. The framerates shown in the
     * dropdown list are decimal approximations of fractions. If you choose Custom,
     * specify your frame rate as a fraction.
     */
    inline H264FramerateControl GetFramerateControl() const { return m_framerateControl; }
    inline bool FramerateControlHasBeenSet() const { return m_framerateControlHasBeenSet; }
    inline void SetFramerateControl(H264FramerateControl value) { m_framerateControlHasBeenSet = true; m_framerateControl = value; }
    inline H264Settings& WithFramerateControl(H264FramerateControl value) { SetFramerateControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Choose the method that you want MediaConvert to use when increasing or
     * decreasing your video's frame rate. For numerically simple conversions, such as
     * 60 fps to 30 fps: We recommend that you keep the default value, Drop duplicate.
     * For numerically complex conversions, to avoid stutter: Choose Interpolate. This
     * results in a smooth picture, but might introduce undesirable video artifacts.
     * For complex frame rate conversions, especially if your source video has already
     * been converted from its original cadence: Choose FrameFormer to do
     * motion-compensated interpolation. FrameFormer uses the best conversion method
     * frame by frame. Note that using FrameFormer increases the transcoding time and
     * incurs a significant add-on cost. When you choose FrameFormer, your input video
     * resolution must be at least 128x96. To create an output with the same number of
     * frames as your input: Choose Maintain frame count. When you do, MediaConvert
     * will not drop, interpolate, add, or otherwise change the frame count from your
     * input to your output. Note that since the frame count is maintained, the
     * duration of your output will become shorter at higher frame rates and longer at
     * lower frame rates.
     */
    inline H264FramerateConversionAlgorithm GetFramerateConversionAlgorithm() const { return m_framerateConversionAlgorithm; }
    inline bool FramerateConversionAlgorithmHasBeenSet() const { return m_framerateConversionAlgorithmHasBeenSet; }
    inline void SetFramerateConversionAlgorithm(H264FramerateConversionAlgorithm value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = value; }
    inline H264Settings& WithFramerateConversionAlgorithm(H264FramerateConversionAlgorithm value) { SetFramerateConversionAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example, 24000 / 1001 = 23.976 fps. Use
     * FramerateDenominator to specify the denominator of this fraction. In this
     * example, use 1001 for the value of FramerateDenominator. When you use the
     * console for transcode jobs that use frame rate conversion, provide the value as
     * a decimal number for Framerate. In this example, specify 23.976.
     */
    inline int GetFramerateDenominator() const { return m_framerateDenominator; }
    inline bool FramerateDenominatorHasBeenSet() const { return m_framerateDenominatorHasBeenSet; }
    inline void SetFramerateDenominator(int value) { m_framerateDenominatorHasBeenSet = true; m_framerateDenominator = value; }
    inline H264Settings& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}
    ///@}

    ///@{
    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example, 24000 / 1001 = 23.976 fps. Use
     * FramerateNumerator to specify the numerator of this fraction. In this example,
     * use 24000 for the value of FramerateNumerator. When you use the console for
     * transcode jobs that use frame rate conversion, provide the value as a decimal
     * number for Framerate. In this example, specify 23.976.
     */
    inline int GetFramerateNumerator() const { return m_framerateNumerator; }
    inline bool FramerateNumeratorHasBeenSet() const { return m_framerateNumeratorHasBeenSet; }
    inline void SetFramerateNumerator(int value) { m_framerateNumeratorHasBeenSet = true; m_framerateNumerator = value; }
    inline H264Settings& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify whether to allow B-frames to be referenced by other frame types. To use
     * reference B-frames when your GOP structure has 1 or more B-frames: Leave blank
     * or keep the default value Enabled. We recommend that you choose Enabled to help
     * improve the video quality of your output relative to its bitrate. To not use
     * reference B-frames: Choose Disabled.
     */
    inline H264GopBReference GetGopBReference() const { return m_gopBReference; }
    inline bool GopBReferenceHasBeenSet() const { return m_gopBReferenceHasBeenSet; }
    inline void SetGopBReference(H264GopBReference value) { m_gopBReferenceHasBeenSet = true; m_gopBReference = value; }
    inline H264Settings& WithGopBReference(H264GopBReference value) { SetGopBReference(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the relative frequency of open to closed GOPs in this output. For
     * example, if you want to allow four open GOPs and then require a closed GOP, set
     * this value to 5. We recommend that you have the transcoder automatically choose
     * this value for you based on characteristics of your input video. In the console,
     * do this by keeping the default empty value. If you do explicitly specify a
     * value, for segmented outputs, don't set this value to 0.
     */
    inline int GetGopClosedCadence() const { return m_gopClosedCadence; }
    inline bool GopClosedCadenceHasBeenSet() const { return m_gopClosedCadenceHasBeenSet; }
    inline void SetGopClosedCadence(int value) { m_gopClosedCadenceHasBeenSet = true; m_gopClosedCadence = value; }
    inline H264Settings& WithGopClosedCadence(int value) { SetGopClosedCadence(value); return *this;}
    ///@}

    ///@{
    /**
     * Use this setting only when you set GOP mode control to Specified, frames or
     * Specified, seconds. Specify the GOP length using a whole number of frames or a
     * decimal value of seconds. MediaConvert will interpret this value as frames or
     * seconds depending on the value you choose for GOP mode control. If you want to
     * allow MediaConvert to automatically determine GOP size, leave GOP size blank and
     * set GOP mode control to Auto. If your output group specifies HLS, DASH, or CMAF,
     * leave GOP size blank and set GOP mode control to Auto in each output in your
     * output group.
     */
    inline double GetGopSize() const { return m_gopSize; }
    inline bool GopSizeHasBeenSet() const { return m_gopSizeHasBeenSet; }
    inline void SetGopSize(double value) { m_gopSizeHasBeenSet = true; m_gopSize = value; }
    inline H264Settings& WithGopSize(double value) { SetGopSize(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify how the transcoder determines GOP size for this output. We recommend
     * that you have the transcoder automatically choose this value for you based on
     * characteristics of your input video. To enable this automatic behavior, choose
     * Auto and and leave GOP size blank. By default, if you don't specify GOP mode
     * control, MediaConvert will use automatic behavior. If your output group
     * specifies HLS, DASH, or CMAF, set GOP mode control to Auto and leave GOP size
     * blank in each output in your output group. To explicitly specify the GOP length,
     * choose Specified, frames or Specified, seconds and then provide the GOP length
     * in the related setting GOP size.
     */
    inline H264GopSizeUnits GetGopSizeUnits() const { return m_gopSizeUnits; }
    inline bool GopSizeUnitsHasBeenSet() const { return m_gopSizeUnitsHasBeenSet; }
    inline void SetGopSizeUnits(H264GopSizeUnits value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = value; }
    inline H264Settings& WithGopSizeUnits(H264GopSizeUnits value) { SetGopSizeUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * If your downstream systems have strict buffer requirements: Specify the minimum
     * percentage of the HRD buffer that's available at the end of each encoded video
     * segment. For the best video quality: Set to 0 or leave blank to automatically
     * determine the final buffer fill percentage.
     */
    inline int GetHrdBufferFinalFillPercentage() const { return m_hrdBufferFinalFillPercentage; }
    inline bool HrdBufferFinalFillPercentageHasBeenSet() const { return m_hrdBufferFinalFillPercentageHasBeenSet; }
    inline void SetHrdBufferFinalFillPercentage(int value) { m_hrdBufferFinalFillPercentageHasBeenSet = true; m_hrdBufferFinalFillPercentage = value; }
    inline H264Settings& WithHrdBufferFinalFillPercentage(int value) { SetHrdBufferFinalFillPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * Percentage of the buffer that should initially be filled (HRD buffer model).
     */
    inline int GetHrdBufferInitialFillPercentage() const { return m_hrdBufferInitialFillPercentage; }
    inline bool HrdBufferInitialFillPercentageHasBeenSet() const { return m_hrdBufferInitialFillPercentageHasBeenSet; }
    inline void SetHrdBufferInitialFillPercentage(int value) { m_hrdBufferInitialFillPercentageHasBeenSet = true; m_hrdBufferInitialFillPercentage = value; }
    inline H264Settings& WithHrdBufferInitialFillPercentage(int value) { SetHrdBufferInitialFillPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * Size of buffer (HRD buffer model) in bits. For example, enter five megabits as
     * 5000000.
     */
    inline int GetHrdBufferSize() const { return m_hrdBufferSize; }
    inline bool HrdBufferSizeHasBeenSet() const { return m_hrdBufferSizeHasBeenSet; }
    inline void SetHrdBufferSize(int value) { m_hrdBufferSizeHasBeenSet = true; m_hrdBufferSize = value; }
    inline H264Settings& WithHrdBufferSize(int value) { SetHrdBufferSize(value); return *this;}
    ///@}

    ///@{
    /**
     * Choose the scan line type for the output. Keep the default value, Progressive to
     * create a progressive output, regardless of the scan type of your input. Use Top
     * field first or Bottom field first to create an output that's interlaced with the
     * same field polarity throughout. Use Follow, default top or Follow, default
     * bottom to produce outputs with the same field polarity as the source. For jobs
     * that have multiple inputs, the output field polarity might change over the
     * course of the output. Follow behavior depends on the input scan type. If the
     * source is interlaced, the output will be interlaced with the same polarity as
     * the source. If the source is progressive, the output will be interlaced with top
     * field bottom field first, depending on which of the Follow options you choose.
     */
    inline H264InterlaceMode GetInterlaceMode() const { return m_interlaceMode; }
    inline bool InterlaceModeHasBeenSet() const { return m_interlaceModeHasBeenSet; }
    inline void SetInterlaceMode(H264InterlaceMode value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = value; }
    inline H264Settings& WithInterlaceMode(H264InterlaceMode value) { SetInterlaceMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Maximum bitrate in bits/second. For example, enter five megabits per second as
     * 5000000. Required when Rate control mode is QVBR.
     */
    inline int GetMaxBitrate() const { return m_maxBitrate; }
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }
    inline H264Settings& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the minimum number of frames allowed between two IDR-frames in your
     * output. This includes frames created at the start of a GOP or a scene change.
     * Use Min I-Interval to improve video compression by varying GOP size when two
     * IDR-frames would be created near each other. For example, if a regular
     * cadence-driven IDR-frame would fall within 5 frames of a scene-change IDR-frame,
     * and you set Min I-interval to 5, then the encoder would only write an IDR-frame
     * for the scene-change. In this way, one GOP is shortened or extended. If a
     * cadence-driven IDR-frame would be further than 5 frames from a scene-change
     * IDR-frame, then the encoder leaves all IDR-frames in place. To use an
     * automatically determined interval: We recommend that you keep this value blank.
     * This allows for MediaConvert to use an optimal setting according to the
     * characteristics of your input video, and results in better video compression. To
     * manually specify an interval: Enter a value from 1 to 30. Use when your
     * downstream systems have specific GOP size requirements. To disable GOP size
     * variance: Enter 0. MediaConvert will only create IDR-frames at the start of your
     * output's cadence-driven GOP. Use when your downstream systems require a regular
     * GOP size.
     */
    inline int GetMinIInterval() const { return m_minIInterval; }
    inline bool MinIIntervalHasBeenSet() const { return m_minIIntervalHasBeenSet; }
    inline void SetMinIInterval(int value) { m_minIIntervalHasBeenSet = true; m_minIInterval = value; }
    inline H264Settings& WithMinIInterval(int value) { SetMinIInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the number of B-frames between reference frames in this output. For the
     * best video quality: Leave blank. MediaConvert automatically determines the
     * number of B-frames to use based on the characteristics of your input video. To
     * manually specify the number of B-frames between reference frames: Enter an
     * integer from 0 to 7.
     */
    inline int GetNumberBFramesBetweenReferenceFrames() const { return m_numberBFramesBetweenReferenceFrames; }
    inline bool NumberBFramesBetweenReferenceFramesHasBeenSet() const { return m_numberBFramesBetweenReferenceFramesHasBeenSet; }
    inline void SetNumberBFramesBetweenReferenceFrames(int value) { m_numberBFramesBetweenReferenceFramesHasBeenSet = true; m_numberBFramesBetweenReferenceFrames = value; }
    inline H264Settings& WithNumberBFramesBetweenReferenceFrames(int value) { SetNumberBFramesBetweenReferenceFrames(value); return *this;}
    ///@}

    ///@{
    /**
     * Number of reference frames to use. The encoder may use more than requested if
     * using B-frames and/or interlaced encoding.
     */
    inline int GetNumberReferenceFrames() const { return m_numberReferenceFrames; }
    inline bool NumberReferenceFramesHasBeenSet() const { return m_numberReferenceFramesHasBeenSet; }
    inline void SetNumberReferenceFrames(int value) { m_numberReferenceFramesHasBeenSet = true; m_numberReferenceFrames = value; }
    inline H264Settings& WithNumberReferenceFrames(int value) { SetNumberReferenceFrames(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Specify how the service determines the pixel aspect ratio (PAR) for
     * this output. The default behavior, Follow source, uses the PAR from your input
     * video for your output. To specify a different PAR in the console, choose any
     * value other than Follow source. When you choose SPECIFIED for this setting, you
     * must also specify values for the parNumerator and parDenominator settings.
     */
    inline H264ParControl GetParControl() const { return m_parControl; }
    inline bool ParControlHasBeenSet() const { return m_parControlHasBeenSet; }
    inline void SetParControl(H264ParControl value) { m_parControlHasBeenSet = true; m_parControl = value; }
    inline H264Settings& WithParControl(H264ParControl value) { SetParControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Pixel aspect ratio to SPECIFIED. On the console, this
     * corresponds to any value other than Follow source. When you specify an output
     * pixel aspect ratio (PAR) that is different from your input video PAR, provide
     * your output PAR as a ratio. For example, for D1/DV NTSC widescreen, you would
     * specify the ratio 40:33. In this example, the value for parDenominator is 33.
     */
    inline int GetParDenominator() const { return m_parDenominator; }
    inline bool ParDenominatorHasBeenSet() const { return m_parDenominatorHasBeenSet; }
    inline void SetParDenominator(int value) { m_parDenominatorHasBeenSet = true; m_parDenominator = value; }
    inline H264Settings& WithParDenominator(int value) { SetParDenominator(value); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Pixel aspect ratio to SPECIFIED. On the console, this
     * corresponds to any value other than Follow source. When you specify an output
     * pixel aspect ratio (PAR) that is different from your input video PAR, provide
     * your output PAR as a ratio. For example, for D1/DV NTSC widescreen, you would
     * specify the ratio 40:33. In this example, the value for parNumerator is 40.
     */
    inline int GetParNumerator() const { return m_parNumerator; }
    inline bool ParNumeratorHasBeenSet() const { return m_parNumeratorHasBeenSet; }
    inline void SetParNumerator(int value) { m_parNumeratorHasBeenSet = true; m_parNumerator = value; }
    inline H264Settings& WithParNumerator(int value) { SetParNumerator(value); return *this;}
    ///@}

    ///@{
    /**
     * Optionally choose one or more per frame metric reports to generate along with
     * your output. You can use these metrics to analyze your video output according to
     * one or more commonly used image quality metrics. You can specify per frame
     * metrics for output groups or for individual outputs. When you do, MediaConvert
     * writes a CSV (Comma-Separated Values) file to your S3 output destination, named
     * after the output name and metric type. For example: videofile_PSNR.csv Jobs that
     * generate per frame metrics will take longer to complete, depending on the
     * resolution and complexity of your output. For example, some 4K jobs might take
     * up to twice as long to complete. Note that when analyzing the video quality of
     * your output, or when comparing the video quality of multiple different outputs,
     * we generally also recommend a detailed visual review in a controlled
     * environment. You can choose from the following per frame metrics: * PSNR: Peak
     * Signal-to-Noise Ratio * SSIM: Structural Similarity Index Measure * MS_SSIM:
     * Multi-Scale Similarity Index Measure * PSNR_HVS: Peak Signal-to-Noise Ratio,
     * Human Visual System * VMAF: Video Multi-Method Assessment Fusion * QVBR:
     * Quality-Defined Variable Bitrate. This option is only available when your output
     * uses the QVBR rate control mode.
     */
    inline const Aws::Vector<FrameMetricType>& GetPerFrameMetrics() const { return m_perFrameMetrics; }
    inline bool PerFrameMetricsHasBeenSet() const { return m_perFrameMetricsHasBeenSet; }
    template<typename PerFrameMetricsT = Aws::Vector<FrameMetricType>>
    void SetPerFrameMetrics(PerFrameMetricsT&& value) { m_perFrameMetricsHasBeenSet = true; m_perFrameMetrics = std::forward<PerFrameMetricsT>(value); }
    template<typename PerFrameMetricsT = Aws::Vector<FrameMetricType>>
    H264Settings& WithPerFrameMetrics(PerFrameMetricsT&& value) { SetPerFrameMetrics(std::forward<PerFrameMetricsT>(value)); return *this;}
    inline H264Settings& AddPerFrameMetrics(FrameMetricType value) { m_perFrameMetricsHasBeenSet = true; m_perFrameMetrics.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * The Quality tuning level you choose represents a trade-off between the encoding
     * speed of your job and the output video quality. For the fastest encoding speed
     * at the cost of video quality: Choose Single pass. For a good balance between
     * encoding speed and video quality: Leave blank or keep the default value Single
     * pass HQ. For the best video quality, at the cost of encoding speed: Choose Multi
     * pass HQ. MediaConvert performs an analysis pass on your input followed by an
     * encoding pass. Outputs that use this feature incur pro-tier pricing.
     */
    inline H264QualityTuningLevel GetQualityTuningLevel() const { return m_qualityTuningLevel; }
    inline bool QualityTuningLevelHasBeenSet() const { return m_qualityTuningLevelHasBeenSet; }
    inline void SetQualityTuningLevel(H264QualityTuningLevel value) { m_qualityTuningLevelHasBeenSet = true; m_qualityTuningLevel = value; }
    inline H264Settings& WithQualityTuningLevel(H264QualityTuningLevel value) { SetQualityTuningLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * Settings for quality-defined variable bitrate encoding with the H.265 codec. Use
     * these settings only when you set QVBR for Rate control mode.
     */
    inline const H264QvbrSettings& GetQvbrSettings() const { return m_qvbrSettings; }
    inline bool QvbrSettingsHasBeenSet() const { return m_qvbrSettingsHasBeenSet; }
    template<typename QvbrSettingsT = H264QvbrSettings>
    void SetQvbrSettings(QvbrSettingsT&& value) { m_qvbrSettingsHasBeenSet = true; m_qvbrSettings = std::forward<QvbrSettingsT>(value); }
    template<typename QvbrSettingsT = H264QvbrSettings>
    H264Settings& WithQvbrSettings(QvbrSettingsT&& value) { SetQvbrSettings(std::forward<QvbrSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use this setting to specify whether this output has a variable bitrate (VBR),
     * constant bitrate (CBR) or quality-defined variable bitrate (QVBR).
     */
    inline H264RateControlMode GetRateControlMode() const { return m_rateControlMode; }
    inline bool RateControlModeHasBeenSet() const { return m_rateControlModeHasBeenSet; }
    inline void SetRateControlMode(H264RateControlMode value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = value; }
    inline H264Settings& WithRateControlMode(H264RateControlMode value) { SetRateControlMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Places a PPS header on each encoded picture, even if repeated.
     */
    inline H264RepeatPps GetRepeatPps() const { return m_repeatPps; }
    inline bool RepeatPpsHasBeenSet() const { return m_repeatPpsHasBeenSet; }
    inline void SetRepeatPps(H264RepeatPps value) { m_repeatPpsHasBeenSet = true; m_repeatPps = value; }
    inline H264Settings& WithRepeatPps(H264RepeatPps value) { SetRepeatPps(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify whether to apply Saliency aware encoding to your output. Use to improve
     * the perceptual video quality of your output by allocating more encoding bits to
     * the prominent or noticeable parts of your content. To apply saliency aware
     * encoding, when possible: We recommend that you choose Preferred. The effects of
     * Saliency aware encoding are best seen in lower bitrate outputs. When you choose
     * Preferred, note that Saliency aware encoding will only apply to outputs that are
     * 720p or higher in resolution. To not apply saliency aware encoding, prioritizing
     * encoding speed over perceptual video quality: Choose Disabled.
     */
    inline H264SaliencyAwareEncoding GetSaliencyAwareEncoding() const { return m_saliencyAwareEncoding; }
    inline bool SaliencyAwareEncodingHasBeenSet() const { return m_saliencyAwareEncodingHasBeenSet; }
    inline void SetSaliencyAwareEncoding(H264SaliencyAwareEncoding value) { m_saliencyAwareEncodingHasBeenSet = true; m_saliencyAwareEncoding = value; }
    inline H264Settings& WithSaliencyAwareEncoding(H264SaliencyAwareEncoding value) { SetSaliencyAwareEncoding(value); return *this;}
    ///@}

    ///@{
    /**
     * Use this setting for interlaced outputs, when your output frame rate is half of
     * your input frame rate. In this situation, choose Optimized interlacing to create
     * a better quality interlaced output. In this case, each progressive frame from
     * the input corresponds to an interlaced field in the output. Keep the default
     * value, Basic interlacing, for all other output frame rates. With basic
     * interlacing, MediaConvert performs any frame rate conversion first and then
     * interlaces the frames. When you choose Optimized interlacing and you set your
     * output frame rate to a value that isn't suitable for optimized interlacing,
     * MediaConvert automatically falls back to basic interlacing. Required settings:
     * To use optimized interlacing, you must set Telecine to None or Soft. You can't
     * use optimized interlacing for hard telecine outputs. You must also set Interlace
     * mode to a value other than Progressive.
     */
    inline H264ScanTypeConversionMode GetScanTypeConversionMode() const { return m_scanTypeConversionMode; }
    inline bool ScanTypeConversionModeHasBeenSet() const { return m_scanTypeConversionModeHasBeenSet; }
    inline void SetScanTypeConversionMode(H264ScanTypeConversionMode value) { m_scanTypeConversionModeHasBeenSet = true; m_scanTypeConversionMode = value; }
    inline H264Settings& WithScanTypeConversionMode(H264ScanTypeConversionMode value) { SetScanTypeConversionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Enable this setting to insert I-frames at scene changes that the service
     * automatically detects. This improves video quality and is enabled by default. If
     * this output uses QVBR, choose Transition detection for further video quality
     * improvement. For more information about QVBR, see
     * https://docs.aws.amazon.com/console/mediaconvert/cbr-vbr-qvbr.
     */
    inline H264SceneChangeDetect GetSceneChangeDetect() const { return m_sceneChangeDetect; }
    inline bool SceneChangeDetectHasBeenSet() const { return m_sceneChangeDetectHasBeenSet; }
    inline void SetSceneChangeDetect(H264SceneChangeDetect value) { m_sceneChangeDetectHasBeenSet = true; m_sceneChangeDetect = value; }
    inline H264Settings& WithSceneChangeDetect(H264SceneChangeDetect value) { SetSceneChangeDetect(value); return *this;}
    ///@}

    ///@{
    /**
     * Number of slices per picture. Must be less than or equal to the number of
     * macroblock rows for progressive pictures, and less than or equal to half the
     * number of macroblock rows for interlaced pictures.
     */
    inline int GetSlices() const { return m_slices; }
    inline bool SlicesHasBeenSet() const { return m_slicesHasBeenSet; }
    inline void SetSlices(int value) { m_slicesHasBeenSet = true; m_slices = value; }
    inline H264Settings& WithSlices(int value) { SetSlices(value); return *this;}
    ///@}

    ///@{
    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output. When you enable slow
     * PAL, MediaConvert relabels the video frames to 25 fps and resamples your audio
     * to keep it synchronized with the video. Note that enabling this setting will
     * slightly reduce the duration of your video. Required settings: You must also set
     * Framerate to 25.
     */
    inline H264SlowPal GetSlowPal() const { return m_slowPal; }
    inline bool SlowPalHasBeenSet() const { return m_slowPalHasBeenSet; }
    inline void SetSlowPal(H264SlowPal value) { m_slowPalHasBeenSet = true; m_slowPal = value; }
    inline H264Settings& WithSlowPal(H264SlowPal value) { SetSlowPal(value); return *this;}
    ///@}

    ///@{
    /**
     * Ignore this setting unless you need to comply with a specification that requires
     * a specific value. If you don't have a specification requirement, we recommend
     * that you adjust the softness of your output by using a lower value for the
     * setting Sharpness or by enabling a noise reducer filter. The Softness setting
     * specifies the quantization matrices that the encoder uses. Keep the default
     * value, 0, for flat quantization. Choose the value 1 or 16 to use the default JVT
     * softening quantization matricies from the H.264 specification. Choose a value
     * from 17 to 128 to use planar interpolation. Increasing values from 17 to 128
     * result in increasing reduction of high-frequency data. The value 128 results in
     * the softest video.
     */
    inline int GetSoftness() const { return m_softness; }
    inline bool SoftnessHasBeenSet() const { return m_softnessHasBeenSet; }
    inline void SetSoftness(int value) { m_softnessHasBeenSet = true; m_softness = value; }
    inline H264Settings& WithSoftness(int value) { SetSoftness(value); return *this;}
    ///@}

    ///@{
    /**
     * Only use this setting when you change the default value, Auto, for the setting
     * H264AdaptiveQuantization. When you keep all defaults, excluding
     * H264AdaptiveQuantization and all other adaptive quantization from your JSON job
     * specification, MediaConvert automatically applies the best types of quantization
     * for your video content. When you set H264AdaptiveQuantization to a value other
     * than AUTO, the default value for H264SpatialAdaptiveQuantization is Enabled.
     * Keep this default value to adjust quantization within each frame based on
     * spatial variation of content complexity. When you enable this feature, the
     * encoder uses fewer bits on areas that can sustain more distortion with no
     * noticeable visual degradation and uses more bits on areas where any small
     * distortion will be noticeable. For example, complex textured blocks are encoded
     * with fewer bits and smooth textured blocks are encoded with more bits. Enabling
     * this feature will almost always improve your video quality. Note, though, that
     * this feature doesn't take into account where the viewer's attention is likely to
     * be. If viewers are likely to be focusing their attention on a part of the screen
     * with a lot of complex texture, you might choose to set
     * H264SpatialAdaptiveQuantization to Disabled. Related setting: When you enable
     * spatial adaptive quantization, set the value for Adaptive quantization depending
     * on your content. For homogeneous content, such as cartoons and video games, set
     * it to Low. For content with a wider variety of textures, set it to High or
     * Higher. To manually enable or disable H264SpatialAdaptiveQuantization, you must
     * set Adaptive quantization to a value other than AUTO.
     */
    inline H264SpatialAdaptiveQuantization GetSpatialAdaptiveQuantization() const { return m_spatialAdaptiveQuantization; }
    inline bool SpatialAdaptiveQuantizationHasBeenSet() const { return m_spatialAdaptiveQuantizationHasBeenSet; }
    inline void SetSpatialAdaptiveQuantization(H264SpatialAdaptiveQuantization value) { m_spatialAdaptiveQuantizationHasBeenSet = true; m_spatialAdaptiveQuantization = value; }
    inline H264Settings& WithSpatialAdaptiveQuantization(H264SpatialAdaptiveQuantization value) { SetSpatialAdaptiveQuantization(value); return *this;}
    ///@}

    ///@{
    /**
     * Produces a bitstream compliant with SMPTE RP-2027.
     */
    inline H264Syntax GetSyntax() const { return m_syntax; }
    inline bool SyntaxHasBeenSet() const { return m_syntaxHasBeenSet; }
    inline void SetSyntax(H264Syntax value) { m_syntaxHasBeenSet = true; m_syntax = value; }
    inline H264Settings& WithSyntax(H264Syntax value) { SetSyntax(value); return *this;}
    ///@}

    ///@{
    /**
     * When you do frame rate conversion from 23.976 frames per second (fps) to 29.97
     * fps, and your output scan type is interlaced, you can optionally enable hard or
     * soft telecine to create a smoother picture. Hard telecine produces a 29.97i
     * output. Soft telecine produces an output with a 23.976 output that signals to
     * the video player device to do the conversion during play back. When you keep the
     * default value, None, MediaConvert does a standard frame rate conversion to 29.97
     * without doing anything with the field polarity to create a smoother picture.
     */
    inline H264Telecine GetTelecine() const { return m_telecine; }
    inline bool TelecineHasBeenSet() const { return m_telecineHasBeenSet; }
    inline void SetTelecine(H264Telecine value) { m_telecineHasBeenSet = true; m_telecine = value; }
    inline H264Settings& WithTelecine(H264Telecine value) { SetTelecine(value); return *this;}
    ///@}

    ///@{
    /**
     * Only use this setting when you change the default value, AUTO, for the setting
     * H264AdaptiveQuantization. When you keep all defaults, excluding
     * H264AdaptiveQuantization and all other adaptive quantization from your JSON job
     * specification, MediaConvert automatically applies the best types of quantization
     * for your video content. When you set H264AdaptiveQuantization to a value other
     * than AUTO, the default value for H264TemporalAdaptiveQuantization is Enabled.
     * Keep this default value to adjust quantization within each frame based on
     * temporal variation of content complexity. When you enable this feature, the
     * encoder uses fewer bits on areas of the frame that aren't moving and uses more
     * bits on complex objects with sharp edges that move a lot. For example, this
     * feature improves the readability of text tickers on newscasts and scoreboards on
     * sports matches. Enabling this feature will almost always improve your video
     * quality. Note, though, that this feature doesn't take into account where the
     * viewer's attention is likely to be. If viewers are likely to be focusing their
     * attention on a part of the screen that doesn't have moving objects with sharp
     * edges, such as sports athletes' faces, you might choose to set
     * H264TemporalAdaptiveQuantization to Disabled. Related setting: When you enable
     * temporal quantization, adjust the strength of the filter with the setting
     * Adaptive quantization. To manually enable or disable
     * H264TemporalAdaptiveQuantization, you must set Adaptive quantization to a value
     * other than AUTO.
     */
    inline H264TemporalAdaptiveQuantization GetTemporalAdaptiveQuantization() const { return m_temporalAdaptiveQuantization; }
    inline bool TemporalAdaptiveQuantizationHasBeenSet() const { return m_temporalAdaptiveQuantizationHasBeenSet; }
    inline void SetTemporalAdaptiveQuantization(H264TemporalAdaptiveQuantization value) { m_temporalAdaptiveQuantizationHasBeenSet = true; m_temporalAdaptiveQuantization = value; }
    inline H264Settings& WithTemporalAdaptiveQuantization(H264TemporalAdaptiveQuantization value) { SetTemporalAdaptiveQuantization(value); return *this;}
    ///@}

    ///@{
    /**
     * Inserts timecode for each frame as 4 bytes of an unregistered SEI message.
     */
    inline H264UnregisteredSeiTimecode GetUnregisteredSeiTimecode() const { return m_unregisteredSeiTimecode; }
    inline bool UnregisteredSeiTimecodeHasBeenSet() const { return m_unregisteredSeiTimecodeHasBeenSet; }
    inline void SetUnregisteredSeiTimecode(H264UnregisteredSeiTimecode value) { m_unregisteredSeiTimecodeHasBeenSet = true; m_unregisteredSeiTimecode = value; }
    inline H264Settings& WithUnregisteredSeiTimecode(H264UnregisteredSeiTimecode value) { SetUnregisteredSeiTimecode(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify how SPS and PPS NAL units are written in your output MP4 container,
     * according to ISO/IEC 14496-15. If the location of these parameters doesn't
     * matter in your workflow: Keep the default value, AVC1. MediaConvert writes SPS
     * and PPS NAL units in the sample description ('stsd') box (but not into samples
     * directly). To write SPS and PPS NAL units directly into samples (but not in the
     * 'stsd' box): Choose AVC3. When you do, note that your output might not play
     * properly with some downstream systems or players.
     */
    inline H264WriteMp4PackagingType GetWriteMp4PackagingType() const { return m_writeMp4PackagingType; }
    inline bool WriteMp4PackagingTypeHasBeenSet() const { return m_writeMp4PackagingTypeHasBeenSet; }
    inline void SetWriteMp4PackagingType(H264WriteMp4PackagingType value) { m_writeMp4PackagingTypeHasBeenSet = true; m_writeMp4PackagingType = value; }
    inline H264Settings& WithWriteMp4PackagingType(H264WriteMp4PackagingType value) { SetWriteMp4PackagingType(value); return *this;}
    ///@}
  private:

    H264AdaptiveQuantization m_adaptiveQuantization{H264AdaptiveQuantization::NOT_SET};
    bool m_adaptiveQuantizationHasBeenSet = false;

    BandwidthReductionFilter m_bandwidthReductionFilter;
    bool m_bandwidthReductionFilterHasBeenSet = false;

    int m_bitrate{0};
    bool m_bitrateHasBeenSet = false;

    H264CodecLevel m_codecLevel{H264CodecLevel::NOT_SET};
    bool m_codecLevelHasBeenSet = false;

    H264CodecProfile m_codecProfile{H264CodecProfile::NOT_SET};
    bool m_codecProfileHasBeenSet = false;

    H264DynamicSubGop m_dynamicSubGop{H264DynamicSubGop::NOT_SET};
    bool m_dynamicSubGopHasBeenSet = false;

    H264EndOfStreamMarkers m_endOfStreamMarkers{H264EndOfStreamMarkers::NOT_SET};
    bool m_endOfStreamMarkersHasBeenSet = false;

    H264EntropyEncoding m_entropyEncoding{H264EntropyEncoding::NOT_SET};
    bool m_entropyEncodingHasBeenSet = false;

    H264FieldEncoding m_fieldEncoding{H264FieldEncoding::NOT_SET};
    bool m_fieldEncodingHasBeenSet = false;

    H264FlickerAdaptiveQuantization m_flickerAdaptiveQuantization{H264FlickerAdaptiveQuantization::NOT_SET};
    bool m_flickerAdaptiveQuantizationHasBeenSet = false;

    H264FramerateControl m_framerateControl{H264FramerateControl::NOT_SET};
    bool m_framerateControlHasBeenSet = false;

    H264FramerateConversionAlgorithm m_framerateConversionAlgorithm{H264FramerateConversionAlgorithm::NOT_SET};
    bool m_framerateConversionAlgorithmHasBeenSet = false;

    int m_framerateDenominator{0};
    bool m_framerateDenominatorHasBeenSet = false;

    int m_framerateNumerator{0};
    bool m_framerateNumeratorHasBeenSet = false;

    H264GopBReference m_gopBReference{H264GopBReference::NOT_SET};
    bool m_gopBReferenceHasBeenSet = false;

    int m_gopClosedCadence{0};
    bool m_gopClosedCadenceHasBeenSet = false;

    double m_gopSize{0.0};
    bool m_gopSizeHasBeenSet = false;

    H264GopSizeUnits m_gopSizeUnits{H264GopSizeUnits::NOT_SET};
    bool m_gopSizeUnitsHasBeenSet = false;

    int m_hrdBufferFinalFillPercentage{0};
    bool m_hrdBufferFinalFillPercentageHasBeenSet = false;

    int m_hrdBufferInitialFillPercentage{0};
    bool m_hrdBufferInitialFillPercentageHasBeenSet = false;

    int m_hrdBufferSize{0};
    bool m_hrdBufferSizeHasBeenSet = false;

    H264InterlaceMode m_interlaceMode{H264InterlaceMode::NOT_SET};
    bool m_interlaceModeHasBeenSet = false;

    int m_maxBitrate{0};
    bool m_maxBitrateHasBeenSet = false;

    int m_minIInterval{0};
    bool m_minIIntervalHasBeenSet = false;

    int m_numberBFramesBetweenReferenceFrames{0};
    bool m_numberBFramesBetweenReferenceFramesHasBeenSet = false;

    int m_numberReferenceFrames{0};
    bool m_numberReferenceFramesHasBeenSet = false;

    H264ParControl m_parControl{H264ParControl::NOT_SET};
    bool m_parControlHasBeenSet = false;

    int m_parDenominator{0};
    bool m_parDenominatorHasBeenSet = false;

    int m_parNumerator{0};
    bool m_parNumeratorHasBeenSet = false;

    Aws::Vector<FrameMetricType> m_perFrameMetrics;
    bool m_perFrameMetricsHasBeenSet = false;

    H264QualityTuningLevel m_qualityTuningLevel{H264QualityTuningLevel::NOT_SET};
    bool m_qualityTuningLevelHasBeenSet = false;

    H264QvbrSettings m_qvbrSettings;
    bool m_qvbrSettingsHasBeenSet = false;

    H264RateControlMode m_rateControlMode{H264RateControlMode::NOT_SET};
    bool m_rateControlModeHasBeenSet = false;

    H264RepeatPps m_repeatPps{H264RepeatPps::NOT_SET};
    bool m_repeatPpsHasBeenSet = false;

    H264SaliencyAwareEncoding m_saliencyAwareEncoding{H264SaliencyAwareEncoding::NOT_SET};
    bool m_saliencyAwareEncodingHasBeenSet = false;

    H264ScanTypeConversionMode m_scanTypeConversionMode{H264ScanTypeConversionMode::NOT_SET};
    bool m_scanTypeConversionModeHasBeenSet = false;

    H264SceneChangeDetect m_sceneChangeDetect{H264SceneChangeDetect::NOT_SET};
    bool m_sceneChangeDetectHasBeenSet = false;

    int m_slices{0};
    bool m_slicesHasBeenSet = false;

    H264SlowPal m_slowPal{H264SlowPal::NOT_SET};
    bool m_slowPalHasBeenSet = false;

    int m_softness{0};
    bool m_softnessHasBeenSet = false;

    H264SpatialAdaptiveQuantization m_spatialAdaptiveQuantization{H264SpatialAdaptiveQuantization::NOT_SET};
    bool m_spatialAdaptiveQuantizationHasBeenSet = false;

    H264Syntax m_syntax{H264Syntax::NOT_SET};
    bool m_syntaxHasBeenSet = false;

    H264Telecine m_telecine{H264Telecine::NOT_SET};
    bool m_telecineHasBeenSet = false;

    H264TemporalAdaptiveQuantization m_temporalAdaptiveQuantization{H264TemporalAdaptiveQuantization::NOT_SET};
    bool m_temporalAdaptiveQuantizationHasBeenSet = false;

    H264UnregisteredSeiTimecode m_unregisteredSeiTimecode{H264UnregisteredSeiTimecode::NOT_SET};
    bool m_unregisteredSeiTimecodeHasBeenSet = false;

    H264WriteMp4PackagingType m_writeMp4PackagingType{H264WriteMp4PackagingType::NOT_SET};
    bool m_writeMp4PackagingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
