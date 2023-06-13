/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/UpdateIdentitySourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VerifiedPermissions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateIdentitySourceRequest::UpdateIdentitySourceRequest() : 
    m_policyStoreIdHasBeenSet(false),
    m_identitySourceIdHasBeenSet(false),
    m_updateConfigurationHasBeenSet(false),
    m_principalEntityTypeHasBeenSet(false)
{
}

Aws::String UpdateIdentitySourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyStoreIdHasBeenSet)
  {
   payload.WithString("policyStoreId", m_policyStoreId);

  }

  if(m_identitySourceIdHasBeenSet)
  {
   payload.WithString("identitySourceId", m_identitySourceId);

  }

  if(m_updateConfigurationHasBeenSet)
  {
   payload.WithObject("updateConfiguration", m_updateConfiguration.Jsonize());

  }

  if(m_principalEntityTypeHasBeenSet)
  {
   payload.WithString("principalEntityType", m_principalEntityType);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateIdentitySourceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "VerifiedPermissions.UpdateIdentitySource"));
  return headers;

}




