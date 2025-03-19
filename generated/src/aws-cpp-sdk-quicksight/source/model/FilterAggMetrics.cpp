/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FilterAggMetrics.h>
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

FilterAggMetrics::FilterAggMetrics(JsonView jsonValue)
{
  *this = jsonValue;
}

FilterAggMetrics& FilterAggMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricOperand"))
  {
    m_metricOperand = jsonValue.GetObject("MetricOperand");
    m_metricOperandHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Function"))
  {
    m_function = AggTypeMapper::GetAggTypeForName(jsonValue.GetString("Function"));
    m_functionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SortDirection"))
  {
    m_sortDirection = TopicSortDirectionMapper::GetTopicSortDirectionForName(jsonValue.GetString("SortDirection"));
    m_sortDirectionHasBeenSet = true;
  }
  return *this;
}

JsonValue FilterAggMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_metricOperandHasBeenSet)
  {
   payload.WithObject("MetricOperand", m_metricOperand.Jsonize());

  }

  if(m_functionHasBeenSet)
  {
   payload.WithString("Function", AggTypeMapper::GetNameForAggType(m_function));
  }

  if(m_sortDirectionHasBeenSet)
  {
   payload.WithString("SortDirection", TopicSortDirectionMapper::GetNameForTopicSortDirection(m_sortDirection));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
