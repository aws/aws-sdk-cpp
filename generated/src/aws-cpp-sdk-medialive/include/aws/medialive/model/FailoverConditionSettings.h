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
    AWS_MEDIALIVE_API FailoverConditionSettings();
    AWS_MEDIALIVE_API FailoverConditionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API FailoverConditionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * MediaLive will perform a failover if the specified audio selector is silent for
     * the specified period.
     */
    inline const AudioSilenceFailoverSettings& GetAudioSilenceSettings() const{ return m_audioSilenceSettings; }

    /**
     * MediaLive will perform a failover if the specified audio selector is silent for
     * the specified period.
     */
    inline bool AudioSilenceSettingsHasBeenSet() const { return m_audioSilenceSettingsHasBeenSet; }

    /**
     * MediaLive will perform a failover if the specified audio selector is silent for
     * the specified period.
     */
    inline void SetAudioSilenceSettings(const AudioSilenceFailoverSettings& value) { m_audioSilenceSettingsHasBeenSet = true; m_audioSilenceSettings = value; }

    /**
     * MediaLive will perform a failover if the specified audio selector is silent for
     * the specified period.
     */
    inline void SetAudioSilenceSettings(AudioSilenceFailoverSettings&& value) { m_audioSilenceSettingsHasBeenSet = true; m_audioSilenceSettings = std::move(value); }

    /**
     * MediaLive will perform a failover if the specified audio selector is silent for
     * the specified period.
     */
    inline FailoverConditionSettings& WithAudioSilenceSettings(const AudioSilenceFailoverSettings& value) { SetAudioSilenceSettings(value); return *this;}

    /**
     * MediaLive will perform a failover if the specified audio selector is silent for
     * the specified period.
     */
    inline FailoverConditionSettings& WithAudioSilenceSettings(AudioSilenceFailoverSettings&& value) { SetAudioSilenceSettings(std::move(value)); return *this;}


    /**
     * MediaLive will perform a failover if content is not detected in this input for
     * the specified period.
     */
    inline const InputLossFailoverSettings& GetInputLossSettings() const{ return m_inputLossSettings; }

    /**
     * MediaLive will perform a failover if content is not detected in this input for
     * the specified period.
     */
    inline bool InputLossSettingsHasBeenSet() const { return m_inputLossSettingsHasBeenSet; }

    /**
     * MediaLive will perform a failover if content is not detected in this input for
     * the specified period.
     */
    inline void SetInputLossSettings(const InputLossFailoverSettings& value) { m_inputLossSettingsHasBeenSet = true; m_inputLossSettings = value; }

    /**
     * MediaLive will perform a failover if content is not detected in this input for
     * the specified period.
     */
    inline void SetInputLossSettings(InputLossFailoverSettings&& value) { m_inputLossSettingsHasBeenSet = true; m_inputLossSettings = std::move(value); }

    /**
     * MediaLive will perform a failover if content is not detected in this input for
     * the specified period.
     */
    inline FailoverConditionSettings& WithInputLossSettings(const InputLossFailoverSettings& value) { SetInputLossSettings(value); return *this;}

    /**
     * MediaLive will perform a failover if content is not detected in this input for
     * the specified period.
     */
    inline FailoverConditionSettings& WithInputLossSettings(InputLossFailoverSettings&& value) { SetInputLossSettings(std::move(value)); return *this;}


    /**
     * MediaLive will perform a failover if content is considered black for the
     * specified period.
     */
    inline const VideoBlackFailoverSettings& GetVideoBlackSettings() const{ return m_videoBlackSettings; }

    /**
     * MediaLive will perform a failover if content is considered black for the
     * specified period.
     */
    inline bool VideoBlackSettingsHasBeenSet() const { return m_videoBlackSettingsHasBeenSet; }

    /**
     * MediaLive will perform a failover if content is considered black for the
     * specified period.
     */
    inline void SetVideoBlackSettings(const VideoBlackFailoverSettings& value) { m_videoBlackSettingsHasBeenSet = true; m_videoBlackSettings = value; }

    /**
     * MediaLive will perform a failover if content is considered black for the
     * specified period.
     */
    inline void SetVideoBlackSettings(VideoBlackFailoverSettings&& value) { m_videoBlackSettingsHasBeenSet = true; m_videoBlackSettings = std::move(value); }

    /**
     * MediaLive will perform a failover if content is considered black for the
     * specified period.
     */
    inline FailoverConditionSettings& WithVideoBlackSettings(const VideoBlackFailoverSettings& value) { SetVideoBlackSettings(value); return *this;}

    /**
     * MediaLive will perform a failover if content is considered black for the
     * specified period.
     */
    inline FailoverConditionSettings& WithVideoBlackSettings(VideoBlackFailoverSettings&& value) { SetVideoBlackSettings(std::move(value)); return *this;}

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
