/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NamedEntityDefinitionMetric.h>
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

NamedEntityDefinitionMetric::NamedEntityDefinitionMetric() : 
    m_aggregation(NamedEntityAggType::NOT_SET),
    m_aggregationHasBeenSet(false),
    m_aggregationFunctionParametersHasBeenSet(false)
{
}

NamedEntityDefinitionMetric::NamedEntityDefinitionMetric(JsonView jsonValue) : 
    m_aggregation(NamedEntityAggType::NOT_SET),
    m_aggregationHasBeenSet(false),
    m_aggregationFunctionParametersHasBeenSet(false)
{
  *this = jsonValue;
}

NamedEntityDefinitionMetric& NamedEntityDefinitionMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Aggregation"))
  {
    m_aggregation = NamedEntityAggTypeMapper::GetNamedEntityAggTypeForName(jsonValue.GetString("Aggregation"));

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

  return *this;
}

JsonValue NamedEntityDefinitionMetric::Jsonize() const
{
  JsonValue payload;

  if(m_aggregationHasBeenSet)
  {
   payload.WithString("Aggregation", NamedEntityAggTypeMapper::GetNameForNamedEntityAggType(m_aggregation));
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

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
