/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/WeeklyStartTime.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MQ
{
namespace Model
{

WeeklyStartTime::WeeklyStartTime() : 
    m_dayOfWeek(DayOfWeek::NOT_SET),
    m_dayOfWeekHasBeenSet(false),
    m_timeOfDayHasBeenSet(false),
    m_timeZoneHasBeenSet(false)
{
}

WeeklyStartTime::WeeklyStartTime(JsonView jsonValue) : 
    m_dayOfWeek(DayOfWeek::NOT_SET),
    m_dayOfWeekHasBeenSet(false),
    m_timeOfDayHasBeenSet(false),
    m_timeZoneHasBeenSet(false)
{
  *this = jsonValue;
}

WeeklyStartTime& WeeklyStartTime::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dayOfWeek"))
  {
    m_dayOfWeek = DayOfWeekMapper::GetDayOfWeekForName(jsonValue.GetString("dayOfWeek"));

    m_dayOfWeekHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeOfDay"))
  {
    m_timeOfDay = jsonValue.GetString("timeOfDay");

    m_timeOfDayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeZone"))
  {
    m_timeZone = jsonValue.GetString("timeZone");

    m_timeZoneHasBeenSet = true;
  }

  return *this;
}

JsonValue WeeklyStartTime::Jsonize() const
{
  JsonValue payload;

  if(m_dayOfWeekHasBeenSet)
  {
   payload.WithString("dayOfWeek", DayOfWeekMapper::GetNameForDayOfWeek(m_dayOfWeek));
  }

  if(m_timeOfDayHasBeenSet)
  {
   payload.WithString("timeOfDay", m_timeOfDay);

  }

  if(m_timeZoneHasBeenSet)
  {
   payload.WithString("timeZone", m_timeZone);

  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
