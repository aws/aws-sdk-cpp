/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TrainingInputMode.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/OutputDataConfig.h>
#include <aws/sagemaker/model/ResourceConfig.h>
#include <aws/sagemaker/model/StoppingCondition.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Defines the input needed to run a training job using the
   * algorithm.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrainingJobDefinition">AWS
   * API Reference</a></p>
   */
  class TrainingJobDefinition
  {
  public:
    AWS_SAGEMAKER_API TrainingJobDefinition() = default;
    AWS_SAGEMAKER_API TrainingJobDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrainingJobDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline TrainingInputMode GetTrainingInputMode() const { return m_trainingInputMode; }
    inline bool TrainingInputModeHasBeenSet() const { return m_trainingInputModeHasBeenSet; }
    inline void SetTrainingInputMode(TrainingInputMode value) { m_trainingInputModeHasBeenSet = true; m_trainingInputMode = value; }
    inline TrainingJobDefinition& WithTrainingInputMode(TrainingInputMode value) { SetTrainingInputMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hyperparameters used for the training job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHyperParameters() const { return m_hyperParameters; }
    inline bool HyperParametersHasBeenSet() const { return m_hyperParametersHasBeenSet; }
    template<typename HyperParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetHyperParameters(HyperParametersT&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters = std::forward<HyperParametersT>(value); }
    template<typename HyperParametersT = Aws::Map<Aws::String, Aws::String>>
    TrainingJobDefinition& WithHyperParameters(HyperParametersT&& value) { SetHyperParameters(std::forward<HyperParametersT>(value)); return *this;}
    template<typename HyperParametersKeyT = Aws::String, typename HyperParametersValueT = Aws::String>
    TrainingJobDefinition& AddHyperParameters(HyperParametersKeyT&& key, HyperParametersValueT&& value) {
      m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(std::forward<HyperParametersKeyT>(key), std::forward<HyperParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An array of <code>Channel</code> objects, each of which specifies an input
     * source.</p>
     */
    inline const Aws::Vector<Channel>& GetInputDataConfig() const { return m_inputDataConfig; }
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
    template<typename InputDataConfigT = Aws::Vector<Channel>>
    void SetInputDataConfig(InputDataConfigT&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::forward<InputDataConfigT>(value); }
    template<typename InputDataConfigT = Aws::Vector<Channel>>
    TrainingJobDefinition& WithInputDataConfig(InputDataConfigT&& value) { SetInputDataConfig(std::forward<InputDataConfigT>(value)); return *this;}
    template<typename InputDataConfigT = Channel>
    TrainingJobDefinition& AddInputDataConfig(InputDataConfigT&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig.emplace_back(std::forward<InputDataConfigT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>the path to the S3 bucket where you want to store model artifacts. SageMaker
     * creates subfolders for the artifacts.</p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const { return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    template<typename OutputDataConfigT = OutputDataConfig>
    void SetOutputDataConfig(OutputDataConfigT&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::forward<OutputDataConfigT>(value); }
    template<typename OutputDataConfigT = OutputDataConfig>
    TrainingJobDefinition& WithOutputDataConfig(OutputDataConfigT&& value) { SetOutputDataConfig(std::forward<OutputDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resources, including the ML compute instances and ML storage volumes, to
     * use for model training.</p>
     */
    inline const ResourceConfig& GetResourceConfig() const { return m_resourceConfig; }
    inline bool ResourceConfigHasBeenSet() const { return m_resourceConfigHasBeenSet; }
    template<typename ResourceConfigT = ResourceConfig>
    void SetResourceConfig(ResourceConfigT&& value) { m_resourceConfigHasBeenSet = true; m_resourceConfig = std::forward<ResourceConfigT>(value); }
    template<typename ResourceConfigT = ResourceConfig>
    TrainingJobDefinition& WithResourceConfig(ResourceConfigT&& value) { SetResourceConfig(std::forward<ResourceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a limit to how long a model training job can run. It also specifies
     * how long a managed Spot training job has to complete. When the job reaches the
     * time limit, SageMaker ends the training job. Use this API to cap model training
     * costs.</p> <p>To stop a job, SageMaker sends the algorithm the SIGTERM signal,
     * which delays job termination for 120 seconds. Algorithms can use this 120-second
     * window to save the model artifacts.</p>
     */
    inline const StoppingCondition& GetStoppingCondition() const { return m_stoppingCondition; }
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }
    template<typename StoppingConditionT = StoppingCondition>
    void SetStoppingCondition(StoppingConditionT&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::forward<StoppingConditionT>(value); }
    template<typename StoppingConditionT = StoppingCondition>
    TrainingJobDefinition& WithStoppingCondition(StoppingConditionT&& value) { SetStoppingCondition(std::forward<StoppingConditionT>(value)); return *this;}
    ///@}
  private:

    TrainingInputMode m_trainingInputMode{TrainingInputMode::NOT_SET};
    bool m_trainingInputModeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_hyperParameters;
    bool m_hyperParametersHasBeenSet = false;

    Aws::Vector<Channel> m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    ResourceConfig m_resourceConfig;
    bool m_resourceConfigHasBeenSet = false;

    StoppingCondition m_stoppingCondition;
    bool m_stoppingConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
