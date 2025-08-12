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
#include <aws/transcribestreaming/model/MedicalScribeContext.h>
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
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeConfigurationEvent() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeConfigurationEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeConfigurationEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify the name of the custom vocabulary you want to use for your streaming
     * session. Custom vocabulary names are case-sensitive. </p>
     */
    inline const Aws::String& GetVocabularyName() const { return m_vocabularyName; }
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }
    template<typename VocabularyNameT = Aws::String>
    void SetVocabularyName(VocabularyNameT&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::forward<VocabularyNameT>(value); }
    template<typename VocabularyNameT = Aws::String>
    MedicalScribeConfigurationEvent& WithVocabularyName(VocabularyNameT&& value) { SetVocabularyName(std::forward<VocabularyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the name of the custom vocabulary filter you want to include in your
     * streaming session. Custom vocabulary filter names are case-sensitive. </p> <p>If
     * you include <code>VocabularyFilterName</code> in the
     * <code>MedicalScribeConfigurationEvent</code>, you must also include
     * <code>VocabularyFilterMethod</code>. </p>
     */
    inline const Aws::String& GetVocabularyFilterName() const { return m_vocabularyFilterName; }
    inline bool VocabularyFilterNameHasBeenSet() const { return m_vocabularyFilterNameHasBeenSet; }
    template<typename VocabularyFilterNameT = Aws::String>
    void SetVocabularyFilterName(VocabularyFilterNameT&& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = std::forward<VocabularyFilterNameT>(value); }
    template<typename VocabularyFilterNameT = Aws::String>
    MedicalScribeConfigurationEvent& WithVocabularyFilterName(VocabularyFilterNameT&& value) { SetVocabularyFilterName(std::forward<VocabularyFilterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify how you want your custom vocabulary filter applied to the streaming
     * session.</p> <p>To replace words with <code>***</code>, specify
     * <code>mask</code>. </p> <p>To delete words, specify <code>remove</code>. </p>
     * <p>To flag words without changing them, specify <code>tag</code>. </p>
     */
    inline MedicalScribeVocabularyFilterMethod GetVocabularyFilterMethod() const { return m_vocabularyFilterMethod; }
    inline bool VocabularyFilterMethodHasBeenSet() const { return m_vocabularyFilterMethodHasBeenSet; }
    inline void SetVocabularyFilterMethod(MedicalScribeVocabularyFilterMethod value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = value; }
    inline MedicalScribeConfigurationEvent& WithVocabularyFilterMethod(MedicalScribeVocabularyFilterMethod value) { SetVocabularyFilterMethod(value); return *this;}
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
    inline const Aws::String& GetResourceAccessRoleArn() const { return m_resourceAccessRoleArn; }
    inline bool ResourceAccessRoleArnHasBeenSet() const { return m_resourceAccessRoleArnHasBeenSet; }
    template<typename ResourceAccessRoleArnT = Aws::String>
    void SetResourceAccessRoleArn(ResourceAccessRoleArnT&& value) { m_resourceAccessRoleArnHasBeenSet = true; m_resourceAccessRoleArn = std::forward<ResourceAccessRoleArnT>(value); }
    template<typename ResourceAccessRoleArnT = Aws::String>
    MedicalScribeConfigurationEvent& WithResourceAccessRoleArn(ResourceAccessRoleArnT&& value) { SetResourceAccessRoleArn(std::forward<ResourceAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify which speaker is on which audio channel.</p>
     */
    inline const Aws::Vector<MedicalScribeChannelDefinition>& GetChannelDefinitions() const { return m_channelDefinitions; }
    inline bool ChannelDefinitionsHasBeenSet() const { return m_channelDefinitionsHasBeenSet; }
    template<typename ChannelDefinitionsT = Aws::Vector<MedicalScribeChannelDefinition>>
    void SetChannelDefinitions(ChannelDefinitionsT&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions = std::forward<ChannelDefinitionsT>(value); }
    template<typename ChannelDefinitionsT = Aws::Vector<MedicalScribeChannelDefinition>>
    MedicalScribeConfigurationEvent& WithChannelDefinitions(ChannelDefinitionsT&& value) { SetChannelDefinitions(std::forward<ChannelDefinitionsT>(value)); return *this;}
    template<typename ChannelDefinitionsT = MedicalScribeChannelDefinition>
    MedicalScribeConfigurationEvent& AddChannelDefinitions(ChannelDefinitionsT&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions.emplace_back(std::forward<ChannelDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify the encryption settings for your streaming session.</p>
     */
    inline const MedicalScribeEncryptionSettings& GetEncryptionSettings() const { return m_encryptionSettings; }
    inline bool EncryptionSettingsHasBeenSet() const { return m_encryptionSettingsHasBeenSet; }
    template<typename EncryptionSettingsT = MedicalScribeEncryptionSettings>
    void SetEncryptionSettings(EncryptionSettingsT&& value) { m_encryptionSettingsHasBeenSet = true; m_encryptionSettings = std::forward<EncryptionSettingsT>(value); }
    template<typename EncryptionSettingsT = MedicalScribeEncryptionSettings>
    MedicalScribeConfigurationEvent& WithEncryptionSettings(EncryptionSettingsT&& value) { SetEncryptionSettings(std::forward<EncryptionSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify settings for post-stream analytics.</p>
     */
    inline const MedicalScribePostStreamAnalyticsSettings& GetPostStreamAnalyticsSettings() const { return m_postStreamAnalyticsSettings; }
    inline bool PostStreamAnalyticsSettingsHasBeenSet() const { return m_postStreamAnalyticsSettingsHasBeenSet; }
    template<typename PostStreamAnalyticsSettingsT = MedicalScribePostStreamAnalyticsSettings>
    void SetPostStreamAnalyticsSettings(PostStreamAnalyticsSettingsT&& value) { m_postStreamAnalyticsSettingsHasBeenSet = true; m_postStreamAnalyticsSettings = std::forward<PostStreamAnalyticsSettingsT>(value); }
    template<typename PostStreamAnalyticsSettingsT = MedicalScribePostStreamAnalyticsSettings>
    MedicalScribeConfigurationEvent& WithPostStreamAnalyticsSettings(PostStreamAnalyticsSettingsT&& value) { SetPostStreamAnalyticsSettings(std::forward<PostStreamAnalyticsSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>MedicalScribeContext</code> object that contains contextual
     * information used to generate customized clinical notes.</p>
     */
    inline const MedicalScribeContext& GetMedicalScribeContext() const { return m_medicalScribeContext; }
    inline bool MedicalScribeContextHasBeenSet() const { return m_medicalScribeContextHasBeenSet; }
    template<typename MedicalScribeContextT = MedicalScribeContext>
    void SetMedicalScribeContext(MedicalScribeContextT&& value) { m_medicalScribeContextHasBeenSet = true; m_medicalScribeContext = std::forward<MedicalScribeContextT>(value); }
    template<typename MedicalScribeContextT = MedicalScribeContext>
    MedicalScribeConfigurationEvent& WithMedicalScribeContext(MedicalScribeContextT&& value) { SetMedicalScribeContext(std::forward<MedicalScribeContextT>(value)); return *this;}
    ///@}
  private:

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

    MedicalScribePostStreamAnalyticsSettings m_postStreamAnalyticsSettings;
    bool m_postStreamAnalyticsSettingsHasBeenSet = false;

    MedicalScribeContext m_medicalScribeContext;
    bool m_medicalScribeContextHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
