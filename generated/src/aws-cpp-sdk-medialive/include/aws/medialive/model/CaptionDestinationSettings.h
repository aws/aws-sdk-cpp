/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AribDestinationSettings.h>
#include <aws/medialive/model/BurnInDestinationSettings.h>
#include <aws/medialive/model/DvbSubDestinationSettings.h>
#include <aws/medialive/model/EbuTtDDestinationSettings.h>
#include <aws/medialive/model/EmbeddedDestinationSettings.h>
#include <aws/medialive/model/EmbeddedPlusScte20DestinationSettings.h>
#include <aws/medialive/model/RtmpCaptionInfoDestinationSettings.h>
#include <aws/medialive/model/Scte20PlusEmbeddedDestinationSettings.h>
#include <aws/medialive/model/Scte27DestinationSettings.h>
#include <aws/medialive/model/SmpteTtDestinationSettings.h>
#include <aws/medialive/model/TeletextDestinationSettings.h>
#include <aws/medialive/model/TtmlDestinationSettings.h>
#include <aws/medialive/model/WebvttDestinationSettings.h>
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
   * Caption Destination Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CaptionDestinationSettings">AWS
   * API Reference</a></p>
   */
  class CaptionDestinationSettings
  {
  public:
    AWS_MEDIALIVE_API CaptionDestinationSettings() = default;
    AWS_MEDIALIVE_API CaptionDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API CaptionDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const AribDestinationSettings& GetAribDestinationSettings() const { return m_aribDestinationSettings; }
    inline bool AribDestinationSettingsHasBeenSet() const { return m_aribDestinationSettingsHasBeenSet; }
    template<typename AribDestinationSettingsT = AribDestinationSettings>
    void SetAribDestinationSettings(AribDestinationSettingsT&& value) { m_aribDestinationSettingsHasBeenSet = true; m_aribDestinationSettings = std::forward<AribDestinationSettingsT>(value); }
    template<typename AribDestinationSettingsT = AribDestinationSettings>
    CaptionDestinationSettings& WithAribDestinationSettings(AribDestinationSettingsT&& value) { SetAribDestinationSettings(std::forward<AribDestinationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const BurnInDestinationSettings& GetBurnInDestinationSettings() const { return m_burnInDestinationSettings; }
    inline bool BurnInDestinationSettingsHasBeenSet() const { return m_burnInDestinationSettingsHasBeenSet; }
    template<typename BurnInDestinationSettingsT = BurnInDestinationSettings>
    void SetBurnInDestinationSettings(BurnInDestinationSettingsT&& value) { m_burnInDestinationSettingsHasBeenSet = true; m_burnInDestinationSettings = std::forward<BurnInDestinationSettingsT>(value); }
    template<typename BurnInDestinationSettingsT = BurnInDestinationSettings>
    CaptionDestinationSettings& WithBurnInDestinationSettings(BurnInDestinationSettingsT&& value) { SetBurnInDestinationSettings(std::forward<BurnInDestinationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DvbSubDestinationSettings& GetDvbSubDestinationSettings() const { return m_dvbSubDestinationSettings; }
    inline bool DvbSubDestinationSettingsHasBeenSet() const { return m_dvbSubDestinationSettingsHasBeenSet; }
    template<typename DvbSubDestinationSettingsT = DvbSubDestinationSettings>
    void SetDvbSubDestinationSettings(DvbSubDestinationSettingsT&& value) { m_dvbSubDestinationSettingsHasBeenSet = true; m_dvbSubDestinationSettings = std::forward<DvbSubDestinationSettingsT>(value); }
    template<typename DvbSubDestinationSettingsT = DvbSubDestinationSettings>
    CaptionDestinationSettings& WithDvbSubDestinationSettings(DvbSubDestinationSettingsT&& value) { SetDvbSubDestinationSettings(std::forward<DvbSubDestinationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const EbuTtDDestinationSettings& GetEbuTtDDestinationSettings() const { return m_ebuTtDDestinationSettings; }
    inline bool EbuTtDDestinationSettingsHasBeenSet() const { return m_ebuTtDDestinationSettingsHasBeenSet; }
    template<typename EbuTtDDestinationSettingsT = EbuTtDDestinationSettings>
    void SetEbuTtDDestinationSettings(EbuTtDDestinationSettingsT&& value) { m_ebuTtDDestinationSettingsHasBeenSet = true; m_ebuTtDDestinationSettings = std::forward<EbuTtDDestinationSettingsT>(value); }
    template<typename EbuTtDDestinationSettingsT = EbuTtDDestinationSettings>
    CaptionDestinationSettings& WithEbuTtDDestinationSettings(EbuTtDDestinationSettingsT&& value) { SetEbuTtDDestinationSettings(std::forward<EbuTtDDestinationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const EmbeddedDestinationSettings& GetEmbeddedDestinationSettings() const { return m_embeddedDestinationSettings; }
    inline bool EmbeddedDestinationSettingsHasBeenSet() const { return m_embeddedDestinationSettingsHasBeenSet; }
    template<typename EmbeddedDestinationSettingsT = EmbeddedDestinationSettings>
    void SetEmbeddedDestinationSettings(EmbeddedDestinationSettingsT&& value) { m_embeddedDestinationSettingsHasBeenSet = true; m_embeddedDestinationSettings = std::forward<EmbeddedDestinationSettingsT>(value); }
    template<typename EmbeddedDestinationSettingsT = EmbeddedDestinationSettings>
    CaptionDestinationSettings& WithEmbeddedDestinationSettings(EmbeddedDestinationSettingsT&& value) { SetEmbeddedDestinationSettings(std::forward<EmbeddedDestinationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const EmbeddedPlusScte20DestinationSettings& GetEmbeddedPlusScte20DestinationSettings() const { return m_embeddedPlusScte20DestinationSettings; }
    inline bool EmbeddedPlusScte20DestinationSettingsHasBeenSet() const { return m_embeddedPlusScte20DestinationSettingsHasBeenSet; }
    template<typename EmbeddedPlusScte20DestinationSettingsT = EmbeddedPlusScte20DestinationSettings>
    void SetEmbeddedPlusScte20DestinationSettings(EmbeddedPlusScte20DestinationSettingsT&& value) { m_embeddedPlusScte20DestinationSettingsHasBeenSet = true; m_embeddedPlusScte20DestinationSettings = std::forward<EmbeddedPlusScte20DestinationSettingsT>(value); }
    template<typename EmbeddedPlusScte20DestinationSettingsT = EmbeddedPlusScte20DestinationSettings>
    CaptionDestinationSettings& WithEmbeddedPlusScte20DestinationSettings(EmbeddedPlusScte20DestinationSettingsT&& value) { SetEmbeddedPlusScte20DestinationSettings(std::forward<EmbeddedPlusScte20DestinationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RtmpCaptionInfoDestinationSettings& GetRtmpCaptionInfoDestinationSettings() const { return m_rtmpCaptionInfoDestinationSettings; }
    inline bool RtmpCaptionInfoDestinationSettingsHasBeenSet() const { return m_rtmpCaptionInfoDestinationSettingsHasBeenSet; }
    template<typename RtmpCaptionInfoDestinationSettingsT = RtmpCaptionInfoDestinationSettings>
    void SetRtmpCaptionInfoDestinationSettings(RtmpCaptionInfoDestinationSettingsT&& value) { m_rtmpCaptionInfoDestinationSettingsHasBeenSet = true; m_rtmpCaptionInfoDestinationSettings = std::forward<RtmpCaptionInfoDestinationSettingsT>(value); }
    template<typename RtmpCaptionInfoDestinationSettingsT = RtmpCaptionInfoDestinationSettings>
    CaptionDestinationSettings& WithRtmpCaptionInfoDestinationSettings(RtmpCaptionInfoDestinationSettingsT&& value) { SetRtmpCaptionInfoDestinationSettings(std::forward<RtmpCaptionInfoDestinationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Scte20PlusEmbeddedDestinationSettings& GetScte20PlusEmbeddedDestinationSettings() const { return m_scte20PlusEmbeddedDestinationSettings; }
    inline bool Scte20PlusEmbeddedDestinationSettingsHasBeenSet() const { return m_scte20PlusEmbeddedDestinationSettingsHasBeenSet; }
    template<typename Scte20PlusEmbeddedDestinationSettingsT = Scte20PlusEmbeddedDestinationSettings>
    void SetScte20PlusEmbeddedDestinationSettings(Scte20PlusEmbeddedDestinationSettingsT&& value) { m_scte20PlusEmbeddedDestinationSettingsHasBeenSet = true; m_scte20PlusEmbeddedDestinationSettings = std::forward<Scte20PlusEmbeddedDestinationSettingsT>(value); }
    template<typename Scte20PlusEmbeddedDestinationSettingsT = Scte20PlusEmbeddedDestinationSettings>
    CaptionDestinationSettings& WithScte20PlusEmbeddedDestinationSettings(Scte20PlusEmbeddedDestinationSettingsT&& value) { SetScte20PlusEmbeddedDestinationSettings(std::forward<Scte20PlusEmbeddedDestinationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Scte27DestinationSettings& GetScte27DestinationSettings() const { return m_scte27DestinationSettings; }
    inline bool Scte27DestinationSettingsHasBeenSet() const { return m_scte27DestinationSettingsHasBeenSet; }
    template<typename Scte27DestinationSettingsT = Scte27DestinationSettings>
    void SetScte27DestinationSettings(Scte27DestinationSettingsT&& value) { m_scte27DestinationSettingsHasBeenSet = true; m_scte27DestinationSettings = std::forward<Scte27DestinationSettingsT>(value); }
    template<typename Scte27DestinationSettingsT = Scte27DestinationSettings>
    CaptionDestinationSettings& WithScte27DestinationSettings(Scte27DestinationSettingsT&& value) { SetScte27DestinationSettings(std::forward<Scte27DestinationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SmpteTtDestinationSettings& GetSmpteTtDestinationSettings() const { return m_smpteTtDestinationSettings; }
    inline bool SmpteTtDestinationSettingsHasBeenSet() const { return m_smpteTtDestinationSettingsHasBeenSet; }
    template<typename SmpteTtDestinationSettingsT = SmpteTtDestinationSettings>
    void SetSmpteTtDestinationSettings(SmpteTtDestinationSettingsT&& value) { m_smpteTtDestinationSettingsHasBeenSet = true; m_smpteTtDestinationSettings = std::forward<SmpteTtDestinationSettingsT>(value); }
    template<typename SmpteTtDestinationSettingsT = SmpteTtDestinationSettings>
    CaptionDestinationSettings& WithSmpteTtDestinationSettings(SmpteTtDestinationSettingsT&& value) { SetSmpteTtDestinationSettings(std::forward<SmpteTtDestinationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TeletextDestinationSettings& GetTeletextDestinationSettings() const { return m_teletextDestinationSettings; }
    inline bool TeletextDestinationSettingsHasBeenSet() const { return m_teletextDestinationSettingsHasBeenSet; }
    template<typename TeletextDestinationSettingsT = TeletextDestinationSettings>
    void SetTeletextDestinationSettings(TeletextDestinationSettingsT&& value) { m_teletextDestinationSettingsHasBeenSet = true; m_teletextDestinationSettings = std::forward<TeletextDestinationSettingsT>(value); }
    template<typename TeletextDestinationSettingsT = TeletextDestinationSettings>
    CaptionDestinationSettings& WithTeletextDestinationSettings(TeletextDestinationSettingsT&& value) { SetTeletextDestinationSettings(std::forward<TeletextDestinationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TtmlDestinationSettings& GetTtmlDestinationSettings() const { return m_ttmlDestinationSettings; }
    inline bool TtmlDestinationSettingsHasBeenSet() const { return m_ttmlDestinationSettingsHasBeenSet; }
    template<typename TtmlDestinationSettingsT = TtmlDestinationSettings>
    void SetTtmlDestinationSettings(TtmlDestinationSettingsT&& value) { m_ttmlDestinationSettingsHasBeenSet = true; m_ttmlDestinationSettings = std::forward<TtmlDestinationSettingsT>(value); }
    template<typename TtmlDestinationSettingsT = TtmlDestinationSettings>
    CaptionDestinationSettings& WithTtmlDestinationSettings(TtmlDestinationSettingsT&& value) { SetTtmlDestinationSettings(std::forward<TtmlDestinationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const WebvttDestinationSettings& GetWebvttDestinationSettings() const { return m_webvttDestinationSettings; }
    inline bool WebvttDestinationSettingsHasBeenSet() const { return m_webvttDestinationSettingsHasBeenSet; }
    template<typename WebvttDestinationSettingsT = WebvttDestinationSettings>
    void SetWebvttDestinationSettings(WebvttDestinationSettingsT&& value) { m_webvttDestinationSettingsHasBeenSet = true; m_webvttDestinationSettings = std::forward<WebvttDestinationSettingsT>(value); }
    template<typename WebvttDestinationSettingsT = WebvttDestinationSettings>
    CaptionDestinationSettings& WithWebvttDestinationSettings(WebvttDestinationSettingsT&& value) { SetWebvttDestinationSettings(std::forward<WebvttDestinationSettingsT>(value)); return *this;}
    ///@}
  private:

    AribDestinationSettings m_aribDestinationSettings;
    bool m_aribDestinationSettingsHasBeenSet = false;

    BurnInDestinationSettings m_burnInDestinationSettings;
    bool m_burnInDestinationSettingsHasBeenSet = false;

    DvbSubDestinationSettings m_dvbSubDestinationSettings;
    bool m_dvbSubDestinationSettingsHasBeenSet = false;

    EbuTtDDestinationSettings m_ebuTtDDestinationSettings;
    bool m_ebuTtDDestinationSettingsHasBeenSet = false;

    EmbeddedDestinationSettings m_embeddedDestinationSettings;
    bool m_embeddedDestinationSettingsHasBeenSet = false;

    EmbeddedPlusScte20DestinationSettings m_embeddedPlusScte20DestinationSettings;
    bool m_embeddedPlusScte20DestinationSettingsHasBeenSet = false;

    RtmpCaptionInfoDestinationSettings m_rtmpCaptionInfoDestinationSettings;
    bool m_rtmpCaptionInfoDestinationSettingsHasBeenSet = false;

    Scte20PlusEmbeddedDestinationSettings m_scte20PlusEmbeddedDestinationSettings;
    bool m_scte20PlusEmbeddedDestinationSettingsHasBeenSet = false;

    Scte27DestinationSettings m_scte27DestinationSettings;
    bool m_scte27DestinationSettingsHasBeenSet = false;

    SmpteTtDestinationSettings m_smpteTtDestinationSettings;
    bool m_smpteTtDestinationSettingsHasBeenSet = false;

    TeletextDestinationSettings m_teletextDestinationSettings;
    bool m_teletextDestinationSettingsHasBeenSet = false;

    TtmlDestinationSettings m_ttmlDestinationSettings;
    bool m_ttmlDestinationSettingsHasBeenSet = false;

    WebvttDestinationSettings m_webvttDestinationSettings;
    bool m_webvttDestinationSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
