/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/PipeTargetBatchJobParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

PipeTargetBatchJobParameters::PipeTargetBatchJobParameters() : 
    m_arrayPropertiesHasBeenSet(false),
    m_containerOverridesHasBeenSet(false),
    m_dependsOnHasBeenSet(false),
    m_jobDefinitionHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_retryStrategyHasBeenSet(false)
{
}

PipeTargetBatchJobParameters::PipeTargetBatchJobParameters(JsonView jsonValue) : 
    m_arrayPropertiesHasBeenSet(false),
    m_containerOverridesHasBeenSet(false),
    m_dependsOnHasBeenSet(false),
    m_jobDefinitionHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_retryStrategyHasBeenSet(false)
{
  *this = jsonValue;
}

PipeTargetBatchJobParameters& PipeTargetBatchJobParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ArrayProperties"))
  {
    m_arrayProperties = jsonValue.GetObject("ArrayProperties");

    m_arrayPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContainerOverrides"))
  {
    m_containerOverrides = jsonValue.GetObject("ContainerOverrides");

    m_containerOverridesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DependsOn"))
  {
    Aws::Utils::Array<JsonView> dependsOnJsonList = jsonValue.GetArray("DependsOn");
    for(unsigned dependsOnIndex = 0; dependsOnIndex < dependsOnJsonList.GetLength(); ++dependsOnIndex)
    {
      m_dependsOn.push_back(dependsOnJsonList[dependsOnIndex].AsObject());
    }
    m_dependsOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobDefinition"))
  {
    m_jobDefinition = jsonValue.GetString("JobDefinition");

    m_jobDefinitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobName"))
  {
    m_jobName = jsonValue.GetString("JobName");

    m_jobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("Parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsString();
    }
    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetryStrategy"))
  {
    m_retryStrategy = jsonValue.GetObject("RetryStrategy");

    m_retryStrategyHasBeenSet = true;
  }

  return *this;
}

JsonValue PipeTargetBatchJobParameters::Jsonize() const
{
  JsonValue payload;

  if(m_arrayPropertiesHasBeenSet)
  {
   payload.WithObject("ArrayProperties", m_arrayProperties.Jsonize());

  }

  if(m_containerOverridesHasBeenSet)
  {
   payload.WithObject("ContainerOverrides", m_containerOverrides.Jsonize());

  }

  if(m_dependsOnHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dependsOnJsonList(m_dependsOn.size());
   for(unsigned dependsOnIndex = 0; dependsOnIndex < dependsOnJsonList.GetLength(); ++dependsOnIndex)
   {
     dependsOnJsonList[dependsOnIndex].AsObject(m_dependsOn[dependsOnIndex].Jsonize());
   }
   payload.WithArray("DependsOn", std::move(dependsOnJsonList));

  }

  if(m_jobDefinitionHasBeenSet)
  {
   payload.WithString("JobDefinition", m_jobDefinition);

  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithString(parametersItem.first, parametersItem.second);
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  if(m_retryStrategyHasBeenSet)
  {
   payload.WithObject("RetryStrategy", m_retryStrategy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
