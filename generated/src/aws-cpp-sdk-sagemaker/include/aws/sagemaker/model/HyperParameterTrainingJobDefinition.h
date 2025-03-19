/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HyperParameterTuningJobObjective.h>
#include <aws/sagemaker/model/ParameterRanges.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/HyperParameterAlgorithmSpecification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/VpcConfig.h>
#include <aws/sagemaker/model/OutputDataConfig.h>
#include <aws/sagemaker/model/ResourceConfig.h>
#include <aws/sagemaker/model/HyperParameterTuningResourceConfig.h>
#include <aws/sagemaker/model/StoppingCondition.h>
#include <aws/sagemaker/model/CheckpointConfig.h>
#include <aws/sagemaker/model/RetryStrategy.h>
#include <aws/sagemaker/model/Channel.h>
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
   * <p>Defines the training jobs launched by a hyperparameter tuning
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HyperParameterTrainingJobDefinition">AWS
   * API Reference</a></p>
   */
  class HyperParameterTrainingJobDefinition
  {
  public:
    AWS_SAGEMAKER_API HyperParameterTrainingJobDefinition() = default;
    AWS_SAGEMAKER_API HyperParameterTrainingJobDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HyperParameterTrainingJobDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The job definition name.</p>
     */
    inline const Aws::String& GetDefinitionName() const { return m_definitionName; }
    inline bool DefinitionNameHasBeenSet() const { return m_definitionNameHasBeenSet; }
    template<typename DefinitionNameT = Aws::String>
    void SetDefinitionName(DefinitionNameT&& value) { m_definitionNameHasBeenSet = true; m_definitionName = std::forward<DefinitionNameT>(value); }
    template<typename DefinitionNameT = Aws::String>
    HyperParameterTrainingJobDefinition& WithDefinitionName(DefinitionNameT&& value) { SetDefinitionName(std::forward<DefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const HyperParameterTuningJobObjective& GetTuningObjective() const { return m_tuningObjective; }
    inline bool TuningObjectiveHasBeenSet() const { return m_tuningObjectiveHasBeenSet; }
    template<typename TuningObjectiveT = HyperParameterTuningJobObjective>
    void SetTuningObjective(TuningObjectiveT&& value) { m_tuningObjectiveHasBeenSet = true; m_tuningObjective = std::forward<TuningObjectiveT>(value); }
    template<typename TuningObjectiveT = HyperParameterTuningJobObjective>
    HyperParameterTrainingJobDefinition& WithTuningObjective(TuningObjectiveT&& value) { SetTuningObjective(std::forward<TuningObjectiveT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ParameterRanges& GetHyperParameterRanges() const { return m_hyperParameterRanges; }
    inline bool HyperParameterRangesHasBeenSet() const { return m_hyperParameterRangesHasBeenSet; }
    template<typename HyperParameterRangesT = ParameterRanges>
    void SetHyperParameterRanges(HyperParameterRangesT&& value) { m_hyperParameterRangesHasBeenSet = true; m_hyperParameterRanges = std::forward<HyperParameterRangesT>(value); }
    template<typename HyperParameterRangesT = ParameterRanges>
    HyperParameterTrainingJobDefinition& WithHyperParameterRanges(HyperParameterRangesT&& value) { SetHyperParameterRanges(std::forward<HyperParameterRangesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the values of hyperparameters that do not change for the tuning
     * job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStaticHyperParameters() const { return m_staticHyperParameters; }
    inline bool StaticHyperParametersHasBeenSet() const { return m_staticHyperParametersHasBeenSet; }
    template<typename StaticHyperParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetStaticHyperParameters(StaticHyperParametersT&& value) { m_staticHyperParametersHasBeenSet = true; m_staticHyperParameters = std::forward<StaticHyperParametersT>(value); }
    template<typename StaticHyperParametersT = Aws::Map<Aws::String, Aws::String>>
    HyperParameterTrainingJobDefinition& WithStaticHyperParameters(StaticHyperParametersT&& value) { SetStaticHyperParameters(std::forward<StaticHyperParametersT>(value)); return *this;}
    template<typename StaticHyperParametersKeyT = Aws::String, typename StaticHyperParametersValueT = Aws::String>
    HyperParameterTrainingJobDefinition& AddStaticHyperParameters(StaticHyperParametersKeyT&& key, StaticHyperParametersValueT&& value) {
      m_staticHyperParametersHasBeenSet = true; m_staticHyperParameters.emplace(std::forward<StaticHyperParametersKeyT>(key), std::forward<StaticHyperParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterAlgorithmSpecification.html">HyperParameterAlgorithmSpecification</a>
     * object that specifies the resource algorithm to use for the training jobs that
     * the tuning job launches.</p>
     */
    inline const HyperParameterAlgorithmSpecification& GetAlgorithmSpecification() const { return m_algorithmSpecification; }
    inline bool AlgorithmSpecificationHasBeenSet() const { return m_algorithmSpecificationHasBeenSet; }
    template<typename AlgorithmSpecificationT = HyperParameterAlgorithmSpecification>
    void SetAlgorithmSpecification(AlgorithmSpecificationT&& value) { m_algorithmSpecificationHasBeenSet = true; m_algorithmSpecification = std::forward<AlgorithmSpecificationT>(value); }
    template<typename AlgorithmSpecificationT = HyperParameterAlgorithmSpecification>
    HyperParameterTrainingJobDefinition& WithAlgorithmSpecification(AlgorithmSpecificationT&& value) { SetAlgorithmSpecification(std::forward<AlgorithmSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the training
     * jobs that the tuning job launches.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    HyperParameterTrainingJobDefinition& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_Channel.html">Channel</a>
     * objects that specify the input for the training jobs that the tuning job
     * launches.</p>
     */
    inline const Aws::Vector<Channel>& GetInputDataConfig() const { return m_inputDataConfig; }
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
    template<typename InputDataConfigT = Aws::Vector<Channel>>
    void SetInputDataConfig(InputDataConfigT&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::forward<InputDataConfigT>(value); }
    template<typename InputDataConfigT = Aws::Vector<Channel>>
    HyperParameterTrainingJobDefinition& WithInputDataConfig(InputDataConfigT&& value) { SetInputDataConfig(std::forward<InputDataConfigT>(value)); return *this;}
    template<typename InputDataConfigT = Channel>
    HyperParameterTrainingJobDefinition& AddInputDataConfig(InputDataConfigT&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig.emplace_back(std::forward<InputDataConfigT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_VpcConfig.html">VpcConfig</a>
     * object that specifies the VPC that you want the training jobs that this
     * hyperparameter tuning job launches to connect to. Control access to and from
     * your training container by configuring the VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-vpc.html">Protect
     * Training Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = VpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfig>
    HyperParameterTrainingJobDefinition& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the path to the Amazon S3 bucket where you store model artifacts
     * from the training jobs that the tuning job launches.</p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const { return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    template<typename OutputDataConfigT = OutputDataConfig>
    void SetOutputDataConfig(OutputDataConfigT&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::forward<OutputDataConfigT>(value); }
    template<typename OutputDataConfigT = OutputDataConfig>
    HyperParameterTrainingJobDefinition& WithOutputDataConfig(OutputDataConfigT&& value) { SetOutputDataConfig(std::forward<OutputDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resources, including the compute instances and storage volumes, to use
     * for the training jobs that the tuning job launches.</p> <p>Storage volumes store
     * model artifacts and incremental states. Training algorithms might also use
     * storage volumes for scratch space. If you want SageMaker to use the storage
     * volume to store the training data, choose <code>File</code> as the
     * <code>TrainingInputMode</code> in the algorithm specification. For distributed
     * training algorithms, specify an instance count greater than 1.</p>  <p>If
     * you want to use hyperparameter optimization with instance type flexibility, use
     * <code>HyperParameterTuningResourceConfig</code> instead.</p> 
     */
    inline const ResourceConfig& GetResourceConfig() const { return m_resourceConfig; }
    inline bool ResourceConfigHasBeenSet() const { return m_resourceConfigHasBeenSet; }
    template<typename ResourceConfigT = ResourceConfig>
    void SetResourceConfig(ResourceConfigT&& value) { m_resourceConfigHasBeenSet = true; m_resourceConfig = std::forward<ResourceConfigT>(value); }
    template<typename ResourceConfigT = ResourceConfig>
    HyperParameterTrainingJobDefinition& WithResourceConfig(ResourceConfigT&& value) { SetResourceConfig(std::forward<ResourceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the hyperparameter tuning resources, including the
     * compute instances and storage volumes, used for training jobs launched by the
     * tuning job. By default, storage volumes hold model artifacts and incremental
     * states. Choose <code>File</code> for <code>TrainingInputMode</code> in the
     * <code>AlgorithmSpecification</code> parameter to additionally store training
     * data in the storage volume (optional).</p>
     */
    inline const HyperParameterTuningResourceConfig& GetHyperParameterTuningResourceConfig() const { return m_hyperParameterTuningResourceConfig; }
    inline bool HyperParameterTuningResourceConfigHasBeenSet() const { return m_hyperParameterTuningResourceConfigHasBeenSet; }
    template<typename HyperParameterTuningResourceConfigT = HyperParameterTuningResourceConfig>
    void SetHyperParameterTuningResourceConfig(HyperParameterTuningResourceConfigT&& value) { m_hyperParameterTuningResourceConfigHasBeenSet = true; m_hyperParameterTuningResourceConfig = std::forward<HyperParameterTuningResourceConfigT>(value); }
    template<typename HyperParameterTuningResourceConfigT = HyperParameterTuningResourceConfig>
    HyperParameterTrainingJobDefinition& WithHyperParameterTuningResourceConfig(HyperParameterTuningResourceConfigT&& value) { SetHyperParameterTuningResourceConfig(std::forward<HyperParameterTuningResourceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a limit to how long a model hyperparameter training job can run. It
     * also specifies how long a managed spot training job has to complete. When the
     * job reaches the time limit, SageMaker ends the training job. Use this API to cap
     * model training costs.</p>
     */
    inline const StoppingCondition& GetStoppingCondition() const { return m_stoppingCondition; }
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }
    template<typename StoppingConditionT = StoppingCondition>
    void SetStoppingCondition(StoppingConditionT&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::forward<StoppingConditionT>(value); }
    template<typename StoppingConditionT = StoppingCondition>
    HyperParameterTrainingJobDefinition& WithStoppingCondition(StoppingConditionT&& value) { SetStoppingCondition(std::forward<StoppingConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Isolates the training container. No inbound or outbound network calls can be
     * made, except for calls between peers within a training cluster for distributed
     * training. If network isolation is used for training jobs that are configured to
     * use a VPC, SageMaker downloads and uploads customer data and model artifacts
     * through the specified VPC, but the training container does not have network
     * access.</p>
     */
    inline bool GetEnableNetworkIsolation() const { return m_enableNetworkIsolation; }
    inline bool EnableNetworkIsolationHasBeenSet() const { return m_enableNetworkIsolationHasBeenSet; }
    inline void SetEnableNetworkIsolation(bool value) { m_enableNetworkIsolationHasBeenSet = true; m_enableNetworkIsolation = value; }
    inline HyperParameterTrainingJobDefinition& WithEnableNetworkIsolation(bool value) { SetEnableNetworkIsolation(value); return *this;}
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
    inline HyperParameterTrainingJobDefinition& WithEnableInterContainerTrafficEncryption(bool value) { SetEnableInterContainerTrafficEncryption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean indicating whether managed spot training is enabled
     * (<code>True</code>) or not (<code>False</code>).</p>
     */
    inline bool GetEnableManagedSpotTraining() const { return m_enableManagedSpotTraining; }
    inline bool EnableManagedSpotTrainingHasBeenSet() const { return m_enableManagedSpotTrainingHasBeenSet; }
    inline void SetEnableManagedSpotTraining(bool value) { m_enableManagedSpotTrainingHasBeenSet = true; m_enableManagedSpotTraining = value; }
    inline HyperParameterTrainingJobDefinition& WithEnableManagedSpotTraining(bool value) { SetEnableManagedSpotTraining(value); return *this;}
    ///@}

    ///@{
    
    inline const CheckpointConfig& GetCheckpointConfig() const { return m_checkpointConfig; }
    inline bool CheckpointConfigHasBeenSet() const { return m_checkpointConfigHasBeenSet; }
    template<typename CheckpointConfigT = CheckpointConfig>
    void SetCheckpointConfig(CheckpointConfigT&& value) { m_checkpointConfigHasBeenSet = true; m_checkpointConfig = std::forward<CheckpointConfigT>(value); }
    template<typename CheckpointConfigT = CheckpointConfig>
    HyperParameterTrainingJobDefinition& WithCheckpointConfig(CheckpointConfigT&& value) { SetCheckpointConfig(std::forward<CheckpointConfigT>(value)); return *this;}
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
    HyperParameterTrainingJobDefinition& WithRetryStrategy(RetryStrategyT&& value) { SetRetryStrategy(std::forward<RetryStrategyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An environment variable that you can pass into the SageMaker <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateTrainingJob.html">CreateTrainingJob</a>
     * API. You can use an existing <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateTrainingJob.html#sagemaker-CreateTrainingJob-request-Environment">environment
     * variable from the training container</a> or use your own. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-define-metrics-variables.html">Define
     * metrics and variables</a> for more information.</p>  <p>The maximum number
     * of items specified for <code>Map Entries</code> refers to the maximum number of
     * environment variables for each <code>TrainingJobDefinition</code> and also the
     * maximum for the hyperparameter tuning job itself. That is, the sum of the number
     * of environment variables for all the training job definitions can't exceed the
     * maximum number specified.</p> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    HyperParameterTrainingJobDefinition& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    template<typename EnvironmentKeyT = Aws::String, typename EnvironmentValueT = Aws::String>
    HyperParameterTrainingJobDefinition& AddEnvironment(EnvironmentKeyT&& key, EnvironmentValueT&& value) {
      m_environmentHasBeenSet = true; m_environment.emplace(std::forward<EnvironmentKeyT>(key), std::forward<EnvironmentValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_definitionName;
    bool m_definitionNameHasBeenSet = false;

    HyperParameterTuningJobObjective m_tuningObjective;
    bool m_tuningObjectiveHasBeenSet = false;

    ParameterRanges m_hyperParameterRanges;
    bool m_hyperParameterRangesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_staticHyperParameters;
    bool m_staticHyperParametersHasBeenSet = false;

    HyperParameterAlgorithmSpecification m_algorithmSpecification;
    bool m_algorithmSpecificationHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Channel> m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    ResourceConfig m_resourceConfig;
    bool m_resourceConfigHasBeenSet = false;

    HyperParameterTuningResourceConfig m_hyperParameterTuningResourceConfig;
    bool m_hyperParameterTuningResourceConfigHasBeenSet = false;

    StoppingCondition m_stoppingCondition;
    bool m_stoppingConditionHasBeenSet = false;

    bool m_enableNetworkIsolation{false};
    bool m_enableNetworkIsolationHasBeenSet = false;

    bool m_enableInterContainerTrafficEncryption{false};
    bool m_enableInterContainerTrafficEncryptionHasBeenSet = false;

    bool m_enableManagedSpotTraining{false};
    bool m_enableManagedSpotTrainingHasBeenSet = false;

    CheckpointConfig m_checkpointConfig;
    bool m_checkpointConfigHasBeenSet = false;

    RetryStrategy m_retryStrategy;
    bool m_retryStrategyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
