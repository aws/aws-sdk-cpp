/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/Record.h>
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

Record::Record() : 
    m_dimensionsHasBeenSet(false),
    m_measureNameHasBeenSet(false),
    m_measureValueHasBeenSet(false),
    m_measureValueType(MeasureValueType::NOT_SET),
    m_measureValueTypeHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_timeUnit(TimeUnit::NOT_SET),
    m_timeUnitHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_measureValuesHasBeenSet(false)
{
}

Record::Record(JsonView jsonValue) : 
    m_dimensionsHasBeenSet(false),
    m_measureNameHasBeenSet(false),
    m_measureValueHasBeenSet(false),
    m_measureValueType(MeasureValueType::NOT_SET),
    m_measureValueTypeHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_timeUnit(TimeUnit::NOT_SET),
    m_timeUnitHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_measureValuesHasBeenSet(false)
{
  *this = jsonValue;
}

Record& Record::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("MeasureName"))
  {
    m_measureName = jsonValue.GetString("MeasureName");

    m_measureNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MeasureValue"))
  {
    m_measureValue = jsonValue.GetString("MeasureValue");

    m_measureValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MeasureValueType"))
  {
    m_measureValueType = MeasureValueTypeMapper::GetMeasureValueTypeForName(jsonValue.GetString("MeasureValueType"));

    m_measureValueTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Time"))
  {
    m_time = jsonValue.GetString("Time");

    m_timeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeUnit"))
  {
    m_timeUnit = TimeUnitMapper::GetTimeUnitForName(jsonValue.GetString("TimeUnit"));

    m_timeUnitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetInt64("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MeasureValues"))
  {
    Aws::Utils::Array<JsonView> measureValuesJsonList = jsonValue.GetArray("MeasureValues");
    for(unsigned measureValuesIndex = 0; measureValuesIndex < measureValuesJsonList.GetLength(); ++measureValuesIndex)
    {
      m_measureValues.push_back(measureValuesJsonList[measureValuesIndex].AsObject());
    }
    m_measureValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue Record::Jsonize() const
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

  if(m_measureNameHasBeenSet)
  {
   payload.WithString("MeasureName", m_measureName);

  }

  if(m_measureValueHasBeenSet)
  {
   payload.WithString("MeasureValue", m_measureValue);

  }

  if(m_measureValueTypeHasBeenSet)
  {
   payload.WithString("MeasureValueType", MeasureValueTypeMapper::GetNameForMeasureValueType(m_measureValueType));
  }

  if(m_timeHasBeenSet)
  {
   payload.WithString("Time", m_time);

  }

  if(m_timeUnitHasBeenSet)
  {
   payload.WithString("TimeUnit", TimeUnitMapper::GetNameForTimeUnit(m_timeUnit));
  }

  if(m_versionHasBeenSet)
  {
   payload.WithInt64("Version", m_version);

  }

  if(m_measureValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> measureValuesJsonList(m_measureValues.size());
   for(unsigned measureValuesIndex = 0; measureValuesIndex < measureValuesJsonList.GetLength(); ++measureValuesIndex)
   {
     measureValuesJsonList[measureValuesIndex].AsObject(m_measureValues[measureValuesIndex].Jsonize());
   }
   payload.WithArray("MeasureValues", std::move(measureValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
