/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/FrameCaptureSettings.h>
#include <aws/medialive/model/H264Settings.h>
#include <aws/medialive/model/H265Settings.h>
#include <aws/medialive/model/Mpeg2Settings.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Video Codec Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/VideoCodecSettings">AWS
   * API Reference</a></p>
   */
  class VideoCodecSettings
  {
  public:
    AWS_MEDIALIVE_API VideoCodecSettings();
    AWS_MEDIALIVE_API VideoCodecSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API VideoCodecSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const FrameCaptureSettings& GetFrameCaptureSettings() const{ return m_frameCaptureSettings; }

    
    inline bool FrameCaptureSettingsHasBeenSet() const { return m_frameCaptureSettingsHasBeenSet; }

    
    inline void SetFrameCaptureSettings(const FrameCaptureSettings& value) { m_frameCaptureSettingsHasBeenSet = true; m_frameCaptureSettings = value; }

    
    inline void SetFrameCaptureSettings(FrameCaptureSettings&& value) { m_frameCaptureSettingsHasBeenSet = true; m_frameCaptureSettings = std::move(value); }

    
    inline VideoCodecSettings& WithFrameCaptureSettings(const FrameCaptureSettings& value) { SetFrameCaptureSettings(value); return *this;}

    
    inline VideoCodecSettings& WithFrameCaptureSettings(FrameCaptureSettings&& value) { SetFrameCaptureSettings(std::move(value)); return *this;}


    
    inline const H264Settings& GetH264Settings() const{ return m_h264Settings; }

    
    inline bool H264SettingsHasBeenSet() const { return m_h264SettingsHasBeenSet; }

    
    inline void SetH264Settings(const H264Settings& value) { m_h264SettingsHasBeenSet = true; m_h264Settings = value; }

    
    inline void SetH264Settings(H264Settings&& value) { m_h264SettingsHasBeenSet = true; m_h264Settings = std::move(value); }

    
    inline VideoCodecSettings& WithH264Settings(const H264Settings& value) { SetH264Settings(value); return *this;}

    
    inline VideoCodecSettings& WithH264Settings(H264Settings&& value) { SetH264Settings(std::move(value)); return *this;}


    
    inline const H265Settings& GetH265Settings() const{ return m_h265Settings; }

    
    inline bool H265SettingsHasBeenSet() const { return m_h265SettingsHasBeenSet; }

    
    inline void SetH265Settings(const H265Settings& value) { m_h265SettingsHasBeenSet = true; m_h265Settings = value; }

    
    inline void SetH265Settings(H265Settings&& value) { m_h265SettingsHasBeenSet = true; m_h265Settings = std::move(value); }

    
    inline VideoCodecSettings& WithH265Settings(const H265Settings& value) { SetH265Settings(value); return *this;}

    
    inline VideoCodecSettings& WithH265Settings(H265Settings&& value) { SetH265Settings(std::move(value)); return *this;}


    
    inline const Mpeg2Settings& GetMpeg2Settings() const{ return m_mpeg2Settings; }

    
    inline bool Mpeg2SettingsHasBeenSet() const { return m_mpeg2SettingsHasBeenSet; }

    
    inline void SetMpeg2Settings(const Mpeg2Settings& value) { m_mpeg2SettingsHasBeenSet = true; m_mpeg2Settings = value; }

    
    inline void SetMpeg2Settings(Mpeg2Settings&& value) { m_mpeg2SettingsHasBeenSet = true; m_mpeg2Settings = std::move(value); }

    
    inline VideoCodecSettings& WithMpeg2Settings(const Mpeg2Settings& value) { SetMpeg2Settings(value); return *this;}

    
    inline VideoCodecSettings& WithMpeg2Settings(Mpeg2Settings&& value) { SetMpeg2Settings(std::move(value)); return *this;}

  private:

    FrameCaptureSettings m_frameCaptureSettings;
    bool m_frameCaptureSettingsHasBeenSet = false;

    H264Settings m_h264Settings;
    bool m_h264SettingsHasBeenSet = false;

    H265Settings m_h265Settings;
    bool m_h265SettingsHasBeenSet = false;

    Mpeg2Settings m_mpeg2Settings;
    bool m_mpeg2SettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
