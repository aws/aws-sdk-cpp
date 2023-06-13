/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/IsAuthorizedWithTokenRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VerifiedPermissions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

IsAuthorizedWithTokenRequest::IsAuthorizedWithTokenRequest() : 
    m_policyStoreIdHasBeenSet(false),
    m_identityTokenHasBeenSet(false),
    m_accessTokenHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_entitiesHasBeenSet(false)
{
}

Aws::String IsAuthorizedWithTokenRequest::SerializePayload() const
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

  if(m_actionHasBeenSet)
  {
   payload.WithObject("action", m_action.Jsonize());

  }

  if(m_resourceHasBeenSet)
  {
   payload.WithObject("resource", m_resource.Jsonize());

  }

  if(m_contextHasBeenSet)
  {
   payload.WithObject("context", m_context.Jsonize());

  }

  if(m_entitiesHasBeenSet)
  {
   payload.WithObject("entities", m_entities.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection IsAuthorizedWithTokenRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "VerifiedPermissions.IsAuthorizedWithToken"));
  return headers;

}




