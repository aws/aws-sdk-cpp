/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/Schema.h>
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

Schema::Schema() : 
    m_compositePartitionKeyHasBeenSet(false)
{
}

Schema::Schema(JsonView jsonValue) : 
    m_compositePartitionKeyHasBeenSet(false)
{
  *this = jsonValue;
}

Schema& Schema::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CompositePartitionKey"))
  {
    Aws::Utils::Array<JsonView> compositePartitionKeyJsonList = jsonValue.GetArray("CompositePartitionKey");
    for(unsigned compositePartitionKeyIndex = 0; compositePartitionKeyIndex < compositePartitionKeyJsonList.GetLength(); ++compositePartitionKeyIndex)
    {
      m_compositePartitionKey.push_back(compositePartitionKeyJsonList[compositePartitionKeyIndex].AsObject());
    }
    m_compositePartitionKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue Schema::Jsonize() const
{
  JsonValue payload;

  if(m_compositePartitionKeyHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> compositePartitionKeyJsonList(m_compositePartitionKey.size());
   for(unsigned compositePartitionKeyIndex = 0; compositePartitionKeyIndex < compositePartitionKeyJsonList.GetLength(); ++compositePartitionKeyIndex)
   {
     compositePartitionKeyJsonList[compositePartitionKeyIndex].AsObject(m_compositePartitionKey[compositePartitionKeyIndex].Jsonize());
   }
   payload.WithArray("CompositePartitionKey", std::move(compositePartitionKeyJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
