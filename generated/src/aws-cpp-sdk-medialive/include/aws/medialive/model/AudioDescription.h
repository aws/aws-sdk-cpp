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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/DvbDashAccessibility.h>
#include <aws/medialive/model/DashRoleAudio.h>
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
    AWS_MEDIALIVE_API AudioDescription() = default;
    AWS_MEDIALIVE_API AudioDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AudioDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Advanced audio normalization settings.
     */
    inline const AudioNormalizationSettings& GetAudioNormalizationSettings() const { return m_audioNormalizationSettings; }
    inline bool AudioNormalizationSettingsHasBeenSet() const { return m_audioNormalizationSettingsHasBeenSet; }
    template<typename AudioNormalizationSettingsT = AudioNormalizationSettings>
    void SetAudioNormalizationSettings(AudioNormalizationSettingsT&& value) { m_audioNormalizationSettingsHasBeenSet = true; m_audioNormalizationSettings = std::forward<AudioNormalizationSettingsT>(value); }
    template<typename AudioNormalizationSettingsT = AudioNormalizationSettings>
    AudioDescription& WithAudioNormalizationSettings(AudioNormalizationSettingsT&& value) { SetAudioNormalizationSettings(std::forward<AudioNormalizationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name of the AudioSelector used as the source for this AudioDescription.
     */
    inline const Aws::String& GetAudioSelectorName() const { return m_audioSelectorName; }
    inline bool AudioSelectorNameHasBeenSet() const { return m_audioSelectorNameHasBeenSet; }
    template<typename AudioSelectorNameT = Aws::String>
    void SetAudioSelectorName(AudioSelectorNameT&& value) { m_audioSelectorNameHasBeenSet = true; m_audioSelectorName = std::forward<AudioSelectorNameT>(value); }
    template<typename AudioSelectorNameT = Aws::String>
    AudioDescription& WithAudioSelectorName(AudioSelectorNameT&& value) { SetAudioSelectorName(std::forward<AudioSelectorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Applies only if audioTypeControl is useConfigured. The values for audioType are
     * defined in ISO-IEC 13818-1.
     */
    inline AudioType GetAudioType() const { return m_audioType; }
    inline bool AudioTypeHasBeenSet() const { return m_audioTypeHasBeenSet; }
    inline void SetAudioType(AudioType value) { m_audioTypeHasBeenSet = true; m_audioType = value; }
    inline AudioDescription& WithAudioType(AudioType value) { SetAudioType(value); return *this;}
    ///@}

    ///@{
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
    inline AudioDescriptionAudioTypeControl GetAudioTypeControl() const { return m_audioTypeControl; }
    inline bool AudioTypeControlHasBeenSet() const { return m_audioTypeControlHasBeenSet; }
    inline void SetAudioTypeControl(AudioDescriptionAudioTypeControl value) { m_audioTypeControlHasBeenSet = true; m_audioTypeControl = value; }
    inline AudioDescription& WithAudioTypeControl(AudioDescriptionAudioTypeControl value) { SetAudioTypeControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Settings to configure one or more solutions that insert audio watermarks in the
     * audio encode
     */
    inline const AudioWatermarkSettings& GetAudioWatermarkingSettings() const { return m_audioWatermarkingSettings; }
    inline bool AudioWatermarkingSettingsHasBeenSet() const { return m_audioWatermarkingSettingsHasBeenSet; }
    template<typename AudioWatermarkingSettingsT = AudioWatermarkSettings>
    void SetAudioWatermarkingSettings(AudioWatermarkingSettingsT&& value) { m_audioWatermarkingSettingsHasBeenSet = true; m_audioWatermarkingSettings = std::forward<AudioWatermarkingSettingsT>(value); }
    template<typename AudioWatermarkingSettingsT = AudioWatermarkSettings>
    AudioDescription& WithAudioWatermarkingSettings(AudioWatermarkingSettingsT&& value) { SetAudioWatermarkingSettings(std::forward<AudioWatermarkingSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Audio codec settings.
     */
    inline const AudioCodecSettings& GetCodecSettings() const { return m_codecSettings; }
    inline bool CodecSettingsHasBeenSet() const { return m_codecSettingsHasBeenSet; }
    template<typename CodecSettingsT = AudioCodecSettings>
    void SetCodecSettings(CodecSettingsT&& value) { m_codecSettingsHasBeenSet = true; m_codecSettings = std::forward<CodecSettingsT>(value); }
    template<typename CodecSettingsT = AudioCodecSettings>
    AudioDescription& WithCodecSettings(CodecSettingsT&& value) { SetCodecSettings(std::forward<CodecSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * RFC 5646 language code representing the language of the audio output track. Only
     * used if languageControlMode is useConfigured, or there is no ISO 639 language
     * code specified in the input.
     */
    inline const Aws::String& GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    template<typename LanguageCodeT = Aws::String>
    void SetLanguageCode(LanguageCodeT&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::forward<LanguageCodeT>(value); }
    template<typename LanguageCodeT = Aws::String>
    AudioDescription& WithLanguageCode(LanguageCodeT&& value) { SetLanguageCode(std::forward<LanguageCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Choosing followInput will cause the ISO 639 language code of the output to
     * follow the ISO 639 language code of the input. The languageCode will be used
     * when useConfigured is set, or when followInput is selected but there is no ISO
     * 639 language code specified by the input.
     */
    inline AudioDescriptionLanguageCodeControl GetLanguageCodeControl() const { return m_languageCodeControl; }
    inline bool LanguageCodeControlHasBeenSet() const { return m_languageCodeControlHasBeenSet; }
    inline void SetLanguageCodeControl(AudioDescriptionLanguageCodeControl value) { m_languageCodeControlHasBeenSet = true; m_languageCodeControl = value; }
    inline AudioDescription& WithLanguageCodeControl(AudioDescriptionLanguageCodeControl value) { SetLanguageCodeControl(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of this AudioDescription. Outputs will use this name to uniquely
     * identify this AudioDescription.  Description names should be unique within this
     * Live Event.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AudioDescription& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings that control how input audio channels are remixed into the output audio
     * channels.
     */
    inline const RemixSettings& GetRemixSettings() const { return m_remixSettings; }
    inline bool RemixSettingsHasBeenSet() const { return m_remixSettingsHasBeenSet; }
    template<typename RemixSettingsT = RemixSettings>
    void SetRemixSettings(RemixSettingsT&& value) { m_remixSettingsHasBeenSet = true; m_remixSettings = std::forward<RemixSettingsT>(value); }
    template<typename RemixSettingsT = RemixSettings>
    AudioDescription& WithRemixSettings(RemixSettingsT&& value) { SetRemixSettings(std::forward<RemixSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Used for MS Smooth and Apple HLS outputs. Indicates the name displayed by the
     * player (eg. English, or Director Commentary).
     */
    inline const Aws::String& GetStreamName() const { return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    template<typename StreamNameT = Aws::String>
    void SetStreamName(StreamNameT&& value) { m_streamNameHasBeenSet = true; m_streamName = std::forward<StreamNameT>(value); }
    template<typename StreamNameT = Aws::String>
    AudioDescription& WithStreamName(StreamNameT&& value) { SetStreamName(std::forward<StreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Identifies the DASH roles to assign to this audio output. Applies only when the
     * audio output is configured for DVB DASH accessibility signaling.
     */
    inline const Aws::Vector<DashRoleAudio>& GetAudioDashRoles() const { return m_audioDashRoles; }
    inline bool AudioDashRolesHasBeenSet() const { return m_audioDashRolesHasBeenSet; }
    template<typename AudioDashRolesT = Aws::Vector<DashRoleAudio>>
    void SetAudioDashRoles(AudioDashRolesT&& value) { m_audioDashRolesHasBeenSet = true; m_audioDashRoles = std::forward<AudioDashRolesT>(value); }
    template<typename AudioDashRolesT = Aws::Vector<DashRoleAudio>>
    AudioDescription& WithAudioDashRoles(AudioDashRolesT&& value) { SetAudioDashRoles(std::forward<AudioDashRolesT>(value)); return *this;}
    inline AudioDescription& AddAudioDashRoles(DashRoleAudio value) { m_audioDashRolesHasBeenSet = true; m_audioDashRoles.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * Identifies DVB DASH accessibility signaling in this audio output. Used in
     * Microsoft Smooth Streaming outputs to signal accessibility information to
     * packagers.
     */
    inline DvbDashAccessibility GetDvbDashAccessibility() const { return m_dvbDashAccessibility; }
    inline bool DvbDashAccessibilityHasBeenSet() const { return m_dvbDashAccessibilityHasBeenSet; }
    inline void SetDvbDashAccessibility(DvbDashAccessibility value) { m_dvbDashAccessibilityHasBeenSet = true; m_dvbDashAccessibility = value; }
    inline AudioDescription& WithDvbDashAccessibility(DvbDashAccessibility value) { SetDvbDashAccessibility(value); return *this;}
    ///@}
  private:

    AudioNormalizationSettings m_audioNormalizationSettings;
    bool m_audioNormalizationSettingsHasBeenSet = false;

    Aws::String m_audioSelectorName;
    bool m_audioSelectorNameHasBeenSet = false;

    AudioType m_audioType{AudioType::NOT_SET};
    bool m_audioTypeHasBeenSet = false;

    AudioDescriptionAudioTypeControl m_audioTypeControl{AudioDescriptionAudioTypeControl::NOT_SET};
    bool m_audioTypeControlHasBeenSet = false;

    AudioWatermarkSettings m_audioWatermarkingSettings;
    bool m_audioWatermarkingSettingsHasBeenSet = false;

    AudioCodecSettings m_codecSettings;
    bool m_codecSettingsHasBeenSet = false;

    Aws::String m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    AudioDescriptionLanguageCodeControl m_languageCodeControl{AudioDescriptionLanguageCodeControl::NOT_SET};
    bool m_languageCodeControlHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RemixSettings m_remixSettings;
    bool m_remixSettingsHasBeenSet = false;

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::Vector<DashRoleAudio> m_audioDashRoles;
    bool m_audioDashRolesHasBeenSet = false;

    DvbDashAccessibility m_dvbDashAccessibility{DvbDashAccessibility::NOT_SET};
    bool m_dvbDashAccessibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
