/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/RouteSetDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

RouteSetDetails::RouteSetDetails() : 
    m_carrierGatewayIdHasBeenSet(false),
    m_coreNetworkArnHasBeenSet(false),
    m_destinationCidrBlockHasBeenSet(false),
    m_destinationIpv6CidrBlockHasBeenSet(false),
    m_destinationPrefixListIdHasBeenSet(false),
    m_egressOnlyInternetGatewayIdHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceOwnerIdHasBeenSet(false),
    m_localGatewayIdHasBeenSet(false),
    m_natGatewayIdHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_originHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_transitGatewayIdHasBeenSet(false),
    m_vpcPeeringConnectionIdHasBeenSet(false)
{
}

RouteSetDetails::RouteSetDetails(JsonView jsonValue) : 
    m_carrierGatewayIdHasBeenSet(false),
    m_coreNetworkArnHasBeenSet(false),
    m_destinationCidrBlockHasBeenSet(false),
    m_destinationIpv6CidrBlockHasBeenSet(false),
    m_destinationPrefixListIdHasBeenSet(false),
    m_egressOnlyInternetGatewayIdHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceOwnerIdHasBeenSet(false),
    m_localGatewayIdHasBeenSet(false),
    m_natGatewayIdHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_originHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_transitGatewayIdHasBeenSet(false),
    m_vpcPeeringConnectionIdHasBeenSet(false)
{
  *this = jsonValue;
}

RouteSetDetails& RouteSetDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CarrierGatewayId"))
  {
    m_carrierGatewayId = jsonValue.GetString("CarrierGatewayId");

    m_carrierGatewayIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CoreNetworkArn"))
  {
    m_coreNetworkArn = jsonValue.GetString("CoreNetworkArn");

    m_coreNetworkArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationCidrBlock"))
  {
    m_destinationCidrBlock = jsonValue.GetString("DestinationCidrBlock");

    m_destinationCidrBlockHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationIpv6CidrBlock"))
  {
    m_destinationIpv6CidrBlock = jsonValue.GetString("DestinationIpv6CidrBlock");

    m_destinationIpv6CidrBlockHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationPrefixListId"))
  {
    m_destinationPrefixListId = jsonValue.GetString("DestinationPrefixListId");

    m_destinationPrefixListIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EgressOnlyInternetGatewayId"))
  {
    m_egressOnlyInternetGatewayId = jsonValue.GetString("EgressOnlyInternetGatewayId");

    m_egressOnlyInternetGatewayIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GatewayId"))
  {
    m_gatewayId = jsonValue.GetString("GatewayId");

    m_gatewayIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceOwnerId"))
  {
    m_instanceOwnerId = jsonValue.GetString("InstanceOwnerId");

    m_instanceOwnerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocalGatewayId"))
  {
    m_localGatewayId = jsonValue.GetString("LocalGatewayId");

    m_localGatewayIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NatGatewayId"))
  {
    m_natGatewayId = jsonValue.GetString("NatGatewayId");

    m_natGatewayIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkInterfaceId"))
  {
    m_networkInterfaceId = jsonValue.GetString("NetworkInterfaceId");

    m_networkInterfaceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Origin"))
  {
    m_origin = jsonValue.GetString("Origin");

    m_originHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetString("State");

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransitGatewayId"))
  {
    m_transitGatewayId = jsonValue.GetString("TransitGatewayId");

    m_transitGatewayIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcPeeringConnectionId"))
  {
    m_vpcPeeringConnectionId = jsonValue.GetString("VpcPeeringConnectionId");

    m_vpcPeeringConnectionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue RouteSetDetails::Jsonize() const
{
  JsonValue payload;

  if(m_carrierGatewayIdHasBeenSet)
  {
   payload.WithString("CarrierGatewayId", m_carrierGatewayId);

  }

  if(m_coreNetworkArnHasBeenSet)
  {
   payload.WithString("CoreNetworkArn", m_coreNetworkArn);

  }

  if(m_destinationCidrBlockHasBeenSet)
  {
   payload.WithString("DestinationCidrBlock", m_destinationCidrBlock);

  }

  if(m_destinationIpv6CidrBlockHasBeenSet)
  {
   payload.WithString("DestinationIpv6CidrBlock", m_destinationIpv6CidrBlock);

  }

  if(m_destinationPrefixListIdHasBeenSet)
  {
   payload.WithString("DestinationPrefixListId", m_destinationPrefixListId);

  }

  if(m_egressOnlyInternetGatewayIdHasBeenSet)
  {
   payload.WithString("EgressOnlyInternetGatewayId", m_egressOnlyInternetGatewayId);

  }

  if(m_gatewayIdHasBeenSet)
  {
   payload.WithString("GatewayId", m_gatewayId);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_instanceOwnerIdHasBeenSet)
  {
   payload.WithString("InstanceOwnerId", m_instanceOwnerId);

  }

  if(m_localGatewayIdHasBeenSet)
  {
   payload.WithString("LocalGatewayId", m_localGatewayId);

  }

  if(m_natGatewayIdHasBeenSet)
  {
   payload.WithString("NatGatewayId", m_natGatewayId);

  }

  if(m_networkInterfaceIdHasBeenSet)
  {
   payload.WithString("NetworkInterfaceId", m_networkInterfaceId);

  }

  if(m_originHasBeenSet)
  {
   payload.WithString("Origin", m_origin);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", m_state);

  }

  if(m_transitGatewayIdHasBeenSet)
  {
   payload.WithString("TransitGatewayId", m_transitGatewayId);

  }

  if(m_vpcPeeringConnectionIdHasBeenSet)
  {
   payload.WithString("VpcPeeringConnectionId", m_vpcPeeringConnectionId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
