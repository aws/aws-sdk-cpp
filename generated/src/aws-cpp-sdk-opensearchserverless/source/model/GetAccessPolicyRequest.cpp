/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/GetAccessPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAccessPolicyRequest::GetAccessPolicyRequest() : 
    m_nameHasBeenSet(false),
    m_type(AccessPolicyType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String GetAccessPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", AccessPolicyTypeMapper::GetNameForAccessPolicyType(m_type));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetAccessPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpenSearchServerless.GetAccessPolicy"));
  return headers;

}




