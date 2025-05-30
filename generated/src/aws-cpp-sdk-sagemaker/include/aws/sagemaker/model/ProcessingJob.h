﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ProcessingOutputConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ProcessingResources.h>
#include <aws/sagemaker/model/ProcessingStoppingCondition.h>
#include <aws/sagemaker/model/AppSpecification.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/NetworkConfig.h>
#include <aws/sagemaker/model/ExperimentConfig.h>
#include <aws/sagemaker/model/ProcessingJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ProcessingInput.h>
#include <aws/sagemaker/model/Tag.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>An Amazon SageMaker processing job that is used to analyze data and evaluate
   * models. For more information, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/processing-job.html">Process
   * Data and Evaluate Models</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProcessingJob">AWS
   * API Reference</a></p>
   */
  class ProcessingJob
  {
  public:
    AWS_SAGEMAKER_API ProcessingJob() = default;
    AWS_SAGEMAKER_API ProcessingJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProcessingJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of input configurations for the processing job.</p>
     */
    inline const Aws::Vector<ProcessingInput>& GetProcessingInputs() const { return m_processingInputs; }
    inline bool ProcessingInputsHasBeenSet() const { return m_processingInputsHasBeenSet; }
    template<typename ProcessingInputsT = Aws::Vector<ProcessingInput>>
    void SetProcessingInputs(ProcessingInputsT&& value) { m_processingInputsHasBeenSet = true; m_processingInputs = std::forward<ProcessingInputsT>(value); }
    template<typename ProcessingInputsT = Aws::Vector<ProcessingInput>>
    ProcessingJob& WithProcessingInputs(ProcessingInputsT&& value) { SetProcessingInputs(std::forward<ProcessingInputsT>(value)); return *this;}
    template<typename ProcessingInputsT = ProcessingInput>
    ProcessingJob& AddProcessingInputs(ProcessingInputsT&& value) { m_processingInputsHasBeenSet = true; m_processingInputs.emplace_back(std::forward<ProcessingInputsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ProcessingOutputConfig& GetProcessingOutputConfig() const { return m_processingOutputConfig; }
    inline bool ProcessingOutputConfigHasBeenSet() const { return m_processingOutputConfigHasBeenSet; }
    template<typename ProcessingOutputConfigT = ProcessingOutputConfig>
    void SetProcessingOutputConfig(ProcessingOutputConfigT&& value) { m_processingOutputConfigHasBeenSet = true; m_processingOutputConfig = std::forward<ProcessingOutputConfigT>(value); }
    template<typename ProcessingOutputConfigT = ProcessingOutputConfig>
    ProcessingJob& WithProcessingOutputConfig(ProcessingOutputConfigT&& value) { SetProcessingOutputConfig(std::forward<ProcessingOutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the processing job.</p>
     */
    inline const Aws::String& GetProcessingJobName() const { return m_processingJobName; }
    inline bool ProcessingJobNameHasBeenSet() const { return m_processingJobNameHasBeenSet; }
    template<typename ProcessingJobNameT = Aws::String>
    void SetProcessingJobName(ProcessingJobNameT&& value) { m_processingJobNameHasBeenSet = true; m_processingJobName = std::forward<ProcessingJobNameT>(value); }
    template<typename ProcessingJobNameT = Aws::String>
    ProcessingJob& WithProcessingJobName(ProcessingJobNameT&& value) { SetProcessingJobName(std::forward<ProcessingJobNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ProcessingResources& GetProcessingResources() const { return m_processingResources; }
    inline bool ProcessingResourcesHasBeenSet() const { return m_processingResourcesHasBeenSet; }
    template<typename ProcessingResourcesT = ProcessingResources>
    void SetProcessingResources(ProcessingResourcesT&& value) { m_processingResourcesHasBeenSet = true; m_processingResources = std::forward<ProcessingResourcesT>(value); }
    template<typename ProcessingResourcesT = ProcessingResources>
    ProcessingJob& WithProcessingResources(ProcessingResourcesT&& value) { SetProcessingResources(std::forward<ProcessingResourcesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ProcessingStoppingCondition& GetStoppingCondition() const { return m_stoppingCondition; }
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }
    template<typename StoppingConditionT = ProcessingStoppingCondition>
    void SetStoppingCondition(StoppingConditionT&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::forward<StoppingConditionT>(value); }
    template<typename StoppingConditionT = ProcessingStoppingCondition>
    ProcessingJob& WithStoppingCondition(StoppingConditionT&& value) { SetStoppingCondition(std::forward<StoppingConditionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AppSpecification& GetAppSpecification() const { return m_appSpecification; }
    inline bool AppSpecificationHasBeenSet() const { return m_appSpecificationHasBeenSet; }
    template<typename AppSpecificationT = AppSpecification>
    void SetAppSpecification(AppSpecificationT&& value) { m_appSpecificationHasBeenSet = true; m_appSpecification = std::forward<AppSpecificationT>(value); }
    template<typename AppSpecificationT = AppSpecification>
    ProcessingJob& WithAppSpecification(AppSpecificationT&& value) { SetAppSpecification(std::forward<AppSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    ProcessingJob& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    template<typename EnvironmentKeyT = Aws::String, typename EnvironmentValueT = Aws::String>
    ProcessingJob& AddEnvironment(EnvironmentKeyT&& key, EnvironmentValueT&& value) {
      m_environmentHasBeenSet = true; m_environment.emplace(std::forward<EnvironmentKeyT>(key), std::forward<EnvironmentValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const NetworkConfig& GetNetworkConfig() const { return m_networkConfig; }
    inline bool NetworkConfigHasBeenSet() const { return m_networkConfigHasBeenSet; }
    template<typename NetworkConfigT = NetworkConfig>
    void SetNetworkConfig(NetworkConfigT&& value) { m_networkConfigHasBeenSet = true; m_networkConfig = std::forward<NetworkConfigT>(value); }
    template<typename NetworkConfigT = NetworkConfig>
    ProcessingJob& WithNetworkConfig(NetworkConfigT&& value) { SetNetworkConfig(std::forward<NetworkConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role used to create the processing job.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    ProcessingJob& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ExperimentConfig& GetExperimentConfig() const { return m_experimentConfig; }
    inline bool ExperimentConfigHasBeenSet() const { return m_experimentConfigHasBeenSet; }
    template<typename ExperimentConfigT = ExperimentConfig>
    void SetExperimentConfig(ExperimentConfigT&& value) { m_experimentConfigHasBeenSet = true; m_experimentConfig = std::forward<ExperimentConfigT>(value); }
    template<typename ExperimentConfigT = ExperimentConfig>
    ProcessingJob& WithExperimentConfig(ExperimentConfigT&& value) { SetExperimentConfig(std::forward<ExperimentConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the processing job.</p>
     */
    inline const Aws::String& GetProcessingJobArn() const { return m_processingJobArn; }
    inline bool ProcessingJobArnHasBeenSet() const { return m_processingJobArnHasBeenSet; }
    template<typename ProcessingJobArnT = Aws::String>
    void SetProcessingJobArn(ProcessingJobArnT&& value) { m_processingJobArnHasBeenSet = true; m_processingJobArn = std::forward<ProcessingJobArnT>(value); }
    template<typename ProcessingJobArnT = Aws::String>
    ProcessingJob& WithProcessingJobArn(ProcessingJobArnT&& value) { SetProcessingJobArn(std::forward<ProcessingJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the processing job.</p>
     */
    inline ProcessingJobStatus GetProcessingJobStatus() const { return m_processingJobStatus; }
    inline bool ProcessingJobStatusHasBeenSet() const { return m_processingJobStatusHasBeenSet; }
    inline void SetProcessingJobStatus(ProcessingJobStatus value) { m_processingJobStatusHasBeenSet = true; m_processingJobStatus = value; }
    inline ProcessingJob& WithProcessingJobStatus(ProcessingJobStatus value) { SetProcessingJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string, up to one KB in size, that contains metadata from the processing
     * container when the processing job exits.</p>
     */
    inline const Aws::String& GetExitMessage() const { return m_exitMessage; }
    inline bool ExitMessageHasBeenSet() const { return m_exitMessageHasBeenSet; }
    template<typename ExitMessageT = Aws::String>
    void SetExitMessage(ExitMessageT&& value) { m_exitMessageHasBeenSet = true; m_exitMessage = std::forward<ExitMessageT>(value); }
    template<typename ExitMessageT = Aws::String>
    ProcessingJob& WithExitMessage(ExitMessageT&& value) { SetExitMessage(std::forward<ExitMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string, up to one KB in size, that contains the reason a processing job
     * failed, if it failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    ProcessingJob& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the processing job ended.</p>
     */
    inline const Aws::Utils::DateTime& GetProcessingEndTime() const { return m_processingEndTime; }
    inline bool ProcessingEndTimeHasBeenSet() const { return m_processingEndTimeHasBeenSet; }
    template<typename ProcessingEndTimeT = Aws::Utils::DateTime>
    void SetProcessingEndTime(ProcessingEndTimeT&& value) { m_processingEndTimeHasBeenSet = true; m_processingEndTime = std::forward<ProcessingEndTimeT>(value); }
    template<typename ProcessingEndTimeT = Aws::Utils::DateTime>
    ProcessingJob& WithProcessingEndTime(ProcessingEndTimeT&& value) { SetProcessingEndTime(std::forward<ProcessingEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the processing job started.</p>
     */
    inline const Aws::Utils::DateTime& GetProcessingStartTime() const { return m_processingStartTime; }
    inline bool ProcessingStartTimeHasBeenSet() const { return m_processingStartTimeHasBeenSet; }
    template<typename ProcessingStartTimeT = Aws::Utils::DateTime>
    void SetProcessingStartTime(ProcessingStartTimeT&& value) { m_processingStartTimeHasBeenSet = true; m_processingStartTime = std::forward<ProcessingStartTimeT>(value); }
    template<typename ProcessingStartTimeT = Aws::Utils::DateTime>
    ProcessingJob& WithProcessingStartTime(ProcessingStartTimeT&& value) { SetProcessingStartTime(std::forward<ProcessingStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the processing job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    ProcessingJob& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the processing job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ProcessingJob& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a monitoring schedule for an endpoint associated with this
     * processing job.</p>
     */
    inline const Aws::String& GetMonitoringScheduleArn() const { return m_monitoringScheduleArn; }
    inline bool MonitoringScheduleArnHasBeenSet() const { return m_monitoringScheduleArnHasBeenSet; }
    template<typename MonitoringScheduleArnT = Aws::String>
    void SetMonitoringScheduleArn(MonitoringScheduleArnT&& value) { m_monitoringScheduleArnHasBeenSet = true; m_monitoringScheduleArn = std::forward<MonitoringScheduleArnT>(value); }
    template<typename MonitoringScheduleArnT = Aws::String>
    ProcessingJob& WithMonitoringScheduleArn(MonitoringScheduleArnT&& value) { SetMonitoringScheduleArn(std::forward<MonitoringScheduleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AutoML job associated with this
     * processing job.</p>
     */
    inline const Aws::String& GetAutoMLJobArn() const { return m_autoMLJobArn; }
    inline bool AutoMLJobArnHasBeenSet() const { return m_autoMLJobArnHasBeenSet; }
    template<typename AutoMLJobArnT = Aws::String>
    void SetAutoMLJobArn(AutoMLJobArnT&& value) { m_autoMLJobArnHasBeenSet = true; m_autoMLJobArn = std::forward<AutoMLJobArnT>(value); }
    template<typename AutoMLJobArnT = Aws::String>
    ProcessingJob& WithAutoMLJobArn(AutoMLJobArnT&& value) { SetAutoMLJobArn(std::forward<AutoMLJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the training job associated with this processing job.</p>
     */
    inline const Aws::String& GetTrainingJobArn() const { return m_trainingJobArn; }
    inline bool TrainingJobArnHasBeenSet() const { return m_trainingJobArnHasBeenSet; }
    template<typename TrainingJobArnT = Aws::String>
    void SetTrainingJobArn(TrainingJobArnT&& value) { m_trainingJobArnHasBeenSet = true; m_trainingJobArn = std::forward<TrainingJobArnT>(value); }
    template<typename TrainingJobArnT = Aws::String>
    ProcessingJob& WithTrainingJobArn(TrainingJobArnT&& value) { SetTrainingJobArn(std::forward<TrainingJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ProcessingJob& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ProcessingJob& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ProcessingInput> m_processingInputs;
    bool m_processingInputsHasBeenSet = false;

    ProcessingOutputConfig m_processingOutputConfig;
    bool m_processingOutputConfigHasBeenSet = false;

    Aws::String m_processingJobName;
    bool m_processingJobNameHasBeenSet = false;

    ProcessingResources m_processingResources;
    bool m_processingResourcesHasBeenSet = false;

    ProcessingStoppingCondition m_stoppingCondition;
    bool m_stoppingConditionHasBeenSet = false;

    AppSpecification m_appSpecification;
    bool m_appSpecificationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet = false;

    NetworkConfig m_networkConfig;
    bool m_networkConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    ExperimentConfig m_experimentConfig;
    bool m_experimentConfigHasBeenSet = false;

    Aws::String m_processingJobArn;
    bool m_processingJobArnHasBeenSet = false;

    ProcessingJobStatus m_processingJobStatus{ProcessingJobStatus::NOT_SET};
    bool m_processingJobStatusHasBeenSet = false;

    Aws::String m_exitMessage;
    bool m_exitMessageHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Utils::DateTime m_processingEndTime{};
    bool m_processingEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_processingStartTime{};
    bool m_processingStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_monitoringScheduleArn;
    bool m_monitoringScheduleArnHasBeenSet = false;

    Aws::String m_autoMLJobArn;
    bool m_autoMLJobArnHasBeenSet = false;

    Aws::String m_trainingJobArn;
    bool m_trainingJobArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
