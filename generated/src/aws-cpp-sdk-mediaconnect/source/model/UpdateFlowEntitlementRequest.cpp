/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/UpdateFlowEntitlementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateFlowEntitlementRequest::UpdateFlowEntitlementRequest() : 
    m_descriptionHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_entitlementArnHasBeenSet(false),
    m_entitlementStatus(EntitlementStatus::NOT_SET),
    m_entitlementStatusHasBeenSet(false),
    m_flowArnHasBeenSet(false),
    m_subscribersHasBeenSet(false)
{
}

Aws::String UpdateFlowEntitlementRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_encryptionHasBeenSet)
  {
   payload.WithObject("encryption", m_encryption.Jsonize());

  }

  if(m_entitlementStatusHasBeenSet)
  {
   payload.WithString("entitlementStatus", EntitlementStatusMapper::GetNameForEntitlementStatus(m_entitlementStatus));
  }

  if(m_subscribersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subscribersJsonList(m_subscribers.size());
   for(unsigned subscribersIndex = 0; subscribersIndex < subscribersJsonList.GetLength(); ++subscribersIndex)
   {
     subscribersJsonList[subscribersIndex].AsString(m_subscribers[subscribersIndex]);
   }
   payload.WithArray("subscribers", std::move(subscribersJsonList));

  }

  return payload.View().WriteReadable();
}




