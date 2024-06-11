﻿/**
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
    AWS_SAGEMAKER_API HyperParameterTuningJobConfig();
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
    inline const HyperParameterTuningJobStrategyType& GetStrategy() const{ return m_strategy; }
    inline bool StrategyHasBeenSet() const { return m_strategyHasBeenSet; }
    inline void SetStrategy(const HyperParameterTuningJobStrategyType& value) { m_strategyHasBeenSet = true; m_strategy = value; }
    inline void SetStrategy(HyperParameterTuningJobStrategyType&& value) { m_strategyHasBeenSet = true; m_strategy = std::move(value); }
    inline HyperParameterTuningJobConfig& WithStrategy(const HyperParameterTuningJobStrategyType& value) { SetStrategy(value); return *this;}
    inline HyperParameterTuningJobConfig& WithStrategy(HyperParameterTuningJobStrategyType&& value) { SetStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the <code>Hyperband</code> optimization strategy. This
     * parameter should be provided only if <code>Hyperband</code> is selected as the
     * strategy for <code>HyperParameterTuningJobConfig</code>.</p>
     */
    inline const HyperParameterTuningJobStrategyConfig& GetStrategyConfig() const{ return m_strategyConfig; }
    inline bool StrategyConfigHasBeenSet() const { return m_strategyConfigHasBeenSet; }
    inline void SetStrategyConfig(const HyperParameterTuningJobStrategyConfig& value) { m_strategyConfigHasBeenSet = true; m_strategyConfig = value; }
    inline void SetStrategyConfig(HyperParameterTuningJobStrategyConfig&& value) { m_strategyConfigHasBeenSet = true; m_strategyConfig = std::move(value); }
    inline HyperParameterTuningJobConfig& WithStrategyConfig(const HyperParameterTuningJobStrategyConfig& value) { SetStrategyConfig(value); return *this;}
    inline HyperParameterTuningJobConfig& WithStrategyConfig(HyperParameterTuningJobStrategyConfig&& value) { SetStrategyConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTuningJobObjective.html">HyperParameterTuningJobObjective</a>
     * specifies the objective metric used to evaluate the performance of training jobs
     * launched by this tuning job.</p>
     */
    inline const HyperParameterTuningJobObjective& GetHyperParameterTuningJobObjective() const{ return m_hyperParameterTuningJobObjective; }
    inline bool HyperParameterTuningJobObjectiveHasBeenSet() const { return m_hyperParameterTuningJobObjectiveHasBeenSet; }
    inline void SetHyperParameterTuningJobObjective(const HyperParameterTuningJobObjective& value) { m_hyperParameterTuningJobObjectiveHasBeenSet = true; m_hyperParameterTuningJobObjective = value; }
    inline void SetHyperParameterTuningJobObjective(HyperParameterTuningJobObjective&& value) { m_hyperParameterTuningJobObjectiveHasBeenSet = true; m_hyperParameterTuningJobObjective = std::move(value); }
    inline HyperParameterTuningJobConfig& WithHyperParameterTuningJobObjective(const HyperParameterTuningJobObjective& value) { SetHyperParameterTuningJobObjective(value); return *this;}
    inline HyperParameterTuningJobConfig& WithHyperParameterTuningJobObjective(HyperParameterTuningJobObjective&& value) { SetHyperParameterTuningJobObjective(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ResourceLimits.html">ResourceLimits</a>
     * object that specifies the maximum number of training and parallel training jobs
     * that can be used for this hyperparameter tuning job.</p>
     */
    inline const ResourceLimits& GetResourceLimits() const{ return m_resourceLimits; }
    inline bool ResourceLimitsHasBeenSet() const { return m_resourceLimitsHasBeenSet; }
    inline void SetResourceLimits(const ResourceLimits& value) { m_resourceLimitsHasBeenSet = true; m_resourceLimits = value; }
    inline void SetResourceLimits(ResourceLimits&& value) { m_resourceLimitsHasBeenSet = true; m_resourceLimits = std::move(value); }
    inline HyperParameterTuningJobConfig& WithResourceLimits(const ResourceLimits& value) { SetResourceLimits(value); return *this;}
    inline HyperParameterTuningJobConfig& WithResourceLimits(ResourceLimits&& value) { SetResourceLimits(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ParameterRanges.html">ParameterRanges</a>
     * object that specifies the ranges of hyperparameters that this tuning job
     * searches over to find the optimal configuration for the highest model
     * performance against your chosen objective metric. </p>
     */
    inline const ParameterRanges& GetParameterRanges() const{ return m_parameterRanges; }
    inline bool ParameterRangesHasBeenSet() const { return m_parameterRangesHasBeenSet; }
    inline void SetParameterRanges(const ParameterRanges& value) { m_parameterRangesHasBeenSet = true; m_parameterRanges = value; }
    inline void SetParameterRanges(ParameterRanges&& value) { m_parameterRangesHasBeenSet = true; m_parameterRanges = std::move(value); }
    inline HyperParameterTuningJobConfig& WithParameterRanges(const ParameterRanges& value) { SetParameterRanges(value); return *this;}
    inline HyperParameterTuningJobConfig& WithParameterRanges(ParameterRanges&& value) { SetParameterRanges(std::move(value)); return *this;}
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
    inline const TrainingJobEarlyStoppingType& GetTrainingJobEarlyStoppingType() const{ return m_trainingJobEarlyStoppingType; }
    inline bool TrainingJobEarlyStoppingTypeHasBeenSet() const { return m_trainingJobEarlyStoppingTypeHasBeenSet; }
    inline void SetTrainingJobEarlyStoppingType(const TrainingJobEarlyStoppingType& value) { m_trainingJobEarlyStoppingTypeHasBeenSet = true; m_trainingJobEarlyStoppingType = value; }
    inline void SetTrainingJobEarlyStoppingType(TrainingJobEarlyStoppingType&& value) { m_trainingJobEarlyStoppingTypeHasBeenSet = true; m_trainingJobEarlyStoppingType = std::move(value); }
    inline HyperParameterTuningJobConfig& WithTrainingJobEarlyStoppingType(const TrainingJobEarlyStoppingType& value) { SetTrainingJobEarlyStoppingType(value); return *this;}
    inline HyperParameterTuningJobConfig& WithTrainingJobEarlyStoppingType(TrainingJobEarlyStoppingType&& value) { SetTrainingJobEarlyStoppingType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tuning job's completion criteria.</p>
     */
    inline const TuningJobCompletionCriteria& GetTuningJobCompletionCriteria() const{ return m_tuningJobCompletionCriteria; }
    inline bool TuningJobCompletionCriteriaHasBeenSet() const { return m_tuningJobCompletionCriteriaHasBeenSet; }
    inline void SetTuningJobCompletionCriteria(const TuningJobCompletionCriteria& value) { m_tuningJobCompletionCriteriaHasBeenSet = true; m_tuningJobCompletionCriteria = value; }
    inline void SetTuningJobCompletionCriteria(TuningJobCompletionCriteria&& value) { m_tuningJobCompletionCriteriaHasBeenSet = true; m_tuningJobCompletionCriteria = std::move(value); }
    inline HyperParameterTuningJobConfig& WithTuningJobCompletionCriteria(const TuningJobCompletionCriteria& value) { SetTuningJobCompletionCriteria(value); return *this;}
    inline HyperParameterTuningJobConfig& WithTuningJobCompletionCriteria(TuningJobCompletionCriteria&& value) { SetTuningJobCompletionCriteria(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value used to initialize a pseudo-random number generator. Setting a random
     * seed and using the same seed later for the same tuning job will allow
     * hyperparameter optimization to find more a consistent hyperparameter
     * configuration between the two runs.</p>
     */
    inline int GetRandomSeed() const{ return m_randomSeed; }
    inline bool RandomSeedHasBeenSet() const { return m_randomSeedHasBeenSet; }
    inline void SetRandomSeed(int value) { m_randomSeedHasBeenSet = true; m_randomSeed = value; }
    inline HyperParameterTuningJobConfig& WithRandomSeed(int value) { SetRandomSeed(value); return *this;}
    ///@}
  private:

    HyperParameterTuningJobStrategyType m_strategy;
    bool m_strategyHasBeenSet = false;

    HyperParameterTuningJobStrategyConfig m_strategyConfig;
    bool m_strategyConfigHasBeenSet = false;

    HyperParameterTuningJobObjective m_hyperParameterTuningJobObjective;
    bool m_hyperParameterTuningJobObjectiveHasBeenSet = false;

    ResourceLimits m_resourceLimits;
    bool m_resourceLimitsHasBeenSet = false;

    ParameterRanges m_parameterRanges;
    bool m_parameterRangesHasBeenSet = false;

    TrainingJobEarlyStoppingType m_trainingJobEarlyStoppingType;
    bool m_trainingJobEarlyStoppingTypeHasBeenSet = false;

    TuningJobCompletionCriteria m_tuningJobCompletionCriteria;
    bool m_tuningJobCompletionCriteriaHasBeenSet = false;

    int m_randomSeed;
    bool m_randomSeedHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
