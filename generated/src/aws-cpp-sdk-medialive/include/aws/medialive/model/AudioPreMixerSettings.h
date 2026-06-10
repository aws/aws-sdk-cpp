/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AudioNormalizationSettings.h>
#include <aws/medialive/model/RemixSettings.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaLive {
namespace Model {

/**
 * Audio pre-mixer settings for normalizing audio before interleaving.
These
 * settings can be applied to individual PIDs or tracks before they are
 * combined.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioPreMixerSettings">AWS
 * API Reference</a></p>
 */
class AudioPreMixerSettings {
 public:
  AWS_MEDIALIVE_API AudioPreMixerSettings() = default;
  AWS_MEDIALIVE_API AudioPreMixerSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API AudioPreMixerSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Audio normalization settings for loudness control.
When specified, audio
   * loudness will be normalized according to the chosen algorithm.
   */
  inline const AudioNormalizationSettings& GetAudioNormalizationSettings() const { return m_audioNormalizationSettings; }
  inline bool AudioNormalizationSettingsHasBeenSet() const { return m_audioNormalizationSettingsHasBeenSet; }
  template <typename AudioNormalizationSettingsT = AudioNormalizationSettings>
  void SetAudioNormalizationSettings(AudioNormalizationSettingsT&& value) {
    m_audioNormalizationSettingsHasBeenSet = true;
    m_audioNormalizationSettings = std::forward<AudioNormalizationSettingsT>(value);
  }
  template <typename AudioNormalizationSettingsT = AudioNormalizationSettings>
  AudioPreMixerSettings& WithAudioNormalizationSettings(AudioNormalizationSettingsT&& value) {
    SetAudioNormalizationSettings(std::forward<AudioNormalizationSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * Number of audio channels.
If specified, the audio will be remixed to match this
   * channel count.
Ignored if remixSettings is specified.
   */
  inline int GetChannels() const { return m_channels; }
  inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }
  inline void SetChannels(int value) {
    m_channelsHasBeenSet = true;
    m_channels = value;
  }
  inline AudioPreMixerSettings& WithChannels(int value) {
    SetChannels(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Gain adjustment in dB to apply.
Range: -60 to +60 dB
   */
  inline double GetGainDb() const { return m_gainDb; }
  inline bool GainDbHasBeenSet() const { return m_gainDbHasBeenSet; }
  inline void SetGainDb(double value) {
    m_gainDbHasBeenSet = true;
    m_gainDb = value;
  }
  inline AudioPreMixerSettings& WithGainDb(double value) {
    SetGainDb(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Settings that control how input audio channels are remixed.
When specified,
   * allows fine-grained control over channel mapping and gain levels.
Takes
   * precedence over the 'channels' setting.
   */
  inline const RemixSettings& GetRemixSettings() const { return m_remixSettings; }
  inline bool RemixSettingsHasBeenSet() const { return m_remixSettingsHasBeenSet; }
  template <typename RemixSettingsT = RemixSettings>
  void SetRemixSettings(RemixSettingsT&& value) {
    m_remixSettingsHasBeenSet = true;
    m_remixSettings = std::forward<RemixSettingsT>(value);
  }
  template <typename RemixSettingsT = RemixSettings>
  AudioPreMixerSettings& WithRemixSettings(RemixSettingsT&& value) {
    SetRemixSettings(std::forward<RemixSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  AudioNormalizationSettings m_audioNormalizationSettings;

  int m_channels{0};

  double m_gainDb{0.0};

  RemixSettings m_remixSettings;
  bool m_audioNormalizationSettingsHasBeenSet = false;
  bool m_channelsHasBeenSet = false;
  bool m_gainDbHasBeenSet = false;
  bool m_remixSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
