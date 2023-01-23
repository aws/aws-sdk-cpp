/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/model/RemoveRegionsFromReplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecretsManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RemoveRegionsFromReplicationRequest::RemoveRegionsFromReplicationRequest() : 
    m_secretIdHasBeenSet(false),
    m_removeReplicaRegionsHasBeenSet(false)
{
}

Aws::String RemoveRegionsFromReplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_secretIdHasBeenSet)
  {
   payload.WithString("SecretId", m_secretId);

  }

  if(m_removeReplicaRegionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> removeReplicaRegionsJsonList(m_removeReplicaRegions.size());
   for(unsigned removeReplicaRegionsIndex = 0; removeReplicaRegionsIndex < removeReplicaRegionsJsonList.GetLength(); ++removeReplicaRegionsIndex)
   {
     removeReplicaRegionsJsonList[removeReplicaRegionsIndex].AsString(m_removeReplicaRegions[removeReplicaRegionsIndex]);
   }
   payload.WithArray("RemoveReplicaRegions", std::move(removeReplicaRegionsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RemoveRegionsFromReplicationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "secretsmanager.RemoveRegionsFromReplication"));
  return headers;

}




