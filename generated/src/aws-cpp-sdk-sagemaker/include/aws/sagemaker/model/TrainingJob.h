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
#include <aws/sagemaker/model/VpcConfig.h>
#include <aws/sagemaker/model/StoppingCondition.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/CheckpointConfig.h>
#include <aws/sagemaker/model/DebugHookConfig.h>
#include <aws/sagemaker/model/ExperimentConfig.h>
#include <aws/sagemaker/model/TensorBoardOutputConfig.h>
#include <aws/sagemaker/model/ProfilerConfig.h>
#include <aws/sagemaker/model/RetryStrategy.h>
#include <aws/sagemaker/model/Channel.h>
#include <aws/sagemaker/model/SecondaryStatusTransition.h>
#include <aws/sagemaker/model/MetricData.h>
#include <aws/sagemaker/model/DebugRuleConfiguration.h>
#include <aws/sagemaker/model/DebugRuleEvaluationStatus.h>
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
   * <p>Contains information about a training job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrainingJob">AWS
   * API Reference</a></p>
   */
  class TrainingJob
  {
  public:
    AWS_SAGEMAKER_API TrainingJob() = default;
    AWS_SAGEMAKER_API TrainingJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrainingJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the training job.</p>
     */
    inline const Aws::String& GetTrainingJobName() const { return m_trainingJobName; }
    inline bool TrainingJobNameHasBeenSet() const { return m_trainingJobNameHasBeenSet; }
    template<typename TrainingJobNameT = Aws::String>
    void SetTrainingJobName(TrainingJobNameT&& value) { m_trainingJobNameHasBeenSet = true; m_trainingJobName = std::forward<TrainingJobNameT>(value); }
    template<typename TrainingJobNameT = Aws::String>
    TrainingJob& WithTrainingJobName(TrainingJobNameT&& value) { SetTrainingJobName(std::forward<TrainingJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline const Aws::String& GetTrainingJobArn() const { return m_trainingJobArn; }
    inline bool TrainingJobArnHasBeenSet() const { return m_trainingJobArnHasBeenSet; }
    template<typename TrainingJobArnT = Aws::String>
    void SetTrainingJobArn(TrainingJobArnT&& value) { m_trainingJobArnHasBeenSet = true; m_trainingJobArn = std::forward<TrainingJobArnT>(value); }
    template<typename TrainingJobArnT = Aws::String>
    TrainingJob& WithTrainingJobArn(TrainingJobArnT&& value) { SetTrainingJobArn(std::forward<TrainingJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the associated hyperparameter tuning job if
     * the training job was launched by a hyperparameter tuning job.</p>
     */
    inline const Aws::String& GetTuningJobArn() const { return m_tuningJobArn; }
    inline bool TuningJobArnHasBeenSet() const { return m_tuningJobArnHasBeenSet; }
    template<typename TuningJobArnT = Aws::String>
    void SetTuningJobArn(TuningJobArnT&& value) { m_tuningJobArnHasBeenSet = true; m_tuningJobArn = std::forward<TuningJobArnT>(value); }
    template<typename TuningJobArnT = Aws::String>
    TrainingJob& WithTuningJobArn(TuningJobArnT&& value) { SetTuningJobArn(std::forward<TuningJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job.</p>
     */
    inline const Aws::String& GetLabelingJobArn() const { return m_labelingJobArn; }
    inline bool LabelingJobArnHasBeenSet() const { return m_labelingJobArnHasBeenSet; }
    template<typename LabelingJobArnT = Aws::String>
    void SetLabelingJobArn(LabelingJobArnT&& value) { m_labelingJobArnHasBeenSet = true; m_labelingJobArn = std::forward<LabelingJobArnT>(value); }
    template<typename LabelingJobArnT = Aws::String>
    TrainingJob& WithLabelingJobArn(LabelingJobArnT&& value) { SetLabelingJobArn(std::forward<LabelingJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the job.</p>
     */
    inline const Aws::String& GetAutoMLJobArn() const { return m_autoMLJobArn; }
    inline bool AutoMLJobArnHasBeenSet() const { return m_autoMLJobArnHasBeenSet; }
    template<typename AutoMLJobArnT = Aws::String>
    void SetAutoMLJobArn(AutoMLJobArnT&& value) { m_autoMLJobArnHasBeenSet = true; m_autoMLJobArn = std::forward<AutoMLJobArnT>(value); }
    template<typename AutoMLJobArnT = Aws::String>
    TrainingJob& WithAutoMLJobArn(AutoMLJobArnT&& value) { SetAutoMLJobArn(std::forward<AutoMLJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Amazon S3 location that is configured for storing model
     * artifacts.</p>
     */
    inline const ModelArtifacts& GetModelArtifacts() const { return m_modelArtifacts; }
    inline bool ModelArtifactsHasBeenSet() const { return m_modelArtifactsHasBeenSet; }
    template<typename ModelArtifactsT = ModelArtifacts>
    void SetModelArtifacts(ModelArtifactsT&& value) { m_modelArtifactsHasBeenSet = true; m_modelArtifacts = std::forward<ModelArtifactsT>(value); }
    template<typename ModelArtifactsT = ModelArtifacts>
    TrainingJob& WithModelArtifacts(ModelArtifactsT&& value) { SetModelArtifacts(std::forward<ModelArtifactsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the training job.</p> <p>Training job statuses are:</p> <ul>
     * <li> <p> <code>InProgress</code> - The training is in progress.</p> </li> <li>
     * <p> <code>Completed</code> - The training job has completed.</p> </li> <li> <p>
     * <code>Failed</code> - The training job has failed. To see the reason for the
     * failure, see the <code>FailureReason</code> field in the response to a
     * <code>DescribeTrainingJobResponse</code> call.</p> </li> <li> <p>
     * <code>Stopping</code> - The training job is stopping.</p> </li> <li> <p>
     * <code>Stopped</code> - The training job has stopped.</p> </li> </ul> <p>For more
     * detailed information, see <code>SecondaryStatus</code>. </p>
     */
    inline TrainingJobStatus GetTrainingJobStatus() const { return m_trainingJobStatus; }
    inline bool TrainingJobStatusHasBeenSet() const { return m_trainingJobStatusHasBeenSet; }
    inline void SetTrainingJobStatus(TrainingJobStatus value) { m_trainingJobStatusHasBeenSet = true; m_trainingJobStatus = value; }
    inline TrainingJob& WithTrainingJobStatus(TrainingJobStatus value) { SetTrainingJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides detailed information about the state of the training job. For
     * detailed information about the secondary status of the training job, see
     * <code>StatusMessage</code> under <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_SecondaryStatusTransition.html">SecondaryStatusTransition</a>.</p>
     * <p>SageMaker provides primary statuses and secondary statuses that apply to each
     * of them:</p> <dl> <dt>InProgress</dt> <dd> <ul> <li> <p> <code>Starting</code> -
     * Starting the training job.</p> </li> <li> <p> <code>Downloading</code> - An
     * optional stage for algorithms that support <code>File</code> training input
     * mode. It indicates that data is being downloaded to the ML storage volumes.</p>
     * </li> <li> <p> <code>Training</code> - Training is in progress.</p> </li> <li>
     * <p> <code>Uploading</code> - Training is complete and the model artifacts are
     * being uploaded to the S3 location.</p> </li> </ul> </dd> <dt>Completed</dt> <dd>
     * <ul> <li> <p> <code>Completed</code> - The training job has completed.</p> </li>
     * </ul> </dd> <dt>Failed</dt> <dd> <ul> <li> <p> <code>Failed</code> - The
     * training job has failed. The reason for the failure is returned in the
     * <code>FailureReason</code> field of
     * <code>DescribeTrainingJobResponse</code>.</p> </li> </ul> </dd> <dt>Stopped</dt>
     * <dd> <ul> <li> <p> <code>MaxRuntimeExceeded</code> - The job stopped because it
     * exceeded the maximum allowed runtime.</p> </li> <li> <p> <code>Stopped</code> -
     * The training job has stopped.</p> </li> </ul> </dd> <dt>Stopping</dt> <dd> <ul>
     * <li> <p> <code>Stopping</code> - Stopping the training job.</p> </li> </ul>
     * </dd> </dl>  <p>Valid values for <code>SecondaryStatus</code> are
     * subject to change. </p>  <p>We no longer support the following
     * secondary statuses:</p> <ul> <li> <p> <code>LaunchingMLInstances</code> </p>
     * </li> <li> <p> <code>PreparingTrainingStack</code> </p> </li> <li> <p>
     * <code>DownloadingTrainingImage</code> </p> </li> </ul>
     */
    inline SecondaryStatus GetSecondaryStatus() const { return m_secondaryStatus; }
    inline bool SecondaryStatusHasBeenSet() const { return m_secondaryStatusHasBeenSet; }
    inline void SetSecondaryStatus(SecondaryStatus value) { m_secondaryStatusHasBeenSet = true; m_secondaryStatus = value; }
    inline TrainingJob& WithSecondaryStatus(SecondaryStatus value) { SetSecondaryStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the training job failed, the reason it failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    TrainingJob& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Algorithm-specific parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHyperParameters() const { return m_hyperParameters; }
    inline bool HyperParametersHasBeenSet() const { return m_hyperParametersHasBeenSet; }
    template<typename HyperParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetHyperParameters(HyperParametersT&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters = std::forward<HyperParametersT>(value); }
    template<typename HyperParametersT = Aws::Map<Aws::String, Aws::String>>
    TrainingJob& WithHyperParameters(HyperParametersT&& value) { SetHyperParameters(std::forward<HyperParametersT>(value)); return *this;}
    template<typename HyperParametersKeyT = Aws::String, typename HyperParametersValueT = Aws::String>
    TrainingJob& AddHyperParameters(HyperParametersKeyT&& key, HyperParametersValueT&& value) {
      m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(std::forward<HyperParametersKeyT>(key), std::forward<HyperParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Information about the algorithm used for training, and algorithm
     * metadata.</p>
     */
    inline const AlgorithmSpecification& GetAlgorithmSpecification() const { return m_algorithmSpecification; }
    inline bool AlgorithmSpecificationHasBeenSet() const { return m_algorithmSpecificationHasBeenSet; }
    template<typename AlgorithmSpecificationT = AlgorithmSpecification>
    void SetAlgorithmSpecification(AlgorithmSpecificationT&& value) { m_algorithmSpecificationHasBeenSet = true; m_algorithmSpecification = std::forward<AlgorithmSpecificationT>(value); }
    template<typename AlgorithmSpecificationT = AlgorithmSpecification>
    TrainingJob& WithAlgorithmSpecification(AlgorithmSpecificationT&& value) { SetAlgorithmSpecification(std::forward<AlgorithmSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Identity and Access Management (IAM) role configured
     * for the training job.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    TrainingJob& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>Channel</code> objects that describes each data input
     * channel.</p> <p>Your input must be in the same Amazon Web Services region as
     * your training job.</p>
     */
    inline const Aws::Vector<Channel>& GetInputDataConfig() const { return m_inputDataConfig; }
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
    template<typename InputDataConfigT = Aws::Vector<Channel>>
    void SetInputDataConfig(InputDataConfigT&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::forward<InputDataConfigT>(value); }
    template<typename InputDataConfigT = Aws::Vector<Channel>>
    TrainingJob& WithInputDataConfig(InputDataConfigT&& value) { SetInputDataConfig(std::forward<InputDataConfigT>(value)); return *this;}
    template<typename InputDataConfigT = Channel>
    TrainingJob& AddInputDataConfig(InputDataConfigT&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig.emplace_back(std::forward<InputDataConfigT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The S3 path where model artifacts that you configured when creating the job
     * are stored. SageMaker creates subfolders for model artifacts.</p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const { return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    template<typename OutputDataConfigT = OutputDataConfig>
    void SetOutputDataConfig(OutputDataConfigT&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::forward<OutputDataConfigT>(value); }
    template<typename OutputDataConfigT = OutputDataConfig>
    TrainingJob& WithOutputDataConfig(OutputDataConfigT&& value) { SetOutputDataConfig(std::forward<OutputDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Resources, including ML compute instances and ML storage volumes, that are
     * configured for model training.</p>
     */
    inline const ResourceConfig& GetResourceConfig() const { return m_resourceConfig; }
    inline bool ResourceConfigHasBeenSet() const { return m_resourceConfigHasBeenSet; }
    template<typename ResourceConfigT = ResourceConfig>
    void SetResourceConfig(ResourceConfigT&& value) { m_resourceConfigHasBeenSet = true; m_resourceConfig = std::forward<ResourceConfigT>(value); }
    template<typename ResourceConfigT = ResourceConfig>
    TrainingJob& WithResourceConfig(ResourceConfigT&& value) { SetResourceConfig(std::forward<ResourceConfigT>(value)); return *this;}
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
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = VpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfig>
    TrainingJob& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
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
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }
    template<typename StoppingConditionT = StoppingCondition>
    void SetStoppingCondition(StoppingConditionT&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::forward<StoppingConditionT>(value); }
    template<typename StoppingConditionT = StoppingCondition>
    TrainingJob& WithStoppingCondition(StoppingConditionT&& value) { SetStoppingCondition(std::forward<StoppingConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the training job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    TrainingJob& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
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
    inline bool TrainingStartTimeHasBeenSet() const { return m_trainingStartTimeHasBeenSet; }
    template<typename TrainingStartTimeT = Aws::Utils::DateTime>
    void SetTrainingStartTime(TrainingStartTimeT&& value) { m_trainingStartTimeHasBeenSet = true; m_trainingStartTime = std::forward<TrainingStartTimeT>(value); }
    template<typename TrainingStartTimeT = Aws::Utils::DateTime>
    TrainingJob& WithTrainingStartTime(TrainingStartTimeT&& value) { SetTrainingStartTime(std::forward<TrainingStartTimeT>(value)); return *this;}
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
    inline bool TrainingEndTimeHasBeenSet() const { return m_trainingEndTimeHasBeenSet; }
    template<typename TrainingEndTimeT = Aws::Utils::DateTime>
    void SetTrainingEndTime(TrainingEndTimeT&& value) { m_trainingEndTimeHasBeenSet = true; m_trainingEndTime = std::forward<TrainingEndTimeT>(value); }
    template<typename TrainingEndTimeT = Aws::Utils::DateTime>
    TrainingJob& WithTrainingEndTime(TrainingEndTimeT&& value) { SetTrainingEndTime(std::forward<TrainingEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the status of the training job was last
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    TrainingJob& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A history of all of the secondary statuses that the training job has
     * transitioned through.</p>
     */
    inline const Aws::Vector<SecondaryStatusTransition>& GetSecondaryStatusTransitions() const { return m_secondaryStatusTransitions; }
    inline bool SecondaryStatusTransitionsHasBeenSet() const { return m_secondaryStatusTransitionsHasBeenSet; }
    template<typename SecondaryStatusTransitionsT = Aws::Vector<SecondaryStatusTransition>>
    void SetSecondaryStatusTransitions(SecondaryStatusTransitionsT&& value) { m_secondaryStatusTransitionsHasBeenSet = true; m_secondaryStatusTransitions = std::forward<SecondaryStatusTransitionsT>(value); }
    template<typename SecondaryStatusTransitionsT = Aws::Vector<SecondaryStatusTransition>>
    TrainingJob& WithSecondaryStatusTransitions(SecondaryStatusTransitionsT&& value) { SetSecondaryStatusTransitions(std::forward<SecondaryStatusTransitionsT>(value)); return *this;}
    template<typename SecondaryStatusTransitionsT = SecondaryStatusTransition>
    TrainingJob& AddSecondaryStatusTransitions(SecondaryStatusTransitionsT&& value) { m_secondaryStatusTransitionsHasBeenSet = true; m_secondaryStatusTransitions.emplace_back(std::forward<SecondaryStatusTransitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of final metric values that are set when the training job completes.
     * Used only if the training job was configured to use metrics.</p>
     */
    inline const Aws::Vector<MetricData>& GetFinalMetricDataList() const { return m_finalMetricDataList; }
    inline bool FinalMetricDataListHasBeenSet() const { return m_finalMetricDataListHasBeenSet; }
    template<typename FinalMetricDataListT = Aws::Vector<MetricData>>
    void SetFinalMetricDataList(FinalMetricDataListT&& value) { m_finalMetricDataListHasBeenSet = true; m_finalMetricDataList = std::forward<FinalMetricDataListT>(value); }
    template<typename FinalMetricDataListT = Aws::Vector<MetricData>>
    TrainingJob& WithFinalMetricDataList(FinalMetricDataListT&& value) { SetFinalMetricDataList(std::forward<FinalMetricDataListT>(value)); return *this;}
    template<typename FinalMetricDataListT = MetricData>
    TrainingJob& AddFinalMetricDataList(FinalMetricDataListT&& value) { m_finalMetricDataListHasBeenSet = true; m_finalMetricDataList.emplace_back(std::forward<FinalMetricDataListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the <code>TrainingJob</code> was created with network isolation, the value
     * is set to <code>true</code>. If network isolation is enabled, nodes can't
     * communicate beyond the VPC they run in.</p>
     */
    inline bool GetEnableNetworkIsolation() const { return m_enableNetworkIsolation; }
    inline bool EnableNetworkIsolationHasBeenSet() const { return m_enableNetworkIsolationHasBeenSet; }
    inline void SetEnableNetworkIsolation(bool value) { m_enableNetworkIsolationHasBeenSet = true; m_enableNetworkIsolation = value; }
    inline TrainingJob& WithEnableNetworkIsolation(bool value) { SetEnableNetworkIsolation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>To encrypt all communications between ML compute instances in distributed
     * training, choose <code>True</code>. Encryption provides greater security for
     * distributed training, but training might take longer. How long it takes depends
     * on the amount of communication between compute instances, especially if you use
     * a deep learning algorithm in distributed training.</p>
     */
    inline bool GetEnableInterContainerTrafficEncryption() const { return m_enableInterContainerTrafficEncryption; }
    inline bool EnableInterContainerTrafficEncryptionHasBeenSet() const { return m_enableInterContainerTrafficEncryptionHasBeenSet; }
    inline void SetEnableInterContainerTrafficEncryption(bool value) { m_enableInterContainerTrafficEncryptionHasBeenSet = true; m_enableInterContainerTrafficEncryption = value; }
    inline TrainingJob& WithEnableInterContainerTrafficEncryption(bool value) { SetEnableInterContainerTrafficEncryption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, enables managed spot training using Amazon EC2 Spot instances to
     * run training jobs instead of on-demand instances. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-managed-spot-training.html">Managed
     * Spot Training</a>.</p>
     */
    inline bool GetEnableManagedSpotTraining() const { return m_enableManagedSpotTraining; }
    inline bool EnableManagedSpotTrainingHasBeenSet() const { return m_enableManagedSpotTrainingHasBeenSet; }
    inline void SetEnableManagedSpotTraining(bool value) { m_enableManagedSpotTrainingHasBeenSet = true; m_enableManagedSpotTraining = value; }
    inline TrainingJob& WithEnableManagedSpotTraining(bool value) { SetEnableManagedSpotTraining(value); return *this;}
    ///@}

    ///@{
    
    inline const CheckpointConfig& GetCheckpointConfig() const { return m_checkpointConfig; }
    inline bool CheckpointConfigHasBeenSet() const { return m_checkpointConfigHasBeenSet; }
    template<typename CheckpointConfigT = CheckpointConfig>
    void SetCheckpointConfig(CheckpointConfigT&& value) { m_checkpointConfigHasBeenSet = true; m_checkpointConfig = std::forward<CheckpointConfigT>(value); }
    template<typename CheckpointConfigT = CheckpointConfig>
    TrainingJob& WithCheckpointConfig(CheckpointConfigT&& value) { SetCheckpointConfig(std::forward<CheckpointConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The training time in seconds.</p>
     */
    inline int GetTrainingTimeInSeconds() const { return m_trainingTimeInSeconds; }
    inline bool TrainingTimeInSecondsHasBeenSet() const { return m_trainingTimeInSecondsHasBeenSet; }
    inline void SetTrainingTimeInSeconds(int value) { m_trainingTimeInSecondsHasBeenSet = true; m_trainingTimeInSeconds = value; }
    inline TrainingJob& WithTrainingTimeInSeconds(int value) { SetTrainingTimeInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The billable time in seconds.</p>
     */
    inline int GetBillableTimeInSeconds() const { return m_billableTimeInSeconds; }
    inline bool BillableTimeInSecondsHasBeenSet() const { return m_billableTimeInSecondsHasBeenSet; }
    inline void SetBillableTimeInSeconds(int value) { m_billableTimeInSecondsHasBeenSet = true; m_billableTimeInSeconds = value; }
    inline TrainingJob& WithBillableTimeInSeconds(int value) { SetBillableTimeInSeconds(value); return *this;}
    ///@}

    ///@{
    
    inline const DebugHookConfig& GetDebugHookConfig() const { return m_debugHookConfig; }
    inline bool DebugHookConfigHasBeenSet() const { return m_debugHookConfigHasBeenSet; }
    template<typename DebugHookConfigT = DebugHookConfig>
    void SetDebugHookConfig(DebugHookConfigT&& value) { m_debugHookConfigHasBeenSet = true; m_debugHookConfig = std::forward<DebugHookConfigT>(value); }
    template<typename DebugHookConfigT = DebugHookConfig>
    TrainingJob& WithDebugHookConfig(DebugHookConfigT&& value) { SetDebugHookConfig(std::forward<DebugHookConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ExperimentConfig& GetExperimentConfig() const { return m_experimentConfig; }
    inline bool ExperimentConfigHasBeenSet() const { return m_experimentConfigHasBeenSet; }
    template<typename ExperimentConfigT = ExperimentConfig>
    void SetExperimentConfig(ExperimentConfigT&& value) { m_experimentConfigHasBeenSet = true; m_experimentConfig = std::forward<ExperimentConfigT>(value); }
    template<typename ExperimentConfigT = ExperimentConfig>
    TrainingJob& WithExperimentConfig(ExperimentConfigT&& value) { SetExperimentConfig(std::forward<ExperimentConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the debug rule configuration.</p>
     */
    inline const Aws::Vector<DebugRuleConfiguration>& GetDebugRuleConfigurations() const { return m_debugRuleConfigurations; }
    inline bool DebugRuleConfigurationsHasBeenSet() const { return m_debugRuleConfigurationsHasBeenSet; }
    template<typename DebugRuleConfigurationsT = Aws::Vector<DebugRuleConfiguration>>
    void SetDebugRuleConfigurations(DebugRuleConfigurationsT&& value) { m_debugRuleConfigurationsHasBeenSet = true; m_debugRuleConfigurations = std::forward<DebugRuleConfigurationsT>(value); }
    template<typename DebugRuleConfigurationsT = Aws::Vector<DebugRuleConfiguration>>
    TrainingJob& WithDebugRuleConfigurations(DebugRuleConfigurationsT&& value) { SetDebugRuleConfigurations(std::forward<DebugRuleConfigurationsT>(value)); return *this;}
    template<typename DebugRuleConfigurationsT = DebugRuleConfiguration>
    TrainingJob& AddDebugRuleConfigurations(DebugRuleConfigurationsT&& value) { m_debugRuleConfigurationsHasBeenSet = true; m_debugRuleConfigurations.emplace_back(std::forward<DebugRuleConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const TensorBoardOutputConfig& GetTensorBoardOutputConfig() const { return m_tensorBoardOutputConfig; }
    inline bool TensorBoardOutputConfigHasBeenSet() const { return m_tensorBoardOutputConfigHasBeenSet; }
    template<typename TensorBoardOutputConfigT = TensorBoardOutputConfig>
    void SetTensorBoardOutputConfig(TensorBoardOutputConfigT&& value) { m_tensorBoardOutputConfigHasBeenSet = true; m_tensorBoardOutputConfig = std::forward<TensorBoardOutputConfigT>(value); }
    template<typename TensorBoardOutputConfigT = TensorBoardOutputConfig>
    TrainingJob& WithTensorBoardOutputConfig(TensorBoardOutputConfigT&& value) { SetTensorBoardOutputConfig(std::forward<TensorBoardOutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the evaluation status of the rules for the training
     * job.</p>
     */
    inline const Aws::Vector<DebugRuleEvaluationStatus>& GetDebugRuleEvaluationStatuses() const { return m_debugRuleEvaluationStatuses; }
    inline bool DebugRuleEvaluationStatusesHasBeenSet() const { return m_debugRuleEvaluationStatusesHasBeenSet; }
    template<typename DebugRuleEvaluationStatusesT = Aws::Vector<DebugRuleEvaluationStatus>>
    void SetDebugRuleEvaluationStatuses(DebugRuleEvaluationStatusesT&& value) { m_debugRuleEvaluationStatusesHasBeenSet = true; m_debugRuleEvaluationStatuses = std::forward<DebugRuleEvaluationStatusesT>(value); }
    template<typename DebugRuleEvaluationStatusesT = Aws::Vector<DebugRuleEvaluationStatus>>
    TrainingJob& WithDebugRuleEvaluationStatuses(DebugRuleEvaluationStatusesT&& value) { SetDebugRuleEvaluationStatuses(std::forward<DebugRuleEvaluationStatusesT>(value)); return *this;}
    template<typename DebugRuleEvaluationStatusesT = DebugRuleEvaluationStatus>
    TrainingJob& AddDebugRuleEvaluationStatuses(DebugRuleEvaluationStatusesT&& value) { m_debugRuleEvaluationStatusesHasBeenSet = true; m_debugRuleEvaluationStatuses.emplace_back(std::forward<DebugRuleEvaluationStatusesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ProfilerConfig& GetProfilerConfig() const { return m_profilerConfig; }
    inline bool ProfilerConfigHasBeenSet() const { return m_profilerConfigHasBeenSet; }
    template<typename ProfilerConfigT = ProfilerConfig>
    void SetProfilerConfig(ProfilerConfigT&& value) { m_profilerConfigHasBeenSet = true; m_profilerConfig = std::forward<ProfilerConfigT>(value); }
    template<typename ProfilerConfigT = ProfilerConfig>
    TrainingJob& WithProfilerConfig(ProfilerConfigT&& value) { SetProfilerConfig(std::forward<ProfilerConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    TrainingJob& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    template<typename EnvironmentKeyT = Aws::String, typename EnvironmentValueT = Aws::String>
    TrainingJob& AddEnvironment(EnvironmentKeyT&& key, EnvironmentValueT&& value) {
      m_environmentHasBeenSet = true; m_environment.emplace(std::forward<EnvironmentKeyT>(key), std::forward<EnvironmentValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The number of times to retry the job when the job fails due to an
     * <code>InternalServerError</code>.</p>
     */
    inline const RetryStrategy& GetRetryStrategy() const { return m_retryStrategy; }
    inline bool RetryStrategyHasBeenSet() const { return m_retryStrategyHasBeenSet; }
    template<typename RetryStrategyT = RetryStrategy>
    void SetRetryStrategy(RetryStrategyT&& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = std::forward<RetryStrategyT>(value); }
    template<typename RetryStrategyT = RetryStrategy>
    TrainingJob& WithRetryStrategy(RetryStrategyT&& value) { SetRetryStrategy(std::forward<RetryStrategyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    TrainingJob& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    TrainingJob& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet = false;

    RetryStrategy m_retryStrategy;
    bool m_retryStrategyHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
