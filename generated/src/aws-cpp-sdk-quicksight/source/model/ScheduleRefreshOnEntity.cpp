/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ScheduleRefreshOnEntity.h>
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

ScheduleRefreshOnEntity::ScheduleRefreshOnEntity() : 
    m_dayOfWeek(DayOfWeek::NOT_SET),
    m_dayOfWeekHasBeenSet(false),
    m_dayOfMonthHasBeenSet(false)
{
}

ScheduleRefreshOnEntity::ScheduleRefreshOnEntity(JsonView jsonValue) : 
    m_dayOfWeek(DayOfWeek::NOT_SET),
    m_dayOfWeekHasBeenSet(false),
    m_dayOfMonthHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduleRefreshOnEntity& ScheduleRefreshOnEntity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DayOfWeek"))
  {
    m_dayOfWeek = DayOfWeekMapper::GetDayOfWeekForName(jsonValue.GetString("DayOfWeek"));

    m_dayOfWeekHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DayOfMonth"))
  {
    m_dayOfMonth = jsonValue.GetString("DayOfMonth");

    m_dayOfMonthHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduleRefreshOnEntity::Jsonize() const
{
  JsonValue payload;

  if(m_dayOfWeekHasBeenSet)
  {
   payload.WithString("DayOfWeek", DayOfWeekMapper::GetNameForDayOfWeek(m_dayOfWeek));
  }

  if(m_dayOfMonthHasBeenSet)
  {
   payload.WithString("DayOfMonth", m_dayOfMonth);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
