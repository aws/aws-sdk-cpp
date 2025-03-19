/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/model/PutSecretValueRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::SecretsManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutSecretValueRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_secretIdHasBeenSet)
  {
   payload.WithString("SecretId", m_secretId);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_secretBinaryHasBeenSet)
  {
   payload.WithString("SecretBinary", HashingUtils::Base64Encode(m_secretBinary));
  }

  if(m_secretStringHasBeenSet)
  {
   payload.WithString("SecretString", m_secretString);

  }

  if(m_versionStagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> versionStagesJsonList(m_versionStages.size());
   for(unsigned versionStagesIndex = 0; versionStagesIndex < versionStagesJsonList.GetLength(); ++versionStagesIndex)
   {
     versionStagesJsonList[versionStagesIndex].AsString(m_versionStages[versionStagesIndex]);
   }
   payload.WithArray("VersionStages", std::move(versionStagesJsonList));

  }

  if(m_rotationTokenHasBeenSet)
  {
   payload.WithString("RotationToken", m_rotationToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutSecretValueRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "secretsmanager.PutSecretValue"));
  return headers;

}




