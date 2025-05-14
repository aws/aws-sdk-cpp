/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/XavcAdaptiveQuantization.h>
#include <aws/mediaconvert/model/XavcEntropyEncoding.h>
#include <aws/mediaconvert/model/XavcFramerateControl.h>
#include <aws/mediaconvert/model/XavcFramerateConversionAlgorithm.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/XavcProfile.h>
#include <aws/mediaconvert/model/XavcSlowPal.h>
#include <aws/mediaconvert/model/XavcSpatialAdaptiveQuantization.h>
#include <aws/mediaconvert/model/XavcTemporalAdaptiveQuantization.h>
#include <aws/mediaconvert/model/Xavc4kIntraCbgProfileSettings.h>
#include <aws/mediaconvert/model/Xavc4kIntraVbrProfileSettings.h>
#include <aws/mediaconvert/model/Xavc4kProfileSettings.h>
#include <aws/mediaconvert/model/XavcHdIntraCbgProfileSettings.h>
#include <aws/mediaconvert/model/XavcHdProfileSettings.h>
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
   * Required when you set Codec to the value XAVC.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/XavcSettings">AWS
   * API Reference</a></p>
   */
  class XavcSettings
  {
  public:
    AWS_MEDIACONVERT_API XavcSettings() = default;
    AWS_MEDIACONVERT_API XavcSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API XavcSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Keep the default value, Auto, for this setting to have MediaConvert
     * automatically apply the best types of quantization for your video content. When
     * you want to apply your quantization settings manually, you must set Adaptive
     * quantization to a value other than Auto. Use this setting to specify the
     * strength of any adaptive quantization filters that you enable. If you don't want
     * MediaConvert to do any adaptive quantization in this transcode, set Adaptive
     * quantization to Off. Related settings: The value that you choose here applies to
     * the following settings: Flicker adaptive quantization
     * (flickerAdaptiveQuantization), Spatial adaptive quantization, and Temporal
     * adaptive quantization.
     */
    inline XavcAdaptiveQuantization GetAdaptiveQuantization() const { return m_adaptiveQuantization; }
    inline bool AdaptiveQuantizationHasBeenSet() const { return m_adaptiveQuantizationHasBeenSet; }
    inline void SetAdaptiveQuantization(XavcAdaptiveQuantization value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = value; }
    inline XavcSettings& WithAdaptiveQuantization(XavcAdaptiveQuantization value) { SetAdaptiveQuantization(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Choose a specific entropy encoding mode only when you want to override
     * XAVC recommendations. If you choose the value auto, MediaConvert uses the mode
     * that the XAVC file format specifies given this output's operating point.
     */
    inline XavcEntropyEncoding GetEntropyEncoding() const { return m_entropyEncoding; }
    inline bool EntropyEncodingHasBeenSet() const { return m_entropyEncodingHasBeenSet; }
    inline void SetEntropyEncoding(XavcEntropyEncoding value) { m_entropyEncodingHasBeenSet = true; m_entropyEncoding = value; }
    inline XavcSettings& WithEntropyEncoding(XavcEntropyEncoding value) { SetEntropyEncoding(value); return *this;}
    ///@}

    ///@{
    /**
     * If you are using the console, use the Frame rate setting to specify the frame
     * rate for this output. If you want to keep the same frame rate as the input
     * video, choose Follow source. If you want to do frame rate conversion, choose a
     * frame rate from the dropdown list. The framerates shown in the dropdown list are
     * decimal approximations of fractions.
     */
    inline XavcFramerateControl GetFramerateControl() const { return m_framerateControl; }
    inline bool FramerateControlHasBeenSet() const { return m_framerateControlHasBeenSet; }
    inline void SetFramerateControl(XavcFramerateControl value) { m_framerateControlHasBeenSet = true; m_framerateControl = value; }
    inline XavcSettings& WithFramerateControl(XavcFramerateControl value) { SetFramerateControl(value); return *this;}
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
    inline XavcFramerateConversionAlgorithm GetFramerateConversionAlgorithm() const { return m_framerateConversionAlgorithm; }
    inline bool FramerateConversionAlgorithmHasBeenSet() const { return m_framerateConversionAlgorithmHasBeenSet; }
    inline void SetFramerateConversionAlgorithm(XavcFramerateConversionAlgorithm value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = value; }
    inline XavcSettings& WithFramerateConversionAlgorithm(XavcFramerateConversionAlgorithm value) { SetFramerateConversionAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example, 24000 / 1001 = 23.976 fps. Use
     * FramerateDenominator to specify the denominator of this fraction. In this
     * example, use 1001 for the value of FramerateDenominator. When you use the
     * console for transcode jobs that use frame rate conversion, provide the value as
     * a decimal number for Frame rate. In this example, specify 23.976.
     */
    inline int GetFramerateDenominator() const { return m_framerateDenominator; }
    inline bool FramerateDenominatorHasBeenSet() const { return m_framerateDenominatorHasBeenSet; }
    inline void SetFramerateDenominator(int value) { m_framerateDenominatorHasBeenSet = true; m_framerateDenominator = value; }
    inline XavcSettings& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}
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
    inline XavcSettings& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}
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
    XavcSettings& WithPerFrameMetrics(PerFrameMetricsT&& value) { SetPerFrameMetrics(std::forward<PerFrameMetricsT>(value)); return *this;}
    inline XavcSettings& AddPerFrameMetrics(FrameMetricType value) { m_perFrameMetricsHasBeenSet = true; m_perFrameMetrics.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * Specify the XAVC profile for this output. For more information, see the Sony
     * documentation at https://www.xavc-info.org/. Note that MediaConvert doesn't
     * support the interlaced video XAVC operating points for XAVC_HD_INTRA_CBG. To
     * create an interlaced XAVC output, choose the profile XAVC_HD.
     */
    inline XavcProfile GetProfile() const { return m_profile; }
    inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }
    inline void SetProfile(XavcProfile value) { m_profileHasBeenSet = true; m_profile = value; }
    inline XavcSettings& WithProfile(XavcProfile value) { SetProfile(value); return *this;}
    ///@}

    ///@{
    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output by relabeling the video
     * frames and resampling your audio. Note that enabling this setting will slightly
     * reduce the duration of your video. Related settings: You must also set Frame
     * rate to 25.
     */
    inline XavcSlowPal GetSlowPal() const { return m_slowPal; }
    inline bool SlowPalHasBeenSet() const { return m_slowPalHasBeenSet; }
    inline void SetSlowPal(XavcSlowPal value) { m_slowPalHasBeenSet = true; m_slowPal = value; }
    inline XavcSettings& WithSlowPal(XavcSlowPal value) { SetSlowPal(value); return *this;}
    ///@}

    ///@{
    /**
     * Ignore this setting unless your downstream workflow requires that you specify it
     * explicitly. Otherwise, we recommend that you adjust the softness of your output
     * by using a lower value for the setting Sharpness or by enabling a noise reducer
     * filter. The Softness setting specifies the quantization matrices that the
     * encoder uses. Keep the default value, 0, for flat quantization. Choose the value
     * 1 or 16 to use the default JVT softening quantization matricies from the H.264
     * specification. Choose a value from 17 to 128 to use planar interpolation.
     * Increasing values from 17 to 128 result in increasing reduction of
     * high-frequency data. The value 128 results in the softest video.
     */
    inline int GetSoftness() const { return m_softness; }
    inline bool SoftnessHasBeenSet() const { return m_softnessHasBeenSet; }
    inline void SetSoftness(int value) { m_softnessHasBeenSet = true; m_softness = value; }
    inline XavcSettings& WithSoftness(int value) { SetSoftness(value); return *this;}
    ///@}

    ///@{
    /**
     * The best way to set up adaptive quantization is to keep the default value, Auto,
     * for the setting Adaptive quantization. When you do so, MediaConvert
     * automatically applies the best types of quantization for your video content.
     * Include this setting in your JSON job specification only when you choose to
     * change the default value for Adaptive quantization. For this setting, keep the
     * default value, Enabled, to adjust quantization within each frame based on
     * spatial variation of content complexity. When you enable this feature, the
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
    inline XavcSpatialAdaptiveQuantization GetSpatialAdaptiveQuantization() const { return m_spatialAdaptiveQuantization; }
    inline bool SpatialAdaptiveQuantizationHasBeenSet() const { return m_spatialAdaptiveQuantizationHasBeenSet; }
    inline void SetSpatialAdaptiveQuantization(XavcSpatialAdaptiveQuantization value) { m_spatialAdaptiveQuantizationHasBeenSet = true; m_spatialAdaptiveQuantization = value; }
    inline XavcSettings& WithSpatialAdaptiveQuantization(XavcSpatialAdaptiveQuantization value) { SetSpatialAdaptiveQuantization(value); return *this;}
    ///@}

    ///@{
    /**
     * The best way to set up adaptive quantization is to keep the default value, Auto,
     * for the setting Adaptive quantization. When you do so, MediaConvert
     * automatically applies the best types of quantization for your video content.
     * Include this setting in your JSON job specification only when you choose to
     * change the default value for Adaptive quantization. For this setting, keep the
     * default value, Enabled, to adjust quantization within each frame based on
     * temporal variation of content complexity. When you enable this feature, the
     * encoder uses fewer bits on areas of the frame that aren't moving and uses more
     * bits on complex objects with sharp edges that move a lot. For example, this
     * feature improves the readability of text tickers on newscasts and scoreboards on
     * sports matches. Enabling this feature will almost always improve your video
     * quality. Note, though, that this feature doesn't take into account where the
     * viewer's attention is likely to be. If viewers are likely to be focusing their
     * attention on a part of the screen that doesn't have moving objects with sharp
     * edges, such as sports athletes' faces, you might choose to disable this feature.
     * Related setting: When you enable temporal adaptive quantization, adjust the
     * strength of the filter with the setting Adaptive quantization.
     */
    inline XavcTemporalAdaptiveQuantization GetTemporalAdaptiveQuantization() const { return m_temporalAdaptiveQuantization; }
    inline bool TemporalAdaptiveQuantizationHasBeenSet() const { return m_temporalAdaptiveQuantizationHasBeenSet; }
    inline void SetTemporalAdaptiveQuantization(XavcTemporalAdaptiveQuantization value) { m_temporalAdaptiveQuantizationHasBeenSet = true; m_temporalAdaptiveQuantization = value; }
    inline XavcSettings& WithTemporalAdaptiveQuantization(XavcTemporalAdaptiveQuantization value) { SetTemporalAdaptiveQuantization(value); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Profile to the value XAVC_4K_INTRA_CBG.
     */
    inline const Xavc4kIntraCbgProfileSettings& GetXavc4kIntraCbgProfileSettings() const { return m_xavc4kIntraCbgProfileSettings; }
    inline bool Xavc4kIntraCbgProfileSettingsHasBeenSet() const { return m_xavc4kIntraCbgProfileSettingsHasBeenSet; }
    template<typename Xavc4kIntraCbgProfileSettingsT = Xavc4kIntraCbgProfileSettings>
    void SetXavc4kIntraCbgProfileSettings(Xavc4kIntraCbgProfileSettingsT&& value) { m_xavc4kIntraCbgProfileSettingsHasBeenSet = true; m_xavc4kIntraCbgProfileSettings = std::forward<Xavc4kIntraCbgProfileSettingsT>(value); }
    template<typename Xavc4kIntraCbgProfileSettingsT = Xavc4kIntraCbgProfileSettings>
    XavcSettings& WithXavc4kIntraCbgProfileSettings(Xavc4kIntraCbgProfileSettingsT&& value) { SetXavc4kIntraCbgProfileSettings(std::forward<Xavc4kIntraCbgProfileSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Profile to the value XAVC_4K_INTRA_VBR.
     */
    inline const Xavc4kIntraVbrProfileSettings& GetXavc4kIntraVbrProfileSettings() const { return m_xavc4kIntraVbrProfileSettings; }
    inline bool Xavc4kIntraVbrProfileSettingsHasBeenSet() const { return m_xavc4kIntraVbrProfileSettingsHasBeenSet; }
    template<typename Xavc4kIntraVbrProfileSettingsT = Xavc4kIntraVbrProfileSettings>
    void SetXavc4kIntraVbrProfileSettings(Xavc4kIntraVbrProfileSettingsT&& value) { m_xavc4kIntraVbrProfileSettingsHasBeenSet = true; m_xavc4kIntraVbrProfileSettings = std::forward<Xavc4kIntraVbrProfileSettingsT>(value); }
    template<typename Xavc4kIntraVbrProfileSettingsT = Xavc4kIntraVbrProfileSettings>
    XavcSettings& WithXavc4kIntraVbrProfileSettings(Xavc4kIntraVbrProfileSettingsT&& value) { SetXavc4kIntraVbrProfileSettings(std::forward<Xavc4kIntraVbrProfileSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Profile to the value XAVC_4K.
     */
    inline const Xavc4kProfileSettings& GetXavc4kProfileSettings() const { return m_xavc4kProfileSettings; }
    inline bool Xavc4kProfileSettingsHasBeenSet() const { return m_xavc4kProfileSettingsHasBeenSet; }
    template<typename Xavc4kProfileSettingsT = Xavc4kProfileSettings>
    void SetXavc4kProfileSettings(Xavc4kProfileSettingsT&& value) { m_xavc4kProfileSettingsHasBeenSet = true; m_xavc4kProfileSettings = std::forward<Xavc4kProfileSettingsT>(value); }
    template<typename Xavc4kProfileSettingsT = Xavc4kProfileSettings>
    XavcSettings& WithXavc4kProfileSettings(Xavc4kProfileSettingsT&& value) { SetXavc4kProfileSettings(std::forward<Xavc4kProfileSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Profile to the value XAVC_HD_INTRA_CBG.
     */
    inline const XavcHdIntraCbgProfileSettings& GetXavcHdIntraCbgProfileSettings() const { return m_xavcHdIntraCbgProfileSettings; }
    inline bool XavcHdIntraCbgProfileSettingsHasBeenSet() const { return m_xavcHdIntraCbgProfileSettingsHasBeenSet; }
    template<typename XavcHdIntraCbgProfileSettingsT = XavcHdIntraCbgProfileSettings>
    void SetXavcHdIntraCbgProfileSettings(XavcHdIntraCbgProfileSettingsT&& value) { m_xavcHdIntraCbgProfileSettingsHasBeenSet = true; m_xavcHdIntraCbgProfileSettings = std::forward<XavcHdIntraCbgProfileSettingsT>(value); }
    template<typename XavcHdIntraCbgProfileSettingsT = XavcHdIntraCbgProfileSettings>
    XavcSettings& WithXavcHdIntraCbgProfileSettings(XavcHdIntraCbgProfileSettingsT&& value) { SetXavcHdIntraCbgProfileSettings(std::forward<XavcHdIntraCbgProfileSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Profile to the value XAVC_HD.
     */
    inline const XavcHdProfileSettings& GetXavcHdProfileSettings() const { return m_xavcHdProfileSettings; }
    inline bool XavcHdProfileSettingsHasBeenSet() const { return m_xavcHdProfileSettingsHasBeenSet; }
    template<typename XavcHdProfileSettingsT = XavcHdProfileSettings>
    void SetXavcHdProfileSettings(XavcHdProfileSettingsT&& value) { m_xavcHdProfileSettingsHasBeenSet = true; m_xavcHdProfileSettings = std::forward<XavcHdProfileSettingsT>(value); }
    template<typename XavcHdProfileSettingsT = XavcHdProfileSettings>
    XavcSettings& WithXavcHdProfileSettings(XavcHdProfileSettingsT&& value) { SetXavcHdProfileSettings(std::forward<XavcHdProfileSettingsT>(value)); return *this;}
    ///@}
  private:

    XavcAdaptiveQuantization m_adaptiveQuantization{XavcAdaptiveQuantization::NOT_SET};
    bool m_adaptiveQuantizationHasBeenSet = false;

    XavcEntropyEncoding m_entropyEncoding{XavcEntropyEncoding::NOT_SET};
    bool m_entropyEncodingHasBeenSet = false;

    XavcFramerateControl m_framerateControl{XavcFramerateControl::NOT_SET};
    bool m_framerateControlHasBeenSet = false;

    XavcFramerateConversionAlgorithm m_framerateConversionAlgorithm{XavcFramerateConversionAlgorithm::NOT_SET};
    bool m_framerateConversionAlgorithmHasBeenSet = false;

    int m_framerateDenominator{0};
    bool m_framerateDenominatorHasBeenSet = false;

    int m_framerateNumerator{0};
    bool m_framerateNumeratorHasBeenSet = false;

    Aws::Vector<FrameMetricType> m_perFrameMetrics;
    bool m_perFrameMetricsHasBeenSet = false;

    XavcProfile m_profile{XavcProfile::NOT_SET};
    bool m_profileHasBeenSet = false;

    XavcSlowPal m_slowPal{XavcSlowPal::NOT_SET};
    bool m_slowPalHasBeenSet = false;

    int m_softness{0};
    bool m_softnessHasBeenSet = false;

    XavcSpatialAdaptiveQuantization m_spatialAdaptiveQuantization{XavcSpatialAdaptiveQuantization::NOT_SET};
    bool m_spatialAdaptiveQuantizationHasBeenSet = false;

    XavcTemporalAdaptiveQuantization m_temporalAdaptiveQuantization{XavcTemporalAdaptiveQuantization::NOT_SET};
    bool m_temporalAdaptiveQuantizationHasBeenSet = false;

    Xavc4kIntraCbgProfileSettings m_xavc4kIntraCbgProfileSettings;
    bool m_xavc4kIntraCbgProfileSettingsHasBeenSet = false;

    Xavc4kIntraVbrProfileSettings m_xavc4kIntraVbrProfileSettings;
    bool m_xavc4kIntraVbrProfileSettingsHasBeenSet = false;

    Xavc4kProfileSettings m_xavc4kProfileSettings;
    bool m_xavc4kProfileSettingsHasBeenSet = false;

    XavcHdIntraCbgProfileSettings m_xavcHdIntraCbgProfileSettings;
    bool m_xavcHdIntraCbgProfileSettingsHasBeenSet = false;

    XavcHdProfileSettings m_xavcHdProfileSettings;
    bool m_xavcHdProfileSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
