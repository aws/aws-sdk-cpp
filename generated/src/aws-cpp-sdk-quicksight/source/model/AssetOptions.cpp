/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetOptions.h>
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

AssetOptions::AssetOptions() : 
    m_timezoneHasBeenSet(false),
    m_weekStart(DayOfTheWeek::NOT_SET),
    m_weekStartHasBeenSet(false)
{
}

AssetOptions::AssetOptions(JsonView jsonValue) : 
    m_timezoneHasBeenSet(false),
    m_weekStart(DayOfTheWeek::NOT_SET),
    m_weekStartHasBeenSet(false)
{
  *this = jsonValue;
}

AssetOptions& AssetOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Timezone"))
  {
    m_timezone = jsonValue.GetString("Timezone");

    m_timezoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WeekStart"))
  {
    m_weekStart = DayOfTheWeekMapper::GetDayOfTheWeekForName(jsonValue.GetString("WeekStart"));

    m_weekStartHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetOptions::Jsonize() const
{
  JsonValue payload;

  if(m_timezoneHasBeenSet)
  {
   payload.WithString("Timezone", m_timezone);

  }

  if(m_weekStartHasBeenSet)
  {
   payload.WithString("WeekStart", DayOfTheWeekMapper::GetNameForDayOfTheWeek(m_weekStart));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
