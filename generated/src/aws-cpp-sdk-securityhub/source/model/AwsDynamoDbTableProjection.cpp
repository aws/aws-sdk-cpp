/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsDynamoDbTableProjection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsDynamoDbTableProjection::AwsDynamoDbTableProjection() : 
    m_nonKeyAttributesHasBeenSet(false),
    m_projectionTypeHasBeenSet(false)
{
}

AwsDynamoDbTableProjection::AwsDynamoDbTableProjection(JsonView jsonValue) : 
    m_nonKeyAttributesHasBeenSet(false),
    m_projectionTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsDynamoDbTableProjection& AwsDynamoDbTableProjection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NonKeyAttributes"))
  {
    Aws::Utils::Array<JsonView> nonKeyAttributesJsonList = jsonValue.GetArray("NonKeyAttributes");
    for(unsigned nonKeyAttributesIndex = 0; nonKeyAttributesIndex < nonKeyAttributesJsonList.GetLength(); ++nonKeyAttributesIndex)
    {
      m_nonKeyAttributes.push_back(nonKeyAttributesJsonList[nonKeyAttributesIndex].AsString());
    }
    m_nonKeyAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProjectionType"))
  {
    m_projectionType = jsonValue.GetString("ProjectionType");

    m_projectionTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsDynamoDbTableProjection::Jsonize() const
{
  JsonValue payload;

  if(m_nonKeyAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nonKeyAttributesJsonList(m_nonKeyAttributes.size());
   for(unsigned nonKeyAttributesIndex = 0; nonKeyAttributesIndex < nonKeyAttributesJsonList.GetLength(); ++nonKeyAttributesIndex)
   {
     nonKeyAttributesJsonList[nonKeyAttributesIndex].AsString(m_nonKeyAttributes[nonKeyAttributesIndex]);
   }
   payload.WithArray("NonKeyAttributes", std::move(nonKeyAttributesJsonList));

  }

  if(m_projectionTypeHasBeenSet)
  {
   payload.WithString("ProjectionType", m_projectionType);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
