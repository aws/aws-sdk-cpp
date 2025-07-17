/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/Av1Settings.h>
#include <aws/mediaconvert/model/AvcIntraSettings.h>
#include <aws/mediaconvert/model/VideoCodec.h>
#include <aws/mediaconvert/model/FrameCaptureSettings.h>
#include <aws/mediaconvert/model/GifSettings.h>
#include <aws/mediaconvert/model/H264Settings.h>
#include <aws/mediaconvert/model/H265Settings.h>
#include <aws/mediaconvert/model/Mpeg2Settings.h>
#include <aws/mediaconvert/model/ProresSettings.h>
#include <aws/mediaconvert/model/UncompressedSettings.h>
#include <aws/mediaconvert/model/Vc3Settings.h>
#include <aws/mediaconvert/model/Vp8Settings.h>
#include <aws/mediaconvert/model/Vp9Settings.h>
#include <aws/mediaconvert/model/XavcSettings.h>
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
   * Video codec settings contains the group of settings related to video encoding.
   * The settings in this group vary depending on the value that you choose for Video
   * codec. For each codec enum that you choose, define the corresponding settings
   * object. The following lists the codec enum, settings object pairs. * AV1,
   * Av1Settings * AVC_INTRA, AvcIntraSettings * FRAME_CAPTURE, FrameCaptureSettings
   * * GIF, GifSettings * H_264, H264Settings * H_265, H265Settings * MPEG2,
   * Mpeg2Settings * PRORES, ProresSettings * UNCOMPRESSED, UncompressedSettings *
   * VC3, Vc3Settings * VP8, Vp8Settings * VP9, Vp9Settings * XAVC,
   * XavcSettings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/VideoCodecSettings">AWS
   * API Reference</a></p>
   */
  class VideoCodecSettings
  {
  public:
    AWS_MEDIACONVERT_API VideoCodecSettings() = default;
    AWS_MEDIACONVERT_API VideoCodecSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API VideoCodecSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Required when you set Codec, under VideoDescription>CodecSettings to the value
     * AV1.
     */
    inline const Av1Settings& GetAv1Settings() const { return m_av1Settings; }
    inline bool Av1SettingsHasBeenSet() const { return m_av1SettingsHasBeenSet; }
    template<typename Av1SettingsT = Av1Settings>
    void SetAv1Settings(Av1SettingsT&& value) { m_av1SettingsHasBeenSet = true; m_av1Settings = std::forward<Av1SettingsT>(value); }
    template<typename Av1SettingsT = Av1Settings>
    VideoCodecSettings& WithAv1Settings(Av1SettingsT&& value) { SetAv1Settings(std::forward<Av1SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you choose AVC-Intra for your output video codec. For more
     * information about the AVC-Intra settings, see the relevant specification. For
     * detailed information about SD and HD in AVC-Intra, see
     * https://ieeexplore.ieee.org/document/7290936. For information about 4K/2K in
     * AVC-Intra, see https://pro-av.panasonic.net/en/avc-ultra/AVC-ULTRAoverview.pdf.
     */
    inline const AvcIntraSettings& GetAvcIntraSettings() const { return m_avcIntraSettings; }
    inline bool AvcIntraSettingsHasBeenSet() const { return m_avcIntraSettingsHasBeenSet; }
    template<typename AvcIntraSettingsT = AvcIntraSettings>
    void SetAvcIntraSettings(AvcIntraSettingsT&& value) { m_avcIntraSettingsHasBeenSet = true; m_avcIntraSettings = std::forward<AvcIntraSettingsT>(value); }
    template<typename AvcIntraSettingsT = AvcIntraSettings>
    VideoCodecSettings& WithAvcIntraSettings(AvcIntraSettingsT&& value) { SetAvcIntraSettings(std::forward<AvcIntraSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the video codec. This must be equal to one of the enum values defined
     * by the object VideoCodec. To passthrough the video stream of your input without
     * any video encoding: Choose Passthrough. More information about passthrough codec
     * support and job settings requirements, see:
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/video-passthrough-feature-restrictions.html
     */
    inline VideoCodec GetCodec() const { return m_codec; }
    inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }
    inline void SetCodec(VideoCodec value) { m_codecHasBeenSet = true; m_codec = value; }
    inline VideoCodecSettings& WithCodec(VideoCodec value) { SetCodec(value); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Codec to the value FRAME_CAPTURE.
     */
    inline const FrameCaptureSettings& GetFrameCaptureSettings() const { return m_frameCaptureSettings; }
    inline bool FrameCaptureSettingsHasBeenSet() const { return m_frameCaptureSettingsHasBeenSet; }
    template<typename FrameCaptureSettingsT = FrameCaptureSettings>
    void SetFrameCaptureSettings(FrameCaptureSettingsT&& value) { m_frameCaptureSettingsHasBeenSet = true; m_frameCaptureSettings = std::forward<FrameCaptureSettingsT>(value); }
    template<typename FrameCaptureSettingsT = FrameCaptureSettings>
    VideoCodecSettings& WithFrameCaptureSettings(FrameCaptureSettingsT&& value) { SetFrameCaptureSettings(std::forward<FrameCaptureSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set (Codec) under (VideoDescription)>(CodecSettings) to the
     * value GIF
     */
    inline const GifSettings& GetGifSettings() const { return m_gifSettings; }
    inline bool GifSettingsHasBeenSet() const { return m_gifSettingsHasBeenSet; }
    template<typename GifSettingsT = GifSettings>
    void SetGifSettings(GifSettingsT&& value) { m_gifSettingsHasBeenSet = true; m_gifSettings = std::forward<GifSettingsT>(value); }
    template<typename GifSettingsT = GifSettings>
    VideoCodecSettings& WithGifSettings(GifSettingsT&& value) { SetGifSettings(std::forward<GifSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Codec to the value H_264.
     */
    inline const H264Settings& GetH264Settings() const { return m_h264Settings; }
    inline bool H264SettingsHasBeenSet() const { return m_h264SettingsHasBeenSet; }
    template<typename H264SettingsT = H264Settings>
    void SetH264Settings(H264SettingsT&& value) { m_h264SettingsHasBeenSet = true; m_h264Settings = std::forward<H264SettingsT>(value); }
    template<typename H264SettingsT = H264Settings>
    VideoCodecSettings& WithH264Settings(H264SettingsT&& value) { SetH264Settings(std::forward<H264SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings for H265 codec
     */
    inline const H265Settings& GetH265Settings() const { return m_h265Settings; }
    inline bool H265SettingsHasBeenSet() const { return m_h265SettingsHasBeenSet; }
    template<typename H265SettingsT = H265Settings>
    void SetH265Settings(H265SettingsT&& value) { m_h265SettingsHasBeenSet = true; m_h265Settings = std::forward<H265SettingsT>(value); }
    template<typename H265SettingsT = H265Settings>
    VideoCodecSettings& WithH265Settings(H265SettingsT&& value) { SetH265Settings(std::forward<H265SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Codec to the value MPEG2.
     */
    inline const Mpeg2Settings& GetMpeg2Settings() const { return m_mpeg2Settings; }
    inline bool Mpeg2SettingsHasBeenSet() const { return m_mpeg2SettingsHasBeenSet; }
    template<typename Mpeg2SettingsT = Mpeg2Settings>
    void SetMpeg2Settings(Mpeg2SettingsT&& value) { m_mpeg2SettingsHasBeenSet = true; m_mpeg2Settings = std::forward<Mpeg2SettingsT>(value); }
    template<typename Mpeg2SettingsT = Mpeg2Settings>
    VideoCodecSettings& WithMpeg2Settings(Mpeg2SettingsT&& value) { SetMpeg2Settings(std::forward<Mpeg2SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Codec to the value PRORES.
     */
    inline const ProresSettings& GetProresSettings() const { return m_proresSettings; }
    inline bool ProresSettingsHasBeenSet() const { return m_proresSettingsHasBeenSet; }
    template<typename ProresSettingsT = ProresSettings>
    void SetProresSettings(ProresSettingsT&& value) { m_proresSettingsHasBeenSet = true; m_proresSettings = std::forward<ProresSettingsT>(value); }
    template<typename ProresSettingsT = ProresSettings>
    VideoCodecSettings& WithProresSettings(ProresSettingsT&& value) { SetProresSettings(std::forward<ProresSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Codec, under VideoDescription>CodecSettings to the value
     * UNCOMPRESSED.
     */
    inline const UncompressedSettings& GetUncompressedSettings() const { return m_uncompressedSettings; }
    inline bool UncompressedSettingsHasBeenSet() const { return m_uncompressedSettingsHasBeenSet; }
    template<typename UncompressedSettingsT = UncompressedSettings>
    void SetUncompressedSettings(UncompressedSettingsT&& value) { m_uncompressedSettingsHasBeenSet = true; m_uncompressedSettings = std::forward<UncompressedSettingsT>(value); }
    template<typename UncompressedSettingsT = UncompressedSettings>
    VideoCodecSettings& WithUncompressedSettings(UncompressedSettingsT&& value) { SetUncompressedSettings(std::forward<UncompressedSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Codec to the value VC3
     */
    inline const Vc3Settings& GetVc3Settings() const { return m_vc3Settings; }
    inline bool Vc3SettingsHasBeenSet() const { return m_vc3SettingsHasBeenSet; }
    template<typename Vc3SettingsT = Vc3Settings>
    void SetVc3Settings(Vc3SettingsT&& value) { m_vc3SettingsHasBeenSet = true; m_vc3Settings = std::forward<Vc3SettingsT>(value); }
    template<typename Vc3SettingsT = Vc3Settings>
    VideoCodecSettings& WithVc3Settings(Vc3SettingsT&& value) { SetVc3Settings(std::forward<Vc3SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Codec to the value VP8.
     */
    inline const Vp8Settings& GetVp8Settings() const { return m_vp8Settings; }
    inline bool Vp8SettingsHasBeenSet() const { return m_vp8SettingsHasBeenSet; }
    template<typename Vp8SettingsT = Vp8Settings>
    void SetVp8Settings(Vp8SettingsT&& value) { m_vp8SettingsHasBeenSet = true; m_vp8Settings = std::forward<Vp8SettingsT>(value); }
    template<typename Vp8SettingsT = Vp8Settings>
    VideoCodecSettings& WithVp8Settings(Vp8SettingsT&& value) { SetVp8Settings(std::forward<Vp8SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Codec to the value VP9.
     */
    inline const Vp9Settings& GetVp9Settings() const { return m_vp9Settings; }
    inline bool Vp9SettingsHasBeenSet() const { return m_vp9SettingsHasBeenSet; }
    template<typename Vp9SettingsT = Vp9Settings>
    void SetVp9Settings(Vp9SettingsT&& value) { m_vp9SettingsHasBeenSet = true; m_vp9Settings = std::forward<Vp9SettingsT>(value); }
    template<typename Vp9SettingsT = Vp9Settings>
    VideoCodecSettings& WithVp9Settings(Vp9SettingsT&& value) { SetVp9Settings(std::forward<Vp9SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Codec to the value XAVC.
     */
    inline const XavcSettings& GetXavcSettings() const { return m_xavcSettings; }
    inline bool XavcSettingsHasBeenSet() const { return m_xavcSettingsHasBeenSet; }
    template<typename XavcSettingsT = XavcSettings>
    void SetXavcSettings(XavcSettingsT&& value) { m_xavcSettingsHasBeenSet = true; m_xavcSettings = std::forward<XavcSettingsT>(value); }
    template<typename XavcSettingsT = XavcSettings>
    VideoCodecSettings& WithXavcSettings(XavcSettingsT&& value) { SetXavcSettings(std::forward<XavcSettingsT>(value)); return *this;}
    ///@}
  private:

    Av1Settings m_av1Settings;
    bool m_av1SettingsHasBeenSet = false;

    AvcIntraSettings m_avcIntraSettings;
    bool m_avcIntraSettingsHasBeenSet = false;

    VideoCodec m_codec{VideoCodec::NOT_SET};
    bool m_codecHasBeenSet = false;

    FrameCaptureSettings m_frameCaptureSettings;
    bool m_frameCaptureSettingsHasBeenSet = false;

    GifSettings m_gifSettings;
    bool m_gifSettingsHasBeenSet = false;

    H264Settings m_h264Settings;
    bool m_h264SettingsHasBeenSet = false;

    H265Settings m_h265Settings;
    bool m_h265SettingsHasBeenSet = false;

    Mpeg2Settings m_mpeg2Settings;
    bool m_mpeg2SettingsHasBeenSet = false;

    ProresSettings m_proresSettings;
    bool m_proresSettingsHasBeenSet = false;

    UncompressedSettings m_uncompressedSettings;
    bool m_uncompressedSettingsHasBeenSet = false;

    Vc3Settings m_vc3Settings;
    bool m_vc3SettingsHasBeenSet = false;

    Vp8Settings m_vp8Settings;
    bool m_vp8SettingsHasBeenSet = false;

    Vp9Settings m_vp9Settings;
    bool m_vp9SettingsHasBeenSet = false;

    XavcSettings m_xavcSettings;
    bool m_xavcSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
