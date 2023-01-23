/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/MaintenanceWindowIdentity.h>
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

MaintenanceWindowIdentity::MaintenanceWindowIdentity() : 
    m_windowIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_cutoff(0),
    m_cutoffHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_scheduleTimezoneHasBeenSet(false),
    m_scheduleOffset(0),
    m_scheduleOffsetHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_nextExecutionTimeHasBeenSet(false)
{
}

MaintenanceWindowIdentity::MaintenanceWindowIdentity(JsonView jsonValue) : 
    m_windowIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_cutoff(0),
    m_cutoffHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_scheduleTimezoneHasBeenSet(false),
    m_scheduleOffset(0),
    m_scheduleOffsetHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_nextExecutionTimeHasBeenSet(false)
{
  *this = jsonValue;
}

MaintenanceWindowIdentity& MaintenanceWindowIdentity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WindowId"))
  {
    m_windowId = jsonValue.GetString("WindowId");

    m_windowIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetInteger("Duration");

    m_durationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Cutoff"))
  {
    m_cutoff = jsonValue.GetInteger("Cutoff");

    m_cutoffHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Schedule"))
  {
    m_schedule = jsonValue.GetString("Schedule");

    m_scheduleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScheduleTimezone"))
  {
    m_scheduleTimezone = jsonValue.GetString("ScheduleTimezone");

    m_scheduleTimezoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScheduleOffset"))
  {
    m_scheduleOffset = jsonValue.GetInteger("ScheduleOffset");

    m_scheduleOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndDate"))
  {
    m_endDate = jsonValue.GetString("EndDate");

    m_endDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartDate"))
  {
    m_startDate = jsonValue.GetString("StartDate");

    m_startDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextExecutionTime"))
  {
    m_nextExecutionTime = jsonValue.GetString("NextExecutionTime");

    m_nextExecutionTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue MaintenanceWindowIdentity::Jsonize() const
{
  JsonValue payload;

  if(m_windowIdHasBeenSet)
  {
   payload.WithString("WindowId", m_windowId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_durationHasBeenSet)
  {
   payload.WithInteger("Duration", m_duration);

  }

  if(m_cutoffHasBeenSet)
  {
   payload.WithInteger("Cutoff", m_cutoff);

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithString("Schedule", m_schedule);

  }

  if(m_scheduleTimezoneHasBeenSet)
  {
   payload.WithString("ScheduleTimezone", m_scheduleTimezone);

  }

  if(m_scheduleOffsetHasBeenSet)
  {
   payload.WithInteger("ScheduleOffset", m_scheduleOffset);

  }

  if(m_endDateHasBeenSet)
  {
   payload.WithString("EndDate", m_endDate);

  }

  if(m_startDateHasBeenSet)
  {
   payload.WithString("StartDate", m_startDate);

  }

  if(m_nextExecutionTimeHasBeenSet)
  {
   payload.WithString("NextExecutionTime", m_nextExecutionTime);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
