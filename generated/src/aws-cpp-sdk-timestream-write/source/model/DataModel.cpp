/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/DataModel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamWrite
{
namespace Model
{

DataModel::DataModel() : 
    m_timeColumnHasBeenSet(false),
    m_timeUnit(TimeUnit::NOT_SET),
    m_timeUnitHasBeenSet(false),
    m_dimensionMappingsHasBeenSet(false),
    m_multiMeasureMappingsHasBeenSet(false),
    m_mixedMeasureMappingsHasBeenSet(false),
    m_measureNameColumnHasBeenSet(false)
{
}

DataModel::DataModel(JsonView jsonValue) : 
    m_timeColumnHasBeenSet(false),
    m_timeUnit(TimeUnit::NOT_SET),
    m_timeUnitHasBeenSet(false),
    m_dimensionMappingsHasBeenSet(false),
    m_multiMeasureMappingsHasBeenSet(false),
    m_mixedMeasureMappingsHasBeenSet(false),
    m_measureNameColumnHasBeenSet(false)
{
  *this = jsonValue;
}

DataModel& DataModel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimeColumn"))
  {
    m_timeColumn = jsonValue.GetString("TimeColumn");

    m_timeColumnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeUnit"))
  {
    m_timeUnit = TimeUnitMapper::GetTimeUnitForName(jsonValue.GetString("TimeUnit"));

    m_timeUnitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DimensionMappings"))
  {
    Aws::Utils::Array<JsonView> dimensionMappingsJsonList = jsonValue.GetArray("DimensionMappings");
    for(unsigned dimensionMappingsIndex = 0; dimensionMappingsIndex < dimensionMappingsJsonList.GetLength(); ++dimensionMappingsIndex)
    {
      m_dimensionMappings.push_back(dimensionMappingsJsonList[dimensionMappingsIndex].AsObject());
    }
    m_dimensionMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MultiMeasureMappings"))
  {
    m_multiMeasureMappings = jsonValue.GetObject("MultiMeasureMappings");

    m_multiMeasureMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MixedMeasureMappings"))
  {
    Aws::Utils::Array<JsonView> mixedMeasureMappingsJsonList = jsonValue.GetArray("MixedMeasureMappings");
    for(unsigned mixedMeasureMappingsIndex = 0; mixedMeasureMappingsIndex < mixedMeasureMappingsJsonList.GetLength(); ++mixedMeasureMappingsIndex)
    {
      m_mixedMeasureMappings.push_back(mixedMeasureMappingsJsonList[mixedMeasureMappingsIndex].AsObject());
    }
    m_mixedMeasureMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MeasureNameColumn"))
  {
    m_measureNameColumn = jsonValue.GetString("MeasureNameColumn");

    m_measureNameColumnHasBeenSet = true;
  }

  return *this;
}

JsonValue DataModel::Jsonize() const
{
  JsonValue payload;

  if(m_timeColumnHasBeenSet)
  {
   payload.WithString("TimeColumn", m_timeColumn);

  }

  if(m_timeUnitHasBeenSet)
  {
   payload.WithString("TimeUnit", TimeUnitMapper::GetNameForTimeUnit(m_timeUnit));
  }

  if(m_dimensionMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dimensionMappingsJsonList(m_dimensionMappings.size());
   for(unsigned dimensionMappingsIndex = 0; dimensionMappingsIndex < dimensionMappingsJsonList.GetLength(); ++dimensionMappingsIndex)
   {
     dimensionMappingsJsonList[dimensionMappingsIndex].AsObject(m_dimensionMappings[dimensionMappingsIndex].Jsonize());
   }
   payload.WithArray("DimensionMappings", std::move(dimensionMappingsJsonList));

  }

  if(m_multiMeasureMappingsHasBeenSet)
  {
   payload.WithObject("MultiMeasureMappings", m_multiMeasureMappings.Jsonize());

  }

  if(m_mixedMeasureMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mixedMeasureMappingsJsonList(m_mixedMeasureMappings.size());
   for(unsigned mixedMeasureMappingsIndex = 0; mixedMeasureMappingsIndex < mixedMeasureMappingsJsonList.GetLength(); ++mixedMeasureMappingsIndex)
   {
     mixedMeasureMappingsJsonList[mixedMeasureMappingsIndex].AsObject(m_mixedMeasureMappings[mixedMeasureMappingsIndex].Jsonize());
   }
   payload.WithArray("MixedMeasureMappings", std::move(mixedMeasureMappingsJsonList));

  }

  if(m_measureNameColumnHasBeenSet)
  {
   payload.WithString("MeasureNameColumn", m_measureNameColumn);

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
