/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/ClipLimits.h>
#include <aws/mediaconvert/model/ColorSpaceConversion.h>
#include <aws/mediaconvert/model/Hdr10Metadata.h>
#include <aws/mediaconvert/model/HDRToSDRToneMapper.h>
#include <aws/mediaconvert/model/SampleRangeConversion.h>
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
   * Settings for color correction.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ColorCorrector">AWS
   * API Reference</a></p>
   */
  class ColorCorrector
  {
  public:
    AWS_MEDIACONVERT_API ColorCorrector() = default;
    AWS_MEDIACONVERT_API ColorCorrector(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API ColorCorrector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Brightness level.
     */
    inline int GetBrightness() const { return m_brightness; }
    inline bool BrightnessHasBeenSet() const { return m_brightnessHasBeenSet; }
    inline void SetBrightness(int value) { m_brightnessHasBeenSet = true; m_brightness = value; }
    inline ColorCorrector& WithBrightness(int value) { SetBrightness(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify YUV limits and RGB tolerances when you set Sample range conversion to
     * Limited range clip.
     */
    inline const ClipLimits& GetClipLimits() const { return m_clipLimits; }
    inline bool ClipLimitsHasBeenSet() const { return m_clipLimitsHasBeenSet; }
    template<typename ClipLimitsT = ClipLimits>
    void SetClipLimits(ClipLimitsT&& value) { m_clipLimitsHasBeenSet = true; m_clipLimits = std::forward<ClipLimitsT>(value); }
    template<typename ClipLimitsT = ClipLimits>
    ColorCorrector& WithClipLimits(ClipLimitsT&& value) { SetClipLimits(std::forward<ClipLimitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the color space you want for this output. The service supports
     * conversion between HDR formats, between SDR formats, from SDR to HDR, and from
     * HDR to SDR. SDR to HDR conversion doesn't upgrade the dynamic range. The
     * converted video has an HDR format, but visually appears the same as an
     * unconverted output. HDR to SDR conversion uses tone mapping to approximate the
     * outcome of manually regrading from HDR to SDR. When you specify an output color
     * space, MediaConvert uses the following color space metadata, which includes
     * color primaries, transfer characteristics, and matrix coefficients:
  * HDR 10:
     * BT.2020, PQ, BT.2020 non-constant
  * HLG 2020: BT.2020, HLG, BT.2020
     * non-constant
  * P3DCI (Theater): DCIP3, SMPTE 428M, BT.709
  * P3D65 (SDR):
     * Display P3, sRGB, BT.709
  * P3D65 (HDR): Display P3, PQ, BT.709
     */
    inline ColorSpaceConversion GetColorSpaceConversion() const { return m_colorSpaceConversion; }
    inline bool ColorSpaceConversionHasBeenSet() const { return m_colorSpaceConversionHasBeenSet; }
    inline void SetColorSpaceConversion(ColorSpaceConversion value) { m_colorSpaceConversionHasBeenSet = true; m_colorSpaceConversion = value; }
    inline ColorCorrector& WithColorSpaceConversion(ColorSpaceConversion value) { SetColorSpaceConversion(value); return *this;}
    ///@}

    ///@{
    /**
     * Contrast level.
     */
    inline int GetContrast() const { return m_contrast; }
    inline bool ContrastHasBeenSet() const { return m_contrastHasBeenSet; }
    inline void SetContrast(int value) { m_contrastHasBeenSet = true; m_contrast = value; }
    inline ColorCorrector& WithContrast(int value) { SetContrast(value); return *this;}
    ///@}

    ///@{
    /**
     * Use these settings when you convert to the HDR 10 color space. Specify the SMPTE
     * ST 2086 Mastering Display Color Volume static metadata that you want signaled in
     * the output. These values don't affect the pixel values that are encoded in the
     * video stream. They are intended to help the downstream video player display
     * content in a way that reflects the intentions of the the content creator. When
     * you set Color space conversion to HDR 10, these settings are required. You must
     * set values for Max frame average light level and Max content light level; these
     * settings don't have a default value. The default values for the other HDR 10
     * metadata settings are defined by the P3D65 color space. For more information
     * about MediaConvert HDR jobs, see
     * https://docs.aws.amazon.com/console/mediaconvert/hdr.
     */
    inline const Hdr10Metadata& GetHdr10Metadata() const { return m_hdr10Metadata; }
    inline bool Hdr10MetadataHasBeenSet() const { return m_hdr10MetadataHasBeenSet; }
    template<typename Hdr10MetadataT = Hdr10Metadata>
    void SetHdr10Metadata(Hdr10MetadataT&& value) { m_hdr10MetadataHasBeenSet = true; m_hdr10Metadata = std::forward<Hdr10MetadataT>(value); }
    template<typename Hdr10MetadataT = Hdr10Metadata>
    ColorCorrector& WithHdr10Metadata(Hdr10MetadataT&& value) { SetHdr10Metadata(std::forward<Hdr10MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify how MediaConvert maps brightness and colors from your HDR input to your
     * SDR output. The mode that you select represents a creative choice, with
     * different tradeoffs in the details and tones of your output. To maintain details
     * in bright or saturated areas of your output: Choose Preserve details. For some
     * sources, your SDR output may look less bright and less saturated when compared
     * to your HDR source. MediaConvert automatically applies this mode for HLG
     * sources, regardless of your choice. For a bright and saturated output: Choose
     * Vibrant. We recommend that you choose this mode when any of your source content
     * is HDR10, and for the best results when it is mastered for 1000 nits. You may
     * notice loss of details in bright or saturated areas of your output. HDR to SDR
     * tone mapping has no effect when your input is SDR.
     */
    inline HDRToSDRToneMapper GetHdrToSdrToneMapper() const { return m_hdrToSdrToneMapper; }
    inline bool HdrToSdrToneMapperHasBeenSet() const { return m_hdrToSdrToneMapperHasBeenSet; }
    inline void SetHdrToSdrToneMapper(HDRToSDRToneMapper value) { m_hdrToSdrToneMapperHasBeenSet = true; m_hdrToSdrToneMapper = value; }
    inline ColorCorrector& WithHdrToSdrToneMapper(HDRToSDRToneMapper value) { SetHdrToSdrToneMapper(value); return *this;}
    ///@}

    ///@{
    /**
     * Hue in degrees.
     */
    inline int GetHue() const { return m_hue; }
    inline bool HueHasBeenSet() const { return m_hueHasBeenSet; }
    inline void SetHue(int value) { m_hueHasBeenSet = true; m_hue = value; }
    inline ColorCorrector& WithHue(int value) { SetHue(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the maximum mastering display luminance. Enter an integer from 0 to
     * 2147483647, in units of 0.0001 nits. For example, enter 10000000 for 1000 nits.
     */
    inline int GetMaxLuminance() const { return m_maxLuminance; }
    inline bool MaxLuminanceHasBeenSet() const { return m_maxLuminanceHasBeenSet; }
    inline void SetMaxLuminance(int value) { m_maxLuminanceHasBeenSet = true; m_maxLuminance = value; }
    inline ColorCorrector& WithMaxLuminance(int value) { SetMaxLuminance(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify how MediaConvert limits the color sample range for this output. To
     * create a limited range output from a full range input: Choose Limited range
     * squeeze. For full range inputs, MediaConvert performs a linear offset to color
     * samples equally across all pixels and frames. Color samples in 10-bit outputs
     * are limited to 64 through 940, and 8-bit outputs are limited to 16 through 235.
     * Note: For limited range inputs, values for color samples are passed through to
     * your output unchanged. MediaConvert does not limit the sample range. To correct
     * pixels in your input that are out of range or out of gamut: Choose Limited range
     * clip. Use for broadcast applications. MediaConvert conforms any pixels outside
     * of the values that you specify under Minimum YUV and Maximum YUV to limited
     * range bounds. MediaConvert also corrects any YUV values that, when converted to
     * RGB, would be outside the bounds you specify under Minimum RGB tolerance and
     * Maximum RGB tolerance. With either limited range conversion, MediaConvert writes
     * the sample range metadata in the output.
     */
    inline SampleRangeConversion GetSampleRangeConversion() const { return m_sampleRangeConversion; }
    inline bool SampleRangeConversionHasBeenSet() const { return m_sampleRangeConversionHasBeenSet; }
    inline void SetSampleRangeConversion(SampleRangeConversion value) { m_sampleRangeConversionHasBeenSet = true; m_sampleRangeConversion = value; }
    inline ColorCorrector& WithSampleRangeConversion(SampleRangeConversion value) { SetSampleRangeConversion(value); return *this;}
    ///@}

    ///@{
    /**
     * Saturation level.
     */
    inline int GetSaturation() const { return m_saturation; }
    inline bool SaturationHasBeenSet() const { return m_saturationHasBeenSet; }
    inline void SetSaturation(int value) { m_saturationHasBeenSet = true; m_saturation = value; }
    inline ColorCorrector& WithSaturation(int value) { SetSaturation(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the reference white level, in nits, for all of your SDR inputs. Use to
     * correct brightness levels within HDR10 outputs. The following color metadata
     * must be present in your SDR input: color primaries, transfer characteristics,
     * and matrix coefficients. If your SDR input has missing color metadata, or if you
     * want to correct input color metadata, manually specify a color space in the
     * input video selector. For 1,000 nit peak brightness displays, we recommend that
     * you set SDR reference white level to 203 (according to ITU-R BT.2408). Leave
     * blank to use the default value of 100, or specify an integer from 100 to 1000.
     */
    inline int GetSdrReferenceWhiteLevel() const { return m_sdrReferenceWhiteLevel; }
    inline bool SdrReferenceWhiteLevelHasBeenSet() const { return m_sdrReferenceWhiteLevelHasBeenSet; }
    inline void SetSdrReferenceWhiteLevel(int value) { m_sdrReferenceWhiteLevelHasBeenSet = true; m_sdrReferenceWhiteLevel = value; }
    inline ColorCorrector& WithSdrReferenceWhiteLevel(int value) { SetSdrReferenceWhiteLevel(value); return *this;}
    ///@}
  private:

    int m_brightness{0};
    bool m_brightnessHasBeenSet = false;

    ClipLimits m_clipLimits;
    bool m_clipLimitsHasBeenSet = false;

    ColorSpaceConversion m_colorSpaceConversion{ColorSpaceConversion::NOT_SET};
    bool m_colorSpaceConversionHasBeenSet = false;

    int m_contrast{0};
    bool m_contrastHasBeenSet = false;

    Hdr10Metadata m_hdr10Metadata;
    bool m_hdr10MetadataHasBeenSet = false;

    HDRToSDRToneMapper m_hdrToSdrToneMapper{HDRToSDRToneMapper::NOT_SET};
    bool m_hdrToSdrToneMapperHasBeenSet = false;

    int m_hue{0};
    bool m_hueHasBeenSet = false;

    int m_maxLuminance{0};
    bool m_maxLuminanceHasBeenSet = false;

    SampleRangeConversion m_sampleRangeConversion{SampleRangeConversion::NOT_SET};
    bool m_sampleRangeConversionHasBeenSet = false;

    int m_saturation{0};
    bool m_saturationHasBeenSet = false;

    int m_sdrReferenceWhiteLevel{0};
    bool m_sdrReferenceWhiteLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
