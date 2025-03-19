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
#include <aws/medialive/model/Av1Settings.h>
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
    AWS_MEDIALIVE_API VideoCodecSettings() = default;
    AWS_MEDIALIVE_API VideoCodecSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API VideoCodecSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const FrameCaptureSettings& GetFrameCaptureSettings() const { return m_frameCaptureSettings; }
    inline bool FrameCaptureSettingsHasBeenSet() const { return m_frameCaptureSettingsHasBeenSet; }
    template<typename FrameCaptureSettingsT = FrameCaptureSettings>
    void SetFrameCaptureSettings(FrameCaptureSettingsT&& value) { m_frameCaptureSettingsHasBeenSet = true; m_frameCaptureSettings = std::forward<FrameCaptureSettingsT>(value); }
    template<typename FrameCaptureSettingsT = FrameCaptureSettings>
    VideoCodecSettings& WithFrameCaptureSettings(FrameCaptureSettingsT&& value) { SetFrameCaptureSettings(std::forward<FrameCaptureSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const H264Settings& GetH264Settings() const { return m_h264Settings; }
    inline bool H264SettingsHasBeenSet() const { return m_h264SettingsHasBeenSet; }
    template<typename H264SettingsT = H264Settings>
    void SetH264Settings(H264SettingsT&& value) { m_h264SettingsHasBeenSet = true; m_h264Settings = std::forward<H264SettingsT>(value); }
    template<typename H264SettingsT = H264Settings>
    VideoCodecSettings& WithH264Settings(H264SettingsT&& value) { SetH264Settings(std::forward<H264SettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const H265Settings& GetH265Settings() const { return m_h265Settings; }
    inline bool H265SettingsHasBeenSet() const { return m_h265SettingsHasBeenSet; }
    template<typename H265SettingsT = H265Settings>
    void SetH265Settings(H265SettingsT&& value) { m_h265SettingsHasBeenSet = true; m_h265Settings = std::forward<H265SettingsT>(value); }
    template<typename H265SettingsT = H265Settings>
    VideoCodecSettings& WithH265Settings(H265SettingsT&& value) { SetH265Settings(std::forward<H265SettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Mpeg2Settings& GetMpeg2Settings() const { return m_mpeg2Settings; }
    inline bool Mpeg2SettingsHasBeenSet() const { return m_mpeg2SettingsHasBeenSet; }
    template<typename Mpeg2SettingsT = Mpeg2Settings>
    void SetMpeg2Settings(Mpeg2SettingsT&& value) { m_mpeg2SettingsHasBeenSet = true; m_mpeg2Settings = std::forward<Mpeg2SettingsT>(value); }
    template<typename Mpeg2SettingsT = Mpeg2Settings>
    VideoCodecSettings& WithMpeg2Settings(Mpeg2SettingsT&& value) { SetMpeg2Settings(std::forward<Mpeg2SettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Av1Settings& GetAv1Settings() const { return m_av1Settings; }
    inline bool Av1SettingsHasBeenSet() const { return m_av1SettingsHasBeenSet; }
    template<typename Av1SettingsT = Av1Settings>
    void SetAv1Settings(Av1SettingsT&& value) { m_av1SettingsHasBeenSet = true; m_av1Settings = std::forward<Av1SettingsT>(value); }
    template<typename Av1SettingsT = Av1Settings>
    VideoCodecSettings& WithAv1Settings(Av1SettingsT&& value) { SetAv1Settings(std::forward<Av1SettingsT>(value)); return *this;}
    ///@}
  private:

    FrameCaptureSettings m_frameCaptureSettings;
    bool m_frameCaptureSettingsHasBeenSet = false;

    H264Settings m_h264Settings;
    bool m_h264SettingsHasBeenSet = false;

    H265Settings m_h265Settings;
    bool m_h265SettingsHasBeenSet = false;

    Mpeg2Settings m_mpeg2Settings;
    bool m_mpeg2SettingsHasBeenSet = false;

    Av1Settings m_av1Settings;
    bool m_av1SettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
