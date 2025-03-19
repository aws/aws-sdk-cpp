/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/RouteTableIdentifier.h>
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

RouteTableIdentifier::RouteTableIdentifier(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteTableIdentifier& RouteTableIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TransitGatewayRouteTableArn"))
  {
    m_transitGatewayRouteTableArn = jsonValue.GetString("TransitGatewayRouteTableArn");
    m_transitGatewayRouteTableArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CoreNetworkSegmentEdge"))
  {
    m_coreNetworkSegmentEdge = jsonValue.GetObject("CoreNetworkSegmentEdge");
    m_coreNetworkSegmentEdgeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CoreNetworkNetworkFunctionGroup"))
  {
    m_coreNetworkNetworkFunctionGroup = jsonValue.GetObject("CoreNetworkNetworkFunctionGroup");
    m_coreNetworkNetworkFunctionGroupHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteTableIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_transitGatewayRouteTableArnHasBeenSet)
  {
   payload.WithString("TransitGatewayRouteTableArn", m_transitGatewayRouteTableArn);

  }

  if(m_coreNetworkSegmentEdgeHasBeenSet)
  {
   payload.WithObject("CoreNetworkSegmentEdge", m_coreNetworkSegmentEdge.Jsonize());

  }

  if(m_coreNetworkNetworkFunctionGroupHasBeenSet)
  {
   payload.WithObject("CoreNetworkNetworkFunctionGroup", m_coreNetworkNetworkFunctionGroup.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
