/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/model/UpdateSecretVersionStageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecretsManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSecretVersionStageRequest::UpdateSecretVersionStageRequest() : 
    m_secretIdHasBeenSet(false),
    m_versionStageHasBeenSet(false),
    m_removeFromVersionIdHasBeenSet(false),
    m_moveToVersionIdHasBeenSet(false)
{
}

Aws::String UpdateSecretVersionStageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_secretIdHasBeenSet)
  {
   payload.WithString("SecretId", m_secretId);

  }

  if(m_versionStageHasBeenSet)
  {
   payload.WithString("VersionStage", m_versionStage);

  }

  if(m_removeFromVersionIdHasBeenSet)
  {
   payload.WithString("RemoveFromVersionId", m_removeFromVersionId);

  }

  if(m_moveToVersionIdHasBeenSet)
  {
   payload.WithString("MoveToVersionId", m_moveToVersionId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateSecretVersionStageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "secretsmanager.UpdateSecretVersionStage"));
  return headers;

}




