/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicIRFilterOption.h>
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

TopicIRFilterOption::TopicIRFilterOption(JsonView jsonValue)
{
  *this = jsonValue;
}

TopicIRFilterOption& TopicIRFilterOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FilterType"))
  {
    m_filterType = TopicIRFilterTypeMapper::GetTopicIRFilterTypeForName(jsonValue.GetString("FilterType"));
    m_filterTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FilterClass"))
  {
    m_filterClass = FilterClassMapper::GetFilterClassForName(jsonValue.GetString("FilterClass"));
    m_filterClassHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OperandField"))
  {
    m_operandField = jsonValue.GetObject("OperandField");
    m_operandFieldHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Function"))
  {
    m_function = TopicIRFilterFunctionMapper::GetTopicIRFilterFunctionForName(jsonValue.GetString("Function"));
    m_functionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Constant"))
  {
    m_constant = jsonValue.GetObject("Constant");
    m_constantHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Inverse"))
  {
    m_inverse = jsonValue.GetBool("Inverse");
    m_inverseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NullFilter"))
  {
    m_nullFilter = NullFilterOptionMapper::GetNullFilterOptionForName(jsonValue.GetString("NullFilter"));
    m_nullFilterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Aggregation"))
  {
    m_aggregation = AggTypeMapper::GetAggTypeForName(jsonValue.GetString("Aggregation"));
    m_aggregationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AggregationFunctionParameters"))
  {
    Aws::Map<Aws::String, JsonView> aggregationFunctionParametersJsonMap = jsonValue.GetObject("AggregationFunctionParameters").GetAllObjects();
    for(auto& aggregationFunctionParametersItem : aggregationFunctionParametersJsonMap)
    {
      m_aggregationFunctionParameters[aggregationFunctionParametersItem.first] = aggregationFunctionParametersItem.second.AsString();
    }
    m_aggregationFunctionParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AggregationPartitionBy"))
  {
    Aws::Utils::Array<JsonView> aggregationPartitionByJsonList = jsonValue.GetArray("AggregationPartitionBy");
    for(unsigned aggregationPartitionByIndex = 0; aggregationPartitionByIndex < aggregationPartitionByJsonList.GetLength(); ++aggregationPartitionByIndex)
    {
      m_aggregationPartitionBy.push_back(aggregationPartitionByJsonList[aggregationPartitionByIndex].AsObject());
    }
    m_aggregationPartitionByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Range"))
  {
    m_range = jsonValue.GetObject("Range");
    m_rangeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Inclusive"))
  {
    m_inclusive = jsonValue.GetBool("Inclusive");
    m_inclusiveHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeGranularity"))
  {
    m_timeGranularity = TimeGranularityMapper::GetTimeGranularityForName(jsonValue.GetString("TimeGranularity"));
    m_timeGranularityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastNextOffset"))
  {
    m_lastNextOffset = jsonValue.GetObject("LastNextOffset");
    m_lastNextOffsetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AggMetrics"))
  {
    Aws::Utils::Array<JsonView> aggMetricsJsonList = jsonValue.GetArray("AggMetrics");
    for(unsigned aggMetricsIndex = 0; aggMetricsIndex < aggMetricsJsonList.GetLength(); ++aggMetricsIndex)
    {
      m_aggMetrics.push_back(aggMetricsJsonList[aggMetricsIndex].AsObject());
    }
    m_aggMetricsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TopBottomLimit"))
  {
    m_topBottomLimit = jsonValue.GetObject("TopBottomLimit");
    m_topBottomLimitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SortDirection"))
  {
    m_sortDirection = TopicSortDirectionMapper::GetTopicSortDirectionForName(jsonValue.GetString("SortDirection"));
    m_sortDirectionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Anchor"))
  {
    m_anchor = jsonValue.GetObject("Anchor");
    m_anchorHasBeenSet = true;
  }
  return *this;
}

JsonValue TopicIRFilterOption::Jsonize() const
{
  JsonValue payload;

  if(m_filterTypeHasBeenSet)
  {
   payload.WithString("FilterType", TopicIRFilterTypeMapper::GetNameForTopicIRFilterType(m_filterType));
  }

  if(m_filterClassHasBeenSet)
  {
   payload.WithString("FilterClass", FilterClassMapper::GetNameForFilterClass(m_filterClass));
  }

  if(m_operandFieldHasBeenSet)
  {
   payload.WithObject("OperandField", m_operandField.Jsonize());

  }

  if(m_functionHasBeenSet)
  {
   payload.WithString("Function", TopicIRFilterFunctionMapper::GetNameForTopicIRFilterFunction(m_function));
  }

  if(m_constantHasBeenSet)
  {
   payload.WithObject("Constant", m_constant.Jsonize());

  }

  if(m_inverseHasBeenSet)
  {
   payload.WithBool("Inverse", m_inverse);

  }

  if(m_nullFilterHasBeenSet)
  {
   payload.WithString("NullFilter", NullFilterOptionMapper::GetNameForNullFilterOption(m_nullFilter));
  }

  if(m_aggregationHasBeenSet)
  {
   payload.WithString("Aggregation", AggTypeMapper::GetNameForAggType(m_aggregation));
  }

  if(m_aggregationFunctionParametersHasBeenSet)
  {
   JsonValue aggregationFunctionParametersJsonMap;
   for(auto& aggregationFunctionParametersItem : m_aggregationFunctionParameters)
   {
     aggregationFunctionParametersJsonMap.WithString(aggregationFunctionParametersItem.first, aggregationFunctionParametersItem.second);
   }
   payload.WithObject("AggregationFunctionParameters", std::move(aggregationFunctionParametersJsonMap));

  }

  if(m_aggregationPartitionByHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> aggregationPartitionByJsonList(m_aggregationPartitionBy.size());
   for(unsigned aggregationPartitionByIndex = 0; aggregationPartitionByIndex < aggregationPartitionByJsonList.GetLength(); ++aggregationPartitionByIndex)
   {
     aggregationPartitionByJsonList[aggregationPartitionByIndex].AsObject(m_aggregationPartitionBy[aggregationPartitionByIndex].Jsonize());
   }
   payload.WithArray("AggregationPartitionBy", std::move(aggregationPartitionByJsonList));

  }

  if(m_rangeHasBeenSet)
  {
   payload.WithObject("Range", m_range.Jsonize());

  }

  if(m_inclusiveHasBeenSet)
  {
   payload.WithBool("Inclusive", m_inclusive);

  }

  if(m_timeGranularityHasBeenSet)
  {
   payload.WithString("TimeGranularity", TimeGranularityMapper::GetNameForTimeGranularity(m_timeGranularity));
  }

  if(m_lastNextOffsetHasBeenSet)
  {
   payload.WithObject("LastNextOffset", m_lastNextOffset.Jsonize());

  }

  if(m_aggMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> aggMetricsJsonList(m_aggMetrics.size());
   for(unsigned aggMetricsIndex = 0; aggMetricsIndex < aggMetricsJsonList.GetLength(); ++aggMetricsIndex)
   {
     aggMetricsJsonList[aggMetricsIndex].AsObject(m_aggMetrics[aggMetricsIndex].Jsonize());
   }
   payload.WithArray("AggMetrics", std::move(aggMetricsJsonList));

  }

  if(m_topBottomLimitHasBeenSet)
  {
   payload.WithObject("TopBottomLimit", m_topBottomLimit.Jsonize());

  }

  if(m_sortDirectionHasBeenSet)
  {
   payload.WithString("SortDirection", TopicSortDirectionMapper::GetNameForTopicSortDirection(m_sortDirection));
  }

  if(m_anchorHasBeenSet)
  {
   payload.WithObject("Anchor", m_anchor.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
