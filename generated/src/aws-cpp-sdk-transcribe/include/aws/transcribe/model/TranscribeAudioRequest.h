/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/ContentRedaction.h>
#include <aws/transcribe/model/LanguageDetectionMode.h>
#include <aws/transcribe/model/SyncLanguage.h>
#include <aws/transcribe/model/SyncMedia.h>
#include <aws/transcribe/model/SyncOutputConfiguration.h>
#include <aws/transcribe/model/VocabularyFilterSettings.h>
#include <aws/transcribe/model/VocabularySettingsEntry.h>

#include <utility>

namespace Aws {
namespace TranscribeService {
namespace Model {

/**
 */
class TranscribeAudioRequest : public TranscribeServiceRequest {
 public:
  AWS_TRANSCRIBESERVICE_API TranscribeAudioRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "TranscribeAudio"; }

  AWS_TRANSCRIBESERVICE_API Aws::String SerializePayload() const override;

  AWS_TRANSCRIBESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The audio to transcribe. Specify exactly one of <code>MediaBytes</code> or
   * <code>MediaFileUri</code>.</p> <p>Audio sent in the request
   * (<code>MediaBytes</code>) can be up to 25 MB. Audio in Amazon S3
   * (<code>MediaFileUri</code>) can be up to 500 MB.</p>
   */
  inline const SyncMedia& GetMedia() const { return m_media; }
  inline bool MediaHasBeenSet() const { return m_mediaHasBeenSet; }
  template <typename MediaT = SyncMedia>
  void SetMedia(MediaT&& value) {
    m_mediaHasBeenSet = true;
    m_media = std::forward<MediaT>(value);
  }
  template <typename MediaT = SyncMedia>
  TranscribeAudioRequest& WithMedia(MediaT&& value) {
    SetMedia(std::forward<MediaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The language spoken in your audio, as a base language code (for example,
   * <code>en</code> or <code>es</code>).</p> <p>Include either <code>Language</code>
   * or <code>LanguageDetectionMode</code> in your request, but not both.</p>
   */
  inline SyncLanguage GetLanguage() const { return m_language; }
  inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
  inline void SetLanguage(SyncLanguage value) {
    m_languageHasBeenSet = true;
    m_language = value;
  }
  inline TranscribeAudioRequest& WithLanguage(SyncLanguage value) {
    SetLanguage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Enables automatic language identification. Use <code>IDENTIFY_LANGUAGE</code>
   * if your audio contains a single language that you don't know in advance.</p>
   * <p>You can optionally include <code>LanguageOptions</code> to limit
   * identification to languages you think may be present, which can improve
   * accuracy.</p> <p>Amazon Transcribe returns the identified language, as a locale
   * (for example, <code>en-US</code>), in the response metadata.</p> <p>Include
   * either <code>Language</code> or <code>LanguageDetectionMode</code> in your
   * request, but not both.</p>
   */
  inline LanguageDetectionMode GetLanguageDetectionMode() const { return m_languageDetectionMode; }
  inline bool LanguageDetectionModeHasBeenSet() const { return m_languageDetectionModeHasBeenSet; }
  inline void SetLanguageDetectionMode(LanguageDetectionMode value) {
    m_languageDetectionModeHasBeenSet = true;
    m_languageDetectionMode = value;
  }
  inline TranscribeAudioRequest& WithLanguageDetectionMode(LanguageDetectionMode value) {
    SetLanguageDetectionMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of two or more languages that you think may be present in your audio,
   * as base language codes (for example, <code>en</code> and <code>es</code>). Each
   * language can appear only once. A list with only one language returns a
   * <code>BadRequestException</code>.</p> <p>You can use
   * <code>LanguageOptions</code> only with <code>LanguageDetectionMode</code>.</p>
   */
  inline const Aws::Vector<SyncLanguage>& GetLanguageOptions() const { return m_languageOptions; }
  inline bool LanguageOptionsHasBeenSet() const { return m_languageOptionsHasBeenSet; }
  template <typename LanguageOptionsT = Aws::Vector<SyncLanguage>>
  void SetLanguageOptions(LanguageOptionsT&& value) {
    m_languageOptionsHasBeenSet = true;
    m_languageOptions = std::forward<LanguageOptionsT>(value);
  }
  template <typename LanguageOptionsT = Aws::Vector<SyncLanguage>>
  TranscribeAudioRequest& WithLanguageOptions(LanguageOptionsT&& value) {
    SetLanguageOptions(std::forward<LanguageOptionsT>(value));
    return *this;
  }
  inline TranscribeAudioRequest& AddLanguageOptions(SyncLanguage value) {
    m_languageOptionsHasBeenSet = true;
    m_languageOptions.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Enables channel identification in multi-channel audio. Each channel is
   * transcribed independently, and each item in the transcript is labeled with its
   * channel.</p> <p>Channel identification supports up to two channels.</p>
   */
  inline bool GetChannelIdentification() const { return m_channelIdentification; }
  inline bool ChannelIdentificationHasBeenSet() const { return m_channelIdentificationHasBeenSet; }
  inline void SetChannelIdentification(bool value) {
    m_channelIdentificationHasBeenSet = true;
    m_channelIdentification = value;
  }
  inline TranscribeAudioRequest& WithChannelIdentification(bool value) {
    SetChannelIdentification(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Enables speaker partitioning (diarization) in your transcript. Speaker
   * partitioning labels the speech from individual speakers in your media file.</p>
   * <p>If you set <code>ShowSpeakerLabels</code> to <code>true</code>, you must also
   * include <code>MaxSpeakerLabels</code>.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/transcribe/latest/dg/diarization.html">Partitioning
   * speakers (diarization)</a>.</p>
   */
  inline bool GetShowSpeakerLabels() const { return m_showSpeakerLabels; }
  inline bool ShowSpeakerLabelsHasBeenSet() const { return m_showSpeakerLabelsHasBeenSet; }
  inline void SetShowSpeakerLabels(bool value) {
    m_showSpeakerLabelsHasBeenSet = true;
    m_showSpeakerLabels = value;
  }
  inline TranscribeAudioRequest& WithShowSpeakerLabels(bool value) {
    SetShowSpeakerLabels(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specify the maximum number of speakers you want to partition in your
   * media.</p> <p>Note that if your media contains more speakers than the specified
   * number, Amazon Transcribe treats multiple speakers as a single speaker.</p>
   * <p>You can set <code>MaxSpeakerLabels</code> only if
   * <code>ShowSpeakerLabels</code> is <code>true</code>.</p>
   */
  inline int GetMaxSpeakerLabels() const { return m_maxSpeakerLabels; }
  inline bool MaxSpeakerLabelsHasBeenSet() const { return m_maxSpeakerLabelsHasBeenSet; }
  inline void SetMaxSpeakerLabels(int value) {
    m_maxSpeakerLabelsHasBeenSet = true;
    m_maxSpeakerLabels = value;
  }
  inline TranscribeAudioRequest& WithMaxSpeakerLabels(int value) {
    SetMaxSpeakerLabels(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Custom vocabularies to apply to your transcript, with one entry per language.
   * In each entry, you can reference a custom vocabulary you created or provide
   * phrases inline. All entries must use the same type, either all by name or all
   * inline.</p> <p>If you specify <code>Language</code>, include exactly one entry,
   * and its <code>Language</code> must match. If you use
   * <code>LanguageDetectionMode</code>, you can include one entry for each language
   * in <code>LanguageOptions</code>.</p>
   */
  inline const Aws::Vector<VocabularySettingsEntry>& GetVocabularySettings() const { return m_vocabularySettings; }
  inline bool VocabularySettingsHasBeenSet() const { return m_vocabularySettingsHasBeenSet; }
  template <typename VocabularySettingsT = Aws::Vector<VocabularySettingsEntry>>
  void SetVocabularySettings(VocabularySettingsT&& value) {
    m_vocabularySettingsHasBeenSet = true;
    m_vocabularySettings = std::forward<VocabularySettingsT>(value);
  }
  template <typename VocabularySettingsT = Aws::Vector<VocabularySettingsEntry>>
  TranscribeAudioRequest& WithVocabularySettings(VocabularySettingsT&& value) {
    SetVocabularySettings(std::forward<VocabularySettingsT>(value));
    return *this;
  }
  template <typename VocabularySettingsT = VocabularySettingsEntry>
  TranscribeAudioRequest& AddVocabularySettings(VocabularySettingsT&& value) {
    m_vocabularySettingsHasBeenSet = true;
    m_vocabularySettings.emplace_back(std::forward<VocabularySettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Custom vocabulary filters to apply to your transcript, and how to apply
   * them.</p>
   */
  inline const VocabularyFilterSettings& GetVocabularyFilterSettings() const { return m_vocabularyFilterSettings; }
  inline bool VocabularyFilterSettingsHasBeenSet() const { return m_vocabularyFilterSettingsHasBeenSet; }
  template <typename VocabularyFilterSettingsT = VocabularyFilterSettings>
  void SetVocabularyFilterSettings(VocabularyFilterSettingsT&& value) {
    m_vocabularyFilterSettingsHasBeenSet = true;
    m_vocabularyFilterSettings = std::forward<VocabularyFilterSettingsT>(value);
  }
  template <typename VocabularyFilterSettingsT = VocabularyFilterSettings>
  TranscribeAudioRequest& WithVocabularyFilterSettings(VocabularyFilterSettingsT&& value) {
    SetVocabularyFilterSettings(std::forward<VocabularyFilterSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Redacts personally identifiable information (PII) from your transcript.
   * Amazon Transcribe returns the redacted transcript in
   * <code>RedactedResults</code>.</p> <p>If you set <code>RedactionOutput</code> to
   * <code>redacted_and_unredacted</code>, Amazon Transcribe also returns the
   * unredacted transcript in <code>Results</code>.</p> <p>In Sync, content redaction
   * has these limits:</p> <ul> <li> <p> <b>Languages:</b> English (<code>en</code>),
   * Spanish (<code>es</code>), French (<code>fr</code>), Italian (<code>it</code>),
   * German (<code>de</code>), and Portuguese (<code>pt</code>).</p> </li> <li> <p>
   * <b>Language identification:</b> If you use <code>LanguageDetectionMode</code>,
   * you must also include <code>LanguageOptions</code>, and every language in it
   * must be one of the languages above. A request that has no
   * <code>LanguageOptions</code>, or that lists a language that isn't supported,
   * returns a <code>BadRequestException</code>.</p> </li> <li> <p> <b>Regions:</b>
   * Content redaction isn't available in the South America (São Paulo) Region
   * (<code>sa-east-1</code>). It's available in the other Amazon Web Services
   * Regions where Sync is available.</p> </li> </ul>
   */
  inline const ContentRedaction& GetContentRedaction() const { return m_contentRedaction; }
  inline bool ContentRedactionHasBeenSet() const { return m_contentRedactionHasBeenSet; }
  template <typename ContentRedactionT = ContentRedaction>
  void SetContentRedaction(ContentRedactionT&& value) {
    m_contentRedactionHasBeenSet = true;
    m_contentRedaction = std::forward<ContentRedactionT>(value);
  }
  template <typename ContentRedactionT = ContentRedaction>
  TranscribeAudioRequest& WithContentRedaction(ContentRedactionT&& value) {
    SetContentRedaction(std::forward<ContentRedactionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Writes the transcript to an Amazon S3 location instead of returning it in the
   * response. If you include <code>OutputConfiguration</code>, the response contains
   * only the output location.</p> <p>You must have write permission for the location
   * you specify.</p>
   */
  inline const SyncOutputConfiguration& GetOutputConfiguration() const { return m_outputConfiguration; }
  inline bool OutputConfigurationHasBeenSet() const { return m_outputConfigurationHasBeenSet; }
  template <typename OutputConfigurationT = SyncOutputConfiguration>
  void SetOutputConfiguration(OutputConfigurationT&& value) {
    m_outputConfigurationHasBeenSet = true;
    m_outputConfiguration = std::forward<OutputConfigurationT>(value);
  }
  template <typename OutputConfigurationT = SyncOutputConfiguration>
  TranscribeAudioRequest& WithOutputConfiguration(OutputConfigurationT&& value) {
    SetOutputConfiguration(std::forward<OutputConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  SyncMedia m_media;

  SyncLanguage m_language{SyncLanguage::NOT_SET};

  LanguageDetectionMode m_languageDetectionMode{LanguageDetectionMode::NOT_SET};

  Aws::Vector<SyncLanguage> m_languageOptions;

  bool m_channelIdentification{false};

  bool m_showSpeakerLabels{false};

  int m_maxSpeakerLabels{0};

  Aws::Vector<VocabularySettingsEntry> m_vocabularySettings;

  VocabularyFilterSettings m_vocabularyFilterSettings;

  ContentRedaction m_contentRedaction;

  SyncOutputConfiguration m_outputConfiguration;
  bool m_mediaHasBeenSet = false;
  bool m_languageHasBeenSet = false;
  bool m_languageDetectionModeHasBeenSet = false;
  bool m_languageOptionsHasBeenSet = false;
  bool m_channelIdentificationHasBeenSet = false;
  bool m_showSpeakerLabelsHasBeenSet = false;
  bool m_maxSpeakerLabelsHasBeenSet = false;
  bool m_vocabularySettingsHasBeenSet = false;
  bool m_vocabularyFilterSettingsHasBeenSet = false;
  bool m_contentRedactionHasBeenSet = false;
  bool m_outputConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
