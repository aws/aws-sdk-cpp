/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/MixedMeasureMapping.h>
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

MixedMeasureMapping::MixedMeasureMapping() : 
    m_measureNameHasBeenSet(false),
    m_sourceColumnHasBeenSet(false),
    m_targetMeasureNameHasBeenSet(false),
    m_measureValueType(MeasureValueType::NOT_SET),
    m_measureValueTypeHasBeenSet(false),
    m_multiMeasureAttributeMappingsHasBeenSet(false)
{
}

MixedMeasureMapping::MixedMeasureMapping(JsonView jsonValue) : 
    m_measureNameHasBeenSet(false),
    m_sourceColumnHasBeenSet(false),
    m_targetMeasureNameHasBeenSet(false),
    m_measureValueType(MeasureValueType::NOT_SET),
    m_measureValueTypeHasBeenSet(false),
    m_multiMeasureAttributeMappingsHasBeenSet(false)
{
  *this = jsonValue;
}

MixedMeasureMapping& MixedMeasureMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MeasureName"))
  {
    m_measureName = jsonValue.GetString("MeasureName");

    m_measureNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceColumn"))
  {
    m_sourceColumn = jsonValue.GetString("SourceColumn");

    m_sourceColumnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetMeasureName"))
  {
    m_targetMeasureName = jsonValue.GetString("TargetMeasureName");

    m_targetMeasureNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MeasureValueType"))
  {
    m_measureValueType = MeasureValueTypeMapper::GetMeasureValueTypeForName(jsonValue.GetString("MeasureValueType"));

    m_measureValueTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MultiMeasureAttributeMappings"))
  {
    Aws::Utils::Array<JsonView> multiMeasureAttributeMappingsJsonList = jsonValue.GetArray("MultiMeasureAttributeMappings");
    for(unsigned multiMeasureAttributeMappingsIndex = 0; multiMeasureAttributeMappingsIndex < multiMeasureAttributeMappingsJsonList.GetLength(); ++multiMeasureAttributeMappingsIndex)
    {
      m_multiMeasureAttributeMappings.push_back(multiMeasureAttributeMappingsJsonList[multiMeasureAttributeMappingsIndex].AsObject());
    }
    m_multiMeasureAttributeMappingsHasBeenSet = true;
  }

  return *this;
}

JsonValue MixedMeasureMapping::Jsonize() const
{
  JsonValue payload;

  if(m_measureNameHasBeenSet)
  {
   payload.WithString("MeasureName", m_measureName);

  }

  if(m_sourceColumnHasBeenSet)
  {
   payload.WithString("SourceColumn", m_sourceColumn);

  }

  if(m_targetMeasureNameHasBeenSet)
  {
   payload.WithString("TargetMeasureName", m_targetMeasureName);

  }

  if(m_measureValueTypeHasBeenSet)
  {
   payload.WithString("MeasureValueType", MeasureValueTypeMapper::GetNameForMeasureValueType(m_measureValueType));
  }

  if(m_multiMeasureAttributeMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> multiMeasureAttributeMappingsJsonList(m_multiMeasureAttributeMappings.size());
   for(unsigned multiMeasureAttributeMappingsIndex = 0; multiMeasureAttributeMappingsIndex < multiMeasureAttributeMappingsJsonList.GetLength(); ++multiMeasureAttributeMappingsIndex)
   {
     multiMeasureAttributeMappingsJsonList[multiMeasureAttributeMappingsIndex].AsObject(m_multiMeasureAttributeMappings[multiMeasureAttributeMappingsIndex].Jsonize());
   }
   payload.WithArray("MultiMeasureAttributeMappings", std::move(multiMeasureAttributeMappingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
