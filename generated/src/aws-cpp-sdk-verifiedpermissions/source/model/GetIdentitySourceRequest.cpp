/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/GetIdentitySourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VerifiedPermissions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetIdentitySourceRequest::GetIdentitySourceRequest() : 
    m_policyStoreIdHasBeenSet(false),
    m_identitySourceIdHasBeenSet(false)
{
}

Aws::String GetIdentitySourceRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetIdentitySourceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "VerifiedPermissions.GetIdentitySource"));
  return headers;

}




