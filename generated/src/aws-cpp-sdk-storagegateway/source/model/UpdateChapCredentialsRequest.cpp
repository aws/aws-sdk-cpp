/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/UpdateChapCredentialsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateChapCredentialsRequest::UpdateChapCredentialsRequest() : 
    m_targetARNHasBeenSet(false),
    m_secretToAuthenticateInitiatorHasBeenSet(false),
    m_initiatorNameHasBeenSet(false),
    m_secretToAuthenticateTargetHasBeenSet(false)
{
}

Aws::String UpdateChapCredentialsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetARNHasBeenSet)
  {
   payload.WithString("TargetARN", m_targetARN);

  }

  if(m_secretToAuthenticateInitiatorHasBeenSet)
  {
   payload.WithString("SecretToAuthenticateInitiator", m_secretToAuthenticateInitiator);

  }

  if(m_initiatorNameHasBeenSet)
  {
   payload.WithString("InitiatorName", m_initiatorName);

  }

  if(m_secretToAuthenticateTargetHasBeenSet)
  {
   payload.WithString("SecretToAuthenticateTarget", m_secretToAuthenticateTarget);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateChapCredentialsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.UpdateChapCredentials"));
  return headers;

}




