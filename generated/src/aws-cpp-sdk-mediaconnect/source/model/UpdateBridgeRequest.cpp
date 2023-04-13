/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/UpdateBridgeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateBridgeRequest::UpdateBridgeRequest() : 
    m_bridgeArnHasBeenSet(false),
    m_egressGatewayBridgeHasBeenSet(false),
    m_ingressGatewayBridgeHasBeenSet(false),
    m_sourceFailoverConfigHasBeenSet(false)
{
}

Aws::String UpdateBridgeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_egressGatewayBridgeHasBeenSet)
  {
   payload.WithObject("egressGatewayBridge", m_egressGatewayBridge.Jsonize());

  }

  if(m_ingressGatewayBridgeHasBeenSet)
  {
   payload.WithObject("ingressGatewayBridge", m_ingressGatewayBridge.Jsonize());

  }

  if(m_sourceFailoverConfigHasBeenSet)
  {
   payload.WithObject("sourceFailoverConfig", m_sourceFailoverConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




