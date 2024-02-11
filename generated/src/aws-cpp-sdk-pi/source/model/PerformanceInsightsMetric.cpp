/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/PerformanceInsightsMetric.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PI
{
namespace Model
{

PerformanceInsightsMetric::PerformanceInsightsMetric() : 
    m_metricHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
}

PerformanceInsightsMetric::PerformanceInsightsMetric(JsonView jsonValue) : 
    m_metricHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

PerformanceInsightsMetric& PerformanceInsightsMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Metric"))
  {
    m_metric = jsonValue.GetString("Metric");

    m_metricHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Dimensions"))
  {
    Aws::Map<Aws::String, JsonView> dimensionsJsonMap = jsonValue.GetObject("Dimensions").GetAllObjects();
    for(auto& dimensionsItem : dimensionsJsonMap)
    {
      m_dimensions[dimensionsItem.first] = dimensionsItem.second.AsString();
    }
    m_dimensionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetDouble("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue PerformanceInsightsMetric::Jsonize() const
{
  JsonValue payload;

  if(m_metricHasBeenSet)
  {
   payload.WithString("Metric", m_metric);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_dimensionsHasBeenSet)
  {
   JsonValue dimensionsJsonMap;
   for(auto& dimensionsItem : m_dimensions)
   {
     dimensionsJsonMap.WithString(dimensionsItem.first, dimensionsItem.second);
   }
   payload.WithObject("Dimensions", std::move(dimensionsJsonMap));

  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace PI
} // namespace Aws
