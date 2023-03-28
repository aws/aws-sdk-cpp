/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/RecurrenceSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

RecurrenceSettings::RecurrenceSettings() : 
    m_monthlySettingsHasBeenSet(false),
    m_weeklySettingsHasBeenSet(false),
    m_dailySettingsHasBeenSet(false),
    m_numberOfOnCalls(0),
    m_numberOfOnCallsHasBeenSet(false),
    m_shiftCoveragesHasBeenSet(false),
    m_recurrenceMultiplier(0),
    m_recurrenceMultiplierHasBeenSet(false)
{
}

RecurrenceSettings::RecurrenceSettings(JsonView jsonValue) : 
    m_monthlySettingsHasBeenSet(false),
    m_weeklySettingsHasBeenSet(false),
    m_dailySettingsHasBeenSet(false),
    m_numberOfOnCalls(0),
    m_numberOfOnCallsHasBeenSet(false),
    m_shiftCoveragesHasBeenSet(false),
    m_recurrenceMultiplier(0),
    m_recurrenceMultiplierHasBeenSet(false)
{
  *this = jsonValue;
}

RecurrenceSettings& RecurrenceSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MonthlySettings"))
  {
    Aws::Utils::Array<JsonView> monthlySettingsJsonList = jsonValue.GetArray("MonthlySettings");
    for(unsigned monthlySettingsIndex = 0; monthlySettingsIndex < monthlySettingsJsonList.GetLength(); ++monthlySettingsIndex)
    {
      m_monthlySettings.push_back(monthlySettingsJsonList[monthlySettingsIndex].AsObject());
    }
    m_monthlySettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WeeklySettings"))
  {
    Aws::Utils::Array<JsonView> weeklySettingsJsonList = jsonValue.GetArray("WeeklySettings");
    for(unsigned weeklySettingsIndex = 0; weeklySettingsIndex < weeklySettingsJsonList.GetLength(); ++weeklySettingsIndex)
    {
      m_weeklySettings.push_back(weeklySettingsJsonList[weeklySettingsIndex].AsObject());
    }
    m_weeklySettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DailySettings"))
  {
    Aws::Utils::Array<JsonView> dailySettingsJsonList = jsonValue.GetArray("DailySettings");
    for(unsigned dailySettingsIndex = 0; dailySettingsIndex < dailySettingsJsonList.GetLength(); ++dailySettingsIndex)
    {
      m_dailySettings.push_back(dailySettingsJsonList[dailySettingsIndex].AsObject());
    }
    m_dailySettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfOnCalls"))
  {
    m_numberOfOnCalls = jsonValue.GetInteger("NumberOfOnCalls");

    m_numberOfOnCallsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShiftCoverages"))
  {
    Aws::Map<Aws::String, JsonView> shiftCoveragesJsonMap = jsonValue.GetObject("ShiftCoverages").GetAllObjects();
    for(auto& shiftCoveragesItem : shiftCoveragesJsonMap)
    {
      Aws::Utils::Array<JsonView> coverageTimesJsonList = shiftCoveragesItem.second.AsArray();
      Aws::Vector<CoverageTime> coverageTimesList;
      coverageTimesList.reserve((size_t)coverageTimesJsonList.GetLength());
      for(unsigned coverageTimesIndex = 0; coverageTimesIndex < coverageTimesJsonList.GetLength(); ++coverageTimesIndex)
      {
        coverageTimesList.push_back(coverageTimesJsonList[coverageTimesIndex].AsObject());
      }
      m_shiftCoverages[DayOfWeekMapper::GetDayOfWeekForName(shiftCoveragesItem.first)] = std::move(coverageTimesList);
    }
    m_shiftCoveragesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecurrenceMultiplier"))
  {
    m_recurrenceMultiplier = jsonValue.GetInteger("RecurrenceMultiplier");

    m_recurrenceMultiplierHasBeenSet = true;
  }

  return *this;
}

JsonValue RecurrenceSettings::Jsonize() const
{
  JsonValue payload;

  if(m_monthlySettingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> monthlySettingsJsonList(m_monthlySettings.size());
   for(unsigned monthlySettingsIndex = 0; monthlySettingsIndex < monthlySettingsJsonList.GetLength(); ++monthlySettingsIndex)
   {
     monthlySettingsJsonList[monthlySettingsIndex].AsObject(m_monthlySettings[monthlySettingsIndex].Jsonize());
   }
   payload.WithArray("MonthlySettings", std::move(monthlySettingsJsonList));

  }

  if(m_weeklySettingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> weeklySettingsJsonList(m_weeklySettings.size());
   for(unsigned weeklySettingsIndex = 0; weeklySettingsIndex < weeklySettingsJsonList.GetLength(); ++weeklySettingsIndex)
   {
     weeklySettingsJsonList[weeklySettingsIndex].AsObject(m_weeklySettings[weeklySettingsIndex].Jsonize());
   }
   payload.WithArray("WeeklySettings", std::move(weeklySettingsJsonList));

  }

  if(m_dailySettingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dailySettingsJsonList(m_dailySettings.size());
   for(unsigned dailySettingsIndex = 0; dailySettingsIndex < dailySettingsJsonList.GetLength(); ++dailySettingsIndex)
   {
     dailySettingsJsonList[dailySettingsIndex].AsObject(m_dailySettings[dailySettingsIndex].Jsonize());
   }
   payload.WithArray("DailySettings", std::move(dailySettingsJsonList));

  }

  if(m_numberOfOnCallsHasBeenSet)
  {
   payload.WithInteger("NumberOfOnCalls", m_numberOfOnCalls);

  }

  if(m_shiftCoveragesHasBeenSet)
  {
   JsonValue shiftCoveragesJsonMap;
   for(auto& shiftCoveragesItem : m_shiftCoverages)
   {
     Aws::Utils::Array<JsonValue> coverageTimesJsonList(shiftCoveragesItem.second.size());
     for(unsigned coverageTimesIndex = 0; coverageTimesIndex < coverageTimesJsonList.GetLength(); ++coverageTimesIndex)
     {
       coverageTimesJsonList[coverageTimesIndex].AsObject(shiftCoveragesItem.second[coverageTimesIndex].Jsonize());
     }
     shiftCoveragesJsonMap.WithArray(DayOfWeekMapper::GetNameForDayOfWeek(shiftCoveragesItem.first), std::move(coverageTimesJsonList));
   }
   payload.WithObject("ShiftCoverages", std::move(shiftCoveragesJsonMap));

  }

  if(m_recurrenceMultiplierHasBeenSet)
  {
   payload.WithInteger("RecurrenceMultiplier", m_recurrenceMultiplier);

  }

  return payload;
}

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
