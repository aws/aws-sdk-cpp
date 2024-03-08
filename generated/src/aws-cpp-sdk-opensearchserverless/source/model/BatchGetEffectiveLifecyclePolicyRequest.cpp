/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/BatchGetEffectiveLifecyclePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetEffectiveLifecyclePolicyRequest::BatchGetEffectiveLifecyclePolicyRequest() : 
    m_resourceIdentifiersHasBeenSet(false)
{
}

Aws::String BatchGetEffectiveLifecyclePolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceIdentifiersJsonList(m_resourceIdentifiers.size());
   for(unsigned resourceIdentifiersIndex = 0; resourceIdentifiersIndex < resourceIdentifiersJsonList.GetLength(); ++resourceIdentifiersIndex)
   {
     resourceIdentifiersJsonList[resourceIdentifiersIndex].AsObject(m_resourceIdentifiers[resourceIdentifiersIndex].Jsonize());
   }
   payload.WithArray("resourceIdentifiers", std::move(resourceIdentifiersJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetEffectiveLifecyclePolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpenSearchServerless.BatchGetEffectiveLifecyclePolicy"));
  return headers;

}




