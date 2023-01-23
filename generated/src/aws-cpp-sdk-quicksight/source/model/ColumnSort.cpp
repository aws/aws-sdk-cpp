/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ColumnSort.h>
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

ColumnSort::ColumnSort() : 
    m_sortByHasBeenSet(false),
    m_direction(SortDirection::NOT_SET),
    m_directionHasBeenSet(false),
    m_aggregationFunctionHasBeenSet(false)
{
}

ColumnSort::ColumnSort(JsonView jsonValue) : 
    m_sortByHasBeenSet(false),
    m_direction(SortDirection::NOT_SET),
    m_directionHasBeenSet(false),
    m_aggregationFunctionHasBeenSet(false)
{
  *this = jsonValue;
}

ColumnSort& ColumnSort::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SortBy"))
  {
    m_sortBy = jsonValue.GetObject("SortBy");

    m_sortByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Direction"))
  {
    m_direction = SortDirectionMapper::GetSortDirectionForName(jsonValue.GetString("Direction"));

    m_directionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AggregationFunction"))
  {
    m_aggregationFunction = jsonValue.GetObject("AggregationFunction");

    m_aggregationFunctionHasBeenSet = true;
  }

  return *this;
}

JsonValue ColumnSort::Jsonize() const
{
  JsonValue payload;

  if(m_sortByHasBeenSet)
  {
   payload.WithObject("SortBy", m_sortBy.Jsonize());

  }

  if(m_directionHasBeenSet)
  {
   payload.WithString("Direction", SortDirectionMapper::GetNameForSortDirection(m_direction));
  }

  if(m_aggregationFunctionHasBeenSet)
  {
   payload.WithObject("AggregationFunction", m_aggregationFunction.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
