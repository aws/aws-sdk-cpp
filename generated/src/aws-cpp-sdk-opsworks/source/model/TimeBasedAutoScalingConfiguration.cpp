/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/TimeBasedAutoScalingConfiguration.h>
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

TimeBasedAutoScalingConfiguration::TimeBasedAutoScalingConfiguration() : 
    m_instanceIdHasBeenSet(false),
    m_autoScalingScheduleHasBeenSet(false)
{
}

TimeBasedAutoScalingConfiguration::TimeBasedAutoScalingConfiguration(JsonView jsonValue) : 
    m_instanceIdHasBeenSet(false),
    m_autoScalingScheduleHasBeenSet(false)
{
  *this = jsonValue;
}

TimeBasedAutoScalingConfiguration& TimeBasedAutoScalingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoScalingSchedule"))
  {
    m_autoScalingSchedule = jsonValue.GetObject("AutoScalingSchedule");

    m_autoScalingScheduleHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeBasedAutoScalingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_autoScalingScheduleHasBeenSet)
  {
   payload.WithObject("AutoScalingSchedule", m_autoScalingSchedule.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
