/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
   * <p> Provides details about the routes in the route table. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RouteSetDetails">AWS
   * API Reference</a></p>
   */
  class RouteSetDetails
  {
  public:
    AWS_SECURITYHUB_API RouteSetDetails() = default;
    AWS_SECURITYHUB_API RouteSetDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API RouteSetDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the carrier gateway. </p>
     */
    inline const Aws::String& GetCarrierGatewayId() const { return m_carrierGatewayId; }
    inline bool CarrierGatewayIdHasBeenSet() const { return m_carrierGatewayIdHasBeenSet; }
    template<typename CarrierGatewayIdT = Aws::String>
    void SetCarrierGatewayId(CarrierGatewayIdT&& value) { m_carrierGatewayIdHasBeenSet = true; m_carrierGatewayId = std::forward<CarrierGatewayIdT>(value); }
    template<typename CarrierGatewayIdT = Aws::String>
    RouteSetDetails& WithCarrierGatewayId(CarrierGatewayIdT&& value) { SetCarrierGatewayId(std::forward<CarrierGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the core network. </p>
     */
    inline const Aws::String& GetCoreNetworkArn() const { return m_coreNetworkArn; }
    inline bool CoreNetworkArnHasBeenSet() const { return m_coreNetworkArnHasBeenSet; }
    template<typename CoreNetworkArnT = Aws::String>
    void SetCoreNetworkArn(CoreNetworkArnT&& value) { m_coreNetworkArnHasBeenSet = true; m_coreNetworkArn = std::forward<CoreNetworkArnT>(value); }
    template<typename CoreNetworkArnT = Aws::String>
    RouteSetDetails& WithCoreNetworkArn(CoreNetworkArnT&& value) { SetCoreNetworkArn(std::forward<CoreNetworkArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The IPv4 CIDR block used for the destination match. </p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const { return m_destinationCidrBlock; }
    inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }
    template<typename DestinationCidrBlockT = Aws::String>
    void SetDestinationCidrBlock(DestinationCidrBlockT&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::forward<DestinationCidrBlockT>(value); }
    template<typename DestinationCidrBlockT = Aws::String>
    RouteSetDetails& WithDestinationCidrBlock(DestinationCidrBlockT&& value) { SetDestinationCidrBlock(std::forward<DestinationCidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The IPv6 CIDR block used for the destination match. </p>
     */
    inline const Aws::String& GetDestinationIpv6CidrBlock() const { return m_destinationIpv6CidrBlock; }
    inline bool DestinationIpv6CidrBlockHasBeenSet() const { return m_destinationIpv6CidrBlockHasBeenSet; }
    template<typename DestinationIpv6CidrBlockT = Aws::String>
    void SetDestinationIpv6CidrBlock(DestinationIpv6CidrBlockT&& value) { m_destinationIpv6CidrBlockHasBeenSet = true; m_destinationIpv6CidrBlock = std::forward<DestinationIpv6CidrBlockT>(value); }
    template<typename DestinationIpv6CidrBlockT = Aws::String>
    RouteSetDetails& WithDestinationIpv6CidrBlock(DestinationIpv6CidrBlockT&& value) { SetDestinationIpv6CidrBlock(std::forward<DestinationIpv6CidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The prefix of the destination Amazon Web Services service. </p>
     */
    inline const Aws::String& GetDestinationPrefixListId() const { return m_destinationPrefixListId; }
    inline bool DestinationPrefixListIdHasBeenSet() const { return m_destinationPrefixListIdHasBeenSet; }
    template<typename DestinationPrefixListIdT = Aws::String>
    void SetDestinationPrefixListId(DestinationPrefixListIdT&& value) { m_destinationPrefixListIdHasBeenSet = true; m_destinationPrefixListId = std::forward<DestinationPrefixListIdT>(value); }
    template<typename DestinationPrefixListIdT = Aws::String>
    RouteSetDetails& WithDestinationPrefixListId(DestinationPrefixListIdT&& value) { SetDestinationPrefixListId(std::forward<DestinationPrefixListIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the egress-only internet gateway. </p>
     */
    inline const Aws::String& GetEgressOnlyInternetGatewayId() const { return m_egressOnlyInternetGatewayId; }
    inline bool EgressOnlyInternetGatewayIdHasBeenSet() const { return m_egressOnlyInternetGatewayIdHasBeenSet; }
    template<typename EgressOnlyInternetGatewayIdT = Aws::String>
    void SetEgressOnlyInternetGatewayId(EgressOnlyInternetGatewayIdT&& value) { m_egressOnlyInternetGatewayIdHasBeenSet = true; m_egressOnlyInternetGatewayId = std::forward<EgressOnlyInternetGatewayIdT>(value); }
    template<typename EgressOnlyInternetGatewayIdT = Aws::String>
    RouteSetDetails& WithEgressOnlyInternetGatewayId(EgressOnlyInternetGatewayIdT&& value) { SetEgressOnlyInternetGatewayId(std::forward<EgressOnlyInternetGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of a gateway attached to your VPC. </p>
     */
    inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }
    template<typename GatewayIdT = Aws::String>
    void SetGatewayId(GatewayIdT&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::forward<GatewayIdT>(value); }
    template<typename GatewayIdT = Aws::String>
    RouteSetDetails& WithGatewayId(GatewayIdT&& value) { SetGatewayId(std::forward<GatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of a NAT instance in your VPC. </p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    RouteSetDetails& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the Amazon Web Services account that owns the instance. </p>
     */
    inline const Aws::String& GetInstanceOwnerId() const { return m_instanceOwnerId; }
    inline bool InstanceOwnerIdHasBeenSet() const { return m_instanceOwnerIdHasBeenSet; }
    template<typename InstanceOwnerIdT = Aws::String>
    void SetInstanceOwnerId(InstanceOwnerIdT&& value) { m_instanceOwnerIdHasBeenSet = true; m_instanceOwnerId = std::forward<InstanceOwnerIdT>(value); }
    template<typename InstanceOwnerIdT = Aws::String>
    RouteSetDetails& WithInstanceOwnerId(InstanceOwnerIdT&& value) { SetInstanceOwnerId(std::forward<InstanceOwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the local gateway. </p>
     */
    inline const Aws::String& GetLocalGatewayId() const { return m_localGatewayId; }
    inline bool LocalGatewayIdHasBeenSet() const { return m_localGatewayIdHasBeenSet; }
    template<typename LocalGatewayIdT = Aws::String>
    void SetLocalGatewayId(LocalGatewayIdT&& value) { m_localGatewayIdHasBeenSet = true; m_localGatewayId = std::forward<LocalGatewayIdT>(value); }
    template<typename LocalGatewayIdT = Aws::String>
    RouteSetDetails& WithLocalGatewayId(LocalGatewayIdT&& value) { SetLocalGatewayId(std::forward<LocalGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of a NAT gateway. </p>
     */
    inline const Aws::String& GetNatGatewayId() const { return m_natGatewayId; }
    inline bool NatGatewayIdHasBeenSet() const { return m_natGatewayIdHasBeenSet; }
    template<typename NatGatewayIdT = Aws::String>
    void SetNatGatewayId(NatGatewayIdT&& value) { m_natGatewayIdHasBeenSet = true; m_natGatewayId = std::forward<NatGatewayIdT>(value); }
    template<typename NatGatewayIdT = Aws::String>
    RouteSetDetails& WithNatGatewayId(NatGatewayIdT&& value) { SetNatGatewayId(std::forward<NatGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the network interface. </p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const { return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    template<typename NetworkInterfaceIdT = Aws::String>
    void SetNetworkInterfaceId(NetworkInterfaceIdT&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::forward<NetworkInterfaceIdT>(value); }
    template<typename NetworkInterfaceIdT = Aws::String>
    RouteSetDetails& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) { SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes how the route was created. </p>
     */
    inline const Aws::String& GetOrigin() const { return m_origin; }
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
    template<typename OriginT = Aws::String>
    void SetOrigin(OriginT&& value) { m_originHasBeenSet = true; m_origin = std::forward<OriginT>(value); }
    template<typename OriginT = Aws::String>
    RouteSetDetails& WithOrigin(OriginT&& value) { SetOrigin(std::forward<OriginT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The state of the route. </p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    RouteSetDetails& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of a transit gateway. </p>
     */
    inline const Aws::String& GetTransitGatewayId() const { return m_transitGatewayId; }
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }
    template<typename TransitGatewayIdT = Aws::String>
    void SetTransitGatewayId(TransitGatewayIdT&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::forward<TransitGatewayIdT>(value); }
    template<typename TransitGatewayIdT = Aws::String>
    RouteSetDetails& WithTransitGatewayId(TransitGatewayIdT&& value) { SetTransitGatewayId(std::forward<TransitGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of a VPC peering connection. </p>
     */
    inline const Aws::String& GetVpcPeeringConnectionId() const { return m_vpcPeeringConnectionId; }
    inline bool VpcPeeringConnectionIdHasBeenSet() const { return m_vpcPeeringConnectionIdHasBeenSet; }
    template<typename VpcPeeringConnectionIdT = Aws::String>
    void SetVpcPeeringConnectionId(VpcPeeringConnectionIdT&& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = std::forward<VpcPeeringConnectionIdT>(value); }
    template<typename VpcPeeringConnectionIdT = Aws::String>
    RouteSetDetails& WithVpcPeeringConnectionId(VpcPeeringConnectionIdT&& value) { SetVpcPeeringConnectionId(std::forward<VpcPeeringConnectionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_carrierGatewayId;
    bool m_carrierGatewayIdHasBeenSet = false;

    Aws::String m_coreNetworkArn;
    bool m_coreNetworkArnHasBeenSet = false;

    Aws::String m_destinationCidrBlock;
    bool m_destinationCidrBlockHasBeenSet = false;

    Aws::String m_destinationIpv6CidrBlock;
    bool m_destinationIpv6CidrBlockHasBeenSet = false;

    Aws::String m_destinationPrefixListId;
    bool m_destinationPrefixListIdHasBeenSet = false;

    Aws::String m_egressOnlyInternetGatewayId;
    bool m_egressOnlyInternetGatewayIdHasBeenSet = false;

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_instanceOwnerId;
    bool m_instanceOwnerIdHasBeenSet = false;

    Aws::String m_localGatewayId;
    bool m_localGatewayIdHasBeenSet = false;

    Aws::String m_natGatewayId;
    bool m_natGatewayIdHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::String m_origin;
    bool m_originHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet = false;

    Aws::String m_vpcPeeringConnectionId;
    bool m_vpcPeeringConnectionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
