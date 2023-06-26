/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/GetPolicyTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VerifiedPermissions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetPolicyTemplateRequest::GetPolicyTemplateRequest() : 
    m_policyStoreIdHasBeenSet(false),
    m_policyTemplateIdHasBeenSet(false)
{
}

Aws::String GetPolicyTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyStoreIdHasBeenSet)
  {
   payload.WithString("policyStoreId", m_policyStoreId);

  }

  if(m_policyTemplateIdHasBeenSet)
  {
   payload.WithString("policyTemplateId", m_policyTemplateId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetPolicyTemplateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "VerifiedPermissions.GetPolicyTemplate"));
  return headers;

}




