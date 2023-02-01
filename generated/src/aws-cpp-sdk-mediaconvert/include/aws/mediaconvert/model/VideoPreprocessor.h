/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/ColorCorrector.h>
#include <aws/mediaconvert/model/Deinterlacer.h>
#include <aws/mediaconvert/model/DolbyVision.h>
#include <aws/mediaconvert/model/Hdr10Plus.h>
#include <aws/mediaconvert/model/ImageInserter.h>
#include <aws/mediaconvert/model/NoiseReducer.h>
#include <aws/mediaconvert/model/PartnerWatermarking.h>
#include <aws/mediaconvert/model/TimecodeBurnin.h>
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
   * Find additional transcoding features under Preprocessors (VideoPreprocessors).
   * Enable the features at each output individually. These features are disabled by
   * default.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/VideoPreprocessor">AWS
   * API Reference</a></p>
   */
  class VideoPreprocessor
  {
  public:
    AWS_MEDIACONVERT_API VideoPreprocessor();
    AWS_MEDIACONVERT_API VideoPreprocessor(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API VideoPreprocessor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Use these settings to convert the color space or to modify properties such as
     * hue and contrast for this output. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/converting-the-color-space.html.
     */
    inline const ColorCorrector& GetColorCorrector() const{ return m_colorCorrector; }

    /**
     * Use these settings to convert the color space or to modify properties such as
     * hue and contrast for this output. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/converting-the-color-space.html.
     */
    inline bool ColorCorrectorHasBeenSet() const { return m_colorCorrectorHasBeenSet; }

    /**
     * Use these settings to convert the color space or to modify properties such as
     * hue and contrast for this output. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/converting-the-color-space.html.
     */
    inline void SetColorCorrector(const ColorCorrector& value) { m_colorCorrectorHasBeenSet = true; m_colorCorrector = value; }

    /**
     * Use these settings to convert the color space or to modify properties such as
     * hue and contrast for this output. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/converting-the-color-space.html.
     */
    inline void SetColorCorrector(ColorCorrector&& value) { m_colorCorrectorHasBeenSet = true; m_colorCorrector = std::move(value); }

    /**
     * Use these settings to convert the color space or to modify properties such as
     * hue and contrast for this output. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/converting-the-color-space.html.
     */
    inline VideoPreprocessor& WithColorCorrector(const ColorCorrector& value) { SetColorCorrector(value); return *this;}

    /**
     * Use these settings to convert the color space or to modify properties such as
     * hue and contrast for this output. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/converting-the-color-space.html.
     */
    inline VideoPreprocessor& WithColorCorrector(ColorCorrector&& value) { SetColorCorrector(std::move(value)); return *this;}


    /**
     * Use the deinterlacer to produce smoother motion and a clearer picture. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-scan-type.html.
     */
    inline const Deinterlacer& GetDeinterlacer() const{ return m_deinterlacer; }

    /**
     * Use the deinterlacer to produce smoother motion and a clearer picture. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-scan-type.html.
     */
    inline bool DeinterlacerHasBeenSet() const { return m_deinterlacerHasBeenSet; }

    /**
     * Use the deinterlacer to produce smoother motion and a clearer picture. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-scan-type.html.
     */
    inline void SetDeinterlacer(const Deinterlacer& value) { m_deinterlacerHasBeenSet = true; m_deinterlacer = value; }

    /**
     * Use the deinterlacer to produce smoother motion and a clearer picture. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-scan-type.html.
     */
    inline void SetDeinterlacer(Deinterlacer&& value) { m_deinterlacerHasBeenSet = true; m_deinterlacer = std::move(value); }

    /**
     * Use the deinterlacer to produce smoother motion and a clearer picture. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-scan-type.html.
     */
    inline VideoPreprocessor& WithDeinterlacer(const Deinterlacer& value) { SetDeinterlacer(value); return *this;}

    /**
     * Use the deinterlacer to produce smoother motion and a clearer picture. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-scan-type.html.
     */
    inline VideoPreprocessor& WithDeinterlacer(Deinterlacer&& value) { SetDeinterlacer(std::move(value)); return *this;}


    /**
     * Enable Dolby Vision feature to produce Dolby Vision compatible video output.
     */
    inline const DolbyVision& GetDolbyVision() const{ return m_dolbyVision; }

    /**
     * Enable Dolby Vision feature to produce Dolby Vision compatible video output.
     */
    inline bool DolbyVisionHasBeenSet() const { return m_dolbyVisionHasBeenSet; }

    /**
     * Enable Dolby Vision feature to produce Dolby Vision compatible video output.
     */
    inline void SetDolbyVision(const DolbyVision& value) { m_dolbyVisionHasBeenSet = true; m_dolbyVision = value; }

    /**
     * Enable Dolby Vision feature to produce Dolby Vision compatible video output.
     */
    inline void SetDolbyVision(DolbyVision&& value) { m_dolbyVisionHasBeenSet = true; m_dolbyVision = std::move(value); }

    /**
     * Enable Dolby Vision feature to produce Dolby Vision compatible video output.
     */
    inline VideoPreprocessor& WithDolbyVision(const DolbyVision& value) { SetDolbyVision(value); return *this;}

    /**
     * Enable Dolby Vision feature to produce Dolby Vision compatible video output.
     */
    inline VideoPreprocessor& WithDolbyVision(DolbyVision&& value) { SetDolbyVision(std::move(value)); return *this;}


    /**
     * Enable HDR10+ analyis and metadata injection. Compatible with HEVC only.
     */
    inline const Hdr10Plus& GetHdr10Plus() const{ return m_hdr10Plus; }

    /**
     * Enable HDR10+ analyis and metadata injection. Compatible with HEVC only.
     */
    inline bool Hdr10PlusHasBeenSet() const { return m_hdr10PlusHasBeenSet; }

    /**
     * Enable HDR10+ analyis and metadata injection. Compatible with HEVC only.
     */
    inline void SetHdr10Plus(const Hdr10Plus& value) { m_hdr10PlusHasBeenSet = true; m_hdr10Plus = value; }

    /**
     * Enable HDR10+ analyis and metadata injection. Compatible with HEVC only.
     */
    inline void SetHdr10Plus(Hdr10Plus&& value) { m_hdr10PlusHasBeenSet = true; m_hdr10Plus = std::move(value); }

    /**
     * Enable HDR10+ analyis and metadata injection. Compatible with HEVC only.
     */
    inline VideoPreprocessor& WithHdr10Plus(const Hdr10Plus& value) { SetHdr10Plus(value); return *this;}

    /**
     * Enable HDR10+ analyis and metadata injection. Compatible with HEVC only.
     */
    inline VideoPreprocessor& WithHdr10Plus(Hdr10Plus&& value) { SetHdr10Plus(std::move(value)); return *this;}


    /**
     * Enable the Image inserter (ImageInserter) feature to include a graphic overlay
     * on your video. Enable or disable this feature for each output individually. This
     * setting is disabled by default.
     */
    inline const ImageInserter& GetImageInserter() const{ return m_imageInserter; }

    /**
     * Enable the Image inserter (ImageInserter) feature to include a graphic overlay
     * on your video. Enable or disable this feature for each output individually. This
     * setting is disabled by default.
     */
    inline bool ImageInserterHasBeenSet() const { return m_imageInserterHasBeenSet; }

    /**
     * Enable the Image inserter (ImageInserter) feature to include a graphic overlay
     * on your video. Enable or disable this feature for each output individually. This
     * setting is disabled by default.
     */
    inline void SetImageInserter(const ImageInserter& value) { m_imageInserterHasBeenSet = true; m_imageInserter = value; }

    /**
     * Enable the Image inserter (ImageInserter) feature to include a graphic overlay
     * on your video. Enable or disable this feature for each output individually. This
     * setting is disabled by default.
     */
    inline void SetImageInserter(ImageInserter&& value) { m_imageInserterHasBeenSet = true; m_imageInserter = std::move(value); }

    /**
     * Enable the Image inserter (ImageInserter) feature to include a graphic overlay
     * on your video. Enable or disable this feature for each output individually. This
     * setting is disabled by default.
     */
    inline VideoPreprocessor& WithImageInserter(const ImageInserter& value) { SetImageInserter(value); return *this;}

    /**
     * Enable the Image inserter (ImageInserter) feature to include a graphic overlay
     * on your video. Enable or disable this feature for each output individually. This
     * setting is disabled by default.
     */
    inline VideoPreprocessor& WithImageInserter(ImageInserter&& value) { SetImageInserter(std::move(value)); return *this;}


    /**
     * Enable the Noise reducer (NoiseReducer) feature to remove noise from your video
     * output if necessary. Enable or disable this feature for each output
     * individually. This setting is disabled by default.
     */
    inline const NoiseReducer& GetNoiseReducer() const{ return m_noiseReducer; }

    /**
     * Enable the Noise reducer (NoiseReducer) feature to remove noise from your video
     * output if necessary. Enable or disable this feature for each output
     * individually. This setting is disabled by default.
     */
    inline bool NoiseReducerHasBeenSet() const { return m_noiseReducerHasBeenSet; }

    /**
     * Enable the Noise reducer (NoiseReducer) feature to remove noise from your video
     * output if necessary. Enable or disable this feature for each output
     * individually. This setting is disabled by default.
     */
    inline void SetNoiseReducer(const NoiseReducer& value) { m_noiseReducerHasBeenSet = true; m_noiseReducer = value; }

    /**
     * Enable the Noise reducer (NoiseReducer) feature to remove noise from your video
     * output if necessary. Enable or disable this feature for each output
     * individually. This setting is disabled by default.
     */
    inline void SetNoiseReducer(NoiseReducer&& value) { m_noiseReducerHasBeenSet = true; m_noiseReducer = std::move(value); }

    /**
     * Enable the Noise reducer (NoiseReducer) feature to remove noise from your video
     * output if necessary. Enable or disable this feature for each output
     * individually. This setting is disabled by default.
     */
    inline VideoPreprocessor& WithNoiseReducer(const NoiseReducer& value) { SetNoiseReducer(value); return *this;}

    /**
     * Enable the Noise reducer (NoiseReducer) feature to remove noise from your video
     * output if necessary. Enable or disable this feature for each output
     * individually. This setting is disabled by default.
     */
    inline VideoPreprocessor& WithNoiseReducer(NoiseReducer&& value) { SetNoiseReducer(std::move(value)); return *this;}


    /**
     * If you work with a third party video watermarking partner, use the group of
     * settings that correspond with your watermarking partner to include watermarks in
     * your output.
     */
    inline const PartnerWatermarking& GetPartnerWatermarking() const{ return m_partnerWatermarking; }

    /**
     * If you work with a third party video watermarking partner, use the group of
     * settings that correspond with your watermarking partner to include watermarks in
     * your output.
     */
    inline bool PartnerWatermarkingHasBeenSet() const { return m_partnerWatermarkingHasBeenSet; }

    /**
     * If you work with a third party video watermarking partner, use the group of
     * settings that correspond with your watermarking partner to include watermarks in
     * your output.
     */
    inline void SetPartnerWatermarking(const PartnerWatermarking& value) { m_partnerWatermarkingHasBeenSet = true; m_partnerWatermarking = value; }

    /**
     * If you work with a third party video watermarking partner, use the group of
     * settings that correspond with your watermarking partner to include watermarks in
     * your output.
     */
    inline void SetPartnerWatermarking(PartnerWatermarking&& value) { m_partnerWatermarkingHasBeenSet = true; m_partnerWatermarking = std::move(value); }

    /**
     * If you work with a third party video watermarking partner, use the group of
     * settings that correspond with your watermarking partner to include watermarks in
     * your output.
     */
    inline VideoPreprocessor& WithPartnerWatermarking(const PartnerWatermarking& value) { SetPartnerWatermarking(value); return *this;}

    /**
     * If you work with a third party video watermarking partner, use the group of
     * settings that correspond with your watermarking partner to include watermarks in
     * your output.
     */
    inline VideoPreprocessor& WithPartnerWatermarking(PartnerWatermarking&& value) { SetPartnerWatermarking(std::move(value)); return *this;}


    /**
     * Settings for burning the output timecode and specified prefix into the output.
     */
    inline const TimecodeBurnin& GetTimecodeBurnin() const{ return m_timecodeBurnin; }

    /**
     * Settings for burning the output timecode and specified prefix into the output.
     */
    inline bool TimecodeBurninHasBeenSet() const { return m_timecodeBurninHasBeenSet; }

    /**
     * Settings for burning the output timecode and specified prefix into the output.
     */
    inline void SetTimecodeBurnin(const TimecodeBurnin& value) { m_timecodeBurninHasBeenSet = true; m_timecodeBurnin = value; }

    /**
     * Settings for burning the output timecode and specified prefix into the output.
     */
    inline void SetTimecodeBurnin(TimecodeBurnin&& value) { m_timecodeBurninHasBeenSet = true; m_timecodeBurnin = std::move(value); }

    /**
     * Settings for burning the output timecode and specified prefix into the output.
     */
    inline VideoPreprocessor& WithTimecodeBurnin(const TimecodeBurnin& value) { SetTimecodeBurnin(value); return *this;}

    /**
     * Settings for burning the output timecode and specified prefix into the output.
     */
    inline VideoPreprocessor& WithTimecodeBurnin(TimecodeBurnin&& value) { SetTimecodeBurnin(std::move(value)); return *this;}

  private:

    ColorCorrector m_colorCorrector;
    bool m_colorCorrectorHasBeenSet = false;

    Deinterlacer m_deinterlacer;
    bool m_deinterlacerHasBeenSet = false;

    DolbyVision m_dolbyVision;
    bool m_dolbyVisionHasBeenSet = false;

    Hdr10Plus m_hdr10Plus;
    bool m_hdr10PlusHasBeenSet = false;

    ImageInserter m_imageInserter;
    bool m_imageInserterHasBeenSet = false;

    NoiseReducer m_noiseReducer;
    bool m_noiseReducerHasBeenSet = false;

    PartnerWatermarking m_partnerWatermarking;
    bool m_partnerWatermarkingHasBeenSet = false;

    TimecodeBurnin m_timecodeBurnin;
    bool m_timecodeBurninHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
