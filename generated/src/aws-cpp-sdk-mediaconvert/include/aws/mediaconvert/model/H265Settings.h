/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/H265AdaptiveQuantization.h>
#include <aws/mediaconvert/model/H265AlternateTransferFunctionSei.h>
#include <aws/mediaconvert/model/BandwidthReductionFilter.h>
#include <aws/mediaconvert/model/H265CodecLevel.h>
#include <aws/mediaconvert/model/H265CodecProfile.h>
#include <aws/mediaconvert/model/H265Deblocking.h>
#include <aws/mediaconvert/model/H265DynamicSubGop.h>
#include <aws/mediaconvert/model/H265EndOfStreamMarkers.h>
#include <aws/mediaconvert/model/H265FlickerAdaptiveQuantization.h>
#include <aws/mediaconvert/model/H265FramerateControl.h>
#include <aws/mediaconvert/model/H265FramerateConversionAlgorithm.h>
#include <aws/mediaconvert/model/H265GopBReference.h>
#include <aws/mediaconvert/model/H265GopSizeUnits.h>
#include <aws/mediaconvert/model/H265InterlaceMode.h>
#include <aws/mediaconvert/model/H265ParControl.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/H265QualityTuningLevel.h>
#include <aws/mediaconvert/model/H265QvbrSettings.h>
#include <aws/mediaconvert/model/H265RateControlMode.h>
#include <aws/mediaconvert/model/H265SampleAdaptiveOffsetFilterMode.h>
#include <aws/mediaconvert/model/H265ScanTypeConversionMode.h>
#include <aws/mediaconvert/model/H265SceneChangeDetect.h>
#include <aws/mediaconvert/model/H265SlowPal.h>
#include <aws/mediaconvert/model/H265SpatialAdaptiveQuantization.h>
#include <aws/mediaconvert/model/H265Telecine.h>
#include <aws/mediaconvert/model/H265TemporalAdaptiveQuantization.h>
#include <aws/mediaconvert/model/H265TemporalIds.h>
#include <aws/mediaconvert/model/H265Tiles.h>
#include <aws/mediaconvert/model/H265UnregisteredSeiTimecode.h>
#include <aws/mediaconvert/model/H265WriteMp4PackagingType.h>
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
   * Settings for H265 codec<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/H265Settings">AWS
   * API Reference</a></p>
   */
  class H265Settings
  {
  public:
    AWS_MEDIACONVERT_API H265Settings() = default;
    AWS_MEDIACONVERT_API H265Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API H265Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * When you set Adaptive Quantization to Auto, or leave blank, MediaConvert
     * automatically applies quantization to improve the video quality of your output.
     * Set Adaptive Quantization to Low, Medium, High, Higher, or Max to manually
     * control the strength of the quantization filter. When you do, you can specify a
     * value for Spatial Adaptive Quantization, Temporal Adaptive Quantization, and
     * Flicker Adaptive Quantization, to further control the quantization filter. Set
     * Adaptive Quantization to Off to apply no quantization to your output.
     */
    inline H265AdaptiveQuantization GetAdaptiveQuantization() const { return m_adaptiveQuantization; }
    inline bool AdaptiveQuantizationHasBeenSet() const { return m_adaptiveQuantizationHasBeenSet; }
    inline void SetAdaptiveQuantization(H265AdaptiveQuantization value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = value; }
    inline H265Settings& WithAdaptiveQuantization(H265AdaptiveQuantization value) { SetAdaptiveQuantization(value); return *this;}
    ///@}

    ///@{
    /**
     * Enables Alternate Transfer Function SEI message for outputs using Hybrid Log
     * Gamma (HLG) Electro-Optical Transfer Function (EOTF).
     */
    inline H265AlternateTransferFunctionSei GetAlternateTransferFunctionSei() const { return m_alternateTransferFunctionSei; }
    inline bool AlternateTransferFunctionSeiHasBeenSet() const { return m_alternateTransferFunctionSeiHasBeenSet; }
    inline void SetAlternateTransferFunctionSei(H265AlternateTransferFunctionSei value) { m_alternateTransferFunctionSeiHasBeenSet = true; m_alternateTransferFunctionSei = value; }
    inline H265Settings& WithAlternateTransferFunctionSei(H265AlternateTransferFunctionSei value) { SetAlternateTransferFunctionSei(value); return *this;}
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
    H265Settings& WithBandwidthReductionFilter(BandwidthReductionFilterT&& value) { SetBandwidthReductionFilter(std::forward<BandwidthReductionFilterT>(value)); return *this;}
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
    inline H265Settings& WithBitrate(int value) { SetBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * H.265 Level.
     */
    inline H265CodecLevel GetCodecLevel() const { return m_codecLevel; }
    inline bool CodecLevelHasBeenSet() const { return m_codecLevelHasBeenSet; }
    inline void SetCodecLevel(H265CodecLevel value) { m_codecLevelHasBeenSet = true; m_codecLevel = value; }
    inline H265Settings& WithCodecLevel(H265CodecLevel value) { SetCodecLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * Represents the Profile and Tier, per the HEVC (H.265) specification. Selections
     * are grouped as [Profile] / [Tier], so "Main/High" represents Main Profile with
     * High Tier. 4:2:2 profiles are only available with the HEVC 4:2:2 License.
     */
    inline H265CodecProfile GetCodecProfile() const { return m_codecProfile; }
    inline bool CodecProfileHasBeenSet() const { return m_codecProfileHasBeenSet; }
    inline void SetCodecProfile(H265CodecProfile value) { m_codecProfileHasBeenSet = true; m_codecProfile = value; }
    inline H265Settings& WithCodecProfile(H265CodecProfile value) { SetCodecProfile(value); return *this;}
    ///@}

    ///@{
    /**
     * Use Deblocking to improve the video quality of your output by smoothing the
     * edges of macroblock artifacts created during video compression. To reduce
     * blocking artifacts at block boundaries, and improve overall video quality: Keep
     * the default value, Enabled. To not apply any deblocking: Choose Disabled.
     * Visible block edge artifacts might appear in the output, especially at lower
     * bitrates.
     */
    inline H265Deblocking GetDeblocking() const { return m_deblocking; }
    inline bool DeblockingHasBeenSet() const { return m_deblockingHasBeenSet; }
    inline void SetDeblocking(H265Deblocking value) { m_deblockingHasBeenSet = true; m_deblocking = value; }
    inline H265Settings& WithDeblocking(H265Deblocking value) { SetDeblocking(value); return *this;}
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
    inline H265DynamicSubGop GetDynamicSubGop() const { return m_dynamicSubGop; }
    inline bool DynamicSubGopHasBeenSet() const { return m_dynamicSubGopHasBeenSet; }
    inline void SetDynamicSubGop(H265DynamicSubGop value) { m_dynamicSubGopHasBeenSet = true; m_dynamicSubGop = value; }
    inline H265Settings& WithDynamicSubGop(H265DynamicSubGop value) { SetDynamicSubGop(value); return *this;}
    ///@}

    ///@{
    /**
     * Optionally include or suppress markers at the end of your output that signal the
     * end of the video stream. To include end of stream markers: Leave blank or keep
     * the default value, Include. To not include end of stream markers: Choose
     * Suppress. This is useful when your output will be inserted into another stream.
     */
    inline H265EndOfStreamMarkers GetEndOfStreamMarkers() const { return m_endOfStreamMarkers; }
    inline bool EndOfStreamMarkersHasBeenSet() const { return m_endOfStreamMarkersHasBeenSet; }
    inline void SetEndOfStreamMarkers(H265EndOfStreamMarkers value) { m_endOfStreamMarkersHasBeenSet = true; m_endOfStreamMarkers = value; }
    inline H265Settings& WithEndOfStreamMarkers(H265EndOfStreamMarkers value) { SetEndOfStreamMarkers(value); return *this;}
    ///@}

    ///@{
    /**
     * Enable this setting to have the encoder reduce I-frame pop. I-frame pop appears
     * as a visual flicker that can arise when the encoder saves bits by copying some
     * macroblocks many times from frame to frame, and then refreshes them at the
     * I-frame. When you enable this setting, the encoder updates these macroblocks
     * slightly more often to smooth out the flicker. This setting is disabled by
     * default. Related setting: In addition to enabling this setting, you must also
     * set adaptiveQuantization to a value other than Off.
     */
    inline H265FlickerAdaptiveQuantization GetFlickerAdaptiveQuantization() const { return m_flickerAdaptiveQuantization; }
    inline bool FlickerAdaptiveQuantizationHasBeenSet() const { return m_flickerAdaptiveQuantizationHasBeenSet; }
    inline void SetFlickerAdaptiveQuantization(H265FlickerAdaptiveQuantization value) { m_flickerAdaptiveQuantizationHasBeenSet = true; m_flickerAdaptiveQuantization = value; }
    inline H265Settings& WithFlickerAdaptiveQuantization(H265FlickerAdaptiveQuantization value) { SetFlickerAdaptiveQuantization(value); return *this;}
    ///@}

    ///@{
    /**
     * Use the Framerate setting to specify the frame rate for this output. If you want
     * to keep the same frame rate as the input video, choose Follow source. If you
     * want to do frame rate conversion, choose a frame rate from the dropdown list or
     * choose Custom. The framerates shown in the dropdown list are decimal
     * approximations of fractions. If you choose Custom, specify your frame rate as a
     * fraction.
     */
    inline H265FramerateControl GetFramerateControl() const { return m_framerateControl; }
    inline bool FramerateControlHasBeenSet() const { return m_framerateControlHasBeenSet; }
    inline void SetFramerateControl(H265FramerateControl value) { m_framerateControlHasBeenSet = true; m_framerateControl = value; }
    inline H265Settings& WithFramerateControl(H265FramerateControl value) { SetFramerateControl(value); return *this;}
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
    inline H265FramerateConversionAlgorithm GetFramerateConversionAlgorithm() const { return m_framerateConversionAlgorithm; }
    inline bool FramerateConversionAlgorithmHasBeenSet() const { return m_framerateConversionAlgorithmHasBeenSet; }
    inline void SetFramerateConversionAlgorithm(H265FramerateConversionAlgorithm value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = value; }
    inline H265Settings& WithFramerateConversionAlgorithm(H265FramerateConversionAlgorithm value) { SetFramerateConversionAlgorithm(value); return *this;}
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
    inline H265Settings& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}
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
    inline H265Settings& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify whether to allow B-frames to be referenced by other frame types. To use
     * reference B-frames when your GOP structure has 1 or more B-frames: Leave blank
     * or keep the default value Enabled. We recommend that you choose Enabled to help
     * improve the video quality of your output relative to its bitrate. To not use
     * reference B-frames: Choose Disabled.
     */
    inline H265GopBReference GetGopBReference() const { return m_gopBReference; }
    inline bool GopBReferenceHasBeenSet() const { return m_gopBReferenceHasBeenSet; }
    inline void SetGopBReference(H265GopBReference value) { m_gopBReferenceHasBeenSet = true; m_gopBReference = value; }
    inline H265Settings& WithGopBReference(H265GopBReference value) { SetGopBReference(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the relative frequency of open to closed GOPs in this output. For
     * example, if you want to allow four open GOPs and then require a closed GOP, set
     * this value to 5. We recommend that you have the transcoder automatically choose
     * this value for you based on characteristics of your input video. To enable this
     * automatic behavior, do this by keeping the default empty value. If you do
     * explicitly specify a value, for segmented outputs, don't set this value to 0.
     */
    inline int GetGopClosedCadence() const { return m_gopClosedCadence; }
    inline bool GopClosedCadenceHasBeenSet() const { return m_gopClosedCadenceHasBeenSet; }
    inline void SetGopClosedCadence(int value) { m_gopClosedCadenceHasBeenSet = true; m_gopClosedCadence = value; }
    inline H265Settings& WithGopClosedCadence(int value) { SetGopClosedCadence(value); return *this;}
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
    inline H265Settings& WithGopSize(double value) { SetGopSize(value); return *this;}
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
    inline H265GopSizeUnits GetGopSizeUnits() const { return m_gopSizeUnits; }
    inline bool GopSizeUnitsHasBeenSet() const { return m_gopSizeUnitsHasBeenSet; }
    inline void SetGopSizeUnits(H265GopSizeUnits value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = value; }
    inline H265Settings& WithGopSizeUnits(H265GopSizeUnits value) { SetGopSizeUnits(value); return *this;}
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
    inline H265Settings& WithHrdBufferFinalFillPercentage(int value) { SetHrdBufferFinalFillPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * Percentage of the buffer that should initially be filled (HRD buffer model).
     */
    inline int GetHrdBufferInitialFillPercentage() const { return m_hrdBufferInitialFillPercentage; }
    inline bool HrdBufferInitialFillPercentageHasBeenSet() const { return m_hrdBufferInitialFillPercentageHasBeenSet; }
    inline void SetHrdBufferInitialFillPercentage(int value) { m_hrdBufferInitialFillPercentageHasBeenSet = true; m_hrdBufferInitialFillPercentage = value; }
    inline H265Settings& WithHrdBufferInitialFillPercentage(int value) { SetHrdBufferInitialFillPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * Size of buffer (HRD buffer model) in bits. For example, enter five megabits as
     * 5000000.
     */
    inline int GetHrdBufferSize() const { return m_hrdBufferSize; }
    inline bool HrdBufferSizeHasBeenSet() const { return m_hrdBufferSizeHasBeenSet; }
    inline void SetHrdBufferSize(int value) { m_hrdBufferSizeHasBeenSet = true; m_hrdBufferSize = value; }
    inline H265Settings& WithHrdBufferSize(int value) { SetHrdBufferSize(value); return *this;}
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
    inline H265InterlaceMode GetInterlaceMode() const { return m_interlaceMode; }
    inline bool InterlaceModeHasBeenSet() const { return m_interlaceModeHasBeenSet; }
    inline void SetInterlaceMode(H265InterlaceMode value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = value; }
    inline H265Settings& WithInterlaceMode(H265InterlaceMode value) { SetInterlaceMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Maximum bitrate in bits/second. For example, enter five megabits per second as
     * 5000000. Required when Rate control mode is QVBR.
     */
    inline int GetMaxBitrate() const { return m_maxBitrate; }
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }
    inline H265Settings& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}
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
    inline H265Settings& WithMinIInterval(int value) { SetMinIInterval(value); return *this;}
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
    inline H265Settings& WithNumberBFramesBetweenReferenceFrames(int value) { SetNumberBFramesBetweenReferenceFrames(value); return *this;}
    ///@}

    ///@{
    /**
     * Number of reference frames to use. The encoder may use more than requested if
     * using B-frames and/or interlaced encoding.
     */
    inline int GetNumberReferenceFrames() const { return m_numberReferenceFrames; }
    inline bool NumberReferenceFramesHasBeenSet() const { return m_numberReferenceFramesHasBeenSet; }
    inline void SetNumberReferenceFrames(int value) { m_numberReferenceFramesHasBeenSet = true; m_numberReferenceFrames = value; }
    inline H265Settings& WithNumberReferenceFrames(int value) { SetNumberReferenceFrames(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Specify how the service determines the pixel aspect ratio (PAR) for
     * this output. The default behavior, Follow source, uses the PAR from your input
     * video for your output. To specify a different PAR, choose any value other than
     * Follow source. When you choose SPECIFIED for this setting, you must also specify
     * values for the parNumerator and parDenominator settings.
     */
    inline H265ParControl GetParControl() const { return m_parControl; }
    inline bool ParControlHasBeenSet() const { return m_parControlHasBeenSet; }
    inline void SetParControl(H265ParControl value) { m_parControlHasBeenSet = true; m_parControl = value; }
    inline H265Settings& WithParControl(H265ParControl value) { SetParControl(value); return *this;}
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
    inline H265Settings& WithParDenominator(int value) { SetParDenominator(value); return *this;}
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
    inline H265Settings& WithParNumerator(int value) { SetParNumerator(value); return *this;}
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
    H265Settings& WithPerFrameMetrics(PerFrameMetricsT&& value) { SetPerFrameMetrics(std::forward<PerFrameMetricsT>(value)); return *this;}
    inline H265Settings& AddPerFrameMetrics(FrameMetricType value) { m_perFrameMetricsHasBeenSet = true; m_perFrameMetrics.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * Optional. Use Quality tuning level to choose how you want to trade off encoding
     * speed for output video quality. The default behavior is faster, lower quality,
     * single-pass encoding.
     */
    inline H265QualityTuningLevel GetQualityTuningLevel() const { return m_qualityTuningLevel; }
    inline bool QualityTuningLevelHasBeenSet() const { return m_qualityTuningLevelHasBeenSet; }
    inline void SetQualityTuningLevel(H265QualityTuningLevel value) { m_qualityTuningLevelHasBeenSet = true; m_qualityTuningLevel = value; }
    inline H265Settings& WithQualityTuningLevel(H265QualityTuningLevel value) { SetQualityTuningLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * Settings for quality-defined variable bitrate encoding with the H.265 codec. Use
     * these settings only when you set QVBR for Rate control mode.
     */
    inline const H265QvbrSettings& GetQvbrSettings() const { return m_qvbrSettings; }
    inline bool QvbrSettingsHasBeenSet() const { return m_qvbrSettingsHasBeenSet; }
    template<typename QvbrSettingsT = H265QvbrSettings>
    void SetQvbrSettings(QvbrSettingsT&& value) { m_qvbrSettingsHasBeenSet = true; m_qvbrSettings = std::forward<QvbrSettingsT>(value); }
    template<typename QvbrSettingsT = H265QvbrSettings>
    H265Settings& WithQvbrSettings(QvbrSettingsT&& value) { SetQvbrSettings(std::forward<QvbrSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use this setting to specify whether this output has a variable bitrate (VBR),
     * constant bitrate (CBR) or quality-defined variable bitrate (QVBR).
     */
    inline H265RateControlMode GetRateControlMode() const { return m_rateControlMode; }
    inline bool RateControlModeHasBeenSet() const { return m_rateControlModeHasBeenSet; }
    inline void SetRateControlMode(H265RateControlMode value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = value; }
    inline H265Settings& WithRateControlMode(H265RateControlMode value) { SetRateControlMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify Sample Adaptive Offset (SAO) filter strength. Adaptive mode dynamically
     * selects best strength based on content
     */
    inline H265SampleAdaptiveOffsetFilterMode GetSampleAdaptiveOffsetFilterMode() const { return m_sampleAdaptiveOffsetFilterMode; }
    inline bool SampleAdaptiveOffsetFilterModeHasBeenSet() const { return m_sampleAdaptiveOffsetFilterModeHasBeenSet; }
    inline void SetSampleAdaptiveOffsetFilterMode(H265SampleAdaptiveOffsetFilterMode value) { m_sampleAdaptiveOffsetFilterModeHasBeenSet = true; m_sampleAdaptiveOffsetFilterMode = value; }
    inline H265Settings& WithSampleAdaptiveOffsetFilterMode(H265SampleAdaptiveOffsetFilterMode value) { SetSampleAdaptiveOffsetFilterMode(value); return *this;}
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
    inline H265ScanTypeConversionMode GetScanTypeConversionMode() const { return m_scanTypeConversionMode; }
    inline bool ScanTypeConversionModeHasBeenSet() const { return m_scanTypeConversionModeHasBeenSet; }
    inline void SetScanTypeConversionMode(H265ScanTypeConversionMode value) { m_scanTypeConversionModeHasBeenSet = true; m_scanTypeConversionMode = value; }
    inline H265Settings& WithScanTypeConversionMode(H265ScanTypeConversionMode value) { SetScanTypeConversionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Enable this setting to insert I-frames at scene changes that the service
     * automatically detects. This improves video quality and is enabled by default. If
     * this output uses QVBR, choose Transition detection for further video quality
     * improvement. For more information about QVBR, see
     * https://docs.aws.amazon.com/console/mediaconvert/cbr-vbr-qvbr.
     */
    inline H265SceneChangeDetect GetSceneChangeDetect() const { return m_sceneChangeDetect; }
    inline bool SceneChangeDetectHasBeenSet() const { return m_sceneChangeDetectHasBeenSet; }
    inline void SetSceneChangeDetect(H265SceneChangeDetect value) { m_sceneChangeDetectHasBeenSet = true; m_sceneChangeDetect = value; }
    inline H265Settings& WithSceneChangeDetect(H265SceneChangeDetect value) { SetSceneChangeDetect(value); return *this;}
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
    inline H265Settings& WithSlices(int value) { SetSlices(value); return *this;}
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
    inline H265SlowPal GetSlowPal() const { return m_slowPal; }
    inline bool SlowPalHasBeenSet() const { return m_slowPalHasBeenSet; }
    inline void SetSlowPal(H265SlowPal value) { m_slowPalHasBeenSet = true; m_slowPal = value; }
    inline H265Settings& WithSlowPal(H265SlowPal value) { SetSlowPal(value); return *this;}
    ///@}

    ///@{
    /**
     * Keep the default value, Enabled, to adjust quantization within each frame based
     * on spatial variation of content complexity. When you enable this feature, the
     * encoder uses fewer bits on areas that can sustain more distortion with no
     * noticeable visual degradation and uses more bits on areas where any small
     * distortion will be noticeable. For example, complex textured blocks are encoded
     * with fewer bits and smooth textured blocks are encoded with more bits. Enabling
     * this feature will almost always improve your video quality. Note, though, that
     * this feature doesn't take into account where the viewer's attention is likely to
     * be. If viewers are likely to be focusing their attention on a part of the screen
     * with a lot of complex texture, you might choose to disable this feature. Related
     * setting: When you enable spatial adaptive quantization, set the value for
     * Adaptive quantization depending on your content. For homogeneous content, such
     * as cartoons and video games, set it to Low. For content with a wider variety of
     * textures, set it to High or Higher.
     */
    inline H265SpatialAdaptiveQuantization GetSpatialAdaptiveQuantization() const { return m_spatialAdaptiveQuantization; }
    inline bool SpatialAdaptiveQuantizationHasBeenSet() const { return m_spatialAdaptiveQuantizationHasBeenSet; }
    inline void SetSpatialAdaptiveQuantization(H265SpatialAdaptiveQuantization value) { m_spatialAdaptiveQuantizationHasBeenSet = true; m_spatialAdaptiveQuantization = value; }
    inline H265Settings& WithSpatialAdaptiveQuantization(H265SpatialAdaptiveQuantization value) { SetSpatialAdaptiveQuantization(value); return *this;}
    ///@}

    ///@{
    /**
     * This field applies only if the Streams > Advanced > Framerate field is set to
     * 29.970. This field works with the Streams > Advanced > Preprocessors >
     * Deinterlacer field and the Streams > Advanced > Interlaced Mode field to
     * identify the scan type for the output: Progressive, Interlaced, Hard Telecine or
     * Soft Telecine. - Hard: produces 29.97i output from 23.976 input. - Soft:
     * produces 23.976; the player converts this output to 29.97i.
     */
    inline H265Telecine GetTelecine() const { return m_telecine; }
    inline bool TelecineHasBeenSet() const { return m_telecineHasBeenSet; }
    inline void SetTelecine(H265Telecine value) { m_telecineHasBeenSet = true; m_telecine = value; }
    inline H265Settings& WithTelecine(H265Telecine value) { SetTelecine(value); return *this;}
    ///@}

    ///@{
    /**
     * Keep the default value, Enabled, to adjust quantization within each frame based
     * on temporal variation of content complexity. When you enable this feature, the
     * encoder uses fewer bits on areas of the frame that aren't moving and uses more
     * bits on complex objects with sharp edges that move a lot. For example, this
     * feature improves the readability of text tickers on newscasts and scoreboards on
     * sports matches. Enabling this feature will almost always improve your video
     * quality. Note, though, that this feature doesn't take into account where the
     * viewer's attention is likely to be. If viewers are likely to be focusing their
     * attention on a part of the screen that doesn't have moving objects with sharp
     * edges, such as sports athletes' faces, you might choose to disable this feature.
     * Related setting: When you enable temporal quantization, adjust the strength of
     * the filter with the setting Adaptive quantization.
     */
    inline H265TemporalAdaptiveQuantization GetTemporalAdaptiveQuantization() const { return m_temporalAdaptiveQuantization; }
    inline bool TemporalAdaptiveQuantizationHasBeenSet() const { return m_temporalAdaptiveQuantizationHasBeenSet; }
    inline void SetTemporalAdaptiveQuantization(H265TemporalAdaptiveQuantization value) { m_temporalAdaptiveQuantizationHasBeenSet = true; m_temporalAdaptiveQuantization = value; }
    inline H265Settings& WithTemporalAdaptiveQuantization(H265TemporalAdaptiveQuantization value) { SetTemporalAdaptiveQuantization(value); return *this;}
    ///@}

    ///@{
    /**
     * Enables temporal layer identifiers in the encoded bitstream. Up to 3 layers are
     * supported depending on GOP structure: I- and P-frames form one layer, reference
     * B-frames can form a second layer and non-reference b-frames can form a third
     * layer. Decoders can optionally decode only the lower temporal layers to generate
     * a lower frame rate output. For example, given a bitstream with temporal IDs and
     * with b-frames = 1 (i.e. IbPbPb display order), a decoder could decode all the
     * frames for full frame rate output or only the I and P frames (lowest temporal
     * layer) for a half frame rate output.
     */
    inline H265TemporalIds GetTemporalIds() const { return m_temporalIds; }
    inline bool TemporalIdsHasBeenSet() const { return m_temporalIdsHasBeenSet; }
    inline void SetTemporalIds(H265TemporalIds value) { m_temporalIdsHasBeenSet = true; m_temporalIds = value; }
    inline H265Settings& WithTemporalIds(H265TemporalIds value) { SetTemporalIds(value); return *this;}
    ///@}

    ///@{
    /**
     * Enable use of tiles, allowing horizontal as well as vertical subdivision of the
     * encoded pictures.
     */
    inline H265Tiles GetTiles() const { return m_tiles; }
    inline bool TilesHasBeenSet() const { return m_tilesHasBeenSet; }
    inline void SetTiles(H265Tiles value) { m_tilesHasBeenSet = true; m_tiles = value; }
    inline H265Settings& WithTiles(H265Tiles value) { SetTiles(value); return *this;}
    ///@}

    ///@{
    /**
     * Inserts timecode for each frame as 4 bytes of an unregistered SEI message.
     */
    inline H265UnregisteredSeiTimecode GetUnregisteredSeiTimecode() const { return m_unregisteredSeiTimecode; }
    inline bool UnregisteredSeiTimecodeHasBeenSet() const { return m_unregisteredSeiTimecodeHasBeenSet; }
    inline void SetUnregisteredSeiTimecode(H265UnregisteredSeiTimecode value) { m_unregisteredSeiTimecodeHasBeenSet = true; m_unregisteredSeiTimecode = value; }
    inline H265Settings& WithUnregisteredSeiTimecode(H265UnregisteredSeiTimecode value) { SetUnregisteredSeiTimecode(value); return *this;}
    ///@}

    ///@{
    /**
     * If the location of parameter set NAL units doesn't matter in your workflow,
     * ignore this setting. Use this setting only with CMAF or DASH outputs, or with
     * standalone file outputs in an MPEG-4 container (MP4 outputs). Choose HVC1 to
     * mark your output as HVC1. This makes your output compliant with the following
     * specification: ISO IECJTC1 SC29 N13798 Text ISO/IEC FDIS 14496-15 3rd Edition.
     * For these outputs, the service stores parameter set NAL units in the sample
     * headers but not in the samples directly. For MP4 outputs, when you choose HVC1,
     * your output video might not work properly with some downstream systems and video
     * players. The service defaults to marking your output as HEV1. For these outputs,
     * the service writes parameter set NAL units directly into the samples.
     */
    inline H265WriteMp4PackagingType GetWriteMp4PackagingType() const { return m_writeMp4PackagingType; }
    inline bool WriteMp4PackagingTypeHasBeenSet() const { return m_writeMp4PackagingTypeHasBeenSet; }
    inline void SetWriteMp4PackagingType(H265WriteMp4PackagingType value) { m_writeMp4PackagingTypeHasBeenSet = true; m_writeMp4PackagingType = value; }
    inline H265Settings& WithWriteMp4PackagingType(H265WriteMp4PackagingType value) { SetWriteMp4PackagingType(value); return *this;}
    ///@}
  private:

    H265AdaptiveQuantization m_adaptiveQuantization{H265AdaptiveQuantization::NOT_SET};
    bool m_adaptiveQuantizationHasBeenSet = false;

    H265AlternateTransferFunctionSei m_alternateTransferFunctionSei{H265AlternateTransferFunctionSei::NOT_SET};
    bool m_alternateTransferFunctionSeiHasBeenSet = false;

    BandwidthReductionFilter m_bandwidthReductionFilter;
    bool m_bandwidthReductionFilterHasBeenSet = false;

    int m_bitrate{0};
    bool m_bitrateHasBeenSet = false;

    H265CodecLevel m_codecLevel{H265CodecLevel::NOT_SET};
    bool m_codecLevelHasBeenSet = false;

    H265CodecProfile m_codecProfile{H265CodecProfile::NOT_SET};
    bool m_codecProfileHasBeenSet = false;

    H265Deblocking m_deblocking{H265Deblocking::NOT_SET};
    bool m_deblockingHasBeenSet = false;

    H265DynamicSubGop m_dynamicSubGop{H265DynamicSubGop::NOT_SET};
    bool m_dynamicSubGopHasBeenSet = false;

    H265EndOfStreamMarkers m_endOfStreamMarkers{H265EndOfStreamMarkers::NOT_SET};
    bool m_endOfStreamMarkersHasBeenSet = false;

    H265FlickerAdaptiveQuantization m_flickerAdaptiveQuantization{H265FlickerAdaptiveQuantization::NOT_SET};
    bool m_flickerAdaptiveQuantizationHasBeenSet = false;

    H265FramerateControl m_framerateControl{H265FramerateControl::NOT_SET};
    bool m_framerateControlHasBeenSet = false;

    H265FramerateConversionAlgorithm m_framerateConversionAlgorithm{H265FramerateConversionAlgorithm::NOT_SET};
    bool m_framerateConversionAlgorithmHasBeenSet = false;

    int m_framerateDenominator{0};
    bool m_framerateDenominatorHasBeenSet = false;

    int m_framerateNumerator{0};
    bool m_framerateNumeratorHasBeenSet = false;

    H265GopBReference m_gopBReference{H265GopBReference::NOT_SET};
    bool m_gopBReferenceHasBeenSet = false;

    int m_gopClosedCadence{0};
    bool m_gopClosedCadenceHasBeenSet = false;

    double m_gopSize{0.0};
    bool m_gopSizeHasBeenSet = false;

    H265GopSizeUnits m_gopSizeUnits{H265GopSizeUnits::NOT_SET};
    bool m_gopSizeUnitsHasBeenSet = false;

    int m_hrdBufferFinalFillPercentage{0};
    bool m_hrdBufferFinalFillPercentageHasBeenSet = false;

    int m_hrdBufferInitialFillPercentage{0};
    bool m_hrdBufferInitialFillPercentageHasBeenSet = false;

    int m_hrdBufferSize{0};
    bool m_hrdBufferSizeHasBeenSet = false;

    H265InterlaceMode m_interlaceMode{H265InterlaceMode::NOT_SET};
    bool m_interlaceModeHasBeenSet = false;

    int m_maxBitrate{0};
    bool m_maxBitrateHasBeenSet = false;

    int m_minIInterval{0};
    bool m_minIIntervalHasBeenSet = false;

    int m_numberBFramesBetweenReferenceFrames{0};
    bool m_numberBFramesBetweenReferenceFramesHasBeenSet = false;

    int m_numberReferenceFrames{0};
    bool m_numberReferenceFramesHasBeenSet = false;

    H265ParControl m_parControl{H265ParControl::NOT_SET};
    bool m_parControlHasBeenSet = false;

    int m_parDenominator{0};
    bool m_parDenominatorHasBeenSet = false;

    int m_parNumerator{0};
    bool m_parNumeratorHasBeenSet = false;

    Aws::Vector<FrameMetricType> m_perFrameMetrics;
    bool m_perFrameMetricsHasBeenSet = false;

    H265QualityTuningLevel m_qualityTuningLevel{H265QualityTuningLevel::NOT_SET};
    bool m_qualityTuningLevelHasBeenSet = false;

    H265QvbrSettings m_qvbrSettings;
    bool m_qvbrSettingsHasBeenSet = false;

    H265RateControlMode m_rateControlMode{H265RateControlMode::NOT_SET};
    bool m_rateControlModeHasBeenSet = false;

    H265SampleAdaptiveOffsetFilterMode m_sampleAdaptiveOffsetFilterMode{H265SampleAdaptiveOffsetFilterMode::NOT_SET};
    bool m_sampleAdaptiveOffsetFilterModeHasBeenSet = false;

    H265ScanTypeConversionMode m_scanTypeConversionMode{H265ScanTypeConversionMode::NOT_SET};
    bool m_scanTypeConversionModeHasBeenSet = false;

    H265SceneChangeDetect m_sceneChangeDetect{H265SceneChangeDetect::NOT_SET};
    bool m_sceneChangeDetectHasBeenSet = false;

    int m_slices{0};
    bool m_slicesHasBeenSet = false;

    H265SlowPal m_slowPal{H265SlowPal::NOT_SET};
    bool m_slowPalHasBeenSet = false;

    H265SpatialAdaptiveQuantization m_spatialAdaptiveQuantization{H265SpatialAdaptiveQuantization::NOT_SET};
    bool m_spatialAdaptiveQuantizationHasBeenSet = false;

    H265Telecine m_telecine{H265Telecine::NOT_SET};
    bool m_telecineHasBeenSet = false;

    H265TemporalAdaptiveQuantization m_temporalAdaptiveQuantization{H265TemporalAdaptiveQuantization::NOT_SET};
    bool m_temporalAdaptiveQuantizationHasBeenSet = false;

    H265TemporalIds m_temporalIds{H265TemporalIds::NOT_SET};
    bool m_temporalIdsHasBeenSet = false;

    H265Tiles m_tiles{H265Tiles::NOT_SET};
    bool m_tilesHasBeenSet = false;

    H265UnregisteredSeiTimecode m_unregisteredSeiTimecode{H265UnregisteredSeiTimecode::NOT_SET};
    bool m_unregisteredSeiTimecodeHasBeenSet = false;

    H265WriteMp4PackagingType m_writeMp4PackagingType{H265WriteMp4PackagingType::NOT_SET};
    bool m_writeMp4PackagingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
