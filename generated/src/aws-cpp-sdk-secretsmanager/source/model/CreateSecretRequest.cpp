﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/model/CreateSecretRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::SecretsManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateSecretRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_secretBinaryHasBeenSet)
  {
   payload.WithString("SecretBinary", HashingUtils::Base64Encode(m_secretBinary));
  }

  if(m_secretStringHasBeenSet)
  {
   payload.WithString("SecretString", m_secretString);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

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

Aws::Http::HeaderValueCollection CreateSecretRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "secretsmanager.CreateSecret"));
  return headers;

}




