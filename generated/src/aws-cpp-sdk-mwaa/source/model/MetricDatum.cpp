/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa/model/MetricDatum.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MWAA
{
namespace Model
{

MetricDatum::MetricDatum() : 
    m_dimensionsHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_statisticValuesHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_unit(Unit::NOT_SET),
    m_unitHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
}

MetricDatum::MetricDatum(JsonView jsonValue) : 
    m_dimensionsHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_statisticValuesHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_unit(Unit::NOT_SET),
    m_unitHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

MetricDatum& MetricDatum::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Dimensions"))
  {
    Aws::Utils::Array<JsonView> dimensionsJsonList = jsonValue.GetArray("Dimensions");
    for(unsigned dimensionsIndex = 0; dimensionsIndex < dimensionsJsonList.GetLength(); ++dimensionsIndex)
    {
      m_dimensions.push_back(dimensionsJsonList[dimensionsIndex].AsObject());
    }
    m_dimensionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = jsonValue.GetString("MetricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatisticValues"))
  {
    m_statisticValues = jsonValue.GetObject("StatisticValues");

    m_statisticValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("Timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = UnitMapper::GetUnitForName(jsonValue.GetString("Unit"));

    m_unitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetDouble("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricDatum::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dimensionsJsonList(m_dimensions.size());
   for(unsigned dimensionsIndex = 0; dimensionsIndex < dimensionsJsonList.GetLength(); ++dimensionsIndex)
   {
     dimensionsJsonList[dimensionsIndex].AsObject(m_dimensions[dimensionsIndex].Jsonize());
   }
   payload.WithArray("Dimensions", std::move(dimensionsJsonList));

  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

  }

  if(m_statisticValuesHasBeenSet)
  {
   payload.WithObject("StatisticValues", m_statisticValues.Jsonize());

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", UnitMapper::GetNameForUnit(m_unit));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace MWAA
} // namespace Aws
