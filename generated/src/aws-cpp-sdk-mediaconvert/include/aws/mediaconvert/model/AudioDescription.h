/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AudioChannelTaggingSettings.h>
#include <aws/mediaconvert/model/AudioNormalizationSettings.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/AudioTypeControl.h>
#include <aws/mediaconvert/model/AudioCodecSettings.h>
#include <aws/mediaconvert/model/LanguageCode.h>
#include <aws/mediaconvert/model/AudioLanguageCodeControl.h>
#include <aws/mediaconvert/model/RemixSettings.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Settings related to one audio tab on the MediaConvert console. In your job JSON,
   * an instance of AudioDescription is equivalent to one audio tab in the console.
   * Usually, one audio tab corresponds to one output audio track. Depending on how
   * you set up your input audio selectors and whether you use audio selector groups,
   * one audio tab can correspond to a group of output audio tracks.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AudioDescription">AWS
   * API Reference</a></p>
   */
  class AudioDescription
  {
  public:
    AWS_MEDIACONVERT_API AudioDescription();
    AWS_MEDIACONVERT_API AudioDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API AudioDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify the QuickTime audio channel layout tags for the audio channels in this
     * audio track. When you don't specify a value, MediaConvert labels your track as
     * Center (C) by default. To use Audio layout tagging, your output must be in a
     * QuickTime (MOV) container and your audio codec must be AAC, WAV, or AIFF.
     */
    inline const AudioChannelTaggingSettings& GetAudioChannelTaggingSettings() const{ return m_audioChannelTaggingSettings; }
    inline bool AudioChannelTaggingSettingsHasBeenSet() const { return m_audioChannelTaggingSettingsHasBeenSet; }
    inline void SetAudioChannelTaggingSettings(const AudioChannelTaggingSettings& value) { m_audioChannelTaggingSettingsHasBeenSet = true; m_audioChannelTaggingSettings = value; }
    inline void SetAudioChannelTaggingSettings(AudioChannelTaggingSettings&& value) { m_audioChannelTaggingSettingsHasBeenSet = true; m_audioChannelTaggingSettings = std::move(value); }
    inline AudioDescription& WithAudioChannelTaggingSettings(const AudioChannelTaggingSettings& value) { SetAudioChannelTaggingSettings(value); return *this;}
    inline AudioDescription& WithAudioChannelTaggingSettings(AudioChannelTaggingSettings&& value) { SetAudioChannelTaggingSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Advanced audio normalization settings. Ignore these settings unless you need to
     * comply with a loudness standard.
     */
    inline const AudioNormalizationSettings& GetAudioNormalizationSettings() const{ return m_audioNormalizationSettings; }
    inline bool AudioNormalizationSettingsHasBeenSet() const { return m_audioNormalizationSettingsHasBeenSet; }
    inline void SetAudioNormalizationSettings(const AudioNormalizationSettings& value) { m_audioNormalizationSettingsHasBeenSet = true; m_audioNormalizationSettings = value; }
    inline void SetAudioNormalizationSettings(AudioNormalizationSettings&& value) { m_audioNormalizationSettingsHasBeenSet = true; m_audioNormalizationSettings = std::move(value); }
    inline AudioDescription& WithAudioNormalizationSettings(const AudioNormalizationSettings& value) { SetAudioNormalizationSettings(value); return *this;}
    inline AudioDescription& WithAudioNormalizationSettings(AudioNormalizationSettings&& value) { SetAudioNormalizationSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies which audio data to use from each input. In the simplest case, specify
     * an "Audio Selector":#inputs-audio_selector by name based on its order within
     * each input. For example if you specify "Audio Selector 3", then the third audio
     * selector will be used from each input. If an input does not have an "Audio
     * Selector 3", then the audio selector marked as "default" in that input will be
     * used. If there is no audio selector marked as "default", silence will be
     * inserted for the duration of that input. Alternatively, an "Audio Selector
     * Group":#inputs-audio_selector_group name may be specified, with similar
     * default/silence behavior. If no audio_source_name is specified, then "Audio
     * Selector 1" will be chosen automatically.
     */
    inline const Aws::String& GetAudioSourceName() const{ return m_audioSourceName; }
    inline bool AudioSourceNameHasBeenSet() const { return m_audioSourceNameHasBeenSet; }
    inline void SetAudioSourceName(const Aws::String& value) { m_audioSourceNameHasBeenSet = true; m_audioSourceName = value; }
    inline void SetAudioSourceName(Aws::String&& value) { m_audioSourceNameHasBeenSet = true; m_audioSourceName = std::move(value); }
    inline void SetAudioSourceName(const char* value) { m_audioSourceNameHasBeenSet = true; m_audioSourceName.assign(value); }
    inline AudioDescription& WithAudioSourceName(const Aws::String& value) { SetAudioSourceName(value); return *this;}
    inline AudioDescription& WithAudioSourceName(Aws::String&& value) { SetAudioSourceName(std::move(value)); return *this;}
    inline AudioDescription& WithAudioSourceName(const char* value) { SetAudioSourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * Applies only if Follow Input Audio Type is unchecked (false). A number between 0
     * and 255. The following are defined in ISO-IEC 13818-1: 0 = Undefined, 1 = Clean
     * Effects, 2 = Hearing Impaired, 3 = Visually Impaired Commentary, 4-255 =
     * Reserved.
     */
    inline int GetAudioType() const{ return m_audioType; }
    inline bool AudioTypeHasBeenSet() const { return m_audioTypeHasBeenSet; }
    inline void SetAudioType(int value) { m_audioTypeHasBeenSet = true; m_audioType = value; }
    inline AudioDescription& WithAudioType(int value) { SetAudioType(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to FOLLOW_INPUT, if the input contains an ISO 639 audio_type, then that
     * value is passed through to the output. If the input contains no ISO 639
     * audio_type, the value in Audio Type is included in the output. Otherwise the
     * value in Audio Type is included in the output. Note that this field and
     * audioType are both ignored if audioDescriptionBroadcasterMix is set to
     * BROADCASTER_MIXED_AD.
     */
    inline const AudioTypeControl& GetAudioTypeControl() const{ return m_audioTypeControl; }
    inline bool AudioTypeControlHasBeenSet() const { return m_audioTypeControlHasBeenSet; }
    inline void SetAudioTypeControl(const AudioTypeControl& value) { m_audioTypeControlHasBeenSet = true; m_audioTypeControl = value; }
    inline void SetAudioTypeControl(AudioTypeControl&& value) { m_audioTypeControlHasBeenSet = true; m_audioTypeControl = std::move(value); }
    inline AudioDescription& WithAudioTypeControl(const AudioTypeControl& value) { SetAudioTypeControl(value); return *this;}
    inline AudioDescription& WithAudioTypeControl(AudioTypeControl&& value) { SetAudioTypeControl(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings related to audio encoding. The settings in this group vary depending on
     * the value that you choose for your audio codec.
     */
    inline const AudioCodecSettings& GetCodecSettings() const{ return m_codecSettings; }
    inline bool CodecSettingsHasBeenSet() const { return m_codecSettingsHasBeenSet; }
    inline void SetCodecSettings(const AudioCodecSettings& value) { m_codecSettingsHasBeenSet = true; m_codecSettings = value; }
    inline void SetCodecSettings(AudioCodecSettings&& value) { m_codecSettingsHasBeenSet = true; m_codecSettings = std::move(value); }
    inline AudioDescription& WithCodecSettings(const AudioCodecSettings& value) { SetCodecSettings(value); return *this;}
    inline AudioDescription& WithCodecSettings(AudioCodecSettings&& value) { SetCodecSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the language for this audio output track. The service puts this language
     * code into your output audio track when you set Language code control to Use
     * configured. The service also uses your specified custom language code when you
     * set Language code control to Follow input, but your input file doesn't specify a
     * language code. For all outputs, you can use an ISO 639-2 or ISO 639-3 code. For
     * streaming outputs, you can also use any other code in the full RFC-5646
     * specification. Streaming outputs are those that are in one of the following
     * output groups: CMAF, DASH ISO, Apple HLS, or Microsoft Smooth Streaming.
     */
    inline const Aws::String& GetCustomLanguageCode() const{ return m_customLanguageCode; }
    inline bool CustomLanguageCodeHasBeenSet() const { return m_customLanguageCodeHasBeenSet; }
    inline void SetCustomLanguageCode(const Aws::String& value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode = value; }
    inline void SetCustomLanguageCode(Aws::String&& value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode = std::move(value); }
    inline void SetCustomLanguageCode(const char* value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode.assign(value); }
    inline AudioDescription& WithCustomLanguageCode(const Aws::String& value) { SetCustomLanguageCode(value); return *this;}
    inline AudioDescription& WithCustomLanguageCode(Aws::String&& value) { SetCustomLanguageCode(std::move(value)); return *this;}
    inline AudioDescription& WithCustomLanguageCode(const char* value) { SetCustomLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * Indicates the language of the audio output track. The ISO 639 language specified
     * in the 'Language Code' drop down will be used when 'Follow Input Language Code'
     * is not selected or when 'Follow Input Language Code' is selected but there is no
     * ISO 639 language code specified by the input.
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }
    inline AudioDescription& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}
    inline AudioDescription& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify which source for language code takes precedence for this audio track.
     * When you choose Follow input, the service uses the language code from the input
     * track if it's present. If there's no languge code on the input track, the
     * service uses the code that you specify in the setting Language code. When you
     * choose Use configured, the service uses the language code that you specify.
     */
    inline const AudioLanguageCodeControl& GetLanguageCodeControl() const{ return m_languageCodeControl; }
    inline bool LanguageCodeControlHasBeenSet() const { return m_languageCodeControlHasBeenSet; }
    inline void SetLanguageCodeControl(const AudioLanguageCodeControl& value) { m_languageCodeControlHasBeenSet = true; m_languageCodeControl = value; }
    inline void SetLanguageCodeControl(AudioLanguageCodeControl&& value) { m_languageCodeControlHasBeenSet = true; m_languageCodeControl = std::move(value); }
    inline AudioDescription& WithLanguageCodeControl(const AudioLanguageCodeControl& value) { SetLanguageCodeControl(value); return *this;}
    inline AudioDescription& WithLanguageCodeControl(AudioLanguageCodeControl&& value) { SetLanguageCodeControl(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Advanced audio remixing settings.
     */
    inline const RemixSettings& GetRemixSettings() const{ return m_remixSettings; }
    inline bool RemixSettingsHasBeenSet() const { return m_remixSettingsHasBeenSet; }
    inline void SetRemixSettings(const RemixSettings& value) { m_remixSettingsHasBeenSet = true; m_remixSettings = value; }
    inline void SetRemixSettings(RemixSettings&& value) { m_remixSettingsHasBeenSet = true; m_remixSettings = std::move(value); }
    inline AudioDescription& WithRemixSettings(const RemixSettings& value) { SetRemixSettings(value); return *this;}
    inline AudioDescription& WithRemixSettings(RemixSettings&& value) { SetRemixSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify a label for this output audio stream. For example, "English", "Director
     * commentary", or "track_2". For streaming outputs, MediaConvert passes this
     * information into destination manifests for display on the end-viewer's player
     * device. For outputs in other output groups, the service ignores this setting.
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }
    inline AudioDescription& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}
    inline AudioDescription& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}
    inline AudioDescription& WithStreamName(const char* value) { SetStreamName(value); return *this;}
    ///@}
  private:

    AudioChannelTaggingSettings m_audioChannelTaggingSettings;
    bool m_audioChannelTaggingSettingsHasBeenSet = false;

    AudioNormalizationSettings m_audioNormalizationSettings;
    bool m_audioNormalizationSettingsHasBeenSet = false;

    Aws::String m_audioSourceName;
    bool m_audioSourceNameHasBeenSet = false;

    int m_audioType;
    bool m_audioTypeHasBeenSet = false;

    AudioTypeControl m_audioTypeControl;
    bool m_audioTypeControlHasBeenSet = false;

    AudioCodecSettings m_codecSettings;
    bool m_codecSettingsHasBeenSet = false;

    Aws::String m_customLanguageCode;
    bool m_customLanguageCodeHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    AudioLanguageCodeControl m_languageCodeControl;
    bool m_languageCodeControlHasBeenSet = false;

    RemixSettings m_remixSettings;
    bool m_remixSettingsHasBeenSet = false;

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
