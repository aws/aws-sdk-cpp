/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/CreateTransitGatewayRouteTableAttachmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTransitGatewayRouteTableAttachmentRequest::CreateTransitGatewayRouteTableAttachmentRequest() : 
    m_peeringIdHasBeenSet(false),
    m_transitGatewayRouteTableArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String CreateTransitGatewayRouteTableAttachmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_peeringIdHasBeenSet)
  {
   payload.WithString("PeeringId", m_peeringId);

  }

  if(m_transitGatewayRouteTableArnHasBeenSet)
  {
   payload.WithString("TransitGatewayRouteTableArn", m_transitGatewayRouteTableArn);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




