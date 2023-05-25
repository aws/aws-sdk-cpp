/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/UpdateAutomaticTapeCreationPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAutomaticTapeCreationPolicyRequest::UpdateAutomaticTapeCreationPolicyRequest() : 
    m_automaticTapeCreationRulesHasBeenSet(false),
    m_gatewayARNHasBeenSet(false)
{
}

Aws::String UpdateAutomaticTapeCreationPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_automaticTapeCreationRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> automaticTapeCreationRulesJsonList(m_automaticTapeCreationRules.size());
   for(unsigned automaticTapeCreationRulesIndex = 0; automaticTapeCreationRulesIndex < automaticTapeCreationRulesJsonList.GetLength(); ++automaticTapeCreationRulesIndex)
   {
     automaticTapeCreationRulesJsonList[automaticTapeCreationRulesIndex].AsObject(m_automaticTapeCreationRules[automaticTapeCreationRulesIndex].Jsonize());
   }
   payload.WithArray("AutomaticTapeCreationRules", std::move(automaticTapeCreationRulesJsonList));

  }

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateAutomaticTapeCreationPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.UpdateAutomaticTapeCreationPolicy"));
  return headers;

}




