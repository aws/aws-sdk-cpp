/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/Filter.h>
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

Filter::Filter() : 
    m_categoryFilterHasBeenSet(false),
    m_numericRangeFilterHasBeenSet(false),
    m_numericEqualityFilterHasBeenSet(false),
    m_timeEqualityFilterHasBeenSet(false),
    m_timeRangeFilterHasBeenSet(false),
    m_relativeDatesFilterHasBeenSet(false),
    m_topBottomFilterHasBeenSet(false)
{
}

Filter::Filter(JsonView jsonValue) : 
    m_categoryFilterHasBeenSet(false),
    m_numericRangeFilterHasBeenSet(false),
    m_numericEqualityFilterHasBeenSet(false),
    m_timeEqualityFilterHasBeenSet(false),
    m_timeRangeFilterHasBeenSet(false),
    m_relativeDatesFilterHasBeenSet(false),
    m_topBottomFilterHasBeenSet(false)
{
  *this = jsonValue;
}

Filter& Filter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CategoryFilter"))
  {
    m_categoryFilter = jsonValue.GetObject("CategoryFilter");

    m_categoryFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumericRangeFilter"))
  {
    m_numericRangeFilter = jsonValue.GetObject("NumericRangeFilter");

    m_numericRangeFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumericEqualityFilter"))
  {
    m_numericEqualityFilter = jsonValue.GetObject("NumericEqualityFilter");

    m_numericEqualityFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeEqualityFilter"))
  {
    m_timeEqualityFilter = jsonValue.GetObject("TimeEqualityFilter");

    m_timeEqualityFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeRangeFilter"))
  {
    m_timeRangeFilter = jsonValue.GetObject("TimeRangeFilter");

    m_timeRangeFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RelativeDatesFilter"))
  {
    m_relativeDatesFilter = jsonValue.GetObject("RelativeDatesFilter");

    m_relativeDatesFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TopBottomFilter"))
  {
    m_topBottomFilter = jsonValue.GetObject("TopBottomFilter");

    m_topBottomFilterHasBeenSet = true;
  }

  return *this;
}

JsonValue Filter::Jsonize() const
{
  JsonValue payload;

  if(m_categoryFilterHasBeenSet)
  {
   payload.WithObject("CategoryFilter", m_categoryFilter.Jsonize());

  }

  if(m_numericRangeFilterHasBeenSet)
  {
   payload.WithObject("NumericRangeFilter", m_numericRangeFilter.Jsonize());

  }

  if(m_numericEqualityFilterHasBeenSet)
  {
   payload.WithObject("NumericEqualityFilter", m_numericEqualityFilter.Jsonize());

  }

  if(m_timeEqualityFilterHasBeenSet)
  {
   payload.WithObject("TimeEqualityFilter", m_timeEqualityFilter.Jsonize());

  }

  if(m_timeRangeFilterHasBeenSet)
  {
   payload.WithObject("TimeRangeFilter", m_timeRangeFilter.Jsonize());

  }

  if(m_relativeDatesFilterHasBeenSet)
  {
   payload.WithObject("RelativeDatesFilter", m_relativeDatesFilter.Jsonize());

  }

  if(m_topBottomFilterHasBeenSet)
  {
   payload.WithObject("TopBottomFilter", m_topBottomFilter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
