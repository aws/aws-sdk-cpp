/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/GrantFlowEntitlementsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GrantFlowEntitlementsRequest::GrantFlowEntitlementsRequest() : 
    m_entitlementsHasBeenSet(false),
    m_flowArnHasBeenSet(false)
{
}

Aws::String GrantFlowEntitlementsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_entitlementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entitlementsJsonList(m_entitlements.size());
   for(unsigned entitlementsIndex = 0; entitlementsIndex < entitlementsJsonList.GetLength(); ++entitlementsIndex)
   {
     entitlementsJsonList[entitlementsIndex].AsObject(m_entitlements[entitlementsIndex].Jsonize());
   }
   payload.WithArray("entitlements", std::move(entitlementsJsonList));

  }

  return payload.View().WriteReadable();
}




