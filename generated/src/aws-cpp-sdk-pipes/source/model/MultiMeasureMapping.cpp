/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/MultiMeasureMapping.h>
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

MultiMeasureMapping::MultiMeasureMapping(JsonView jsonValue)
{
  *this = jsonValue;
}

MultiMeasureMapping& MultiMeasureMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MultiMeasureName"))
  {
    m_multiMeasureName = jsonValue.GetString("MultiMeasureName");
    m_multiMeasureNameHasBeenSet = true;
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

JsonValue MultiMeasureMapping::Jsonize() const
{
  JsonValue payload;

  if(m_multiMeasureNameHasBeenSet)
  {
   payload.WithString("MultiMeasureName", m_multiMeasureName);

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
} // namespace Pipes
} // namespace Aws
