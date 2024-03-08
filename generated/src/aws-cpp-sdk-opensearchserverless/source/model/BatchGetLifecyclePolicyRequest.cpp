/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/BatchGetLifecyclePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetLifecyclePolicyRequest::BatchGetLifecyclePolicyRequest() : 
    m_identifiersHasBeenSet(false)
{
}

Aws::String BatchGetLifecyclePolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> identifiersJsonList(m_identifiers.size());
   for(unsigned identifiersIndex = 0; identifiersIndex < identifiersJsonList.GetLength(); ++identifiersIndex)
   {
     identifiersJsonList[identifiersIndex].AsObject(m_identifiers[identifiersIndex].Jsonize());
   }
   payload.WithArray("identifiers", std::move(identifiersJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetLifecyclePolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpenSearchServerless.BatchGetLifecyclePolicy"));
  return headers;

}




