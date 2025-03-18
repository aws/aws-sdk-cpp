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
   * Find additional transcoding features under Preprocessors. Enable the features at
   * each output individually. These features are disabled by default.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/VideoPreprocessor">AWS
   * API Reference</a></p>
   */
  class VideoPreprocessor
  {
  public:
    AWS_MEDIACONVERT_API VideoPreprocessor() = default;
    AWS_MEDIACONVERT_API VideoPreprocessor(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API VideoPreprocessor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Use these settings to convert the color space or to modify properties such as
     * hue and contrast for this output. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/converting-the-color-space.html.
     */
    inline const ColorCorrector& GetColorCorrector() const { return m_colorCorrector; }
    inline bool ColorCorrectorHasBeenSet() const { return m_colorCorrectorHasBeenSet; }
    template<typename ColorCorrectorT = ColorCorrector>
    void SetColorCorrector(ColorCorrectorT&& value) { m_colorCorrectorHasBeenSet = true; m_colorCorrector = std::forward<ColorCorrectorT>(value); }
    template<typename ColorCorrectorT = ColorCorrector>
    VideoPreprocessor& WithColorCorrector(ColorCorrectorT&& value) { SetColorCorrector(std::forward<ColorCorrectorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use the deinterlacer to produce smoother motion and a clearer picture. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-scan-type.html.
     */
    inline const Deinterlacer& GetDeinterlacer() const { return m_deinterlacer; }
    inline bool DeinterlacerHasBeenSet() const { return m_deinterlacerHasBeenSet; }
    template<typename DeinterlacerT = Deinterlacer>
    void SetDeinterlacer(DeinterlacerT&& value) { m_deinterlacerHasBeenSet = true; m_deinterlacer = std::forward<DeinterlacerT>(value); }
    template<typename DeinterlacerT = Deinterlacer>
    VideoPreprocessor& WithDeinterlacer(DeinterlacerT&& value) { SetDeinterlacer(std::forward<DeinterlacerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Enable Dolby Vision feature to produce Dolby Vision compatible video output.
     */
    inline const DolbyVision& GetDolbyVision() const { return m_dolbyVision; }
    inline bool DolbyVisionHasBeenSet() const { return m_dolbyVisionHasBeenSet; }
    template<typename DolbyVisionT = DolbyVision>
    void SetDolbyVision(DolbyVisionT&& value) { m_dolbyVisionHasBeenSet = true; m_dolbyVision = std::forward<DolbyVisionT>(value); }
    template<typename DolbyVisionT = DolbyVision>
    VideoPreprocessor& WithDolbyVision(DolbyVisionT&& value) { SetDolbyVision(std::forward<DolbyVisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Enable HDR10+ analysis and metadata injection. Compatible with HEVC only.
     */
    inline const Hdr10Plus& GetHdr10Plus() const { return m_hdr10Plus; }
    inline bool Hdr10PlusHasBeenSet() const { return m_hdr10PlusHasBeenSet; }
    template<typename Hdr10PlusT = Hdr10Plus>
    void SetHdr10Plus(Hdr10PlusT&& value) { m_hdr10PlusHasBeenSet = true; m_hdr10Plus = std::forward<Hdr10PlusT>(value); }
    template<typename Hdr10PlusT = Hdr10Plus>
    VideoPreprocessor& WithHdr10Plus(Hdr10PlusT&& value) { SetHdr10Plus(std::forward<Hdr10PlusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Enable the Image inserter feature to include a graphic overlay on your video.
     * Enable or disable this feature for each output individually. This setting is
     * disabled by default.
     */
    inline const ImageInserter& GetImageInserter() const { return m_imageInserter; }
    inline bool ImageInserterHasBeenSet() const { return m_imageInserterHasBeenSet; }
    template<typename ImageInserterT = ImageInserter>
    void SetImageInserter(ImageInserterT&& value) { m_imageInserterHasBeenSet = true; m_imageInserter = std::forward<ImageInserterT>(value); }
    template<typename ImageInserterT = ImageInserter>
    VideoPreprocessor& WithImageInserter(ImageInserterT&& value) { SetImageInserter(std::forward<ImageInserterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Enable the Noise reducer feature to remove noise from your video output if
     * necessary. Enable or disable this feature for each output individually. This
     * setting is disabled by default. When you enable Noise reducer, you must also
     * select a value for Noise reducer filter. For AVC outputs, when you include Noise
     * reducer, you cannot include the Bandwidth reduction filter.
     */
    inline const NoiseReducer& GetNoiseReducer() const { return m_noiseReducer; }
    inline bool NoiseReducerHasBeenSet() const { return m_noiseReducerHasBeenSet; }
    template<typename NoiseReducerT = NoiseReducer>
    void SetNoiseReducer(NoiseReducerT&& value) { m_noiseReducerHasBeenSet = true; m_noiseReducer = std::forward<NoiseReducerT>(value); }
    template<typename NoiseReducerT = NoiseReducer>
    VideoPreprocessor& WithNoiseReducer(NoiseReducerT&& value) { SetNoiseReducer(std::forward<NoiseReducerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * If you work with a third party video watermarking partner, use the group of
     * settings that correspond with your watermarking partner to include watermarks in
     * your output.
     */
    inline const PartnerWatermarking& GetPartnerWatermarking() const { return m_partnerWatermarking; }
    inline bool PartnerWatermarkingHasBeenSet() const { return m_partnerWatermarkingHasBeenSet; }
    template<typename PartnerWatermarkingT = PartnerWatermarking>
    void SetPartnerWatermarking(PartnerWatermarkingT&& value) { m_partnerWatermarkingHasBeenSet = true; m_partnerWatermarking = std::forward<PartnerWatermarkingT>(value); }
    template<typename PartnerWatermarkingT = PartnerWatermarking>
    VideoPreprocessor& WithPartnerWatermarking(PartnerWatermarkingT&& value) { SetPartnerWatermarking(std::forward<PartnerWatermarkingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings for burning the output timecode and specified prefix into the output.
     */
    inline const TimecodeBurnin& GetTimecodeBurnin() const { return m_timecodeBurnin; }
    inline bool TimecodeBurninHasBeenSet() const { return m_timecodeBurninHasBeenSet; }
    template<typename TimecodeBurninT = TimecodeBurnin>
    void SetTimecodeBurnin(TimecodeBurninT&& value) { m_timecodeBurninHasBeenSet = true; m_timecodeBurnin = std::forward<TimecodeBurninT>(value); }
    template<typename TimecodeBurninT = TimecodeBurnin>
    VideoPreprocessor& WithTimecodeBurnin(TimecodeBurninT&& value) { SetTimecodeBurnin(std::forward<TimecodeBurninT>(value)); return *this;}
    ///@}
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
