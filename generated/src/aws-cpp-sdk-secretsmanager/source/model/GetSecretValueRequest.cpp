/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/model/GetSecretValueRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecretsManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSecretValueRequest::GetSecretValueRequest() : 
    m_secretIdHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_versionStageHasBeenSet(false)
{
}

Aws::String GetSecretValueRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_secretIdHasBeenSet)
  {
   payload.WithString("SecretId", m_secretId);

  }

  if(m_versionIdHasBeenSet)
  {
   payload.WithString("VersionId", m_versionId);

  }

  if(m_versionStageHasBeenSet)
  {
   payload.WithString("VersionStage", m_versionStage);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetSecretValueRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "secretsmanager.GetSecretValue"));
  return headers;

}




