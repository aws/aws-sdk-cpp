/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/QuerySpatialCoverageMax.h>
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

QuerySpatialCoverageMax::QuerySpatialCoverageMax(JsonView jsonValue)
{
  *this = jsonValue;
}

QuerySpatialCoverageMax& QuerySpatialCoverageMax::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetDouble("Value");
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TableArn"))
  {
    m_tableArn = jsonValue.GetString("TableArn");
    m_tableArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PartitionKey"))
  {
    Aws::Utils::Array<JsonView> partitionKeyJsonList = jsonValue.GetArray("PartitionKey");
    for(unsigned partitionKeyIndex = 0; partitionKeyIndex < partitionKeyJsonList.GetLength(); ++partitionKeyIndex)
    {
      m_partitionKey.push_back(partitionKeyJsonList[partitionKeyIndex].AsString());
    }
    m_partitionKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue QuerySpatialCoverageMax::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("Value", m_value);

  }

  if(m_tableArnHasBeenSet)
  {
   payload.WithString("TableArn", m_tableArn);

  }

  if(m_partitionKeyHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> partitionKeyJsonList(m_partitionKey.size());
   for(unsigned partitionKeyIndex = 0; partitionKeyIndex < partitionKeyJsonList.GetLength(); ++partitionKeyIndex)
   {
     partitionKeyJsonList[partitionKeyIndex].AsString(m_partitionKey[partitionKeyIndex]);
   }
   payload.WithArray("PartitionKey", std::move(partitionKeyJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
