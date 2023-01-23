/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TimeRangeDrillDownFilter.h>
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

TimeRangeDrillDownFilter::TimeRangeDrillDownFilter() : 
    m_columnHasBeenSet(false),
    m_rangeMinimumHasBeenSet(false),
    m_rangeMaximumHasBeenSet(false),
    m_timeGranularity(TimeGranularity::NOT_SET),
    m_timeGranularityHasBeenSet(false)
{
}

TimeRangeDrillDownFilter::TimeRangeDrillDownFilter(JsonView jsonValue) : 
    m_columnHasBeenSet(false),
    m_rangeMinimumHasBeenSet(false),
    m_rangeMaximumHasBeenSet(false),
    m_timeGranularity(TimeGranularity::NOT_SET),
    m_timeGranularityHasBeenSet(false)
{
  *this = jsonValue;
}

TimeRangeDrillDownFilter& TimeRangeDrillDownFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Column"))
  {
    m_column = jsonValue.GetObject("Column");

    m_columnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RangeMinimum"))
  {
    m_rangeMinimum = jsonValue.GetDouble("RangeMinimum");

    m_rangeMinimumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RangeMaximum"))
  {
    m_rangeMaximum = jsonValue.GetDouble("RangeMaximum");

    m_rangeMaximumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeGranularity"))
  {
    m_timeGranularity = TimeGranularityMapper::GetTimeGranularityForName(jsonValue.GetString("TimeGranularity"));

    m_timeGranularityHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeRangeDrillDownFilter::Jsonize() const
{
  JsonValue payload;

  if(m_columnHasBeenSet)
  {
   payload.WithObject("Column", m_column.Jsonize());

  }

  if(m_rangeMinimumHasBeenSet)
  {
   payload.WithDouble("RangeMinimum", m_rangeMinimum.SecondsWithMSPrecision());
  }

  if(m_rangeMaximumHasBeenSet)
  {
   payload.WithDouble("RangeMaximum", m_rangeMaximum.SecondsWithMSPrecision());
  }

  if(m_timeGranularityHasBeenSet)
  {
   payload.WithString("TimeGranularity", TimeGranularityMapper::GetNameForTimeGranularity(m_timeGranularity));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
