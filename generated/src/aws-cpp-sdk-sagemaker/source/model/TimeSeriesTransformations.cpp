/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TimeSeriesTransformations.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

TimeSeriesTransformations::TimeSeriesTransformations() : 
    m_fillingHasBeenSet(false),
    m_aggregationHasBeenSet(false)
{
}

TimeSeriesTransformations::TimeSeriesTransformations(JsonView jsonValue) : 
    m_fillingHasBeenSet(false),
    m_aggregationHasBeenSet(false)
{
  *this = jsonValue;
}

TimeSeriesTransformations& TimeSeriesTransformations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Filling"))
  {
    Aws::Map<Aws::String, JsonView> fillingJsonMap = jsonValue.GetObject("Filling").GetAllObjects();
    for(auto& fillingItem : fillingJsonMap)
    {
      Aws::Map<Aws::String, JsonView> fillingTransformationMapJsonMap = fillingItem.second.GetAllObjects();
      Aws::Map<FillingType, Aws::String> fillingTransformationMapMap;
      for(auto& fillingTransformationMapItem : fillingTransformationMapJsonMap)
      {
        fillingTransformationMapMap[FillingTypeMapper::GetFillingTypeForName(fillingTransformationMapItem.first)] = fillingTransformationMapItem.second.AsString();
      }
      m_filling[fillingItem.first] = std::move(fillingTransformationMapMap);
    }
    m_fillingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Aggregation"))
  {
    Aws::Map<Aws::String, JsonView> aggregationJsonMap = jsonValue.GetObject("Aggregation").GetAllObjects();
    for(auto& aggregationItem : aggregationJsonMap)
    {
      m_aggregation[aggregationItem.first] = AggregationTransformationValueMapper::GetAggregationTransformationValueForName(aggregationItem.second.AsString());
    }
    m_aggregationHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeSeriesTransformations::Jsonize() const
{
  JsonValue payload;

  if(m_fillingHasBeenSet)
  {
   JsonValue fillingJsonMap;
   for(auto& fillingItem : m_filling)
   {
     JsonValue fillingTransformationMapJsonMap;
     for(auto& fillingTransformationMapItem : fillingItem.second)
     {
       fillingTransformationMapJsonMap.WithString(FillingTypeMapper::GetNameForFillingType(fillingTransformationMapItem.first), fillingTransformationMapItem.second);
     }
     fillingJsonMap.WithObject(fillingItem.first, std::move(fillingTransformationMapJsonMap));
   }
   payload.WithObject("Filling", std::move(fillingJsonMap));

  }

  if(m_aggregationHasBeenSet)
  {
   JsonValue aggregationJsonMap;
   for(auto& aggregationItem : m_aggregation)
   {
     aggregationJsonMap.WithString(aggregationItem.first, AggregationTransformationValueMapper::GetNameForAggregationTransformationValue(aggregationItem.second));
   }
   payload.WithObject("Aggregation", std::move(aggregationJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
