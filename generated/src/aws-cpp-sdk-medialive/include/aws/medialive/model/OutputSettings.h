/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/ArchiveOutputSettings.h>
#include <aws/medialive/model/FrameCaptureOutputSettings.h>
#include <aws/medialive/model/HlsOutputSettings.h>
#include <aws/medialive/model/MediaPackageOutputSettings.h>
#include <aws/medialive/model/MsSmoothOutputSettings.h>
#include <aws/medialive/model/MultiplexOutputSettings.h>
#include <aws/medialive/model/RtmpOutputSettings.h>
#include <aws/medialive/model/UdpOutputSettings.h>
#include <aws/medialive/model/CmafIngestOutputSettings.h>
#include <aws/medialive/model/SrtOutputSettings.h>
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
   * Output Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/OutputSettings">AWS
   * API Reference</a></p>
   */
  class OutputSettings
  {
  public:
    AWS_MEDIALIVE_API OutputSettings() = default;
    AWS_MEDIALIVE_API OutputSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API OutputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ArchiveOutputSettings& GetArchiveOutputSettings() const { return m_archiveOutputSettings; }
    inline bool ArchiveOutputSettingsHasBeenSet() const { return m_archiveOutputSettingsHasBeenSet; }
    template<typename ArchiveOutputSettingsT = ArchiveOutputSettings>
    void SetArchiveOutputSettings(ArchiveOutputSettingsT&& value) { m_archiveOutputSettingsHasBeenSet = true; m_archiveOutputSettings = std::forward<ArchiveOutputSettingsT>(value); }
    template<typename ArchiveOutputSettingsT = ArchiveOutputSettings>
    OutputSettings& WithArchiveOutputSettings(ArchiveOutputSettingsT&& value) { SetArchiveOutputSettings(std::forward<ArchiveOutputSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const FrameCaptureOutputSettings& GetFrameCaptureOutputSettings() const { return m_frameCaptureOutputSettings; }
    inline bool FrameCaptureOutputSettingsHasBeenSet() const { return m_frameCaptureOutputSettingsHasBeenSet; }
    template<typename FrameCaptureOutputSettingsT = FrameCaptureOutputSettings>
    void SetFrameCaptureOutputSettings(FrameCaptureOutputSettingsT&& value) { m_frameCaptureOutputSettingsHasBeenSet = true; m_frameCaptureOutputSettings = std::forward<FrameCaptureOutputSettingsT>(value); }
    template<typename FrameCaptureOutputSettingsT = FrameCaptureOutputSettings>
    OutputSettings& WithFrameCaptureOutputSettings(FrameCaptureOutputSettingsT&& value) { SetFrameCaptureOutputSettings(std::forward<FrameCaptureOutputSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const HlsOutputSettings& GetHlsOutputSettings() const { return m_hlsOutputSettings; }
    inline bool HlsOutputSettingsHasBeenSet() const { return m_hlsOutputSettingsHasBeenSet; }
    template<typename HlsOutputSettingsT = HlsOutputSettings>
    void SetHlsOutputSettings(HlsOutputSettingsT&& value) { m_hlsOutputSettingsHasBeenSet = true; m_hlsOutputSettings = std::forward<HlsOutputSettingsT>(value); }
    template<typename HlsOutputSettingsT = HlsOutputSettings>
    OutputSettings& WithHlsOutputSettings(HlsOutputSettingsT&& value) { SetHlsOutputSettings(std::forward<HlsOutputSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MediaPackageOutputSettings& GetMediaPackageOutputSettings() const { return m_mediaPackageOutputSettings; }
    inline bool MediaPackageOutputSettingsHasBeenSet() const { return m_mediaPackageOutputSettingsHasBeenSet; }
    template<typename MediaPackageOutputSettingsT = MediaPackageOutputSettings>
    void SetMediaPackageOutputSettings(MediaPackageOutputSettingsT&& value) { m_mediaPackageOutputSettingsHasBeenSet = true; m_mediaPackageOutputSettings = std::forward<MediaPackageOutputSettingsT>(value); }
    template<typename MediaPackageOutputSettingsT = MediaPackageOutputSettings>
    OutputSettings& WithMediaPackageOutputSettings(MediaPackageOutputSettingsT&& value) { SetMediaPackageOutputSettings(std::forward<MediaPackageOutputSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MsSmoothOutputSettings& GetMsSmoothOutputSettings() const { return m_msSmoothOutputSettings; }
    inline bool MsSmoothOutputSettingsHasBeenSet() const { return m_msSmoothOutputSettingsHasBeenSet; }
    template<typename MsSmoothOutputSettingsT = MsSmoothOutputSettings>
    void SetMsSmoothOutputSettings(MsSmoothOutputSettingsT&& value) { m_msSmoothOutputSettingsHasBeenSet = true; m_msSmoothOutputSettings = std::forward<MsSmoothOutputSettingsT>(value); }
    template<typename MsSmoothOutputSettingsT = MsSmoothOutputSettings>
    OutputSettings& WithMsSmoothOutputSettings(MsSmoothOutputSettingsT&& value) { SetMsSmoothOutputSettings(std::forward<MsSmoothOutputSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MultiplexOutputSettings& GetMultiplexOutputSettings() const { return m_multiplexOutputSettings; }
    inline bool MultiplexOutputSettingsHasBeenSet() const { return m_multiplexOutputSettingsHasBeenSet; }
    template<typename MultiplexOutputSettingsT = MultiplexOutputSettings>
    void SetMultiplexOutputSettings(MultiplexOutputSettingsT&& value) { m_multiplexOutputSettingsHasBeenSet = true; m_multiplexOutputSettings = std::forward<MultiplexOutputSettingsT>(value); }
    template<typename MultiplexOutputSettingsT = MultiplexOutputSettings>
    OutputSettings& WithMultiplexOutputSettings(MultiplexOutputSettingsT&& value) { SetMultiplexOutputSettings(std::forward<MultiplexOutputSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RtmpOutputSettings& GetRtmpOutputSettings() const { return m_rtmpOutputSettings; }
    inline bool RtmpOutputSettingsHasBeenSet() const { return m_rtmpOutputSettingsHasBeenSet; }
    template<typename RtmpOutputSettingsT = RtmpOutputSettings>
    void SetRtmpOutputSettings(RtmpOutputSettingsT&& value) { m_rtmpOutputSettingsHasBeenSet = true; m_rtmpOutputSettings = std::forward<RtmpOutputSettingsT>(value); }
    template<typename RtmpOutputSettingsT = RtmpOutputSettings>
    OutputSettings& WithRtmpOutputSettings(RtmpOutputSettingsT&& value) { SetRtmpOutputSettings(std::forward<RtmpOutputSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UdpOutputSettings& GetUdpOutputSettings() const { return m_udpOutputSettings; }
    inline bool UdpOutputSettingsHasBeenSet() const { return m_udpOutputSettingsHasBeenSet; }
    template<typename UdpOutputSettingsT = UdpOutputSettings>
    void SetUdpOutputSettings(UdpOutputSettingsT&& value) { m_udpOutputSettingsHasBeenSet = true; m_udpOutputSettings = std::forward<UdpOutputSettingsT>(value); }
    template<typename UdpOutputSettingsT = UdpOutputSettings>
    OutputSettings& WithUdpOutputSettings(UdpOutputSettingsT&& value) { SetUdpOutputSettings(std::forward<UdpOutputSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CmafIngestOutputSettings& GetCmafIngestOutputSettings() const { return m_cmafIngestOutputSettings; }
    inline bool CmafIngestOutputSettingsHasBeenSet() const { return m_cmafIngestOutputSettingsHasBeenSet; }
    template<typename CmafIngestOutputSettingsT = CmafIngestOutputSettings>
    void SetCmafIngestOutputSettings(CmafIngestOutputSettingsT&& value) { m_cmafIngestOutputSettingsHasBeenSet = true; m_cmafIngestOutputSettings = std::forward<CmafIngestOutputSettingsT>(value); }
    template<typename CmafIngestOutputSettingsT = CmafIngestOutputSettings>
    OutputSettings& WithCmafIngestOutputSettings(CmafIngestOutputSettingsT&& value) { SetCmafIngestOutputSettings(std::forward<CmafIngestOutputSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SrtOutputSettings& GetSrtOutputSettings() const { return m_srtOutputSettings; }
    inline bool SrtOutputSettingsHasBeenSet() const { return m_srtOutputSettingsHasBeenSet; }
    template<typename SrtOutputSettingsT = SrtOutputSettings>
    void SetSrtOutputSettings(SrtOutputSettingsT&& value) { m_srtOutputSettingsHasBeenSet = true; m_srtOutputSettings = std::forward<SrtOutputSettingsT>(value); }
    template<typename SrtOutputSettingsT = SrtOutputSettings>
    OutputSettings& WithSrtOutputSettings(SrtOutputSettingsT&& value) { SetSrtOutputSettings(std::forward<SrtOutputSettingsT>(value)); return *this;}
    ///@}
  private:

    ArchiveOutputSettings m_archiveOutputSettings;
    bool m_archiveOutputSettingsHasBeenSet = false;

    FrameCaptureOutputSettings m_frameCaptureOutputSettings;
    bool m_frameCaptureOutputSettingsHasBeenSet = false;

    HlsOutputSettings m_hlsOutputSettings;
    bool m_hlsOutputSettingsHasBeenSet = false;

    MediaPackageOutputSettings m_mediaPackageOutputSettings;
    bool m_mediaPackageOutputSettingsHasBeenSet = false;

    MsSmoothOutputSettings m_msSmoothOutputSettings;
    bool m_msSmoothOutputSettingsHasBeenSet = false;

    MultiplexOutputSettings m_multiplexOutputSettings;
    bool m_multiplexOutputSettingsHasBeenSet = false;

    RtmpOutputSettings m_rtmpOutputSettings;
    bool m_rtmpOutputSettingsHasBeenSet = false;

    UdpOutputSettings m_udpOutputSettings;
    bool m_udpOutputSettingsHasBeenSet = false;

    CmafIngestOutputSettings m_cmafIngestOutputSettings;
    bool m_cmafIngestOutputSettingsHasBeenSet = false;

    SrtOutputSettings m_srtOutputSettings;
    bool m_srtOutputSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
