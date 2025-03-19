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
    AWS_NETWORKMANAGER_API RouteTableIdentifier() = default;
    AWS_NETWORKMANAGER_API RouteTableIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API RouteTableIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the transit gateway route table for the attachment request. For
     * example, <code>"TransitGatewayRouteTableArn":
     * "arn:aws:ec2:us-west-2:123456789012:transit-gateway-route-table/tgw-rtb-9876543210123456"</code>.</p>
     */
    inline const Aws::String& GetTransitGatewayRouteTableArn() const { return m_transitGatewayRouteTableArn; }
    inline bool TransitGatewayRouteTableArnHasBeenSet() const { return m_transitGatewayRouteTableArnHasBeenSet; }
    template<typename TransitGatewayRouteTableArnT = Aws::String>
    void SetTransitGatewayRouteTableArn(TransitGatewayRouteTableArnT&& value) { m_transitGatewayRouteTableArnHasBeenSet = true; m_transitGatewayRouteTableArn = std::forward<TransitGatewayRouteTableArnT>(value); }
    template<typename TransitGatewayRouteTableArnT = Aws::String>
    RouteTableIdentifier& WithTransitGatewayRouteTableArn(TransitGatewayRouteTableArnT&& value) { SetTransitGatewayRouteTableArn(std::forward<TransitGatewayRouteTableArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The segment edge in a core network.</p>
     */
    inline const CoreNetworkSegmentEdgeIdentifier& GetCoreNetworkSegmentEdge() const { return m_coreNetworkSegmentEdge; }
    inline bool CoreNetworkSegmentEdgeHasBeenSet() const { return m_coreNetworkSegmentEdgeHasBeenSet; }
    template<typename CoreNetworkSegmentEdgeT = CoreNetworkSegmentEdgeIdentifier>
    void SetCoreNetworkSegmentEdge(CoreNetworkSegmentEdgeT&& value) { m_coreNetworkSegmentEdgeHasBeenSet = true; m_coreNetworkSegmentEdge = std::forward<CoreNetworkSegmentEdgeT>(value); }
    template<typename CoreNetworkSegmentEdgeT = CoreNetworkSegmentEdgeIdentifier>
    RouteTableIdentifier& WithCoreNetworkSegmentEdge(CoreNetworkSegmentEdgeT&& value) { SetCoreNetworkSegmentEdge(std::forward<CoreNetworkSegmentEdgeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route table identifier associated with the network function group.</p>
     */
    inline const CoreNetworkNetworkFunctionGroupIdentifier& GetCoreNetworkNetworkFunctionGroup() const { return m_coreNetworkNetworkFunctionGroup; }
    inline bool CoreNetworkNetworkFunctionGroupHasBeenSet() const { return m_coreNetworkNetworkFunctionGroupHasBeenSet; }
    template<typename CoreNetworkNetworkFunctionGroupT = CoreNetworkNetworkFunctionGroupIdentifier>
    void SetCoreNetworkNetworkFunctionGroup(CoreNetworkNetworkFunctionGroupT&& value) { m_coreNetworkNetworkFunctionGroupHasBeenSet = true; m_coreNetworkNetworkFunctionGroup = std::forward<CoreNetworkNetworkFunctionGroupT>(value); }
    template<typename CoreNetworkNetworkFunctionGroupT = CoreNetworkNetworkFunctionGroupIdentifier>
    RouteTableIdentifier& WithCoreNetworkNetworkFunctionGroup(CoreNetworkNetworkFunctionGroupT&& value) { SetCoreNetworkNetworkFunctionGroup(std::forward<CoreNetworkNetworkFunctionGroupT>(value)); return *this;}
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
