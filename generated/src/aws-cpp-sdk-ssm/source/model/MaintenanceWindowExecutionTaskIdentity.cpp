/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/MaintenanceWindowExecutionTaskIdentity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

MaintenanceWindowExecutionTaskIdentity::MaintenanceWindowExecutionTaskIdentity() : 
    m_windowExecutionIdHasBeenSet(false),
    m_taskExecutionIdHasBeenSet(false),
    m_status(MaintenanceWindowExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusDetailsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_taskArnHasBeenSet(false),
    m_taskType(MaintenanceWindowTaskType::NOT_SET),
    m_taskTypeHasBeenSet(false),
    m_alarmConfigurationHasBeenSet(false),
    m_triggeredAlarmsHasBeenSet(false)
{
}

MaintenanceWindowExecutionTaskIdentity::MaintenanceWindowExecutionTaskIdentity(JsonView jsonValue) : 
    m_windowExecutionIdHasBeenSet(false),
    m_taskExecutionIdHasBeenSet(false),
    m_status(MaintenanceWindowExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusDetailsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_taskArnHasBeenSet(false),
    m_taskType(MaintenanceWindowTaskType::NOT_SET),
    m_taskTypeHasBeenSet(false),
    m_alarmConfigurationHasBeenSet(false),
    m_triggeredAlarmsHasBeenSet(false)
{
  *this = jsonValue;
}

MaintenanceWindowExecutionTaskIdentity& MaintenanceWindowExecutionTaskIdentity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WindowExecutionId"))
  {
    m_windowExecutionId = jsonValue.GetString("WindowExecutionId");

    m_windowExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskExecutionId"))
  {
    m_taskExecutionId = jsonValue.GetString("TaskExecutionId");

    m_taskExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = MaintenanceWindowExecutionStatusMapper::GetMaintenanceWindowExecutionStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusDetails"))
  {
    m_statusDetails = jsonValue.GetString("StatusDetails");

    m_statusDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskArn"))
  {
    m_taskArn = jsonValue.GetString("TaskArn");

    m_taskArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskType"))
  {
    m_taskType = MaintenanceWindowTaskTypeMapper::GetMaintenanceWindowTaskTypeForName(jsonValue.GetString("TaskType"));

    m_taskTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlarmConfiguration"))
  {
    m_alarmConfiguration = jsonValue.GetObject("AlarmConfiguration");

    m_alarmConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TriggeredAlarms"))
  {
    Aws::Utils::Array<JsonView> triggeredAlarmsJsonList = jsonValue.GetArray("TriggeredAlarms");
    for(unsigned triggeredAlarmsIndex = 0; triggeredAlarmsIndex < triggeredAlarmsJsonList.GetLength(); ++triggeredAlarmsIndex)
    {
      m_triggeredAlarms.push_back(triggeredAlarmsJsonList[triggeredAlarmsIndex].AsObject());
    }
    m_triggeredAlarmsHasBeenSet = true;
  }

  return *this;
}

JsonValue MaintenanceWindowExecutionTaskIdentity::Jsonize() const
{
  JsonValue payload;

  if(m_windowExecutionIdHasBeenSet)
  {
   payload.WithString("WindowExecutionId", m_windowExecutionId);

  }

  if(m_taskExecutionIdHasBeenSet)
  {
   payload.WithString("TaskExecutionId", m_taskExecutionId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", MaintenanceWindowExecutionStatusMapper::GetNameForMaintenanceWindowExecutionStatus(m_status));
  }

  if(m_statusDetailsHasBeenSet)
  {
   payload.WithString("StatusDetails", m_statusDetails);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_taskArnHasBeenSet)
  {
   payload.WithString("TaskArn", m_taskArn);

  }

  if(m_taskTypeHasBeenSet)
  {
   payload.WithString("TaskType", MaintenanceWindowTaskTypeMapper::GetNameForMaintenanceWindowTaskType(m_taskType));
  }

  if(m_alarmConfigurationHasBeenSet)
  {
   payload.WithObject("AlarmConfiguration", m_alarmConfiguration.Jsonize());

  }

  if(m_triggeredAlarmsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> triggeredAlarmsJsonList(m_triggeredAlarms.size());
   for(unsigned triggeredAlarmsIndex = 0; triggeredAlarmsIndex < triggeredAlarmsJsonList.GetLength(); ++triggeredAlarmsIndex)
   {
     triggeredAlarmsJsonList[triggeredAlarmsIndex].AsObject(m_triggeredAlarms[triggeredAlarmsIndex].Jsonize());
   }
   payload.WithArray("TriggeredAlarms", std::move(triggeredAlarmsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
