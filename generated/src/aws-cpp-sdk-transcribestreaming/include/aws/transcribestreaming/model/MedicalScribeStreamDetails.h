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
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeStreamDetails();
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeStreamDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeStreamDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the HealthScribe streaming session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline MedicalScribeStreamDetails& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline MedicalScribeStreamDetails& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline MedicalScribeStreamDetails& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the HealthScribe streaming session was created.</p>
     */
    inline const Aws::Utils::DateTime& GetStreamCreatedAt() const{ return m_streamCreatedAt; }
    inline bool StreamCreatedAtHasBeenSet() const { return m_streamCreatedAtHasBeenSet; }
    inline void SetStreamCreatedAt(const Aws::Utils::DateTime& value) { m_streamCreatedAtHasBeenSet = true; m_streamCreatedAt = value; }
    inline void SetStreamCreatedAt(Aws::Utils::DateTime&& value) { m_streamCreatedAtHasBeenSet = true; m_streamCreatedAt = std::move(value); }
    inline MedicalScribeStreamDetails& WithStreamCreatedAt(const Aws::Utils::DateTime& value) { SetStreamCreatedAt(value); return *this;}
    inline MedicalScribeStreamDetails& WithStreamCreatedAt(Aws::Utils::DateTime&& value) { SetStreamCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the HealthScribe streaming session was ended.</p>
     */
    inline const Aws::Utils::DateTime& GetStreamEndedAt() const{ return m_streamEndedAt; }
    inline bool StreamEndedAtHasBeenSet() const { return m_streamEndedAtHasBeenSet; }
    inline void SetStreamEndedAt(const Aws::Utils::DateTime& value) { m_streamEndedAtHasBeenSet = true; m_streamEndedAt = value; }
    inline void SetStreamEndedAt(Aws::Utils::DateTime&& value) { m_streamEndedAtHasBeenSet = true; m_streamEndedAt = std::move(value); }
    inline MedicalScribeStreamDetails& WithStreamEndedAt(const Aws::Utils::DateTime& value) { SetStreamEndedAt(value); return *this;}
    inline MedicalScribeStreamDetails& WithStreamEndedAt(Aws::Utils::DateTime&& value) { SetStreamEndedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Language Code of the HealthScribe streaming session.</p>
     */
    inline const MedicalScribeLanguageCode& GetLanguageCode() const{ return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(const MedicalScribeLanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline void SetLanguageCode(MedicalScribeLanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }
    inline MedicalScribeStreamDetails& WithLanguageCode(const MedicalScribeLanguageCode& value) { SetLanguageCode(value); return *this;}
    inline MedicalScribeStreamDetails& WithLanguageCode(MedicalScribeLanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sample rate (in hertz) of the HealthScribe streaming session.</p>
     */
    inline int GetMediaSampleRateHertz() const{ return m_mediaSampleRateHertz; }
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }
    inline MedicalScribeStreamDetails& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Media Encoding of the HealthScribe streaming session.</p>
     */
    inline const MedicalScribeMediaEncoding& GetMediaEncoding() const{ return m_mediaEncoding; }
    inline bool MediaEncodingHasBeenSet() const { return m_mediaEncodingHasBeenSet; }
    inline void SetMediaEncoding(const MedicalScribeMediaEncoding& value) { m_mediaEncodingHasBeenSet = true; m_mediaEncoding = value; }
    inline void SetMediaEncoding(MedicalScribeMediaEncoding&& value) { m_mediaEncodingHasBeenSet = true; m_mediaEncoding = std::move(value); }
    inline MedicalScribeStreamDetails& WithMediaEncoding(const MedicalScribeMediaEncoding& value) { SetMediaEncoding(value); return *this;}
    inline MedicalScribeStreamDetails& WithMediaEncoding(MedicalScribeMediaEncoding&& value) { SetMediaEncoding(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The vocabulary name of the HealthScribe streaming session.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }
    inline MedicalScribeStreamDetails& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}
    inline MedicalScribeStreamDetails& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}
    inline MedicalScribeStreamDetails& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the vocabulary filter used for the HealthScribe streaming session
     * .</p>
     */
    inline const Aws::String& GetVocabularyFilterName() const{ return m_vocabularyFilterName; }
    inline bool VocabularyFilterNameHasBeenSet() const { return m_vocabularyFilterNameHasBeenSet; }
    inline void SetVocabularyFilterName(const Aws::String& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = value; }
    inline void SetVocabularyFilterName(Aws::String&& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = std::move(value); }
    inline void SetVocabularyFilterName(const char* value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName.assign(value); }
    inline MedicalScribeStreamDetails& WithVocabularyFilterName(const Aws::String& value) { SetVocabularyFilterName(value); return *this;}
    inline MedicalScribeStreamDetails& WithVocabularyFilterName(Aws::String&& value) { SetVocabularyFilterName(std::move(value)); return *this;}
    inline MedicalScribeStreamDetails& WithVocabularyFilterName(const char* value) { SetVocabularyFilterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method of the vocabulary filter for the HealthScribe streaming
     * session.</p>
     */
    inline const MedicalScribeVocabularyFilterMethod& GetVocabularyFilterMethod() const{ return m_vocabularyFilterMethod; }
    inline bool VocabularyFilterMethodHasBeenSet() const { return m_vocabularyFilterMethodHasBeenSet; }
    inline void SetVocabularyFilterMethod(const MedicalScribeVocabularyFilterMethod& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = value; }
    inline void SetVocabularyFilterMethod(MedicalScribeVocabularyFilterMethod&& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = std::move(value); }
    inline MedicalScribeStreamDetails& WithVocabularyFilterMethod(const MedicalScribeVocabularyFilterMethod& value) { SetVocabularyFilterMethod(value); return *this;}
    inline MedicalScribeStreamDetails& WithVocabularyFilterMethod(MedicalScribeVocabularyFilterMethod&& value) { SetVocabularyFilterMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role used in the HealthScribe streaming
     * session.</p>
     */
    inline const Aws::String& GetResourceAccessRoleArn() const{ return m_resourceAccessRoleArn; }
    inline bool ResourceAccessRoleArnHasBeenSet() const { return m_resourceAccessRoleArnHasBeenSet; }
    inline void SetResourceAccessRoleArn(const Aws::String& value) { m_resourceAccessRoleArnHasBeenSet = true; m_resourceAccessRoleArn = value; }
    inline void SetResourceAccessRoleArn(Aws::String&& value) { m_resourceAccessRoleArnHasBeenSet = true; m_resourceAccessRoleArn = std::move(value); }
    inline void SetResourceAccessRoleArn(const char* value) { m_resourceAccessRoleArnHasBeenSet = true; m_resourceAccessRoleArn.assign(value); }
    inline MedicalScribeStreamDetails& WithResourceAccessRoleArn(const Aws::String& value) { SetResourceAccessRoleArn(value); return *this;}
    inline MedicalScribeStreamDetails& WithResourceAccessRoleArn(Aws::String&& value) { SetResourceAccessRoleArn(std::move(value)); return *this;}
    inline MedicalScribeStreamDetails& WithResourceAccessRoleArn(const char* value) { SetResourceAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Channel Definitions of the HealthScribe streaming session.</p>
     */
    inline const Aws::Vector<MedicalScribeChannelDefinition>& GetChannelDefinitions() const{ return m_channelDefinitions; }
    inline bool ChannelDefinitionsHasBeenSet() const { return m_channelDefinitionsHasBeenSet; }
    inline void SetChannelDefinitions(const Aws::Vector<MedicalScribeChannelDefinition>& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions = value; }
    inline void SetChannelDefinitions(Aws::Vector<MedicalScribeChannelDefinition>&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions = std::move(value); }
    inline MedicalScribeStreamDetails& WithChannelDefinitions(const Aws::Vector<MedicalScribeChannelDefinition>& value) { SetChannelDefinitions(value); return *this;}
    inline MedicalScribeStreamDetails& WithChannelDefinitions(Aws::Vector<MedicalScribeChannelDefinition>&& value) { SetChannelDefinitions(std::move(value)); return *this;}
    inline MedicalScribeStreamDetails& AddChannelDefinitions(const MedicalScribeChannelDefinition& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions.push_back(value); return *this; }
    inline MedicalScribeStreamDetails& AddChannelDefinitions(MedicalScribeChannelDefinition&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Encryption Settings of the HealthScribe streaming session.</p>
     */
    inline const MedicalScribeEncryptionSettings& GetEncryptionSettings() const{ return m_encryptionSettings; }
    inline bool EncryptionSettingsHasBeenSet() const { return m_encryptionSettingsHasBeenSet; }
    inline void SetEncryptionSettings(const MedicalScribeEncryptionSettings& value) { m_encryptionSettingsHasBeenSet = true; m_encryptionSettings = value; }
    inline void SetEncryptionSettings(MedicalScribeEncryptionSettings&& value) { m_encryptionSettingsHasBeenSet = true; m_encryptionSettings = std::move(value); }
    inline MedicalScribeStreamDetails& WithEncryptionSettings(const MedicalScribeEncryptionSettings& value) { SetEncryptionSettings(value); return *this;}
    inline MedicalScribeStreamDetails& WithEncryptionSettings(MedicalScribeEncryptionSettings&& value) { SetEncryptionSettings(std::move(value)); return *this;}
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
    inline const MedicalScribeStreamStatus& GetStreamStatus() const{ return m_streamStatus; }
    inline bool StreamStatusHasBeenSet() const { return m_streamStatusHasBeenSet; }
    inline void SetStreamStatus(const MedicalScribeStreamStatus& value) { m_streamStatusHasBeenSet = true; m_streamStatus = value; }
    inline void SetStreamStatus(MedicalScribeStreamStatus&& value) { m_streamStatusHasBeenSet = true; m_streamStatus = std::move(value); }
    inline MedicalScribeStreamDetails& WithStreamStatus(const MedicalScribeStreamStatus& value) { SetStreamStatus(value); return *this;}
    inline MedicalScribeStreamDetails& WithStreamStatus(MedicalScribeStreamStatus&& value) { SetStreamStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The post-stream analytics settings of the HealthScribe streaming session.</p>
     */
    inline const MedicalScribePostStreamAnalyticsSettings& GetPostStreamAnalyticsSettings() const{ return m_postStreamAnalyticsSettings; }
    inline bool PostStreamAnalyticsSettingsHasBeenSet() const { return m_postStreamAnalyticsSettingsHasBeenSet; }
    inline void SetPostStreamAnalyticsSettings(const MedicalScribePostStreamAnalyticsSettings& value) { m_postStreamAnalyticsSettingsHasBeenSet = true; m_postStreamAnalyticsSettings = value; }
    inline void SetPostStreamAnalyticsSettings(MedicalScribePostStreamAnalyticsSettings&& value) { m_postStreamAnalyticsSettingsHasBeenSet = true; m_postStreamAnalyticsSettings = std::move(value); }
    inline MedicalScribeStreamDetails& WithPostStreamAnalyticsSettings(const MedicalScribePostStreamAnalyticsSettings& value) { SetPostStreamAnalyticsSettings(value); return *this;}
    inline MedicalScribeStreamDetails& WithPostStreamAnalyticsSettings(MedicalScribePostStreamAnalyticsSettings&& value) { SetPostStreamAnalyticsSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result of post-stream analytics for the HealthScribe streaming
     * session.</p>
     */
    inline const MedicalScribePostStreamAnalyticsResult& GetPostStreamAnalyticsResult() const{ return m_postStreamAnalyticsResult; }
    inline bool PostStreamAnalyticsResultHasBeenSet() const { return m_postStreamAnalyticsResultHasBeenSet; }
    inline void SetPostStreamAnalyticsResult(const MedicalScribePostStreamAnalyticsResult& value) { m_postStreamAnalyticsResultHasBeenSet = true; m_postStreamAnalyticsResult = value; }
    inline void SetPostStreamAnalyticsResult(MedicalScribePostStreamAnalyticsResult&& value) { m_postStreamAnalyticsResultHasBeenSet = true; m_postStreamAnalyticsResult = std::move(value); }
    inline MedicalScribeStreamDetails& WithPostStreamAnalyticsResult(const MedicalScribePostStreamAnalyticsResult& value) { SetPostStreamAnalyticsResult(value); return *this;}
    inline MedicalScribeStreamDetails& WithPostStreamAnalyticsResult(MedicalScribePostStreamAnalyticsResult&& value) { SetPostStreamAnalyticsResult(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::Utils::DateTime m_streamCreatedAt;
    bool m_streamCreatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_streamEndedAt;
    bool m_streamEndedAtHasBeenSet = false;

    MedicalScribeLanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    int m_mediaSampleRateHertz;
    bool m_mediaSampleRateHertzHasBeenSet = false;

    MedicalScribeMediaEncoding m_mediaEncoding;
    bool m_mediaEncodingHasBeenSet = false;

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;

    Aws::String m_vocabularyFilterName;
    bool m_vocabularyFilterNameHasBeenSet = false;

    MedicalScribeVocabularyFilterMethod m_vocabularyFilterMethod;
    bool m_vocabularyFilterMethodHasBeenSet = false;

    Aws::String m_resourceAccessRoleArn;
    bool m_resourceAccessRoleArnHasBeenSet = false;

    Aws::Vector<MedicalScribeChannelDefinition> m_channelDefinitions;
    bool m_channelDefinitionsHasBeenSet = false;

    MedicalScribeEncryptionSettings m_encryptionSettings;
    bool m_encryptionSettingsHasBeenSet = false;

    MedicalScribeStreamStatus m_streamStatus;
    bool m_streamStatusHasBeenSet = false;

    MedicalScribePostStreamAnalyticsSettings m_postStreamAnalyticsSettings;
    bool m_postStreamAnalyticsSettingsHasBeenSet = false;

    MedicalScribePostStreamAnalyticsResult m_postStreamAnalyticsResult;
    bool m_postStreamAnalyticsResultHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
