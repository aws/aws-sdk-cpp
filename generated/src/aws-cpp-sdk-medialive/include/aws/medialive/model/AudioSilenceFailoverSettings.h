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
    AWS_MEDIALIVE_API AudioSilenceFailoverSettings();
    AWS_MEDIALIVE_API AudioSilenceFailoverSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AudioSilenceFailoverSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The name of the audio selector in the input that MediaLive should monitor to
     * detect silence. Select your most important rendition. If you didn't create an
     * audio selector in this input, leave blank.
     */
    inline const Aws::String& GetAudioSelectorName() const{ return m_audioSelectorName; }

    /**
     * The name of the audio selector in the input that MediaLive should monitor to
     * detect silence. Select your most important rendition. If you didn't create an
     * audio selector in this input, leave blank.
     */
    inline bool AudioSelectorNameHasBeenSet() const { return m_audioSelectorNameHasBeenSet; }

    /**
     * The name of the audio selector in the input that MediaLive should monitor to
     * detect silence. Select your most important rendition. If you didn't create an
     * audio selector in this input, leave blank.
     */
    inline void SetAudioSelectorName(const Aws::String& value) { m_audioSelectorNameHasBeenSet = true; m_audioSelectorName = value; }

    /**
     * The name of the audio selector in the input that MediaLive should monitor to
     * detect silence. Select your most important rendition. If you didn't create an
     * audio selector in this input, leave blank.
     */
    inline void SetAudioSelectorName(Aws::String&& value) { m_audioSelectorNameHasBeenSet = true; m_audioSelectorName = std::move(value); }

    /**
     * The name of the audio selector in the input that MediaLive should monitor to
     * detect silence. Select your most important rendition. If you didn't create an
     * audio selector in this input, leave blank.
     */
    inline void SetAudioSelectorName(const char* value) { m_audioSelectorNameHasBeenSet = true; m_audioSelectorName.assign(value); }

    /**
     * The name of the audio selector in the input that MediaLive should monitor to
     * detect silence. Select your most important rendition. If you didn't create an
     * audio selector in this input, leave blank.
     */
    inline AudioSilenceFailoverSettings& WithAudioSelectorName(const Aws::String& value) { SetAudioSelectorName(value); return *this;}

    /**
     * The name of the audio selector in the input that MediaLive should monitor to
     * detect silence. Select your most important rendition. If you didn't create an
     * audio selector in this input, leave blank.
     */
    inline AudioSilenceFailoverSettings& WithAudioSelectorName(Aws::String&& value) { SetAudioSelectorName(std::move(value)); return *this;}

    /**
     * The name of the audio selector in the input that MediaLive should monitor to
     * detect silence. Select your most important rendition. If you didn't create an
     * audio selector in this input, leave blank.
     */
    inline AudioSilenceFailoverSettings& WithAudioSelectorName(const char* value) { SetAudioSelectorName(value); return *this;}


    /**
     * The amount of time (in milliseconds) that the active input must be silent before
     * automatic input failover occurs. Silence is defined as audio loss or audio
     * quieter than -50 dBFS.
     */
    inline int GetAudioSilenceThresholdMsec() const{ return m_audioSilenceThresholdMsec; }

    /**
     * The amount of time (in milliseconds) that the active input must be silent before
     * automatic input failover occurs. Silence is defined as audio loss or audio
     * quieter than -50 dBFS.
     */
    inline bool AudioSilenceThresholdMsecHasBeenSet() const { return m_audioSilenceThresholdMsecHasBeenSet; }

    /**
     * The amount of time (in milliseconds) that the active input must be silent before
     * automatic input failover occurs. Silence is defined as audio loss or audio
     * quieter than -50 dBFS.
     */
    inline void SetAudioSilenceThresholdMsec(int value) { m_audioSilenceThresholdMsecHasBeenSet = true; m_audioSilenceThresholdMsec = value; }

    /**
     * The amount of time (in milliseconds) that the active input must be silent before
     * automatic input failover occurs. Silence is defined as audio loss or audio
     * quieter than -50 dBFS.
     */
    inline AudioSilenceFailoverSettings& WithAudioSilenceThresholdMsec(int value) { SetAudioSilenceThresholdMsec(value); return *this;}

  private:

    Aws::String m_audioSelectorName;
    bool m_audioSelectorNameHasBeenSet = false;

    int m_audioSilenceThresholdMsec;
    bool m_audioSilenceThresholdMsecHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
