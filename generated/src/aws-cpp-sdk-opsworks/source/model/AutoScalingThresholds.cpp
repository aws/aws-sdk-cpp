﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/AutoScalingThresholds.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

AutoScalingThresholds::AutoScalingThresholds(JsonView jsonValue)
{
  *this = jsonValue;
}

AutoScalingThresholds& AutoScalingThresholds::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceCount"))
  {
    m_instanceCount = jsonValue.GetInteger("InstanceCount");
    m_instanceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ThresholdsWaitTime"))
  {
    m_thresholdsWaitTime = jsonValue.GetInteger("ThresholdsWaitTime");
    m_thresholdsWaitTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IgnoreMetricsTime"))
  {
    m_ignoreMetricsTime = jsonValue.GetInteger("IgnoreMetricsTime");
    m_ignoreMetricsTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CpuThreshold"))
  {
    m_cpuThreshold = jsonValue.GetDouble("CpuThreshold");
    m_cpuThresholdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MemoryThreshold"))
  {
    m_memoryThreshold = jsonValue.GetDouble("MemoryThreshold");
    m_memoryThresholdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LoadThreshold"))
  {
    m_loadThreshold = jsonValue.GetDouble("LoadThreshold");
    m_loadThresholdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Alarms"))
  {
    Aws::Utils::Array<JsonView> alarmsJsonList = jsonValue.GetArray("Alarms");
    for(unsigned alarmsIndex = 0; alarmsIndex < alarmsJsonList.GetLength(); ++alarmsIndex)
    {
      m_alarms.push_back(alarmsJsonList[alarmsIndex].AsString());
    }
    m_alarmsHasBeenSet = true;
  }
  return *this;
}

JsonValue AutoScalingThresholds::Jsonize() const
{
  JsonValue payload;

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("InstanceCount", m_instanceCount);

  }

  if(m_thresholdsWaitTimeHasBeenSet)
  {
   payload.WithInteger("ThresholdsWaitTime", m_thresholdsWaitTime);

  }

  if(m_ignoreMetricsTimeHasBeenSet)
  {
   payload.WithInteger("IgnoreMetricsTime", m_ignoreMetricsTime);

  }

  if(m_cpuThresholdHasBeenSet)
  {
   payload.WithDouble("CpuThreshold", m_cpuThreshold);

  }

  if(m_memoryThresholdHasBeenSet)
  {
   payload.WithDouble("MemoryThreshold", m_memoryThreshold);

  }

  if(m_loadThresholdHasBeenSet)
  {
   payload.WithDouble("LoadThreshold", m_loadThreshold);

  }

  if(m_alarmsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> alarmsJsonList(m_alarms.size());
   for(unsigned alarmsIndex = 0; alarmsIndex < alarmsJsonList.GetLength(); ++alarmsIndex)
   {
     alarmsJsonList[alarmsIndex].AsString(m_alarms[alarmsIndex]);
   }
   payload.WithArray("Alarms", std::move(alarmsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
