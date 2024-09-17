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
   * * H_264, H264Settings * H_265, H265Settings * MPEG2, Mpeg2Settings * PRORES,
   * ProresSettings * UNCOMPRESSED, UncompressedSettings * VC3, Vc3Settings * VP8,
   * Vp8Settings * VP9, Vp9Settings * XAVC, XavcSettings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/VideoCodecSettings">AWS
   * API Reference</a></p>
   */
  class VideoCodecSettings
  {
  public:
    AWS_MEDIACONVERT_API VideoCodecSettings();
    AWS_MEDIACONVERT_API VideoCodecSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API VideoCodecSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Required when you set Codec, under VideoDescription>CodecSettings to the value
     * AV1.
     */
    inline const Av1Settings& GetAv1Settings() const{ return m_av1Settings; }
    inline bool Av1SettingsHasBeenSet() const { return m_av1SettingsHasBeenSet; }
    inline void SetAv1Settings(const Av1Settings& value) { m_av1SettingsHasBeenSet = true; m_av1Settings = value; }
    inline void SetAv1Settings(Av1Settings&& value) { m_av1SettingsHasBeenSet = true; m_av1Settings = std::move(value); }
    inline VideoCodecSettings& WithAv1Settings(const Av1Settings& value) { SetAv1Settings(value); return *this;}
    inline VideoCodecSettings& WithAv1Settings(Av1Settings&& value) { SetAv1Settings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you choose AVC-Intra for your output video codec. For more
     * information about the AVC-Intra settings, see the relevant specification. For
     * detailed information about SD and HD in AVC-Intra, see
     * https://ieeexplore.ieee.org/document/7290936. For information about 4K/2K in
     * AVC-Intra, see https://pro-av.panasonic.net/en/avc-ultra/AVC-ULTRAoverview.pdf.
     */
    inline const AvcIntraSettings& GetAvcIntraSettings() const{ return m_avcIntraSettings; }
    inline bool AvcIntraSettingsHasBeenSet() const { return m_avcIntraSettingsHasBeenSet; }
    inline void SetAvcIntraSettings(const AvcIntraSettings& value) { m_avcIntraSettingsHasBeenSet = true; m_avcIntraSettings = value; }
    inline void SetAvcIntraSettings(AvcIntraSettings&& value) { m_avcIntraSettingsHasBeenSet = true; m_avcIntraSettings = std::move(value); }
    inline VideoCodecSettings& WithAvcIntraSettings(const AvcIntraSettings& value) { SetAvcIntraSettings(value); return *this;}
    inline VideoCodecSettings& WithAvcIntraSettings(AvcIntraSettings&& value) { SetAvcIntraSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the video codec. This must be equal to one of the enum values defined
     * by the object VideoCodec. To passthrough the video stream of your input
     * JPEG2000, VC-3, AVC-INTRA or Apple ProRes video without any video encoding:
     * Choose Passthrough. If you have multiple input videos, note that they must have
     * identical encoding attributes. When you choose Passthrough, your output
     * container must be MXF or QuickTime MOV.
     */
    inline const VideoCodec& GetCodec() const{ return m_codec; }
    inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }
    inline void SetCodec(const VideoCodec& value) { m_codecHasBeenSet = true; m_codec = value; }
    inline void SetCodec(VideoCodec&& value) { m_codecHasBeenSet = true; m_codec = std::move(value); }
    inline VideoCodecSettings& WithCodec(const VideoCodec& value) { SetCodec(value); return *this;}
    inline VideoCodecSettings& WithCodec(VideoCodec&& value) { SetCodec(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Codec to the value FRAME_CAPTURE.
     */
    inline const FrameCaptureSettings& GetFrameCaptureSettings() const{ return m_frameCaptureSettings; }
    inline bool FrameCaptureSettingsHasBeenSet() const { return m_frameCaptureSettingsHasBeenSet; }
    inline void SetFrameCaptureSettings(const FrameCaptureSettings& value) { m_frameCaptureSettingsHasBeenSet = true; m_frameCaptureSettings = value; }
    inline void SetFrameCaptureSettings(FrameCaptureSettings&& value) { m_frameCaptureSettingsHasBeenSet = true; m_frameCaptureSettings = std::move(value); }
    inline VideoCodecSettings& WithFrameCaptureSettings(const FrameCaptureSettings& value) { SetFrameCaptureSettings(value); return *this;}
    inline VideoCodecSettings& WithFrameCaptureSettings(FrameCaptureSettings&& value) { SetFrameCaptureSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Codec to the value H_264.
     */
    inline const H264Settings& GetH264Settings() const{ return m_h264Settings; }
    inline bool H264SettingsHasBeenSet() const { return m_h264SettingsHasBeenSet; }
    inline void SetH264Settings(const H264Settings& value) { m_h264SettingsHasBeenSet = true; m_h264Settings = value; }
    inline void SetH264Settings(H264Settings&& value) { m_h264SettingsHasBeenSet = true; m_h264Settings = std::move(value); }
    inline VideoCodecSettings& WithH264Settings(const H264Settings& value) { SetH264Settings(value); return *this;}
    inline VideoCodecSettings& WithH264Settings(H264Settings&& value) { SetH264Settings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings for H265 codec
     */
    inline const H265Settings& GetH265Settings() const{ return m_h265Settings; }
    inline bool H265SettingsHasBeenSet() const { return m_h265SettingsHasBeenSet; }
    inline void SetH265Settings(const H265Settings& value) { m_h265SettingsHasBeenSet = true; m_h265Settings = value; }
    inline void SetH265Settings(H265Settings&& value) { m_h265SettingsHasBeenSet = true; m_h265Settings = std::move(value); }
    inline VideoCodecSettings& WithH265Settings(const H265Settings& value) { SetH265Settings(value); return *this;}
    inline VideoCodecSettings& WithH265Settings(H265Settings&& value) { SetH265Settings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Codec to the value MPEG2.
     */
    inline const Mpeg2Settings& GetMpeg2Settings() const{ return m_mpeg2Settings; }
    inline bool Mpeg2SettingsHasBeenSet() const { return m_mpeg2SettingsHasBeenSet; }
    inline void SetMpeg2Settings(const Mpeg2Settings& value) { m_mpeg2SettingsHasBeenSet = true; m_mpeg2Settings = value; }
    inline void SetMpeg2Settings(Mpeg2Settings&& value) { m_mpeg2SettingsHasBeenSet = true; m_mpeg2Settings = std::move(value); }
    inline VideoCodecSettings& WithMpeg2Settings(const Mpeg2Settings& value) { SetMpeg2Settings(value); return *this;}
    inline VideoCodecSettings& WithMpeg2Settings(Mpeg2Settings&& value) { SetMpeg2Settings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Codec to the value PRORES.
     */
    inline const ProresSettings& GetProresSettings() const{ return m_proresSettings; }
    inline bool ProresSettingsHasBeenSet() const { return m_proresSettingsHasBeenSet; }
    inline void SetProresSettings(const ProresSettings& value) { m_proresSettingsHasBeenSet = true; m_proresSettings = value; }
    inline void SetProresSettings(ProresSettings&& value) { m_proresSettingsHasBeenSet = true; m_proresSettings = std::move(value); }
    inline VideoCodecSettings& WithProresSettings(const ProresSettings& value) { SetProresSettings(value); return *this;}
    inline VideoCodecSettings& WithProresSettings(ProresSettings&& value) { SetProresSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Codec, under VideoDescription>CodecSettings to the value
     * UNCOMPRESSED.
     */
    inline const UncompressedSettings& GetUncompressedSettings() const{ return m_uncompressedSettings; }
    inline bool UncompressedSettingsHasBeenSet() const { return m_uncompressedSettingsHasBeenSet; }
    inline void SetUncompressedSettings(const UncompressedSettings& value) { m_uncompressedSettingsHasBeenSet = true; m_uncompressedSettings = value; }
    inline void SetUncompressedSettings(UncompressedSettings&& value) { m_uncompressedSettingsHasBeenSet = true; m_uncompressedSettings = std::move(value); }
    inline VideoCodecSettings& WithUncompressedSettings(const UncompressedSettings& value) { SetUncompressedSettings(value); return *this;}
    inline VideoCodecSettings& WithUncompressedSettings(UncompressedSettings&& value) { SetUncompressedSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Codec to the value VC3
     */
    inline const Vc3Settings& GetVc3Settings() const{ return m_vc3Settings; }
    inline bool Vc3SettingsHasBeenSet() const { return m_vc3SettingsHasBeenSet; }
    inline void SetVc3Settings(const Vc3Settings& value) { m_vc3SettingsHasBeenSet = true; m_vc3Settings = value; }
    inline void SetVc3Settings(Vc3Settings&& value) { m_vc3SettingsHasBeenSet = true; m_vc3Settings = std::move(value); }
    inline VideoCodecSettings& WithVc3Settings(const Vc3Settings& value) { SetVc3Settings(value); return *this;}
    inline VideoCodecSettings& WithVc3Settings(Vc3Settings&& value) { SetVc3Settings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Codec to the value VP8.
     */
    inline const Vp8Settings& GetVp8Settings() const{ return m_vp8Settings; }
    inline bool Vp8SettingsHasBeenSet() const { return m_vp8SettingsHasBeenSet; }
    inline void SetVp8Settings(const Vp8Settings& value) { m_vp8SettingsHasBeenSet = true; m_vp8Settings = value; }
    inline void SetVp8Settings(Vp8Settings&& value) { m_vp8SettingsHasBeenSet = true; m_vp8Settings = std::move(value); }
    inline VideoCodecSettings& WithVp8Settings(const Vp8Settings& value) { SetVp8Settings(value); return *this;}
    inline VideoCodecSettings& WithVp8Settings(Vp8Settings&& value) { SetVp8Settings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Codec to the value VP9.
     */
    inline const Vp9Settings& GetVp9Settings() const{ return m_vp9Settings; }
    inline bool Vp9SettingsHasBeenSet() const { return m_vp9SettingsHasBeenSet; }
    inline void SetVp9Settings(const Vp9Settings& value) { m_vp9SettingsHasBeenSet = true; m_vp9Settings = value; }
    inline void SetVp9Settings(Vp9Settings&& value) { m_vp9SettingsHasBeenSet = true; m_vp9Settings = std::move(value); }
    inline VideoCodecSettings& WithVp9Settings(const Vp9Settings& value) { SetVp9Settings(value); return *this;}
    inline VideoCodecSettings& WithVp9Settings(Vp9Settings&& value) { SetVp9Settings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Codec to the value XAVC.
     */
    inline const XavcSettings& GetXavcSettings() const{ return m_xavcSettings; }
    inline bool XavcSettingsHasBeenSet() const { return m_xavcSettingsHasBeenSet; }
    inline void SetXavcSettings(const XavcSettings& value) { m_xavcSettingsHasBeenSet = true; m_xavcSettings = value; }
    inline void SetXavcSettings(XavcSettings&& value) { m_xavcSettingsHasBeenSet = true; m_xavcSettings = std::move(value); }
    inline VideoCodecSettings& WithXavcSettings(const XavcSettings& value) { SetXavcSettings(value); return *this;}
    inline VideoCodecSettings& WithXavcSettings(XavcSettings&& value) { SetXavcSettings(std::move(value)); return *this;}
    ///@}
  private:

    Av1Settings m_av1Settings;
    bool m_av1SettingsHasBeenSet = false;

    AvcIntraSettings m_avcIntraSettings;
    bool m_avcIntraSettingsHasBeenSet = false;

    VideoCodec m_codec;
    bool m_codecHasBeenSet = false;

    FrameCaptureSettings m_frameCaptureSettings;
    bool m_frameCaptureSettingsHasBeenSet = false;

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
