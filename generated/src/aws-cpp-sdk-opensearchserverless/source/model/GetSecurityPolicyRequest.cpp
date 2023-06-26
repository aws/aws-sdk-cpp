/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/GetSecurityPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSecurityPolicyRequest::GetSecurityPolicyRequest() : 
    m_nameHasBeenSet(false),
    m_type(SecurityPolicyType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String GetSecurityPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", SecurityPolicyTypeMapper::GetNameForSecurityPolicyType(m_type));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetSecurityPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpenSearchServerless.GetSecurityPolicy"));
  return headers;

}




