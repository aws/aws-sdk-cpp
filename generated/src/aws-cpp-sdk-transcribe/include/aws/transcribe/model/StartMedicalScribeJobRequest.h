/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/Media.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/transcribe/model/MedicalScribeSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/MedicalScribeContext.h>
#include <aws/transcribe/model/MedicalScribeChannelDefinition.h>
#include <aws/transcribe/model/Tag.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class StartMedicalScribeJobRequest : public TranscribeServiceRequest
  {
  public:
    AWS_TRANSCRIBESERVICE_API StartMedicalScribeJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartMedicalScribeJob"; }

    AWS_TRANSCRIBESERVICE_API Aws::String SerializePayload() const override;

    AWS_TRANSCRIBESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique name, chosen by you, for your Medical Scribe job.</p> <p>This name
     * is case sensitive, cannot contain spaces, and must be unique within an Amazon
     * Web Services account. If you try to create a new job with the same name as an
     * existing job, you get a <code>ConflictException</code> error.</p>
     */
    inline const Aws::String& GetMedicalScribeJobName() const { return m_medicalScribeJobName; }
    inline bool MedicalScribeJobNameHasBeenSet() const { return m_medicalScribeJobNameHasBeenSet; }
    template<typename MedicalScribeJobNameT = Aws::String>
    void SetMedicalScribeJobName(MedicalScribeJobNameT&& value) { m_medicalScribeJobNameHasBeenSet = true; m_medicalScribeJobName = std::forward<MedicalScribeJobNameT>(value); }
    template<typename MedicalScribeJobNameT = Aws::String>
    StartMedicalScribeJobRequest& WithMedicalScribeJobName(MedicalScribeJobNameT&& value) { SetMedicalScribeJobName(std::forward<MedicalScribeJobNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Media& GetMedia() const { return m_media; }
    inline bool MediaHasBeenSet() const { return m_mediaHasBeenSet; }
    template<typename MediaT = Media>
    void SetMedia(MediaT&& value) { m_mediaHasBeenSet = true; m_media = std::forward<MediaT>(value); }
    template<typename MediaT = Media>
    StartMedicalScribeJobRequest& WithMedia(MediaT&& value) { SetMedia(std::forward<MediaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 bucket where you want your Medical Scribe output
     * stored. Do not include the <code>S3://</code> prefix of the specified
     * bucket.</p> <p>Note that the role specified in the
     * <code>DataAccessRoleArn</code> request parameter must have permission to use the
     * specified location. You can change Amazon S3 permissions using the <a
     * href="https://console.aws.amazon.com/s3">Amazon Web Services Management
     * Console</a>. See also <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/security_iam_id-based-policy-examples.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p>
     */
    inline const Aws::String& GetOutputBucketName() const { return m_outputBucketName; }
    inline bool OutputBucketNameHasBeenSet() const { return m_outputBucketNameHasBeenSet; }
    template<typename OutputBucketNameT = Aws::String>
    void SetOutputBucketName(OutputBucketNameT&& value) { m_outputBucketNameHasBeenSet = true; m_outputBucketName = std::forward<OutputBucketNameT>(value); }
    template<typename OutputBucketNameT = Aws::String>
    StartMedicalScribeJobRequest& WithOutputBucketName(OutputBucketNameT&& value) { SetOutputBucketName(std::forward<OutputBucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key you want to use to encrypt your Medical Scribe output.</p> <p>If
     * using a key located in the <b>current</b> Amazon Web Services account, you can
     * specify your KMS key in one of four ways:</p> <ol> <li> <p>Use the KMS key ID
     * itself. For example, <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use an alias for the KMS key ID. For example,
     * <code>alias/ExampleAlias</code>.</p> </li> <li> <p>Use the Amazon Resource Name
     * (ARN) for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If you do not specify an encryption key, your output is encrypted with the
     * default Amazon S3 key (SSE-S3).</p> <p>Note that the role specified in the
     * <code>DataAccessRoleArn</code> request parameter must have permission to use the
     * specified KMS key.</p>
     */
    inline const Aws::String& GetOutputEncryptionKMSKeyId() const { return m_outputEncryptionKMSKeyId; }
    inline bool OutputEncryptionKMSKeyIdHasBeenSet() const { return m_outputEncryptionKMSKeyIdHasBeenSet; }
    template<typename OutputEncryptionKMSKeyIdT = Aws::String>
    void SetOutputEncryptionKMSKeyId(OutputEncryptionKMSKeyIdT&& value) { m_outputEncryptionKMSKeyIdHasBeenSet = true; m_outputEncryptionKMSKeyId = std::forward<OutputEncryptionKMSKeyIdT>(value); }
    template<typename OutputEncryptionKMSKeyIdT = Aws::String>
    StartMedicalScribeJobRequest& WithOutputEncryptionKMSKeyId(OutputEncryptionKMSKeyIdT&& value) { SetOutputEncryptionKMSKeyId(std::forward<OutputEncryptionKMSKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of plain text, non-secret key:value pairs, known as encryption context
     * pairs, that provide an added layer of security for your data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/key-management.html#kms-context">KMS
     * encryption context</a> and <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/symmetric-asymmetric.html">Asymmetric
     * keys in KMS</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetKMSEncryptionContext() const { return m_kMSEncryptionContext; }
    inline bool KMSEncryptionContextHasBeenSet() const { return m_kMSEncryptionContextHasBeenSet; }
    template<typename KMSEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
    void SetKMSEncryptionContext(KMSEncryptionContextT&& value) { m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext = std::forward<KMSEncryptionContextT>(value); }
    template<typename KMSEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
    StartMedicalScribeJobRequest& WithKMSEncryptionContext(KMSEncryptionContextT&& value) { SetKMSEncryptionContext(std::forward<KMSEncryptionContextT>(value)); return *this;}
    template<typename KMSEncryptionContextKeyT = Aws::String, typename KMSEncryptionContextValueT = Aws::String>
    StartMedicalScribeJobRequest& AddKMSEncryptionContext(KMSEncryptionContextKeyT&& key, KMSEncryptionContextValueT&& value) {
      m_kMSEncryptionContextHasBeenSet = true; m_kMSEncryptionContext.emplace(std::forward<KMSEncryptionContextKeyT>(key), std::forward<KMSEncryptionContextValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files, write to the output bucket,
     * and use your KMS key if supplied. If the role that you specify doesn’t have the
     * appropriate permissions your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const { return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    template<typename DataAccessRoleArnT = Aws::String>
    void SetDataAccessRoleArn(DataAccessRoleArnT&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::forward<DataAccessRoleArnT>(value); }
    template<typename DataAccessRoleArnT = Aws::String>
    StartMedicalScribeJobRequest& WithDataAccessRoleArn(DataAccessRoleArnT&& value) { SetDataAccessRoleArn(std::forward<DataAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Makes it possible to control how your Medical Scribe job is processed using a
     * <code>MedicalScribeSettings</code> object. Specify
     * <code>ChannelIdentification</code> if <code>ChannelDefinitions</code> are set.
     * Enabled <code>ShowSpeakerLabels</code> if <code>ChannelIdentification</code> and
     * <code>ChannelDefinitions</code> are not set. One and only one of
     * <code>ChannelIdentification</code> and <code>ShowSpeakerLabels</code> must be
     * set. If <code>ShowSpeakerLabels</code> is set, <code>MaxSpeakerLabels</code>
     * must also be set. Use <code>Settings</code> to specify a vocabulary or
     * vocabulary filter or both using <code>VocabularyName</code>,
     * <code>VocabularyFilterName</code>. <code>VocabularyFilterMethod</code> must be
     * specified if <code>VocabularyFilterName</code> is set. </p>
     */
    inline const MedicalScribeSettings& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = MedicalScribeSettings>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = MedicalScribeSettings>
    StartMedicalScribeJobRequest& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Makes it possible to specify which speaker is on which channel. For example,
     * if the clinician is the first participant to speak, you would set
     * <code>ChannelId</code> of the first <code>ChannelDefinition</code> in the list
     * to <code>0</code> (to indicate the first channel) and
     * <code>ParticipantRole</code> to <code>CLINICIAN</code> (to indicate that it's
     * the clinician speaking). Then you would set the <code>ChannelId</code> of the
     * second <code>ChannelDefinition</code> in the list to <code>1</code> (to indicate
     * the second channel) and <code>ParticipantRole</code> to <code>PATIENT</code> (to
     * indicate that it's the patient speaking). </p>
     */
    inline const Aws::Vector<MedicalScribeChannelDefinition>& GetChannelDefinitions() const { return m_channelDefinitions; }
    inline bool ChannelDefinitionsHasBeenSet() const { return m_channelDefinitionsHasBeenSet; }
    template<typename ChannelDefinitionsT = Aws::Vector<MedicalScribeChannelDefinition>>
    void SetChannelDefinitions(ChannelDefinitionsT&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions = std::forward<ChannelDefinitionsT>(value); }
    template<typename ChannelDefinitionsT = Aws::Vector<MedicalScribeChannelDefinition>>
    StartMedicalScribeJobRequest& WithChannelDefinitions(ChannelDefinitionsT&& value) { SetChannelDefinitions(std::forward<ChannelDefinitionsT>(value)); return *this;}
    template<typename ChannelDefinitionsT = MedicalScribeChannelDefinition>
    StartMedicalScribeJobRequest& AddChannelDefinitions(ChannelDefinitionsT&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions.emplace_back(std::forward<ChannelDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to the
     * Medical Scribe job.</p> <p>To learn more about using tags with Amazon
     * Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    StartMedicalScribeJobRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    StartMedicalScribeJobRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>MedicalScribeContext</code> object that contains contextual
     * information which is used during clinical note generation to add relevant
     * context to the note.</p>
     */
    inline const MedicalScribeContext& GetMedicalScribeContext() const { return m_medicalScribeContext; }
    inline bool MedicalScribeContextHasBeenSet() const { return m_medicalScribeContextHasBeenSet; }
    template<typename MedicalScribeContextT = MedicalScribeContext>
    void SetMedicalScribeContext(MedicalScribeContextT&& value) { m_medicalScribeContextHasBeenSet = true; m_medicalScribeContext = std::forward<MedicalScribeContextT>(value); }
    template<typename MedicalScribeContextT = MedicalScribeContext>
    StartMedicalScribeJobRequest& WithMedicalScribeContext(MedicalScribeContextT&& value) { SetMedicalScribeContext(std::forward<MedicalScribeContextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_medicalScribeJobName;
    bool m_medicalScribeJobNameHasBeenSet = false;

    Media m_media;
    bool m_mediaHasBeenSet = false;

    Aws::String m_outputBucketName;
    bool m_outputBucketNameHasBeenSet = false;

    Aws::String m_outputEncryptionKMSKeyId;
    bool m_outputEncryptionKMSKeyIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_kMSEncryptionContext;
    bool m_kMSEncryptionContextHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    MedicalScribeSettings m_settings;
    bool m_settingsHasBeenSet = false;

    Aws::Vector<MedicalScribeChannelDefinition> m_channelDefinitions;
    bool m_channelDefinitionsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    MedicalScribeContext m_medicalScribeContext;
    bool m_medicalScribeContextHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
