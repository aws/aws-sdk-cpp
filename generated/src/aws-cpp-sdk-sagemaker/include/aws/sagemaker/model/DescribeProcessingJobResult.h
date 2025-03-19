/**
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
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class DescribeProcessingJobResult
  {
  public:
    AWS_SAGEMAKER_API DescribeProcessingJobResult() = default;
    AWS_SAGEMAKER_API DescribeProcessingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeProcessingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The inputs for a processing job.</p>
     */
    inline const Aws::Vector<ProcessingInput>& GetProcessingInputs() const { return m_processingInputs; }
    template<typename ProcessingInputsT = Aws::Vector<ProcessingInput>>
    void SetProcessingInputs(ProcessingInputsT&& value) { m_processingInputsHasBeenSet = true; m_processingInputs = std::forward<ProcessingInputsT>(value); }
    template<typename ProcessingInputsT = Aws::Vector<ProcessingInput>>
    DescribeProcessingJobResult& WithProcessingInputs(ProcessingInputsT&& value) { SetProcessingInputs(std::forward<ProcessingInputsT>(value)); return *this;}
    template<typename ProcessingInputsT = ProcessingInput>
    DescribeProcessingJobResult& AddProcessingInputs(ProcessingInputsT&& value) { m_processingInputsHasBeenSet = true; m_processingInputs.emplace_back(std::forward<ProcessingInputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Output configuration for the processing job.</p>
     */
    inline const ProcessingOutputConfig& GetProcessingOutputConfig() const { return m_processingOutputConfig; }
    template<typename ProcessingOutputConfigT = ProcessingOutputConfig>
    void SetProcessingOutputConfig(ProcessingOutputConfigT&& value) { m_processingOutputConfigHasBeenSet = true; m_processingOutputConfig = std::forward<ProcessingOutputConfigT>(value); }
    template<typename ProcessingOutputConfigT = ProcessingOutputConfig>
    DescribeProcessingJobResult& WithProcessingOutputConfig(ProcessingOutputConfigT&& value) { SetProcessingOutputConfig(std::forward<ProcessingOutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the processing job. The name must be unique within an Amazon Web
     * Services Region in the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetProcessingJobName() const { return m_processingJobName; }
    template<typename ProcessingJobNameT = Aws::String>
    void SetProcessingJobName(ProcessingJobNameT&& value) { m_processingJobNameHasBeenSet = true; m_processingJobName = std::forward<ProcessingJobNameT>(value); }
    template<typename ProcessingJobNameT = Aws::String>
    DescribeProcessingJobResult& WithProcessingJobName(ProcessingJobNameT&& value) { SetProcessingJobName(std::forward<ProcessingJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the resources, ML compute instances, and ML storage volumes to
     * deploy for a processing job. In distributed training, you specify more than one
     * instance.</p>
     */
    inline const ProcessingResources& GetProcessingResources() const { return m_processingResources; }
    template<typename ProcessingResourcesT = ProcessingResources>
    void SetProcessingResources(ProcessingResourcesT&& value) { m_processingResourcesHasBeenSet = true; m_processingResources = std::forward<ProcessingResourcesT>(value); }
    template<typename ProcessingResourcesT = ProcessingResources>
    DescribeProcessingJobResult& WithProcessingResources(ProcessingResourcesT&& value) { SetProcessingResources(std::forward<ProcessingResourcesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time limit for how long the processing job is allowed to run.</p>
     */
    inline const ProcessingStoppingCondition& GetStoppingCondition() const { return m_stoppingCondition; }
    template<typename StoppingConditionT = ProcessingStoppingCondition>
    void SetStoppingCondition(StoppingConditionT&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::forward<StoppingConditionT>(value); }
    template<typename StoppingConditionT = ProcessingStoppingCondition>
    DescribeProcessingJobResult& WithStoppingCondition(StoppingConditionT&& value) { SetStoppingCondition(std::forward<StoppingConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures the processing job to run a specified container image.</p>
     */
    inline const AppSpecification& GetAppSpecification() const { return m_appSpecification; }
    template<typename AppSpecificationT = AppSpecification>
    void SetAppSpecification(AppSpecificationT&& value) { m_appSpecificationHasBeenSet = true; m_appSpecification = std::forward<AppSpecificationT>(value); }
    template<typename AppSpecificationT = AppSpecification>
    DescribeProcessingJobResult& WithAppSpecification(AppSpecificationT&& value) { SetAppSpecification(std::forward<AppSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables set in the Docker container.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const { return m_environment; }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    DescribeProcessingJobResult& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    template<typename EnvironmentKeyT = Aws::String, typename EnvironmentValueT = Aws::String>
    DescribeProcessingJobResult& AddEnvironment(EnvironmentKeyT&& key, EnvironmentValueT&& value) {
      m_environmentHasBeenSet = true; m_environment.emplace(std::forward<EnvironmentKeyT>(key), std::forward<EnvironmentValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Networking options for a processing job.</p>
     */
    inline const NetworkConfig& GetNetworkConfig() const { return m_networkConfig; }
    template<typename NetworkConfigT = NetworkConfig>
    void SetNetworkConfig(NetworkConfigT&& value) { m_networkConfigHasBeenSet = true; m_networkConfig = std::forward<NetworkConfigT>(value); }
    template<typename NetworkConfigT = NetworkConfig>
    DescribeProcessingJobResult& WithNetworkConfig(NetworkConfigT&& value) { SetNetworkConfig(std::forward<NetworkConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeProcessingJobResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information used to create an experiment.</p>
     */
    inline const ExperimentConfig& GetExperimentConfig() const { return m_experimentConfig; }
    template<typename ExperimentConfigT = ExperimentConfig>
    void SetExperimentConfig(ExperimentConfigT&& value) { m_experimentConfigHasBeenSet = true; m_experimentConfig = std::forward<ExperimentConfigT>(value); }
    template<typename ExperimentConfigT = ExperimentConfig>
    DescribeProcessingJobResult& WithExperimentConfig(ExperimentConfigT&& value) { SetExperimentConfig(std::forward<ExperimentConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the processing job.</p>
     */
    inline const Aws::String& GetProcessingJobArn() const { return m_processingJobArn; }
    template<typename ProcessingJobArnT = Aws::String>
    void SetProcessingJobArn(ProcessingJobArnT&& value) { m_processingJobArnHasBeenSet = true; m_processingJobArn = std::forward<ProcessingJobArnT>(value); }
    template<typename ProcessingJobArnT = Aws::String>
    DescribeProcessingJobResult& WithProcessingJobArn(ProcessingJobArnT&& value) { SetProcessingJobArn(std::forward<ProcessingJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the status of a processing job.</p>
     */
    inline ProcessingJobStatus GetProcessingJobStatus() const { return m_processingJobStatus; }
    inline void SetProcessingJobStatus(ProcessingJobStatus value) { m_processingJobStatusHasBeenSet = true; m_processingJobStatus = value; }
    inline DescribeProcessingJobResult& WithProcessingJobStatus(ProcessingJobStatus value) { SetProcessingJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional string, up to one KB in size, that contains metadata from the
     * processing container when the processing job exits.</p>
     */
    inline const Aws::String& GetExitMessage() const { return m_exitMessage; }
    template<typename ExitMessageT = Aws::String>
    void SetExitMessage(ExitMessageT&& value) { m_exitMessageHasBeenSet = true; m_exitMessage = std::forward<ExitMessageT>(value); }
    template<typename ExitMessageT = Aws::String>
    DescribeProcessingJobResult& WithExitMessage(ExitMessageT&& value) { SetExitMessage(std::forward<ExitMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string, up to one KB in size, that contains the reason a processing job
     * failed, if it failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DescribeProcessingJobResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the processing job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetProcessingEndTime() const { return m_processingEndTime; }
    template<typename ProcessingEndTimeT = Aws::Utils::DateTime>
    void SetProcessingEndTime(ProcessingEndTimeT&& value) { m_processingEndTimeHasBeenSet = true; m_processingEndTime = std::forward<ProcessingEndTimeT>(value); }
    template<typename ProcessingEndTimeT = Aws::Utils::DateTime>
    DescribeProcessingJobResult& WithProcessingEndTime(ProcessingEndTimeT&& value) { SetProcessingEndTime(std::forward<ProcessingEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the processing job started.</p>
     */
    inline const Aws::Utils::DateTime& GetProcessingStartTime() const { return m_processingStartTime; }
    template<typename ProcessingStartTimeT = Aws::Utils::DateTime>
    void SetProcessingStartTime(ProcessingStartTimeT&& value) { m_processingStartTimeHasBeenSet = true; m_processingStartTime = std::forward<ProcessingStartTimeT>(value); }
    template<typename ProcessingStartTimeT = Aws::Utils::DateTime>
    DescribeProcessingJobResult& WithProcessingStartTime(ProcessingStartTimeT&& value) { SetProcessingStartTime(std::forward<ProcessingStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the processing job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeProcessingJobResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the processing job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeProcessingJobResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a monitoring schedule for an endpoint associated with this
     * processing job.</p>
     */
    inline const Aws::String& GetMonitoringScheduleArn() const { return m_monitoringScheduleArn; }
    template<typename MonitoringScheduleArnT = Aws::String>
    void SetMonitoringScheduleArn(MonitoringScheduleArnT&& value) { m_monitoringScheduleArnHasBeenSet = true; m_monitoringScheduleArn = std::forward<MonitoringScheduleArnT>(value); }
    template<typename MonitoringScheduleArnT = Aws::String>
    DescribeProcessingJobResult& WithMonitoringScheduleArn(MonitoringScheduleArnT&& value) { SetMonitoringScheduleArn(std::forward<MonitoringScheduleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of an AutoML job associated with this processing job.</p>
     */
    inline const Aws::String& GetAutoMLJobArn() const { return m_autoMLJobArn; }
    template<typename AutoMLJobArnT = Aws::String>
    void SetAutoMLJobArn(AutoMLJobArnT&& value) { m_autoMLJobArnHasBeenSet = true; m_autoMLJobArn = std::forward<AutoMLJobArnT>(value); }
    template<typename AutoMLJobArnT = Aws::String>
    DescribeProcessingJobResult& WithAutoMLJobArn(AutoMLJobArnT&& value) { SetAutoMLJobArn(std::forward<AutoMLJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a training job associated with this processing job.</p>
     */
    inline const Aws::String& GetTrainingJobArn() const { return m_trainingJobArn; }
    template<typename TrainingJobArnT = Aws::String>
    void SetTrainingJobArn(TrainingJobArnT&& value) { m_trainingJobArnHasBeenSet = true; m_trainingJobArn = std::forward<TrainingJobArnT>(value); }
    template<typename TrainingJobArnT = Aws::String>
    DescribeProcessingJobResult& WithTrainingJobArn(TrainingJobArnT&& value) { SetTrainingJobArn(std::forward<TrainingJobArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeProcessingJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
