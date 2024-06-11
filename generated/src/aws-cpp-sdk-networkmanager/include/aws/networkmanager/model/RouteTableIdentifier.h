/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/CoreNetworkSegmentEdgeIdentifier.h>
#include <aws/networkmanager/model/CoreNetworkNetworkFunctionGroupIdentifier.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a route table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/RouteTableIdentifier">AWS
   * API Reference</a></p>
   */
  class RouteTableIdentifier
  {
  public:
    AWS_NETWORKMANAGER_API RouteTableIdentifier();
    AWS_NETWORKMANAGER_API RouteTableIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API RouteTableIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the transit gateway route table for the attachment request. For
     * example, <code>"TransitGatewayRouteTableArn":
     * "arn:aws:ec2:us-west-2:123456789012:transit-gateway-route-table/tgw-rtb-9876543210123456"</code>.</p>
     */
    inline const Aws::String& GetTransitGatewayRouteTableArn() const{ return m_transitGatewayRouteTableArn; }
    inline bool TransitGatewayRouteTableArnHasBeenSet() const { return m_transitGatewayRouteTableArnHasBeenSet; }
    inline void SetTransitGatewayRouteTableArn(const Aws::String& value) { m_transitGatewayRouteTableArnHasBeenSet = true; m_transitGatewayRouteTableArn = value; }
    inline void SetTransitGatewayRouteTableArn(Aws::String&& value) { m_transitGatewayRouteTableArnHasBeenSet = true; m_transitGatewayRouteTableArn = std::move(value); }
    inline void SetTransitGatewayRouteTableArn(const char* value) { m_transitGatewayRouteTableArnHasBeenSet = true; m_transitGatewayRouteTableArn.assign(value); }
    inline RouteTableIdentifier& WithTransitGatewayRouteTableArn(const Aws::String& value) { SetTransitGatewayRouteTableArn(value); return *this;}
    inline RouteTableIdentifier& WithTransitGatewayRouteTableArn(Aws::String&& value) { SetTransitGatewayRouteTableArn(std::move(value)); return *this;}
    inline RouteTableIdentifier& WithTransitGatewayRouteTableArn(const char* value) { SetTransitGatewayRouteTableArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The segment edge in a core network.</p>
     */
    inline const CoreNetworkSegmentEdgeIdentifier& GetCoreNetworkSegmentEdge() const{ return m_coreNetworkSegmentEdge; }
    inline bool CoreNetworkSegmentEdgeHasBeenSet() const { return m_coreNetworkSegmentEdgeHasBeenSet; }
    inline void SetCoreNetworkSegmentEdge(const CoreNetworkSegmentEdgeIdentifier& value) { m_coreNetworkSegmentEdgeHasBeenSet = true; m_coreNetworkSegmentEdge = value; }
    inline void SetCoreNetworkSegmentEdge(CoreNetworkSegmentEdgeIdentifier&& value) { m_coreNetworkSegmentEdgeHasBeenSet = true; m_coreNetworkSegmentEdge = std::move(value); }
    inline RouteTableIdentifier& WithCoreNetworkSegmentEdge(const CoreNetworkSegmentEdgeIdentifier& value) { SetCoreNetworkSegmentEdge(value); return *this;}
    inline RouteTableIdentifier& WithCoreNetworkSegmentEdge(CoreNetworkSegmentEdgeIdentifier&& value) { SetCoreNetworkSegmentEdge(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route table identifier associated with the network function group.</p>
     */
    inline const CoreNetworkNetworkFunctionGroupIdentifier& GetCoreNetworkNetworkFunctionGroup() const{ return m_coreNetworkNetworkFunctionGroup; }
    inline bool CoreNetworkNetworkFunctionGroupHasBeenSet() const { return m_coreNetworkNetworkFunctionGroupHasBeenSet; }
    inline void SetCoreNetworkNetworkFunctionGroup(const CoreNetworkNetworkFunctionGroupIdentifier& value) { m_coreNetworkNetworkFunctionGroupHasBeenSet = true; m_coreNetworkNetworkFunctionGroup = value; }
    inline void SetCoreNetworkNetworkFunctionGroup(CoreNetworkNetworkFunctionGroupIdentifier&& value) { m_coreNetworkNetworkFunctionGroupHasBeenSet = true; m_coreNetworkNetworkFunctionGroup = std::move(value); }
    inline RouteTableIdentifier& WithCoreNetworkNetworkFunctionGroup(const CoreNetworkNetworkFunctionGroupIdentifier& value) { SetCoreNetworkNetworkFunctionGroup(value); return *this;}
    inline RouteTableIdentifier& WithCoreNetworkNetworkFunctionGroup(CoreNetworkNetworkFunctionGroupIdentifier&& value) { SetCoreNetworkNetworkFunctionGroup(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_transitGatewayRouteTableArn;
    bool m_transitGatewayRouteTableArnHasBeenSet = false;

    CoreNetworkSegmentEdgeIdentifier m_coreNetworkSegmentEdge;
    bool m_coreNetworkSegmentEdgeHasBeenSet = false;

    CoreNetworkNetworkFunctionGroupIdentifier m_coreNetworkNetworkFunctionGroup;
    bool m_coreNetworkNetworkFunctionGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
