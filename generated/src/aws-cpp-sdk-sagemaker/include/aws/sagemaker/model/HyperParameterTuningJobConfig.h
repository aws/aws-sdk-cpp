/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/HyperParameterTuningJobStrategyType.h>
#include <aws/sagemaker/model/HyperParameterTuningJobStrategyConfig.h>
#include <aws/sagemaker/model/HyperParameterTuningJobObjective.h>
#include <aws/sagemaker/model/ResourceLimits.h>
#include <aws/sagemaker/model/ParameterRanges.h>
#include <aws/sagemaker/model/TrainingJobEarlyStoppingType.h>
#include <aws/sagemaker/model/TuningJobCompletionCriteria.h>
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
   * <p>Configures a hyperparameter tuning job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HyperParameterTuningJobConfig">AWS
   * API Reference</a></p>
   */
  class HyperParameterTuningJobConfig
  {
  public:
    AWS_SAGEMAKER_API HyperParameterTuningJobConfig() = default;
    AWS_SAGEMAKER_API HyperParameterTuningJobConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HyperParameterTuningJobConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies how hyperparameter tuning chooses the combinations of
     * hyperparameter values to use for the training job it launches. For information
     * about search strategies, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-how-it-works.html">How
     * Hyperparameter Tuning Works</a>.</p>
     */
    inline HyperParameterTuningJobStrategyType GetStrategy() const { return m_strategy; }
    inline bool StrategyHasBeenSet() const { return m_strategyHasBeenSet; }
    inline void SetStrategy(HyperParameterTuningJobStrategyType value) { m_strategyHasBeenSet = true; m_strategy = value; }
    inline HyperParameterTuningJobConfig& WithStrategy(HyperParameterTuningJobStrategyType value) { SetStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the <code>Hyperband</code> optimization strategy. This
     * parameter should be provided only if <code>Hyperband</code> is selected as the
     * strategy for <code>HyperParameterTuningJobConfig</code>.</p>
     */
    inline const HyperParameterTuningJobStrategyConfig& GetStrategyConfig() const { return m_strategyConfig; }
    inline bool StrategyConfigHasBeenSet() const { return m_strategyConfigHasBeenSet; }
    template<typename StrategyConfigT = HyperParameterTuningJobStrategyConfig>
    void SetStrategyConfig(StrategyConfigT&& value) { m_strategyConfigHasBeenSet = true; m_strategyConfig = std::forward<StrategyConfigT>(value); }
    template<typename StrategyConfigT = HyperParameterTuningJobStrategyConfig>
    HyperParameterTuningJobConfig& WithStrategyConfig(StrategyConfigT&& value) { SetStrategyConfig(std::forward<StrategyConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTuningJobObjective.html">HyperParameterTuningJobObjective</a>
     * specifies the objective metric used to evaluate the performance of training jobs
     * launched by this tuning job.</p>
     */
    inline const HyperParameterTuningJobObjective& GetHyperParameterTuningJobObjective() const { return m_hyperParameterTuningJobObjective; }
    inline bool HyperParameterTuningJobObjectiveHasBeenSet() const { return m_hyperParameterTuningJobObjectiveHasBeenSet; }
    template<typename HyperParameterTuningJobObjectiveT = HyperParameterTuningJobObjective>
    void SetHyperParameterTuningJobObjective(HyperParameterTuningJobObjectiveT&& value) { m_hyperParameterTuningJobObjectiveHasBeenSet = true; m_hyperParameterTuningJobObjective = std::forward<HyperParameterTuningJobObjectiveT>(value); }
    template<typename HyperParameterTuningJobObjectiveT = HyperParameterTuningJobObjective>
    HyperParameterTuningJobConfig& WithHyperParameterTuningJobObjective(HyperParameterTuningJobObjectiveT&& value) { SetHyperParameterTuningJobObjective(std::forward<HyperParameterTuningJobObjectiveT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ResourceLimits.html">ResourceLimits</a>
     * object that specifies the maximum number of training and parallel training jobs
     * that can be used for this hyperparameter tuning job.</p>
     */
    inline const ResourceLimits& GetResourceLimits() const { return m_resourceLimits; }
    inline bool ResourceLimitsHasBeenSet() const { return m_resourceLimitsHasBeenSet; }
    template<typename ResourceLimitsT = ResourceLimits>
    void SetResourceLimits(ResourceLimitsT&& value) { m_resourceLimitsHasBeenSet = true; m_resourceLimits = std::forward<ResourceLimitsT>(value); }
    template<typename ResourceLimitsT = ResourceLimits>
    HyperParameterTuningJobConfig& WithResourceLimits(ResourceLimitsT&& value) { SetResourceLimits(std::forward<ResourceLimitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ParameterRanges.html">ParameterRanges</a>
     * object that specifies the ranges of hyperparameters that this tuning job
     * searches over to find the optimal configuration for the highest model
     * performance against your chosen objective metric. </p>
     */
    inline const ParameterRanges& GetParameterRanges() const { return m_parameterRanges; }
    inline bool ParameterRangesHasBeenSet() const { return m_parameterRangesHasBeenSet; }
    template<typename ParameterRangesT = ParameterRanges>
    void SetParameterRanges(ParameterRangesT&& value) { m_parameterRangesHasBeenSet = true; m_parameterRanges = std::forward<ParameterRangesT>(value); }
    template<typename ParameterRangesT = ParameterRanges>
    HyperParameterTuningJobConfig& WithParameterRanges(ParameterRangesT&& value) { SetParameterRanges(std::forward<ParameterRangesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to use early stopping for training jobs launched by the
     * hyperparameter tuning job. Because the <code>Hyperband</code> strategy has its
     * own advanced internal early stopping mechanism,
     * <code>TrainingJobEarlyStoppingType</code> must be <code>OFF</code> to use
     * <code>Hyperband</code>. This parameter can take on one of the following values
     * (the default value is <code>OFF</code>):</p> <dl> <dt>OFF</dt> <dd> <p>Training
     * jobs launched by the hyperparameter tuning job do not use early stopping.</p>
     * </dd> <dt>AUTO</dt> <dd> <p>SageMaker stops training jobs launched by the
     * hyperparameter tuning job when they are unlikely to perform better than
     * previously completed training jobs. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-early-stopping.html">Stop
     * Training Jobs Early</a>.</p> </dd> </dl>
     */
    inline TrainingJobEarlyStoppingType GetTrainingJobEarlyStoppingType() const { return m_trainingJobEarlyStoppingType; }
    inline bool TrainingJobEarlyStoppingTypeHasBeenSet() const { return m_trainingJobEarlyStoppingTypeHasBeenSet; }
    inline void SetTrainingJobEarlyStoppingType(TrainingJobEarlyStoppingType value) { m_trainingJobEarlyStoppingTypeHasBeenSet = true; m_trainingJobEarlyStoppingType = value; }
    inline HyperParameterTuningJobConfig& WithTrainingJobEarlyStoppingType(TrainingJobEarlyStoppingType value) { SetTrainingJobEarlyStoppingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tuning job's completion criteria.</p>
     */
    inline const TuningJobCompletionCriteria& GetTuningJobCompletionCriteria() const { return m_tuningJobCompletionCriteria; }
    inline bool TuningJobCompletionCriteriaHasBeenSet() const { return m_tuningJobCompletionCriteriaHasBeenSet; }
    template<typename TuningJobCompletionCriteriaT = TuningJobCompletionCriteria>
    void SetTuningJobCompletionCriteria(TuningJobCompletionCriteriaT&& value) { m_tuningJobCompletionCriteriaHasBeenSet = true; m_tuningJobCompletionCriteria = std::forward<TuningJobCompletionCriteriaT>(value); }
    template<typename TuningJobCompletionCriteriaT = TuningJobCompletionCriteria>
    HyperParameterTuningJobConfig& WithTuningJobCompletionCriteria(TuningJobCompletionCriteriaT&& value) { SetTuningJobCompletionCriteria(std::forward<TuningJobCompletionCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value used to initialize a pseudo-random number generator. Setting a random
     * seed and using the same seed later for the same tuning job will allow
     * hyperparameter optimization to find more a consistent hyperparameter
     * configuration between the two runs.</p>
     */
    inline int GetRandomSeed() const { return m_randomSeed; }
    inline bool RandomSeedHasBeenSet() const { return m_randomSeedHasBeenSet; }
    inline void SetRandomSeed(int value) { m_randomSeedHasBeenSet = true; m_randomSeed = value; }
    inline HyperParameterTuningJobConfig& WithRandomSeed(int value) { SetRandomSeed(value); return *this;}
    ///@}
  private:

    HyperParameterTuningJobStrategyType m_strategy{HyperParameterTuningJobStrategyType::NOT_SET};
    bool m_strategyHasBeenSet = false;

    HyperParameterTuningJobStrategyConfig m_strategyConfig;
    bool m_strategyConfigHasBeenSet = false;

    HyperParameterTuningJobObjective m_hyperParameterTuningJobObjective;
    bool m_hyperParameterTuningJobObjectiveHasBeenSet = false;

    ResourceLimits m_resourceLimits;
    bool m_resourceLimitsHasBeenSet = false;

    ParameterRanges m_parameterRanges;
    bool m_parameterRangesHasBeenSet = false;

    TrainingJobEarlyStoppingType m_trainingJobEarlyStoppingType{TrainingJobEarlyStoppingType::NOT_SET};
    bool m_trainingJobEarlyStoppingTypeHasBeenSet = false;

    TuningJobCompletionCriteria m_tuningJobCompletionCriteria;
    bool m_tuningJobCompletionCriteriaHasBeenSet = false;

    int m_randomSeed{0};
    bool m_randomSeedHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
