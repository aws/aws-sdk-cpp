/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/GatewayInstance.h>
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

GatewayInstance::GatewayInstance() : 
    m_bridgePlacement(BridgePlacement::NOT_SET),
    m_bridgePlacementHasBeenSet(false),
    m_connectionStatus(ConnectionStatus::NOT_SET),
    m_connectionStatusHasBeenSet(false),
    m_gatewayArnHasBeenSet(false),
    m_gatewayInstanceArnHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceMessagesHasBeenSet(false),
    m_instanceState(InstanceState::NOT_SET),
    m_instanceStateHasBeenSet(false),
    m_runningBridgeCount(0),
    m_runningBridgeCountHasBeenSet(false)
{
}

GatewayInstance::GatewayInstance(JsonView jsonValue) : 
    m_bridgePlacement(BridgePlacement::NOT_SET),
    m_bridgePlacementHasBeenSet(false),
    m_connectionStatus(ConnectionStatus::NOT_SET),
    m_connectionStatusHasBeenSet(false),
    m_gatewayArnHasBeenSet(false),
    m_gatewayInstanceArnHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceMessagesHasBeenSet(false),
    m_instanceState(InstanceState::NOT_SET),
    m_instanceStateHasBeenSet(false),
    m_runningBridgeCount(0),
    m_runningBridgeCountHasBeenSet(false)
{
  *this = jsonValue;
}

GatewayInstance& GatewayInstance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bridgePlacement"))
  {
    m_bridgePlacement = BridgePlacementMapper::GetBridgePlacementForName(jsonValue.GetString("bridgePlacement"));

    m_bridgePlacementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectionStatus"))
  {
    m_connectionStatus = ConnectionStatusMapper::GetConnectionStatusForName(jsonValue.GetString("connectionStatus"));

    m_connectionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gatewayArn"))
  {
    m_gatewayArn = jsonValue.GetString("gatewayArn");

    m_gatewayArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gatewayInstanceArn"))
  {
    m_gatewayInstanceArn = jsonValue.GetString("gatewayInstanceArn");

    m_gatewayInstanceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceId"))
  {
    m_instanceId = jsonValue.GetString("instanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceMessages"))
  {
    Aws::Utils::Array<JsonView> instanceMessagesJsonList = jsonValue.GetArray("instanceMessages");
    for(unsigned instanceMessagesIndex = 0; instanceMessagesIndex < instanceMessagesJsonList.GetLength(); ++instanceMessagesIndex)
    {
      m_instanceMessages.push_back(instanceMessagesJsonList[instanceMessagesIndex].AsObject());
    }
    m_instanceMessagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceState"))
  {
    m_instanceState = InstanceStateMapper::GetInstanceStateForName(jsonValue.GetString("instanceState"));

    m_instanceStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runningBridgeCount"))
  {
    m_runningBridgeCount = jsonValue.GetInteger("runningBridgeCount");

    m_runningBridgeCountHasBeenSet = true;
  }

  return *this;
}

JsonValue GatewayInstance::Jsonize() const
{
  JsonValue payload;

  if(m_bridgePlacementHasBeenSet)
  {
   payload.WithString("bridgePlacement", BridgePlacementMapper::GetNameForBridgePlacement(m_bridgePlacement));
  }

  if(m_connectionStatusHasBeenSet)
  {
   payload.WithString("connectionStatus", ConnectionStatusMapper::GetNameForConnectionStatus(m_connectionStatus));
  }

  if(m_gatewayArnHasBeenSet)
  {
   payload.WithString("gatewayArn", m_gatewayArn);

  }

  if(m_gatewayInstanceArnHasBeenSet)
  {
   payload.WithString("gatewayInstanceArn", m_gatewayInstanceArn);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("instanceId", m_instanceId);

  }

  if(m_instanceMessagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceMessagesJsonList(m_instanceMessages.size());
   for(unsigned instanceMessagesIndex = 0; instanceMessagesIndex < instanceMessagesJsonList.GetLength(); ++instanceMessagesIndex)
   {
     instanceMessagesJsonList[instanceMessagesIndex].AsObject(m_instanceMessages[instanceMessagesIndex].Jsonize());
   }
   payload.WithArray("instanceMessages", std::move(instanceMessagesJsonList));

  }

  if(m_instanceStateHasBeenSet)
  {
   payload.WithString("instanceState", InstanceStateMapper::GetNameForInstanceState(m_instanceState));
  }

  if(m_runningBridgeCountHasBeenSet)
  {
   payload.WithInteger("runningBridgeCount", m_runningBridgeCount);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
