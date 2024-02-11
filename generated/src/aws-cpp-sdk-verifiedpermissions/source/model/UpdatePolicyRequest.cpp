/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/UpdatePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VerifiedPermissions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePolicyRequest::UpdatePolicyRequest() : 
    m_policyStoreIdHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_definitionHasBeenSet(false)
{
}

Aws::String UpdatePolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyStoreIdHasBeenSet)
  {
   payload.WithString("policyStoreId", m_policyStoreId);

  }

  if(m_policyIdHasBeenSet)
  {
   payload.WithString("policyId", m_policyId);

  }

  if(m_definitionHasBeenSet)
  {
   payload.WithObject("definition", m_definition.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdatePolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "VerifiedPermissions.UpdatePolicy"));
  return headers;

}




