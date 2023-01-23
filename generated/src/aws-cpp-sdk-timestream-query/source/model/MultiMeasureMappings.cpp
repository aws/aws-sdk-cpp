/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/MultiMeasureMappings.h>
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

MultiMeasureMappings::MultiMeasureMappings() : 
    m_targetMultiMeasureNameHasBeenSet(false),
    m_multiMeasureAttributeMappingsHasBeenSet(false)
{
}

MultiMeasureMappings::MultiMeasureMappings(JsonView jsonValue) : 
    m_targetMultiMeasureNameHasBeenSet(false),
    m_multiMeasureAttributeMappingsHasBeenSet(false)
{
  *this = jsonValue;
}

MultiMeasureMappings& MultiMeasureMappings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TargetMultiMeasureName"))
  {
    m_targetMultiMeasureName = jsonValue.GetString("TargetMultiMeasureName");

    m_targetMultiMeasureNameHasBeenSet = true;
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

JsonValue MultiMeasureMappings::Jsonize() const
{
  JsonValue payload;

  if(m_targetMultiMeasureNameHasBeenSet)
  {
   payload.WithString("TargetMultiMeasureName", m_targetMultiMeasureName);

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
