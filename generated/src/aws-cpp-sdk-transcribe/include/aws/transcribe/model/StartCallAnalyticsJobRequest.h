/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/Media.h>
#include <aws/transcribe/model/CallAnalyticsJobSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/Tag.h>
#include <aws/transcribe/model/ChannelDefinition.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class StartCallAnalyticsJobRequest : public TranscribeServiceRequest
  {
  public:
    AWS_TRANSCRIBESERVICE_API StartCallAnalyticsJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartCallAnalyticsJob"; }

    AWS_TRANSCRIBESERVICE_API Aws::String SerializePayload() const override;

    AWS_TRANSCRIBESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique name, chosen by you, for your Call Analytics job.</p> <p>This name
     * is case sensitive, cannot contain spaces, and must be unique within an Amazon
     * Web Services account. If you try to create a new job with the same name as an
     * existing job, you get a <code>ConflictException</code> error.</p>
     */
    inline const Aws::String& GetCallAnalyticsJobName() const { return m_callAnalyticsJobName; }
    inline bool CallAnalyticsJobNameHasBeenSet() const { return m_callAnalyticsJobNameHasBeenSet; }
    template<typename CallAnalyticsJobNameT = Aws::String>
    void SetCallAnalyticsJobName(CallAnalyticsJobNameT&& value) { m_callAnalyticsJobNameHasBeenSet = true; m_callAnalyticsJobName = std::forward<CallAnalyticsJobNameT>(value); }
    template<typename CallAnalyticsJobNameT = Aws::String>
    StartCallAnalyticsJobRequest& WithCallAnalyticsJobName(CallAnalyticsJobNameT&& value) { SetCallAnalyticsJobName(std::forward<CallAnalyticsJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the Amazon S3 location of the media file you want to use in your
     * Call Analytics request.</p>
     */
    inline const Media& GetMedia() const { return m_media; }
    inline bool MediaHasBeenSet() const { return m_mediaHasBeenSet; }
    template<typename MediaT = Media>
    void SetMedia(MediaT&& value) { m_mediaHasBeenSet = true; m_media = std::forward<MediaT>(value); }
    template<typename MediaT = Media>
    StartCallAnalyticsJobRequest& WithMedia(MediaT&& value) { SetMedia(std::forward<MediaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location where you want your Call Analytics transcription
     * output stored. You can use any of the following formats to specify the output
     * location:</p> <ol> <li> <p>s3://DOC-EXAMPLE-BUCKET</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/my-call-analytics-job.json</p> </li>
     * </ol> <p>Unless you specify a file name (option 3), the name of your output file
     * has a default value that matches the name you specified for your transcription
     * job using the <code>CallAnalyticsJobName</code> parameter.</p> <p>You can
     * specify a KMS key to encrypt your output using the
     * <code>OutputEncryptionKMSKeyId</code> parameter. If you do not specify a KMS
     * key, Amazon Transcribe uses the default Amazon S3 key for server-side
     * encryption.</p> <p>If you do not specify <code>OutputLocation</code>, your
     * transcript is placed in a service-managed Amazon S3 bucket and you are provided
     * with a URI to access your transcript.</p>
     */
    inline const Aws::String& GetOutputLocation() const { return m_outputLocation; }
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }
    template<typename OutputLocationT = Aws::String>
    void SetOutputLocation(OutputLocationT&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::forward<OutputLocationT>(value); }
    template<typename OutputLocationT = Aws::String>
    StartCallAnalyticsJobRequest& WithOutputLocation(OutputLocationT&& value) { SetOutputLocation(std::forward<OutputLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key you want to use to encrypt your Call Analytics output.</p> <p>If
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
     * default Amazon S3 key (SSE-S3).</p> <p>If you specify a KMS key to encrypt your
     * output, you must also specify an output location using the
     * <code>OutputLocation</code> parameter.</p> <p>Note that the role making the
     * request must have permission to use the specified KMS key.</p>
     */
    inline const Aws::String& GetOutputEncryptionKMSKeyId() const { return m_outputEncryptionKMSKeyId; }
    inline bool OutputEncryptionKMSKeyIdHasBeenSet() const { return m_outputEncryptionKMSKeyIdHasBeenSet; }
    template<typename OutputEncryptionKMSKeyIdT = Aws::String>
    void SetOutputEncryptionKMSKeyId(OutputEncryptionKMSKeyIdT&& value) { m_outputEncryptionKMSKeyIdHasBeenSet = true; m_outputEncryptionKMSKeyId = std::forward<OutputEncryptionKMSKeyIdT>(value); }
    template<typename OutputEncryptionKMSKeyIdT = Aws::String>
    StartCallAnalyticsJobRequest& WithOutputEncryptionKMSKeyId(OutputEncryptionKMSKeyIdT&& value) { SetOutputEncryptionKMSKeyId(std::forward<OutputEncryptionKMSKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files. If the role that you
     * specify doesn’t have the appropriate permissions to access the specified Amazon
     * S3 location, your request fails.</p> <p>IAM role ARNs have the format
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
    StartCallAnalyticsJobRequest& WithDataAccessRoleArn(DataAccessRoleArnT&& value) { SetDataAccessRoleArn(std::forward<DataAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify additional optional settings in your request, including content
     * redaction; allows you to apply custom language models, vocabulary filters, and
     * custom vocabularies to your Call Analytics job.</p>
     */
    inline const CallAnalyticsJobSettings& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = CallAnalyticsJobSettings>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = CallAnalyticsJobSettings>
    StartCallAnalyticsJobRequest& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * call analytics job at the time you start this new job.</p> <p>To learn more
     * about using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    StartCallAnalyticsJobRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    StartCallAnalyticsJobRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Makes it possible to specify which speaker is on which channel. For example,
     * if your agent is the first participant to speak, you would set
     * <code>ChannelId</code> to <code>0</code> (to indicate the first channel) and
     * <code>ParticipantRole</code> to <code>AGENT</code> (to indicate that it's the
     * agent speaking).</p>
     */
    inline const Aws::Vector<ChannelDefinition>& GetChannelDefinitions() const { return m_channelDefinitions; }
    inline bool ChannelDefinitionsHasBeenSet() const { return m_channelDefinitionsHasBeenSet; }
    template<typename ChannelDefinitionsT = Aws::Vector<ChannelDefinition>>
    void SetChannelDefinitions(ChannelDefinitionsT&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions = std::forward<ChannelDefinitionsT>(value); }
    template<typename ChannelDefinitionsT = Aws::Vector<ChannelDefinition>>
    StartCallAnalyticsJobRequest& WithChannelDefinitions(ChannelDefinitionsT&& value) { SetChannelDefinitions(std::forward<ChannelDefinitionsT>(value)); return *this;}
    template<typename ChannelDefinitionsT = ChannelDefinition>
    StartCallAnalyticsJobRequest& AddChannelDefinitions(ChannelDefinitionsT&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions.emplace_back(std::forward<ChannelDefinitionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_callAnalyticsJobName;
    bool m_callAnalyticsJobNameHasBeenSet = false;

    Media m_media;
    bool m_mediaHasBeenSet = false;

    Aws::String m_outputLocation;
    bool m_outputLocationHasBeenSet = false;

    Aws::String m_outputEncryptionKMSKeyId;
    bool m_outputEncryptionKMSKeyIdHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    CallAnalyticsJobSettings m_settings;
    bool m_settingsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<ChannelDefinition> m_channelDefinitions;
    bool m_channelDefinitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
