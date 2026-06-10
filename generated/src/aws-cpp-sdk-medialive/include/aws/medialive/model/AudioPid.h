/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AudioDolbyEDecode.h>
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
 * Represents a single PID value for audio selection with optional pre-mixer
 * settings<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioPid">AWS
 * API Reference</a></p>
 */
class AudioPid {
 public:
  AWS_MEDIALIVE_API AudioPid() = default;
  AWS_MEDIALIVE_API AudioPid(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API AudioPid& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Configure decoding options for Dolby E streams - these should be Dolby E frames
   * carried in PCM streams tagged with SMPTE-337.
When using the 'pids' array, if
   * this field is not specified and Dolby E content is present,
the decoder will
   * extract the specified program. To maintain legacy behavior
   * (allPrograms),
explicitly set programSelection to "allChannels".
   */
  inline const AudioDolbyEDecode& GetDolbyEDecode() const { return m_dolbyEDecode; }
  inline bool DolbyEDecodeHasBeenSet() const { return m_dolbyEDecodeHasBeenSet; }
  template <typename DolbyEDecodeT = AudioDolbyEDecode>
  void SetDolbyEDecode(DolbyEDecodeT&& value) {
    m_dolbyEDecodeHasBeenSet = true;
    m_dolbyEDecode = std::forward<DolbyEDecodeT>(value);
  }
  template <typename DolbyEDecodeT = AudioDolbyEDecode>
  AudioPid& WithDolbyEDecode(DolbyEDecodeT&& value) {
    SetDolbyEDecode(std::forward<DolbyEDecodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * PID value from within a source.
   */
  inline int GetPid() const { return m_pid; }
  inline bool PidHasBeenSet() const { return m_pidHasBeenSet; }
  inline void SetPid(int value) {
    m_pidHasBeenSet = true;
    m_pid = value;
  }
  inline AudioPid& WithPid(int value) {
    SetPid(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Optional audio pre-mixer settings for this PID.
When specified, allows per-PID
   * audio processing including channel remixing,
gain adjustment, and loudness
   * normalization before interleaving.
   */
  inline const AudioPreMixerSettings& GetPremixSettings() const { return m_premixSettings; }
  inline bool PremixSettingsHasBeenSet() const { return m_premixSettingsHasBeenSet; }
  template <typename PremixSettingsT = AudioPreMixerSettings>
  void SetPremixSettings(PremixSettingsT&& value) {
    m_premixSettingsHasBeenSet = true;
    m_premixSettings = std::forward<PremixSettingsT>(value);
  }
  template <typename PremixSettingsT = AudioPreMixerSettings>
  AudioPid& WithPremixSettings(PremixSettingsT&& value) {
    SetPremixSettings(std::forward<PremixSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  AudioDolbyEDecode m_dolbyEDecode;

  int m_pid{0};

  AudioPreMixerSettings m_premixSettings;
  bool m_dolbyEDecodeHasBeenSet = false;
  bool m_pidHasBeenSet = false;
  bool m_premixSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
