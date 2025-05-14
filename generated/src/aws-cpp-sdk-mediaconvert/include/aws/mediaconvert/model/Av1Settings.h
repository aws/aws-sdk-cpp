/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/Av1AdaptiveQuantization.h>
#include <aws/mediaconvert/model/Av1BitDepth.h>
#include <aws/mediaconvert/model/Av1FilmGrainSynthesis.h>
#include <aws/mediaconvert/model/Av1FramerateControl.h>
#include <aws/mediaconvert/model/Av1FramerateConversionAlgorithm.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/Av1QvbrSettings.h>
#include <aws/mediaconvert/model/Av1RateControlMode.h>
#include <aws/mediaconvert/model/Av1SpatialAdaptiveQuantization.h>
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
   * Required when you set Codec, under VideoDescription>CodecSettings to the value
   * AV1.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Av1Settings">AWS
   * API Reference</a></p>
   */
  class Av1Settings
  {
  public:
    AWS_MEDIACONVERT_API Av1Settings() = default;
    AWS_MEDIACONVERT_API Av1Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Av1Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify the strength of any adaptive quantization filters that you enable. The
     * value that you choose here applies to Spatial adaptive quantization.
     */
    inline Av1AdaptiveQuantization GetAdaptiveQuantization() const { return m_adaptiveQuantization; }
    inline bool AdaptiveQuantizationHasBeenSet() const { return m_adaptiveQuantizationHasBeenSet; }
    inline void SetAdaptiveQuantization(Av1AdaptiveQuantization value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = value; }
    inline Av1Settings& WithAdaptiveQuantization(Av1AdaptiveQuantization value) { SetAdaptiveQuantization(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the Bit depth. You can choose 8-bit or 10-bit.
     */
    inline Av1BitDepth GetBitDepth() const { return m_bitDepth; }
    inline bool BitDepthHasBeenSet() const { return m_bitDepthHasBeenSet; }
    inline void SetBitDepth(Av1BitDepth value) { m_bitDepthHasBeenSet = true; m_bitDepth = value; }
    inline Av1Settings& WithBitDepth(Av1BitDepth value) { SetBitDepth(value); return *this;}
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
    inline void SetFilmGrainSynthesis(Av1FilmGrainSynthesis value) { m_filmGrainSynthesisHasBeenSet = true; m_filmGrainSynthesis = value; }
    inline Av1Settings& WithFilmGrainSynthesis(Av1FilmGrainSynthesis value) { SetFilmGrainSynthesis(value); return *this;}
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
    inline void SetFramerateControl(Av1FramerateControl value) { m_framerateControlHasBeenSet = true; m_framerateControl = value; }
    inline Av1Settings& WithFramerateControl(Av1FramerateControl value) { SetFramerateControl(value); return *this;}
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
    inline void SetFramerateConversionAlgorithm(Av1FramerateConversionAlgorithm value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = value; }
    inline Av1Settings& WithFramerateConversionAlgorithm(Av1FramerateConversionAlgorithm value) { SetFramerateConversionAlgorithm(value); return *this;}
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
    inline Av1Settings& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}
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
    inline Av1Settings& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the GOP length (keyframe interval) in frames. With AV1, MediaConvert
     * doesn't support GOP length in seconds. This value must be greater than zero and
     * preferably equal to 1 + ((numberBFrames + 1) * x), where x is an integer value.
     */
    inline double GetGopSize() const { return m_gopSize; }
    inline bool GopSizeHasBeenSet() const { return m_gopSizeHasBeenSet; }
    inline void SetGopSize(double value) { m_gopSizeHasBeenSet = true; m_gopSize = value; }
    inline Av1Settings& WithGopSize(double value) { SetGopSize(value); return *this;}
    ///@}

    ///@{
    /**
     * Maximum bitrate in bits/second. For example, enter five megabits per second as
     * 5000000. Required when Rate control mode is QVBR.
     */
    inline int GetMaxBitrate() const { return m_maxBitrate; }
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }
    inline Av1Settings& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify from the number of B-frames, in the range of 0-15. For AV1 encoding, we
     * recommend using 7 or 15. Choose a larger number for a lower bitrate and smaller
     * file size; choose a smaller number for better video quality.
     */
    inline int GetNumberBFramesBetweenReferenceFrames() const { return m_numberBFramesBetweenReferenceFrames; }
    inline bool NumberBFramesBetweenReferenceFramesHasBeenSet() const { return m_numberBFramesBetweenReferenceFramesHasBeenSet; }
    inline void SetNumberBFramesBetweenReferenceFrames(int value) { m_numberBFramesBetweenReferenceFramesHasBeenSet = true; m_numberBFramesBetweenReferenceFrames = value; }
    inline Av1Settings& WithNumberBFramesBetweenReferenceFrames(int value) { SetNumberBFramesBetweenReferenceFrames(value); return *this;}
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
    Av1Settings& WithPerFrameMetrics(PerFrameMetricsT&& value) { SetPerFrameMetrics(std::forward<PerFrameMetricsT>(value)); return *this;}
    inline Av1Settings& AddPerFrameMetrics(FrameMetricType value) { m_perFrameMetricsHasBeenSet = true; m_perFrameMetrics.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * Settings for quality-defined variable bitrate encoding with the H.265 codec. Use
     * these settings only when you set QVBR for Rate control mode.
     */
    inline const Av1QvbrSettings& GetQvbrSettings() const { return m_qvbrSettings; }
    inline bool QvbrSettingsHasBeenSet() const { return m_qvbrSettingsHasBeenSet; }
    template<typename QvbrSettingsT = Av1QvbrSettings>
    void SetQvbrSettings(QvbrSettingsT&& value) { m_qvbrSettingsHasBeenSet = true; m_qvbrSettings = std::forward<QvbrSettingsT>(value); }
    template<typename QvbrSettingsT = Av1QvbrSettings>
    Av1Settings& WithQvbrSettings(QvbrSettingsT&& value) { SetQvbrSettings(std::forward<QvbrSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 'With AV1 outputs, for rate control mode, MediaConvert supports only
     * quality-defined variable bitrate (QVBR). You can''t use CBR or VBR.'
     */
    inline Av1RateControlMode GetRateControlMode() const { return m_rateControlMode; }
    inline bool RateControlModeHasBeenSet() const { return m_rateControlModeHasBeenSet; }
    inline void SetRateControlMode(Av1RateControlMode value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = value; }
    inline Av1Settings& WithRateControlMode(Av1RateControlMode value) { SetRateControlMode(value); return *this;}
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
    inline void SetSlices(int value) { m_slicesHasBeenSet = true; m_slices = value; }
    inline Av1Settings& WithSlices(int value) { SetSlices(value); return *this;}
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
    inline Av1SpatialAdaptiveQuantization GetSpatialAdaptiveQuantization() const { return m_spatialAdaptiveQuantization; }
    inline bool SpatialAdaptiveQuantizationHasBeenSet() const { return m_spatialAdaptiveQuantizationHasBeenSet; }
    inline void SetSpatialAdaptiveQuantization(Av1SpatialAdaptiveQuantization value) { m_spatialAdaptiveQuantizationHasBeenSet = true; m_spatialAdaptiveQuantization = value; }
    inline Av1Settings& WithSpatialAdaptiveQuantization(Av1SpatialAdaptiveQuantization value) { SetSpatialAdaptiveQuantization(value); return *this;}
    ///@}
  private:

    Av1AdaptiveQuantization m_adaptiveQuantization{Av1AdaptiveQuantization::NOT_SET};
    bool m_adaptiveQuantizationHasBeenSet = false;

    Av1BitDepth m_bitDepth{Av1BitDepth::NOT_SET};
    bool m_bitDepthHasBeenSet = false;

    Av1FilmGrainSynthesis m_filmGrainSynthesis{Av1FilmGrainSynthesis::NOT_SET};
    bool m_filmGrainSynthesisHasBeenSet = false;

    Av1FramerateControl m_framerateControl{Av1FramerateControl::NOT_SET};
    bool m_framerateControlHasBeenSet = false;

    Av1FramerateConversionAlgorithm m_framerateConversionAlgorithm{Av1FramerateConversionAlgorithm::NOT_SET};
    bool m_framerateConversionAlgorithmHasBeenSet = false;

    int m_framerateDenominator{0};
    bool m_framerateDenominatorHasBeenSet = false;

    int m_framerateNumerator{0};
    bool m_framerateNumeratorHasBeenSet = false;

    double m_gopSize{0.0};
    bool m_gopSizeHasBeenSet = false;

    int m_maxBitrate{0};
    bool m_maxBitrateHasBeenSet = false;

    int m_numberBFramesBetweenReferenceFrames{0};
    bool m_numberBFramesBetweenReferenceFramesHasBeenSet = false;

    Aws::Vector<FrameMetricType> m_perFrameMetrics;
    bool m_perFrameMetricsHasBeenSet = false;

    Av1QvbrSettings m_qvbrSettings;
    bool m_qvbrSettingsHasBeenSet = false;

    Av1RateControlMode m_rateControlMode{Av1RateControlMode::NOT_SET};
    bool m_rateControlModeHasBeenSet = false;

    int m_slices{0};
    bool m_slicesHasBeenSet = false;

    Av1SpatialAdaptiveQuantization m_spatialAdaptiveQuantization{Av1SpatialAdaptiveQuantization::NOT_SET};
    bool m_spatialAdaptiveQuantizationHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
