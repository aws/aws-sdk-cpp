/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AudioSilenceFailoverSettings.h>
#include <aws/medialive/model/InputLossFailoverSettings.h>
#include <aws/medialive/model/VideoBlackFailoverSettings.h>
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
   * Settings for one failover condition.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/FailoverConditionSettings">AWS
   * API Reference</a></p>
   */
  class FailoverConditionSettings
  {
  public:
    AWS_MEDIALIVE_API FailoverConditionSettings() = default;
    AWS_MEDIALIVE_API FailoverConditionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API FailoverConditionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * MediaLive will perform a failover if the specified audio selector is silent for
     * the specified period.
     */
    inline const AudioSilenceFailoverSettings& GetAudioSilenceSettings() const { return m_audioSilenceSettings; }
    inline bool AudioSilenceSettingsHasBeenSet() const { return m_audioSilenceSettingsHasBeenSet; }
    template<typename AudioSilenceSettingsT = AudioSilenceFailoverSettings>
    void SetAudioSilenceSettings(AudioSilenceSettingsT&& value) { m_audioSilenceSettingsHasBeenSet = true; m_audioSilenceSettings = std::forward<AudioSilenceSettingsT>(value); }
    template<typename AudioSilenceSettingsT = AudioSilenceFailoverSettings>
    FailoverConditionSettings& WithAudioSilenceSettings(AudioSilenceSettingsT&& value) { SetAudioSilenceSettings(std::forward<AudioSilenceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * MediaLive will perform a failover if content is not detected in this input for
     * the specified period.
     */
    inline const InputLossFailoverSettings& GetInputLossSettings() const { return m_inputLossSettings; }
    inline bool InputLossSettingsHasBeenSet() const { return m_inputLossSettingsHasBeenSet; }
    template<typename InputLossSettingsT = InputLossFailoverSettings>
    void SetInputLossSettings(InputLossSettingsT&& value) { m_inputLossSettingsHasBeenSet = true; m_inputLossSettings = std::forward<InputLossSettingsT>(value); }
    template<typename InputLossSettingsT = InputLossFailoverSettings>
    FailoverConditionSettings& WithInputLossSettings(InputLossSettingsT&& value) { SetInputLossSettings(std::forward<InputLossSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * MediaLive will perform a failover if content is considered black for the
     * specified period.
     */
    inline const VideoBlackFailoverSettings& GetVideoBlackSettings() const { return m_videoBlackSettings; }
    inline bool VideoBlackSettingsHasBeenSet() const { return m_videoBlackSettingsHasBeenSet; }
    template<typename VideoBlackSettingsT = VideoBlackFailoverSettings>
    void SetVideoBlackSettings(VideoBlackSettingsT&& value) { m_videoBlackSettingsHasBeenSet = true; m_videoBlackSettings = std::forward<VideoBlackSettingsT>(value); }
    template<typename VideoBlackSettingsT = VideoBlackFailoverSettings>
    FailoverConditionSettings& WithVideoBlackSettings(VideoBlackSettingsT&& value) { SetVideoBlackSettings(std::forward<VideoBlackSettingsT>(value)); return *this;}
    ///@}
  private:

    AudioSilenceFailoverSettings m_audioSilenceSettings;
    bool m_audioSilenceSettingsHasBeenSet = false;

    InputLossFailoverSettings m_inputLossSettings;
    bool m_inputLossSettingsHasBeenSet = false;

    VideoBlackFailoverSettings m_videoBlackSettings;
    bool m_videoBlackSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
