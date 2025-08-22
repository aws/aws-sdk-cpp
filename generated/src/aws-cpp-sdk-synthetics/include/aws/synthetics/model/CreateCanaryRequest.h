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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/synthetics/model/ProvisionedResourceCleanupSetting.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/synthetics/model/ArtifactConfigInput.h>
#include <aws/synthetics/model/ResourceToTag.h>
#include <aws/synthetics/model/BrowserConfig.h>
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
    AWS_SYNTHETICS_API CreateCanaryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCanary"; }

    AWS_SYNTHETICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name for this canary. Be sure to give it a descriptive name that
     * distinguishes it from other canaries in your account.</p> <p>Do not include
     * secrets or proprietary information in your canary names. The canary name makes
     * up part of the canary ARN, and the ARN is included in outbound calls over the
     * internet. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/servicelens_canaries_security.html">Security
     * Considerations for Synthetics Canaries</a>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateCanaryRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that includes the entry point from which the canary should start
     * running your script. If the script is stored in an Amazon S3 bucket, the bucket
     * name, key, and version are also included. </p>
     */
    inline const CanaryCodeInput& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = CanaryCodeInput>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = CanaryCodeInput>
    CreateCanaryRequest& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location in Amazon S3 where Synthetics stores artifacts from the test
     * runs of this canary. Artifacts include the log file, screenshots, and HAR files.
     * The name of the Amazon S3 bucket can't include a period (.).</p>
     */
    inline const Aws::String& GetArtifactS3Location() const { return m_artifactS3Location; }
    inline bool ArtifactS3LocationHasBeenSet() const { return m_artifactS3LocationHasBeenSet; }
    template<typename ArtifactS3LocationT = Aws::String>
    void SetArtifactS3Location(ArtifactS3LocationT&& value) { m_artifactS3LocationHasBeenSet = true; m_artifactS3Location = std::forward<ArtifactS3LocationT>(value); }
    template<typename ArtifactS3LocationT = Aws::String>
    CreateCanaryRequest& WithArtifactS3Location(ArtifactS3LocationT&& value) { SetArtifactS3Location(std::forward<ArtifactS3LocationT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    CreateCanaryRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains information about how often the canary is to run
     * and when these test runs are to stop.</p>
     */
    inline const CanaryScheduleInput& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = CanaryScheduleInput>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = CanaryScheduleInput>
    CreateCanaryRequest& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the configuration for individual canary runs, such
     * as timeout value and environment variables.</p>  <p>Environment
     * variable keys and values are encrypted at rest using Amazon Web Services owned
     * KMS keys. However, the environment variables are not encrypted on the client
     * side. Do not store sensitive information in them.</p> 
     */
    inline const CanaryRunConfigInput& GetRunConfig() const { return m_runConfig; }
    inline bool RunConfigHasBeenSet() const { return m_runConfigHasBeenSet; }
    template<typename RunConfigT = CanaryRunConfigInput>
    void SetRunConfig(RunConfigT&& value) { m_runConfigHasBeenSet = true; m_runConfig = std::forward<RunConfigT>(value); }
    template<typename RunConfigT = CanaryRunConfigInput>
    CreateCanaryRequest& WithRunConfig(RunConfigT&& value) { SetRunConfig(std::forward<RunConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to retain data about successful runs of this canary. If
     * you omit this field, the default of 31 days is used. The valid range is 1 to 455
     * days.</p> <p>This setting affects the range of information returned by <a
     * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_GetCanaryRuns.html">GetCanaryRuns</a>,
     * as well as the range of information displayed in the Synthetics console. </p>
     */
    inline int GetSuccessRetentionPeriodInDays() const { return m_successRetentionPeriodInDays; }
    inline bool SuccessRetentionPeriodInDaysHasBeenSet() const { return m_successRetentionPeriodInDaysHasBeenSet; }
    inline void SetSuccessRetentionPeriodInDays(int value) { m_successRetentionPeriodInDaysHasBeenSet = true; m_successRetentionPeriodInDays = value; }
    inline CreateCanaryRequest& WithSuccessRetentionPeriodInDays(int value) { SetSuccessRetentionPeriodInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to retain data about failed runs of this canary. If you
     * omit this field, the default of 31 days is used. The valid range is 1 to 455
     * days.</p> <p>This setting affects the range of information returned by <a
     * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_GetCanaryRuns.html">GetCanaryRuns</a>,
     * as well as the range of information displayed in the Synthetics console. </p>
     */
    inline int GetFailureRetentionPeriodInDays() const { return m_failureRetentionPeriodInDays; }
    inline bool FailureRetentionPeriodInDaysHasBeenSet() const { return m_failureRetentionPeriodInDaysHasBeenSet; }
    inline void SetFailureRetentionPeriodInDays(int value) { m_failureRetentionPeriodInDaysHasBeenSet = true; m_failureRetentionPeriodInDays = value; }
    inline CreateCanaryRequest& WithFailureRetentionPeriodInDays(int value) { SetFailureRetentionPeriodInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the runtime version to use for the canary. For a list of valid
     * runtime versions and more information about runtime versions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Library.html">
     * Canary Runtime Versions</a>.</p>
     */
    inline const Aws::String& GetRuntimeVersion() const { return m_runtimeVersion; }
    inline bool RuntimeVersionHasBeenSet() const { return m_runtimeVersionHasBeenSet; }
    template<typename RuntimeVersionT = Aws::String>
    void SetRuntimeVersion(RuntimeVersionT&& value) { m_runtimeVersionHasBeenSet = true; m_runtimeVersion = std::forward<RuntimeVersionT>(value); }
    template<typename RuntimeVersionT = Aws::String>
    CreateCanaryRequest& WithRuntimeVersion(RuntimeVersionT&& value) { SetRuntimeVersion(std::forward<RuntimeVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this canary is to test an endpoint in a VPC, this structure contains
     * information about the subnet and security groups of the VPC endpoint. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_VPC.html">
     * Running a Canary in a VPC</a>.</p>
     */
    inline const VpcConfigInput& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = VpcConfigInput>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfigInput>
    CreateCanaryRequest& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To have the tags that you apply to this canary also be applied to the Lambda
     * function that the canary uses, specify this parameter with the value
     * <code>lambda-function</code>.</p> <p>If you specify this parameter and don't
     * specify any tags in the <code>Tags</code> parameter, the canary creation
     * fails.</p>
     */
    inline const Aws::Vector<ResourceToTag>& GetResourcesToReplicateTags() const { return m_resourcesToReplicateTags; }
    inline bool ResourcesToReplicateTagsHasBeenSet() const { return m_resourcesToReplicateTagsHasBeenSet; }
    template<typename ResourcesToReplicateTagsT = Aws::Vector<ResourceToTag>>
    void SetResourcesToReplicateTags(ResourcesToReplicateTagsT&& value) { m_resourcesToReplicateTagsHasBeenSet = true; m_resourcesToReplicateTags = std::forward<ResourcesToReplicateTagsT>(value); }
    template<typename ResourcesToReplicateTagsT = Aws::Vector<ResourceToTag>>
    CreateCanaryRequest& WithResourcesToReplicateTags(ResourcesToReplicateTagsT&& value) { SetResourcesToReplicateTags(std::forward<ResourcesToReplicateTagsT>(value)); return *this;}
    inline CreateCanaryRequest& AddResourcesToReplicateTags(ResourceToTag value) { m_resourcesToReplicateTagsHasBeenSet = true; m_resourcesToReplicateTags.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether to also delete the Lambda functions and layers used by this
     * canary when the canary is deleted. If you omit this parameter, the default of
     * <code>AUTOMATIC</code> is used, which means that the Lambda functions and layers
     * will be deleted when the canary is deleted.</p> <p>If the value of this
     * parameter is <code>OFF</code>, then the value of the <code>DeleteLambda</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_DeleteCanary.html">DeleteCanary</a>
     * operation determines whether the Lambda functions and layers will be
     * deleted.</p>
     */
    inline ProvisionedResourceCleanupSetting GetProvisionedResourceCleanup() const { return m_provisionedResourceCleanup; }
    inline bool ProvisionedResourceCleanupHasBeenSet() const { return m_provisionedResourceCleanupHasBeenSet; }
    inline void SetProvisionedResourceCleanup(ProvisionedResourceCleanupSetting value) { m_provisionedResourceCleanupHasBeenSet = true; m_provisionedResourceCleanup = value; }
    inline CreateCanaryRequest& WithProvisionedResourceCleanup(ProvisionedResourceCleanupSetting value) { SetProvisionedResourceCleanup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>CloudWatch Synthetics now supports multibrowser canaries for
     * <code>syn-nodejs-puppeteer-11.0</code> and
     * <code>syn-nodejs-playwright-3.0</code> runtimes. This feature allows you to run
     * your canaries on both Firefox and Chrome browsers. To create a multibrowser
     * canary, you need to specify the BrowserConfigs with a list of browsers you want
     * to use.</p>  <p>If not specified, <code>browserConfigs</code> defaults to
     * Chrome.</p> 
     */
    inline const Aws::Vector<BrowserConfig>& GetBrowserConfigs() const { return m_browserConfigs; }
    inline bool BrowserConfigsHasBeenSet() const { return m_browserConfigsHasBeenSet; }
    template<typename BrowserConfigsT = Aws::Vector<BrowserConfig>>
    void SetBrowserConfigs(BrowserConfigsT&& value) { m_browserConfigsHasBeenSet = true; m_browserConfigs = std::forward<BrowserConfigsT>(value); }
    template<typename BrowserConfigsT = Aws::Vector<BrowserConfig>>
    CreateCanaryRequest& WithBrowserConfigs(BrowserConfigsT&& value) { SetBrowserConfigs(std::forward<BrowserConfigsT>(value)); return *this;}
    template<typename BrowserConfigsT = BrowserConfig>
    CreateCanaryRequest& AddBrowserConfigs(BrowserConfigsT&& value) { m_browserConfigsHasBeenSet = true; m_browserConfigs.emplace_back(std::forward<BrowserConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs to associate with the canary. You can associate as
     * many as 50 tags with a canary.</p> <p>Tags can help you organize and categorize
     * your resources. You can also use them to scope user permissions, by granting a
     * user permission to access or change only the resources that have certain tag
     * values.</p> <p>To have the tags that you apply to this canary also be applied to
     * the Lambda function that the canary uses, specify this parameter with the value
     * <code>lambda-function</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateCanaryRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateCanaryRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A structure that contains the configuration for canary artifacts, including
     * the encryption-at-rest settings for artifacts that the canary uploads to Amazon
     * S3.</p>
     */
    inline const ArtifactConfigInput& GetArtifactConfig() const { return m_artifactConfig; }
    inline bool ArtifactConfigHasBeenSet() const { return m_artifactConfigHasBeenSet; }
    template<typename ArtifactConfigT = ArtifactConfigInput>
    void SetArtifactConfig(ArtifactConfigT&& value) { m_artifactConfigHasBeenSet = true; m_artifactConfig = std::forward<ArtifactConfigT>(value); }
    template<typename ArtifactConfigT = ArtifactConfigInput>
    CreateCanaryRequest& WithArtifactConfig(ArtifactConfigT&& value) { SetArtifactConfig(std::forward<ArtifactConfigT>(value)); return *this;}
    ///@}
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

    int m_successRetentionPeriodInDays{0};
    bool m_successRetentionPeriodInDaysHasBeenSet = false;

    int m_failureRetentionPeriodInDays{0};
    bool m_failureRetentionPeriodInDaysHasBeenSet = false;

    Aws::String m_runtimeVersion;
    bool m_runtimeVersionHasBeenSet = false;

    VpcConfigInput m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    Aws::Vector<ResourceToTag> m_resourcesToReplicateTags;
    bool m_resourcesToReplicateTagsHasBeenSet = false;

    ProvisionedResourceCleanupSetting m_provisionedResourceCleanup{ProvisionedResourceCleanupSetting::NOT_SET};
    bool m_provisionedResourceCleanupHasBeenSet = false;

    Aws::Vector<BrowserConfig> m_browserConfigs;
    bool m_browserConfigsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    ArtifactConfigInput m_artifactConfig;
    bool m_artifactConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
