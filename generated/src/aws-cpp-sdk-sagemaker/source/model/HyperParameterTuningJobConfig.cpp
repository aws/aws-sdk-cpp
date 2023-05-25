/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HyperParameterTuningJobConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

HyperParameterTuningJobConfig::HyperParameterTuningJobConfig() : 
    m_strategy(HyperParameterTuningJobStrategyType::NOT_SET),
    m_strategyHasBeenSet(false),
    m_strategyConfigHasBeenSet(false),
    m_hyperParameterTuningJobObjectiveHasBeenSet(false),
    m_resourceLimitsHasBeenSet(false),
    m_parameterRangesHasBeenSet(false),
    m_trainingJobEarlyStoppingType(TrainingJobEarlyStoppingType::NOT_SET),
    m_trainingJobEarlyStoppingTypeHasBeenSet(false),
    m_tuningJobCompletionCriteriaHasBeenSet(false),
    m_randomSeed(0),
    m_randomSeedHasBeenSet(false)
{
}

HyperParameterTuningJobConfig::HyperParameterTuningJobConfig(JsonView jsonValue) : 
    m_strategy(HyperParameterTuningJobStrategyType::NOT_SET),
    m_strategyHasBeenSet(false),
    m_strategyConfigHasBeenSet(false),
    m_hyperParameterTuningJobObjectiveHasBeenSet(false),
    m_resourceLimitsHasBeenSet(false),
    m_parameterRangesHasBeenSet(false),
    m_trainingJobEarlyStoppingType(TrainingJobEarlyStoppingType::NOT_SET),
    m_trainingJobEarlyStoppingTypeHasBeenSet(false),
    m_tuningJobCompletionCriteriaHasBeenSet(false),
    m_randomSeed(0),
    m_randomSeedHasBeenSet(false)
{
  *this = jsonValue;
}

HyperParameterTuningJobConfig& HyperParameterTuningJobConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Strategy"))
  {
    m_strategy = HyperParameterTuningJobStrategyTypeMapper::GetHyperParameterTuningJobStrategyTypeForName(jsonValue.GetString("Strategy"));

    m_strategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StrategyConfig"))
  {
    m_strategyConfig = jsonValue.GetObject("StrategyConfig");

    m_strategyConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HyperParameterTuningJobObjective"))
  {
    m_hyperParameterTuningJobObjective = jsonValue.GetObject("HyperParameterTuningJobObjective");

    m_hyperParameterTuningJobObjectiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceLimits"))
  {
    m_resourceLimits = jsonValue.GetObject("ResourceLimits");

    m_resourceLimitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParameterRanges"))
  {
    m_parameterRanges = jsonValue.GetObject("ParameterRanges");

    m_parameterRangesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingJobEarlyStoppingType"))
  {
    m_trainingJobEarlyStoppingType = TrainingJobEarlyStoppingTypeMapper::GetTrainingJobEarlyStoppingTypeForName(jsonValue.GetString("TrainingJobEarlyStoppingType"));

    m_trainingJobEarlyStoppingTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TuningJobCompletionCriteria"))
  {
    m_tuningJobCompletionCriteria = jsonValue.GetObject("TuningJobCompletionCriteria");

    m_tuningJobCompletionCriteriaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RandomSeed"))
  {
    m_randomSeed = jsonValue.GetInteger("RandomSeed");

    m_randomSeedHasBeenSet = true;
  }

  return *this;
}

JsonValue HyperParameterTuningJobConfig::Jsonize() const
{
  JsonValue payload;

  if(m_strategyHasBeenSet)
  {
   payload.WithString("Strategy", HyperParameterTuningJobStrategyTypeMapper::GetNameForHyperParameterTuningJobStrategyType(m_strategy));
  }

  if(m_strategyConfigHasBeenSet)
  {
   payload.WithObject("StrategyConfig", m_strategyConfig.Jsonize());

  }

  if(m_hyperParameterTuningJobObjectiveHasBeenSet)
  {
   payload.WithObject("HyperParameterTuningJobObjective", m_hyperParameterTuningJobObjective.Jsonize());

  }

  if(m_resourceLimitsHasBeenSet)
  {
   payload.WithObject("ResourceLimits", m_resourceLimits.Jsonize());

  }

  if(m_parameterRangesHasBeenSet)
  {
   payload.WithObject("ParameterRanges", m_parameterRanges.Jsonize());

  }

  if(m_trainingJobEarlyStoppingTypeHasBeenSet)
  {
   payload.WithString("TrainingJobEarlyStoppingType", TrainingJobEarlyStoppingTypeMapper::GetNameForTrainingJobEarlyStoppingType(m_trainingJobEarlyStoppingType));
  }

  if(m_tuningJobCompletionCriteriaHasBeenSet)
  {
   payload.WithObject("TuningJobCompletionCriteria", m_tuningJobCompletionCriteria.Jsonize());

  }

  if(m_randomSeedHasBeenSet)
  {
   payload.WithInteger("RandomSeed", m_randomSeed);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
