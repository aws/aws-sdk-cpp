/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/SyntheticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/model/CanaryCodeInput.h>
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
  class StartCanaryDryRunRequest : public SyntheticsRequest
  {
  public:
    AWS_SYNTHETICS_API StartCanaryDryRunRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartCanaryDryRun"; }

    AWS_SYNTHETICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the canary that you want to dry run. To find canary names, use <a
     * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_DescribeCanaries.html">DescribeCanaries</a>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StartCanaryDryRunRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CanaryCodeInput& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = CanaryCodeInput>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = CanaryCodeInput>
    StartCanaryDryRunRequest& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
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
    StartCanaryDryRunRequest& WithRuntimeVersion(RuntimeVersionT&& value) { SetRuntimeVersion(std::forward<RuntimeVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CanaryRunConfigInput& GetRunConfig() const { return m_runConfig; }
    inline bool RunConfigHasBeenSet() const { return m_runConfigHasBeenSet; }
    template<typename RunConfigT = CanaryRunConfigInput>
    void SetRunConfig(RunConfigT&& value) { m_runConfigHasBeenSet = true; m_runConfig = std::forward<RunConfigT>(value); }
    template<typename RunConfigT = CanaryRunConfigInput>
    StartCanaryDryRunRequest& WithRunConfig(RunConfigT&& value) { SetRunConfig(std::forward<RunConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VpcConfigInput& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = VpcConfigInput>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfigInput>
    StartCanaryDryRunRequest& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role to be used to run the canary. This role must already
     * exist, and must include <code>lambda.amazonaws.com</code> as a principal in the
     * trust policy. The role must also have the following permissions:</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    StartCanaryDryRunRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
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
    inline StartCanaryDryRunRequest& WithSuccessRetentionPeriodInDays(int value) { SetSuccessRetentionPeriodInDays(value); return *this;}
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
    inline StartCanaryDryRunRequest& WithFailureRetentionPeriodInDays(int value) { SetFailureRetentionPeriodInDays(value); return *this;}
    ///@}

    ///@{
    
    inline const VisualReferenceInput& GetVisualReference() const { return m_visualReference; }
    inline bool VisualReferenceHasBeenSet() const { return m_visualReferenceHasBeenSet; }
    template<typename VisualReferenceT = VisualReferenceInput>
    void SetVisualReference(VisualReferenceT&& value) { m_visualReferenceHasBeenSet = true; m_visualReference = std::forward<VisualReferenceT>(value); }
    template<typename VisualReferenceT = VisualReferenceInput>
    StartCanaryDryRunRequest& WithVisualReference(VisualReferenceT&& value) { SetVisualReference(std::forward<VisualReferenceT>(value)); return *this;}
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
    StartCanaryDryRunRequest& WithArtifactS3Location(ArtifactS3LocationT&& value) { SetArtifactS3Location(std::forward<ArtifactS3LocationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ArtifactConfigInput& GetArtifactConfig() const { return m_artifactConfig; }
    inline bool ArtifactConfigHasBeenSet() const { return m_artifactConfigHasBeenSet; }
    template<typename ArtifactConfigT = ArtifactConfigInput>
    void SetArtifactConfig(ArtifactConfigT&& value) { m_artifactConfigHasBeenSet = true; m_artifactConfig = std::forward<ArtifactConfigT>(value); }
    template<typename ArtifactConfigT = ArtifactConfigInput>
    StartCanaryDryRunRequest& WithArtifactConfig(ArtifactConfigT&& value) { SetArtifactConfig(std::forward<ArtifactConfigT>(value)); return *this;}
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
    inline StartCanaryDryRunRequest& WithProvisionedResourceCleanup(ProvisionedResourceCleanupSetting value) { SetProvisionedResourceCleanup(value); return *this;}
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
    StartCanaryDryRunRequest& WithBrowserConfigs(BrowserConfigsT&& value) { SetBrowserConfigs(std::forward<BrowserConfigsT>(value)); return *this;}
    template<typename BrowserConfigsT = BrowserConfig>
    StartCanaryDryRunRequest& AddBrowserConfigs(BrowserConfigsT&& value) { m_browserConfigsHasBeenSet = true; m_browserConfigs.emplace_back(std::forward<BrowserConfigsT>(value)); return *this; }
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
     * for consistency and future compatibility.</p>
     */
    inline const Aws::Vector<VisualReferenceInput>& GetVisualReferences() const { return m_visualReferences; }
    inline bool VisualReferencesHasBeenSet() const { return m_visualReferencesHasBeenSet; }
    template<typename VisualReferencesT = Aws::Vector<VisualReferenceInput>>
    void SetVisualReferences(VisualReferencesT&& value) { m_visualReferencesHasBeenSet = true; m_visualReferences = std::forward<VisualReferencesT>(value); }
    template<typename VisualReferencesT = Aws::Vector<VisualReferenceInput>>
    StartCanaryDryRunRequest& WithVisualReferences(VisualReferencesT&& value) { SetVisualReferences(std::forward<VisualReferencesT>(value)); return *this;}
    template<typename VisualReferencesT = VisualReferenceInput>
    StartCanaryDryRunRequest& AddVisualReferences(VisualReferencesT&& value) { m_visualReferencesHasBeenSet = true; m_visualReferences.emplace_back(std::forward<VisualReferencesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CanaryCodeInput m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_runtimeVersion;
    bool m_runtimeVersionHasBeenSet = false;

    CanaryRunConfigInput m_runConfig;
    bool m_runConfigHasBeenSet = false;

    VpcConfigInput m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    int m_successRetentionPeriodInDays{0};
    bool m_successRetentionPeriodInDaysHasBeenSet = false;

    int m_failureRetentionPeriodInDays{0};
    bool m_failureRetentionPeriodInDaysHasBeenSet = false;

    VisualReferenceInput m_visualReference;
    bool m_visualReferenceHasBeenSet = false;

    Aws::String m_artifactS3Location;
    bool m_artifactS3LocationHasBeenSet = false;

    ArtifactConfigInput m_artifactConfig;
    bool m_artifactConfigHasBeenSet = false;

    ProvisionedResourceCleanupSetting m_provisionedResourceCleanup{ProvisionedResourceCleanupSetting::NOT_SET};
    bool m_provisionedResourceCleanupHasBeenSet = false;

    Aws::Vector<BrowserConfig> m_browserConfigs;
    bool m_browserConfigsHasBeenSet = false;

    Aws::Vector<VisualReferenceInput> m_visualReferences;
    bool m_visualReferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
