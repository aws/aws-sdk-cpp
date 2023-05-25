/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/TimestreamConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

TimestreamConfiguration::TimestreamConfiguration() : 
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_timeColumnHasBeenSet(false),
    m_dimensionMappingsHasBeenSet(false),
    m_multiMeasureMappingsHasBeenSet(false),
    m_mixedMeasureMappingsHasBeenSet(false),
    m_measureNameColumnHasBeenSet(false)
{
}

TimestreamConfiguration::TimestreamConfiguration(JsonView jsonValue) : 
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_timeColumnHasBeenSet(false),
    m_dimensionMappingsHasBeenSet(false),
    m_multiMeasureMappingsHasBeenSet(false),
    m_mixedMeasureMappingsHasBeenSet(false),
    m_measureNameColumnHasBeenSet(false)
{
  *this = jsonValue;
}

TimestreamConfiguration& TimestreamConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeColumn"))
  {
    m_timeColumn = jsonValue.GetString("TimeColumn");

    m_timeColumnHasBeenSet = true;
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

JsonValue TimestreamConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_timeColumnHasBeenSet)
  {
   payload.WithString("TimeColumn", m_timeColumn);

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
} // namespace TimestreamQuery
} // namespace Aws
