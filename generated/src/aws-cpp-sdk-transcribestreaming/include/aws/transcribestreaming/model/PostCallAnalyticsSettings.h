/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribestreaming/model/ContentRedactionOutput.h>
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
   * <p>Allows you to specify additional settings for your Call Analytics post-call
   * request, including output locations for your redacted transcript, which IAM role
   * to use, and which encryption key to use.</p> <p> <code>DataAccessRoleArn</code>
   * and <code>OutputLocation</code> are required fields.</p> <p>
   * <code>PostCallAnalyticsSettings</code> provides you with the same insights as a
   * Call Analytics post-call transcription. Refer to <a
   * href="https://docs.aws.amazon.com/transcribe/latest/dg/tca-post-call.html">Post-call
   * analytics</a> for more information on this feature.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/PostCallAnalyticsSettings">AWS
   * API Reference</a></p>
   */
  class PostCallAnalyticsSettings
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API PostCallAnalyticsSettings() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API PostCallAnalyticsSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API PostCallAnalyticsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 location where you want your Call Analytics post-call
     * transcription output stored. You can use any of the following formats to specify
     * the output location:</p> <ol> <li> <p>s3://DOC-EXAMPLE-BUCKET</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/</p> </li> <li>
     * <p>s3://DOC-EXAMPLE-BUCKET/my-output-folder/my-call-analytics-job.json</p> </li>
     * </ol>
     */
    inline const Aws::String& GetOutputLocation() const { return m_outputLocation; }
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }
    template<typename OutputLocationT = Aws::String>
    void SetOutputLocation(OutputLocationT&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::forward<OutputLocationT>(value); }
    template<typename OutputLocationT = Aws::String>
    PostCallAnalyticsSettings& WithOutputLocation(OutputLocationT&& value) { SetOutputLocation(std::forward<OutputLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files. If the role that you
     * specify doesn’t have the appropriate permissions to access the specified Amazon
     * S3 location, your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const { return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    template<typename DataAccessRoleArnT = Aws::String>
    void SetDataAccessRoleArn(DataAccessRoleArnT&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::forward<DataAccessRoleArnT>(value); }
    template<typename DataAccessRoleArnT = Aws::String>
    PostCallAnalyticsSettings& WithDataAccessRoleArn(DataAccessRoleArnT&& value) { SetDataAccessRoleArn(std::forward<DataAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify whether you want only a redacted transcript or both a redacted and an
     * unredacted transcript. If you choose redacted and unredacted, two JSON files are
     * generated and stored in the Amazon S3 output location you specify.</p> <p>Note
     * that to include <code>ContentRedactionOutput</code> in your request, you must
     * enable content redaction (<code>ContentRedactionType</code>).</p>
     */
    inline ContentRedactionOutput GetContentRedactionOutput() const { return m_contentRedactionOutput; }
    inline bool ContentRedactionOutputHasBeenSet() const { return m_contentRedactionOutputHasBeenSet; }
    inline void SetContentRedactionOutput(ContentRedactionOutput value) { m_contentRedactionOutputHasBeenSet = true; m_contentRedactionOutput = value; }
    inline PostCallAnalyticsSettings& WithContentRedactionOutput(ContentRedactionOutput value) { SetContentRedactionOutput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key you want to use to encrypt your Call Analytics post-call
     * output.</p> <p>If using a key located in the <b>current</b> Amazon Web Services
     * account, you can specify your KMS key in one of four ways:</p> <ol> <li> <p>Use
     * the KMS key ID itself. For example,
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>Use an
     * alias for the KMS key ID. For example, <code>alias/ExampleAlias</code>.</p>
     * </li> <li> <p>Use the Amazon Resource Name (ARN) for the KMS key ID. For
     * example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>If using a key located in a <b>different</b> Amazon Web Services account than
     * the current Amazon Web Services account, you can specify your KMS key in one of
     * two ways:</p> <ol> <li> <p>Use the ARN for the KMS key ID. For example,
     * <code>arn:aws:kms:region:account-ID:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Use the ARN for the KMS key alias. For example,
     * <code>arn:aws:kms:region:account-ID:alias/ExampleAlias</code>.</p> </li> </ol>
     * <p>Note that the role making the request must have permission to use the
     * specified KMS key.</p>
     */
    inline const Aws::String& GetOutputEncryptionKMSKeyId() const { return m_outputEncryptionKMSKeyId; }
    inline bool OutputEncryptionKMSKeyIdHasBeenSet() const { return m_outputEncryptionKMSKeyIdHasBeenSet; }
    template<typename OutputEncryptionKMSKeyIdT = Aws::String>
    void SetOutputEncryptionKMSKeyId(OutputEncryptionKMSKeyIdT&& value) { m_outputEncryptionKMSKeyIdHasBeenSet = true; m_outputEncryptionKMSKeyId = std::forward<OutputEncryptionKMSKeyIdT>(value); }
    template<typename OutputEncryptionKMSKeyIdT = Aws::String>
    PostCallAnalyticsSettings& WithOutputEncryptionKMSKeyId(OutputEncryptionKMSKeyIdT&& value) { SetOutputEncryptionKMSKeyId(std::forward<OutputEncryptionKMSKeyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_outputLocation;
    bool m_outputLocationHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    ContentRedactionOutput m_contentRedactionOutput{ContentRedactionOutput::NOT_SET};
    bool m_contentRedactionOutputHasBeenSet = false;

    Aws::String m_outputEncryptionKMSKeyId;
    bool m_outputEncryptionKMSKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
