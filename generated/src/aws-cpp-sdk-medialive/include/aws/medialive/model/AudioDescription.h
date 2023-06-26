/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AudioNormalizationSettings.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/AudioType.h>
#include <aws/medialive/model/AudioDescriptionAudioTypeControl.h>
#include <aws/medialive/model/AudioWatermarkSettings.h>
#include <aws/medialive/model/AudioCodecSettings.h>
#include <aws/medialive/model/AudioDescriptionLanguageCodeControl.h>
#include <aws/medialive/model/RemixSettings.h>
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
   * Audio Description<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioDescription">AWS
   * API Reference</a></p>
   */
  class AudioDescription
  {
  public:
    AWS_MEDIALIVE_API AudioDescription();
    AWS_MEDIALIVE_API AudioDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AudioDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Advanced audio normalization settings.
     */
    inline const AudioNormalizationSettings& GetAudioNormalizationSettings() const{ return m_audioNormalizationSettings; }

    /**
     * Advanced audio normalization settings.
     */
    inline bool AudioNormalizationSettingsHasBeenSet() const { return m_audioNormalizationSettingsHasBeenSet; }

    /**
     * Advanced audio normalization settings.
     */
    inline void SetAudioNormalizationSettings(const AudioNormalizationSettings& value) { m_audioNormalizationSettingsHasBeenSet = true; m_audioNormalizationSettings = value; }

    /**
     * Advanced audio normalization settings.
     */
    inline void SetAudioNormalizationSettings(AudioNormalizationSettings&& value) { m_audioNormalizationSettingsHasBeenSet = true; m_audioNormalizationSettings = std::move(value); }

    /**
     * Advanced audio normalization settings.
     */
    inline AudioDescription& WithAudioNormalizationSettings(const AudioNormalizationSettings& value) { SetAudioNormalizationSettings(value); return *this;}

    /**
     * Advanced audio normalization settings.
     */
    inline AudioDescription& WithAudioNormalizationSettings(AudioNormalizationSettings&& value) { SetAudioNormalizationSettings(std::move(value)); return *this;}


    /**
     * The name of the AudioSelector used as the source for this AudioDescription.
     */
    inline const Aws::String& GetAudioSelectorName() const{ return m_audioSelectorName; }

    /**
     * The name of the AudioSelector used as the source for this AudioDescription.
     */
    inline bool AudioSelectorNameHasBeenSet() const { return m_audioSelectorNameHasBeenSet; }

    /**
     * The name of the AudioSelector used as the source for this AudioDescription.
     */
    inline void SetAudioSelectorName(const Aws::String& value) { m_audioSelectorNameHasBeenSet = true; m_audioSelectorName = value; }

    /**
     * The name of the AudioSelector used as the source for this AudioDescription.
     */
    inline void SetAudioSelectorName(Aws::String&& value) { m_audioSelectorNameHasBeenSet = true; m_audioSelectorName = std::move(value); }

    /**
     * The name of the AudioSelector used as the source for this AudioDescription.
     */
    inline void SetAudioSelectorName(const char* value) { m_audioSelectorNameHasBeenSet = true; m_audioSelectorName.assign(value); }

    /**
     * The name of the AudioSelector used as the source for this AudioDescription.
     */
    inline AudioDescription& WithAudioSelectorName(const Aws::String& value) { SetAudioSelectorName(value); return *this;}

    /**
     * The name of the AudioSelector used as the source for this AudioDescription.
     */
    inline AudioDescription& WithAudioSelectorName(Aws::String&& value) { SetAudioSelectorName(std::move(value)); return *this;}

    /**
     * The name of the AudioSelector used as the source for this AudioDescription.
     */
    inline AudioDescription& WithAudioSelectorName(const char* value) { SetAudioSelectorName(value); return *this;}


    /**
     * Applies only if audioTypeControl is useConfigured. The values for audioType are
     * defined in ISO-IEC 13818-1.
     */
    inline const AudioType& GetAudioType() const{ return m_audioType; }

    /**
     * Applies only if audioTypeControl is useConfigured. The values for audioType are
     * defined in ISO-IEC 13818-1.
     */
    inline bool AudioTypeHasBeenSet() const { return m_audioTypeHasBeenSet; }

    /**
     * Applies only if audioTypeControl is useConfigured. The values for audioType are
     * defined in ISO-IEC 13818-1.
     */
    inline void SetAudioType(const AudioType& value) { m_audioTypeHasBeenSet = true; m_audioType = value; }

    /**
     * Applies only if audioTypeControl is useConfigured. The values for audioType are
     * defined in ISO-IEC 13818-1.
     */
    inline void SetAudioType(AudioType&& value) { m_audioTypeHasBeenSet = true; m_audioType = std::move(value); }

    /**
     * Applies only if audioTypeControl is useConfigured. The values for audioType are
     * defined in ISO-IEC 13818-1.
     */
    inline AudioDescription& WithAudioType(const AudioType& value) { SetAudioType(value); return *this;}

    /**
     * Applies only if audioTypeControl is useConfigured. The values for audioType are
     * defined in ISO-IEC 13818-1.
     */
    inline AudioDescription& WithAudioType(AudioType&& value) { SetAudioType(std::move(value)); return *this;}


    /**
     * Determines how audio type is determined.
  followInput: If the input contains an
     * ISO 639 audioType, then that value is passed through to the output. If the input
     * contains no ISO 639 audioType, the value in Audio Type is included in the
     * output.
  useConfigured: The value in Audio Type is included in the output.
Note
     * that this field and audioType are both ignored if inputType is
     * broadcasterMixedAd.
     */
    inline const AudioDescriptionAudioTypeControl& GetAudioTypeControl() const{ return m_audioTypeControl; }

    /**
     * Determines how audio type is determined.
  followInput: If the input contains an
     * ISO 639 audioType, then that value is passed through to the output. If the input
     * contains no ISO 639 audioType, the value in Audio Type is included in the
     * output.
  useConfigured: The value in Audio Type is included in the output.
Note
     * that this field and audioType are both ignored if inputType is
     * broadcasterMixedAd.
     */
    inline bool AudioTypeControlHasBeenSet() const { return m_audioTypeControlHasBeenSet; }

    /**
     * Determines how audio type is determined.
  followInput: If the input contains an
     * ISO 639 audioType, then that value is passed through to the output. If the input
     * contains no ISO 639 audioType, the value in Audio Type is included in the
     * output.
  useConfigured: The value in Audio Type is included in the output.
Note
     * that this field and audioType are both ignored if inputType is
     * broadcasterMixedAd.
     */
    inline void SetAudioTypeControl(const AudioDescriptionAudioTypeControl& value) { m_audioTypeControlHasBeenSet = true; m_audioTypeControl = value; }

    /**
     * Determines how audio type is determined.
  followInput: If the input contains an
     * ISO 639 audioType, then that value is passed through to the output. If the input
     * contains no ISO 639 audioType, the value in Audio Type is included in the
     * output.
  useConfigured: The value in Audio Type is included in the output.
Note
     * that this field and audioType are both ignored if inputType is
     * broadcasterMixedAd.
     */
    inline void SetAudioTypeControl(AudioDescriptionAudioTypeControl&& value) { m_audioTypeControlHasBeenSet = true; m_audioTypeControl = std::move(value); }

    /**
     * Determines how audio type is determined.
  followInput: If the input contains an
     * ISO 639 audioType, then that value is passed through to the output. If the input
     * contains no ISO 639 audioType, the value in Audio Type is included in the
     * output.
  useConfigured: The value in Audio Type is included in the output.
Note
     * that this field and audioType are both ignored if inputType is
     * broadcasterMixedAd.
     */
    inline AudioDescription& WithAudioTypeControl(const AudioDescriptionAudioTypeControl& value) { SetAudioTypeControl(value); return *this;}

    /**
     * Determines how audio type is determined.
  followInput: If the input contains an
     * ISO 639 audioType, then that value is passed through to the output. If the input
     * contains no ISO 639 audioType, the value in Audio Type is included in the
     * output.
  useConfigured: The value in Audio Type is included in the output.
Note
     * that this field and audioType are both ignored if inputType is
     * broadcasterMixedAd.
     */
    inline AudioDescription& WithAudioTypeControl(AudioDescriptionAudioTypeControl&& value) { SetAudioTypeControl(std::move(value)); return *this;}


    /**
     * Settings to configure one or more solutions that insert audio watermarks in the
     * audio encode
     */
    inline const AudioWatermarkSettings& GetAudioWatermarkingSettings() const{ return m_audioWatermarkingSettings; }

    /**
     * Settings to configure one or more solutions that insert audio watermarks in the
     * audio encode
     */
    inline bool AudioWatermarkingSettingsHasBeenSet() const { return m_audioWatermarkingSettingsHasBeenSet; }

    /**
     * Settings to configure one or more solutions that insert audio watermarks in the
     * audio encode
     */
    inline void SetAudioWatermarkingSettings(const AudioWatermarkSettings& value) { m_audioWatermarkingSettingsHasBeenSet = true; m_audioWatermarkingSettings = value; }

    /**
     * Settings to configure one or more solutions that insert audio watermarks in the
     * audio encode
     */
    inline void SetAudioWatermarkingSettings(AudioWatermarkSettings&& value) { m_audioWatermarkingSettingsHasBeenSet = true; m_audioWatermarkingSettings = std::move(value); }

    /**
     * Settings to configure one or more solutions that insert audio watermarks in the
     * audio encode
     */
    inline AudioDescription& WithAudioWatermarkingSettings(const AudioWatermarkSettings& value) { SetAudioWatermarkingSettings(value); return *this;}

    /**
     * Settings to configure one or more solutions that insert audio watermarks in the
     * audio encode
     */
    inline AudioDescription& WithAudioWatermarkingSettings(AudioWatermarkSettings&& value) { SetAudioWatermarkingSettings(std::move(value)); return *this;}


    /**
     * Audio codec settings.
     */
    inline const AudioCodecSettings& GetCodecSettings() const{ return m_codecSettings; }

    /**
     * Audio codec settings.
     */
    inline bool CodecSettingsHasBeenSet() const { return m_codecSettingsHasBeenSet; }

    /**
     * Audio codec settings.
     */
    inline void SetCodecSettings(const AudioCodecSettings& value) { m_codecSettingsHasBeenSet = true; m_codecSettings = value; }

    /**
     * Audio codec settings.
     */
    inline void SetCodecSettings(AudioCodecSettings&& value) { m_codecSettingsHasBeenSet = true; m_codecSettings = std::move(value); }

    /**
     * Audio codec settings.
     */
    inline AudioDescription& WithCodecSettings(const AudioCodecSettings& value) { SetCodecSettings(value); return *this;}

    /**
     * Audio codec settings.
     */
    inline AudioDescription& WithCodecSettings(AudioCodecSettings&& value) { SetCodecSettings(std::move(value)); return *this;}


    /**
     * RFC 5646 language code representing the language of the audio output track. Only
     * used if languageControlMode is useConfigured, or there is no ISO 639 language
     * code specified in the input.
     */
    inline const Aws::String& GetLanguageCode() const{ return m_languageCode; }

    /**
     * RFC 5646 language code representing the language of the audio output track. Only
     * used if languageControlMode is useConfigured, or there is no ISO 639 language
     * code specified in the input.
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * RFC 5646 language code representing the language of the audio output track. Only
     * used if languageControlMode is useConfigured, or there is no ISO 639 language
     * code specified in the input.
     */
    inline void SetLanguageCode(const Aws::String& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * RFC 5646 language code representing the language of the audio output track. Only
     * used if languageControlMode is useConfigured, or there is no ISO 639 language
     * code specified in the input.
     */
    inline void SetLanguageCode(Aws::String&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * RFC 5646 language code representing the language of the audio output track. Only
     * used if languageControlMode is useConfigured, or there is no ISO 639 language
     * code specified in the input.
     */
    inline void SetLanguageCode(const char* value) { m_languageCodeHasBeenSet = true; m_languageCode.assign(value); }

    /**
     * RFC 5646 language code representing the language of the audio output track. Only
     * used if languageControlMode is useConfigured, or there is no ISO 639 language
     * code specified in the input.
     */
    inline AudioDescription& WithLanguageCode(const Aws::String& value) { SetLanguageCode(value); return *this;}

    /**
     * RFC 5646 language code representing the language of the audio output track. Only
     * used if languageControlMode is useConfigured, or there is no ISO 639 language
     * code specified in the input.
     */
    inline AudioDescription& WithLanguageCode(Aws::String&& value) { SetLanguageCode(std::move(value)); return *this;}

    /**
     * RFC 5646 language code representing the language of the audio output track. Only
     * used if languageControlMode is useConfigured, or there is no ISO 639 language
     * code specified in the input.
     */
    inline AudioDescription& WithLanguageCode(const char* value) { SetLanguageCode(value); return *this;}


    /**
     * Choosing followInput will cause the ISO 639 language code of the output to
     * follow the ISO 639 language code of the input. The languageCode will be used
     * when useConfigured is set, or when followInput is selected but there is no ISO
     * 639 language code specified by the input.
     */
    inline const AudioDescriptionLanguageCodeControl& GetLanguageCodeControl() const{ return m_languageCodeControl; }

    /**
     * Choosing followInput will cause the ISO 639 language code of the output to
     * follow the ISO 639 language code of the input. The languageCode will be used
     * when useConfigured is set, or when followInput is selected but there is no ISO
     * 639 language code specified by the input.
     */
    inline bool LanguageCodeControlHasBeenSet() const { return m_languageCodeControlHasBeenSet; }

    /**
     * Choosing followInput will cause the ISO 639 language code of the output to
     * follow the ISO 639 language code of the input. The languageCode will be used
     * when useConfigured is set, or when followInput is selected but there is no ISO
     * 639 language code specified by the input.
     */
    inline void SetLanguageCodeControl(const AudioDescriptionLanguageCodeControl& value) { m_languageCodeControlHasBeenSet = true; m_languageCodeControl = value; }

    /**
     * Choosing followInput will cause the ISO 639 language code of the output to
     * follow the ISO 639 language code of the input. The languageCode will be used
     * when useConfigured is set, or when followInput is selected but there is no ISO
     * 639 language code specified by the input.
     */
    inline void SetLanguageCodeControl(AudioDescriptionLanguageCodeControl&& value) { m_languageCodeControlHasBeenSet = true; m_languageCodeControl = std::move(value); }

    /**
     * Choosing followInput will cause the ISO 639 language code of the output to
     * follow the ISO 639 language code of the input. The languageCode will be used
     * when useConfigured is set, or when followInput is selected but there is no ISO
     * 639 language code specified by the input.
     */
    inline AudioDescription& WithLanguageCodeControl(const AudioDescriptionLanguageCodeControl& value) { SetLanguageCodeControl(value); return *this;}

    /**
     * Choosing followInput will cause the ISO 639 language code of the output to
     * follow the ISO 639 language code of the input. The languageCode will be used
     * when useConfigured is set, or when followInput is selected but there is no ISO
     * 639 language code specified by the input.
     */
    inline AudioDescription& WithLanguageCodeControl(AudioDescriptionLanguageCodeControl&& value) { SetLanguageCodeControl(std::move(value)); return *this;}


    /**
     * The name of this AudioDescription. Outputs will use this name to uniquely
     * identify this AudioDescription.  Description names should be unique within this
     * Live Event.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of this AudioDescription. Outputs will use this name to uniquely
     * identify this AudioDescription.  Description names should be unique within this
     * Live Event.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of this AudioDescription. Outputs will use this name to uniquely
     * identify this AudioDescription.  Description names should be unique within this
     * Live Event.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of this AudioDescription. Outputs will use this name to uniquely
     * identify this AudioDescription.  Description names should be unique within this
     * Live Event.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of this AudioDescription. Outputs will use this name to uniquely
     * identify this AudioDescription.  Description names should be unique within this
     * Live Event.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of this AudioDescription. Outputs will use this name to uniquely
     * identify this AudioDescription.  Description names should be unique within this
     * Live Event.
     */
    inline AudioDescription& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of this AudioDescription. Outputs will use this name to uniquely
     * identify this AudioDescription.  Description names should be unique within this
     * Live Event.
     */
    inline AudioDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of this AudioDescription. Outputs will use this name to uniquely
     * identify this AudioDescription.  Description names should be unique within this
     * Live Event.
     */
    inline AudioDescription& WithName(const char* value) { SetName(value); return *this;}


    /**
     * Settings that control how input audio channels are remixed into the output audio
     * channels.
     */
    inline const RemixSettings& GetRemixSettings() const{ return m_remixSettings; }

    /**
     * Settings that control how input audio channels are remixed into the output audio
     * channels.
     */
    inline bool RemixSettingsHasBeenSet() const { return m_remixSettingsHasBeenSet; }

    /**
     * Settings that control how input audio channels are remixed into the output audio
     * channels.
     */
    inline void SetRemixSettings(const RemixSettings& value) { m_remixSettingsHasBeenSet = true; m_remixSettings = value; }

    /**
     * Settings that control how input audio channels are remixed into the output audio
     * channels.
     */
    inline void SetRemixSettings(RemixSettings&& value) { m_remixSettingsHasBeenSet = true; m_remixSettings = std::move(value); }

    /**
     * Settings that control how input audio channels are remixed into the output audio
     * channels.
     */
    inline AudioDescription& WithRemixSettings(const RemixSettings& value) { SetRemixSettings(value); return *this;}

    /**
     * Settings that control how input audio channels are remixed into the output audio
     * channels.
     */
    inline AudioDescription& WithRemixSettings(RemixSettings&& value) { SetRemixSettings(std::move(value)); return *this;}


    /**
     * Used for MS Smooth and Apple HLS outputs. Indicates the name displayed by the
     * player (eg. English, or Director Commentary).
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * Used for MS Smooth and Apple HLS outputs. Indicates the name displayed by the
     * player (eg. English, or Director Commentary).
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * Used for MS Smooth and Apple HLS outputs. Indicates the name displayed by the
     * player (eg. English, or Director Commentary).
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * Used for MS Smooth and Apple HLS outputs. Indicates the name displayed by the
     * player (eg. English, or Director Commentary).
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * Used for MS Smooth and Apple HLS outputs. Indicates the name displayed by the
     * player (eg. English, or Director Commentary).
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * Used for MS Smooth and Apple HLS outputs. Indicates the name displayed by the
     * player (eg. English, or Director Commentary).
     */
    inline AudioDescription& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * Used for MS Smooth and Apple HLS outputs. Indicates the name displayed by the
     * player (eg. English, or Director Commentary).
     */
    inline AudioDescription& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * Used for MS Smooth and Apple HLS outputs. Indicates the name displayed by the
     * player (eg. English, or Director Commentary).
     */
    inline AudioDescription& WithStreamName(const char* value) { SetStreamName(value); return *this;}

  private:

    AudioNormalizationSettings m_audioNormalizationSettings;
    bool m_audioNormalizationSettingsHasBeenSet = false;

    Aws::String m_audioSelectorName;
    bool m_audioSelectorNameHasBeenSet = false;

    AudioType m_audioType;
    bool m_audioTypeHasBeenSet = false;

    AudioDescriptionAudioTypeControl m_audioTypeControl;
    bool m_audioTypeControlHasBeenSet = false;

    AudioWatermarkSettings m_audioWatermarkingSettings;
    bool m_audioWatermarkingSettingsHasBeenSet = false;

    AudioCodecSettings m_codecSettings;
    bool m_codecSettingsHasBeenSet = false;

    Aws::String m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    AudioDescriptionLanguageCodeControl m_languageCodeControl;
    bool m_languageCodeControlHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RemixSettings m_remixSettings;
    bool m_remixSettingsHasBeenSet = false;

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
