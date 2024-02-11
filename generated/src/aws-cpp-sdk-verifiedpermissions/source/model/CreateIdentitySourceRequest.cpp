/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/CreateIdentitySourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VerifiedPermissions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateIdentitySourceRequest::CreateIdentitySourceRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_policyStoreIdHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_principalEntityTypeHasBeenSet(false)
{
}

Aws::String CreateIdentitySourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_policyStoreIdHasBeenSet)
  {
   payload.WithString("policyStoreId", m_policyStoreId);

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  if(m_principalEntityTypeHasBeenSet)
  {
   payload.WithString("principalEntityType", m_principalEntityType);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateIdentitySourceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "VerifiedPermissions.CreateIdentitySource"));
  return headers;

}




