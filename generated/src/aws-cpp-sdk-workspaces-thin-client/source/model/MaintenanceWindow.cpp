/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-thin-client/model/MaintenanceWindow.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpacesThinClient
{
namespace Model
{

MaintenanceWindow::MaintenanceWindow() : 
    m_type(MaintenanceWindowType::NOT_SET),
    m_typeHasBeenSet(false),
    m_startTimeHour(0),
    m_startTimeHourHasBeenSet(false),
    m_startTimeMinute(0),
    m_startTimeMinuteHasBeenSet(false),
    m_endTimeHour(0),
    m_endTimeHourHasBeenSet(false),
    m_endTimeMinute(0),
    m_endTimeMinuteHasBeenSet(false),
    m_daysOfTheWeekHasBeenSet(false),
    m_applyTimeOf(ApplyTimeOf::NOT_SET),
    m_applyTimeOfHasBeenSet(false)
{
}

MaintenanceWindow::MaintenanceWindow(JsonView jsonValue) : 
    m_type(MaintenanceWindowType::NOT_SET),
    m_typeHasBeenSet(false),
    m_startTimeHour(0),
    m_startTimeHourHasBeenSet(false),
    m_startTimeMinute(0),
    m_startTimeMinuteHasBeenSet(false),
    m_endTimeHour(0),
    m_endTimeHourHasBeenSet(false),
    m_endTimeMinute(0),
    m_endTimeMinuteHasBeenSet(false),
    m_daysOfTheWeekHasBeenSet(false),
    m_applyTimeOf(ApplyTimeOf::NOT_SET),
    m_applyTimeOfHasBeenSet(false)
{
  *this = jsonValue;
}

MaintenanceWindow& MaintenanceWindow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = MaintenanceWindowTypeMapper::GetMaintenanceWindowTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTimeHour"))
  {
    m_startTimeHour = jsonValue.GetInteger("startTimeHour");

    m_startTimeHourHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTimeMinute"))
  {
    m_startTimeMinute = jsonValue.GetInteger("startTimeMinute");

    m_startTimeMinuteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTimeHour"))
  {
    m_endTimeHour = jsonValue.GetInteger("endTimeHour");

    m_endTimeHourHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTimeMinute"))
  {
    m_endTimeMinute = jsonValue.GetInteger("endTimeMinute");

    m_endTimeMinuteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("daysOfTheWeek"))
  {
    Aws::Utils::Array<JsonView> daysOfTheWeekJsonList = jsonValue.GetArray("daysOfTheWeek");
    for(unsigned daysOfTheWeekIndex = 0; daysOfTheWeekIndex < daysOfTheWeekJsonList.GetLength(); ++daysOfTheWeekIndex)
    {
      m_daysOfTheWeek.push_back(DayOfWeekMapper::GetDayOfWeekForName(daysOfTheWeekJsonList[daysOfTheWeekIndex].AsString()));
    }
    m_daysOfTheWeekHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applyTimeOf"))
  {
    m_applyTimeOf = ApplyTimeOfMapper::GetApplyTimeOfForName(jsonValue.GetString("applyTimeOf"));

    m_applyTimeOfHasBeenSet = true;
  }

  return *this;
}

JsonValue MaintenanceWindow::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", MaintenanceWindowTypeMapper::GetNameForMaintenanceWindowType(m_type));
  }

  if(m_startTimeHourHasBeenSet)
  {
   payload.WithInteger("startTimeHour", m_startTimeHour);

  }

  if(m_startTimeMinuteHasBeenSet)
  {
   payload.WithInteger("startTimeMinute", m_startTimeMinute);

  }

  if(m_endTimeHourHasBeenSet)
  {
   payload.WithInteger("endTimeHour", m_endTimeHour);

  }

  if(m_endTimeMinuteHasBeenSet)
  {
   payload.WithInteger("endTimeMinute", m_endTimeMinute);

  }

  if(m_daysOfTheWeekHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> daysOfTheWeekJsonList(m_daysOfTheWeek.size());
   for(unsigned daysOfTheWeekIndex = 0; daysOfTheWeekIndex < daysOfTheWeekJsonList.GetLength(); ++daysOfTheWeekIndex)
   {
     daysOfTheWeekJsonList[daysOfTheWeekIndex].AsString(DayOfWeekMapper::GetNameForDayOfWeek(m_daysOfTheWeek[daysOfTheWeekIndex]));
   }
   payload.WithArray("daysOfTheWeek", std::move(daysOfTheWeekJsonList));

  }

  if(m_applyTimeOfHasBeenSet)
  {
   payload.WithString("applyTimeOf", ApplyTimeOfMapper::GetNameForApplyTimeOf(m_applyTimeOf));
  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
