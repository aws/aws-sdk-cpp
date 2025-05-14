/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AvcIntraClass.h>
#include <aws/mediaconvert/model/AvcIntraUhdSettings.h>
#include <aws/mediaconvert/model/AvcIntraFramerateControl.h>
#include <aws/mediaconvert/model/AvcIntraFramerateConversionAlgorithm.h>
#include <aws/mediaconvert/model/AvcIntraInterlaceMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/AvcIntraScanTypeConversionMode.h>
#include <aws/mediaconvert/model/AvcIntraSlowPal.h>
#include <aws/mediaconvert/model/AvcIntraTelecine.h>
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
   * Required when you choose AVC-Intra for your output video codec. For more
   * information about the AVC-Intra settings, see the relevant specification. For
   * detailed information about SD and HD in AVC-Intra, see
   * https://ieeexplore.ieee.org/document/7290936. For information about 4K/2K in
   * AVC-Intra, see
   * https://pro-av.panasonic.net/en/avc-ultra/AVC-ULTRAoverview.pdf.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AvcIntraSettings">AWS
   * API Reference</a></p>
   */
  class AvcIntraSettings
  {
  public:
    AWS_MEDIACONVERT_API AvcIntraSettings() = default;
    AWS_MEDIACONVERT_API AvcIntraSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API AvcIntraSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify the AVC-Intra class of your output. The AVC-Intra class selection
     * determines the output video bit rate depending on the frame rate of the output.
     * Outputs with higher class values have higher bitrates and improved image
     * quality. Note that for Class 4K/2K, MediaConvert supports only 4:2:2 chroma
     * subsampling.
     */
    inline AvcIntraClass GetAvcIntraClass() const { return m_avcIntraClass; }
    inline bool AvcIntraClassHasBeenSet() const { return m_avcIntraClassHasBeenSet; }
    inline void SetAvcIntraClass(AvcIntraClass value) { m_avcIntraClassHasBeenSet = true; m_avcIntraClass = value; }
    inline AvcIntraSettings& WithAvcIntraClass(AvcIntraClass value) { SetAvcIntraClass(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional when you set AVC-Intra class to Class 4K/2K. When you set AVC-Intra
     * class to a different value, this object isn't allowed.
     */
    inline const AvcIntraUhdSettings& GetAvcIntraUhdSettings() const { return m_avcIntraUhdSettings; }
    inline bool AvcIntraUhdSettingsHasBeenSet() const { return m_avcIntraUhdSettingsHasBeenSet; }
    template<typename AvcIntraUhdSettingsT = AvcIntraUhdSettings>
    void SetAvcIntraUhdSettings(AvcIntraUhdSettingsT&& value) { m_avcIntraUhdSettingsHasBeenSet = true; m_avcIntraUhdSettings = std::forward<AvcIntraUhdSettingsT>(value); }
    template<typename AvcIntraUhdSettingsT = AvcIntraUhdSettings>
    AvcIntraSettings& WithAvcIntraUhdSettings(AvcIntraUhdSettingsT&& value) { SetAvcIntraUhdSettings(std::forward<AvcIntraUhdSettingsT>(value)); return *this;}
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
    inline AvcIntraFramerateControl GetFramerateControl() const { return m_framerateControl; }
    inline bool FramerateControlHasBeenSet() const { return m_framerateControlHasBeenSet; }
    inline void SetFramerateControl(AvcIntraFramerateControl value) { m_framerateControlHasBeenSet = true; m_framerateControl = value; }
    inline AvcIntraSettings& WithFramerateControl(AvcIntraFramerateControl value) { SetFramerateControl(value); return *this;}
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
    inline AvcIntraFramerateConversionAlgorithm GetFramerateConversionAlgorithm() const { return m_framerateConversionAlgorithm; }
    inline bool FramerateConversionAlgorithmHasBeenSet() const { return m_framerateConversionAlgorithmHasBeenSet; }
    inline void SetFramerateConversionAlgorithm(AvcIntraFramerateConversionAlgorithm value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = value; }
    inline AvcIntraSettings& WithFramerateConversionAlgorithm(AvcIntraFramerateConversionAlgorithm value) { SetFramerateConversionAlgorithm(value); return *this;}
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
    inline AvcIntraSettings& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}
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
    inline AvcIntraSettings& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}
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
    inline AvcIntraInterlaceMode GetInterlaceMode() const { return m_interlaceMode; }
    inline bool InterlaceModeHasBeenSet() const { return m_interlaceModeHasBeenSet; }
    inline void SetInterlaceMode(AvcIntraInterlaceMode value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = value; }
    inline AvcIntraSettings& WithInterlaceMode(AvcIntraInterlaceMode value) { SetInterlaceMode(value); return *this;}
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
    AvcIntraSettings& WithPerFrameMetrics(PerFrameMetricsT&& value) { SetPerFrameMetrics(std::forward<PerFrameMetricsT>(value)); return *this;}
    inline AvcIntraSettings& AddPerFrameMetrics(FrameMetricType value) { m_perFrameMetricsHasBeenSet = true; m_perFrameMetrics.push_back(value); return *this; }
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
    inline AvcIntraScanTypeConversionMode GetScanTypeConversionMode() const { return m_scanTypeConversionMode; }
    inline bool ScanTypeConversionModeHasBeenSet() const { return m_scanTypeConversionModeHasBeenSet; }
    inline void SetScanTypeConversionMode(AvcIntraScanTypeConversionMode value) { m_scanTypeConversionModeHasBeenSet = true; m_scanTypeConversionMode = value; }
    inline AvcIntraSettings& WithScanTypeConversionMode(AvcIntraScanTypeConversionMode value) { SetScanTypeConversionMode(value); return *this;}
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
    inline AvcIntraSlowPal GetSlowPal() const { return m_slowPal; }
    inline bool SlowPalHasBeenSet() const { return m_slowPalHasBeenSet; }
    inline void SetSlowPal(AvcIntraSlowPal value) { m_slowPalHasBeenSet = true; m_slowPal = value; }
    inline AvcIntraSettings& WithSlowPal(AvcIntraSlowPal value) { SetSlowPal(value); return *this;}
    ///@}

    ///@{
    /**
     * When you do frame rate conversion from 23.976 frames per second (fps) to 29.97
     * fps, and your output scan type is interlaced, you can optionally enable hard
     * telecine to create a smoother picture. When you keep the default value, None,
     * MediaConvert does a standard frame rate conversion to 29.97 without doing
     * anything with the field polarity to create a smoother picture.
     */
    inline AvcIntraTelecine GetTelecine() const { return m_telecine; }
    inline bool TelecineHasBeenSet() const { return m_telecineHasBeenSet; }
    inline void SetTelecine(AvcIntraTelecine value) { m_telecineHasBeenSet = true; m_telecine = value; }
    inline AvcIntraSettings& WithTelecine(AvcIntraTelecine value) { SetTelecine(value); return *this;}
    ///@}
  private:

    AvcIntraClass m_avcIntraClass{AvcIntraClass::NOT_SET};
    bool m_avcIntraClassHasBeenSet = false;

    AvcIntraUhdSettings m_avcIntraUhdSettings;
    bool m_avcIntraUhdSettingsHasBeenSet = false;

    AvcIntraFramerateControl m_framerateControl{AvcIntraFramerateControl::NOT_SET};
    bool m_framerateControlHasBeenSet = false;

    AvcIntraFramerateConversionAlgorithm m_framerateConversionAlgorithm{AvcIntraFramerateConversionAlgorithm::NOT_SET};
    bool m_framerateConversionAlgorithmHasBeenSet = false;

    int m_framerateDenominator{0};
    bool m_framerateDenominatorHasBeenSet = false;

    int m_framerateNumerator{0};
    bool m_framerateNumeratorHasBeenSet = false;

    AvcIntraInterlaceMode m_interlaceMode{AvcIntraInterlaceMode::NOT_SET};
    bool m_interlaceModeHasBeenSet = false;

    Aws::Vector<FrameMetricType> m_perFrameMetrics;
    bool m_perFrameMetricsHasBeenSet = false;

    AvcIntraScanTypeConversionMode m_scanTypeConversionMode{AvcIntraScanTypeConversionMode::NOT_SET};
    bool m_scanTypeConversionModeHasBeenSet = false;

    AvcIntraSlowPal m_slowPal{AvcIntraSlowPal::NOT_SET};
    bool m_slowPalHasBeenSet = false;

    AvcIntraTelecine m_telecine{AvcIntraTelecine::NOT_SET};
    bool m_telecineHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
