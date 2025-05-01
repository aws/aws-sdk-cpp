/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelArtifacts.h>
#include <aws/sagemaker/model/TrainingJobStatus.h>
#include <aws/sagemaker/model/SecondaryStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/AlgorithmSpecification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/OutputDataConfig.h>
#include <aws/sagemaker/model/ResourceConfig.h>
#include <aws/sagemaker/model/WarmPoolStatus.h>
#include <aws/sagemaker/model/VpcConfig.h>
#include <aws/sagemaker/model/StoppingCondition.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/CheckpointConfig.h>
#include <aws/sagemaker/model/DebugHookConfig.h>
#include <aws/sagemaker/model/ExperimentConfig.h>
#include <aws/sagemaker/model/TensorBoardOutputConfig.h>
#include <aws/sagemaker/model/ProfilerConfig.h>
#include <aws/sagemaker/model/ProfilingStatus.h>
#include <aws/sagemaker/model/RetryStrategy.h>
#include <aws/sagemaker/model/RemoteDebugConfig.h>
#include <aws/sagemaker/model/InfraCheckConfig.h>
#include <aws/sagemaker/model/Channel.h>
#include <aws/sagemaker/model/SecondaryStatusTransition.h>
#include <aws/sagemaker/model/MetricData.h>
#include <aws/sagemaker/model/DebugRuleConfiguration.h>
#include <aws/sagemaker/model/DebugRuleEvaluationStatus.h>
#include <aws/sagemaker/model/ProfilerRuleConfiguration.h>
#include <aws/sagemaker/model/ProfilerRuleEvaluationStatus.h>
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
  class DescribeTrainingJobResult
  {
  public:
    AWS_SAGEMAKER_API DescribeTrainingJobResult() = default;
    AWS_SAGEMAKER_API DescribeTrainingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeTrainingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Name of the model training job. </p>
     */
    inline const Aws::String& GetTrainingJobName() const { return m_trainingJobName; }
    template<typename TrainingJobNameT = Aws::String>
    void SetTrainingJobName(TrainingJobNameT&& value) { m_trainingJobNameHasBeenSet = true; m_trainingJobName = std::forward<TrainingJobNameT>(value); }
    template<typename TrainingJobNameT = Aws::String>
    DescribeTrainingJobResult& WithTrainingJobName(TrainingJobNameT&& value) { SetTrainingJobName(std::forward<TrainingJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline const Aws::String& GetTrainingJobArn() const { return m_trainingJobArn; }
    template<typename TrainingJobArnT = Aws::String>
    void SetTrainingJobArn(TrainingJobArnT&& value) { m_trainingJobArnHasBeenSet = true; m_trainingJobArn = std::forward<TrainingJobArnT>(value); }
    template<typename TrainingJobArnT = Aws::String>
    DescribeTrainingJobResult& WithTrainingJobArn(TrainingJobArnT&& value) { SetTrainingJobArn(std::forward<TrainingJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the associated hyperparameter tuning job if
     * the training job was launched by a hyperparameter tuning job.</p>
     */
    inline const Aws::String& GetTuningJobArn() const { return m_tuningJobArn; }
    template<typename TuningJobArnT = Aws::String>
    void SetTuningJobArn(TuningJobArnT&& value) { m_tuningJobArnHasBeenSet = true; m_tuningJobArn = std::forward<TuningJobArnT>(value); }
    template<typename TuningJobArnT = Aws::String>
    DescribeTrainingJobResult& WithTuningJobArn(TuningJobArnT&& value) { SetTuningJobArn(std::forward<TuningJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker Ground Truth labeling job
     * that created the transform or training job.</p>
     */
    inline const Aws::String& GetLabelingJobArn() const { return m_labelingJobArn; }
    template<typename LabelingJobArnT = Aws::String>
    void SetLabelingJobArn(LabelingJobArnT&& value) { m_labelingJobArnHasBeenSet = true; m_labelingJobArn = std::forward<LabelingJobArnT>(value); }
    template<typename LabelingJobArnT = Aws::String>
    DescribeTrainingJobResult& WithLabelingJobArn(LabelingJobArnT&& value) { SetLabelingJobArn(std::forward<LabelingJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an AutoML job.</p>
     */
    inline const Aws::String& GetAutoMLJobArn() const { return m_autoMLJobArn; }
    template<typename AutoMLJobArnT = Aws::String>
    void SetAutoMLJobArn(AutoMLJobArnT&& value) { m_autoMLJobArnHasBeenSet = true; m_autoMLJobArn = std::forward<AutoMLJobArnT>(value); }
    template<typename AutoMLJobArnT = Aws::String>
    DescribeTrainingJobResult& WithAutoMLJobArn(AutoMLJobArnT&& value) { SetAutoMLJobArn(std::forward<AutoMLJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Amazon S3 location that is configured for storing model
     * artifacts. </p>
     */
    inline const ModelArtifacts& GetModelArtifacts() const { return m_modelArtifacts; }
    template<typename ModelArtifactsT = ModelArtifacts>
    void SetModelArtifacts(ModelArtifactsT&& value) { m_modelArtifactsHasBeenSet = true; m_modelArtifacts = std::forward<ModelArtifactsT>(value); }
    template<typename ModelArtifactsT = ModelArtifacts>
    DescribeTrainingJobResult& WithModelArtifacts(ModelArtifactsT&& value) { SetModelArtifacts(std::forward<ModelArtifactsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the training job.</p> <p>SageMaker provides the following
     * training job statuses:</p> <ul> <li> <p> <code>InProgress</code> - The training
     * is in progress.</p> </li> <li> <p> <code>Completed</code> - The training job has
     * completed.</p> </li> <li> <p> <code>Failed</code> - The training job has failed.
     * To see the reason for the failure, see the <code>FailureReason</code> field in
     * the response to a <code>DescribeTrainingJobResponse</code> call.</p> </li> <li>
     * <p> <code>Stopping</code> - The training job is stopping.</p> </li> <li> <p>
     * <code>Stopped</code> - The training job has stopped.</p> </li> </ul> <p>For more
     * detailed information, see <code>SecondaryStatus</code>. </p>
     */
    inline TrainingJobStatus GetTrainingJobStatus() const { return m_trainingJobStatus; }
    inline void SetTrainingJobStatus(TrainingJobStatus value) { m_trainingJobStatusHasBeenSet = true; m_trainingJobStatus = value; }
    inline DescribeTrainingJobResult& WithTrainingJobStatus(TrainingJobStatus value) { SetTrainingJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides detailed information about the state of the training job. For
     * detailed information on the secondary status of the training job, see
     * <code>StatusMessage</code> under <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_SecondaryStatusTransition.html">SecondaryStatusTransition</a>.</p>
     * <p>SageMaker provides primary statuses and secondary statuses that apply to each
     * of them:</p> <dl> <dt>InProgress</dt> <dd> <ul> <li> <p> <code>Starting</code> -
     * Starting the training job.</p> </li> <li> <p> <code>Downloading</code> - An
     * optional stage for algorithms that support <code>File</code> training input
     * mode. It indicates that data is being downloaded to the ML storage volumes.</p>
     * </li> <li> <p> <code>Training</code> - Training is in progress.</p> </li> <li>
     * <p> <code>Interrupted</code> - The job stopped because the managed spot training
     * instances were interrupted. </p> </li> <li> <p> <code>Uploading</code> -
     * Training is complete and the model artifacts are being uploaded to the S3
     * location.</p> </li> </ul> </dd> <dt>Completed</dt> <dd> <ul> <li> <p>
     * <code>Completed</code> - The training job has completed.</p> </li> </ul> </dd>
     * <dt>Failed</dt> <dd> <ul> <li> <p> <code>Failed</code> - The training job has
     * failed. The reason for the failure is returned in the <code>FailureReason</code>
     * field of <code>DescribeTrainingJobResponse</code>.</p> </li> </ul> </dd>
     * <dt>Stopped</dt> <dd> <ul> <li> <p> <code>MaxRuntimeExceeded</code> - The job
     * stopped because it exceeded the maximum allowed runtime.</p> </li> <li> <p>
     * <code>MaxWaitTimeExceeded</code> - The job stopped because it exceeded the
     * maximum allowed wait time.</p> </li> <li> <p> <code>Stopped</code> - The
     * training job has stopped.</p> </li> </ul> </dd> <dt>Stopping</dt> <dd> <ul> <li>
     * <p> <code>Stopping</code> - Stopping the training job.</p> </li> </ul> </dd>
     * </dl>  <p>Valid values for <code>SecondaryStatus</code> are subject
     * to change. </p>  <p>We no longer support the following secondary
     * statuses:</p> <ul> <li> <p> <code>LaunchingMLInstances</code> </p> </li> <li>
     * <p> <code>PreparingTraining</code> </p> </li> <li> <p>
     * <code>DownloadingTrainingImage</code> </p> </li> </ul>
     */
    inline SecondaryStatus GetSecondaryStatus() const { return m_secondaryStatus; }
    inline void SetSecondaryStatus(SecondaryStatus value) { m_secondaryStatusHasBeenSet = true; m_secondaryStatus = value; }
    inline DescribeTrainingJobResult& WithSecondaryStatus(SecondaryStatus value) { SetSecondaryStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the training job failed, the reason it failed. </p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DescribeTrainingJobResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Algorithm-specific parameters. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHyperParameters() const { return m_hyperParameters; }
    template<typename HyperParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetHyperParameters(HyperParametersT&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters = std::forward<HyperParametersT>(value); }
    template<typename HyperParametersT = Aws::Map<Aws::String, Aws::String>>
    DescribeTrainingJobResult& WithHyperParameters(HyperParametersT&& value) { SetHyperParameters(std::forward<HyperParametersT>(value)); return *this;}
    template<typename HyperParametersKeyT = Aws::String, typename HyperParametersValueT = Aws::String>
    DescribeTrainingJobResult& AddHyperParameters(HyperParametersKeyT&& key, HyperParametersValueT&& value) {
      m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(std::forward<HyperParametersKeyT>(key), std::forward<HyperParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Information about the algorithm used for training, and algorithm metadata.
     * </p>
     */
    inline const AlgorithmSpecification& GetAlgorithmSpecification() const { return m_algorithmSpecification; }
    template<typename AlgorithmSpecificationT = AlgorithmSpecification>
    void SetAlgorithmSpecification(AlgorithmSpecificationT&& value) { m_algorithmSpecificationHasBeenSet = true; m_algorithmSpecification = std::forward<AlgorithmSpecificationT>(value); }
    template<typename AlgorithmSpecificationT = AlgorithmSpecification>
    DescribeTrainingJobResult& WithAlgorithmSpecification(AlgorithmSpecificationT&& value) { SetAlgorithmSpecification(std::forward<AlgorithmSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Identity and Access Management (IAM) role configured
     * for the training job. </p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeTrainingJobResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>Channel</code> objects that describes each data input
     * channel. </p>
     */
    inline const Aws::Vector<Channel>& GetInputDataConfig() const { return m_inputDataConfig; }
    template<typename InputDataConfigT = Aws::Vector<Channel>>
    void SetInputDataConfig(InputDataConfigT&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::forward<InputDataConfigT>(value); }
    template<typename InputDataConfigT = Aws::Vector<Channel>>
    DescribeTrainingJobResult& WithInputDataConfig(InputDataConfigT&& value) { SetInputDataConfig(std::forward<InputDataConfigT>(value)); return *this;}
    template<typename InputDataConfigT = Channel>
    DescribeTrainingJobResult& AddInputDataConfig(InputDataConfigT&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig.emplace_back(std::forward<InputDataConfigT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The S3 path where model artifacts that you configured when creating the job
     * are stored. SageMaker creates subfolders for model artifacts. </p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const { return m_outputDataConfig; }
    template<typename OutputDataConfigT = OutputDataConfig>
    void SetOutputDataConfig(OutputDataConfigT&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::forward<OutputDataConfigT>(value); }
    template<typename OutputDataConfigT = OutputDataConfig>
    DescribeTrainingJobResult& WithOutputDataConfig(OutputDataConfigT&& value) { SetOutputDataConfig(std::forward<OutputDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Resources, including ML compute instances and ML storage volumes, that are
     * configured for model training. </p>
     */
    inline const ResourceConfig& GetResourceConfig() const { return m_resourceConfig; }
    template<typename ResourceConfigT = ResourceConfig>
    void SetResourceConfig(ResourceConfigT&& value) { m_resourceConfigHasBeenSet = true; m_resourceConfig = std::forward<ResourceConfigT>(value); }
    template<typename ResourceConfigT = ResourceConfig>
    DescribeTrainingJobResult& WithResourceConfig(ResourceConfigT&& value) { SetResourceConfig(std::forward<ResourceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the warm pool associated with the training job.</p>
     */
    inline const WarmPoolStatus& GetWarmPoolStatus() const { return m_warmPoolStatus; }
    template<typename WarmPoolStatusT = WarmPoolStatus>
    void SetWarmPoolStatus(WarmPoolStatusT&& value) { m_warmPoolStatusHasBeenSet = true; m_warmPoolStatus = std::forward<WarmPoolStatusT>(value); }
    template<typename WarmPoolStatusT = WarmPoolStatus>
    DescribeTrainingJobResult& WithWarmPoolStatus(WarmPoolStatusT&& value) { SetWarmPoolStatus(std::forward<WarmPoolStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_VpcConfig.html">VpcConfig</a>
     * object that specifies the VPC that this training job has access to. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-vpc.html">Protect
     * Training Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    template<typename VpcConfigT = VpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfig>
    DescribeTrainingJobResult& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a limit to how long a model training job can run. It also specifies
     * how long a managed Spot training job has to complete. When the job reaches the
     * time limit, SageMaker ends the training job. Use this API to cap model training
     * costs.</p> <p>To stop a job, SageMaker sends the algorithm the
     * <code>SIGTERM</code> signal, which delays job termination for 120 seconds.
     * Algorithms can use this 120-second window to save the model artifacts, so the
     * results of training are not lost. </p>
     */
    inline const StoppingCondition& GetStoppingCondition() const { return m_stoppingCondition; }
    template<typename StoppingConditionT = StoppingCondition>
    void SetStoppingCondition(StoppingConditionT&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::forward<StoppingConditionT>(value); }
    template<typename StoppingConditionT = StoppingCondition>
    DescribeTrainingJobResult& WithStoppingCondition(StoppingConditionT&& value) { SetStoppingCondition(std::forward<StoppingConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the training job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeTrainingJobResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the time when the training job starts on training instances. You
     * are billed for the time interval between this time and the value of
     * <code>TrainingEndTime</code>. The start time in CloudWatch Logs might be later
     * than this time. The difference is due to the time it takes to download the
     * training data and to the size of the training container.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingStartTime() const { return m_trainingStartTime; }
    template<typename TrainingStartTimeT = Aws::Utils::DateTime>
    void SetTrainingStartTime(TrainingStartTimeT&& value) { m_trainingStartTimeHasBeenSet = true; m_trainingStartTime = std::forward<TrainingStartTimeT>(value); }
    template<typename TrainingStartTimeT = Aws::Utils::DateTime>
    DescribeTrainingJobResult& WithTrainingStartTime(TrainingStartTimeT&& value) { SetTrainingStartTime(std::forward<TrainingStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the time when the training job ends on training instances. You are
     * billed for the time interval between the value of <code>TrainingStartTime</code>
     * and this time. For successful jobs and stopped jobs, this is the time after
     * model artifacts are uploaded. For failed jobs, this is the time when SageMaker
     * detects a job failure.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingEndTime() const { return m_trainingEndTime; }
    template<typename TrainingEndTimeT = Aws::Utils::DateTime>
    void SetTrainingEndTime(TrainingEndTimeT&& value) { m_trainingEndTimeHasBeenSet = true; m_trainingEndTime = std::forward<TrainingEndTimeT>(value); }
    template<typename TrainingEndTimeT = Aws::Utils::DateTime>
    DescribeTrainingJobResult& WithTrainingEndTime(TrainingEndTimeT&& value) { SetTrainingEndTime(std::forward<TrainingEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the status of the training job was last
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeTrainingJobResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A history of all of the secondary statuses that the training job has
     * transitioned through.</p>
     */
    inline const Aws::Vector<SecondaryStatusTransition>& GetSecondaryStatusTransitions() const { return m_secondaryStatusTransitions; }
    template<typename SecondaryStatusTransitionsT = Aws::Vector<SecondaryStatusTransition>>
    void SetSecondaryStatusTransitions(SecondaryStatusTransitionsT&& value) { m_secondaryStatusTransitionsHasBeenSet = true; m_secondaryStatusTransitions = std::forward<SecondaryStatusTransitionsT>(value); }
    template<typename SecondaryStatusTransitionsT = Aws::Vector<SecondaryStatusTransition>>
    DescribeTrainingJobResult& WithSecondaryStatusTransitions(SecondaryStatusTransitionsT&& value) { SetSecondaryStatusTransitions(std::forward<SecondaryStatusTransitionsT>(value)); return *this;}
    template<typename SecondaryStatusTransitionsT = SecondaryStatusTransition>
    DescribeTrainingJobResult& AddSecondaryStatusTransitions(SecondaryStatusTransitionsT&& value) { m_secondaryStatusTransitionsHasBeenSet = true; m_secondaryStatusTransitions.emplace_back(std::forward<SecondaryStatusTransitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A collection of <code>MetricData</code> objects that specify the names,
     * values, and dates and times that the training algorithm emitted to Amazon
     * CloudWatch.</p>
     */
    inline const Aws::Vector<MetricData>& GetFinalMetricDataList() const { return m_finalMetricDataList; }
    template<typename FinalMetricDataListT = Aws::Vector<MetricData>>
    void SetFinalMetricDataList(FinalMetricDataListT&& value) { m_finalMetricDataListHasBeenSet = true; m_finalMetricDataList = std::forward<FinalMetricDataListT>(value); }
    template<typename FinalMetricDataListT = Aws::Vector<MetricData>>
    DescribeTrainingJobResult& WithFinalMetricDataList(FinalMetricDataListT&& value) { SetFinalMetricDataList(std::forward<FinalMetricDataListT>(value)); return *this;}
    template<typename FinalMetricDataListT = MetricData>
    DescribeTrainingJobResult& AddFinalMetricDataList(FinalMetricDataListT&& value) { m_finalMetricDataListHasBeenSet = true; m_finalMetricDataList.emplace_back(std::forward<FinalMetricDataListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If you want to allow inbound or outbound network calls, except for calls
     * between peers within a training cluster for distributed training, choose
     * <code>True</code>. If you enable network isolation for training jobs that are
     * configured to use a VPC, SageMaker downloads and uploads customer data and model
     * artifacts through the specified VPC, but the training container does not have
     * network access.</p>
     */
    inline bool GetEnableNetworkIsolation() const { return m_enableNetworkIsolation; }
    inline void SetEnableNetworkIsolation(bool value) { m_enableNetworkIsolationHasBeenSet = true; m_enableNetworkIsolation = value; }
    inline DescribeTrainingJobResult& WithEnableNetworkIsolation(bool value) { SetEnableNetworkIsolation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>To encrypt all communications between ML compute instances in distributed
     * training, choose <code>True</code>. Encryption provides greater security for
     * distributed training, but training might take longer. How long it takes depends
     * on the amount of communication between compute instances, especially if you use
     * a deep learning algorithms in distributed training.</p>
     */
    inline bool GetEnableInterContainerTrafficEncryption() const { return m_enableInterContainerTrafficEncryption; }
    inline void SetEnableInterContainerTrafficEncryption(bool value) { m_enableInterContainerTrafficEncryptionHasBeenSet = true; m_enableInterContainerTrafficEncryption = value; }
    inline DescribeTrainingJobResult& WithEnableInterContainerTrafficEncryption(bool value) { SetEnableInterContainerTrafficEncryption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean indicating whether managed spot training is enabled
     * (<code>True</code>) or not (<code>False</code>).</p>
     */
    inline bool GetEnableManagedSpotTraining() const { return m_enableManagedSpotTraining; }
    inline void SetEnableManagedSpotTraining(bool value) { m_enableManagedSpotTrainingHasBeenSet = true; m_enableManagedSpotTraining = value; }
    inline DescribeTrainingJobResult& WithEnableManagedSpotTraining(bool value) { SetEnableManagedSpotTraining(value); return *this;}
    ///@}

    ///@{
    
    inline const CheckpointConfig& GetCheckpointConfig() const { return m_checkpointConfig; }
    template<typename CheckpointConfigT = CheckpointConfig>
    void SetCheckpointConfig(CheckpointConfigT&& value) { m_checkpointConfigHasBeenSet = true; m_checkpointConfig = std::forward<CheckpointConfigT>(value); }
    template<typename CheckpointConfigT = CheckpointConfig>
    DescribeTrainingJobResult& WithCheckpointConfig(CheckpointConfigT&& value) { SetCheckpointConfig(std::forward<CheckpointConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The training time in seconds.</p>
     */
    inline int GetTrainingTimeInSeconds() const { return m_trainingTimeInSeconds; }
    inline void SetTrainingTimeInSeconds(int value) { m_trainingTimeInSecondsHasBeenSet = true; m_trainingTimeInSeconds = value; }
    inline DescribeTrainingJobResult& WithTrainingTimeInSeconds(int value) { SetTrainingTimeInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The billable time in seconds. Billable time refers to the absolute wall-clock
     * time.</p> <p>Multiply <code>BillableTimeInSeconds</code> by the number of
     * instances (<code>InstanceCount</code>) in your training cluster to get the total
     * compute time SageMaker bills you if you run distributed training. The formula is
     * as follows: <code>BillableTimeInSeconds * InstanceCount</code> .</p> <p>You can
     * calculate the savings from using managed spot training using the formula
     * <code>(1 - BillableTimeInSeconds / TrainingTimeInSeconds) * 100</code>. For
     * example, if <code>BillableTimeInSeconds</code> is 100 and
     * <code>TrainingTimeInSeconds</code> is 500, the savings is 80%.</p>
     */
    inline int GetBillableTimeInSeconds() const { return m_billableTimeInSeconds; }
    inline void SetBillableTimeInSeconds(int value) { m_billableTimeInSecondsHasBeenSet = true; m_billableTimeInSeconds = value; }
    inline DescribeTrainingJobResult& WithBillableTimeInSeconds(int value) { SetBillableTimeInSeconds(value); return *this;}
    ///@}

    ///@{
    
    inline const DebugHookConfig& GetDebugHookConfig() const { return m_debugHookConfig; }
    template<typename DebugHookConfigT = DebugHookConfig>
    void SetDebugHookConfig(DebugHookConfigT&& value) { m_debugHookConfigHasBeenSet = true; m_debugHookConfig = std::forward<DebugHookConfigT>(value); }
    template<typename DebugHookConfigT = DebugHookConfig>
    DescribeTrainingJobResult& WithDebugHookConfig(DebugHookConfigT&& value) { SetDebugHookConfig(std::forward<DebugHookConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ExperimentConfig& GetExperimentConfig() const { return m_experimentConfig; }
    template<typename ExperimentConfigT = ExperimentConfig>
    void SetExperimentConfig(ExperimentConfigT&& value) { m_experimentConfigHasBeenSet = true; m_experimentConfig = std::forward<ExperimentConfigT>(value); }
    template<typename ExperimentConfigT = ExperimentConfig>
    DescribeTrainingJobResult& WithExperimentConfig(ExperimentConfigT&& value) { SetExperimentConfig(std::forward<ExperimentConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for Amazon SageMaker Debugger rules for debugging
     * output tensors.</p>
     */
    inline const Aws::Vector<DebugRuleConfiguration>& GetDebugRuleConfigurations() const { return m_debugRuleConfigurations; }
    template<typename DebugRuleConfigurationsT = Aws::Vector<DebugRuleConfiguration>>
    void SetDebugRuleConfigurations(DebugRuleConfigurationsT&& value) { m_debugRuleConfigurationsHasBeenSet = true; m_debugRuleConfigurations = std::forward<DebugRuleConfigurationsT>(value); }
    template<typename DebugRuleConfigurationsT = Aws::Vector<DebugRuleConfiguration>>
    DescribeTrainingJobResult& WithDebugRuleConfigurations(DebugRuleConfigurationsT&& value) { SetDebugRuleConfigurations(std::forward<DebugRuleConfigurationsT>(value)); return *this;}
    template<typename DebugRuleConfigurationsT = DebugRuleConfiguration>
    DescribeTrainingJobResult& AddDebugRuleConfigurations(DebugRuleConfigurationsT&& value) { m_debugRuleConfigurationsHasBeenSet = true; m_debugRuleConfigurations.emplace_back(std::forward<DebugRuleConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const TensorBoardOutputConfig& GetTensorBoardOutputConfig() const { return m_tensorBoardOutputConfig; }
    template<typename TensorBoardOutputConfigT = TensorBoardOutputConfig>
    void SetTensorBoardOutputConfig(TensorBoardOutputConfigT&& value) { m_tensorBoardOutputConfigHasBeenSet = true; m_tensorBoardOutputConfig = std::forward<TensorBoardOutputConfigT>(value); }
    template<typename TensorBoardOutputConfigT = TensorBoardOutputConfig>
    DescribeTrainingJobResult& WithTensorBoardOutputConfig(TensorBoardOutputConfigT&& value) { SetTensorBoardOutputConfig(std::forward<TensorBoardOutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Evaluation status of Amazon SageMaker Debugger rules for debugging on a
     * training job.</p>
     */
    inline const Aws::Vector<DebugRuleEvaluationStatus>& GetDebugRuleEvaluationStatuses() const { return m_debugRuleEvaluationStatuses; }
    template<typename DebugRuleEvaluationStatusesT = Aws::Vector<DebugRuleEvaluationStatus>>
    void SetDebugRuleEvaluationStatuses(DebugRuleEvaluationStatusesT&& value) { m_debugRuleEvaluationStatusesHasBeenSet = true; m_debugRuleEvaluationStatuses = std::forward<DebugRuleEvaluationStatusesT>(value); }
    template<typename DebugRuleEvaluationStatusesT = Aws::Vector<DebugRuleEvaluationStatus>>
    DescribeTrainingJobResult& WithDebugRuleEvaluationStatuses(DebugRuleEvaluationStatusesT&& value) { SetDebugRuleEvaluationStatuses(std::forward<DebugRuleEvaluationStatusesT>(value)); return *this;}
    template<typename DebugRuleEvaluationStatusesT = DebugRuleEvaluationStatus>
    DescribeTrainingJobResult& AddDebugRuleEvaluationStatuses(DebugRuleEvaluationStatusesT&& value) { m_debugRuleEvaluationStatusesHasBeenSet = true; m_debugRuleEvaluationStatuses.emplace_back(std::forward<DebugRuleEvaluationStatusesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ProfilerConfig& GetProfilerConfig() const { return m_profilerConfig; }
    template<typename ProfilerConfigT = ProfilerConfig>
    void SetProfilerConfig(ProfilerConfigT&& value) { m_profilerConfigHasBeenSet = true; m_profilerConfig = std::forward<ProfilerConfigT>(value); }
    template<typename ProfilerConfigT = ProfilerConfig>
    DescribeTrainingJobResult& WithProfilerConfig(ProfilerConfigT&& value) { SetProfilerConfig(std::forward<ProfilerConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for Amazon SageMaker Debugger rules for profiling
     * system and framework metrics.</p>
     */
    inline const Aws::Vector<ProfilerRuleConfiguration>& GetProfilerRuleConfigurations() const { return m_profilerRuleConfigurations; }
    template<typename ProfilerRuleConfigurationsT = Aws::Vector<ProfilerRuleConfiguration>>
    void SetProfilerRuleConfigurations(ProfilerRuleConfigurationsT&& value) { m_profilerRuleConfigurationsHasBeenSet = true; m_profilerRuleConfigurations = std::forward<ProfilerRuleConfigurationsT>(value); }
    template<typename ProfilerRuleConfigurationsT = Aws::Vector<ProfilerRuleConfiguration>>
    DescribeTrainingJobResult& WithProfilerRuleConfigurations(ProfilerRuleConfigurationsT&& value) { SetProfilerRuleConfigurations(std::forward<ProfilerRuleConfigurationsT>(value)); return *this;}
    template<typename ProfilerRuleConfigurationsT = ProfilerRuleConfiguration>
    DescribeTrainingJobResult& AddProfilerRuleConfigurations(ProfilerRuleConfigurationsT&& value) { m_profilerRuleConfigurationsHasBeenSet = true; m_profilerRuleConfigurations.emplace_back(std::forward<ProfilerRuleConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Evaluation status of Amazon SageMaker Debugger rules for profiling on a
     * training job.</p>
     */
    inline const Aws::Vector<ProfilerRuleEvaluationStatus>& GetProfilerRuleEvaluationStatuses() const { return m_profilerRuleEvaluationStatuses; }
    template<typename ProfilerRuleEvaluationStatusesT = Aws::Vector<ProfilerRuleEvaluationStatus>>
    void SetProfilerRuleEvaluationStatuses(ProfilerRuleEvaluationStatusesT&& value) { m_profilerRuleEvaluationStatusesHasBeenSet = true; m_profilerRuleEvaluationStatuses = std::forward<ProfilerRuleEvaluationStatusesT>(value); }
    template<typename ProfilerRuleEvaluationStatusesT = Aws::Vector<ProfilerRuleEvaluationStatus>>
    DescribeTrainingJobResult& WithProfilerRuleEvaluationStatuses(ProfilerRuleEvaluationStatusesT&& value) { SetProfilerRuleEvaluationStatuses(std::forward<ProfilerRuleEvaluationStatusesT>(value)); return *this;}
    template<typename ProfilerRuleEvaluationStatusesT = ProfilerRuleEvaluationStatus>
    DescribeTrainingJobResult& AddProfilerRuleEvaluationStatuses(ProfilerRuleEvaluationStatusesT&& value) { m_profilerRuleEvaluationStatusesHasBeenSet = true; m_profilerRuleEvaluationStatuses.emplace_back(std::forward<ProfilerRuleEvaluationStatusesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Profiling status of a training job.</p>
     */
    inline ProfilingStatus GetProfilingStatus() const { return m_profilingStatus; }
    inline void SetProfilingStatus(ProfilingStatus value) { m_profilingStatusHasBeenSet = true; m_profilingStatus = value; }
    inline DescribeTrainingJobResult& WithProfilingStatus(ProfilingStatus value) { SetProfilingStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables to set in the Docker container.</p> 
     * <p>Do not include any security-sensitive information including account access
     * IDs, secrets, or tokens in any environment fields. As part of the shared
     * responsibility model, you are responsible for any potential exposure,
     * unauthorized access, or compromise of your sensitive data if caused by
     * security-sensitive information included in the request environment variable or
     * plain text fields.</p> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const { return m_environment; }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    DescribeTrainingJobResult& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    template<typename EnvironmentKeyT = Aws::String, typename EnvironmentValueT = Aws::String>
    DescribeTrainingJobResult& AddEnvironment(EnvironmentKeyT&& key, EnvironmentValueT&& value) {
      m_environmentHasBeenSet = true; m_environment.emplace(std::forward<EnvironmentKeyT>(key), std::forward<EnvironmentValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The number of times to retry the job when the job fails due to an
     * <code>InternalServerError</code>.</p>
     */
    inline const RetryStrategy& GetRetryStrategy() const { return m_retryStrategy; }
    template<typename RetryStrategyT = RetryStrategy>
    void SetRetryStrategy(RetryStrategyT&& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = std::forward<RetryStrategyT>(value); }
    template<typename RetryStrategyT = RetryStrategy>
    DescribeTrainingJobResult& WithRetryStrategy(RetryStrategyT&& value) { SetRetryStrategy(std::forward<RetryStrategyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for remote debugging. To learn more about the remote debugging
     * functionality of SageMaker, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-remote-debugging.html">Access
     * a training container through Amazon Web Services Systems Manager (SSM) for
     * remote debugging</a>.</p>
     */
    inline const RemoteDebugConfig& GetRemoteDebugConfig() const { return m_remoteDebugConfig; }
    template<typename RemoteDebugConfigT = RemoteDebugConfig>
    void SetRemoteDebugConfig(RemoteDebugConfigT&& value) { m_remoteDebugConfigHasBeenSet = true; m_remoteDebugConfig = std::forward<RemoteDebugConfigT>(value); }
    template<typename RemoteDebugConfigT = RemoteDebugConfig>
    DescribeTrainingJobResult& WithRemoteDebugConfig(RemoteDebugConfigT&& value) { SetRemoteDebugConfig(std::forward<RemoteDebugConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the infrastructure health check configuration for
     * the training job.</p>
     */
    inline const InfraCheckConfig& GetInfraCheckConfig() const { return m_infraCheckConfig; }
    template<typename InfraCheckConfigT = InfraCheckConfig>
    void SetInfraCheckConfig(InfraCheckConfigT&& value) { m_infraCheckConfigHasBeenSet = true; m_infraCheckConfig = std::forward<InfraCheckConfigT>(value); }
    template<typename InfraCheckConfigT = InfraCheckConfig>
    DescribeTrainingJobResult& WithInfraCheckConfig(InfraCheckConfigT&& value) { SetInfraCheckConfig(std::forward<InfraCheckConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeTrainingJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trainingJobName;
    bool m_trainingJobNameHasBeenSet = false;

    Aws::String m_trainingJobArn;
    bool m_trainingJobArnHasBeenSet = false;

    Aws::String m_tuningJobArn;
    bool m_tuningJobArnHasBeenSet = false;

    Aws::String m_labelingJobArn;
    bool m_labelingJobArnHasBeenSet = false;

    Aws::String m_autoMLJobArn;
    bool m_autoMLJobArnHasBeenSet = false;

    ModelArtifacts m_modelArtifacts;
    bool m_modelArtifactsHasBeenSet = false;

    TrainingJobStatus m_trainingJobStatus{TrainingJobStatus::NOT_SET};
    bool m_trainingJobStatusHasBeenSet = false;

    SecondaryStatus m_secondaryStatus{SecondaryStatus::NOT_SET};
    bool m_secondaryStatusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_hyperParameters;
    bool m_hyperParametersHasBeenSet = false;

    AlgorithmSpecification m_algorithmSpecification;
    bool m_algorithmSpecificationHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Channel> m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    ResourceConfig m_resourceConfig;
    bool m_resourceConfigHasBeenSet = false;

    WarmPoolStatus m_warmPoolStatus;
    bool m_warmPoolStatusHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    StoppingCondition m_stoppingCondition;
    bool m_stoppingConditionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_trainingStartTime{};
    bool m_trainingStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_trainingEndTime{};
    bool m_trainingEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Vector<SecondaryStatusTransition> m_secondaryStatusTransitions;
    bool m_secondaryStatusTransitionsHasBeenSet = false;

    Aws::Vector<MetricData> m_finalMetricDataList;
    bool m_finalMetricDataListHasBeenSet = false;

    bool m_enableNetworkIsolation{false};
    bool m_enableNetworkIsolationHasBeenSet = false;

    bool m_enableInterContainerTrafficEncryption{false};
    bool m_enableInterContainerTrafficEncryptionHasBeenSet = false;

    bool m_enableManagedSpotTraining{false};
    bool m_enableManagedSpotTrainingHasBeenSet = false;

    CheckpointConfig m_checkpointConfig;
    bool m_checkpointConfigHasBeenSet = false;

    int m_trainingTimeInSeconds{0};
    bool m_trainingTimeInSecondsHasBeenSet = false;

    int m_billableTimeInSeconds{0};
    bool m_billableTimeInSecondsHasBeenSet = false;

    DebugHookConfig m_debugHookConfig;
    bool m_debugHookConfigHasBeenSet = false;

    ExperimentConfig m_experimentConfig;
    bool m_experimentConfigHasBeenSet = false;

    Aws::Vector<DebugRuleConfiguration> m_debugRuleConfigurations;
    bool m_debugRuleConfigurationsHasBeenSet = false;

    TensorBoardOutputConfig m_tensorBoardOutputConfig;
    bool m_tensorBoardOutputConfigHasBeenSet = false;

    Aws::Vector<DebugRuleEvaluationStatus> m_debugRuleEvaluationStatuses;
    bool m_debugRuleEvaluationStatusesHasBeenSet = false;

    ProfilerConfig m_profilerConfig;
    bool m_profilerConfigHasBeenSet = false;

    Aws::Vector<ProfilerRuleConfiguration> m_profilerRuleConfigurations;
    bool m_profilerRuleConfigurationsHasBeenSet = false;

    Aws::Vector<ProfilerRuleEvaluationStatus> m_profilerRuleEvaluationStatuses;
    bool m_profilerRuleEvaluationStatusesHasBeenSet = false;

    ProfilingStatus m_profilingStatus{ProfilingStatus::NOT_SET};
    bool m_profilingStatusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet = false;

    RetryStrategy m_retryStrategy;
    bool m_retryStrategyHasBeenSet = false;

    RemoteDebugConfig m_remoteDebugConfig;
    bool m_remoteDebugConfigHasBeenSet = false;

    InfraCheckConfig m_infraCheckConfig;
    bool m_infraCheckConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
