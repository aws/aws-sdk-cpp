/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The log configuration for the results of the run command
   * actions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails() = default;
    AWS_SECURITYHUB_API AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether to enable encryption on the CloudWatch logs.</p>
     */
    inline bool GetCloudWatchEncryptionEnabled() const { return m_cloudWatchEncryptionEnabled; }
    inline bool CloudWatchEncryptionEnabledHasBeenSet() const { return m_cloudWatchEncryptionEnabledHasBeenSet; }
    inline void SetCloudWatchEncryptionEnabled(bool value) { m_cloudWatchEncryptionEnabledHasBeenSet = true; m_cloudWatchEncryptionEnabled = value; }
    inline AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails& WithCloudWatchEncryptionEnabled(bool value) { SetCloudWatchEncryptionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the CloudWatch log group to send the logs to.</p>
     */
    inline const Aws::String& GetCloudWatchLogGroupName() const { return m_cloudWatchLogGroupName; }
    inline bool CloudWatchLogGroupNameHasBeenSet() const { return m_cloudWatchLogGroupNameHasBeenSet; }
    template<typename CloudWatchLogGroupNameT = Aws::String>
    void SetCloudWatchLogGroupName(CloudWatchLogGroupNameT&& value) { m_cloudWatchLogGroupNameHasBeenSet = true; m_cloudWatchLogGroupName = std::forward<CloudWatchLogGroupNameT>(value); }
    template<typename CloudWatchLogGroupNameT = Aws::String>
    AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails& WithCloudWatchLogGroupName(CloudWatchLogGroupNameT&& value) { SetCloudWatchLogGroupName(std::forward<CloudWatchLogGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the S3 bucket to send logs to.</p>
     */
    inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    template<typename S3BucketNameT = Aws::String>
    void SetS3BucketName(S3BucketNameT&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::forward<S3BucketNameT>(value); }
    template<typename S3BucketNameT = Aws::String>
    AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails& WithS3BucketName(S3BucketNameT&& value) { SetS3BucketName(std::forward<S3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to encrypt the logs that are sent to the S3 bucket.</p>
     */
    inline bool GetS3EncryptionEnabled() const { return m_s3EncryptionEnabled; }
    inline bool S3EncryptionEnabledHasBeenSet() const { return m_s3EncryptionEnabledHasBeenSet; }
    inline void SetS3EncryptionEnabled(bool value) { m_s3EncryptionEnabledHasBeenSet = true; m_s3EncryptionEnabled = value; }
    inline AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails& WithS3EncryptionEnabled(bool value) { SetS3EncryptionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the folder in the S3 bucket to send the logs to.</p>
     */
    inline const Aws::String& GetS3KeyPrefix() const { return m_s3KeyPrefix; }
    inline bool S3KeyPrefixHasBeenSet() const { return m_s3KeyPrefixHasBeenSet; }
    template<typename S3KeyPrefixT = Aws::String>
    void SetS3KeyPrefix(S3KeyPrefixT&& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = std::forward<S3KeyPrefixT>(value); }
    template<typename S3KeyPrefixT = Aws::String>
    AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails& WithS3KeyPrefix(S3KeyPrefixT&& value) { SetS3KeyPrefix(std::forward<S3KeyPrefixT>(value)); return *this;}
    ///@}
  private:

    bool m_cloudWatchEncryptionEnabled{false};
    bool m_cloudWatchEncryptionEnabledHasBeenSet = false;

    Aws::String m_cloudWatchLogGroupName;
    bool m_cloudWatchLogGroupNameHasBeenSet = false;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    bool m_s3EncryptionEnabled{false};
    bool m_s3EncryptionEnabledHasBeenSet = false;

    Aws::String m_s3KeyPrefix;
    bool m_s3KeyPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
