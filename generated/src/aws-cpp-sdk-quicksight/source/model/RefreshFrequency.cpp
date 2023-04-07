/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RefreshFrequency.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

RefreshFrequency::RefreshFrequency() : 
    m_interval(RefreshInterval::NOT_SET),
    m_intervalHasBeenSet(false),
    m_refreshOnDayHasBeenSet(false),
    m_timezoneHasBeenSet(false),
    m_timeOfTheDayHasBeenSet(false)
{
}

RefreshFrequency::RefreshFrequency(JsonView jsonValue) : 
    m_interval(RefreshInterval::NOT_SET),
    m_intervalHasBeenSet(false),
    m_refreshOnDayHasBeenSet(false),
    m_timezoneHasBeenSet(false),
    m_timeOfTheDayHasBeenSet(false)
{
  *this = jsonValue;
}

RefreshFrequency& RefreshFrequency::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Interval"))
  {
    m_interval = RefreshIntervalMapper::GetRefreshIntervalForName(jsonValue.GetString("Interval"));

    m_intervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RefreshOnDay"))
  {
    m_refreshOnDay = jsonValue.GetObject("RefreshOnDay");

    m_refreshOnDayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timezone"))
  {
    m_timezone = jsonValue.GetString("Timezone");

    m_timezoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeOfTheDay"))
  {
    m_timeOfTheDay = jsonValue.GetString("TimeOfTheDay");

    m_timeOfTheDayHasBeenSet = true;
  }

  return *this;
}

JsonValue RefreshFrequency::Jsonize() const
{
  JsonValue payload;

  if(m_intervalHasBeenSet)
  {
   payload.WithString("Interval", RefreshIntervalMapper::GetNameForRefreshInterval(m_interval));
  }

  if(m_refreshOnDayHasBeenSet)
  {
   payload.WithObject("RefreshOnDay", m_refreshOnDay.Jsonize());

  }

  if(m_timezoneHasBeenSet)
  {
   payload.WithString("Timezone", m_timezone);

  }

  if(m_timeOfTheDayHasBeenSet)
  {
   payload.WithString("TimeOfTheDay", m_timeOfTheDay);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
