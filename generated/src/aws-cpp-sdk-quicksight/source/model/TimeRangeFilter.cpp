/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TimeRangeFilter.h>
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

TimeRangeFilter::TimeRangeFilter() : 
    m_filterIdHasBeenSet(false),
    m_columnHasBeenSet(false),
    m_includeMinimum(false),
    m_includeMinimumHasBeenSet(false),
    m_includeMaximum(false),
    m_includeMaximumHasBeenSet(false),
    m_rangeMinimumValueHasBeenSet(false),
    m_rangeMaximumValueHasBeenSet(false),
    m_nullOption(FilterNullOption::NOT_SET),
    m_nullOptionHasBeenSet(false),
    m_excludePeriodConfigurationHasBeenSet(false),
    m_timeGranularity(TimeGranularity::NOT_SET),
    m_timeGranularityHasBeenSet(false)
{
}

TimeRangeFilter::TimeRangeFilter(JsonView jsonValue) : 
    m_filterIdHasBeenSet(false),
    m_columnHasBeenSet(false),
    m_includeMinimum(false),
    m_includeMinimumHasBeenSet(false),
    m_includeMaximum(false),
    m_includeMaximumHasBeenSet(false),
    m_rangeMinimumValueHasBeenSet(false),
    m_rangeMaximumValueHasBeenSet(false),
    m_nullOption(FilterNullOption::NOT_SET),
    m_nullOptionHasBeenSet(false),
    m_excludePeriodConfigurationHasBeenSet(false),
    m_timeGranularity(TimeGranularity::NOT_SET),
    m_timeGranularityHasBeenSet(false)
{
  *this = jsonValue;
}

TimeRangeFilter& TimeRangeFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FilterId"))
  {
    m_filterId = jsonValue.GetString("FilterId");

    m_filterIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Column"))
  {
    m_column = jsonValue.GetObject("Column");

    m_columnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeMinimum"))
  {
    m_includeMinimum = jsonValue.GetBool("IncludeMinimum");

    m_includeMinimumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeMaximum"))
  {
    m_includeMaximum = jsonValue.GetBool("IncludeMaximum");

    m_includeMaximumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RangeMinimumValue"))
  {
    m_rangeMinimumValue = jsonValue.GetObject("RangeMinimumValue");

    m_rangeMinimumValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RangeMaximumValue"))
  {
    m_rangeMaximumValue = jsonValue.GetObject("RangeMaximumValue");

    m_rangeMaximumValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NullOption"))
  {
    m_nullOption = FilterNullOptionMapper::GetFilterNullOptionForName(jsonValue.GetString("NullOption"));

    m_nullOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExcludePeriodConfiguration"))
  {
    m_excludePeriodConfiguration = jsonValue.GetObject("ExcludePeriodConfiguration");

    m_excludePeriodConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeGranularity"))
  {
    m_timeGranularity = TimeGranularityMapper::GetTimeGranularityForName(jsonValue.GetString("TimeGranularity"));

    m_timeGranularityHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeRangeFilter::Jsonize() const
{
  JsonValue payload;

  if(m_filterIdHasBeenSet)
  {
   payload.WithString("FilterId", m_filterId);

  }

  if(m_columnHasBeenSet)
  {
   payload.WithObject("Column", m_column.Jsonize());

  }

  if(m_includeMinimumHasBeenSet)
  {
   payload.WithBool("IncludeMinimum", m_includeMinimum);

  }

  if(m_includeMaximumHasBeenSet)
  {
   payload.WithBool("IncludeMaximum", m_includeMaximum);

  }

  if(m_rangeMinimumValueHasBeenSet)
  {
   payload.WithObject("RangeMinimumValue", m_rangeMinimumValue.Jsonize());

  }

  if(m_rangeMaximumValueHasBeenSet)
  {
   payload.WithObject("RangeMaximumValue", m_rangeMaximumValue.Jsonize());

  }

  if(m_nullOptionHasBeenSet)
  {
   payload.WithString("NullOption", FilterNullOptionMapper::GetNameForFilterNullOption(m_nullOption));
  }

  if(m_excludePeriodConfigurationHasBeenSet)
  {
   payload.WithObject("ExcludePeriodConfiguration", m_excludePeriodConfiguration.Jsonize());

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
