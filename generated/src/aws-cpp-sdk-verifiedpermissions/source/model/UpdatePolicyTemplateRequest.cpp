/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/UpdatePolicyTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VerifiedPermissions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePolicyTemplateRequest::UpdatePolicyTemplateRequest() : 
    m_policyStoreIdHasBeenSet(false),
    m_policyTemplateIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statementHasBeenSet(false)
{
}

Aws::String UpdatePolicyTemplateRequest::SerializePayload() const
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

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_statementHasBeenSet)
  {
   payload.WithString("statement", m_statement);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdatePolicyTemplateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "VerifiedPermissions.UpdatePolicyTemplate"));
  return headers;

}




