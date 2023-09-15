/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/EdgeStructure.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace neptunedata
{
namespace Model
{

EdgeStructure::EdgeStructure() : 
    m_count(0),
    m_countHasBeenSet(false),
    m_edgePropertiesHasBeenSet(false)
{
}

EdgeStructure::EdgeStructure(JsonView jsonValue) : 
    m_count(0),
    m_countHasBeenSet(false),
    m_edgePropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

EdgeStructure& EdgeStructure::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInt64("count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("edgeProperties"))
  {
    Aws::Utils::Array<JsonView> edgePropertiesJsonList = jsonValue.GetArray("edgeProperties");
    for(unsigned edgePropertiesIndex = 0; edgePropertiesIndex < edgePropertiesJsonList.GetLength(); ++edgePropertiesIndex)
    {
      m_edgeProperties.push_back(edgePropertiesJsonList[edgePropertiesIndex].AsString());
    }
    m_edgePropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue EdgeStructure::Jsonize() const
{
  JsonValue payload;

  if(m_countHasBeenSet)
  {
   payload.WithInt64("count", m_count);

  }

  if(m_edgePropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> edgePropertiesJsonList(m_edgeProperties.size());
   for(unsigned edgePropertiesIndex = 0; edgePropertiesIndex < edgePropertiesJsonList.GetLength(); ++edgePropertiesIndex)
   {
     edgePropertiesJsonList[edgePropertiesIndex].AsString(m_edgeProperties[edgePropertiesIndex]);
   }
   payload.WithArray("edgeProperties", std::move(edgePropertiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace neptunedata
} // namespace Aws
