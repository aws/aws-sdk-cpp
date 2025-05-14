/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/Mpeg2AdaptiveQuantization.h>
#include <aws/mediaconvert/model/Mpeg2CodecLevel.h>
#include <aws/mediaconvert/model/Mpeg2CodecProfile.h>
#include <aws/mediaconvert/model/Mpeg2DynamicSubGop.h>
#include <aws/mediaconvert/model/Mpeg2FramerateControl.h>
#include <aws/mediaconvert/model/Mpeg2FramerateConversionAlgorithm.h>
#include <aws/mediaconvert/model/Mpeg2GopSizeUnits.h>
#include <aws/mediaconvert/model/Mpeg2InterlaceMode.h>
#include <aws/mediaconvert/model/Mpeg2IntraDcPrecision.h>
#include <aws/mediaconvert/model/Mpeg2ParControl.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/Mpeg2QualityTuningLevel.h>
#include <aws/mediaconvert/model/Mpeg2RateControlMode.h>
#include <aws/mediaconvert/model/Mpeg2ScanTypeConversionMode.h>
#include <aws/mediaconvert/model/Mpeg2SceneChangeDetect.h>
#include <aws/mediaconvert/model/Mpeg2SlowPal.h>
#include <aws/mediaconvert/model/Mpeg2SpatialAdaptiveQuantization.h>
#include <aws/mediaconvert/model/Mpeg2Syntax.h>
#include <aws/mediaconvert/model/Mpeg2Telecine.h>
#include <aws/mediaconvert/model/Mpeg2TemporalAdaptiveQuantization.h>
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
   * Required when you set Codec to the value MPEG2.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Mpeg2Settings">AWS
   * API Reference</a></p>
   */
  class Mpeg2Settings
  {
  public:
    AWS_MEDIACONVERT_API Mpeg2Settings() = default;
    AWS_MEDIACONVERT_API Mpeg2Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Mpeg2Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify the strength of any adaptive quantization filters that you enable. The
     * value that you choose here applies to the following settings: Spatial adaptive
     * quantization, and Temporal adaptive quantization.
     */
    inline Mpeg2AdaptiveQuantization GetAdaptiveQuantization() const { return m_adaptiveQuantization; }
    inline bool AdaptiveQuantizationHasBeenSet() const { return m_adaptiveQuantizationHasBeenSet; }
    inline void SetAdaptiveQuantization(Mpeg2AdaptiveQuantization value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = value; }
    inline Mpeg2Settings& WithAdaptiveQuantization(Mpeg2AdaptiveQuantization value) { SetAdaptiveQuantization(value); return *this;}
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
    inline Mpeg2Settings& WithBitrate(int value) { SetBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * Use Level to set the MPEG-2 level for the video output.
     */
    inline Mpeg2CodecLevel GetCodecLevel() const { return m_codecLevel; }
    inline bool CodecLevelHasBeenSet() const { return m_codecLevelHasBeenSet; }
    inline void SetCodecLevel(Mpeg2CodecLevel value) { m_codecLevelHasBeenSet = true; m_codecLevel = value; }
    inline Mpeg2Settings& WithCodecLevel(Mpeg2CodecLevel value) { SetCodecLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * Use Profile to set the MPEG-2 profile for the video output.
     */
    inline Mpeg2CodecProfile GetCodecProfile() const { return m_codecProfile; }
    inline bool CodecProfileHasBeenSet() const { return m_codecProfileHasBeenSet; }
    inline void SetCodecProfile(Mpeg2CodecProfile value) { m_codecProfileHasBeenSet = true; m_codecProfile = value; }
    inline Mpeg2Settings& WithCodecProfile(Mpeg2CodecProfile value) { SetCodecProfile(value); return *this;}
    ///@}

    ///@{
    /**
     * Choose Adaptive to improve subjective video quality for high-motion content.
     * This will cause the service to use fewer B-frames (which infer information based
     * on other frames) for high-motion portions of the video and more B-frames for
     * low-motion portions. The maximum number of B-frames is limited by the value you
     * provide for the setting B frames between reference frames.
     */
    inline Mpeg2DynamicSubGop GetDynamicSubGop() const { return m_dynamicSubGop; }
    inline bool DynamicSubGopHasBeenSet() const { return m_dynamicSubGopHasBeenSet; }
    inline void SetDynamicSubGop(Mpeg2DynamicSubGop value) { m_dynamicSubGopHasBeenSet = true; m_dynamicSubGop = value; }
    inline Mpeg2Settings& WithDynamicSubGop(Mpeg2DynamicSubGop value) { SetDynamicSubGop(value); return *this;}
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
    inline Mpeg2FramerateControl GetFramerateControl() const { return m_framerateControl; }
    inline bool FramerateControlHasBeenSet() const { return m_framerateControlHasBeenSet; }
    inline void SetFramerateControl(Mpeg2FramerateControl value) { m_framerateControlHasBeenSet = true; m_framerateControl = value; }
    inline Mpeg2Settings& WithFramerateControl(Mpeg2FramerateControl value) { SetFramerateControl(value); return *this;}
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
    inline Mpeg2FramerateConversionAlgorithm GetFramerateConversionAlgorithm() const { return m_framerateConversionAlgorithm; }
    inline bool FramerateConversionAlgorithmHasBeenSet() const { return m_framerateConversionAlgorithmHasBeenSet; }
    inline void SetFramerateConversionAlgorithm(Mpeg2FramerateConversionAlgorithm value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = value; }
    inline Mpeg2Settings& WithFramerateConversionAlgorithm(Mpeg2FramerateConversionAlgorithm value) { SetFramerateConversionAlgorithm(value); return *this;}
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
    inline Mpeg2Settings& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}
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
    inline Mpeg2Settings& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the relative frequency of open to closed GOPs in this output. For
     * example, if you want to allow four open GOPs and then require a closed GOP, set
     * this value to 5. When you create a streaming output, we recommend that you keep
     * the default value, 1, so that players starting mid-stream receive an IDR frame
     * as quickly as possible. Don't set this value to 0; that would break output
     * segmenting.
     */
    inline int GetGopClosedCadence() const { return m_gopClosedCadence; }
    inline bool GopClosedCadenceHasBeenSet() const { return m_gopClosedCadenceHasBeenSet; }
    inline void SetGopClosedCadence(int value) { m_gopClosedCadenceHasBeenSet = true; m_gopClosedCadence = value; }
    inline Mpeg2Settings& WithGopClosedCadence(int value) { SetGopClosedCadence(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the interval between keyframes, in seconds or frames, for this output.
     * Default: 12 Related settings: When you specify the GOP size in seconds, set GOP
     * mode control to Specified, seconds. The default value for GOP mode control is
     * Frames.
     */
    inline double GetGopSize() const { return m_gopSize; }
    inline bool GopSizeHasBeenSet() const { return m_gopSizeHasBeenSet; }
    inline void SetGopSize(double value) { m_gopSizeHasBeenSet = true; m_gopSize = value; }
    inline Mpeg2Settings& WithGopSize(double value) { SetGopSize(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the units for GOP size. If you don't specify a value here, by default
     * the encoder measures GOP size in frames.
     */
    inline Mpeg2GopSizeUnits GetGopSizeUnits() const { return m_gopSizeUnits; }
    inline bool GopSizeUnitsHasBeenSet() const { return m_gopSizeUnitsHasBeenSet; }
    inline void SetGopSizeUnits(Mpeg2GopSizeUnits value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = value; }
    inline Mpeg2Settings& WithGopSizeUnits(Mpeg2GopSizeUnits value) { SetGopSizeUnits(value); return *this;}
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
    inline Mpeg2Settings& WithHrdBufferFinalFillPercentage(int value) { SetHrdBufferFinalFillPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * Percentage of the buffer that should initially be filled (HRD buffer model).
     */
    inline int GetHrdBufferInitialFillPercentage() const { return m_hrdBufferInitialFillPercentage; }
    inline bool HrdBufferInitialFillPercentageHasBeenSet() const { return m_hrdBufferInitialFillPercentageHasBeenSet; }
    inline void SetHrdBufferInitialFillPercentage(int value) { m_hrdBufferInitialFillPercentageHasBeenSet = true; m_hrdBufferInitialFillPercentage = value; }
    inline Mpeg2Settings& WithHrdBufferInitialFillPercentage(int value) { SetHrdBufferInitialFillPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * Size of buffer (HRD buffer model) in bits. For example, enter five megabits as
     * 5000000.
     */
    inline int GetHrdBufferSize() const { return m_hrdBufferSize; }
    inline bool HrdBufferSizeHasBeenSet() const { return m_hrdBufferSizeHasBeenSet; }
    inline void SetHrdBufferSize(int value) { m_hrdBufferSizeHasBeenSet = true; m_hrdBufferSize = value; }
    inline Mpeg2Settings& WithHrdBufferSize(int value) { SetHrdBufferSize(value); return *this;}
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
    inline Mpeg2InterlaceMode GetInterlaceMode() const { return m_interlaceMode; }
    inline bool InterlaceModeHasBeenSet() const { return m_interlaceModeHasBeenSet; }
    inline void SetInterlaceMode(Mpeg2InterlaceMode value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = value; }
    inline Mpeg2Settings& WithInterlaceMode(Mpeg2InterlaceMode value) { SetInterlaceMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Use Intra DC precision to set quantization precision for intra-block DC
     * coefficients. If you choose the value auto, the service will automatically
     * select the precision based on the per-frame compression ratio.
     */
    inline Mpeg2IntraDcPrecision GetIntraDcPrecision() const { return m_intraDcPrecision; }
    inline bool IntraDcPrecisionHasBeenSet() const { return m_intraDcPrecisionHasBeenSet; }
    inline void SetIntraDcPrecision(Mpeg2IntraDcPrecision value) { m_intraDcPrecisionHasBeenSet = true; m_intraDcPrecision = value; }
    inline Mpeg2Settings& WithIntraDcPrecision(Mpeg2IntraDcPrecision value) { SetIntraDcPrecision(value); return *this;}
    ///@}

    ///@{
    /**
     * Maximum bitrate in bits/second. For example, enter five megabits per second as
     * 5000000.
     */
    inline int GetMaxBitrate() const { return m_maxBitrate; }
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }
    inline Mpeg2Settings& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}
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
     * IDR-frame, then the encoder leaves all IDR-frames in place. To manually specify
     * an interval: Enter a value from 1 to 30. Use when your downstream systems have
     * specific GOP size requirements. To disable GOP size variance: Enter 0.
     * MediaConvert will only create IDR-frames at the start of your output's
     * cadence-driven GOP. Use when your downstream systems require a regular GOP size.
     */
    inline int GetMinIInterval() const { return m_minIInterval; }
    inline bool MinIIntervalHasBeenSet() const { return m_minIIntervalHasBeenSet; }
    inline void SetMinIInterval(int value) { m_minIIntervalHasBeenSet = true; m_minIInterval = value; }
    inline Mpeg2Settings& WithMinIInterval(int value) { SetMinIInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the number of B-frames that MediaConvert puts between reference frames
     * in this output. Valid values are whole numbers from 0 through 7. When you don't
     * specify a value, MediaConvert defaults to 2.
     */
    inline int GetNumberBFramesBetweenReferenceFrames() const { return m_numberBFramesBetweenReferenceFrames; }
    inline bool NumberBFramesBetweenReferenceFramesHasBeenSet() const { return m_numberBFramesBetweenReferenceFramesHasBeenSet; }
    inline void SetNumberBFramesBetweenReferenceFrames(int value) { m_numberBFramesBetweenReferenceFramesHasBeenSet = true; m_numberBFramesBetweenReferenceFrames = value; }
    inline Mpeg2Settings& WithNumberBFramesBetweenReferenceFrames(int value) { SetNumberBFramesBetweenReferenceFrames(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Specify how the service determines the pixel aspect ratio (PAR) for
     * this output. The default behavior, Follow source, uses the PAR from your input
     * video for your output. To specify a different PAR in the console, choose any
     * value other than Follow source. When you choose SPECIFIED for this setting, you
     * must also specify values for the parNumerator and parDenominator settings.
     */
    inline Mpeg2ParControl GetParControl() const { return m_parControl; }
    inline bool ParControlHasBeenSet() const { return m_parControlHasBeenSet; }
    inline void SetParControl(Mpeg2ParControl value) { m_parControlHasBeenSet = true; m_parControl = value; }
    inline Mpeg2Settings& WithParControl(Mpeg2ParControl value) { SetParControl(value); return *this;}
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
    inline Mpeg2Settings& WithParDenominator(int value) { SetParDenominator(value); return *this;}
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
    inline Mpeg2Settings& WithParNumerator(int value) { SetParNumerator(value); return *this;}
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
    Mpeg2Settings& WithPerFrameMetrics(PerFrameMetricsT&& value) { SetPerFrameMetrics(std::forward<PerFrameMetricsT>(value)); return *this;}
    inline Mpeg2Settings& AddPerFrameMetrics(FrameMetricType value) { m_perFrameMetricsHasBeenSet = true; m_perFrameMetrics.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * Optional. Use Quality tuning level to choose how you want to trade off encoding
     * speed for output video quality. The default behavior is faster, lower quality,
     * single-pass encoding.
     */
    inline Mpeg2QualityTuningLevel GetQualityTuningLevel() const { return m_qualityTuningLevel; }
    inline bool QualityTuningLevelHasBeenSet() const { return m_qualityTuningLevelHasBeenSet; }
    inline void SetQualityTuningLevel(Mpeg2QualityTuningLevel value) { m_qualityTuningLevelHasBeenSet = true; m_qualityTuningLevel = value; }
    inline Mpeg2Settings& WithQualityTuningLevel(Mpeg2QualityTuningLevel value) { SetQualityTuningLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * Use Rate control mode to specify whether the bitrate is variable (vbr) or
     * constant (cbr).
     */
    inline Mpeg2RateControlMode GetRateControlMode() const { return m_rateControlMode; }
    inline bool RateControlModeHasBeenSet() const { return m_rateControlModeHasBeenSet; }
    inline void SetRateControlMode(Mpeg2RateControlMode value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = value; }
    inline Mpeg2Settings& WithRateControlMode(Mpeg2RateControlMode value) { SetRateControlMode(value); return *this;}
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
    inline Mpeg2ScanTypeConversionMode GetScanTypeConversionMode() const { return m_scanTypeConversionMode; }
    inline bool ScanTypeConversionModeHasBeenSet() const { return m_scanTypeConversionModeHasBeenSet; }
    inline void SetScanTypeConversionMode(Mpeg2ScanTypeConversionMode value) { m_scanTypeConversionModeHasBeenSet = true; m_scanTypeConversionMode = value; }
    inline Mpeg2Settings& WithScanTypeConversionMode(Mpeg2ScanTypeConversionMode value) { SetScanTypeConversionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Enable this setting to insert I-frames at scene changes that the service
     * automatically detects. This improves video quality and is enabled by default.
     */
    inline Mpeg2SceneChangeDetect GetSceneChangeDetect() const { return m_sceneChangeDetect; }
    inline bool SceneChangeDetectHasBeenSet() const { return m_sceneChangeDetectHasBeenSet; }
    inline void SetSceneChangeDetect(Mpeg2SceneChangeDetect value) { m_sceneChangeDetectHasBeenSet = true; m_sceneChangeDetect = value; }
    inline Mpeg2Settings& WithSceneChangeDetect(Mpeg2SceneChangeDetect value) { SetSceneChangeDetect(value); return *this;}
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
    inline Mpeg2SlowPal GetSlowPal() const { return m_slowPal; }
    inline bool SlowPalHasBeenSet() const { return m_slowPalHasBeenSet; }
    inline void SetSlowPal(Mpeg2SlowPal value) { m_slowPalHasBeenSet = true; m_slowPal = value; }
    inline Mpeg2Settings& WithSlowPal(Mpeg2SlowPal value) { SetSlowPal(value); return *this;}
    ///@}

    ///@{
    /**
     * Ignore this setting unless you need to comply with a specification that requires
     * a specific value. If you don't have a specification requirement, we recommend
     * that you adjust the softness of your output by using a lower value for the
     * setting Sharpness or by enabling a noise reducer filter. The Softness setting
     * specifies the quantization matrices that the encoder uses. Keep the default
     * value, 0, to use the AWS Elemental default matrices. Choose a value from 17 to
     * 128 to use planar interpolation. Increasing values from 17 to 128 result in
     * increasing reduction of high-frequency data. The value 128 results in the
     * softest video.
     */
    inline int GetSoftness() const { return m_softness; }
    inline bool SoftnessHasBeenSet() const { return m_softnessHasBeenSet; }
    inline void SetSoftness(int value) { m_softnessHasBeenSet = true; m_softness = value; }
    inline Mpeg2Settings& WithSoftness(int value) { SetSoftness(value); return *this;}
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
    inline Mpeg2SpatialAdaptiveQuantization GetSpatialAdaptiveQuantization() const { return m_spatialAdaptiveQuantization; }
    inline bool SpatialAdaptiveQuantizationHasBeenSet() const { return m_spatialAdaptiveQuantizationHasBeenSet; }
    inline void SetSpatialAdaptiveQuantization(Mpeg2SpatialAdaptiveQuantization value) { m_spatialAdaptiveQuantizationHasBeenSet = true; m_spatialAdaptiveQuantization = value; }
    inline Mpeg2Settings& WithSpatialAdaptiveQuantization(Mpeg2SpatialAdaptiveQuantization value) { SetSpatialAdaptiveQuantization(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify whether this output's video uses the D10 syntax. Keep the default value
     * to not use the syntax. Related settings: When you choose D10 for your MXF
     * profile, you must also set this value to D10.
     */
    inline Mpeg2Syntax GetSyntax() const { return m_syntax; }
    inline bool SyntaxHasBeenSet() const { return m_syntaxHasBeenSet; }
    inline void SetSyntax(Mpeg2Syntax value) { m_syntaxHasBeenSet = true; m_syntax = value; }
    inline Mpeg2Settings& WithSyntax(Mpeg2Syntax value) { SetSyntax(value); return *this;}
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
    inline Mpeg2Telecine GetTelecine() const { return m_telecine; }
    inline bool TelecineHasBeenSet() const { return m_telecineHasBeenSet; }
    inline void SetTelecine(Mpeg2Telecine value) { m_telecineHasBeenSet = true; m_telecine = value; }
    inline Mpeg2Settings& WithTelecine(Mpeg2Telecine value) { SetTelecine(value); return *this;}
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
    inline Mpeg2TemporalAdaptiveQuantization GetTemporalAdaptiveQuantization() const { return m_temporalAdaptiveQuantization; }
    inline bool TemporalAdaptiveQuantizationHasBeenSet() const { return m_temporalAdaptiveQuantizationHasBeenSet; }
    inline void SetTemporalAdaptiveQuantization(Mpeg2TemporalAdaptiveQuantization value) { m_temporalAdaptiveQuantizationHasBeenSet = true; m_temporalAdaptiveQuantization = value; }
    inline Mpeg2Settings& WithTemporalAdaptiveQuantization(Mpeg2TemporalAdaptiveQuantization value) { SetTemporalAdaptiveQuantization(value); return *this;}
    ///@}
  private:

    Mpeg2AdaptiveQuantization m_adaptiveQuantization{Mpeg2AdaptiveQuantization::NOT_SET};
    bool m_adaptiveQuantizationHasBeenSet = false;

    int m_bitrate{0};
    bool m_bitrateHasBeenSet = false;

    Mpeg2CodecLevel m_codecLevel{Mpeg2CodecLevel::NOT_SET};
    bool m_codecLevelHasBeenSet = false;

    Mpeg2CodecProfile m_codecProfile{Mpeg2CodecProfile::NOT_SET};
    bool m_codecProfileHasBeenSet = false;

    Mpeg2DynamicSubGop m_dynamicSubGop{Mpeg2DynamicSubGop::NOT_SET};
    bool m_dynamicSubGopHasBeenSet = false;

    Mpeg2FramerateControl m_framerateControl{Mpeg2FramerateControl::NOT_SET};
    bool m_framerateControlHasBeenSet = false;

    Mpeg2FramerateConversionAlgorithm m_framerateConversionAlgorithm{Mpeg2FramerateConversionAlgorithm::NOT_SET};
    bool m_framerateConversionAlgorithmHasBeenSet = false;

    int m_framerateDenominator{0};
    bool m_framerateDenominatorHasBeenSet = false;

    int m_framerateNumerator{0};
    bool m_framerateNumeratorHasBeenSet = false;

    int m_gopClosedCadence{0};
    bool m_gopClosedCadenceHasBeenSet = false;

    double m_gopSize{0.0};
    bool m_gopSizeHasBeenSet = false;

    Mpeg2GopSizeUnits m_gopSizeUnits{Mpeg2GopSizeUnits::NOT_SET};
    bool m_gopSizeUnitsHasBeenSet = false;

    int m_hrdBufferFinalFillPercentage{0};
    bool m_hrdBufferFinalFillPercentageHasBeenSet = false;

    int m_hrdBufferInitialFillPercentage{0};
    bool m_hrdBufferInitialFillPercentageHasBeenSet = false;

    int m_hrdBufferSize{0};
    bool m_hrdBufferSizeHasBeenSet = false;

    Mpeg2InterlaceMode m_interlaceMode{Mpeg2InterlaceMode::NOT_SET};
    bool m_interlaceModeHasBeenSet = false;

    Mpeg2IntraDcPrecision m_intraDcPrecision{Mpeg2IntraDcPrecision::NOT_SET};
    bool m_intraDcPrecisionHasBeenSet = false;

    int m_maxBitrate{0};
    bool m_maxBitrateHasBeenSet = false;

    int m_minIInterval{0};
    bool m_minIIntervalHasBeenSet = false;

    int m_numberBFramesBetweenReferenceFrames{0};
    bool m_numberBFramesBetweenReferenceFramesHasBeenSet = false;

    Mpeg2ParControl m_parControl{Mpeg2ParControl::NOT_SET};
    bool m_parControlHasBeenSet = false;

    int m_parDenominator{0};
    bool m_parDenominatorHasBeenSet = false;

    int m_parNumerator{0};
    bool m_parNumeratorHasBeenSet = false;

    Aws::Vector<FrameMetricType> m_perFrameMetrics;
    bool m_perFrameMetricsHasBeenSet = false;

    Mpeg2QualityTuningLevel m_qualityTuningLevel{Mpeg2QualityTuningLevel::NOT_SET};
    bool m_qualityTuningLevelHasBeenSet = false;

    Mpeg2RateControlMode m_rateControlMode{Mpeg2RateControlMode::NOT_SET};
    bool m_rateControlModeHasBeenSet = false;

    Mpeg2ScanTypeConversionMode m_scanTypeConversionMode{Mpeg2ScanTypeConversionMode::NOT_SET};
    bool m_scanTypeConversionModeHasBeenSet = false;

    Mpeg2SceneChangeDetect m_sceneChangeDetect{Mpeg2SceneChangeDetect::NOT_SET};
    bool m_sceneChangeDetectHasBeenSet = false;

    Mpeg2SlowPal m_slowPal{Mpeg2SlowPal::NOT_SET};
    bool m_slowPalHasBeenSet = false;

    int m_softness{0};
    bool m_softnessHasBeenSet = false;

    Mpeg2SpatialAdaptiveQuantization m_spatialAdaptiveQuantization{Mpeg2SpatialAdaptiveQuantization::NOT_SET};
    bool m_spatialAdaptiveQuantizationHasBeenSet = false;

    Mpeg2Syntax m_syntax{Mpeg2Syntax::NOT_SET};
    bool m_syntaxHasBeenSet = false;

    Mpeg2Telecine m_telecine{Mpeg2Telecine::NOT_SET};
    bool m_telecineHasBeenSet = false;

    Mpeg2TemporalAdaptiveQuantization m_temporalAdaptiveQuantization{Mpeg2TemporalAdaptiveQuantization::NOT_SET};
    bool m_temporalAdaptiveQuantizationHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
