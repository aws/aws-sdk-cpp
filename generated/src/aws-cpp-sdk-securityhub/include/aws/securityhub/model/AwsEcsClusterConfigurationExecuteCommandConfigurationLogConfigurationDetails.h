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
    AWS_SECURITYHUB_API AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails();
    AWS_SECURITYHUB_API AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether to enable encryption on the CloudWatch logs.</p>
     */
    inline bool GetCloudWatchEncryptionEnabled() const{ return m_cloudWatchEncryptionEnabled; }

    /**
     * <p>Whether to enable encryption on the CloudWatch logs.</p>
     */
    inline bool CloudWatchEncryptionEnabledHasBeenSet() const { return m_cloudWatchEncryptionEnabledHasBeenSet; }

    /**
     * <p>Whether to enable encryption on the CloudWatch logs.</p>
     */
    inline void SetCloudWatchEncryptionEnabled(bool value) { m_cloudWatchEncryptionEnabledHasBeenSet = true; m_cloudWatchEncryptionEnabled = value; }

    /**
     * <p>Whether to enable encryption on the CloudWatch logs.</p>
     */
    inline AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails& WithCloudWatchEncryptionEnabled(bool value) { SetCloudWatchEncryptionEnabled(value); return *this;}


    /**
     * <p>The name of the CloudWatch log group to send the logs to.</p>
     */
    inline const Aws::String& GetCloudWatchLogGroupName() const{ return m_cloudWatchLogGroupName; }

    /**
     * <p>The name of the CloudWatch log group to send the logs to.</p>
     */
    inline bool CloudWatchLogGroupNameHasBeenSet() const { return m_cloudWatchLogGroupNameHasBeenSet; }

    /**
     * <p>The name of the CloudWatch log group to send the logs to.</p>
     */
    inline void SetCloudWatchLogGroupName(const Aws::String& value) { m_cloudWatchLogGroupNameHasBeenSet = true; m_cloudWatchLogGroupName = value; }

    /**
     * <p>The name of the CloudWatch log group to send the logs to.</p>
     */
    inline void SetCloudWatchLogGroupName(Aws::String&& value) { m_cloudWatchLogGroupNameHasBeenSet = true; m_cloudWatchLogGroupName = std::move(value); }

    /**
     * <p>The name of the CloudWatch log group to send the logs to.</p>
     */
    inline void SetCloudWatchLogGroupName(const char* value) { m_cloudWatchLogGroupNameHasBeenSet = true; m_cloudWatchLogGroupName.assign(value); }

    /**
     * <p>The name of the CloudWatch log group to send the logs to.</p>
     */
    inline AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails& WithCloudWatchLogGroupName(const Aws::String& value) { SetCloudWatchLogGroupName(value); return *this;}

    /**
     * <p>The name of the CloudWatch log group to send the logs to.</p>
     */
    inline AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails& WithCloudWatchLogGroupName(Aws::String&& value) { SetCloudWatchLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudWatch log group to send the logs to.</p>
     */
    inline AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails& WithCloudWatchLogGroupName(const char* value) { SetCloudWatchLogGroupName(value); return *this;}


    /**
     * <p>The name of the S3 bucket to send logs to.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The name of the S3 bucket to send logs to.</p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>The name of the S3 bucket to send logs to.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The name of the S3 bucket to send logs to.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>The name of the S3 bucket to send logs to.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The name of the S3 bucket to send logs to.</p>
     */
    inline AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The name of the S3 bucket to send logs to.</p>
     */
    inline AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the S3 bucket to send logs to.</p>
     */
    inline AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    /**
     * <p>Whether to encrypt the logs that are sent to the S3 bucket.</p>
     */
    inline bool GetS3EncryptionEnabled() const{ return m_s3EncryptionEnabled; }

    /**
     * <p>Whether to encrypt the logs that are sent to the S3 bucket.</p>
     */
    inline bool S3EncryptionEnabledHasBeenSet() const { return m_s3EncryptionEnabledHasBeenSet; }

    /**
     * <p>Whether to encrypt the logs that are sent to the S3 bucket.</p>
     */
    inline void SetS3EncryptionEnabled(bool value) { m_s3EncryptionEnabledHasBeenSet = true; m_s3EncryptionEnabled = value; }

    /**
     * <p>Whether to encrypt the logs that are sent to the S3 bucket.</p>
     */
    inline AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails& WithS3EncryptionEnabled(bool value) { SetS3EncryptionEnabled(value); return *this;}


    /**
     * <p>Identifies the folder in the S3 bucket to send the logs to.</p>
     */
    inline const Aws::String& GetS3KeyPrefix() const{ return m_s3KeyPrefix; }

    /**
     * <p>Identifies the folder in the S3 bucket to send the logs to.</p>
     */
    inline bool S3KeyPrefixHasBeenSet() const { return m_s3KeyPrefixHasBeenSet; }

    /**
     * <p>Identifies the folder in the S3 bucket to send the logs to.</p>
     */
    inline void SetS3KeyPrefix(const Aws::String& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = value; }

    /**
     * <p>Identifies the folder in the S3 bucket to send the logs to.</p>
     */
    inline void SetS3KeyPrefix(Aws::String&& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = std::move(value); }

    /**
     * <p>Identifies the folder in the S3 bucket to send the logs to.</p>
     */
    inline void SetS3KeyPrefix(const char* value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix.assign(value); }

    /**
     * <p>Identifies the folder in the S3 bucket to send the logs to.</p>
     */
    inline AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails& WithS3KeyPrefix(const Aws::String& value) { SetS3KeyPrefix(value); return *this;}

    /**
     * <p>Identifies the folder in the S3 bucket to send the logs to.</p>
     */
    inline AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails& WithS3KeyPrefix(Aws::String&& value) { SetS3KeyPrefix(std::move(value)); return *this;}

    /**
     * <p>Identifies the folder in the S3 bucket to send the logs to.</p>
     */
    inline AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails& WithS3KeyPrefix(const char* value) { SetS3KeyPrefix(value); return *this;}

  private:

    bool m_cloudWatchEncryptionEnabled;
    bool m_cloudWatchEncryptionEnabledHasBeenSet = false;

    Aws::String m_cloudWatchLogGroupName;
    bool m_cloudWatchLogGroupNameHasBeenSet = false;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    bool m_s3EncryptionEnabled;
    bool m_s3EncryptionEnabledHasBeenSet = false;

    Aws::String m_s3KeyPrefix;
    bool m_s3KeyPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
