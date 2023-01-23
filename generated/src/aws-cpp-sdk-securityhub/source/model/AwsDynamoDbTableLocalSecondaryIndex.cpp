/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsDynamoDbTableLocalSecondaryIndex.h>
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

AwsDynamoDbTableLocalSecondaryIndex::AwsDynamoDbTableLocalSecondaryIndex() : 
    m_indexArnHasBeenSet(false),
    m_indexNameHasBeenSet(false),
    m_keySchemaHasBeenSet(false),
    m_projectionHasBeenSet(false)
{
}

AwsDynamoDbTableLocalSecondaryIndex::AwsDynamoDbTableLocalSecondaryIndex(JsonView jsonValue) : 
    m_indexArnHasBeenSet(false),
    m_indexNameHasBeenSet(false),
    m_keySchemaHasBeenSet(false),
    m_projectionHasBeenSet(false)
{
  *this = jsonValue;
}

AwsDynamoDbTableLocalSecondaryIndex& AwsDynamoDbTableLocalSecondaryIndex::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IndexArn"))
  {
    m_indexArn = jsonValue.GetString("IndexArn");

    m_indexArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IndexName"))
  {
    m_indexName = jsonValue.GetString("IndexName");

    m_indexNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeySchema"))
  {
    Aws::Utils::Array<JsonView> keySchemaJsonList = jsonValue.GetArray("KeySchema");
    for(unsigned keySchemaIndex = 0; keySchemaIndex < keySchemaJsonList.GetLength(); ++keySchemaIndex)
    {
      m_keySchema.push_back(keySchemaJsonList[keySchemaIndex].AsObject());
    }
    m_keySchemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Projection"))
  {
    m_projection = jsonValue.GetObject("Projection");

    m_projectionHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsDynamoDbTableLocalSecondaryIndex::Jsonize() const
{
  JsonValue payload;

  if(m_indexArnHasBeenSet)
  {
   payload.WithString("IndexArn", m_indexArn);

  }

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("IndexName", m_indexName);

  }

  if(m_keySchemaHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> keySchemaJsonList(m_keySchema.size());
   for(unsigned keySchemaIndex = 0; keySchemaIndex < keySchemaJsonList.GetLength(); ++keySchemaIndex)
   {
     keySchemaJsonList[keySchemaIndex].AsObject(m_keySchema[keySchemaIndex].Jsonize());
   }
   payload.WithArray("KeySchema", std::move(keySchemaJsonList));

  }

  if(m_projectionHasBeenSet)
  {
   payload.WithObject("Projection", m_projection.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
