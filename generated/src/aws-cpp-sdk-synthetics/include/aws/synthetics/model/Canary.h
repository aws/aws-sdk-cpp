/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/model/CanaryCodeOutput.h>
#include <aws/synthetics/model/CanaryScheduleOutput.h>
#include <aws/synthetics/model/CanaryRunConfigOutput.h>
#include <aws/synthetics/model/CanaryStatus.h>
#include <aws/synthetics/model/CanaryTimeline.h>
#include <aws/synthetics/model/VpcConfigOutput.h>
#include <aws/synthetics/model/VisualReferenceOutput.h>
#include <aws/synthetics/model/ProvisionedResourceCleanupSetting.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/synthetics/model/ArtifactConfigOutput.h>
#include <aws/synthetics/model/DryRunConfigOutput.h>
#include <aws/synthetics/model/BrowserConfig.h>
#include <aws/synthetics/model/EngineConfig.h>
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
namespace Synthetics
{
namespace Model
{

  /**
   * <p>This structure contains all information about one canary in your
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/Canary">AWS
   * API Reference</a></p>
   */
  class Canary
  {
  public:
    AWS_SYNTHETICS_API Canary() = default;
    AWS_SYNTHETICS_API Canary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Canary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of this canary.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Canary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the canary.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Canary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CanaryCodeOutput& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = CanaryCodeOutput>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = CanaryCodeOutput>
    Canary& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role used to run the canary. This role must include
     * <code>lambda.amazonaws.com</code> as a principal in the trust policy.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    Canary& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains information about how often the canary is to run,
     * and when these runs are to stop.</p>
     */
    inline const CanaryScheduleOutput& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = CanaryScheduleOutput>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = CanaryScheduleOutput>
    Canary& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CanaryRunConfigOutput& GetRunConfig() const { return m_runConfig; }
    inline bool RunConfigHasBeenSet() const { return m_runConfigHasBeenSet; }
    template<typename RunConfigT = CanaryRunConfigOutput>
    void SetRunConfig(RunConfigT&& value) { m_runConfigHasBeenSet = true; m_runConfig = std::forward<RunConfigT>(value); }
    template<typename RunConfigT = CanaryRunConfigOutput>
    Canary& WithRunConfig(RunConfigT&& value) { SetRunConfig(std::forward<RunConfigT>(value)); return *this;}
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
    inline Canary& WithSuccessRetentionPeriodInDays(int value) { SetSuccessRetentionPeriodInDays(value); return *this;}
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
    inline Canary& WithFailureRetentionPeriodInDays(int value) { SetFailureRetentionPeriodInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains information about the canary's status.</p>
     */
    inline const CanaryStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = CanaryStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = CanaryStatus>
    Canary& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains information about when the canary was created,
     * modified, and most recently run.</p>
     */
    inline const CanaryTimeline& GetTimeline() const { return m_timeline; }
    inline bool TimelineHasBeenSet() const { return m_timelineHasBeenSet; }
    template<typename TimelineT = CanaryTimeline>
    void SetTimeline(TimelineT&& value) { m_timelineHasBeenSet = true; m_timeline = std::forward<TimelineT>(value); }
    template<typename TimelineT = CanaryTimeline>
    Canary& WithTimeline(TimelineT&& value) { SetTimeline(std::forward<TimelineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location in Amazon S3 where Synthetics stores artifacts from the runs of
     * this canary. Artifacts include the log file, screenshots, and HAR files.</p>
     */
    inline const Aws::String& GetArtifactS3Location() const { return m_artifactS3Location; }
    inline bool ArtifactS3LocationHasBeenSet() const { return m_artifactS3LocationHasBeenSet; }
    template<typename ArtifactS3LocationT = Aws::String>
    void SetArtifactS3Location(ArtifactS3LocationT&& value) { m_artifactS3LocationHasBeenSet = true; m_artifactS3Location = std::forward<ArtifactS3LocationT>(value); }
    template<typename ArtifactS3LocationT = Aws::String>
    Canary& WithArtifactS3Location(ArtifactS3LocationT&& value) { SetArtifactS3Location(std::forward<ArtifactS3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Lambda function that is used as your canary's engine. For more
     * information about Lambda ARN format, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-api-permissions-ref.html">Resources
     * and Conditions for Lambda Actions</a>.</p>
     */
    inline const Aws::String& GetEngineArn() const { return m_engineArn; }
    inline bool EngineArnHasBeenSet() const { return m_engineArnHasBeenSet; }
    template<typename EngineArnT = Aws::String>
    void SetEngineArn(EngineArnT&& value) { m_engineArnHasBeenSet = true; m_engineArn = std::forward<EngineArnT>(value); }
    template<typename EngineArnT = Aws::String>
    Canary& WithEngineArn(EngineArnT&& value) { SetEngineArn(std::forward<EngineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the runtime version to use for the canary. For more information
     * about runtime versions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Library.html">
     * Canary Runtime Versions</a>.</p>
     */
    inline const Aws::String& GetRuntimeVersion() const { return m_runtimeVersion; }
    inline bool RuntimeVersionHasBeenSet() const { return m_runtimeVersionHasBeenSet; }
    template<typename RuntimeVersionT = Aws::String>
    void SetRuntimeVersion(RuntimeVersionT&& value) { m_runtimeVersionHasBeenSet = true; m_runtimeVersion = std::forward<RuntimeVersionT>(value); }
    template<typename RuntimeVersionT = Aws::String>
    Canary& WithRuntimeVersion(RuntimeVersionT&& value) { SetRuntimeVersion(std::forward<RuntimeVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VpcConfigOutput& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = VpcConfigOutput>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfigOutput>
    Canary& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this canary performs visual monitoring by comparing screenshots, this
     * structure contains the ID of the canary run to use as the baseline for
     * screenshots, and the coordinates of any parts of the screen to ignore during the
     * visual monitoring comparison.</p>
     */
    inline const VisualReferenceOutput& GetVisualReference() const { return m_visualReference; }
    inline bool VisualReferenceHasBeenSet() const { return m_visualReferenceHasBeenSet; }
    template<typename VisualReferenceT = VisualReferenceOutput>
    void SetVisualReference(VisualReferenceT&& value) { m_visualReferenceHasBeenSet = true; m_visualReference = std::forward<VisualReferenceT>(value); }
    template<typename VisualReferenceT = VisualReferenceOutput>
    Canary& WithVisualReference(VisualReferenceT&& value) { SetVisualReference(std::forward<VisualReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to also delete the Lambda functions and layers used by this
     * canary when the canary is deleted. If it is <code>AUTOMATIC</code>, the Lambda
     * functions and layers will be deleted when the canary is deleted.</p> <p>If the
     * value of this parameter is <code>OFF</code>, then the value of the
     * <code>DeleteLambda</code> parameter of the <a
     * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_DeleteCanary.html">DeleteCanary</a>
     * operation determines whether the Lambda functions and layers will be
     * deleted.</p>
     */
    inline ProvisionedResourceCleanupSetting GetProvisionedResourceCleanup() const { return m_provisionedResourceCleanup; }
    inline bool ProvisionedResourceCleanupHasBeenSet() const { return m_provisionedResourceCleanupHasBeenSet; }
    inline void SetProvisionedResourceCleanup(ProvisionedResourceCleanupSetting value) { m_provisionedResourceCleanupHasBeenSet = true; m_provisionedResourceCleanup = value; }
    inline Canary& WithProvisionedResourceCleanup(ProvisionedResourceCleanupSetting value) { SetProvisionedResourceCleanup(value); return *this;}
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
    Canary& WithBrowserConfigs(BrowserConfigsT&& value) { SetBrowserConfigs(std::forward<BrowserConfigsT>(value)); return *this;}
    template<typename BrowserConfigsT = BrowserConfig>
    Canary& AddBrowserConfigs(BrowserConfigsT&& value) { m_browserConfigsHasBeenSet = true; m_browserConfigs.emplace_back(std::forward<BrowserConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of engine configurations for the canary, one for each browser type
     * that the canary is configured to run on.</p> <p>All runtime versions
     * <code>syn-nodejs-puppeteer-11.0</code> and above, and
     * <code>syn-nodejs-playwright-3.0</code> and above, use <code>engineConfigs</code>
     * only. You can no longer use <code>engineArn</code> in these versions.</p>
     * <p>Runtime versions older than <code>syn-nodejs-puppeteer-11.0</code> and
     * <code>syn-nodejs-playwright-3.0</code> continue to support
     * <code>engineArn</code> to ensure backward compatibility.</p>
     */
    inline const Aws::Vector<EngineConfig>& GetEngineConfigs() const { return m_engineConfigs; }
    inline bool EngineConfigsHasBeenSet() const { return m_engineConfigsHasBeenSet; }
    template<typename EngineConfigsT = Aws::Vector<EngineConfig>>
    void SetEngineConfigs(EngineConfigsT&& value) { m_engineConfigsHasBeenSet = true; m_engineConfigs = std::forward<EngineConfigsT>(value); }
    template<typename EngineConfigsT = Aws::Vector<EngineConfig>>
    Canary& WithEngineConfigs(EngineConfigsT&& value) { SetEngineConfigs(std::forward<EngineConfigsT>(value)); return *this;}
    template<typename EngineConfigsT = EngineConfig>
    Canary& AddEngineConfigs(EngineConfigsT&& value) { m_engineConfigsHasBeenSet = true; m_engineConfigs.emplace_back(std::forward<EngineConfigsT>(value)); return *this; }
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
    inline const Aws::Vector<VisualReferenceOutput>& GetVisualReferences() const { return m_visualReferences; }
    inline bool VisualReferencesHasBeenSet() const { return m_visualReferencesHasBeenSet; }
    template<typename VisualReferencesT = Aws::Vector<VisualReferenceOutput>>
    void SetVisualReferences(VisualReferencesT&& value) { m_visualReferencesHasBeenSet = true; m_visualReferences = std::forward<VisualReferencesT>(value); }
    template<typename VisualReferencesT = Aws::Vector<VisualReferenceOutput>>
    Canary& WithVisualReferences(VisualReferencesT&& value) { SetVisualReferences(std::forward<VisualReferencesT>(value)); return *this;}
    template<typename VisualReferencesT = VisualReferenceOutput>
    Canary& AddVisualReferences(VisualReferencesT&& value) { m_visualReferencesHasBeenSet = true; m_visualReferences.emplace_back(std::forward<VisualReferencesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of key-value pairs that are associated with the canary.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Canary& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Canary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A structure that contains the configuration for canary artifacts, including
     * the encryption-at-rest settings for artifacts that the canary uploads to Amazon
     * S3.</p>
     */
    inline const ArtifactConfigOutput& GetArtifactConfig() const { return m_artifactConfig; }
    inline bool ArtifactConfigHasBeenSet() const { return m_artifactConfigHasBeenSet; }
    template<typename ArtifactConfigT = ArtifactConfigOutput>
    void SetArtifactConfig(ArtifactConfigT&& value) { m_artifactConfigHasBeenSet = true; m_artifactConfig = std::forward<ArtifactConfigT>(value); }
    template<typename ArtifactConfigT = ArtifactConfigOutput>
    Canary& WithArtifactConfig(ArtifactConfigT&& value) { SetArtifactConfig(std::forward<ArtifactConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the dry run configurations for a canary.</p>
     */
    inline const DryRunConfigOutput& GetDryRunConfig() const { return m_dryRunConfig; }
    inline bool DryRunConfigHasBeenSet() const { return m_dryRunConfigHasBeenSet; }
    template<typename DryRunConfigT = DryRunConfigOutput>
    void SetDryRunConfig(DryRunConfigT&& value) { m_dryRunConfigHasBeenSet = true; m_dryRunConfig = std::forward<DryRunConfigT>(value); }
    template<typename DryRunConfigT = DryRunConfigOutput>
    Canary& WithDryRunConfig(DryRunConfigT&& value) { SetDryRunConfig(std::forward<DryRunConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CanaryCodeOutput m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    CanaryScheduleOutput m_schedule;
    bool m_scheduleHasBeenSet = false;

    CanaryRunConfigOutput m_runConfig;
    bool m_runConfigHasBeenSet = false;

    int m_successRetentionPeriodInDays{0};
    bool m_successRetentionPeriodInDaysHasBeenSet = false;

    int m_failureRetentionPeriodInDays{0};
    bool m_failureRetentionPeriodInDaysHasBeenSet = false;

    CanaryStatus m_status;
    bool m_statusHasBeenSet = false;

    CanaryTimeline m_timeline;
    bool m_timelineHasBeenSet = false;

    Aws::String m_artifactS3Location;
    bool m_artifactS3LocationHasBeenSet = false;

    Aws::String m_engineArn;
    bool m_engineArnHasBeenSet = false;

    Aws::String m_runtimeVersion;
    bool m_runtimeVersionHasBeenSet = false;

    VpcConfigOutput m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    VisualReferenceOutput m_visualReference;
    bool m_visualReferenceHasBeenSet = false;

    ProvisionedResourceCleanupSetting m_provisionedResourceCleanup{ProvisionedResourceCleanupSetting::NOT_SET};
    bool m_provisionedResourceCleanupHasBeenSet = false;

    Aws::Vector<BrowserConfig> m_browserConfigs;
    bool m_browserConfigsHasBeenSet = false;

    Aws::Vector<EngineConfig> m_engineConfigs;
    bool m_engineConfigsHasBeenSet = false;

    Aws::Vector<VisualReferenceOutput> m_visualReferences;
    bool m_visualReferencesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    ArtifactConfigOutput m_artifactConfig;
    bool m_artifactConfigHasBeenSet = false;

    DryRunConfigOutput m_dryRunConfig;
    bool m_dryRunConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
