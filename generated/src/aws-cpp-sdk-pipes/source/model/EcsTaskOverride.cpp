/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/EcsTaskOverride.h>
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

EcsTaskOverride::EcsTaskOverride() : 
    m_containerOverridesHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_ephemeralStorageHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_inferenceAcceleratorOverridesHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_taskRoleArnHasBeenSet(false)
{
}

EcsTaskOverride::EcsTaskOverride(JsonView jsonValue) : 
    m_containerOverridesHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_ephemeralStorageHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_inferenceAcceleratorOverridesHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_taskRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

EcsTaskOverride& EcsTaskOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContainerOverrides"))
  {
    Aws::Utils::Array<JsonView> containerOverridesJsonList = jsonValue.GetArray("ContainerOverrides");
    for(unsigned containerOverridesIndex = 0; containerOverridesIndex < containerOverridesJsonList.GetLength(); ++containerOverridesIndex)
    {
      m_containerOverrides.push_back(containerOverridesJsonList[containerOverridesIndex].AsObject());
    }
    m_containerOverridesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Cpu"))
  {
    m_cpu = jsonValue.GetString("Cpu");

    m_cpuHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EphemeralStorage"))
  {
    m_ephemeralStorage = jsonValue.GetObject("EphemeralStorage");

    m_ephemeralStorageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionRoleArn"))
  {
    m_executionRoleArn = jsonValue.GetString("ExecutionRoleArn");

    m_executionRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InferenceAcceleratorOverrides"))
  {
    Aws::Utils::Array<JsonView> inferenceAcceleratorOverridesJsonList = jsonValue.GetArray("InferenceAcceleratorOverrides");
    for(unsigned inferenceAcceleratorOverridesIndex = 0; inferenceAcceleratorOverridesIndex < inferenceAcceleratorOverridesJsonList.GetLength(); ++inferenceAcceleratorOverridesIndex)
    {
      m_inferenceAcceleratorOverrides.push_back(inferenceAcceleratorOverridesJsonList[inferenceAcceleratorOverridesIndex].AsObject());
    }
    m_inferenceAcceleratorOverridesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Memory"))
  {
    m_memory = jsonValue.GetString("Memory");

    m_memoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskRoleArn"))
  {
    m_taskRoleArn = jsonValue.GetString("TaskRoleArn");

    m_taskRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue EcsTaskOverride::Jsonize() const
{
  JsonValue payload;

  if(m_containerOverridesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containerOverridesJsonList(m_containerOverrides.size());
   for(unsigned containerOverridesIndex = 0; containerOverridesIndex < containerOverridesJsonList.GetLength(); ++containerOverridesIndex)
   {
     containerOverridesJsonList[containerOverridesIndex].AsObject(m_containerOverrides[containerOverridesIndex].Jsonize());
   }
   payload.WithArray("ContainerOverrides", std::move(containerOverridesJsonList));

  }

  if(m_cpuHasBeenSet)
  {
   payload.WithString("Cpu", m_cpu);

  }

  if(m_ephemeralStorageHasBeenSet)
  {
   payload.WithObject("EphemeralStorage", m_ephemeralStorage.Jsonize());

  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("ExecutionRoleArn", m_executionRoleArn);

  }

  if(m_inferenceAcceleratorOverridesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inferenceAcceleratorOverridesJsonList(m_inferenceAcceleratorOverrides.size());
   for(unsigned inferenceAcceleratorOverridesIndex = 0; inferenceAcceleratorOverridesIndex < inferenceAcceleratorOverridesJsonList.GetLength(); ++inferenceAcceleratorOverridesIndex)
   {
     inferenceAcceleratorOverridesJsonList[inferenceAcceleratorOverridesIndex].AsObject(m_inferenceAcceleratorOverrides[inferenceAcceleratorOverridesIndex].Jsonize());
   }
   payload.WithArray("InferenceAcceleratorOverrides", std::move(inferenceAcceleratorOverridesJsonList));

  }

  if(m_memoryHasBeenSet)
  {
   payload.WithString("Memory", m_memory);

  }

  if(m_taskRoleArnHasBeenSet)
  {
   payload.WithString("TaskRoleArn", m_taskRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
