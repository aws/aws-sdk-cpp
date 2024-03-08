/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ContainerConfig.h>
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

ContainerConfig::ContainerConfig() : 
    m_containerArgumentsHasBeenSet(false),
    m_containerEntrypointHasBeenSet(false),
    m_containerEnvironmentVariablesHasBeenSet(false)
{
}

ContainerConfig::ContainerConfig(JsonView jsonValue) : 
    m_containerArgumentsHasBeenSet(false),
    m_containerEntrypointHasBeenSet(false),
    m_containerEnvironmentVariablesHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerConfig& ContainerConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContainerArguments"))
  {
    Aws::Utils::Array<JsonView> containerArgumentsJsonList = jsonValue.GetArray("ContainerArguments");
    for(unsigned containerArgumentsIndex = 0; containerArgumentsIndex < containerArgumentsJsonList.GetLength(); ++containerArgumentsIndex)
    {
      m_containerArguments.push_back(containerArgumentsJsonList[containerArgumentsIndex].AsString());
    }
    m_containerArgumentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContainerEntrypoint"))
  {
    Aws::Utils::Array<JsonView> containerEntrypointJsonList = jsonValue.GetArray("ContainerEntrypoint");
    for(unsigned containerEntrypointIndex = 0; containerEntrypointIndex < containerEntrypointJsonList.GetLength(); ++containerEntrypointIndex)
    {
      m_containerEntrypoint.push_back(containerEntrypointJsonList[containerEntrypointIndex].AsString());
    }
    m_containerEntrypointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContainerEnvironmentVariables"))
  {
    Aws::Map<Aws::String, JsonView> containerEnvironmentVariablesJsonMap = jsonValue.GetObject("ContainerEnvironmentVariables").GetAllObjects();
    for(auto& containerEnvironmentVariablesItem : containerEnvironmentVariablesJsonMap)
    {
      m_containerEnvironmentVariables[containerEnvironmentVariablesItem.first] = containerEnvironmentVariablesItem.second.AsString();
    }
    m_containerEnvironmentVariablesHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerConfig::Jsonize() const
{
  JsonValue payload;

  if(m_containerArgumentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containerArgumentsJsonList(m_containerArguments.size());
   for(unsigned containerArgumentsIndex = 0; containerArgumentsIndex < containerArgumentsJsonList.GetLength(); ++containerArgumentsIndex)
   {
     containerArgumentsJsonList[containerArgumentsIndex].AsString(m_containerArguments[containerArgumentsIndex]);
   }
   payload.WithArray("ContainerArguments", std::move(containerArgumentsJsonList));

  }

  if(m_containerEntrypointHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containerEntrypointJsonList(m_containerEntrypoint.size());
   for(unsigned containerEntrypointIndex = 0; containerEntrypointIndex < containerEntrypointJsonList.GetLength(); ++containerEntrypointIndex)
   {
     containerEntrypointJsonList[containerEntrypointIndex].AsString(m_containerEntrypoint[containerEntrypointIndex]);
   }
   payload.WithArray("ContainerEntrypoint", std::move(containerEntrypointJsonList));

  }

  if(m_containerEnvironmentVariablesHasBeenSet)
  {
   JsonValue containerEnvironmentVariablesJsonMap;
   for(auto& containerEnvironmentVariablesItem : m_containerEnvironmentVariables)
   {
     containerEnvironmentVariablesJsonMap.WithString(containerEnvironmentVariablesItem.first, containerEnvironmentVariablesItem.second);
   }
   payload.WithObject("ContainerEnvironmentVariables", std::move(containerEnvironmentVariablesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
