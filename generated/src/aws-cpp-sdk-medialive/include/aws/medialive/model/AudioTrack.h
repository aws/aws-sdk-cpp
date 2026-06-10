/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AudioPreMixerSettings.h>

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
 * Represents a single audio track for selection with optional pre-mixer
 * settings<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioTrack">AWS
 * API Reference</a></p>
 */
class AudioTrack {
 public:
  AWS_MEDIALIVE_API AudioTrack() = default;
  AWS_MEDIALIVE_API AudioTrack(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API AudioTrack& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * 1-based integer value that maps to a specific audio track
   */
  inline int GetTrack() const { return m_track; }
  inline bool TrackHasBeenSet() const { return m_trackHasBeenSet; }
  inline void SetTrack(int value) {
    m_trackHasBeenSet = true;
    m_track = value;
  }
  inline AudioTrack& WithTrack(int value) {
    SetTrack(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Optional audio pre-mixer settings for this track.
When specified, allows
   * per-track audio processing including channel remixing,
gain adjustment, and
   * loudness normalization before interleaving.
   */
  inline const AudioPreMixerSettings& GetPremixSettings() const { return m_premixSettings; }
  inline bool PremixSettingsHasBeenSet() const { return m_premixSettingsHasBeenSet; }
  template <typename PremixSettingsT = AudioPreMixerSettings>
  void SetPremixSettings(PremixSettingsT&& value) {
    m_premixSettingsHasBeenSet = true;
    m_premixSettings = std::forward<PremixSettingsT>(value);
  }
  template <typename PremixSettingsT = AudioPreMixerSettings>
  AudioTrack& WithPremixSettings(PremixSettingsT&& value) {
    SetPremixSettings(std::forward<PremixSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  int m_track{0};

  AudioPreMixerSettings m_premixSettings;
  bool m_trackHasBeenSet = false;
  bool m_premixSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
