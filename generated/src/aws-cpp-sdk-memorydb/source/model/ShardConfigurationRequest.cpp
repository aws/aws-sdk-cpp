/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/ShardConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

ShardConfigurationRequest::ShardConfigurationRequest() : 
    m_shardCount(0),
    m_shardCountHasBeenSet(false)
{
}

ShardConfigurationRequest::ShardConfigurationRequest(JsonView jsonValue) : 
    m_shardCount(0),
    m_shardCountHasBeenSet(false)
{
  *this = jsonValue;
}

ShardConfigurationRequest& ShardConfigurationRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ShardCount"))
  {
    m_shardCount = jsonValue.GetInteger("ShardCount");

    m_shardCountHasBeenSet = true;
  }

  return *this;
}

JsonValue ShardConfigurationRequest::Jsonize() const
{
  JsonValue payload;

  if(m_shardCountHasBeenSet)
  {
   payload.WithInteger("ShardCount", m_shardCount);

  }

  return payload;
}

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
