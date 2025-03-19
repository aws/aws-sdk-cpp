/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AssociationStateDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> The associations between a route table and one or more subnets or a gateway.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AssociationSetDetails">AWS
   * API Reference</a></p>
   */
  class AssociationSetDetails
  {
  public:
    AWS_SECURITYHUB_API AssociationSetDetails() = default;
    AWS_SECURITYHUB_API AssociationSetDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AssociationSetDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The state of the association between a route table and a subnet or gateway.
     * </p>
     */
    inline const AssociationStateDetails& GetAssociationState() const { return m_associationState; }
    inline bool AssociationStateHasBeenSet() const { return m_associationStateHasBeenSet; }
    template<typename AssociationStateT = AssociationStateDetails>
    void SetAssociationState(AssociationStateT&& value) { m_associationStateHasBeenSet = true; m_associationState = std::forward<AssociationStateT>(value); }
    template<typename AssociationStateT = AssociationStateDetails>
    AssociationSetDetails& WithAssociationState(AssociationStateT&& value) { SetAssociationState(std::forward<AssociationStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the internet gateway or virtual private gateway. </p>
     */
    inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }
    template<typename GatewayIdT = Aws::String>
    void SetGatewayId(GatewayIdT&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::forward<GatewayIdT>(value); }
    template<typename GatewayIdT = Aws::String>
    AssociationSetDetails& WithGatewayId(GatewayIdT&& value) { SetGatewayId(std::forward<GatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether this is the main route table. </p>
     */
    inline bool GetMain() const { return m_main; }
    inline bool MainHasBeenSet() const { return m_mainHasBeenSet; }
    inline void SetMain(bool value) { m_mainHasBeenSet = true; m_main = value; }
    inline AssociationSetDetails& WithMain(bool value) { SetMain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the association. </p>
     */
    inline const Aws::String& GetRouteTableAssociationId() const { return m_routeTableAssociationId; }
    inline bool RouteTableAssociationIdHasBeenSet() const { return m_routeTableAssociationIdHasBeenSet; }
    template<typename RouteTableAssociationIdT = Aws::String>
    void SetRouteTableAssociationId(RouteTableAssociationIdT&& value) { m_routeTableAssociationIdHasBeenSet = true; m_routeTableAssociationId = std::forward<RouteTableAssociationIdT>(value); }
    template<typename RouteTableAssociationIdT = Aws::String>
    AssociationSetDetails& WithRouteTableAssociationId(RouteTableAssociationIdT&& value) { SetRouteTableAssociationId(std::forward<RouteTableAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the route table. </p>
     */
    inline const Aws::String& GetRouteTableId() const { return m_routeTableId; }
    inline bool RouteTableIdHasBeenSet() const { return m_routeTableIdHasBeenSet; }
    template<typename RouteTableIdT = Aws::String>
    void SetRouteTableId(RouteTableIdT&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = std::forward<RouteTableIdT>(value); }
    template<typename RouteTableIdT = Aws::String>
    AssociationSetDetails& WithRouteTableId(RouteTableIdT&& value) { SetRouteTableId(std::forward<RouteTableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the subnet. A subnet ID is not returned for an implicit
     * association. </p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    AssociationSetDetails& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}
  private:

    AssociationStateDetails m_associationState;
    bool m_associationStateHasBeenSet = false;

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet = false;

    bool m_main{false};
    bool m_mainHasBeenSet = false;

    Aws::String m_routeTableAssociationId;
    bool m_routeTableAssociationIdHasBeenSet = false;

    Aws::String m_routeTableId;
    bool m_routeTableIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
