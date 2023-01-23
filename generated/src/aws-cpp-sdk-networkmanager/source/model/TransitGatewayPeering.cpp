/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/TransitGatewayPeering.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

TransitGatewayPeering::TransitGatewayPeering() : 
    m_peeringHasBeenSet(false),
    m_transitGatewayArnHasBeenSet(false),
    m_transitGatewayPeeringAttachmentIdHasBeenSet(false)
{
}

TransitGatewayPeering::TransitGatewayPeering(JsonView jsonValue) : 
    m_peeringHasBeenSet(false),
    m_transitGatewayArnHasBeenSet(false),
    m_transitGatewayPeeringAttachmentIdHasBeenSet(false)
{
  *this = jsonValue;
}

TransitGatewayPeering& TransitGatewayPeering::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Peering"))
  {
    m_peering = jsonValue.GetObject("Peering");

    m_peeringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransitGatewayArn"))
  {
    m_transitGatewayArn = jsonValue.GetString("TransitGatewayArn");

    m_transitGatewayArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransitGatewayPeeringAttachmentId"))
  {
    m_transitGatewayPeeringAttachmentId = jsonValue.GetString("TransitGatewayPeeringAttachmentId");

    m_transitGatewayPeeringAttachmentIdHasBeenSet = true;
  }

  return *this;
}

JsonValue TransitGatewayPeering::Jsonize() const
{
  JsonValue payload;

  if(m_peeringHasBeenSet)
  {
   payload.WithObject("Peering", m_peering.Jsonize());

  }

  if(m_transitGatewayArnHasBeenSet)
  {
   payload.WithString("TransitGatewayArn", m_transitGatewayArn);

  }

  if(m_transitGatewayPeeringAttachmentIdHasBeenSet)
  {
   payload.WithString("TransitGatewayPeeringAttachmentId", m_transitGatewayPeeringAttachmentId);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
