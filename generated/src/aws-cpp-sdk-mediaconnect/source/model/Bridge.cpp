/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/Bridge.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

Bridge::Bridge() : 
    m_bridgeArnHasBeenSet(false),
    m_bridgeMessagesHasBeenSet(false),
    m_bridgeState(BridgeState::NOT_SET),
    m_bridgeStateHasBeenSet(false),
    m_egressGatewayBridgeHasBeenSet(false),
    m_ingressGatewayBridgeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_placementArnHasBeenSet(false),
    m_sourceFailoverConfigHasBeenSet(false),
    m_sourcesHasBeenSet(false)
{
}

Bridge::Bridge(JsonView jsonValue) : 
    m_bridgeArnHasBeenSet(false),
    m_bridgeMessagesHasBeenSet(false),
    m_bridgeState(BridgeState::NOT_SET),
    m_bridgeStateHasBeenSet(false),
    m_egressGatewayBridgeHasBeenSet(false),
    m_ingressGatewayBridgeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_placementArnHasBeenSet(false),
    m_sourceFailoverConfigHasBeenSet(false),
    m_sourcesHasBeenSet(false)
{
  *this = jsonValue;
}

Bridge& Bridge::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bridgeArn"))
  {
    m_bridgeArn = jsonValue.GetString("bridgeArn");

    m_bridgeArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bridgeMessages"))
  {
    Aws::Utils::Array<JsonView> bridgeMessagesJsonList = jsonValue.GetArray("bridgeMessages");
    for(unsigned bridgeMessagesIndex = 0; bridgeMessagesIndex < bridgeMessagesJsonList.GetLength(); ++bridgeMessagesIndex)
    {
      m_bridgeMessages.push_back(bridgeMessagesJsonList[bridgeMessagesIndex].AsObject());
    }
    m_bridgeMessagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bridgeState"))
  {
    m_bridgeState = BridgeStateMapper::GetBridgeStateForName(jsonValue.GetString("bridgeState"));

    m_bridgeStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("egressGatewayBridge"))
  {
    m_egressGatewayBridge = jsonValue.GetObject("egressGatewayBridge");

    m_egressGatewayBridgeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ingressGatewayBridge"))
  {
    m_ingressGatewayBridge = jsonValue.GetObject("ingressGatewayBridge");

    m_ingressGatewayBridgeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputs"))
  {
    Aws::Utils::Array<JsonView> outputsJsonList = jsonValue.GetArray("outputs");
    for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
    {
      m_outputs.push_back(outputsJsonList[outputsIndex].AsObject());
    }
    m_outputsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("placementArn"))
  {
    m_placementArn = jsonValue.GetString("placementArn");

    m_placementArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceFailoverConfig"))
  {
    m_sourceFailoverConfig = jsonValue.GetObject("sourceFailoverConfig");

    m_sourceFailoverConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sources"))
  {
    Aws::Utils::Array<JsonView> sourcesJsonList = jsonValue.GetArray("sources");
    for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
    {
      m_sources.push_back(sourcesJsonList[sourcesIndex].AsObject());
    }
    m_sourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue Bridge::Jsonize() const
{
  JsonValue payload;

  if(m_bridgeArnHasBeenSet)
  {
   payload.WithString("bridgeArn", m_bridgeArn);

  }

  if(m_bridgeMessagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> bridgeMessagesJsonList(m_bridgeMessages.size());
   for(unsigned bridgeMessagesIndex = 0; bridgeMessagesIndex < bridgeMessagesJsonList.GetLength(); ++bridgeMessagesIndex)
   {
     bridgeMessagesJsonList[bridgeMessagesIndex].AsObject(m_bridgeMessages[bridgeMessagesIndex].Jsonize());
   }
   payload.WithArray("bridgeMessages", std::move(bridgeMessagesJsonList));

  }

  if(m_bridgeStateHasBeenSet)
  {
   payload.WithString("bridgeState", BridgeStateMapper::GetNameForBridgeState(m_bridgeState));
  }

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

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
