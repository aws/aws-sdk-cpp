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
    AWS_MEDIALIVE_API AudioSelectorSettings();
    AWS_MEDIALIVE_API AudioSelectorSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AudioSelectorSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const AudioHlsRenditionSelection& GetAudioHlsRenditionSelection() const{ return m_audioHlsRenditionSelection; }

    
    inline bool AudioHlsRenditionSelectionHasBeenSet() const { return m_audioHlsRenditionSelectionHasBeenSet; }

    
    inline void SetAudioHlsRenditionSelection(const AudioHlsRenditionSelection& value) { m_audioHlsRenditionSelectionHasBeenSet = true; m_audioHlsRenditionSelection = value; }

    
    inline void SetAudioHlsRenditionSelection(AudioHlsRenditionSelection&& value) { m_audioHlsRenditionSelectionHasBeenSet = true; m_audioHlsRenditionSelection = std::move(value); }

    
    inline AudioSelectorSettings& WithAudioHlsRenditionSelection(const AudioHlsRenditionSelection& value) { SetAudioHlsRenditionSelection(value); return *this;}

    
    inline AudioSelectorSettings& WithAudioHlsRenditionSelection(AudioHlsRenditionSelection&& value) { SetAudioHlsRenditionSelection(std::move(value)); return *this;}


    
    inline const AudioLanguageSelection& GetAudioLanguageSelection() const{ return m_audioLanguageSelection; }

    
    inline bool AudioLanguageSelectionHasBeenSet() const { return m_audioLanguageSelectionHasBeenSet; }

    
    inline void SetAudioLanguageSelection(const AudioLanguageSelection& value) { m_audioLanguageSelectionHasBeenSet = true; m_audioLanguageSelection = value; }

    
    inline void SetAudioLanguageSelection(AudioLanguageSelection&& value) { m_audioLanguageSelectionHasBeenSet = true; m_audioLanguageSelection = std::move(value); }

    
    inline AudioSelectorSettings& WithAudioLanguageSelection(const AudioLanguageSelection& value) { SetAudioLanguageSelection(value); return *this;}

    
    inline AudioSelectorSettings& WithAudioLanguageSelection(AudioLanguageSelection&& value) { SetAudioLanguageSelection(std::move(value)); return *this;}


    
    inline const AudioPidSelection& GetAudioPidSelection() const{ return m_audioPidSelection; }

    
    inline bool AudioPidSelectionHasBeenSet() const { return m_audioPidSelectionHasBeenSet; }

    
    inline void SetAudioPidSelection(const AudioPidSelection& value) { m_audioPidSelectionHasBeenSet = true; m_audioPidSelection = value; }

    
    inline void SetAudioPidSelection(AudioPidSelection&& value) { m_audioPidSelectionHasBeenSet = true; m_audioPidSelection = std::move(value); }

    
    inline AudioSelectorSettings& WithAudioPidSelection(const AudioPidSelection& value) { SetAudioPidSelection(value); return *this;}

    
    inline AudioSelectorSettings& WithAudioPidSelection(AudioPidSelection&& value) { SetAudioPidSelection(std::move(value)); return *this;}


    
    inline const AudioTrackSelection& GetAudioTrackSelection() const{ return m_audioTrackSelection; }

    
    inline bool AudioTrackSelectionHasBeenSet() const { return m_audioTrackSelectionHasBeenSet; }

    
    inline void SetAudioTrackSelection(const AudioTrackSelection& value) { m_audioTrackSelectionHasBeenSet = true; m_audioTrackSelection = value; }

    
    inline void SetAudioTrackSelection(AudioTrackSelection&& value) { m_audioTrackSelectionHasBeenSet = true; m_audioTrackSelection = std::move(value); }

    
    inline AudioSelectorSettings& WithAudioTrackSelection(const AudioTrackSelection& value) { SetAudioTrackSelection(value); return *this;}

    
    inline AudioSelectorSettings& WithAudioTrackSelection(AudioTrackSelection&& value) { SetAudioTrackSelection(std::move(value)); return *this;}

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
