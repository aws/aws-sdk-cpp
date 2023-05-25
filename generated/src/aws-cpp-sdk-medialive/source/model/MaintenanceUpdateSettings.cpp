/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MaintenanceUpdateSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

MaintenanceUpdateSettings::MaintenanceUpdateSettings() : 
    m_maintenanceDay(MaintenanceDay::NOT_SET),
    m_maintenanceDayHasBeenSet(false),
    m_maintenanceScheduledDateHasBeenSet(false),
    m_maintenanceStartTimeHasBeenSet(false)
{
}

MaintenanceUpdateSettings::MaintenanceUpdateSettings(JsonView jsonValue) : 
    m_maintenanceDay(MaintenanceDay::NOT_SET),
    m_maintenanceDayHasBeenSet(false),
    m_maintenanceScheduledDateHasBeenSet(false),
    m_maintenanceStartTimeHasBeenSet(false)
{
  *this = jsonValue;
}

MaintenanceUpdateSettings& MaintenanceUpdateSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maintenanceDay"))
  {
    m_maintenanceDay = MaintenanceDayMapper::GetMaintenanceDayForName(jsonValue.GetString("maintenanceDay"));

    m_maintenanceDayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maintenanceScheduledDate"))
  {
    m_maintenanceScheduledDate = jsonValue.GetString("maintenanceScheduledDate");

    m_maintenanceScheduledDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maintenanceStartTime"))
  {
    m_maintenanceStartTime = jsonValue.GetString("maintenanceStartTime");

    m_maintenanceStartTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue MaintenanceUpdateSettings::Jsonize() const
{
  JsonValue payload;

  if(m_maintenanceDayHasBeenSet)
  {
   payload.WithString("maintenanceDay", MaintenanceDayMapper::GetNameForMaintenanceDay(m_maintenanceDay));
  }

  if(m_maintenanceScheduledDateHasBeenSet)
  {
   payload.WithString("maintenanceScheduledDate", m_maintenanceScheduledDate);

  }

  if(m_maintenanceStartTimeHasBeenSet)
  {
   payload.WithString("maintenanceStartTime", m_maintenanceStartTime);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
