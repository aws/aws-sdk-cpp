/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/PrefetchRetrieval.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

PrefetchRetrieval::PrefetchRetrieval(JsonView jsonValue)
{
  *this = jsonValue;
}

PrefetchRetrieval& PrefetchRetrieval::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DynamicVariables"))
  {
    Aws::Map<Aws::String, JsonView> dynamicVariablesJsonMap = jsonValue.GetObject("DynamicVariables").GetAllObjects();
    for(auto& dynamicVariablesItem : dynamicVariablesJsonMap)
    {
      m_dynamicVariables[dynamicVariablesItem.first] = dynamicVariablesItem.second.AsString();
    }
    m_dynamicVariablesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrafficShapingType"))
  {
    m_trafficShapingType = TrafficShapingTypeMapper::GetTrafficShapingTypeForName(jsonValue.GetString("TrafficShapingType"));
    m_trafficShapingTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrafficShapingRetrievalWindow"))
  {
    m_trafficShapingRetrievalWindow = jsonValue.GetObject("TrafficShapingRetrievalWindow");
    m_trafficShapingRetrievalWindowHasBeenSet = true;
  }
  return *this;
}

JsonValue PrefetchRetrieval::Jsonize() const
{
  JsonValue payload;

  if(m_dynamicVariablesHasBeenSet)
  {
   JsonValue dynamicVariablesJsonMap;
   for(auto& dynamicVariablesItem : m_dynamicVariables)
   {
     dynamicVariablesJsonMap.WithString(dynamicVariablesItem.first, dynamicVariablesItem.second);
   }
   payload.WithObject("DynamicVariables", std::move(dynamicVariablesJsonMap));

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_trafficShapingTypeHasBeenSet)
  {
   payload.WithString("TrafficShapingType", TrafficShapingTypeMapper::GetNameForTrafficShapingType(m_trafficShapingType));
  }

  if(m_trafficShapingRetrievalWindowHasBeenSet)
  {
   payload.WithObject("TrafficShapingRetrievalWindow", m_trafficShapingRetrievalWindow.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
