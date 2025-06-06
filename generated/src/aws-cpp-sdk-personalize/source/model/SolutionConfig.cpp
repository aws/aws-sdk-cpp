﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/SolutionConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

SolutionConfig::SolutionConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

SolutionConfig& SolutionConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventValueThreshold"))
  {
    m_eventValueThreshold = jsonValue.GetString("eventValueThreshold");
    m_eventValueThresholdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hpoConfig"))
  {
    m_hpoConfig = jsonValue.GetObject("hpoConfig");
    m_hpoConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("algorithmHyperParameters"))
  {
    Aws::Map<Aws::String, JsonView> algorithmHyperParametersJsonMap = jsonValue.GetObject("algorithmHyperParameters").GetAllObjects();
    for(auto& algorithmHyperParametersItem : algorithmHyperParametersJsonMap)
    {
      m_algorithmHyperParameters[algorithmHyperParametersItem.first] = algorithmHyperParametersItem.second.AsString();
    }
    m_algorithmHyperParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("featureTransformationParameters"))
  {
    Aws::Map<Aws::String, JsonView> featureTransformationParametersJsonMap = jsonValue.GetObject("featureTransformationParameters").GetAllObjects();
    for(auto& featureTransformationParametersItem : featureTransformationParametersJsonMap)
    {
      m_featureTransformationParameters[featureTransformationParametersItem.first] = featureTransformationParametersItem.second.AsString();
    }
    m_featureTransformationParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("autoMLConfig"))
  {
    m_autoMLConfig = jsonValue.GetObject("autoMLConfig");
    m_autoMLConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventsConfig"))
  {
    m_eventsConfig = jsonValue.GetObject("eventsConfig");
    m_eventsConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("optimizationObjective"))
  {
    m_optimizationObjective = jsonValue.GetObject("optimizationObjective");
    m_optimizationObjectiveHasBeenSet = true;
  }
  if(jsonValue.ValueExists("trainingDataConfig"))
  {
    m_trainingDataConfig = jsonValue.GetObject("trainingDataConfig");
    m_trainingDataConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("autoTrainingConfig"))
  {
    m_autoTrainingConfig = jsonValue.GetObject("autoTrainingConfig");
    m_autoTrainingConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue SolutionConfig::Jsonize() const
{
  JsonValue payload;

  if(m_eventValueThresholdHasBeenSet)
  {
   payload.WithString("eventValueThreshold", m_eventValueThreshold);

  }

  if(m_hpoConfigHasBeenSet)
  {
   payload.WithObject("hpoConfig", m_hpoConfig.Jsonize());

  }

  if(m_algorithmHyperParametersHasBeenSet)
  {
   JsonValue algorithmHyperParametersJsonMap;
   for(auto& algorithmHyperParametersItem : m_algorithmHyperParameters)
   {
     algorithmHyperParametersJsonMap.WithString(algorithmHyperParametersItem.first, algorithmHyperParametersItem.second);
   }
   payload.WithObject("algorithmHyperParameters", std::move(algorithmHyperParametersJsonMap));

  }

  if(m_featureTransformationParametersHasBeenSet)
  {
   JsonValue featureTransformationParametersJsonMap;
   for(auto& featureTransformationParametersItem : m_featureTransformationParameters)
   {
     featureTransformationParametersJsonMap.WithString(featureTransformationParametersItem.first, featureTransformationParametersItem.second);
   }
   payload.WithObject("featureTransformationParameters", std::move(featureTransformationParametersJsonMap));

  }

  if(m_autoMLConfigHasBeenSet)
  {
   payload.WithObject("autoMLConfig", m_autoMLConfig.Jsonize());

  }

  if(m_eventsConfigHasBeenSet)
  {
   payload.WithObject("eventsConfig", m_eventsConfig.Jsonize());

  }

  if(m_optimizationObjectiveHasBeenSet)
  {
   payload.WithObject("optimizationObjective", m_optimizationObjective.Jsonize());

  }

  if(m_trainingDataConfigHasBeenSet)
  {
   payload.WithObject("trainingDataConfig", m_trainingDataConfig.Jsonize());

  }

  if(m_autoTrainingConfigHasBeenSet)
  {
   payload.WithObject("autoTrainingConfig", m_autoTrainingConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
