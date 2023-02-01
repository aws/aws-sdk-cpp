/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AggregationSortConfiguration.h>
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

AggregationSortConfiguration::AggregationSortConfiguration() : 
    m_columnHasBeenSet(false),
    m_sortDirection(SortDirection::NOT_SET),
    m_sortDirectionHasBeenSet(false),
    m_aggregationFunctionHasBeenSet(false)
{
}

AggregationSortConfiguration::AggregationSortConfiguration(JsonView jsonValue) : 
    m_columnHasBeenSet(false),
    m_sortDirection(SortDirection::NOT_SET),
    m_sortDirectionHasBeenSet(false),
    m_aggregationFunctionHasBeenSet(false)
{
  *this = jsonValue;
}

AggregationSortConfiguration& AggregationSortConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Column"))
  {
    m_column = jsonValue.GetObject("Column");

    m_columnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SortDirection"))
  {
    m_sortDirection = SortDirectionMapper::GetSortDirectionForName(jsonValue.GetString("SortDirection"));

    m_sortDirectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AggregationFunction"))
  {
    m_aggregationFunction = jsonValue.GetObject("AggregationFunction");

    m_aggregationFunctionHasBeenSet = true;
  }

  return *this;
}

JsonValue AggregationSortConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_columnHasBeenSet)
  {
   payload.WithObject("Column", m_column.Jsonize());

  }

  if(m_sortDirectionHasBeenSet)
  {
   payload.WithString("SortDirection", SortDirectionMapper::GetNameForSortDirection(m_sortDirection));
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
