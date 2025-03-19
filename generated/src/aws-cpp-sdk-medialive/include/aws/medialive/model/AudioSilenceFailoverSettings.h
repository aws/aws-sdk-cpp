/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * Placeholder documentation for AudioSilenceFailoverSettings<p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioSilenceFailoverSettings">AWS
   * API Reference</a></p>
   */
  class AudioSilenceFailoverSettings
  {
  public:
    AWS_MEDIALIVE_API AudioSilenceFailoverSettings() = default;
    AWS_MEDIALIVE_API AudioSilenceFailoverSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AudioSilenceFailoverSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The name of the audio selector in the input that MediaLive should monitor to
     * detect silence. Select your most important rendition. If you didn't create an
     * audio selector in this input, leave blank.
     */
    inline const Aws::String& GetAudioSelectorName() const { return m_audioSelectorName; }
    inline bool AudioSelectorNameHasBeenSet() const { return m_audioSelectorNameHasBeenSet; }
    template<typename AudioSelectorNameT = Aws::String>
    void SetAudioSelectorName(AudioSelectorNameT&& value) { m_audioSelectorNameHasBeenSet = true; m_audioSelectorName = std::forward<AudioSelectorNameT>(value); }
    template<typename AudioSelectorNameT = Aws::String>
    AudioSilenceFailoverSettings& WithAudioSelectorName(AudioSelectorNameT&& value) { SetAudioSelectorName(std::forward<AudioSelectorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The amount of time (in milliseconds) that the active input must be silent before
     * automatic input failover occurs. Silence is defined as audio loss or audio
     * quieter than -50 dBFS.
     */
    inline int GetAudioSilenceThresholdMsec() const { return m_audioSilenceThresholdMsec; }
    inline bool AudioSilenceThresholdMsecHasBeenSet() const { return m_audioSilenceThresholdMsecHasBeenSet; }
    inline void SetAudioSilenceThresholdMsec(int value) { m_audioSilenceThresholdMsecHasBeenSet = true; m_audioSilenceThresholdMsec = value; }
    inline AudioSilenceFailoverSettings& WithAudioSilenceThresholdMsec(int value) { SetAudioSilenceThresholdMsec(value); return *this;}
    ///@}
  private:

    Aws::String m_audioSelectorName;
    bool m_audioSelectorNameHasBeenSet = false;

    int m_audioSilenceThresholdMsec{0};
    bool m_audioSilenceThresholdMsecHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
