/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrainingJobDefinition.h>
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

TrainingJobDefinition::TrainingJobDefinition() : 
    m_trainingInputMode(TrainingInputMode::NOT_SET),
    m_trainingInputModeHasBeenSet(false),
    m_hyperParametersHasBeenSet(false),
    m_inputDataConfigHasBeenSet(false),
    m_outputDataConfigHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_stoppingConditionHasBeenSet(false)
{
}

TrainingJobDefinition::TrainingJobDefinition(JsonView jsonValue) : 
    m_trainingInputMode(TrainingInputMode::NOT_SET),
    m_trainingInputModeHasBeenSet(false),
    m_hyperParametersHasBeenSet(false),
    m_inputDataConfigHasBeenSet(false),
    m_outputDataConfigHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_stoppingConditionHasBeenSet(false)
{
  *this = jsonValue;
}

TrainingJobDefinition& TrainingJobDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrainingInputMode"))
  {
    m_trainingInputMode = TrainingInputModeMapper::GetTrainingInputModeForName(jsonValue.GetString("TrainingInputMode"));

    m_trainingInputModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HyperParameters"))
  {
    Aws::Map<Aws::String, JsonView> hyperParametersJsonMap = jsonValue.GetObject("HyperParameters").GetAllObjects();
    for(auto& hyperParametersItem : hyperParametersJsonMap)
    {
      m_hyperParameters[hyperParametersItem.first] = hyperParametersItem.second.AsString();
    }
    m_hyperParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputDataConfig"))
  {
    Aws::Utils::Array<JsonView> inputDataConfigJsonList = jsonValue.GetArray("InputDataConfig");
    for(unsigned inputDataConfigIndex = 0; inputDataConfigIndex < inputDataConfigJsonList.GetLength(); ++inputDataConfigIndex)
    {
      m_inputDataConfig.push_back(inputDataConfigJsonList[inputDataConfigIndex].AsObject());
    }
    m_inputDataConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputDataConfig"))
  {
    m_outputDataConfig = jsonValue.GetObject("OutputDataConfig");

    m_outputDataConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceConfig"))
  {
    m_resourceConfig = jsonValue.GetObject("ResourceConfig");

    m_resourceConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StoppingCondition"))
  {
    m_stoppingCondition = jsonValue.GetObject("StoppingCondition");

    m_stoppingConditionHasBeenSet = true;
  }

  return *this;
}

JsonValue TrainingJobDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_trainingInputModeHasBeenSet)
  {
   payload.WithString("TrainingInputMode", TrainingInputModeMapper::GetNameForTrainingInputMode(m_trainingInputMode));
  }

  if(m_hyperParametersHasBeenSet)
  {
   JsonValue hyperParametersJsonMap;
   for(auto& hyperParametersItem : m_hyperParameters)
   {
     hyperParametersJsonMap.WithString(hyperParametersItem.first, hyperParametersItem.second);
   }
   payload.WithObject("HyperParameters", std::move(hyperParametersJsonMap));

  }

  if(m_inputDataConfigHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputDataConfigJsonList(m_inputDataConfig.size());
   for(unsigned inputDataConfigIndex = 0; inputDataConfigIndex < inputDataConfigJsonList.GetLength(); ++inputDataConfigIndex)
   {
     inputDataConfigJsonList[inputDataConfigIndex].AsObject(m_inputDataConfig[inputDataConfigIndex].Jsonize());
   }
   payload.WithArray("InputDataConfig", std::move(inputDataConfigJsonList));

  }

  if(m_outputDataConfigHasBeenSet)
  {
   payload.WithObject("OutputDataConfig", m_outputDataConfig.Jsonize());

  }

  if(m_resourceConfigHasBeenSet)
  {
   payload.WithObject("ResourceConfig", m_resourceConfig.Jsonize());

  }

  if(m_stoppingConditionHasBeenSet)
  {
   payload.WithObject("StoppingCondition", m_stoppingCondition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
