/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/ArchiveGroupSettings.h>
#include <aws/medialive/model/FrameCaptureGroupSettings.h>
#include <aws/medialive/model/HlsGroupSettings.h>
#include <aws/medialive/model/MediaPackageGroupSettings.h>
#include <aws/medialive/model/MsSmoothGroupSettings.h>
#include <aws/medialive/model/MultiplexGroupSettings.h>
#include <aws/medialive/model/RtmpGroupSettings.h>
#include <aws/medialive/model/UdpGroupSettings.h>
#include <aws/medialive/model/CmafIngestGroupSettings.h>
#include <aws/medialive/model/SrtGroupSettings.h>
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
   * Output Group Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/OutputGroupSettings">AWS
   * API Reference</a></p>
   */
  class OutputGroupSettings
  {
  public:
    AWS_MEDIALIVE_API OutputGroupSettings() = default;
    AWS_MEDIALIVE_API OutputGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API OutputGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ArchiveGroupSettings& GetArchiveGroupSettings() const { return m_archiveGroupSettings; }
    inline bool ArchiveGroupSettingsHasBeenSet() const { return m_archiveGroupSettingsHasBeenSet; }
    template<typename ArchiveGroupSettingsT = ArchiveGroupSettings>
    void SetArchiveGroupSettings(ArchiveGroupSettingsT&& value) { m_archiveGroupSettingsHasBeenSet = true; m_archiveGroupSettings = std::forward<ArchiveGroupSettingsT>(value); }
    template<typename ArchiveGroupSettingsT = ArchiveGroupSettings>
    OutputGroupSettings& WithArchiveGroupSettings(ArchiveGroupSettingsT&& value) { SetArchiveGroupSettings(std::forward<ArchiveGroupSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const FrameCaptureGroupSettings& GetFrameCaptureGroupSettings() const { return m_frameCaptureGroupSettings; }
    inline bool FrameCaptureGroupSettingsHasBeenSet() const { return m_frameCaptureGroupSettingsHasBeenSet; }
    template<typename FrameCaptureGroupSettingsT = FrameCaptureGroupSettings>
    void SetFrameCaptureGroupSettings(FrameCaptureGroupSettingsT&& value) { m_frameCaptureGroupSettingsHasBeenSet = true; m_frameCaptureGroupSettings = std::forward<FrameCaptureGroupSettingsT>(value); }
    template<typename FrameCaptureGroupSettingsT = FrameCaptureGroupSettings>
    OutputGroupSettings& WithFrameCaptureGroupSettings(FrameCaptureGroupSettingsT&& value) { SetFrameCaptureGroupSettings(std::forward<FrameCaptureGroupSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const HlsGroupSettings& GetHlsGroupSettings() const { return m_hlsGroupSettings; }
    inline bool HlsGroupSettingsHasBeenSet() const { return m_hlsGroupSettingsHasBeenSet; }
    template<typename HlsGroupSettingsT = HlsGroupSettings>
    void SetHlsGroupSettings(HlsGroupSettingsT&& value) { m_hlsGroupSettingsHasBeenSet = true; m_hlsGroupSettings = std::forward<HlsGroupSettingsT>(value); }
    template<typename HlsGroupSettingsT = HlsGroupSettings>
    OutputGroupSettings& WithHlsGroupSettings(HlsGroupSettingsT&& value) { SetHlsGroupSettings(std::forward<HlsGroupSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MediaPackageGroupSettings& GetMediaPackageGroupSettings() const { return m_mediaPackageGroupSettings; }
    inline bool MediaPackageGroupSettingsHasBeenSet() const { return m_mediaPackageGroupSettingsHasBeenSet; }
    template<typename MediaPackageGroupSettingsT = MediaPackageGroupSettings>
    void SetMediaPackageGroupSettings(MediaPackageGroupSettingsT&& value) { m_mediaPackageGroupSettingsHasBeenSet = true; m_mediaPackageGroupSettings = std::forward<MediaPackageGroupSettingsT>(value); }
    template<typename MediaPackageGroupSettingsT = MediaPackageGroupSettings>
    OutputGroupSettings& WithMediaPackageGroupSettings(MediaPackageGroupSettingsT&& value) { SetMediaPackageGroupSettings(std::forward<MediaPackageGroupSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MsSmoothGroupSettings& GetMsSmoothGroupSettings() const { return m_msSmoothGroupSettings; }
    inline bool MsSmoothGroupSettingsHasBeenSet() const { return m_msSmoothGroupSettingsHasBeenSet; }
    template<typename MsSmoothGroupSettingsT = MsSmoothGroupSettings>
    void SetMsSmoothGroupSettings(MsSmoothGroupSettingsT&& value) { m_msSmoothGroupSettingsHasBeenSet = true; m_msSmoothGroupSettings = std::forward<MsSmoothGroupSettingsT>(value); }
    template<typename MsSmoothGroupSettingsT = MsSmoothGroupSettings>
    OutputGroupSettings& WithMsSmoothGroupSettings(MsSmoothGroupSettingsT&& value) { SetMsSmoothGroupSettings(std::forward<MsSmoothGroupSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MultiplexGroupSettings& GetMultiplexGroupSettings() const { return m_multiplexGroupSettings; }
    inline bool MultiplexGroupSettingsHasBeenSet() const { return m_multiplexGroupSettingsHasBeenSet; }
    template<typename MultiplexGroupSettingsT = MultiplexGroupSettings>
    void SetMultiplexGroupSettings(MultiplexGroupSettingsT&& value) { m_multiplexGroupSettingsHasBeenSet = true; m_multiplexGroupSettings = std::forward<MultiplexGroupSettingsT>(value); }
    template<typename MultiplexGroupSettingsT = MultiplexGroupSettings>
    OutputGroupSettings& WithMultiplexGroupSettings(MultiplexGroupSettingsT&& value) { SetMultiplexGroupSettings(std::forward<MultiplexGroupSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RtmpGroupSettings& GetRtmpGroupSettings() const { return m_rtmpGroupSettings; }
    inline bool RtmpGroupSettingsHasBeenSet() const { return m_rtmpGroupSettingsHasBeenSet; }
    template<typename RtmpGroupSettingsT = RtmpGroupSettings>
    void SetRtmpGroupSettings(RtmpGroupSettingsT&& value) { m_rtmpGroupSettingsHasBeenSet = true; m_rtmpGroupSettings = std::forward<RtmpGroupSettingsT>(value); }
    template<typename RtmpGroupSettingsT = RtmpGroupSettings>
    OutputGroupSettings& WithRtmpGroupSettings(RtmpGroupSettingsT&& value) { SetRtmpGroupSettings(std::forward<RtmpGroupSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UdpGroupSettings& GetUdpGroupSettings() const { return m_udpGroupSettings; }
    inline bool UdpGroupSettingsHasBeenSet() const { return m_udpGroupSettingsHasBeenSet; }
    template<typename UdpGroupSettingsT = UdpGroupSettings>
    void SetUdpGroupSettings(UdpGroupSettingsT&& value) { m_udpGroupSettingsHasBeenSet = true; m_udpGroupSettings = std::forward<UdpGroupSettingsT>(value); }
    template<typename UdpGroupSettingsT = UdpGroupSettings>
    OutputGroupSettings& WithUdpGroupSettings(UdpGroupSettingsT&& value) { SetUdpGroupSettings(std::forward<UdpGroupSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CmafIngestGroupSettings& GetCmafIngestGroupSettings() const { return m_cmafIngestGroupSettings; }
    inline bool CmafIngestGroupSettingsHasBeenSet() const { return m_cmafIngestGroupSettingsHasBeenSet; }
    template<typename CmafIngestGroupSettingsT = CmafIngestGroupSettings>
    void SetCmafIngestGroupSettings(CmafIngestGroupSettingsT&& value) { m_cmafIngestGroupSettingsHasBeenSet = true; m_cmafIngestGroupSettings = std::forward<CmafIngestGroupSettingsT>(value); }
    template<typename CmafIngestGroupSettingsT = CmafIngestGroupSettings>
    OutputGroupSettings& WithCmafIngestGroupSettings(CmafIngestGroupSettingsT&& value) { SetCmafIngestGroupSettings(std::forward<CmafIngestGroupSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SrtGroupSettings& GetSrtGroupSettings() const { return m_srtGroupSettings; }
    inline bool SrtGroupSettingsHasBeenSet() const { return m_srtGroupSettingsHasBeenSet; }
    template<typename SrtGroupSettingsT = SrtGroupSettings>
    void SetSrtGroupSettings(SrtGroupSettingsT&& value) { m_srtGroupSettingsHasBeenSet = true; m_srtGroupSettings = std::forward<SrtGroupSettingsT>(value); }
    template<typename SrtGroupSettingsT = SrtGroupSettings>
    OutputGroupSettings& WithSrtGroupSettings(SrtGroupSettingsT&& value) { SetSrtGroupSettings(std::forward<SrtGroupSettingsT>(value)); return *this;}
    ///@}
  private:

    ArchiveGroupSettings m_archiveGroupSettings;
    bool m_archiveGroupSettingsHasBeenSet = false;

    FrameCaptureGroupSettings m_frameCaptureGroupSettings;
    bool m_frameCaptureGroupSettingsHasBeenSet = false;

    HlsGroupSettings m_hlsGroupSettings;
    bool m_hlsGroupSettingsHasBeenSet = false;

    MediaPackageGroupSettings m_mediaPackageGroupSettings;
    bool m_mediaPackageGroupSettingsHasBeenSet = false;

    MsSmoothGroupSettings m_msSmoothGroupSettings;
    bool m_msSmoothGroupSettingsHasBeenSet = false;

    MultiplexGroupSettings m_multiplexGroupSettings;
    bool m_multiplexGroupSettingsHasBeenSet = false;

    RtmpGroupSettings m_rtmpGroupSettings;
    bool m_rtmpGroupSettingsHasBeenSet = false;

    UdpGroupSettings m_udpGroupSettings;
    bool m_udpGroupSettingsHasBeenSet = false;

    CmafIngestGroupSettings m_cmafIngestGroupSettings;
    bool m_cmafIngestGroupSettingsHasBeenSet = false;

    SrtGroupSettings m_srtGroupSettings;
    bool m_srtGroupSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
