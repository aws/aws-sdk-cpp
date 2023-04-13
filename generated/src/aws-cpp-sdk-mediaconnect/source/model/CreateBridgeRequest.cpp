/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/CreateBridgeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateBridgeRequest::CreateBridgeRequest() : 
    m_egressGatewayBridgeHasBeenSet(false),
    m_ingressGatewayBridgeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_placementArnHasBeenSet(false),
    m_sourceFailoverConfigHasBeenSet(false),
    m_sourcesHasBeenSet(false)
{
}

Aws::String CreateBridgeRequest::SerializePayload() const
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

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_outputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputsJsonList(m_outputs.size());
   for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
   {
     outputsJsonList[outputsIndex].AsObject(m_outputs[outputsIndex].Jsonize());
   }
   payload.WithArray("outputs", std::move(outputsJsonList));

  }

  if(m_placementArnHasBeenSet)
  {
   payload.WithString("placementArn", m_placementArn);

  }

  if(m_sourceFailoverConfigHasBeenSet)
  {
   payload.WithObject("sourceFailoverConfig", m_sourceFailoverConfig.Jsonize());

  }

  if(m_sourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourcesJsonList(m_sources.size());
   for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
   {
     sourcesJsonList[sourcesIndex].AsObject(m_sources[sourcesIndex].Jsonize());
   }
   payload.WithArray("sources", std::move(sourcesJsonList));

  }

  return payload.View().WriteReadable();
}




