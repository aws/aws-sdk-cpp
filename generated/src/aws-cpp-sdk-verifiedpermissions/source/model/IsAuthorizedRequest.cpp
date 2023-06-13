/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/IsAuthorizedRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VerifiedPermissions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

IsAuthorizedRequest::IsAuthorizedRequest() : 
    m_policyStoreIdHasBeenSet(false),
    m_principalHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_entitiesHasBeenSet(false)
{
}

Aws::String IsAuthorizedRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyStoreIdHasBeenSet)
  {
   payload.WithString("policyStoreId", m_policyStoreId);

  }

  if(m_principalHasBeenSet)
  {
   payload.WithObject("principal", m_principal.Jsonize());

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

Aws::Http::HeaderValueCollection IsAuthorizedRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "VerifiedPermissions.IsAuthorized"));
  return headers;

}




