/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/model/PutResourcePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecretsManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutResourcePolicyRequest::PutResourcePolicyRequest() : 
    m_secretIdHasBeenSet(false),
    m_resourcePolicyHasBeenSet(false),
    m_blockPublicPolicy(false),
    m_blockPublicPolicyHasBeenSet(false)
{
}

Aws::String PutResourcePolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_secretIdHasBeenSet)
  {
   payload.WithString("SecretId", m_secretId);

  }

  if(m_resourcePolicyHasBeenSet)
  {
   payload.WithString("ResourcePolicy", m_resourcePolicy);

  }

  if(m_blockPublicPolicyHasBeenSet)
  {
   payload.WithBool("BlockPublicPolicy", m_blockPublicPolicy);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutResourcePolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "secretsmanager.PutResourcePolicy"));
  return headers;

}




