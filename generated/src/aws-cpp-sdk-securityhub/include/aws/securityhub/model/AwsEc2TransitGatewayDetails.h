/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Information about an Amazon Web Services Amazon EC2 Transit Gateway that
   * interconnects virtual private clouds (VPCs) and on-premises networks.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2TransitGatewayDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2TransitGatewayDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2TransitGatewayDetails() = default;
    AWS_SECURITYHUB_API AwsEc2TransitGatewayDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2TransitGatewayDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the transit gateway. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AwsEc2TransitGatewayDetails& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the transit gateway. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AwsEc2TransitGatewayDetails& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Turn on or turn off automatic propagation of routes to the default
     * propagation route table. </p>
     */
    inline const Aws::String& GetDefaultRouteTablePropagation() const { return m_defaultRouteTablePropagation; }
    inline bool DefaultRouteTablePropagationHasBeenSet() const { return m_defaultRouteTablePropagationHasBeenSet; }
    template<typename DefaultRouteTablePropagationT = Aws::String>
    void SetDefaultRouteTablePropagation(DefaultRouteTablePropagationT&& value) { m_defaultRouteTablePropagationHasBeenSet = true; m_defaultRouteTablePropagation = std::forward<DefaultRouteTablePropagationT>(value); }
    template<typename DefaultRouteTablePropagationT = Aws::String>
    AwsEc2TransitGatewayDetails& WithDefaultRouteTablePropagation(DefaultRouteTablePropagationT&& value) { SetDefaultRouteTablePropagation(std::forward<DefaultRouteTablePropagationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Turn on or turn off automatic acceptance of attachment requests. </p>
     */
    inline const Aws::String& GetAutoAcceptSharedAttachments() const { return m_autoAcceptSharedAttachments; }
    inline bool AutoAcceptSharedAttachmentsHasBeenSet() const { return m_autoAcceptSharedAttachmentsHasBeenSet; }
    template<typename AutoAcceptSharedAttachmentsT = Aws::String>
    void SetAutoAcceptSharedAttachments(AutoAcceptSharedAttachmentsT&& value) { m_autoAcceptSharedAttachmentsHasBeenSet = true; m_autoAcceptSharedAttachments = std::forward<AutoAcceptSharedAttachmentsT>(value); }
    template<typename AutoAcceptSharedAttachmentsT = Aws::String>
    AwsEc2TransitGatewayDetails& WithAutoAcceptSharedAttachments(AutoAcceptSharedAttachmentsT&& value) { SetAutoAcceptSharedAttachments(std::forward<AutoAcceptSharedAttachmentsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Turn on or turn off automatic association with the default association route
     * table. </p>
     */
    inline const Aws::String& GetDefaultRouteTableAssociation() const { return m_defaultRouteTableAssociation; }
    inline bool DefaultRouteTableAssociationHasBeenSet() const { return m_defaultRouteTableAssociationHasBeenSet; }
    template<typename DefaultRouteTableAssociationT = Aws::String>
    void SetDefaultRouteTableAssociation(DefaultRouteTableAssociationT&& value) { m_defaultRouteTableAssociationHasBeenSet = true; m_defaultRouteTableAssociation = std::forward<DefaultRouteTableAssociationT>(value); }
    template<typename DefaultRouteTableAssociationT = Aws::String>
    AwsEc2TransitGatewayDetails& WithDefaultRouteTableAssociation(DefaultRouteTableAssociationT&& value) { SetDefaultRouteTableAssociation(std::forward<DefaultRouteTableAssociationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transit gateway Classless Inter-Domain Routing (CIDR) blocks. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTransitGatewayCidrBlocks() const { return m_transitGatewayCidrBlocks; }
    inline bool TransitGatewayCidrBlocksHasBeenSet() const { return m_transitGatewayCidrBlocksHasBeenSet; }
    template<typename TransitGatewayCidrBlocksT = Aws::Vector<Aws::String>>
    void SetTransitGatewayCidrBlocks(TransitGatewayCidrBlocksT&& value) { m_transitGatewayCidrBlocksHasBeenSet = true; m_transitGatewayCidrBlocks = std::forward<TransitGatewayCidrBlocksT>(value); }
    template<typename TransitGatewayCidrBlocksT = Aws::Vector<Aws::String>>
    AwsEc2TransitGatewayDetails& WithTransitGatewayCidrBlocks(TransitGatewayCidrBlocksT&& value) { SetTransitGatewayCidrBlocks(std::forward<TransitGatewayCidrBlocksT>(value)); return *this;}
    template<typename TransitGatewayCidrBlocksT = Aws::String>
    AwsEc2TransitGatewayDetails& AddTransitGatewayCidrBlocks(TransitGatewayCidrBlocksT&& value) { m_transitGatewayCidrBlocksHasBeenSet = true; m_transitGatewayCidrBlocks.emplace_back(std::forward<TransitGatewayCidrBlocksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the default association route table. </p>
     */
    inline const Aws::String& GetAssociationDefaultRouteTableId() const { return m_associationDefaultRouteTableId; }
    inline bool AssociationDefaultRouteTableIdHasBeenSet() const { return m_associationDefaultRouteTableIdHasBeenSet; }
    template<typename AssociationDefaultRouteTableIdT = Aws::String>
    void SetAssociationDefaultRouteTableId(AssociationDefaultRouteTableIdT&& value) { m_associationDefaultRouteTableIdHasBeenSet = true; m_associationDefaultRouteTableId = std::forward<AssociationDefaultRouteTableIdT>(value); }
    template<typename AssociationDefaultRouteTableIdT = Aws::String>
    AwsEc2TransitGatewayDetails& WithAssociationDefaultRouteTableId(AssociationDefaultRouteTableIdT&& value) { SetAssociationDefaultRouteTableId(std::forward<AssociationDefaultRouteTableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the default propagation route table. </p>
     */
    inline const Aws::String& GetPropagationDefaultRouteTableId() const { return m_propagationDefaultRouteTableId; }
    inline bool PropagationDefaultRouteTableIdHasBeenSet() const { return m_propagationDefaultRouteTableIdHasBeenSet; }
    template<typename PropagationDefaultRouteTableIdT = Aws::String>
    void SetPropagationDefaultRouteTableId(PropagationDefaultRouteTableIdT&& value) { m_propagationDefaultRouteTableIdHasBeenSet = true; m_propagationDefaultRouteTableId = std::forward<PropagationDefaultRouteTableIdT>(value); }
    template<typename PropagationDefaultRouteTableIdT = Aws::String>
    AwsEc2TransitGatewayDetails& WithPropagationDefaultRouteTableId(PropagationDefaultRouteTableIdT&& value) { SetPropagationDefaultRouteTableId(std::forward<PropagationDefaultRouteTableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Turn on or turn off Equal Cost Multipath Protocol (ECMP) support. </p>
     */
    inline const Aws::String& GetVpnEcmpSupport() const { return m_vpnEcmpSupport; }
    inline bool VpnEcmpSupportHasBeenSet() const { return m_vpnEcmpSupportHasBeenSet; }
    template<typename VpnEcmpSupportT = Aws::String>
    void SetVpnEcmpSupport(VpnEcmpSupportT&& value) { m_vpnEcmpSupportHasBeenSet = true; m_vpnEcmpSupport = std::forward<VpnEcmpSupportT>(value); }
    template<typename VpnEcmpSupportT = Aws::String>
    AwsEc2TransitGatewayDetails& WithVpnEcmpSupport(VpnEcmpSupportT&& value) { SetVpnEcmpSupport(std::forward<VpnEcmpSupportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Turn on or turn off DNS support. </p>
     */
    inline const Aws::String& GetDnsSupport() const { return m_dnsSupport; }
    inline bool DnsSupportHasBeenSet() const { return m_dnsSupportHasBeenSet; }
    template<typename DnsSupportT = Aws::String>
    void SetDnsSupport(DnsSupportT&& value) { m_dnsSupportHasBeenSet = true; m_dnsSupport = std::forward<DnsSupportT>(value); }
    template<typename DnsSupportT = Aws::String>
    AwsEc2TransitGatewayDetails& WithDnsSupport(DnsSupportT&& value) { SetDnsSupport(std::forward<DnsSupportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether multicast is supported on the transit gateway. </p>
     */
    inline const Aws::String& GetMulticastSupport() const { return m_multicastSupport; }
    inline bool MulticastSupportHasBeenSet() const { return m_multicastSupportHasBeenSet; }
    template<typename MulticastSupportT = Aws::String>
    void SetMulticastSupport(MulticastSupportT&& value) { m_multicastSupportHasBeenSet = true; m_multicastSupport = std::forward<MulticastSupportT>(value); }
    template<typename MulticastSupportT = Aws::String>
    AwsEc2TransitGatewayDetails& WithMulticastSupport(MulticastSupportT&& value) { SetMulticastSupport(std::forward<MulticastSupportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A private Autonomous System Number (ASN) for the Amazon side of a BGP
     * session. </p>
     */
    inline int GetAmazonSideAsn() const { return m_amazonSideAsn; }
    inline bool AmazonSideAsnHasBeenSet() const { return m_amazonSideAsnHasBeenSet; }
    inline void SetAmazonSideAsn(int value) { m_amazonSideAsnHasBeenSet = true; m_amazonSideAsn = value; }
    inline AwsEc2TransitGatewayDetails& WithAmazonSideAsn(int value) { SetAmazonSideAsn(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_defaultRouteTablePropagation;
    bool m_defaultRouteTablePropagationHasBeenSet = false;

    Aws::String m_autoAcceptSharedAttachments;
    bool m_autoAcceptSharedAttachmentsHasBeenSet = false;

    Aws::String m_defaultRouteTableAssociation;
    bool m_defaultRouteTableAssociationHasBeenSet = false;

    Aws::Vector<Aws::String> m_transitGatewayCidrBlocks;
    bool m_transitGatewayCidrBlocksHasBeenSet = false;

    Aws::String m_associationDefaultRouteTableId;
    bool m_associationDefaultRouteTableIdHasBeenSet = false;

    Aws::String m_propagationDefaultRouteTableId;
    bool m_propagationDefaultRouteTableIdHasBeenSet = false;

    Aws::String m_vpnEcmpSupport;
    bool m_vpnEcmpSupportHasBeenSet = false;

    Aws::String m_dnsSupport;
    bool m_dnsSupportHasBeenSet = false;

    Aws::String m_multicastSupport;
    bool m_multicastSupportHasBeenSet = false;

    int m_amazonSideAsn{0};
    bool m_amazonSideAsnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
