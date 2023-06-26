/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/Gateway.h>
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

Gateway::Gateway() : 
    m_egressCidrBlocksHasBeenSet(false),
    m_gatewayArnHasBeenSet(false),
    m_gatewayMessagesHasBeenSet(false),
    m_gatewayState(GatewayState::NOT_SET),
    m_gatewayStateHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_networksHasBeenSet(false)
{
}

Gateway::Gateway(JsonView jsonValue) : 
    m_egressCidrBlocksHasBeenSet(false),
    m_gatewayArnHasBeenSet(false),
    m_gatewayMessagesHasBeenSet(false),
    m_gatewayState(GatewayState::NOT_SET),
    m_gatewayStateHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_networksHasBeenSet(false)
{
  *this = jsonValue;
}

Gateway& Gateway::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("egressCidrBlocks"))
  {
    Aws::Utils::Array<JsonView> egressCidrBlocksJsonList = jsonValue.GetArray("egressCidrBlocks");
    for(unsigned egressCidrBlocksIndex = 0; egressCidrBlocksIndex < egressCidrBlocksJsonList.GetLength(); ++egressCidrBlocksIndex)
    {
      m_egressCidrBlocks.push_back(egressCidrBlocksJsonList[egressCidrBlocksIndex].AsString());
    }
    m_egressCidrBlocksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gatewayArn"))
  {
    m_gatewayArn = jsonValue.GetString("gatewayArn");

    m_gatewayArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gatewayMessages"))
  {
    Aws::Utils::Array<JsonView> gatewayMessagesJsonList = jsonValue.GetArray("gatewayMessages");
    for(unsigned gatewayMessagesIndex = 0; gatewayMessagesIndex < gatewayMessagesJsonList.GetLength(); ++gatewayMessagesIndex)
    {
      m_gatewayMessages.push_back(gatewayMessagesJsonList[gatewayMessagesIndex].AsObject());
    }
    m_gatewayMessagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gatewayState"))
  {
    m_gatewayState = GatewayStateMapper::GetGatewayStateForName(jsonValue.GetString("gatewayState"));

    m_gatewayStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networks"))
  {
    Aws::Utils::Array<JsonView> networksJsonList = jsonValue.GetArray("networks");
    for(unsigned networksIndex = 0; networksIndex < networksJsonList.GetLength(); ++networksIndex)
    {
      m_networks.push_back(networksJsonList[networksIndex].AsObject());
    }
    m_networksHasBeenSet = true;
  }

  return *this;
}

JsonValue Gateway::Jsonize() const
{
  JsonValue payload;

  if(m_egressCidrBlocksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> egressCidrBlocksJsonList(m_egressCidrBlocks.size());
   for(unsigned egressCidrBlocksIndex = 0; egressCidrBlocksIndex < egressCidrBlocksJsonList.GetLength(); ++egressCidrBlocksIndex)
   {
     egressCidrBlocksJsonList[egressCidrBlocksIndex].AsString(m_egressCidrBlocks[egressCidrBlocksIndex]);
   }
   payload.WithArray("egressCidrBlocks", std::move(egressCidrBlocksJsonList));

  }

  if(m_gatewayArnHasBeenSet)
  {
   payload.WithString("gatewayArn", m_gatewayArn);

  }

  if(m_gatewayMessagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> gatewayMessagesJsonList(m_gatewayMessages.size());
   for(unsigned gatewayMessagesIndex = 0; gatewayMessagesIndex < gatewayMessagesJsonList.GetLength(); ++gatewayMessagesIndex)
   {
     gatewayMessagesJsonList[gatewayMessagesIndex].AsObject(m_gatewayMessages[gatewayMessagesIndex].Jsonize());
   }
   payload.WithArray("gatewayMessages", std::move(gatewayMessagesJsonList));

  }

  if(m_gatewayStateHasBeenSet)
  {
   payload.WithString("gatewayState", GatewayStateMapper::GetNameForGatewayState(m_gatewayState));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_networksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networksJsonList(m_networks.size());
   for(unsigned networksIndex = 0; networksIndex < networksJsonList.GetLength(); ++networksIndex)
   {
     networksJsonList[networksIndex].AsObject(m_networks[networksIndex].Jsonize());
   }
   payload.WithArray("networks", std::move(networksJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
