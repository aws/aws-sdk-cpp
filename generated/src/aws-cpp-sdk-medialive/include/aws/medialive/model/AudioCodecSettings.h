/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AacSettings.h>
#include <aws/medialive/model/Ac3Settings.h>
#include <aws/medialive/model/Eac3AtmosSettings.h>
#include <aws/medialive/model/Eac3Settings.h>
#include <aws/medialive/model/Mp2Settings.h>
#include <aws/medialive/model/PassThroughSettings.h>
#include <aws/medialive/model/WavSettings.h>
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
   * Audio Codec Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioCodecSettings">AWS
   * API Reference</a></p>
   */
  class AudioCodecSettings
  {
  public:
    AWS_MEDIALIVE_API AudioCodecSettings() = default;
    AWS_MEDIALIVE_API AudioCodecSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AudioCodecSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const AacSettings& GetAacSettings() const { return m_aacSettings; }
    inline bool AacSettingsHasBeenSet() const { return m_aacSettingsHasBeenSet; }
    template<typename AacSettingsT = AacSettings>
    void SetAacSettings(AacSettingsT&& value) { m_aacSettingsHasBeenSet = true; m_aacSettings = std::forward<AacSettingsT>(value); }
    template<typename AacSettingsT = AacSettings>
    AudioCodecSettings& WithAacSettings(AacSettingsT&& value) { SetAacSettings(std::forward<AacSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Ac3Settings& GetAc3Settings() const { return m_ac3Settings; }
    inline bool Ac3SettingsHasBeenSet() const { return m_ac3SettingsHasBeenSet; }
    template<typename Ac3SettingsT = Ac3Settings>
    void SetAc3Settings(Ac3SettingsT&& value) { m_ac3SettingsHasBeenSet = true; m_ac3Settings = std::forward<Ac3SettingsT>(value); }
    template<typename Ac3SettingsT = Ac3Settings>
    AudioCodecSettings& WithAc3Settings(Ac3SettingsT&& value) { SetAc3Settings(std::forward<Ac3SettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Eac3AtmosSettings& GetEac3AtmosSettings() const { return m_eac3AtmosSettings; }
    inline bool Eac3AtmosSettingsHasBeenSet() const { return m_eac3AtmosSettingsHasBeenSet; }
    template<typename Eac3AtmosSettingsT = Eac3AtmosSettings>
    void SetEac3AtmosSettings(Eac3AtmosSettingsT&& value) { m_eac3AtmosSettingsHasBeenSet = true; m_eac3AtmosSettings = std::forward<Eac3AtmosSettingsT>(value); }
    template<typename Eac3AtmosSettingsT = Eac3AtmosSettings>
    AudioCodecSettings& WithEac3AtmosSettings(Eac3AtmosSettingsT&& value) { SetEac3AtmosSettings(std::forward<Eac3AtmosSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Eac3Settings& GetEac3Settings() const { return m_eac3Settings; }
    inline bool Eac3SettingsHasBeenSet() const { return m_eac3SettingsHasBeenSet; }
    template<typename Eac3SettingsT = Eac3Settings>
    void SetEac3Settings(Eac3SettingsT&& value) { m_eac3SettingsHasBeenSet = true; m_eac3Settings = std::forward<Eac3SettingsT>(value); }
    template<typename Eac3SettingsT = Eac3Settings>
    AudioCodecSettings& WithEac3Settings(Eac3SettingsT&& value) { SetEac3Settings(std::forward<Eac3SettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Mp2Settings& GetMp2Settings() const { return m_mp2Settings; }
    inline bool Mp2SettingsHasBeenSet() const { return m_mp2SettingsHasBeenSet; }
    template<typename Mp2SettingsT = Mp2Settings>
    void SetMp2Settings(Mp2SettingsT&& value) { m_mp2SettingsHasBeenSet = true; m_mp2Settings = std::forward<Mp2SettingsT>(value); }
    template<typename Mp2SettingsT = Mp2Settings>
    AudioCodecSettings& WithMp2Settings(Mp2SettingsT&& value) { SetMp2Settings(std::forward<Mp2SettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const PassThroughSettings& GetPassThroughSettings() const { return m_passThroughSettings; }
    inline bool PassThroughSettingsHasBeenSet() const { return m_passThroughSettingsHasBeenSet; }
    template<typename PassThroughSettingsT = PassThroughSettings>
    void SetPassThroughSettings(PassThroughSettingsT&& value) { m_passThroughSettingsHasBeenSet = true; m_passThroughSettings = std::forward<PassThroughSettingsT>(value); }
    template<typename PassThroughSettingsT = PassThroughSettings>
    AudioCodecSettings& WithPassThroughSettings(PassThroughSettingsT&& value) { SetPassThroughSettings(std::forward<PassThroughSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const WavSettings& GetWavSettings() const { return m_wavSettings; }
    inline bool WavSettingsHasBeenSet() const { return m_wavSettingsHasBeenSet; }
    template<typename WavSettingsT = WavSettings>
    void SetWavSettings(WavSettingsT&& value) { m_wavSettingsHasBeenSet = true; m_wavSettings = std::forward<WavSettingsT>(value); }
    template<typename WavSettingsT = WavSettings>
    AudioCodecSettings& WithWavSettings(WavSettingsT&& value) { SetWavSettings(std::forward<WavSettingsT>(value)); return *this;}
    ///@}
  private:

    AacSettings m_aacSettings;
    bool m_aacSettingsHasBeenSet = false;

    Ac3Settings m_ac3Settings;
    bool m_ac3SettingsHasBeenSet = false;

    Eac3AtmosSettings m_eac3AtmosSettings;
    bool m_eac3AtmosSettingsHasBeenSet = false;

    Eac3Settings m_eac3Settings;
    bool m_eac3SettingsHasBeenSet = false;

    Mp2Settings m_mp2Settings;
    bool m_mp2SettingsHasBeenSet = false;

    PassThroughSettings m_passThroughSettings;
    bool m_passThroughSettingsHasBeenSet = false;

    WavSettings m_wavSettings;
    bool m_wavSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
