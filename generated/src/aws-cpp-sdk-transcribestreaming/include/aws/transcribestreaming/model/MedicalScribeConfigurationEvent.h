/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribestreaming/model/MedicalScribeVocabularyFilterMethod.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribestreaming/model/MedicalScribeEncryptionSettings.h>
#include <aws/transcribestreaming/model/MedicalScribePostStreamAnalyticsSettings.h>
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
   * <p>Specify details to configure the streaming session, including channel
   * definitions, encryption settings, post-stream analytics settings, resource
   * access role ARN and vocabulary settings. </p> <p>Whether you are starting a new
   * session or resuming an existing session, your first event must be a
   * <code>MedicalScribeConfigurationEvent</code>. If you are resuming a session,
   * then this event must have the same configurations that you provided to start the
   * session. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/MedicalScribeConfigurationEvent">AWS
   * API Reference</a></p>
   */
  class MedicalScribeConfigurationEvent
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeConfigurationEvent();
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeConfigurationEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeConfigurationEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify the name of the custom vocabulary you want to use for your streaming
     * session. Custom vocabulary names are case-sensitive. </p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }
    inline MedicalScribeConfigurationEvent& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}
    inline MedicalScribeConfigurationEvent& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}
    inline MedicalScribeConfigurationEvent& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the name of the custom vocabulary filter you want to include in your
     * streaming session. Custom vocabulary filter names are case-sensitive. </p> <p>If
     * you include <code>VocabularyFilterName</code> in the
     * <code>MedicalScribeConfigurationEvent</code>, you must also include
     * <code>VocabularyFilterMethod</code>. </p>
     */
    inline const Aws::String& GetVocabularyFilterName() const{ return m_vocabularyFilterName; }
    inline bool VocabularyFilterNameHasBeenSet() const { return m_vocabularyFilterNameHasBeenSet; }
    inline void SetVocabularyFilterName(const Aws::String& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = value; }
    inline void SetVocabularyFilterName(Aws::String&& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = std::move(value); }
    inline void SetVocabularyFilterName(const char* value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName.assign(value); }
    inline MedicalScribeConfigurationEvent& WithVocabularyFilterName(const Aws::String& value) { SetVocabularyFilterName(value); return *this;}
    inline MedicalScribeConfigurationEvent& WithVocabularyFilterName(Aws::String&& value) { SetVocabularyFilterName(std::move(value)); return *this;}
    inline MedicalScribeConfigurationEvent& WithVocabularyFilterName(const char* value) { SetVocabularyFilterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify how you want your custom vocabulary filter applied to the streaming
     * session.</p> <p>To replace words with <code>***</code>, specify
     * <code>mask</code>. </p> <p>To delete words, specify <code>remove</code>. </p>
     * <p>To flag words without changing them, specify <code>tag</code>. </p>
     */
    inline const MedicalScribeVocabularyFilterMethod& GetVocabularyFilterMethod() const{ return m_vocabularyFilterMethod; }
    inline bool VocabularyFilterMethodHasBeenSet() const { return m_vocabularyFilterMethodHasBeenSet; }
    inline void SetVocabularyFilterMethod(const MedicalScribeVocabularyFilterMethod& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = value; }
    inline void SetVocabularyFilterMethod(MedicalScribeVocabularyFilterMethod&& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = std::move(value); }
    inline MedicalScribeConfigurationEvent& WithVocabularyFilterMethod(const MedicalScribeVocabularyFilterMethod& value) { SetVocabularyFilterMethod(value); return *this;}
    inline MedicalScribeConfigurationEvent& WithVocabularyFilterMethod(MedicalScribeVocabularyFilterMethod&& value) { SetVocabularyFilterMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 output bucket you specified, and use your KMS key if supplied. If
     * the role that you specify doesn’t have the appropriate permissions, your request
     * fails. </p> <p> IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>. </p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/health-scribe-streaming.html">Amazon
     * Web Services HealthScribe</a>.</p>
     */
    inline const Aws::String& GetResourceAccessRoleArn() const{ return m_resourceAccessRoleArn; }
    inline bool ResourceAccessRoleArnHasBeenSet() const { return m_resourceAccessRoleArnHasBeenSet; }
    inline void SetResourceAccessRoleArn(const Aws::String& value) { m_resourceAccessRoleArnHasBeenSet = true; m_resourceAccessRoleArn = value; }
    inline void SetResourceAccessRoleArn(Aws::String&& value) { m_resourceAccessRoleArnHasBeenSet = true; m_resourceAccessRoleArn = std::move(value); }
    inline void SetResourceAccessRoleArn(const char* value) { m_resourceAccessRoleArnHasBeenSet = true; m_resourceAccessRoleArn.assign(value); }
    inline MedicalScribeConfigurationEvent& WithResourceAccessRoleArn(const Aws::String& value) { SetResourceAccessRoleArn(value); return *this;}
    inline MedicalScribeConfigurationEvent& WithResourceAccessRoleArn(Aws::String&& value) { SetResourceAccessRoleArn(std::move(value)); return *this;}
    inline MedicalScribeConfigurationEvent& WithResourceAccessRoleArn(const char* value) { SetResourceAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify which speaker is on which audio channel.</p>
     */
    inline const Aws::Vector<MedicalScribeChannelDefinition>& GetChannelDefinitions() const{ return m_channelDefinitions; }
    inline bool ChannelDefinitionsHasBeenSet() const { return m_channelDefinitionsHasBeenSet; }
    inline void SetChannelDefinitions(const Aws::Vector<MedicalScribeChannelDefinition>& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions = value; }
    inline void SetChannelDefinitions(Aws::Vector<MedicalScribeChannelDefinition>&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions = std::move(value); }
    inline MedicalScribeConfigurationEvent& WithChannelDefinitions(const Aws::Vector<MedicalScribeChannelDefinition>& value) { SetChannelDefinitions(value); return *this;}
    inline MedicalScribeConfigurationEvent& WithChannelDefinitions(Aws::Vector<MedicalScribeChannelDefinition>&& value) { SetChannelDefinitions(std::move(value)); return *this;}
    inline MedicalScribeConfigurationEvent& AddChannelDefinitions(const MedicalScribeChannelDefinition& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions.push_back(value); return *this; }
    inline MedicalScribeConfigurationEvent& AddChannelDefinitions(MedicalScribeChannelDefinition&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify the encryption settings for your streaming session.</p>
     */
    inline const MedicalScribeEncryptionSettings& GetEncryptionSettings() const{ return m_encryptionSettings; }
    inline bool EncryptionSettingsHasBeenSet() const { return m_encryptionSettingsHasBeenSet; }
    inline void SetEncryptionSettings(const MedicalScribeEncryptionSettings& value) { m_encryptionSettingsHasBeenSet = true; m_encryptionSettings = value; }
    inline void SetEncryptionSettings(MedicalScribeEncryptionSettings&& value) { m_encryptionSettingsHasBeenSet = true; m_encryptionSettings = std::move(value); }
    inline MedicalScribeConfigurationEvent& WithEncryptionSettings(const MedicalScribeEncryptionSettings& value) { SetEncryptionSettings(value); return *this;}
    inline MedicalScribeConfigurationEvent& WithEncryptionSettings(MedicalScribeEncryptionSettings&& value) { SetEncryptionSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify settings for post-stream analytics.</p>
     */
    inline const MedicalScribePostStreamAnalyticsSettings& GetPostStreamAnalyticsSettings() const{ return m_postStreamAnalyticsSettings; }
    inline bool PostStreamAnalyticsSettingsHasBeenSet() const { return m_postStreamAnalyticsSettingsHasBeenSet; }
    inline void SetPostStreamAnalyticsSettings(const MedicalScribePostStreamAnalyticsSettings& value) { m_postStreamAnalyticsSettingsHasBeenSet = true; m_postStreamAnalyticsSettings = value; }
    inline void SetPostStreamAnalyticsSettings(MedicalScribePostStreamAnalyticsSettings&& value) { m_postStreamAnalyticsSettingsHasBeenSet = true; m_postStreamAnalyticsSettings = std::move(value); }
    inline MedicalScribeConfigurationEvent& WithPostStreamAnalyticsSettings(const MedicalScribePostStreamAnalyticsSettings& value) { SetPostStreamAnalyticsSettings(value); return *this;}
    inline MedicalScribeConfigurationEvent& WithPostStreamAnalyticsSettings(MedicalScribePostStreamAnalyticsSettings&& value) { SetPostStreamAnalyticsSettings(std::move(value)); return *this;}
    ///@}
  private:

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

    MedicalScribePostStreamAnalyticsSettings m_postStreamAnalyticsSettings;
    bool m_postStreamAnalyticsSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
