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
#include <aws/synthetics/model/VisualReferenceInput.h>
#include <aws/synthetics/model/ArtifactConfigInput.h>
#include <aws/synthetics/model/ProvisionedResourceCleanupSetting.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class UpdateCanaryRequest : public SyntheticsRequest
  {
  public:
    AWS_SYNTHETICS_API UpdateCanaryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCanary"; }

    AWS_SYNTHETICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the canary that you want to update. To find the names of your
     * canaries, use <a
     * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_DescribeCanaries.html">DescribeCanaries</a>.</p>
     * <p>You cannot change the name of a canary that has already been created.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateCanaryRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    UpdateCanaryRequest& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
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
     * <code>logs:CreateLogStream</code> </p> </li> </ul>
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    UpdateCanaryRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the runtime version to use for the canary. For a list of valid
     * runtime versions and for more information about runtime versions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Library.html">
     * Canary Runtime Versions</a>.</p>
     */
    inline const Aws::String& GetRuntimeVersion() const { return m_runtimeVersion; }
    inline bool RuntimeVersionHasBeenSet() const { return m_runtimeVersionHasBeenSet; }
    template<typename RuntimeVersionT = Aws::String>
    void SetRuntimeVersion(RuntimeVersionT&& value) { m_runtimeVersionHasBeenSet = true; m_runtimeVersion = std::forward<RuntimeVersionT>(value); }
    template<typename RuntimeVersionT = Aws::String>
    UpdateCanaryRequest& WithRuntimeVersion(RuntimeVersionT&& value) { SetRuntimeVersion(std::forward<RuntimeVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains information about how often the canary is to run,
     * and when these runs are to stop.</p>
     */
    inline const CanaryScheduleInput& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = CanaryScheduleInput>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = CanaryScheduleInput>
    UpdateCanaryRequest& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the timeout value that is used for each individual
     * run of the canary.</p>  <p>Environment variable keys and values are
     * encrypted at rest using Amazon Web Services owned KMS keys. However, the
     * environment variables are not encrypted on the client side. Do not store
     * sensitive information in them.</p> 
     */
    inline const CanaryRunConfigInput& GetRunConfig() const { return m_runConfig; }
    inline bool RunConfigHasBeenSet() const { return m_runConfigHasBeenSet; }
    template<typename RunConfigT = CanaryRunConfigInput>
    void SetRunConfig(RunConfigT&& value) { m_runConfigHasBeenSet = true; m_runConfig = std::forward<RunConfigT>(value); }
    template<typename RunConfigT = CanaryRunConfigInput>
    UpdateCanaryRequest& WithRunConfig(RunConfigT&& value) { SetRunConfig(std::forward<RunConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to retain data about successful runs of this canary.</p>
     * <p>This setting affects the range of information returned by <a
     * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_GetCanaryRuns.html">GetCanaryRuns</a>,
     * as well as the range of information displayed in the Synthetics console. </p>
     */
    inline int GetSuccessRetentionPeriodInDays() const { return m_successRetentionPeriodInDays; }
    inline bool SuccessRetentionPeriodInDaysHasBeenSet() const { return m_successRetentionPeriodInDaysHasBeenSet; }
    inline void SetSuccessRetentionPeriodInDays(int value) { m_successRetentionPeriodInDaysHasBeenSet = true; m_successRetentionPeriodInDays = value; }
    inline UpdateCanaryRequest& WithSuccessRetentionPeriodInDays(int value) { SetSuccessRetentionPeriodInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to retain data about failed runs of this canary.</p>
     * <p>This setting affects the range of information returned by <a
     * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_GetCanaryRuns.html">GetCanaryRuns</a>,
     * as well as the range of information displayed in the Synthetics console. </p>
     */
    inline int GetFailureRetentionPeriodInDays() const { return m_failureRetentionPeriodInDays; }
    inline bool FailureRetentionPeriodInDaysHasBeenSet() const { return m_failureRetentionPeriodInDaysHasBeenSet; }
    inline void SetFailureRetentionPeriodInDays(int value) { m_failureRetentionPeriodInDaysHasBeenSet = true; m_failureRetentionPeriodInDays = value; }
    inline UpdateCanaryRequest& WithFailureRetentionPeriodInDays(int value) { SetFailureRetentionPeriodInDays(value); return *this;}
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
    UpdateCanaryRequest& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the screenshots to use as the baseline for comparisons during visual
     * monitoring comparisons during future runs of this canary. If you omit this
     * parameter, no changes are made to any baseline screenshots that the canary might
     * be using already.</p> <p>Visual monitoring is supported only on canaries running
     * the <b>syn-puppeteer-node-3.2</b> runtime or later. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Library_SyntheticsLogger_VisualTesting.html">
     * Visual monitoring</a> and <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Blueprints_VisualTesting.html">
     * Visual monitoring blueprint</a> </p>
     */
    inline const VisualReferenceInput& GetVisualReference() const { return m_visualReference; }
    inline bool VisualReferenceHasBeenSet() const { return m_visualReferenceHasBeenSet; }
    template<typename VisualReferenceT = VisualReferenceInput>
    void SetVisualReference(VisualReferenceT&& value) { m_visualReferenceHasBeenSet = true; m_visualReference = std::forward<VisualReferenceT>(value); }
    template<typename VisualReferenceT = VisualReferenceInput>
    UpdateCanaryRequest& WithVisualReference(VisualReferenceT&& value) { SetVisualReference(std::forward<VisualReferenceT>(value)); return *this;}
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
    UpdateCanaryRequest& WithArtifactS3Location(ArtifactS3LocationT&& value) { SetArtifactS3Location(std::forward<ArtifactS3LocationT>(value)); return *this;}
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
    UpdateCanaryRequest& WithArtifactConfig(ArtifactConfigT&& value) { SetArtifactConfig(std::forward<ArtifactConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to also delete the Lambda functions and layers used by this
     * canary when the canary is deleted.</p> <p>If the value of this parameter is
     * <code>OFF</code>, then the value of the <code>DeleteLambda</code> parameter of
     * the <a
     * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_DeleteCanary.html">DeleteCanary</a>
     * operation determines whether the Lambda functions and layers will be
     * deleted.</p>
     */
    inline ProvisionedResourceCleanupSetting GetProvisionedResourceCleanup() const { return m_provisionedResourceCleanup; }
    inline bool ProvisionedResourceCleanupHasBeenSet() const { return m_provisionedResourceCleanupHasBeenSet; }
    inline void SetProvisionedResourceCleanup(ProvisionedResourceCleanupSetting value) { m_provisionedResourceCleanupHasBeenSet = true; m_provisionedResourceCleanup = value; }
    inline UpdateCanaryRequest& WithProvisionedResourceCleanup(ProvisionedResourceCleanupSetting value) { SetProvisionedResourceCleanup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update the existing canary using the updated configurations from the DryRun
     * associated with the DryRunId.</p>  <p>When you use the
     * <code>dryRunId</code> field when updating a canary, the only other field you can
     * provide is the <code>Schedule</code>. Adding any other field will thrown an
     * exception.</p> 
     */
    inline const Aws::String& GetDryRunId() const { return m_dryRunId; }
    inline bool DryRunIdHasBeenSet() const { return m_dryRunIdHasBeenSet; }
    template<typename DryRunIdT = Aws::String>
    void SetDryRunId(DryRunIdT&& value) { m_dryRunIdHasBeenSet = true; m_dryRunId = std::forward<DryRunIdT>(value); }
    template<typename DryRunIdT = Aws::String>
    UpdateCanaryRequest& WithDryRunId(DryRunIdT&& value) { SetDryRunId(std::forward<DryRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of visual reference configurations for the canary, one for each
     * browser type that the canary is configured to run on. Visual references are used
     * for visual monitoring comparisons.</p> <p>
     * <code>syn-nodejs-puppeteer-11.0</code> and above, and
     * <code>syn-nodejs-playwright-3.0</code> and above, only supports
     * <code>visualReferences</code>. <code>visualReference</code> field is not
     * supported.</p> <p>Versions older than <code>syn-nodejs-puppeteer-11.0</code>
     * supports both <code>visualReference</code> and <code>visualReferences</code> for
     * backward compatibility. It is recommended to use <code>visualReferences</code>
     * for consistency and future compatibility.</p> <p>For multibrowser visual
     * monitoring, you can update the baseline for all configured browsers in a single
     * update call by specifying a list of VisualReference objects, one per browser.
     * Each VisualReference object maps to a specific browser configuration, allowing
     * you to manage visual baselines for multiple browsers simultaneously.</p> <p>For
     * single configuration canaries using Chrome browser (default browser), use
     * visualReferences for <code>syn-nodejs-puppeteer-11.0</code> and above, and
     * <code>syn-nodejs-playwright-3.0</code> and above canaries. The browserType in
     * the visualReference object is not mandatory.</p>
     */
    inline const Aws::Vector<VisualReferenceInput>& GetVisualReferences() const { return m_visualReferences; }
    inline bool VisualReferencesHasBeenSet() const { return m_visualReferencesHasBeenSet; }
    template<typename VisualReferencesT = Aws::Vector<VisualReferenceInput>>
    void SetVisualReferences(VisualReferencesT&& value) { m_visualReferencesHasBeenSet = true; m_visualReferences = std::forward<VisualReferencesT>(value); }
    template<typename VisualReferencesT = Aws::Vector<VisualReferenceInput>>
    UpdateCanaryRequest& WithVisualReferences(VisualReferencesT&& value) { SetVisualReferences(std::forward<VisualReferencesT>(value)); return *this;}
    template<typename VisualReferencesT = VisualReferenceInput>
    UpdateCanaryRequest& AddVisualReferences(VisualReferencesT&& value) { m_visualReferencesHasBeenSet = true; m_visualReferences.emplace_back(std::forward<VisualReferencesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A structure that specifies the browser type to use for a canary run.
     * CloudWatch Synthetics supports running canaries on both <code>CHROME</code> and
     * <code>FIREFOX</code> browsers.</p>  <p>If not specified,
     * <code>browserConfigs</code> defaults to Chrome.</p> 
     */
    inline const Aws::Vector<BrowserConfig>& GetBrowserConfigs() const { return m_browserConfigs; }
    inline bool BrowserConfigsHasBeenSet() const { return m_browserConfigsHasBeenSet; }
    template<typename BrowserConfigsT = Aws::Vector<BrowserConfig>>
    void SetBrowserConfigs(BrowserConfigsT&& value) { m_browserConfigsHasBeenSet = true; m_browserConfigs = std::forward<BrowserConfigsT>(value); }
    template<typename BrowserConfigsT = Aws::Vector<BrowserConfig>>
    UpdateCanaryRequest& WithBrowserConfigs(BrowserConfigsT&& value) { SetBrowserConfigs(std::forward<BrowserConfigsT>(value)); return *this;}
    template<typename BrowserConfigsT = BrowserConfig>
    UpdateCanaryRequest& AddBrowserConfigs(BrowserConfigsT&& value) { m_browserConfigsHasBeenSet = true; m_browserConfigs.emplace_back(std::forward<BrowserConfigsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CanaryCodeInput m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    Aws::String m_runtimeVersion;
    bool m_runtimeVersionHasBeenSet = false;

    CanaryScheduleInput m_schedule;
    bool m_scheduleHasBeenSet = false;

    CanaryRunConfigInput m_runConfig;
    bool m_runConfigHasBeenSet = false;

    int m_successRetentionPeriodInDays{0};
    bool m_successRetentionPeriodInDaysHasBeenSet = false;

    int m_failureRetentionPeriodInDays{0};
    bool m_failureRetentionPeriodInDaysHasBeenSet = false;

    VpcConfigInput m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    VisualReferenceInput m_visualReference;
    bool m_visualReferenceHasBeenSet = false;

    Aws::String m_artifactS3Location;
    bool m_artifactS3LocationHasBeenSet = false;

    ArtifactConfigInput m_artifactConfig;
    bool m_artifactConfigHasBeenSet = false;

    ProvisionedResourceCleanupSetting m_provisionedResourceCleanup{ProvisionedResourceCleanupSetting::NOT_SET};
    bool m_provisionedResourceCleanupHasBeenSet = false;

    Aws::String m_dryRunId;
    bool m_dryRunIdHasBeenSet = false;

    Aws::Vector<VisualReferenceInput> m_visualReferences;
    bool m_visualReferencesHasBeenSet = false;

    Aws::Vector<BrowserConfig> m_browserConfigs;
    bool m_browserConfigsHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
