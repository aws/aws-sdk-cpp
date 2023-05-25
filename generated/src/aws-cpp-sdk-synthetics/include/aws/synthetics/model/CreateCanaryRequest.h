/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/SyntheticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/model/CanaryCodeInput.h>
#include <aws/synthetics/model/CanaryScheduleInput.h>
#include <aws/synthetics/model/CanaryRunConfigInput.h>
#include <aws/synthetics/model/VpcConfigInput.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/synthetics/model/ArtifactConfigInput.h>
#include <utility>

namespace Aws
{
namespace Synthetics
{
namespace Model
{

  /**
   */
  class CreateCanaryRequest : public SyntheticsRequest
  {
  public:
    AWS_SYNTHETICS_API CreateCanaryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCanary"; }

    AWS_SYNTHETICS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name for this canary. Be sure to give it a descriptive name that
     * distinguishes it from other canaries in your account.</p> <p>Do not include
     * secrets or proprietary information in your canary names. The canary name makes
     * up part of the canary ARN, and the ARN is included in outbound calls over the
     * internet. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/servicelens_canaries_security.html">Security
     * Considerations for Synthetics Canaries</a>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for this canary. Be sure to give it a descriptive name that
     * distinguishes it from other canaries in your account.</p> <p>Do not include
     * secrets or proprietary information in your canary names. The canary name makes
     * up part of the canary ARN, and the ARN is included in outbound calls over the
     * internet. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/servicelens_canaries_security.html">Security
     * Considerations for Synthetics Canaries</a>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for this canary. Be sure to give it a descriptive name that
     * distinguishes it from other canaries in your account.</p> <p>Do not include
     * secrets or proprietary information in your canary names. The canary name makes
     * up part of the canary ARN, and the ARN is included in outbound calls over the
     * internet. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/servicelens_canaries_security.html">Security
     * Considerations for Synthetics Canaries</a>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for this canary. Be sure to give it a descriptive name that
     * distinguishes it from other canaries in your account.</p> <p>Do not include
     * secrets or proprietary information in your canary names. The canary name makes
     * up part of the canary ARN, and the ARN is included in outbound calls over the
     * internet. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/servicelens_canaries_security.html">Security
     * Considerations for Synthetics Canaries</a>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for this canary. Be sure to give it a descriptive name that
     * distinguishes it from other canaries in your account.</p> <p>Do not include
     * secrets or proprietary information in your canary names. The canary name makes
     * up part of the canary ARN, and the ARN is included in outbound calls over the
     * internet. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/servicelens_canaries_security.html">Security
     * Considerations for Synthetics Canaries</a>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for this canary. Be sure to give it a descriptive name that
     * distinguishes it from other canaries in your account.</p> <p>Do not include
     * secrets or proprietary information in your canary names. The canary name makes
     * up part of the canary ARN, and the ARN is included in outbound calls over the
     * internet. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/servicelens_canaries_security.html">Security
     * Considerations for Synthetics Canaries</a>.</p>
     */
    inline CreateCanaryRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for this canary. Be sure to give it a descriptive name that
     * distinguishes it from other canaries in your account.</p> <p>Do not include
     * secrets or proprietary information in your canary names. The canary name makes
     * up part of the canary ARN, and the ARN is included in outbound calls over the
     * internet. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/servicelens_canaries_security.html">Security
     * Considerations for Synthetics Canaries</a>.</p>
     */
    inline CreateCanaryRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for this canary. Be sure to give it a descriptive name that
     * distinguishes it from other canaries in your account.</p> <p>Do not include
     * secrets or proprietary information in your canary names. The canary name makes
     * up part of the canary ARN, and the ARN is included in outbound calls over the
     * internet. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/servicelens_canaries_security.html">Security
     * Considerations for Synthetics Canaries</a>.</p>
     */
    inline CreateCanaryRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A structure that includes the entry point from which the canary should start
     * running your script. If the script is stored in an S3 bucket, the bucket name,
     * key, and version are also included. </p>
     */
    inline const CanaryCodeInput& GetCode() const{ return m_code; }

    /**
     * <p>A structure that includes the entry point from which the canary should start
     * running your script. If the script is stored in an S3 bucket, the bucket name,
     * key, and version are also included. </p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>A structure that includes the entry point from which the canary should start
     * running your script. If the script is stored in an S3 bucket, the bucket name,
     * key, and version are also included. </p>
     */
    inline void SetCode(const CanaryCodeInput& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>A structure that includes the entry point from which the canary should start
     * running your script. If the script is stored in an S3 bucket, the bucket name,
     * key, and version are also included. </p>
     */
    inline void SetCode(CanaryCodeInput&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>A structure that includes the entry point from which the canary should start
     * running your script. If the script is stored in an S3 bucket, the bucket name,
     * key, and version are also included. </p>
     */
    inline CreateCanaryRequest& WithCode(const CanaryCodeInput& value) { SetCode(value); return *this;}

    /**
     * <p>A structure that includes the entry point from which the canary should start
     * running your script. If the script is stored in an S3 bucket, the bucket name,
     * key, and version are also included. </p>
     */
    inline CreateCanaryRequest& WithCode(CanaryCodeInput&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>The location in Amazon S3 where Synthetics stores artifacts from the test
     * runs of this canary. Artifacts include the log file, screenshots, and HAR files.
     * The name of the S3 bucket can't include a period (.).</p>
     */
    inline const Aws::String& GetArtifactS3Location() const{ return m_artifactS3Location; }

    /**
     * <p>The location in Amazon S3 where Synthetics stores artifacts from the test
     * runs of this canary. Artifacts include the log file, screenshots, and HAR files.
     * The name of the S3 bucket can't include a period (.).</p>
     */
    inline bool ArtifactS3LocationHasBeenSet() const { return m_artifactS3LocationHasBeenSet; }

    /**
     * <p>The location in Amazon S3 where Synthetics stores artifacts from the test
     * runs of this canary. Artifacts include the log file, screenshots, and HAR files.
     * The name of the S3 bucket can't include a period (.).</p>
     */
    inline void SetArtifactS3Location(const Aws::String& value) { m_artifactS3LocationHasBeenSet = true; m_artifactS3Location = value; }

    /**
     * <p>The location in Amazon S3 where Synthetics stores artifacts from the test
     * runs of this canary. Artifacts include the log file, screenshots, and HAR files.
     * The name of the S3 bucket can't include a period (.).</p>
     */
    inline void SetArtifactS3Location(Aws::String&& value) { m_artifactS3LocationHasBeenSet = true; m_artifactS3Location = std::move(value); }

    /**
     * <p>The location in Amazon S3 where Synthetics stores artifacts from the test
     * runs of this canary. Artifacts include the log file, screenshots, and HAR files.
     * The name of the S3 bucket can't include a period (.).</p>
     */
    inline void SetArtifactS3Location(const char* value) { m_artifactS3LocationHasBeenSet = true; m_artifactS3Location.assign(value); }

    /**
     * <p>The location in Amazon S3 where Synthetics stores artifacts from the test
     * runs of this canary. Artifacts include the log file, screenshots, and HAR files.
     * The name of the S3 bucket can't include a period (.).</p>
     */
    inline CreateCanaryRequest& WithArtifactS3Location(const Aws::String& value) { SetArtifactS3Location(value); return *this;}

    /**
     * <p>The location in Amazon S3 where Synthetics stores artifacts from the test
     * runs of this canary. Artifacts include the log file, screenshots, and HAR files.
     * The name of the S3 bucket can't include a period (.).</p>
     */
    inline CreateCanaryRequest& WithArtifactS3Location(Aws::String&& value) { SetArtifactS3Location(std::move(value)); return *this;}

    /**
     * <p>The location in Amazon S3 where Synthetics stores artifacts from the test
     * runs of this canary. Artifacts include the log file, screenshots, and HAR files.
     * The name of the S3 bucket can't include a period (.).</p>
     */
    inline CreateCanaryRequest& WithArtifactS3Location(const char* value) { SetArtifactS3Location(value); return *this;}


    /**
     * <p>The ARN of the IAM role to be used to run the canary. This role must already
     * exist, and must include <code>lambda.amazonaws.com</code> as a principal in the
     * trust policy. The role must also have the following permissions:</p> <ul> <li>
     * <p> <code>s3:PutObject</code> </p> </li> <li> <p>
     * <code>s3:GetBucketLocation</code> </p> </li> <li> <p>
     * <code>s3:ListAllMyBuckets</code> </p> </li> <li> <p>
     * <code>cloudwatch:PutMetricData</code> </p> </li> <li> <p>
     * <code>logs:CreateLogGroup</code> </p> </li> <li> <p>
     * <code>logs:CreateLogStream</code> </p> </li> <li> <p>
     * <code>logs:PutLogEvents</code> </p> </li> </ul>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The ARN of the IAM role to be used to run the canary. This role must already
     * exist, and must include <code>lambda.amazonaws.com</code> as a principal in the
     * trust policy. The role must also have the following permissions:</p> <ul> <li>
     * <p> <code>s3:PutObject</code> </p> </li> <li> <p>
     * <code>s3:GetBucketLocation</code> </p> </li> <li> <p>
     * <code>s3:ListAllMyBuckets</code> </p> </li> <li> <p>
     * <code>cloudwatch:PutMetricData</code> </p> </li> <li> <p>
     * <code>logs:CreateLogGroup</code> </p> </li> <li> <p>
     * <code>logs:CreateLogStream</code> </p> </li> <li> <p>
     * <code>logs:PutLogEvents</code> </p> </li> </ul>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role to be used to run the canary. This role must already
     * exist, and must include <code>lambda.amazonaws.com</code> as a principal in the
     * trust policy. The role must also have the following permissions:</p> <ul> <li>
     * <p> <code>s3:PutObject</code> </p> </li> <li> <p>
     * <code>s3:GetBucketLocation</code> </p> </li> <li> <p>
     * <code>s3:ListAllMyBuckets</code> </p> </li> <li> <p>
     * <code>cloudwatch:PutMetricData</code> </p> </li> <li> <p>
     * <code>logs:CreateLogGroup</code> </p> </li> <li> <p>
     * <code>logs:CreateLogStream</code> </p> </li> <li> <p>
     * <code>logs:PutLogEvents</code> </p> </li> </ul>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The ARN of the IAM role to be used to run the canary. This role must already
     * exist, and must include <code>lambda.amazonaws.com</code> as a principal in the
     * trust policy. The role must also have the following permissions:</p> <ul> <li>
     * <p> <code>s3:PutObject</code> </p> </li> <li> <p>
     * <code>s3:GetBucketLocation</code> </p> </li> <li> <p>
     * <code>s3:ListAllMyBuckets</code> </p> </li> <li> <p>
     * <code>cloudwatch:PutMetricData</code> </p> </li> <li> <p>
     * <code>logs:CreateLogGroup</code> </p> </li> <li> <p>
     * <code>logs:CreateLogStream</code> </p> </li> <li> <p>
     * <code>logs:PutLogEvents</code> </p> </li> </ul>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role to be used to run the canary. This role must already
     * exist, and must include <code>lambda.amazonaws.com</code> as a principal in the
     * trust policy. The role must also have the following permissions:</p> <ul> <li>
     * <p> <code>s3:PutObject</code> </p> </li> <li> <p>
     * <code>s3:GetBucketLocation</code> </p> </li> <li> <p>
     * <code>s3:ListAllMyBuckets</code> </p> </li> <li> <p>
     * <code>cloudwatch:PutMetricData</code> </p> </li> <li> <p>
     * <code>logs:CreateLogGroup</code> </p> </li> <li> <p>
     * <code>logs:CreateLogStream</code> </p> </li> <li> <p>
     * <code>logs:PutLogEvents</code> </p> </li> </ul>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role to be used to run the canary. This role must already
     * exist, and must include <code>lambda.amazonaws.com</code> as a principal in the
     * trust policy. The role must also have the following permissions:</p> <ul> <li>
     * <p> <code>s3:PutObject</code> </p> </li> <li> <p>
     * <code>s3:GetBucketLocation</code> </p> </li> <li> <p>
     * <code>s3:ListAllMyBuckets</code> </p> </li> <li> <p>
     * <code>cloudwatch:PutMetricData</code> </p> </li> <li> <p>
     * <code>logs:CreateLogGroup</code> </p> </li> <li> <p>
     * <code>logs:CreateLogStream</code> </p> </li> <li> <p>
     * <code>logs:PutLogEvents</code> </p> </li> </ul>
     */
    inline CreateCanaryRequest& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role to be used to run the canary. This role must already
     * exist, and must include <code>lambda.amazonaws.com</code> as a principal in the
     * trust policy. The role must also have the following permissions:</p> <ul> <li>
     * <p> <code>s3:PutObject</code> </p> </li> <li> <p>
     * <code>s3:GetBucketLocation</code> </p> </li> <li> <p>
     * <code>s3:ListAllMyBuckets</code> </p> </li> <li> <p>
     * <code>cloudwatch:PutMetricData</code> </p> </li> <li> <p>
     * <code>logs:CreateLogGroup</code> </p> </li> <li> <p>
     * <code>logs:CreateLogStream</code> </p> </li> <li> <p>
     * <code>logs:PutLogEvents</code> </p> </li> </ul>
     */
    inline CreateCanaryRequest& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role to be used to run the canary. This role must already
     * exist, and must include <code>lambda.amazonaws.com</code> as a principal in the
     * trust policy. The role must also have the following permissions:</p> <ul> <li>
     * <p> <code>s3:PutObject</code> </p> </li> <li> <p>
     * <code>s3:GetBucketLocation</code> </p> </li> <li> <p>
     * <code>s3:ListAllMyBuckets</code> </p> </li> <li> <p>
     * <code>cloudwatch:PutMetricData</code> </p> </li> <li> <p>
     * <code>logs:CreateLogGroup</code> </p> </li> <li> <p>
     * <code>logs:CreateLogStream</code> </p> </li> <li> <p>
     * <code>logs:PutLogEvents</code> </p> </li> </ul>
     */
    inline CreateCanaryRequest& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>A structure that contains information about how often the canary is to run
     * and when these test runs are to stop.</p>
     */
    inline const CanaryScheduleInput& GetSchedule() const{ return m_schedule; }

    /**
     * <p>A structure that contains information about how often the canary is to run
     * and when these test runs are to stop.</p>
     */
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

    /**
     * <p>A structure that contains information about how often the canary is to run
     * and when these test runs are to stop.</p>
     */
    inline void SetSchedule(const CanaryScheduleInput& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>A structure that contains information about how often the canary is to run
     * and when these test runs are to stop.</p>
     */
    inline void SetSchedule(CanaryScheduleInput&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>A structure that contains information about how often the canary is to run
     * and when these test runs are to stop.</p>
     */
    inline CreateCanaryRequest& WithSchedule(const CanaryScheduleInput& value) { SetSchedule(value); return *this;}

    /**
     * <p>A structure that contains information about how often the canary is to run
     * and when these test runs are to stop.</p>
     */
    inline CreateCanaryRequest& WithSchedule(CanaryScheduleInput&& value) { SetSchedule(std::move(value)); return *this;}


    /**
     * <p>A structure that contains the configuration for individual canary runs, such
     * as timeout value and environment variables.</p>  <p>The environment
     * variables keys and values are not encrypted. Do not store sensitive information
     * in this field.</p> 
     */
    inline const CanaryRunConfigInput& GetRunConfig() const{ return m_runConfig; }

    /**
     * <p>A structure that contains the configuration for individual canary runs, such
     * as timeout value and environment variables.</p>  <p>The environment
     * variables keys and values are not encrypted. Do not store sensitive information
     * in this field.</p> 
     */
    inline bool RunConfigHasBeenSet() const { return m_runConfigHasBeenSet; }

    /**
     * <p>A structure that contains the configuration for individual canary runs, such
     * as timeout value and environment variables.</p>  <p>The environment
     * variables keys and values are not encrypted. Do not store sensitive information
     * in this field.</p> 
     */
    inline void SetRunConfig(const CanaryRunConfigInput& value) { m_runConfigHasBeenSet = true; m_runConfig = value; }

    /**
     * <p>A structure that contains the configuration for individual canary runs, such
     * as timeout value and environment variables.</p>  <p>The environment
     * variables keys and values are not encrypted. Do not store sensitive information
     * in this field.</p> 
     */
    inline void SetRunConfig(CanaryRunConfigInput&& value) { m_runConfigHasBeenSet = true; m_runConfig = std::move(value); }

    /**
     * <p>A structure that contains the configuration for individual canary runs, such
     * as timeout value and environment variables.</p>  <p>The environment
     * variables keys and values are not encrypted. Do not store sensitive information
     * in this field.</p> 
     */
    inline CreateCanaryRequest& WithRunConfig(const CanaryRunConfigInput& value) { SetRunConfig(value); return *this;}

    /**
     * <p>A structure that contains the configuration for individual canary runs, such
     * as timeout value and environment variables.</p>  <p>The environment
     * variables keys and values are not encrypted. Do not store sensitive information
     * in this field.</p> 
     */
    inline CreateCanaryRequest& WithRunConfig(CanaryRunConfigInput&& value) { SetRunConfig(std::move(value)); return *this;}


    /**
     * <p>The number of days to retain data about successful runs of this canary. If
     * you omit this field, the default of 31 days is used. The valid range is 1 to 455
     * days.</p>
     */
    inline int GetSuccessRetentionPeriodInDays() const{ return m_successRetentionPeriodInDays; }

    /**
     * <p>The number of days to retain data about successful runs of this canary. If
     * you omit this field, the default of 31 days is used. The valid range is 1 to 455
     * days.</p>
     */
    inline bool SuccessRetentionPeriodInDaysHasBeenSet() const { return m_successRetentionPeriodInDaysHasBeenSet; }

    /**
     * <p>The number of days to retain data about successful runs of this canary. If
     * you omit this field, the default of 31 days is used. The valid range is 1 to 455
     * days.</p>
     */
    inline void SetSuccessRetentionPeriodInDays(int value) { m_successRetentionPeriodInDaysHasBeenSet = true; m_successRetentionPeriodInDays = value; }

    /**
     * <p>The number of days to retain data about successful runs of this canary. If
     * you omit this field, the default of 31 days is used. The valid range is 1 to 455
     * days.</p>
     */
    inline CreateCanaryRequest& WithSuccessRetentionPeriodInDays(int value) { SetSuccessRetentionPeriodInDays(value); return *this;}


    /**
     * <p>The number of days to retain data about failed runs of this canary. If you
     * omit this field, the default of 31 days is used. The valid range is 1 to 455
     * days.</p>
     */
    inline int GetFailureRetentionPeriodInDays() const{ return m_failureRetentionPeriodInDays; }

    /**
     * <p>The number of days to retain data about failed runs of this canary. If you
     * omit this field, the default of 31 days is used. The valid range is 1 to 455
     * days.</p>
     */
    inline bool FailureRetentionPeriodInDaysHasBeenSet() const { return m_failureRetentionPeriodInDaysHasBeenSet; }

    /**
     * <p>The number of days to retain data about failed runs of this canary. If you
     * omit this field, the default of 31 days is used. The valid range is 1 to 455
     * days.</p>
     */
    inline void SetFailureRetentionPeriodInDays(int value) { m_failureRetentionPeriodInDaysHasBeenSet = true; m_failureRetentionPeriodInDays = value; }

    /**
     * <p>The number of days to retain data about failed runs of this canary. If you
     * omit this field, the default of 31 days is used. The valid range is 1 to 455
     * days.</p>
     */
    inline CreateCanaryRequest& WithFailureRetentionPeriodInDays(int value) { SetFailureRetentionPeriodInDays(value); return *this;}


    /**
     * <p>Specifies the runtime version to use for the canary. For a list of valid
     * runtime versions and more information about runtime versions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Library.html">
     * Canary Runtime Versions</a>.</p>
     */
    inline const Aws::String& GetRuntimeVersion() const{ return m_runtimeVersion; }

    /**
     * <p>Specifies the runtime version to use for the canary. For a list of valid
     * runtime versions and more information about runtime versions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Library.html">
     * Canary Runtime Versions</a>.</p>
     */
    inline bool RuntimeVersionHasBeenSet() const { return m_runtimeVersionHasBeenSet; }

    /**
     * <p>Specifies the runtime version to use for the canary. For a list of valid
     * runtime versions and more information about runtime versions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Library.html">
     * Canary Runtime Versions</a>.</p>
     */
    inline void SetRuntimeVersion(const Aws::String& value) { m_runtimeVersionHasBeenSet = true; m_runtimeVersion = value; }

    /**
     * <p>Specifies the runtime version to use for the canary. For a list of valid
     * runtime versions and more information about runtime versions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Library.html">
     * Canary Runtime Versions</a>.</p>
     */
    inline void SetRuntimeVersion(Aws::String&& value) { m_runtimeVersionHasBeenSet = true; m_runtimeVersion = std::move(value); }

    /**
     * <p>Specifies the runtime version to use for the canary. For a list of valid
     * runtime versions and more information about runtime versions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Library.html">
     * Canary Runtime Versions</a>.</p>
     */
    inline void SetRuntimeVersion(const char* value) { m_runtimeVersionHasBeenSet = true; m_runtimeVersion.assign(value); }

    /**
     * <p>Specifies the runtime version to use for the canary. For a list of valid
     * runtime versions and more information about runtime versions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Library.html">
     * Canary Runtime Versions</a>.</p>
     */
    inline CreateCanaryRequest& WithRuntimeVersion(const Aws::String& value) { SetRuntimeVersion(value); return *this;}

    /**
     * <p>Specifies the runtime version to use for the canary. For a list of valid
     * runtime versions and more information about runtime versions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Library.html">
     * Canary Runtime Versions</a>.</p>
     */
    inline CreateCanaryRequest& WithRuntimeVersion(Aws::String&& value) { SetRuntimeVersion(std::move(value)); return *this;}

    /**
     * <p>Specifies the runtime version to use for the canary. For a list of valid
     * runtime versions and more information about runtime versions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Library.html">
     * Canary Runtime Versions</a>.</p>
     */
    inline CreateCanaryRequest& WithRuntimeVersion(const char* value) { SetRuntimeVersion(value); return *this;}


    /**
     * <p>If this canary is to test an endpoint in a VPC, this structure contains
     * information about the subnet and security groups of the VPC endpoint. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_VPC.html">
     * Running a Canary in a VPC</a>.</p>
     */
    inline const VpcConfigInput& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>If this canary is to test an endpoint in a VPC, this structure contains
     * information about the subnet and security groups of the VPC endpoint. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_VPC.html">
     * Running a Canary in a VPC</a>.</p>
     */
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    /**
     * <p>If this canary is to test an endpoint in a VPC, this structure contains
     * information about the subnet and security groups of the VPC endpoint. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_VPC.html">
     * Running a Canary in a VPC</a>.</p>
     */
    inline void SetVpcConfig(const VpcConfigInput& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>If this canary is to test an endpoint in a VPC, this structure contains
     * information about the subnet and security groups of the VPC endpoint. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_VPC.html">
     * Running a Canary in a VPC</a>.</p>
     */
    inline void SetVpcConfig(VpcConfigInput&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>If this canary is to test an endpoint in a VPC, this structure contains
     * information about the subnet and security groups of the VPC endpoint. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_VPC.html">
     * Running a Canary in a VPC</a>.</p>
     */
    inline CreateCanaryRequest& WithVpcConfig(const VpcConfigInput& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>If this canary is to test an endpoint in a VPC, this structure contains
     * information about the subnet and security groups of the VPC endpoint. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_VPC.html">
     * Running a Canary in a VPC</a>.</p>
     */
    inline CreateCanaryRequest& WithVpcConfig(VpcConfigInput&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>A list of key-value pairs to associate with the canary. You can associate as
     * many as 50 tags with a canary.</p> <p>Tags can help you organize and categorize
     * your resources. You can also use them to scope user permissions, by granting a
     * user permission to access or change only the resources that have certain tag
     * values.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key-value pairs to associate with the canary. You can associate as
     * many as 50 tags with a canary.</p> <p>Tags can help you organize and categorize
     * your resources. You can also use them to scope user permissions, by granting a
     * user permission to access or change only the resources that have certain tag
     * values.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of key-value pairs to associate with the canary. You can associate as
     * many as 50 tags with a canary.</p> <p>Tags can help you organize and categorize
     * your resources. You can also use them to scope user permissions, by granting a
     * user permission to access or change only the resources that have certain tag
     * values.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of key-value pairs to associate with the canary. You can associate as
     * many as 50 tags with a canary.</p> <p>Tags can help you organize and categorize
     * your resources. You can also use them to scope user permissions, by granting a
     * user permission to access or change only the resources that have certain tag
     * values.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of key-value pairs to associate with the canary. You can associate as
     * many as 50 tags with a canary.</p> <p>Tags can help you organize and categorize
     * your resources. You can also use them to scope user permissions, by granting a
     * user permission to access or change only the resources that have certain tag
     * values.</p>
     */
    inline CreateCanaryRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key-value pairs to associate with the canary. You can associate as
     * many as 50 tags with a canary.</p> <p>Tags can help you organize and categorize
     * your resources. You can also use them to scope user permissions, by granting a
     * user permission to access or change only the resources that have certain tag
     * values.</p>
     */
    inline CreateCanaryRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs to associate with the canary. You can associate as
     * many as 50 tags with a canary.</p> <p>Tags can help you organize and categorize
     * your resources. You can also use them to scope user permissions, by granting a
     * user permission to access or change only the resources that have certain tag
     * values.</p>
     */
    inline CreateCanaryRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of key-value pairs to associate with the canary. You can associate as
     * many as 50 tags with a canary.</p> <p>Tags can help you organize and categorize
     * your resources. You can also use them to scope user permissions, by granting a
     * user permission to access or change only the resources that have certain tag
     * values.</p>
     */
    inline CreateCanaryRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs to associate with the canary. You can associate as
     * many as 50 tags with a canary.</p> <p>Tags can help you organize and categorize
     * your resources. You can also use them to scope user permissions, by granting a
     * user permission to access or change only the resources that have certain tag
     * values.</p>
     */
    inline CreateCanaryRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs to associate with the canary. You can associate as
     * many as 50 tags with a canary.</p> <p>Tags can help you organize and categorize
     * your resources. You can also use them to scope user permissions, by granting a
     * user permission to access or change only the resources that have certain tag
     * values.</p>
     */
    inline CreateCanaryRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs to associate with the canary. You can associate as
     * many as 50 tags with a canary.</p> <p>Tags can help you organize and categorize
     * your resources. You can also use them to scope user permissions, by granting a
     * user permission to access or change only the resources that have certain tag
     * values.</p>
     */
    inline CreateCanaryRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs to associate with the canary. You can associate as
     * many as 50 tags with a canary.</p> <p>Tags can help you organize and categorize
     * your resources. You can also use them to scope user permissions, by granting a
     * user permission to access or change only the resources that have certain tag
     * values.</p>
     */
    inline CreateCanaryRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs to associate with the canary. You can associate as
     * many as 50 tags with a canary.</p> <p>Tags can help you organize and categorize
     * your resources. You can also use them to scope user permissions, by granting a
     * user permission to access or change only the resources that have certain tag
     * values.</p>
     */
    inline CreateCanaryRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>A structure that contains the configuration for canary artifacts, including
     * the encryption-at-rest settings for artifacts that the canary uploads to Amazon
     * S3.</p>
     */
    inline const ArtifactConfigInput& GetArtifactConfig() const{ return m_artifactConfig; }

    /**
     * <p>A structure that contains the configuration for canary artifacts, including
     * the encryption-at-rest settings for artifacts that the canary uploads to Amazon
     * S3.</p>
     */
    inline bool ArtifactConfigHasBeenSet() const { return m_artifactConfigHasBeenSet; }

    /**
     * <p>A structure that contains the configuration for canary artifacts, including
     * the encryption-at-rest settings for artifacts that the canary uploads to Amazon
     * S3.</p>
     */
    inline void SetArtifactConfig(const ArtifactConfigInput& value) { m_artifactConfigHasBeenSet = true; m_artifactConfig = value; }

    /**
     * <p>A structure that contains the configuration for canary artifacts, including
     * the encryption-at-rest settings for artifacts that the canary uploads to Amazon
     * S3.</p>
     */
    inline void SetArtifactConfig(ArtifactConfigInput&& value) { m_artifactConfigHasBeenSet = true; m_artifactConfig = std::move(value); }

    /**
     * <p>A structure that contains the configuration for canary artifacts, including
     * the encryption-at-rest settings for artifacts that the canary uploads to Amazon
     * S3.</p>
     */
    inline CreateCanaryRequest& WithArtifactConfig(const ArtifactConfigInput& value) { SetArtifactConfig(value); return *this;}

    /**
     * <p>A structure that contains the configuration for canary artifacts, including
     * the encryption-at-rest settings for artifacts that the canary uploads to Amazon
     * S3.</p>
     */
    inline CreateCanaryRequest& WithArtifactConfig(ArtifactConfigInput&& value) { SetArtifactConfig(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CanaryCodeInput m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_artifactS3Location;
    bool m_artifactS3LocationHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    CanaryScheduleInput m_schedule;
    bool m_scheduleHasBeenSet = false;

    CanaryRunConfigInput m_runConfig;
    bool m_runConfigHasBeenSet = false;

    int m_successRetentionPeriodInDays;
    bool m_successRetentionPeriodInDaysHasBeenSet = false;

    int m_failureRetentionPeriodInDays;
    bool m_failureRetentionPeriodInDaysHasBeenSet = false;

    Aws::String m_runtimeVersion;
    bool m_runtimeVersionHasBeenSet = false;

    VpcConfigInput m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    ArtifactConfigInput m_artifactConfig;
    bool m_artifactConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
