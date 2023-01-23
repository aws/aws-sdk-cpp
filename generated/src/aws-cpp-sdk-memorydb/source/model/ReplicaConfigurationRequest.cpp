/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/ReplicaConfigurationRequest.h>
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

ReplicaConfigurationRequest::ReplicaConfigurationRequest() : 
    m_replicaCount(0),
    m_replicaCountHasBeenSet(false)
{
}

ReplicaConfigurationRequest::ReplicaConfigurationRequest(JsonView jsonValue) : 
    m_replicaCount(0),
    m_replicaCountHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicaConfigurationRequest& ReplicaConfigurationRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReplicaCount"))
  {
    m_replicaCount = jsonValue.GetInteger("ReplicaCount");

    m_replicaCountHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicaConfigurationRequest::Jsonize() const
{
  JsonValue payload;

  if(m_replicaCountHasBeenSet)
  {
   payload.WithInteger("ReplicaCount", m_replicaCount);

  }

  return payload;
}

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
