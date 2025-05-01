/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/AlgorithmSpecification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/OutputDataConfig.h>
#include <aws/sagemaker/model/ResourceConfig.h>
#include <aws/sagemaker/model/VpcConfig.h>
#include <aws/sagemaker/model/StoppingCondition.h>
#include <aws/sagemaker/model/CheckpointConfig.h>
#include <aws/sagemaker/model/DebugHookConfig.h>
#include <aws/sagemaker/model/TensorBoardOutputConfig.h>
#include <aws/sagemaker/model/ExperimentConfig.h>
#include <aws/sagemaker/model/ProfilerConfig.h>
#include <aws/sagemaker/model/RetryStrategy.h>
#include <aws/sagemaker/model/RemoteDebugConfig.h>
#include <aws/sagemaker/model/InfraCheckConfig.h>
#include <aws/sagemaker/model/SessionChainingConfig.h>
#include <aws/sagemaker/model/Channel.h>
#include <aws/sagemaker/model/Tag.h>
#include <aws/sagemaker/model/DebugRuleConfiguration.h>
#include <aws/sagemaker/model/ProfilerRuleConfiguration.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateTrainingJobRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateTrainingJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTrainingJob"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the training job. The name must be unique within an Amazon Web
     * Services Region in an Amazon Web Services account. </p>
     */
    inline const Aws::String& GetTrainingJobName() const { return m_trainingJobName; }
    inline bool TrainingJobNameHasBeenSet() const { return m_trainingJobNameHasBeenSet; }
    template<typename TrainingJobNameT = Aws::String>
    void SetTrainingJobName(TrainingJobNameT&& value) { m_trainingJobNameHasBeenSet = true; m_trainingJobName = std::forward<TrainingJobNameT>(value); }
    template<typename TrainingJobNameT = Aws::String>
    CreateTrainingJobRequest& WithTrainingJobName(TrainingJobNameT&& value) { SetTrainingJobName(std::forward<TrainingJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Algorithm-specific parameters that influence the quality of the model. You
     * set hyperparameters before you start the learning process. For a list of
     * hyperparameters for each training algorithm provided by SageMaker, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * </p> <p>You can specify a maximum of 100 hyperparameters. Each hyperparameter is
     * a key-value pair. Each key and value is limited to 256 characters, as specified
     * by the <code>Length Constraint</code>. </p>  <p>Do not include any
     * security-sensitive information including account access IDs, secrets, or tokens
     * in any hyperparameter fields. As part of the shared responsibility model, you
     * are responsible for any potential exposure, unauthorized access, or compromise
     * of your sensitive data if caused by any security-sensitive information included
     * in the request hyperparameter variable or plain text fields.</p> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHyperParameters() const { return m_hyperParameters; }
    inline bool HyperParametersHasBeenSet() const { return m_hyperParametersHasBeenSet; }
    template<typename HyperParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetHyperParameters(HyperParametersT&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters = std::forward<HyperParametersT>(value); }
    template<typename HyperParametersT = Aws::Map<Aws::String, Aws::String>>
    CreateTrainingJobRequest& WithHyperParameters(HyperParametersT&& value) { SetHyperParameters(std::forward<HyperParametersT>(value)); return *this;}
    template<typename HyperParametersKeyT = Aws::String, typename HyperParametersValueT = Aws::String>
    CreateTrainingJobRequest& AddHyperParameters(HyperParametersKeyT&& key, HyperParametersValueT&& value) {
      m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(std::forward<HyperParametersKeyT>(key), std::forward<HyperParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The registry path of the Docker image that contains the training algorithm
     * and algorithm-specific metadata, including the input mode. For more information
     * about algorithms provided by SageMaker, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * For information about providing your own algorithms, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>. </p>
     */
    inline const AlgorithmSpecification& GetAlgorithmSpecification() const { return m_algorithmSpecification; }
    inline bool AlgorithmSpecificationHasBeenSet() const { return m_algorithmSpecificationHasBeenSet; }
    template<typename AlgorithmSpecificationT = AlgorithmSpecification>
    void SetAlgorithmSpecification(AlgorithmSpecificationT&& value) { m_algorithmSpecificationHasBeenSet = true; m_algorithmSpecification = std::forward<AlgorithmSpecificationT>(value); }
    template<typename AlgorithmSpecificationT = AlgorithmSpecification>
    CreateTrainingJobRequest& WithAlgorithmSpecification(AlgorithmSpecificationT&& value) { SetAlgorithmSpecification(std::forward<AlgorithmSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that SageMaker can assume to
     * perform tasks on your behalf. </p> <p>During model training, SageMaker needs
     * your permission to read input data from an S3 bucket, download a Docker image
     * that contains training code, write model artifacts to an S3 bucket, write logs
     * to Amazon CloudWatch Logs, and publish metrics to Amazon CloudWatch. You grant
     * permissions for all of these tasks to an IAM role. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">SageMaker
     * Roles</a>. </p>  <p>To be able to pass this role to SageMaker, the caller
     * of this API must have the <code>iam:PassRole</code> permission.</p> 
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateTrainingJobRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>Channel</code> objects. Each channel is a named input
     * source. <code>InputDataConfig</code> describes the input data and its location.
     * </p> <p>Algorithms can accept input data from one or more channels. For example,
     * an algorithm might have two channels of input data, <code>training_data</code>
     * and <code>validation_data</code>. The configuration for each channel provides
     * the S3, EFS, or FSx location where the input data is stored. It also provides
     * information about the stored data: the MIME type, compression method, and
     * whether the data is wrapped in RecordIO format. </p> <p>Depending on the input
     * mode that the algorithm supports, SageMaker either copies input data files from
     * an S3 bucket to a local directory in the Docker container, or makes it available
     * as input streams. For example, if you specify an EFS location, input data files
     * are available as input streams. They do not need to be downloaded.</p> <p>Your
     * input must be in the same Amazon Web Services region as your training job.</p>
     */
    inline const Aws::Vector<Channel>& GetInputDataConfig() const { return m_inputDataConfig; }
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
    template<typename InputDataConfigT = Aws::Vector<Channel>>
    void SetInputDataConfig(InputDataConfigT&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::forward<InputDataConfigT>(value); }
    template<typename InputDataConfigT = Aws::Vector<Channel>>
    CreateTrainingJobRequest& WithInputDataConfig(InputDataConfigT&& value) { SetInputDataConfig(std::forward<InputDataConfigT>(value)); return *this;}
    template<typename InputDataConfigT = Channel>
    CreateTrainingJobRequest& AddInputDataConfig(InputDataConfigT&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig.emplace_back(std::forward<InputDataConfigT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the path to the S3 location where you want to store model
     * artifacts. SageMaker creates subfolders for the artifacts. </p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const { return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    template<typename OutputDataConfigT = OutputDataConfig>
    void SetOutputDataConfig(OutputDataConfigT&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::forward<OutputDataConfigT>(value); }
    template<typename OutputDataConfigT = OutputDataConfig>
    CreateTrainingJobRequest& WithOutputDataConfig(OutputDataConfigT&& value) { SetOutputDataConfig(std::forward<OutputDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resources, including the ML compute instances and ML storage volumes, to
     * use for model training. </p> <p>ML storage volumes store model artifacts and
     * incremental states. Training algorithms might also use ML storage volumes for
     * scratch space. If you want SageMaker to use the ML storage volume to store the
     * training data, choose <code>File</code> as the <code>TrainingInputMode</code> in
     * the algorithm specification. For distributed training algorithms, specify an
     * instance count greater than 1.</p>
     */
    inline const ResourceConfig& GetResourceConfig() const { return m_resourceConfig; }
    inline bool ResourceConfigHasBeenSet() const { return m_resourceConfigHasBeenSet; }
    template<typename ResourceConfigT = ResourceConfig>
    void SetResourceConfig(ResourceConfigT&& value) { m_resourceConfigHasBeenSet = true; m_resourceConfig = std::forward<ResourceConfigT>(value); }
    template<typename ResourceConfigT = ResourceConfig>
    CreateTrainingJobRequest& WithResourceConfig(ResourceConfigT&& value) { SetResourceConfig(std::forward<ResourceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_VpcConfig.html">VpcConfig</a>
     * object that specifies the VPC that you want your training job to connect to.
     * Control access to and from your training container by configuring the VPC. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-vpc.html">Protect
     * Training Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = VpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfig>
    CreateTrainingJobRequest& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
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
    CreateTrainingJobRequest& WithStoppingCondition(StoppingConditionT&& value) { SetStoppingCondition(std::forward<StoppingConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>  <p>Do not include any
     * security-sensitive information including account access IDs, secrets, or tokens
     * in any tags. As part of the shared responsibility model, you are responsible for
     * any potential exposure, unauthorized access, or compromise of your sensitive
     * data if caused by any security-sensitive information included in the request tag
     * variable or plain text fields.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateTrainingJobRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateTrainingJobRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Isolates the training container. No inbound or outbound network calls can be
     * made, except for calls between peers within a training cluster for distributed
     * training. If you enable network isolation for training jobs that are configured
     * to use a VPC, SageMaker downloads and uploads customer data and model artifacts
     * through the specified VPC, but the training container does not have network
     * access.</p>
     */
    inline bool GetEnableNetworkIsolation() const { return m_enableNetworkIsolation; }
    inline bool EnableNetworkIsolationHasBeenSet() const { return m_enableNetworkIsolationHasBeenSet; }
    inline void SetEnableNetworkIsolation(bool value) { m_enableNetworkIsolationHasBeenSet = true; m_enableNetworkIsolation = value; }
    inline CreateTrainingJobRequest& WithEnableNetworkIsolation(bool value) { SetEnableNetworkIsolation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>To encrypt all communications between ML compute instances in distributed
     * training, choose <code>True</code>. Encryption provides greater security for
     * distributed training, but training might take longer. How long it takes depends
     * on the amount of communication between compute instances, especially if you use
     * a deep learning algorithm in distributed training. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-encrypt.html">Protect
     * Communications Between ML Compute Instances in a Distributed Training
     * Job</a>.</p>
     */
    inline bool GetEnableInterContainerTrafficEncryption() const { return m_enableInterContainerTrafficEncryption; }
    inline bool EnableInterContainerTrafficEncryptionHasBeenSet() const { return m_enableInterContainerTrafficEncryptionHasBeenSet; }
    inline void SetEnableInterContainerTrafficEncryption(bool value) { m_enableInterContainerTrafficEncryptionHasBeenSet = true; m_enableInterContainerTrafficEncryption = value; }
    inline CreateTrainingJobRequest& WithEnableInterContainerTrafficEncryption(bool value) { SetEnableInterContainerTrafficEncryption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>To train models using managed spot training, choose <code>True</code>.
     * Managed spot training provides a fully managed and scalable infrastructure for
     * training machine learning models. this option is useful when training jobs can
     * be interrupted and when there is flexibility when the training job is run. </p>
     * <p>The complete and intermediate results of jobs are stored in an Amazon S3
     * bucket, and can be used as a starting point to train models incrementally.
     * Amazon SageMaker provides metrics and logs in CloudWatch. They can be used to
     * see when managed spot training jobs are running, interrupted, resumed, or
     * completed. </p>
     */
    inline bool GetEnableManagedSpotTraining() const { return m_enableManagedSpotTraining; }
    inline bool EnableManagedSpotTrainingHasBeenSet() const { return m_enableManagedSpotTrainingHasBeenSet; }
    inline void SetEnableManagedSpotTraining(bool value) { m_enableManagedSpotTrainingHasBeenSet = true; m_enableManagedSpotTraining = value; }
    inline CreateTrainingJobRequest& WithEnableManagedSpotTraining(bool value) { SetEnableManagedSpotTraining(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the output location for managed spot training
     * checkpoint data.</p>
     */
    inline const CheckpointConfig& GetCheckpointConfig() const { return m_checkpointConfig; }
    inline bool CheckpointConfigHasBeenSet() const { return m_checkpointConfigHasBeenSet; }
    template<typename CheckpointConfigT = CheckpointConfig>
    void SetCheckpointConfig(CheckpointConfigT&& value) { m_checkpointConfigHasBeenSet = true; m_checkpointConfig = std::forward<CheckpointConfigT>(value); }
    template<typename CheckpointConfigT = CheckpointConfig>
    CreateTrainingJobRequest& WithCheckpointConfig(CheckpointConfigT&& value) { SetCheckpointConfig(std::forward<CheckpointConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DebugHookConfig& GetDebugHookConfig() const { return m_debugHookConfig; }
    inline bool DebugHookConfigHasBeenSet() const { return m_debugHookConfigHasBeenSet; }
    template<typename DebugHookConfigT = DebugHookConfig>
    void SetDebugHookConfig(DebugHookConfigT&& value) { m_debugHookConfigHasBeenSet = true; m_debugHookConfig = std::forward<DebugHookConfigT>(value); }
    template<typename DebugHookConfigT = DebugHookConfig>
    CreateTrainingJobRequest& WithDebugHookConfig(DebugHookConfigT&& value) { SetDebugHookConfig(std::forward<DebugHookConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for Amazon SageMaker Debugger rules for debugging
     * output tensors.</p>
     */
    inline const Aws::Vector<DebugRuleConfiguration>& GetDebugRuleConfigurations() const { return m_debugRuleConfigurations; }
    inline bool DebugRuleConfigurationsHasBeenSet() const { return m_debugRuleConfigurationsHasBeenSet; }
    template<typename DebugRuleConfigurationsT = Aws::Vector<DebugRuleConfiguration>>
    void SetDebugRuleConfigurations(DebugRuleConfigurationsT&& value) { m_debugRuleConfigurationsHasBeenSet = true; m_debugRuleConfigurations = std::forward<DebugRuleConfigurationsT>(value); }
    template<typename DebugRuleConfigurationsT = Aws::Vector<DebugRuleConfiguration>>
    CreateTrainingJobRequest& WithDebugRuleConfigurations(DebugRuleConfigurationsT&& value) { SetDebugRuleConfigurations(std::forward<DebugRuleConfigurationsT>(value)); return *this;}
    template<typename DebugRuleConfigurationsT = DebugRuleConfiguration>
    CreateTrainingJobRequest& AddDebugRuleConfigurations(DebugRuleConfigurationsT&& value) { m_debugRuleConfigurationsHasBeenSet = true; m_debugRuleConfigurations.emplace_back(std::forward<DebugRuleConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const TensorBoardOutputConfig& GetTensorBoardOutputConfig() const { return m_tensorBoardOutputConfig; }
    inline bool TensorBoardOutputConfigHasBeenSet() const { return m_tensorBoardOutputConfigHasBeenSet; }
    template<typename TensorBoardOutputConfigT = TensorBoardOutputConfig>
    void SetTensorBoardOutputConfig(TensorBoardOutputConfigT&& value) { m_tensorBoardOutputConfigHasBeenSet = true; m_tensorBoardOutputConfig = std::forward<TensorBoardOutputConfigT>(value); }
    template<typename TensorBoardOutputConfigT = TensorBoardOutputConfig>
    CreateTrainingJobRequest& WithTensorBoardOutputConfig(TensorBoardOutputConfigT&& value) { SetTensorBoardOutputConfig(std::forward<TensorBoardOutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ExperimentConfig& GetExperimentConfig() const { return m_experimentConfig; }
    inline bool ExperimentConfigHasBeenSet() const { return m_experimentConfigHasBeenSet; }
    template<typename ExperimentConfigT = ExperimentConfig>
    void SetExperimentConfig(ExperimentConfigT&& value) { m_experimentConfigHasBeenSet = true; m_experimentConfig = std::forward<ExperimentConfigT>(value); }
    template<typename ExperimentConfigT = ExperimentConfig>
    CreateTrainingJobRequest& WithExperimentConfig(ExperimentConfigT&& value) { SetExperimentConfig(std::forward<ExperimentConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ProfilerConfig& GetProfilerConfig() const { return m_profilerConfig; }
    inline bool ProfilerConfigHasBeenSet() const { return m_profilerConfigHasBeenSet; }
    template<typename ProfilerConfigT = ProfilerConfig>
    void SetProfilerConfig(ProfilerConfigT&& value) { m_profilerConfigHasBeenSet = true; m_profilerConfig = std::forward<ProfilerConfigT>(value); }
    template<typename ProfilerConfigT = ProfilerConfig>
    CreateTrainingJobRequest& WithProfilerConfig(ProfilerConfigT&& value) { SetProfilerConfig(std::forward<ProfilerConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for Amazon SageMaker Debugger rules for profiling
     * system and framework metrics.</p>
     */
    inline const Aws::Vector<ProfilerRuleConfiguration>& GetProfilerRuleConfigurations() const { return m_profilerRuleConfigurations; }
    inline bool ProfilerRuleConfigurationsHasBeenSet() const { return m_profilerRuleConfigurationsHasBeenSet; }
    template<typename ProfilerRuleConfigurationsT = Aws::Vector<ProfilerRuleConfiguration>>
    void SetProfilerRuleConfigurations(ProfilerRuleConfigurationsT&& value) { m_profilerRuleConfigurationsHasBeenSet = true; m_profilerRuleConfigurations = std::forward<ProfilerRuleConfigurationsT>(value); }
    template<typename ProfilerRuleConfigurationsT = Aws::Vector<ProfilerRuleConfiguration>>
    CreateTrainingJobRequest& WithProfilerRuleConfigurations(ProfilerRuleConfigurationsT&& value) { SetProfilerRuleConfigurations(std::forward<ProfilerRuleConfigurationsT>(value)); return *this;}
    template<typename ProfilerRuleConfigurationsT = ProfilerRuleConfiguration>
    CreateTrainingJobRequest& AddProfilerRuleConfigurations(ProfilerRuleConfigurationsT&& value) { m_profilerRuleConfigurationsHasBeenSet = true; m_profilerRuleConfigurations.emplace_back(std::forward<ProfilerRuleConfigurationsT>(value)); return *this; }
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
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    CreateTrainingJobRequest& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    template<typename EnvironmentKeyT = Aws::String, typename EnvironmentValueT = Aws::String>
    CreateTrainingJobRequest& AddEnvironment(EnvironmentKeyT&& key, EnvironmentValueT&& value) {
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
    CreateTrainingJobRequest& WithRetryStrategy(RetryStrategyT&& value) { SetRetryStrategy(std::forward<RetryStrategyT>(value)); return *this;}
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
    inline bool RemoteDebugConfigHasBeenSet() const { return m_remoteDebugConfigHasBeenSet; }
    template<typename RemoteDebugConfigT = RemoteDebugConfig>
    void SetRemoteDebugConfig(RemoteDebugConfigT&& value) { m_remoteDebugConfigHasBeenSet = true; m_remoteDebugConfig = std::forward<RemoteDebugConfigT>(value); }
    template<typename RemoteDebugConfigT = RemoteDebugConfig>
    CreateTrainingJobRequest& WithRemoteDebugConfig(RemoteDebugConfigT&& value) { SetRemoteDebugConfig(std::forward<RemoteDebugConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the infrastructure health check configuration for
     * the training job.</p>
     */
    inline const InfraCheckConfig& GetInfraCheckConfig() const { return m_infraCheckConfig; }
    inline bool InfraCheckConfigHasBeenSet() const { return m_infraCheckConfigHasBeenSet; }
    template<typename InfraCheckConfigT = InfraCheckConfig>
    void SetInfraCheckConfig(InfraCheckConfigT&& value) { m_infraCheckConfigHasBeenSet = true; m_infraCheckConfig = std::forward<InfraCheckConfigT>(value); }
    template<typename InfraCheckConfigT = InfraCheckConfig>
    CreateTrainingJobRequest& WithInfraCheckConfig(InfraCheckConfigT&& value) { SetInfraCheckConfig(std::forward<InfraCheckConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about attribute-based access control (ABAC) for the
     * training job.</p>
     */
    inline const SessionChainingConfig& GetSessionChainingConfig() const { return m_sessionChainingConfig; }
    inline bool SessionChainingConfigHasBeenSet() const { return m_sessionChainingConfigHasBeenSet; }
    template<typename SessionChainingConfigT = SessionChainingConfig>
    void SetSessionChainingConfig(SessionChainingConfigT&& value) { m_sessionChainingConfigHasBeenSet = true; m_sessionChainingConfig = std::forward<SessionChainingConfigT>(value); }
    template<typename SessionChainingConfigT = SessionChainingConfig>
    CreateTrainingJobRequest& WithSessionChainingConfig(SessionChainingConfigT&& value) { SetSessionChainingConfig(std::forward<SessionChainingConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trainingJobName;
    bool m_trainingJobNameHasBeenSet = false;

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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_enableNetworkIsolation{false};
    bool m_enableNetworkIsolationHasBeenSet = false;

    bool m_enableInterContainerTrafficEncryption{false};
    bool m_enableInterContainerTrafficEncryptionHasBeenSet = false;

    bool m_enableManagedSpotTraining{false};
    bool m_enableManagedSpotTrainingHasBeenSet = false;

    CheckpointConfig m_checkpointConfig;
    bool m_checkpointConfigHasBeenSet = false;

    DebugHookConfig m_debugHookConfig;
    bool m_debugHookConfigHasBeenSet = false;

    Aws::Vector<DebugRuleConfiguration> m_debugRuleConfigurations;
    bool m_debugRuleConfigurationsHasBeenSet = false;

    TensorBoardOutputConfig m_tensorBoardOutputConfig;
    bool m_tensorBoardOutputConfigHasBeenSet = false;

    ExperimentConfig m_experimentConfig;
    bool m_experimentConfigHasBeenSet = false;

    ProfilerConfig m_profilerConfig;
    bool m_profilerConfigHasBeenSet = false;

    Aws::Vector<ProfilerRuleConfiguration> m_profilerRuleConfigurations;
    bool m_profilerRuleConfigurationsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet = false;

    RetryStrategy m_retryStrategy;
    bool m_retryStrategyHasBeenSet = false;

    RemoteDebugConfig m_remoteDebugConfig;
    bool m_remoteDebugConfigHasBeenSet = false;

    InfraCheckConfig m_infraCheckConfig;
    bool m_infraCheckConfigHasBeenSet = false;

    SessionChainingConfig m_sessionChainingConfig;
    bool m_sessionChainingConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
