/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/model/ReplicateSecretToRegionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecretsManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ReplicateSecretToRegionsRequest::ReplicateSecretToRegionsRequest() : 
    m_secretIdHasBeenSet(false),
    m_addReplicaRegionsHasBeenSet(false),
    m_forceOverwriteReplicaSecret(false),
    m_forceOverwriteReplicaSecretHasBeenSet(false)
{
}

Aws::String ReplicateSecretToRegionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_secretIdHasBeenSet)
  {
   payload.WithString("SecretId", m_secretId);

  }

  if(m_addReplicaRegionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addReplicaRegionsJsonList(m_addReplicaRegions.size());
   for(unsigned addReplicaRegionsIndex = 0; addReplicaRegionsIndex < addReplicaRegionsJsonList.GetLength(); ++addReplicaRegionsIndex)
   {
     addReplicaRegionsJsonList[addReplicaRegionsIndex].AsObject(m_addReplicaRegions[addReplicaRegionsIndex].Jsonize());
   }
   payload.WithArray("AddReplicaRegions", std::move(addReplicaRegionsJsonList));

  }

  if(m_forceOverwriteReplicaSecretHasBeenSet)
  {
   payload.WithBool("ForceOverwriteReplicaSecret", m_forceOverwriteReplicaSecret);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ReplicateSecretToRegionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "secretsmanager.ReplicateSecretToRegions"));
  return headers;

}




