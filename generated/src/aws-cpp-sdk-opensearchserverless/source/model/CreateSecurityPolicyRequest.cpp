/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/CreateSecurityPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSecurityPolicyRequest::CreateSecurityPolicyRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_type(SecurityPolicyType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String CreateSecurityPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_policyHasBeenSet)
  {
   payload.WithString("policy", m_policy);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", SecurityPolicyTypeMapper::GetNameForSecurityPolicyType(m_type));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateSecurityPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpenSearchServerless.CreateSecurityPolicy"));
  return headers;

}




