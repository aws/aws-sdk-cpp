/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HyperParameterAlgorithmSpecification.h>
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

HyperParameterAlgorithmSpecification::HyperParameterAlgorithmSpecification() : 
    m_trainingImageHasBeenSet(false),
    m_trainingInputMode(TrainingInputMode::NOT_SET),
    m_trainingInputModeHasBeenSet(false),
    m_algorithmNameHasBeenSet(false),
    m_metricDefinitionsHasBeenSet(false)
{
}

HyperParameterAlgorithmSpecification::HyperParameterAlgorithmSpecification(JsonView jsonValue) : 
    m_trainingImageHasBeenSet(false),
    m_trainingInputMode(TrainingInputMode::NOT_SET),
    m_trainingInputModeHasBeenSet(false),
    m_algorithmNameHasBeenSet(false),
    m_metricDefinitionsHasBeenSet(false)
{
  *this = jsonValue;
}

HyperParameterAlgorithmSpecification& HyperParameterAlgorithmSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrainingImage"))
  {
    m_trainingImage = jsonValue.GetString("TrainingImage");

    m_trainingImageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingInputMode"))
  {
    m_trainingInputMode = TrainingInputModeMapper::GetTrainingInputModeForName(jsonValue.GetString("TrainingInputMode"));

    m_trainingInputModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlgorithmName"))
  {
    m_algorithmName = jsonValue.GetString("AlgorithmName");

    m_algorithmNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricDefinitions"))
  {
    Aws::Utils::Array<JsonView> metricDefinitionsJsonList = jsonValue.GetArray("MetricDefinitions");
    for(unsigned metricDefinitionsIndex = 0; metricDefinitionsIndex < metricDefinitionsJsonList.GetLength(); ++metricDefinitionsIndex)
    {
      m_metricDefinitions.push_back(metricDefinitionsJsonList[metricDefinitionsIndex].AsObject());
    }
    m_metricDefinitionsHasBeenSet = true;
  }

  return *this;
}

JsonValue HyperParameterAlgorithmSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_trainingImageHasBeenSet)
  {
   payload.WithString("TrainingImage", m_trainingImage);

  }

  if(m_trainingInputModeHasBeenSet)
  {
   payload.WithString("TrainingInputMode", TrainingInputModeMapper::GetNameForTrainingInputMode(m_trainingInputMode));
  }

  if(m_algorithmNameHasBeenSet)
  {
   payload.WithString("AlgorithmName", m_algorithmName);

  }

  if(m_metricDefinitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricDefinitionsJsonList(m_metricDefinitions.size());
   for(unsigned metricDefinitionsIndex = 0; metricDefinitionsIndex < metricDefinitionsJsonList.GetLength(); ++metricDefinitionsIndex)
   {
     metricDefinitionsJsonList[metricDefinitionsIndex].AsObject(m_metricDefinitions[metricDefinitionsIndex].Jsonize());
   }
   payload.WithArray("MetricDefinitions", std::move(metricDefinitionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
