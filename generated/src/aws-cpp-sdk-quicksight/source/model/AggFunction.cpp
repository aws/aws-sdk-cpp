/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AggFunction.h>
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

AggFunction::AggFunction(JsonView jsonValue)
{
  *this = jsonValue;
}

AggFunction& AggFunction::operator =(JsonView jsonValue)
{
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
  if(jsonValue.ValueExists("Period"))
  {
    m_period = TopicTimeGranularityMapper::GetTopicTimeGranularityForName(jsonValue.GetString("Period"));
    m_periodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PeriodField"))
  {
    m_periodField = jsonValue.GetString("PeriodField");
    m_periodFieldHasBeenSet = true;
  }
  return *this;
}

JsonValue AggFunction::Jsonize() const
{
  JsonValue payload;

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

  if(m_periodHasBeenSet)
  {
   payload.WithString("Period", TopicTimeGranularityMapper::GetNameForTopicTimeGranularity(m_period));
  }

  if(m_periodFieldHasBeenSet)
  {
   payload.WithString("PeriodField", m_periodField);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
