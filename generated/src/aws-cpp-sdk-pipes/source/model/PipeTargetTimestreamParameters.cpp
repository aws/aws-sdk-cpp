/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/PipeTargetTimestreamParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

PipeTargetTimestreamParameters::PipeTargetTimestreamParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

PipeTargetTimestreamParameters& PipeTargetTimestreamParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimeValue"))
  {
    m_timeValue = jsonValue.GetString("TimeValue");
    m_timeValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EpochTimeUnit"))
  {
    m_epochTimeUnit = EpochTimeUnitMapper::GetEpochTimeUnitForName(jsonValue.GetString("EpochTimeUnit"));
    m_epochTimeUnitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeFieldType"))
  {
    m_timeFieldType = TimeFieldTypeMapper::GetTimeFieldTypeForName(jsonValue.GetString("TimeFieldType"));
    m_timeFieldTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimestampFormat"))
  {
    m_timestampFormat = jsonValue.GetString("TimestampFormat");
    m_timestampFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VersionValue"))
  {
    m_versionValue = jsonValue.GetString("VersionValue");
    m_versionValueHasBeenSet = true;
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
  if(jsonValue.ValueExists("SingleMeasureMappings"))
  {
    Aws::Utils::Array<JsonView> singleMeasureMappingsJsonList = jsonValue.GetArray("SingleMeasureMappings");
    for(unsigned singleMeasureMappingsIndex = 0; singleMeasureMappingsIndex < singleMeasureMappingsJsonList.GetLength(); ++singleMeasureMappingsIndex)
    {
      m_singleMeasureMappings.push_back(singleMeasureMappingsJsonList[singleMeasureMappingsIndex].AsObject());
    }
    m_singleMeasureMappingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MultiMeasureMappings"))
  {
    Aws::Utils::Array<JsonView> multiMeasureMappingsJsonList = jsonValue.GetArray("MultiMeasureMappings");
    for(unsigned multiMeasureMappingsIndex = 0; multiMeasureMappingsIndex < multiMeasureMappingsJsonList.GetLength(); ++multiMeasureMappingsIndex)
    {
      m_multiMeasureMappings.push_back(multiMeasureMappingsJsonList[multiMeasureMappingsIndex].AsObject());
    }
    m_multiMeasureMappingsHasBeenSet = true;
  }
  return *this;
}

JsonValue PipeTargetTimestreamParameters::Jsonize() const
{
  JsonValue payload;

  if(m_timeValueHasBeenSet)
  {
   payload.WithString("TimeValue", m_timeValue);

  }

  if(m_epochTimeUnitHasBeenSet)
  {
   payload.WithString("EpochTimeUnit", EpochTimeUnitMapper::GetNameForEpochTimeUnit(m_epochTimeUnit));
  }

  if(m_timeFieldTypeHasBeenSet)
  {
   payload.WithString("TimeFieldType", TimeFieldTypeMapper::GetNameForTimeFieldType(m_timeFieldType));
  }

  if(m_timestampFormatHasBeenSet)
  {
   payload.WithString("TimestampFormat", m_timestampFormat);

  }

  if(m_versionValueHasBeenSet)
  {
   payload.WithString("VersionValue", m_versionValue);

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

  if(m_singleMeasureMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> singleMeasureMappingsJsonList(m_singleMeasureMappings.size());
   for(unsigned singleMeasureMappingsIndex = 0; singleMeasureMappingsIndex < singleMeasureMappingsJsonList.GetLength(); ++singleMeasureMappingsIndex)
   {
     singleMeasureMappingsJsonList[singleMeasureMappingsIndex].AsObject(m_singleMeasureMappings[singleMeasureMappingsIndex].Jsonize());
   }
   payload.WithArray("SingleMeasureMappings", std::move(singleMeasureMappingsJsonList));

  }

  if(m_multiMeasureMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> multiMeasureMappingsJsonList(m_multiMeasureMappings.size());
   for(unsigned multiMeasureMappingsIndex = 0; multiMeasureMappingsIndex < multiMeasureMappingsJsonList.GetLength(); ++multiMeasureMappingsIndex)
   {
     multiMeasureMappingsJsonList[multiMeasureMappingsIndex].AsObject(m_multiMeasureMappings[multiMeasureMappingsIndex].Jsonize());
   }
   payload.WithArray("MultiMeasureMappings", std::move(multiMeasureMappingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
