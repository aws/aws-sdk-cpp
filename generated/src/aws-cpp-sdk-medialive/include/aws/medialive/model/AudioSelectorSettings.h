/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AudioHlsRenditionSelection.h>
#include <aws/medialive/model/AudioLanguageSelection.h>
#include <aws/medialive/model/AudioPidSelection.h>
#include <aws/medialive/model/AudioTrackSelection.h>
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
   * Audio Selector Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioSelectorSettings">AWS
   * API Reference</a></p>
   */
  class AudioSelectorSettings
  {
  public:
    AWS_MEDIALIVE_API AudioSelectorSettings() = default;
    AWS_MEDIALIVE_API AudioSelectorSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AudioSelectorSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const AudioHlsRenditionSelection& GetAudioHlsRenditionSelection() const { return m_audioHlsRenditionSelection; }
    inline bool AudioHlsRenditionSelectionHasBeenSet() const { return m_audioHlsRenditionSelectionHasBeenSet; }
    template<typename AudioHlsRenditionSelectionT = AudioHlsRenditionSelection>
    void SetAudioHlsRenditionSelection(AudioHlsRenditionSelectionT&& value) { m_audioHlsRenditionSelectionHasBeenSet = true; m_audioHlsRenditionSelection = std::forward<AudioHlsRenditionSelectionT>(value); }
    template<typename AudioHlsRenditionSelectionT = AudioHlsRenditionSelection>
    AudioSelectorSettings& WithAudioHlsRenditionSelection(AudioHlsRenditionSelectionT&& value) { SetAudioHlsRenditionSelection(std::forward<AudioHlsRenditionSelectionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AudioLanguageSelection& GetAudioLanguageSelection() const { return m_audioLanguageSelection; }
    inline bool AudioLanguageSelectionHasBeenSet() const { return m_audioLanguageSelectionHasBeenSet; }
    template<typename AudioLanguageSelectionT = AudioLanguageSelection>
    void SetAudioLanguageSelection(AudioLanguageSelectionT&& value) { m_audioLanguageSelectionHasBeenSet = true; m_audioLanguageSelection = std::forward<AudioLanguageSelectionT>(value); }
    template<typename AudioLanguageSelectionT = AudioLanguageSelection>
    AudioSelectorSettings& WithAudioLanguageSelection(AudioLanguageSelectionT&& value) { SetAudioLanguageSelection(std::forward<AudioLanguageSelectionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AudioPidSelection& GetAudioPidSelection() const { return m_audioPidSelection; }
    inline bool AudioPidSelectionHasBeenSet() const { return m_audioPidSelectionHasBeenSet; }
    template<typename AudioPidSelectionT = AudioPidSelection>
    void SetAudioPidSelection(AudioPidSelectionT&& value) { m_audioPidSelectionHasBeenSet = true; m_audioPidSelection = std::forward<AudioPidSelectionT>(value); }
    template<typename AudioPidSelectionT = AudioPidSelection>
    AudioSelectorSettings& WithAudioPidSelection(AudioPidSelectionT&& value) { SetAudioPidSelection(std::forward<AudioPidSelectionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AudioTrackSelection& GetAudioTrackSelection() const { return m_audioTrackSelection; }
    inline bool AudioTrackSelectionHasBeenSet() const { return m_audioTrackSelectionHasBeenSet; }
    template<typename AudioTrackSelectionT = AudioTrackSelection>
    void SetAudioTrackSelection(AudioTrackSelectionT&& value) { m_audioTrackSelectionHasBeenSet = true; m_audioTrackSelection = std::forward<AudioTrackSelectionT>(value); }
    template<typename AudioTrackSelectionT = AudioTrackSelection>
    AudioSelectorSettings& WithAudioTrackSelection(AudioTrackSelectionT&& value) { SetAudioTrackSelection(std::forward<AudioTrackSelectionT>(value)); return *this;}
    ///@}
  private:

    AudioHlsRenditionSelection m_audioHlsRenditionSelection;
    bool m_audioHlsRenditionSelectionHasBeenSet = false;

    AudioLanguageSelection m_audioLanguageSelection;
    bool m_audioLanguageSelectionHasBeenSet = false;

    AudioPidSelection m_audioPidSelection;
    bool m_audioPidSelectionHasBeenSet = false;

    AudioTrackSelection m_audioTrackSelection;
    bool m_audioTrackSelectionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
