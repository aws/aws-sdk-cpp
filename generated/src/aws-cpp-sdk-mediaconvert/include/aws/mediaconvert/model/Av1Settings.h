/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/Av1AdaptiveQuantization.h>
#include <aws/mediaconvert/model/Av1BitDepth.h>
#include <aws/mediaconvert/model/Av1FastDecode.h>
#include <aws/mediaconvert/model/Av1FilmGrainSynthesis.h>
#include <aws/mediaconvert/model/Av1FramerateControl.h>
#include <aws/mediaconvert/model/Av1FramerateConversionAlgorithm.h>
#include <aws/mediaconvert/model/Av1GopSizeUnits.h>
#include <aws/mediaconvert/model/Av1QvbrSettings.h>
#include <aws/mediaconvert/model/Av1RateControlMode.h>
#include <aws/mediaconvert/model/Av1SceneChangeDetect.h>
#include <aws/mediaconvert/model/Av1SpatialAdaptiveQuantization.h>
#include <aws/mediaconvert/model/Av1TemporalAdaptiveQuantization.h>
#include <aws/mediaconvert/model/FrameMetricType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConvert {
namespace Model {

/**
 * Required when you set Codec, under VideoDescription>CodecSettings to the value
 * AV1.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Av1Settings">AWS
 * API Reference</a></p>
 */
class Av1Settings {
 public:
  AWS_MEDIACONVERT_API Av1Settings() = default;
  AWS_MEDIACONVERT_API Av1Settings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API Av1Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Specify whether MediaConvert applies adaptive quantization in this output. With
   * AV1, adaptive quantization is on or off; there is no strength to choose. Choose
   * Auto to let MediaConvert manage adaptive quantization for you. MediaConvert
   * enables both Spatial adaptive quantization and Temporal adaptive quantization,
   * and you can't specify either one yourself. To choose the filters yourself, set
   * Adaptive quantization to any of the strength values, Low, Medium, High, Higher
   * or Max, and then use the related settings Spatial adaptive quantization and
   * Temporal adaptive quantization. With AV1 these strength values all behave the
   * same, because AV1 adaptive quantization has no strength. If you don't want
   * MediaConvert to do any adaptive quantization in this transcode, set Adaptive
   * quantization to Off. Related settings: The value that you choose here applies to
   * the following settings: Av1SpatialAdaptiveQuantization and
   * Av1TemporalAdaptiveQuantization.
   */
  inline Av1AdaptiveQuantization GetAdaptiveQuantization() const { return m_adaptiveQuantization; }
  inline bool AdaptiveQuantizationHasBeenSet() const { return m_adaptiveQuantizationHasBeenSet; }
  inline void SetAdaptiveQuantization(Av1AdaptiveQuantization value) {
    m_adaptiveQuantizationHasBeenSet = true;
    m_adaptiveQuantization = value;
  }
  inline Av1Settings& WithAdaptiveQuantization(Av1AdaptiveQuantization value) {
    SetAdaptiveQuantization(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specify the Bit depth. You can choose 8-bit or 10-bit.
   */
  inline Av1BitDepth GetBitDepth() const { return m_bitDepth; }
  inline bool BitDepthHasBeenSet() const { return m_bitDepthHasBeenSet; }
  inline void SetBitDepth(Av1BitDepth value) {
    m_bitDepthHasBeenSet = true;
    m_bitDepth = value;
  }
  inline Av1Settings& WithBitDepth(Av1BitDepth value) {
    SetBitDepth(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specify the average bitrate in bits per second. Required when Rate control mode
   * is CBR.
   */
  inline int GetBitrate() const { return m_bitrate; }
  inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }
  inline void SetBitrate(int value) {
    m_bitrateHasBeenSet = true;
    m_bitrate = value;
  }
  inline Av1Settings& WithBitrate(int value) {
    SetBitrate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Choose Enabled to limit the AV1 feature set that MediaConvert uses, which
   * reduces the complexity of decoding your output in software. Keep the default
   * value, Disabled, unless your playback devices need the simpler bitstream.
   * Encoding with Fast decode is slightly slower and gives comparable video quality.
   */
  inline Av1FastDecode GetFastDecode() const { return m_fastDecode; }
  inline bool FastDecodeHasBeenSet() const { return m_fastDecodeHasBeenSet; }
  inline void SetFastDecode(Av1FastDecode value) {
    m_fastDecodeHasBeenSet = true;
    m_fastDecode = value;
  }
  inline Av1Settings& WithFastDecode(Av1FastDecode value) {
    SetFastDecode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Film grain synthesis replaces film grain present in your content with similar
   * quality synthesized AV1 film grain. We recommend that you choose Enabled to
   * reduce the bandwidth of your QVBR quality level 5, 6, 7, or 8 outputs. For QVBR
   * quality level 9 or 10 outputs we recommend that you keep the default value,
   * Disabled. When you include Film grain synthesis, you cannot include the Noise
   * reducer preprocessor.
   */
  inline Av1FilmGrainSynthesis GetFilmGrainSynthesis() const { return m_filmGrainSynthesis; }
  inline bool FilmGrainSynthesisHasBeenSet() const { return m_filmGrainSynthesisHasBeenSet; }
  inline void SetFilmGrainSynthesis(Av1FilmGrainSynthesis value) {
    m_filmGrainSynthesisHasBeenSet = true;
    m_filmGrainSynthesis = value;
  }
  inline Av1Settings& WithFilmGrainSynthesis(Av1FilmGrainSynthesis value) {
    SetFilmGrainSynthesis(value);
    return *this;
  }
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
  inline Av1FramerateControl GetFramerateControl() const { return m_framerateControl; }
  inline bool FramerateControlHasBeenSet() const { return m_framerateControlHasBeenSet; }
  inline void SetFramerateControl(Av1FramerateControl value) {
    m_framerateControlHasBeenSet = true;
    m_framerateControl = value;
  }
  inline Av1Settings& WithFramerateControl(Av1FramerateControl value) {
    SetFramerateControl(value);
    return *this;
  }
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
  inline Av1FramerateConversionAlgorithm GetFramerateConversionAlgorithm() const { return m_framerateConversionAlgorithm; }
  inline bool FramerateConversionAlgorithmHasBeenSet() const { return m_framerateConversionAlgorithmHasBeenSet; }
  inline void SetFramerateConversionAlgorithm(Av1FramerateConversionAlgorithm value) {
    m_framerateConversionAlgorithmHasBeenSet = true;
    m_framerateConversionAlgorithm = value;
  }
  inline Av1Settings& WithFramerateConversionAlgorithm(Av1FramerateConversionAlgorithm value) {
    SetFramerateConversionAlgorithm(value);
    return *this;
  }
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
  inline void SetFramerateDenominator(int value) {
    m_framerateDenominatorHasBeenSet = true;
    m_framerateDenominator = value;
  }
  inline Av1Settings& WithFramerateDenominator(int value) {
    SetFramerateDenominator(value);
    return *this;
  }
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
  inline void SetFramerateNumerator(int value) {
    m_framerateNumeratorHasBeenSet = true;
    m_framerateNumerator = value;
  }
  inline Av1Settings& WithFramerateNumerator(int value) {
    SetFramerateNumerator(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specify the GOP length (keyframe interval). Use GOP size units to say whether
   * this value is in frames or in seconds. This value must be greater than zero.
   * With AV1, MediaConvert can't choose the GOP length for you, so you must specify
   * it.
   */
  inline double GetGopSize() const { return m_gopSize; }
  inline bool GopSizeHasBeenSet() const { return m_gopSizeHasBeenSet; }
  inline void SetGopSize(double value) {
    m_gopSizeHasBeenSet = true;
    m_gopSize = value;
  }
  inline Av1Settings& WithGopSize(double value) {
    SetGopSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specify the units for GOP size. If you don't specify a value, MediaConvert
   * treats GOP size as a number of frames. With AV1, MediaConvert can't choose the
   * GOP length for you, so there is no automatic option here: specify the GOP length
   * in the related setting GOP size, in frames or in seconds.
   */
  inline Av1GopSizeUnits GetGopSizeUnits() const { return m_gopSizeUnits; }
  inline bool GopSizeUnitsHasBeenSet() const { return m_gopSizeUnitsHasBeenSet; }
  inline void SetGopSizeUnits(Av1GopSizeUnits value) {
    m_gopSizeUnitsHasBeenSet = true;
    m_gopSizeUnits = value;
  }
  inline Av1Settings& WithGopSizeUnits(Av1GopSizeUnits value) {
    SetGopSizeUnits(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Maximum bitrate in bits/second. For example, enter five megabits per second as
   * 5000000. Required when Rate control mode is QVBR.
   */
  inline int GetMaxBitrate() const { return m_maxBitrate; }
  inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }
  inline void SetMaxBitrate(int value) {
    m_maxBitrateHasBeenSet = true;
    m_maxBitrate = value;
  }
  inline Av1Settings& WithMaxBitrate(int value) {
    SetMaxBitrate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specify the number of B-frames between reference frames, in the range of 0-15.
   * For AV1 encoding, we recommend the default value, 15, which gives the lowest
   * bitrate and smallest file size. Choose a smaller number for better video quality
   * at a higher bitrate.
   */
  inline int GetNumberBFramesBetweenReferenceFrames() const { return m_numberBFramesBetweenReferenceFrames; }
  inline bool NumberBFramesBetweenReferenceFramesHasBeenSet() const { return m_numberBFramesBetweenReferenceFramesHasBeenSet; }
  inline void SetNumberBFramesBetweenReferenceFrames(int value) {
    m_numberBFramesBetweenReferenceFramesHasBeenSet = true;
    m_numberBFramesBetweenReferenceFrames = value;
  }
  inline Av1Settings& WithNumberBFramesBetweenReferenceFrames(int value) {
    SetNumberBFramesBetweenReferenceFrames(value);
    return *this;
  }
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
   * uses the QVBR rate control mode. * SHOT_CHANGE: Shot Changes
   */
  inline const Aws::Vector<FrameMetricType>& GetPerFrameMetrics() const { return m_perFrameMetrics; }
  inline bool PerFrameMetricsHasBeenSet() const { return m_perFrameMetricsHasBeenSet; }
  template <typename PerFrameMetricsT = Aws::Vector<FrameMetricType>>
  void SetPerFrameMetrics(PerFrameMetricsT&& value) {
    m_perFrameMetricsHasBeenSet = true;
    m_perFrameMetrics = std::forward<PerFrameMetricsT>(value);
  }
  template <typename PerFrameMetricsT = Aws::Vector<FrameMetricType>>
  Av1Settings& WithPerFrameMetrics(PerFrameMetricsT&& value) {
    SetPerFrameMetrics(std::forward<PerFrameMetricsT>(value));
    return *this;
  }
  inline Av1Settings& AddPerFrameMetrics(FrameMetricType value) {
    m_perFrameMetricsHasBeenSet = true;
    m_perFrameMetrics.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Settings for quality-defined variable bitrate encoding with the AV1 codec. Use
   * these settings only when you set QVBR for Rate control mode.
   */
  inline const Av1QvbrSettings& GetQvbrSettings() const { return m_qvbrSettings; }
  inline bool QvbrSettingsHasBeenSet() const { return m_qvbrSettingsHasBeenSet; }
  template <typename QvbrSettingsT = Av1QvbrSettings>
  void SetQvbrSettings(QvbrSettingsT&& value) {
    m_qvbrSettingsHasBeenSet = true;
    m_qvbrSettings = std::forward<QvbrSettingsT>(value);
  }
  template <typename QvbrSettingsT = Av1QvbrSettings>
  Av1Settings& WithQvbrSettings(QvbrSettingsT&& value) {
    SetQvbrSettings(std::forward<QvbrSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * 'With AV1 outputs, for rate control mode, MediaConvert supports quality-defined
   * variable bitrate (QVBR) and constant bitrate (CBR). You can''t use VBR.'
   */
  inline Av1RateControlMode GetRateControlMode() const { return m_rateControlMode; }
  inline bool RateControlModeHasBeenSet() const { return m_rateControlModeHasBeenSet; }
  inline void SetRateControlMode(Av1RateControlMode value) {
    m_rateControlModeHasBeenSet = true;
    m_rateControlMode = value;
  }
  inline Av1Settings& WithRateControlMode(Av1RateControlMode value) {
    SetRateControlMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Keep the default value, Enabled, to have MediaConvert insert I-frames at scene
   * changes that it automatically detects, which improves video quality. Choose
   * Disabled if you need a strictly fixed keyframe cadence instead. With AV1,
   * MediaConvert doesn't support Transition detection. Transition detection is
   * accepted for backward compatibility but behaves exactly the same as Enabled, so
   * we recommend that you use Enabled instead. It also keeps the QVBR requirement it
   * has for other codecs: if you choose Transition detection in an AV1 output, Rate
   * control mode must be QVBR. Choose Enabled to get the same result with any rate
   * control mode.
   */
  inline Av1SceneChangeDetect GetSceneChangeDetect() const { return m_sceneChangeDetect; }
  inline bool SceneChangeDetectHasBeenSet() const { return m_sceneChangeDetectHasBeenSet; }
  inline void SetSceneChangeDetect(Av1SceneChangeDetect value) {
    m_sceneChangeDetectHasBeenSet = true;
    m_sceneChangeDetect = value;
  }
  inline Av1Settings& WithSceneChangeDetect(Av1SceneChangeDetect value) {
    SetSceneChangeDetect(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specify the number of slices per picture. This value must be 1, 2, 4, 8, 16, or
   * 32. For progressive pictures, this value must be less than or equal to the
   * number of macroblock rows. For interlaced pictures, this value must be less than
   * or equal to half the number of macroblock rows.
   */
  inline int GetSlices() const { return m_slices; }
  inline bool SlicesHasBeenSet() const { return m_slicesHasBeenSet; }
  inline void SetSlices(int value) {
    m_slicesHasBeenSet = true;
    m_slices = value;
  }
  inline Av1Settings& WithSlices(int value) {
    SetSlices(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Optional. Specify the duration, in milliseconds, of the sliding window over
   * which MediaConvert enforces your Peak bitrate. When you specify a Peak bitrate
   * but omit this value, MediaConvert uses a default sliding window of 1000.
   */
  inline int GetSlidingWindowMs() const { return m_slidingWindowMs; }
  inline bool SlidingWindowMsHasBeenSet() const { return m_slidingWindowMsHasBeenSet; }
  inline void SetSlidingWindowMs(int value) {
    m_slidingWindowMsHasBeenSet = true;
    m_slidingWindowMs = value;
  }
  inline Av1Settings& WithSlidingWindowMs(int value) {
    SetSlidingWindowMs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Optional. Specify an instantaneous peak bitrate ceiling, in bits/second, that
   * MediaConvert enforces over the sliding window set by Peak bitrate window. For
   * example, enter fifty megabits per second as 50000000. Applies in the QVBR rate
   * control mode. When you specify a value below Max bitrate, MediaConvert raises it
   * to Max bitrate.
   */
  inline int GetSlidingWindowPeakBitrate() const { return m_slidingWindowPeakBitrate; }
  inline bool SlidingWindowPeakBitrateHasBeenSet() const { return m_slidingWindowPeakBitrateHasBeenSet; }
  inline void SetSlidingWindowPeakBitrate(int value) {
    m_slidingWindowPeakBitrateHasBeenSet = true;
    m_slidingWindowPeakBitrate = value;
  }
  inline Av1Settings& WithSlidingWindowPeakBitrate(int value) {
    SetSlidingWindowPeakBitrate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Only use this setting when you set Adaptive quantization to one of the strength
   * values, Low, Medium, High, Higher or Max. When you set Adaptive quantization to
   * Auto, MediaConvert enables this feature for you and you can't specify it
   * manually. When you enable adaptive quantization, the default value for
   * Av1SpatialAdaptiveQuantization is Enabled. Keep this default value to adjust
   * quantization within each frame based on spatial variation of content complexity.
   * When you enable this feature, the encoder uses fewer bits on areas that can
   * sustain more distortion with no noticeable visual degradation and uses more bits
   * on areas where any small distortion will be noticeable. For example, complex
   * textured blocks are encoded with fewer bits and smooth textured blocks are
   * encoded with more bits. Enabling this feature will almost always improve your
   * video quality. Note, though, that this feature doesn't take into account where
   * the viewer's attention is likely to be. If viewers are likely to be focusing
   * their attention on a part of the screen with a lot of complex texture, you might
   * choose to disable this feature. Related setting: With AV1 this filter is on or
   * off; the Adaptive quantization value does not change its strength.
   */
  inline Av1SpatialAdaptiveQuantization GetSpatialAdaptiveQuantization() const { return m_spatialAdaptiveQuantization; }
  inline bool SpatialAdaptiveQuantizationHasBeenSet() const { return m_spatialAdaptiveQuantizationHasBeenSet; }
  inline void SetSpatialAdaptiveQuantization(Av1SpatialAdaptiveQuantization value) {
    m_spatialAdaptiveQuantizationHasBeenSet = true;
    m_spatialAdaptiveQuantization = value;
  }
  inline Av1Settings& WithSpatialAdaptiveQuantization(Av1SpatialAdaptiveQuantization value) {
    SetSpatialAdaptiveQuantization(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Only use this setting when you set Adaptive quantization to one of the strength
   * values, Low, Medium, High, Higher or Max. When you set Adaptive quantization to
   * Auto, MediaConvert enables this feature for you and you can't specify it
   * manually. When you enable adaptive quantization, the default value for
   * Av1TemporalAdaptiveQuantization is Enabled. Keep this default value to adjust
   * quantization within each frame based on temporal variation of content
   * complexity. When you enable this feature, the encoder uses fewer bits on areas
   * of the frame that aren't moving and uses more bits on complex objects with sharp
   * edges that move a lot. For example, this feature improves the readability of
   * text tickers on newscasts and scoreboards on sports matches. Enabling this
   * feature will almost always improve your video quality. Note, though, that this
   * feature doesn't take into account where the viewer's attention is likely to be.
   * If viewers are likely to be focusing their attention on a part of the screen
   * that doesn't have moving objects with sharp edges, such as sports athletes'
   * faces, you might choose to set Av1TemporalAdaptiveQuantization to Disabled.
   * Related setting: With AV1 this filter is on or off; the Adaptive quantization
   * value does not change its strength.
   */
  inline Av1TemporalAdaptiveQuantization GetTemporalAdaptiveQuantization() const { return m_temporalAdaptiveQuantization; }
  inline bool TemporalAdaptiveQuantizationHasBeenSet() const { return m_temporalAdaptiveQuantizationHasBeenSet; }
  inline void SetTemporalAdaptiveQuantization(Av1TemporalAdaptiveQuantization value) {
    m_temporalAdaptiveQuantizationHasBeenSet = true;
    m_temporalAdaptiveQuantization = value;
  }
  inline Av1Settings& WithTemporalAdaptiveQuantization(Av1TemporalAdaptiveQuantization value) {
    SetTemporalAdaptiveQuantization(value);
    return *this;
  }
  ///@}
 private:
  Av1AdaptiveQuantization m_adaptiveQuantization{Av1AdaptiveQuantization::NOT_SET};

  Av1BitDepth m_bitDepth{Av1BitDepth::NOT_SET};

  int m_bitrate{0};

  Av1FastDecode m_fastDecode{Av1FastDecode::NOT_SET};

  Av1FilmGrainSynthesis m_filmGrainSynthesis{Av1FilmGrainSynthesis::NOT_SET};

  Av1FramerateControl m_framerateControl{Av1FramerateControl::NOT_SET};

  Av1FramerateConversionAlgorithm m_framerateConversionAlgorithm{Av1FramerateConversionAlgorithm::NOT_SET};

  int m_framerateDenominator{0};

  int m_framerateNumerator{0};

  double m_gopSize{0.0};

  Av1GopSizeUnits m_gopSizeUnits{Av1GopSizeUnits::NOT_SET};

  int m_maxBitrate{0};

  int m_numberBFramesBetweenReferenceFrames{0};

  Aws::Vector<FrameMetricType> m_perFrameMetrics;

  Av1QvbrSettings m_qvbrSettings;

  Av1RateControlMode m_rateControlMode{Av1RateControlMode::NOT_SET};

  Av1SceneChangeDetect m_sceneChangeDetect{Av1SceneChangeDetect::NOT_SET};

  int m_slices{0};

  int m_slidingWindowMs{0};

  int m_slidingWindowPeakBitrate{0};

  Av1SpatialAdaptiveQuantization m_spatialAdaptiveQuantization{Av1SpatialAdaptiveQuantization::NOT_SET};

  Av1TemporalAdaptiveQuantization m_temporalAdaptiveQuantization{Av1TemporalAdaptiveQuantization::NOT_SET};
  bool m_adaptiveQuantizationHasBeenSet = false;
  bool m_bitDepthHasBeenSet = false;
  bool m_bitrateHasBeenSet = false;
  bool m_fastDecodeHasBeenSet = false;
  bool m_filmGrainSynthesisHasBeenSet = false;
  bool m_framerateControlHasBeenSet = false;
  bool m_framerateConversionAlgorithmHasBeenSet = false;
  bool m_framerateDenominatorHasBeenSet = false;
  bool m_framerateNumeratorHasBeenSet = false;
  bool m_gopSizeHasBeenSet = false;
  bool m_gopSizeUnitsHasBeenSet = false;
  bool m_maxBitrateHasBeenSet = false;
  bool m_numberBFramesBetweenReferenceFramesHasBeenSet = false;
  bool m_perFrameMetricsHasBeenSet = false;
  bool m_qvbrSettingsHasBeenSet = false;
  bool m_rateControlModeHasBeenSet = false;
  bool m_sceneChangeDetectHasBeenSet = false;
  bool m_slicesHasBeenSet = false;
  bool m_slidingWindowMsHasBeenSet = false;
  bool m_slidingWindowPeakBitrateHasBeenSet = false;
  bool m_spatialAdaptiveQuantizationHasBeenSet = false;
  bool m_temporalAdaptiveQuantizationHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
