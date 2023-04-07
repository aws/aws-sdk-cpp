/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RefreshSchedule.h>
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

RefreshSchedule::RefreshSchedule() : 
    m_scheduleIdHasBeenSet(false),
    m_scheduleFrequencyHasBeenSet(false),
    m_startAfterDateTimeHasBeenSet(false),
    m_refreshType(IngestionType::NOT_SET),
    m_refreshTypeHasBeenSet(false),
    m_arnHasBeenSet(false)
{
}

RefreshSchedule::RefreshSchedule(JsonView jsonValue) : 
    m_scheduleIdHasBeenSet(false),
    m_scheduleFrequencyHasBeenSet(false),
    m_startAfterDateTimeHasBeenSet(false),
    m_refreshType(IngestionType::NOT_SET),
    m_refreshTypeHasBeenSet(false),
    m_arnHasBeenSet(false)
{
  *this = jsonValue;
}

RefreshSchedule& RefreshSchedule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ScheduleId"))
  {
    m_scheduleId = jsonValue.GetString("ScheduleId");

    m_scheduleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScheduleFrequency"))
  {
    m_scheduleFrequency = jsonValue.GetObject("ScheduleFrequency");

    m_scheduleFrequencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartAfterDateTime"))
  {
    m_startAfterDateTime = jsonValue.GetDouble("StartAfterDateTime");

    m_startAfterDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RefreshType"))
  {
    m_refreshType = IngestionTypeMapper::GetIngestionTypeForName(jsonValue.GetString("RefreshType"));

    m_refreshTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  return *this;
}

JsonValue RefreshSchedule::Jsonize() const
{
  JsonValue payload;

  if(m_scheduleIdHasBeenSet)
  {
   payload.WithString("ScheduleId", m_scheduleId);

  }

  if(m_scheduleFrequencyHasBeenSet)
  {
   payload.WithObject("ScheduleFrequency", m_scheduleFrequency.Jsonize());

  }

  if(m_startAfterDateTimeHasBeenSet)
  {
   payload.WithDouble("StartAfterDateTime", m_startAfterDateTime.SecondsWithMSPrecision());
  }

  if(m_refreshTypeHasBeenSet)
  {
   payload.WithString("RefreshType", IngestionTypeMapper::GetNameForIngestionType(m_refreshType));
  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
