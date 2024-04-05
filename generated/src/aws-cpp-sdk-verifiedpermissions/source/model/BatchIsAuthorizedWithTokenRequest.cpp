/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/BatchIsAuthorizedWithTokenRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VerifiedPermissions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchIsAuthorizedWithTokenRequest::BatchIsAuthorizedWithTokenRequest() : 
    m_policyStoreIdHasBeenSet(false),
    m_identityTokenHasBeenSet(false),
    m_accessTokenHasBeenSet(false),
    m_entitiesHasBeenSet(false),
    m_requestsHasBeenSet(false)
{
}

Aws::String BatchIsAuthorizedWithTokenRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyStoreIdHasBeenSet)
  {
   payload.WithString("policyStoreId", m_policyStoreId);

  }

  if(m_identityTokenHasBeenSet)
  {
   payload.WithString("identityToken", m_identityToken);

  }

  if(m_accessTokenHasBeenSet)
  {
   payload.WithString("accessToken", m_accessToken);

  }

  if(m_entitiesHasBeenSet)
  {
   payload.WithObject("entities", m_entities.Jsonize());

  }

  if(m_requestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> requestsJsonList(m_requests.size());
   for(unsigned requestsIndex = 0; requestsIndex < requestsJsonList.GetLength(); ++requestsIndex)
   {
     requestsJsonList[requestsIndex].AsObject(m_requests[requestsIndex].Jsonize());
   }
   payload.WithArray("requests", std::move(requestsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchIsAuthorizedWithTokenRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "VerifiedPermissions.BatchIsAuthorizedWithToken"));
  return headers;

}




