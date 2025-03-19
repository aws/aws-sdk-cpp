/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AncillarySourceSettings.h>
#include <aws/medialive/model/AribSourceSettings.h>
#include <aws/medialive/model/DvbSubSourceSettings.h>
#include <aws/medialive/model/EmbeddedSourceSettings.h>
#include <aws/medialive/model/Scte20SourceSettings.h>
#include <aws/medialive/model/Scte27SourceSettings.h>
#include <aws/medialive/model/TeletextSourceSettings.h>
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
   * Caption Selector Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CaptionSelectorSettings">AWS
   * API Reference</a></p>
   */
  class CaptionSelectorSettings
  {
  public:
    AWS_MEDIALIVE_API CaptionSelectorSettings() = default;
    AWS_MEDIALIVE_API CaptionSelectorSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API CaptionSelectorSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const AncillarySourceSettings& GetAncillarySourceSettings() const { return m_ancillarySourceSettings; }
    inline bool AncillarySourceSettingsHasBeenSet() const { return m_ancillarySourceSettingsHasBeenSet; }
    template<typename AncillarySourceSettingsT = AncillarySourceSettings>
    void SetAncillarySourceSettings(AncillarySourceSettingsT&& value) { m_ancillarySourceSettingsHasBeenSet = true; m_ancillarySourceSettings = std::forward<AncillarySourceSettingsT>(value); }
    template<typename AncillarySourceSettingsT = AncillarySourceSettings>
    CaptionSelectorSettings& WithAncillarySourceSettings(AncillarySourceSettingsT&& value) { SetAncillarySourceSettings(std::forward<AncillarySourceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AribSourceSettings& GetAribSourceSettings() const { return m_aribSourceSettings; }
    inline bool AribSourceSettingsHasBeenSet() const { return m_aribSourceSettingsHasBeenSet; }
    template<typename AribSourceSettingsT = AribSourceSettings>
    void SetAribSourceSettings(AribSourceSettingsT&& value) { m_aribSourceSettingsHasBeenSet = true; m_aribSourceSettings = std::forward<AribSourceSettingsT>(value); }
    template<typename AribSourceSettingsT = AribSourceSettings>
    CaptionSelectorSettings& WithAribSourceSettings(AribSourceSettingsT&& value) { SetAribSourceSettings(std::forward<AribSourceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DvbSubSourceSettings& GetDvbSubSourceSettings() const { return m_dvbSubSourceSettings; }
    inline bool DvbSubSourceSettingsHasBeenSet() const { return m_dvbSubSourceSettingsHasBeenSet; }
    template<typename DvbSubSourceSettingsT = DvbSubSourceSettings>
    void SetDvbSubSourceSettings(DvbSubSourceSettingsT&& value) { m_dvbSubSourceSettingsHasBeenSet = true; m_dvbSubSourceSettings = std::forward<DvbSubSourceSettingsT>(value); }
    template<typename DvbSubSourceSettingsT = DvbSubSourceSettings>
    CaptionSelectorSettings& WithDvbSubSourceSettings(DvbSubSourceSettingsT&& value) { SetDvbSubSourceSettings(std::forward<DvbSubSourceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const EmbeddedSourceSettings& GetEmbeddedSourceSettings() const { return m_embeddedSourceSettings; }
    inline bool EmbeddedSourceSettingsHasBeenSet() const { return m_embeddedSourceSettingsHasBeenSet; }
    template<typename EmbeddedSourceSettingsT = EmbeddedSourceSettings>
    void SetEmbeddedSourceSettings(EmbeddedSourceSettingsT&& value) { m_embeddedSourceSettingsHasBeenSet = true; m_embeddedSourceSettings = std::forward<EmbeddedSourceSettingsT>(value); }
    template<typename EmbeddedSourceSettingsT = EmbeddedSourceSettings>
    CaptionSelectorSettings& WithEmbeddedSourceSettings(EmbeddedSourceSettingsT&& value) { SetEmbeddedSourceSettings(std::forward<EmbeddedSourceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Scte20SourceSettings& GetScte20SourceSettings() const { return m_scte20SourceSettings; }
    inline bool Scte20SourceSettingsHasBeenSet() const { return m_scte20SourceSettingsHasBeenSet; }
    template<typename Scte20SourceSettingsT = Scte20SourceSettings>
    void SetScte20SourceSettings(Scte20SourceSettingsT&& value) { m_scte20SourceSettingsHasBeenSet = true; m_scte20SourceSettings = std::forward<Scte20SourceSettingsT>(value); }
    template<typename Scte20SourceSettingsT = Scte20SourceSettings>
    CaptionSelectorSettings& WithScte20SourceSettings(Scte20SourceSettingsT&& value) { SetScte20SourceSettings(std::forward<Scte20SourceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Scte27SourceSettings& GetScte27SourceSettings() const { return m_scte27SourceSettings; }
    inline bool Scte27SourceSettingsHasBeenSet() const { return m_scte27SourceSettingsHasBeenSet; }
    template<typename Scte27SourceSettingsT = Scte27SourceSettings>
    void SetScte27SourceSettings(Scte27SourceSettingsT&& value) { m_scte27SourceSettingsHasBeenSet = true; m_scte27SourceSettings = std::forward<Scte27SourceSettingsT>(value); }
    template<typename Scte27SourceSettingsT = Scte27SourceSettings>
    CaptionSelectorSettings& WithScte27SourceSettings(Scte27SourceSettingsT&& value) { SetScte27SourceSettings(std::forward<Scte27SourceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TeletextSourceSettings& GetTeletextSourceSettings() const { return m_teletextSourceSettings; }
    inline bool TeletextSourceSettingsHasBeenSet() const { return m_teletextSourceSettingsHasBeenSet; }
    template<typename TeletextSourceSettingsT = TeletextSourceSettings>
    void SetTeletextSourceSettings(TeletextSourceSettingsT&& value) { m_teletextSourceSettingsHasBeenSet = true; m_teletextSourceSettings = std::forward<TeletextSourceSettingsT>(value); }
    template<typename TeletextSourceSettingsT = TeletextSourceSettings>
    CaptionSelectorSettings& WithTeletextSourceSettings(TeletextSourceSettingsT&& value) { SetTeletextSourceSettings(std::forward<TeletextSourceSettingsT>(value)); return *this;}
    ///@}
  private:

    AncillarySourceSettings m_ancillarySourceSettings;
    bool m_ancillarySourceSettingsHasBeenSet = false;

    AribSourceSettings m_aribSourceSettings;
    bool m_aribSourceSettingsHasBeenSet = false;

    DvbSubSourceSettings m_dvbSubSourceSettings;
    bool m_dvbSubSourceSettingsHasBeenSet = false;

    EmbeddedSourceSettings m_embeddedSourceSettings;
    bool m_embeddedSourceSettingsHasBeenSet = false;

    Scte20SourceSettings m_scte20SourceSettings;
    bool m_scte20SourceSettingsHasBeenSet = false;

    Scte27SourceSettings m_scte27SourceSettings;
    bool m_scte27SourceSettingsHasBeenSet = false;

    TeletextSourceSettings m_teletextSourceSettings;
    bool m_teletextSourceSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
