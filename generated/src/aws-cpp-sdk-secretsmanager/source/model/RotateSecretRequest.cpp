/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/model/RotateSecretRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecretsManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RotateSecretRequest::RotateSecretRequest() : 
    m_secretIdHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_rotationLambdaARNHasBeenSet(false),
    m_rotationRulesHasBeenSet(false),
    m_rotateImmediately(false),
    m_rotateImmediatelyHasBeenSet(false)
{
}

Aws::String RotateSecretRequest::SerializePayload() const
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

  if(m_rotationLambdaARNHasBeenSet)
  {
   payload.WithString("RotationLambdaARN", m_rotationLambdaARN);

  }

  if(m_rotationRulesHasBeenSet)
  {
   payload.WithObject("RotationRules", m_rotationRules.Jsonize());

  }

  if(m_rotateImmediatelyHasBeenSet)
  {
   payload.WithBool("RotateImmediately", m_rotateImmediately);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RotateSecretRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "secretsmanager.RotateSecret"));
  return headers;

}




