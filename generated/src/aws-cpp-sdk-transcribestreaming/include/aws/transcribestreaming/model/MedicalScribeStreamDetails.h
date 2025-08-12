/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/transcribestreaming/model/MedicalScribeLanguageCode.h>
#include <aws/transcribestreaming/model/MedicalScribeMediaEncoding.h>
#include <aws/transcribestreaming/model/MedicalScribeVocabularyFilterMethod.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribestreaming/model/MedicalScribeEncryptionSettings.h>
#include <aws/transcribestreaming/model/MedicalScribeStreamStatus.h>
#include <aws/transcribestreaming/model/MedicalScribePostStreamAnalyticsSettings.h>
#include <aws/transcribestreaming/model/MedicalScribePostStreamAnalyticsResult.h>
#include <aws/transcribestreaming/model/MedicalScribeChannelDefinition.h>
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
namespace TranscribeStreamingService
{
namespace Model
{

  /**
   * <p>Contains details about a Amazon Web Services HealthScribe streaming
   * session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/MedicalScribeStreamDetails">AWS
   * API Reference</a></p>
   */
  class MedicalScribeStreamDetails
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeStreamDetails() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeStreamDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeStreamDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the HealthScribe streaming session.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    MedicalScribeStreamDetails& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the HealthScribe streaming session was created.</p>
     */
    inline const Aws::Utils::DateTime& GetStreamCreatedAt() const { return m_streamCreatedAt; }
    inline bool StreamCreatedAtHasBeenSet() const { return m_streamCreatedAtHasBeenSet; }
    template<typename StreamCreatedAtT = Aws::Utils::DateTime>
    void SetStreamCreatedAt(StreamCreatedAtT&& value) { m_streamCreatedAtHasBeenSet = true; m_streamCreatedAt = std::forward<StreamCreatedAtT>(value); }
    template<typename StreamCreatedAtT = Aws::Utils::DateTime>
    MedicalScribeStreamDetails& WithStreamCreatedAt(StreamCreatedAtT&& value) { SetStreamCreatedAt(std::forward<StreamCreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the HealthScribe streaming session was ended.</p>
     */
    inline const Aws::Utils::DateTime& GetStreamEndedAt() const { return m_streamEndedAt; }
    inline bool StreamEndedAtHasBeenSet() const { return m_streamEndedAtHasBeenSet; }
    template<typename StreamEndedAtT = Aws::Utils::DateTime>
    void SetStreamEndedAt(StreamEndedAtT&& value) { m_streamEndedAtHasBeenSet = true; m_streamEndedAt = std::forward<StreamEndedAtT>(value); }
    template<typename StreamEndedAtT = Aws::Utils::DateTime>
    MedicalScribeStreamDetails& WithStreamEndedAt(StreamEndedAtT&& value) { SetStreamEndedAt(std::forward<StreamEndedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Language Code of the HealthScribe streaming session.</p>
     */
    inline MedicalScribeLanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(MedicalScribeLanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline MedicalScribeStreamDetails& WithLanguageCode(MedicalScribeLanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sample rate (in hertz) of the HealthScribe streaming session.</p>
     */
    inline int GetMediaSampleRateHertz() const { return m_mediaSampleRateHertz; }
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }
    inline MedicalScribeStreamDetails& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Media Encoding of the HealthScribe streaming session.</p>
     */
    inline MedicalScribeMediaEncoding GetMediaEncoding() const { return m_mediaEncoding; }
    inline bool MediaEncodingHasBeenSet() const { return m_mediaEncodingHasBeenSet; }
    inline void SetMediaEncoding(MedicalScribeMediaEncoding value) { m_mediaEncodingHasBeenSet = true; m_mediaEncoding = value; }
    inline MedicalScribeStreamDetails& WithMediaEncoding(MedicalScribeMediaEncoding value) { SetMediaEncoding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The vocabulary name of the HealthScribe streaming session.</p>
     */
    inline const Aws::String& GetVocabularyName() const { return m_vocabularyName; }
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }
    template<typename VocabularyNameT = Aws::String>
    void SetVocabularyName(VocabularyNameT&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::forward<VocabularyNameT>(value); }
    template<typename VocabularyNameT = Aws::String>
    MedicalScribeStreamDetails& WithVocabularyName(VocabularyNameT&& value) { SetVocabularyName(std::forward<VocabularyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the vocabulary filter used for the HealthScribe streaming session
     * .</p>
     */
    inline const Aws::String& GetVocabularyFilterName() const { return m_vocabularyFilterName; }
    inline bool VocabularyFilterNameHasBeenSet() const { return m_vocabularyFilterNameHasBeenSet; }
    template<typename VocabularyFilterNameT = Aws::String>
    void SetVocabularyFilterName(VocabularyFilterNameT&& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = std::forward<VocabularyFilterNameT>(value); }
    template<typename VocabularyFilterNameT = Aws::String>
    MedicalScribeStreamDetails& WithVocabularyFilterName(VocabularyFilterNameT&& value) { SetVocabularyFilterName(std::forward<VocabularyFilterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method of the vocabulary filter for the HealthScribe streaming
     * session.</p>
     */
    inline MedicalScribeVocabularyFilterMethod GetVocabularyFilterMethod() const { return m_vocabularyFilterMethod; }
    inline bool VocabularyFilterMethodHasBeenSet() const { return m_vocabularyFilterMethodHasBeenSet; }
    inline void SetVocabularyFilterMethod(MedicalScribeVocabularyFilterMethod value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = value; }
    inline MedicalScribeStreamDetails& WithVocabularyFilterMethod(MedicalScribeVocabularyFilterMethod value) { SetVocabularyFilterMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role used in the HealthScribe streaming
     * session.</p>
     */
    inline const Aws::String& GetResourceAccessRoleArn() const { return m_resourceAccessRoleArn; }
    inline bool ResourceAccessRoleArnHasBeenSet() const { return m_resourceAccessRoleArnHasBeenSet; }
    template<typename ResourceAccessRoleArnT = Aws::String>
    void SetResourceAccessRoleArn(ResourceAccessRoleArnT&& value) { m_resourceAccessRoleArnHasBeenSet = true; m_resourceAccessRoleArn = std::forward<ResourceAccessRoleArnT>(value); }
    template<typename ResourceAccessRoleArnT = Aws::String>
    MedicalScribeStreamDetails& WithResourceAccessRoleArn(ResourceAccessRoleArnT&& value) { SetResourceAccessRoleArn(std::forward<ResourceAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Channel Definitions of the HealthScribe streaming session.</p>
     */
    inline const Aws::Vector<MedicalScribeChannelDefinition>& GetChannelDefinitions() const { return m_channelDefinitions; }
    inline bool ChannelDefinitionsHasBeenSet() const { return m_channelDefinitionsHasBeenSet; }
    template<typename ChannelDefinitionsT = Aws::Vector<MedicalScribeChannelDefinition>>
    void SetChannelDefinitions(ChannelDefinitionsT&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions = std::forward<ChannelDefinitionsT>(value); }
    template<typename ChannelDefinitionsT = Aws::Vector<MedicalScribeChannelDefinition>>
    MedicalScribeStreamDetails& WithChannelDefinitions(ChannelDefinitionsT&& value) { SetChannelDefinitions(std::forward<ChannelDefinitionsT>(value)); return *this;}
    template<typename ChannelDefinitionsT = MedicalScribeChannelDefinition>
    MedicalScribeStreamDetails& AddChannelDefinitions(ChannelDefinitionsT&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions.emplace_back(std::forward<ChannelDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Encryption Settings of the HealthScribe streaming session.</p>
     */
    inline const MedicalScribeEncryptionSettings& GetEncryptionSettings() const { return m_encryptionSettings; }
    inline bool EncryptionSettingsHasBeenSet() const { return m_encryptionSettingsHasBeenSet; }
    template<typename EncryptionSettingsT = MedicalScribeEncryptionSettings>
    void SetEncryptionSettings(EncryptionSettingsT&& value) { m_encryptionSettingsHasBeenSet = true; m_encryptionSettings = std::forward<EncryptionSettingsT>(value); }
    template<typename EncryptionSettingsT = MedicalScribeEncryptionSettings>
    MedicalScribeStreamDetails& WithEncryptionSettings(EncryptionSettingsT&& value) { SetEncryptionSettings(std::forward<EncryptionSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The streaming status of the HealthScribe streaming session.</p> <p>Possible
     * Values:</p> <ul> <li> <p> <code>IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>PAUSED</code> </p> </li> <li> <p> <code>FAILED</code> </p> </li> <li> <p>
     * <code>COMPLETED</code> </p> </li> </ul>  <p>This status is specific to
     * real-time streaming. A <code>COMPLETED</code> status doesn't mean that the
     * post-stream analytics is complete. To get status of an analytics result, check
     * the <code>Status</code> field for the analytics result within the
     * <code>MedicalScribePostStreamAnalyticsResult</code>. For example, you can view
     * the status of the <code>ClinicalNoteGenerationResult</code>. </p> 
     */
    inline MedicalScribeStreamStatus GetStreamStatus() const { return m_streamStatus; }
    inline bool StreamStatusHasBeenSet() const { return m_streamStatusHasBeenSet; }
    inline void SetStreamStatus(MedicalScribeStreamStatus value) { m_streamStatusHasBeenSet = true; m_streamStatus = value; }
    inline MedicalScribeStreamDetails& WithStreamStatus(MedicalScribeStreamStatus value) { SetStreamStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The post-stream analytics settings of the HealthScribe streaming session.</p>
     */
    inline const MedicalScribePostStreamAnalyticsSettings& GetPostStreamAnalyticsSettings() const { return m_postStreamAnalyticsSettings; }
    inline bool PostStreamAnalyticsSettingsHasBeenSet() const { return m_postStreamAnalyticsSettingsHasBeenSet; }
    template<typename PostStreamAnalyticsSettingsT = MedicalScribePostStreamAnalyticsSettings>
    void SetPostStreamAnalyticsSettings(PostStreamAnalyticsSettingsT&& value) { m_postStreamAnalyticsSettingsHasBeenSet = true; m_postStreamAnalyticsSettings = std::forward<PostStreamAnalyticsSettingsT>(value); }
    template<typename PostStreamAnalyticsSettingsT = MedicalScribePostStreamAnalyticsSettings>
    MedicalScribeStreamDetails& WithPostStreamAnalyticsSettings(PostStreamAnalyticsSettingsT&& value) { SetPostStreamAnalyticsSettings(std::forward<PostStreamAnalyticsSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result of post-stream analytics for the HealthScribe streaming
     * session.</p>
     */
    inline const MedicalScribePostStreamAnalyticsResult& GetPostStreamAnalyticsResult() const { return m_postStreamAnalyticsResult; }
    inline bool PostStreamAnalyticsResultHasBeenSet() const { return m_postStreamAnalyticsResultHasBeenSet; }
    template<typename PostStreamAnalyticsResultT = MedicalScribePostStreamAnalyticsResult>
    void SetPostStreamAnalyticsResult(PostStreamAnalyticsResultT&& value) { m_postStreamAnalyticsResultHasBeenSet = true; m_postStreamAnalyticsResult = std::forward<PostStreamAnalyticsResultT>(value); }
    template<typename PostStreamAnalyticsResultT = MedicalScribePostStreamAnalyticsResult>
    MedicalScribeStreamDetails& WithPostStreamAnalyticsResult(PostStreamAnalyticsResultT&& value) { SetPostStreamAnalyticsResult(std::forward<PostStreamAnalyticsResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the <code>MedicalScribeContext</code> object was provided
     * when the stream was started.</p>
     */
    inline bool GetMedicalScribeContextProvided() const { return m_medicalScribeContextProvided; }
    inline bool MedicalScribeContextProvidedHasBeenSet() const { return m_medicalScribeContextProvidedHasBeenSet; }
    inline void SetMedicalScribeContextProvided(bool value) { m_medicalScribeContextProvidedHasBeenSet = true; m_medicalScribeContextProvided = value; }
    inline MedicalScribeStreamDetails& WithMedicalScribeContextProvided(bool value) { SetMedicalScribeContextProvided(value); return *this;}
    ///@}
  private:

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::Utils::DateTime m_streamCreatedAt{};
    bool m_streamCreatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_streamEndedAt{};
    bool m_streamEndedAtHasBeenSet = false;

    MedicalScribeLanguageCode m_languageCode{MedicalScribeLanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    int m_mediaSampleRateHertz{0};
    bool m_mediaSampleRateHertzHasBeenSet = false;

    MedicalScribeMediaEncoding m_mediaEncoding{MedicalScribeMediaEncoding::NOT_SET};
    bool m_mediaEncodingHasBeenSet = false;

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;

    Aws::String m_vocabularyFilterName;
    bool m_vocabularyFilterNameHasBeenSet = false;

    MedicalScribeVocabularyFilterMethod m_vocabularyFilterMethod{MedicalScribeVocabularyFilterMethod::NOT_SET};
    bool m_vocabularyFilterMethodHasBeenSet = false;

    Aws::String m_resourceAccessRoleArn;
    bool m_resourceAccessRoleArnHasBeenSet = false;

    Aws::Vector<MedicalScribeChannelDefinition> m_channelDefinitions;
    bool m_channelDefinitionsHasBeenSet = false;

    MedicalScribeEncryptionSettings m_encryptionSettings;
    bool m_encryptionSettingsHasBeenSet = false;

    MedicalScribeStreamStatus m_streamStatus{MedicalScribeStreamStatus::NOT_SET};
    bool m_streamStatusHasBeenSet = false;

    MedicalScribePostStreamAnalyticsSettings m_postStreamAnalyticsSettings;
    bool m_postStreamAnalyticsSettingsHasBeenSet = false;

    MedicalScribePostStreamAnalyticsResult m_postStreamAnalyticsResult;
    bool m_postStreamAnalyticsResultHasBeenSet = false;

    bool m_medicalScribeContextProvided{false};
    bool m_medicalScribeContextProvidedHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
