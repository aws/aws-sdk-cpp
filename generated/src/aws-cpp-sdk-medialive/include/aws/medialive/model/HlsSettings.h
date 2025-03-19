/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AudioOnlyHlsSettings.h>
#include <aws/medialive/model/Fmp4HlsSettings.h>
#include <aws/medialive/model/FrameCaptureHlsSettings.h>
#include <aws/medialive/model/StandardHlsSettings.h>
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
   * Hls Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/HlsSettings">AWS
   * API Reference</a></p>
   */
  class HlsSettings
  {
  public:
    AWS_MEDIALIVE_API HlsSettings() = default;
    AWS_MEDIALIVE_API HlsSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API HlsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const AudioOnlyHlsSettings& GetAudioOnlyHlsSettings() const { return m_audioOnlyHlsSettings; }
    inline bool AudioOnlyHlsSettingsHasBeenSet() const { return m_audioOnlyHlsSettingsHasBeenSet; }
    template<typename AudioOnlyHlsSettingsT = AudioOnlyHlsSettings>
    void SetAudioOnlyHlsSettings(AudioOnlyHlsSettingsT&& value) { m_audioOnlyHlsSettingsHasBeenSet = true; m_audioOnlyHlsSettings = std::forward<AudioOnlyHlsSettingsT>(value); }
    template<typename AudioOnlyHlsSettingsT = AudioOnlyHlsSettings>
    HlsSettings& WithAudioOnlyHlsSettings(AudioOnlyHlsSettingsT&& value) { SetAudioOnlyHlsSettings(std::forward<AudioOnlyHlsSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Fmp4HlsSettings& GetFmp4HlsSettings() const { return m_fmp4HlsSettings; }
    inline bool Fmp4HlsSettingsHasBeenSet() const { return m_fmp4HlsSettingsHasBeenSet; }
    template<typename Fmp4HlsSettingsT = Fmp4HlsSettings>
    void SetFmp4HlsSettings(Fmp4HlsSettingsT&& value) { m_fmp4HlsSettingsHasBeenSet = true; m_fmp4HlsSettings = std::forward<Fmp4HlsSettingsT>(value); }
    template<typename Fmp4HlsSettingsT = Fmp4HlsSettings>
    HlsSettings& WithFmp4HlsSettings(Fmp4HlsSettingsT&& value) { SetFmp4HlsSettings(std::forward<Fmp4HlsSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const FrameCaptureHlsSettings& GetFrameCaptureHlsSettings() const { return m_frameCaptureHlsSettings; }
    inline bool FrameCaptureHlsSettingsHasBeenSet() const { return m_frameCaptureHlsSettingsHasBeenSet; }
    template<typename FrameCaptureHlsSettingsT = FrameCaptureHlsSettings>
    void SetFrameCaptureHlsSettings(FrameCaptureHlsSettingsT&& value) { m_frameCaptureHlsSettingsHasBeenSet = true; m_frameCaptureHlsSettings = std::forward<FrameCaptureHlsSettingsT>(value); }
    template<typename FrameCaptureHlsSettingsT = FrameCaptureHlsSettings>
    HlsSettings& WithFrameCaptureHlsSettings(FrameCaptureHlsSettingsT&& value) { SetFrameCaptureHlsSettings(std::forward<FrameCaptureHlsSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const StandardHlsSettings& GetStandardHlsSettings() const { return m_standardHlsSettings; }
    inline bool StandardHlsSettingsHasBeenSet() const { return m_standardHlsSettingsHasBeenSet; }
    template<typename StandardHlsSettingsT = StandardHlsSettings>
    void SetStandardHlsSettings(StandardHlsSettingsT&& value) { m_standardHlsSettingsHasBeenSet = true; m_standardHlsSettings = std::forward<StandardHlsSettingsT>(value); }
    template<typename StandardHlsSettingsT = StandardHlsSettings>
    HlsSettings& WithStandardHlsSettings(StandardHlsSettingsT&& value) { SetStandardHlsSettings(std::forward<StandardHlsSettingsT>(value)); return *this;}
    ///@}
  private:

    AudioOnlyHlsSettings m_audioOnlyHlsSettings;
    bool m_audioOnlyHlsSettingsHasBeenSet = false;

    Fmp4HlsSettings m_fmp4HlsSettings;
    bool m_fmp4HlsSettingsHasBeenSet = false;

    FrameCaptureHlsSettings m_frameCaptureHlsSettings;
    bool m_frameCaptureHlsSettingsHasBeenSet = false;

    StandardHlsSettings m_standardHlsSettings;
    bool m_standardHlsSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
