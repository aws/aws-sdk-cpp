/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/MaintenanceWindow.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace odb
{
namespace Model
{

MaintenanceWindow::MaintenanceWindow(JsonView jsonValue)
{
  *this = jsonValue;
}

MaintenanceWindow& MaintenanceWindow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customActionTimeoutInMins"))
  {
    m_customActionTimeoutInMins = jsonValue.GetInteger("customActionTimeoutInMins");
    m_customActionTimeoutInMinsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("daysOfWeek"))
  {
    Aws::Utils::Array<JsonView> daysOfWeekJsonList = jsonValue.GetArray("daysOfWeek");
    for(unsigned daysOfWeekIndex = 0; daysOfWeekIndex < daysOfWeekJsonList.GetLength(); ++daysOfWeekIndex)
    {
      m_daysOfWeek.push_back(daysOfWeekJsonList[daysOfWeekIndex].AsObject());
    }
    m_daysOfWeekHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hoursOfDay"))
  {
    Aws::Utils::Array<JsonView> hoursOfDayJsonList = jsonValue.GetArray("hoursOfDay");
    for(unsigned hoursOfDayIndex = 0; hoursOfDayIndex < hoursOfDayJsonList.GetLength(); ++hoursOfDayIndex)
    {
      m_hoursOfDay.push_back(hoursOfDayJsonList[hoursOfDayIndex].AsInteger());
    }
    m_hoursOfDayHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isCustomActionTimeoutEnabled"))
  {
    m_isCustomActionTimeoutEnabled = jsonValue.GetBool("isCustomActionTimeoutEnabled");
    m_isCustomActionTimeoutEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("leadTimeInWeeks"))
  {
    m_leadTimeInWeeks = jsonValue.GetInteger("leadTimeInWeeks");
    m_leadTimeInWeeksHasBeenSet = true;
  }
  if(jsonValue.ValueExists("months"))
  {
    Aws::Utils::Array<JsonView> monthsJsonList = jsonValue.GetArray("months");
    for(unsigned monthsIndex = 0; monthsIndex < monthsJsonList.GetLength(); ++monthsIndex)
    {
      m_months.push_back(monthsJsonList[monthsIndex].AsObject());
    }
    m_monthsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("patchingMode"))
  {
    m_patchingMode = PatchingModeTypeMapper::GetPatchingModeTypeForName(jsonValue.GetString("patchingMode"));
    m_patchingModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("preference"))
  {
    m_preference = PreferenceTypeMapper::GetPreferenceTypeForName(jsonValue.GetString("preference"));
    m_preferenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("skipRu"))
  {
    m_skipRu = jsonValue.GetBool("skipRu");
    m_skipRuHasBeenSet = true;
  }
  if(jsonValue.ValueExists("weeksOfMonth"))
  {
    Aws::Utils::Array<JsonView> weeksOfMonthJsonList = jsonValue.GetArray("weeksOfMonth");
    for(unsigned weeksOfMonthIndex = 0; weeksOfMonthIndex < weeksOfMonthJsonList.GetLength(); ++weeksOfMonthIndex)
    {
      m_weeksOfMonth.push_back(weeksOfMonthJsonList[weeksOfMonthIndex].AsInteger());
    }
    m_weeksOfMonthHasBeenSet = true;
  }
  return *this;
}

JsonValue MaintenanceWindow::Jsonize() const
{
  JsonValue payload;

  if(m_customActionTimeoutInMinsHasBeenSet)
  {
   payload.WithInteger("customActionTimeoutInMins", m_customActionTimeoutInMins);

  }

  if(m_daysOfWeekHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> daysOfWeekJsonList(m_daysOfWeek.size());
   for(unsigned daysOfWeekIndex = 0; daysOfWeekIndex < daysOfWeekJsonList.GetLength(); ++daysOfWeekIndex)
   {
     daysOfWeekJsonList[daysOfWeekIndex].AsObject(m_daysOfWeek[daysOfWeekIndex].Jsonize());
   }
   payload.WithArray("daysOfWeek", std::move(daysOfWeekJsonList));

  }

  if(m_hoursOfDayHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hoursOfDayJsonList(m_hoursOfDay.size());
   for(unsigned hoursOfDayIndex = 0; hoursOfDayIndex < hoursOfDayJsonList.GetLength(); ++hoursOfDayIndex)
   {
     hoursOfDayJsonList[hoursOfDayIndex].AsInteger(m_hoursOfDay[hoursOfDayIndex]);
   }
   payload.WithArray("hoursOfDay", std::move(hoursOfDayJsonList));

  }

  if(m_isCustomActionTimeoutEnabledHasBeenSet)
  {
   payload.WithBool("isCustomActionTimeoutEnabled", m_isCustomActionTimeoutEnabled);

  }

  if(m_leadTimeInWeeksHasBeenSet)
  {
   payload.WithInteger("leadTimeInWeeks", m_leadTimeInWeeks);

  }

  if(m_monthsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> monthsJsonList(m_months.size());
   for(unsigned monthsIndex = 0; monthsIndex < monthsJsonList.GetLength(); ++monthsIndex)
   {
     monthsJsonList[monthsIndex].AsObject(m_months[monthsIndex].Jsonize());
   }
   payload.WithArray("months", std::move(monthsJsonList));

  }

  if(m_patchingModeHasBeenSet)
  {
   payload.WithString("patchingMode", PatchingModeTypeMapper::GetNameForPatchingModeType(m_patchingMode));
  }

  if(m_preferenceHasBeenSet)
  {
   payload.WithString("preference", PreferenceTypeMapper::GetNameForPreferenceType(m_preference));
  }

  if(m_skipRuHasBeenSet)
  {
   payload.WithBool("skipRu", m_skipRu);

  }

  if(m_weeksOfMonthHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> weeksOfMonthJsonList(m_weeksOfMonth.size());
   for(unsigned weeksOfMonthIndex = 0; weeksOfMonthIndex < weeksOfMonthJsonList.GetLength(); ++weeksOfMonthIndex)
   {
     weeksOfMonthJsonList[weeksOfMonthIndex].AsInteger(m_weeksOfMonth[weeksOfMonthIndex]);
   }
   payload.WithArray("weeksOfMonth", std::move(weeksOfMonthJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace odb
} // namespace Aws
