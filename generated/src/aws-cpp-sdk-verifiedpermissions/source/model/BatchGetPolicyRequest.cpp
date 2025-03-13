/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/BatchGetPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VerifiedPermissions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchGetPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_requestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> requestsJsonList(m_requests.size());
   for(unsigned requestsIndex = 0; requestsIndex < requestsJsonList.GetLength(); ++requestsIndex)
   {
     requestsJsonList[requestsIndex].AsObject(m_requests[requestsIndex].Jsonize());
   }
   payload.WithArray("requests", std::move(requestsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "VerifiedPermissions.BatchGetPolicy"));
  return headers;

}




