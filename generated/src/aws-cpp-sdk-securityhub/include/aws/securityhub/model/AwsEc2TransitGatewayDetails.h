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
    AWS_SECURITYHUB_API AwsEc2TransitGatewayDetails();
    AWS_SECURITYHUB_API AwsEc2TransitGatewayDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2TransitGatewayDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the transit gateway. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the transit gateway. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the transit gateway. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the transit gateway. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the transit gateway. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the transit gateway. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the transit gateway. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The description of the transit gateway. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the transit gateway. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the transit gateway. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the transit gateway. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the transit gateway. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the transit gateway. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the transit gateway. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the transit gateway. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Turn on or turn off automatic propagation of routes to the default
     * propagation route table. </p>
     */
    inline const Aws::String& GetDefaultRouteTablePropagation() const{ return m_defaultRouteTablePropagation; }

    /**
     * <p>Turn on or turn off automatic propagation of routes to the default
     * propagation route table. </p>
     */
    inline bool DefaultRouteTablePropagationHasBeenSet() const { return m_defaultRouteTablePropagationHasBeenSet; }

    /**
     * <p>Turn on or turn off automatic propagation of routes to the default
     * propagation route table. </p>
     */
    inline void SetDefaultRouteTablePropagation(const Aws::String& value) { m_defaultRouteTablePropagationHasBeenSet = true; m_defaultRouteTablePropagation = value; }

    /**
     * <p>Turn on or turn off automatic propagation of routes to the default
     * propagation route table. </p>
     */
    inline void SetDefaultRouteTablePropagation(Aws::String&& value) { m_defaultRouteTablePropagationHasBeenSet = true; m_defaultRouteTablePropagation = std::move(value); }

    /**
     * <p>Turn on or turn off automatic propagation of routes to the default
     * propagation route table. </p>
     */
    inline void SetDefaultRouteTablePropagation(const char* value) { m_defaultRouteTablePropagationHasBeenSet = true; m_defaultRouteTablePropagation.assign(value); }

    /**
     * <p>Turn on or turn off automatic propagation of routes to the default
     * propagation route table. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithDefaultRouteTablePropagation(const Aws::String& value) { SetDefaultRouteTablePropagation(value); return *this;}

    /**
     * <p>Turn on or turn off automatic propagation of routes to the default
     * propagation route table. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithDefaultRouteTablePropagation(Aws::String&& value) { SetDefaultRouteTablePropagation(std::move(value)); return *this;}

    /**
     * <p>Turn on or turn off automatic propagation of routes to the default
     * propagation route table. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithDefaultRouteTablePropagation(const char* value) { SetDefaultRouteTablePropagation(value); return *this;}


    /**
     * <p>Turn on or turn off automatic acceptance of attachment requests. </p>
     */
    inline const Aws::String& GetAutoAcceptSharedAttachments() const{ return m_autoAcceptSharedAttachments; }

    /**
     * <p>Turn on or turn off automatic acceptance of attachment requests. </p>
     */
    inline bool AutoAcceptSharedAttachmentsHasBeenSet() const { return m_autoAcceptSharedAttachmentsHasBeenSet; }

    /**
     * <p>Turn on or turn off automatic acceptance of attachment requests. </p>
     */
    inline void SetAutoAcceptSharedAttachments(const Aws::String& value) { m_autoAcceptSharedAttachmentsHasBeenSet = true; m_autoAcceptSharedAttachments = value; }

    /**
     * <p>Turn on or turn off automatic acceptance of attachment requests. </p>
     */
    inline void SetAutoAcceptSharedAttachments(Aws::String&& value) { m_autoAcceptSharedAttachmentsHasBeenSet = true; m_autoAcceptSharedAttachments = std::move(value); }

    /**
     * <p>Turn on or turn off automatic acceptance of attachment requests. </p>
     */
    inline void SetAutoAcceptSharedAttachments(const char* value) { m_autoAcceptSharedAttachmentsHasBeenSet = true; m_autoAcceptSharedAttachments.assign(value); }

    /**
     * <p>Turn on or turn off automatic acceptance of attachment requests. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithAutoAcceptSharedAttachments(const Aws::String& value) { SetAutoAcceptSharedAttachments(value); return *this;}

    /**
     * <p>Turn on or turn off automatic acceptance of attachment requests. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithAutoAcceptSharedAttachments(Aws::String&& value) { SetAutoAcceptSharedAttachments(std::move(value)); return *this;}

    /**
     * <p>Turn on or turn off automatic acceptance of attachment requests. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithAutoAcceptSharedAttachments(const char* value) { SetAutoAcceptSharedAttachments(value); return *this;}


    /**
     * <p>Turn on or turn off automatic association with the default association route
     * table. </p>
     */
    inline const Aws::String& GetDefaultRouteTableAssociation() const{ return m_defaultRouteTableAssociation; }

    /**
     * <p>Turn on or turn off automatic association with the default association route
     * table. </p>
     */
    inline bool DefaultRouteTableAssociationHasBeenSet() const { return m_defaultRouteTableAssociationHasBeenSet; }

    /**
     * <p>Turn on or turn off automatic association with the default association route
     * table. </p>
     */
    inline void SetDefaultRouteTableAssociation(const Aws::String& value) { m_defaultRouteTableAssociationHasBeenSet = true; m_defaultRouteTableAssociation = value; }

    /**
     * <p>Turn on or turn off automatic association with the default association route
     * table. </p>
     */
    inline void SetDefaultRouteTableAssociation(Aws::String&& value) { m_defaultRouteTableAssociationHasBeenSet = true; m_defaultRouteTableAssociation = std::move(value); }

    /**
     * <p>Turn on or turn off automatic association with the default association route
     * table. </p>
     */
    inline void SetDefaultRouteTableAssociation(const char* value) { m_defaultRouteTableAssociationHasBeenSet = true; m_defaultRouteTableAssociation.assign(value); }

    /**
     * <p>Turn on or turn off automatic association with the default association route
     * table. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithDefaultRouteTableAssociation(const Aws::String& value) { SetDefaultRouteTableAssociation(value); return *this;}

    /**
     * <p>Turn on or turn off automatic association with the default association route
     * table. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithDefaultRouteTableAssociation(Aws::String&& value) { SetDefaultRouteTableAssociation(std::move(value)); return *this;}

    /**
     * <p>Turn on or turn off automatic association with the default association route
     * table. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithDefaultRouteTableAssociation(const char* value) { SetDefaultRouteTableAssociation(value); return *this;}


    /**
     * <p>The transit gateway Classless Inter-Domain Routing (CIDR) blocks. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTransitGatewayCidrBlocks() const{ return m_transitGatewayCidrBlocks; }

    /**
     * <p>The transit gateway Classless Inter-Domain Routing (CIDR) blocks. </p>
     */
    inline bool TransitGatewayCidrBlocksHasBeenSet() const { return m_transitGatewayCidrBlocksHasBeenSet; }

    /**
     * <p>The transit gateway Classless Inter-Domain Routing (CIDR) blocks. </p>
     */
    inline void SetTransitGatewayCidrBlocks(const Aws::Vector<Aws::String>& value) { m_transitGatewayCidrBlocksHasBeenSet = true; m_transitGatewayCidrBlocks = value; }

    /**
     * <p>The transit gateway Classless Inter-Domain Routing (CIDR) blocks. </p>
     */
    inline void SetTransitGatewayCidrBlocks(Aws::Vector<Aws::String>&& value) { m_transitGatewayCidrBlocksHasBeenSet = true; m_transitGatewayCidrBlocks = std::move(value); }

    /**
     * <p>The transit gateway Classless Inter-Domain Routing (CIDR) blocks. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithTransitGatewayCidrBlocks(const Aws::Vector<Aws::String>& value) { SetTransitGatewayCidrBlocks(value); return *this;}

    /**
     * <p>The transit gateway Classless Inter-Domain Routing (CIDR) blocks. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithTransitGatewayCidrBlocks(Aws::Vector<Aws::String>&& value) { SetTransitGatewayCidrBlocks(std::move(value)); return *this;}

    /**
     * <p>The transit gateway Classless Inter-Domain Routing (CIDR) blocks. </p>
     */
    inline AwsEc2TransitGatewayDetails& AddTransitGatewayCidrBlocks(const Aws::String& value) { m_transitGatewayCidrBlocksHasBeenSet = true; m_transitGatewayCidrBlocks.push_back(value); return *this; }

    /**
     * <p>The transit gateway Classless Inter-Domain Routing (CIDR) blocks. </p>
     */
    inline AwsEc2TransitGatewayDetails& AddTransitGatewayCidrBlocks(Aws::String&& value) { m_transitGatewayCidrBlocksHasBeenSet = true; m_transitGatewayCidrBlocks.push_back(std::move(value)); return *this; }

    /**
     * <p>The transit gateway Classless Inter-Domain Routing (CIDR) blocks. </p>
     */
    inline AwsEc2TransitGatewayDetails& AddTransitGatewayCidrBlocks(const char* value) { m_transitGatewayCidrBlocksHasBeenSet = true; m_transitGatewayCidrBlocks.push_back(value); return *this; }


    /**
     * <p>The ID of the default association route table. </p>
     */
    inline const Aws::String& GetAssociationDefaultRouteTableId() const{ return m_associationDefaultRouteTableId; }

    /**
     * <p>The ID of the default association route table. </p>
     */
    inline bool AssociationDefaultRouteTableIdHasBeenSet() const { return m_associationDefaultRouteTableIdHasBeenSet; }

    /**
     * <p>The ID of the default association route table. </p>
     */
    inline void SetAssociationDefaultRouteTableId(const Aws::String& value) { m_associationDefaultRouteTableIdHasBeenSet = true; m_associationDefaultRouteTableId = value; }

    /**
     * <p>The ID of the default association route table. </p>
     */
    inline void SetAssociationDefaultRouteTableId(Aws::String&& value) { m_associationDefaultRouteTableIdHasBeenSet = true; m_associationDefaultRouteTableId = std::move(value); }

    /**
     * <p>The ID of the default association route table. </p>
     */
    inline void SetAssociationDefaultRouteTableId(const char* value) { m_associationDefaultRouteTableIdHasBeenSet = true; m_associationDefaultRouteTableId.assign(value); }

    /**
     * <p>The ID of the default association route table. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithAssociationDefaultRouteTableId(const Aws::String& value) { SetAssociationDefaultRouteTableId(value); return *this;}

    /**
     * <p>The ID of the default association route table. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithAssociationDefaultRouteTableId(Aws::String&& value) { SetAssociationDefaultRouteTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the default association route table. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithAssociationDefaultRouteTableId(const char* value) { SetAssociationDefaultRouteTableId(value); return *this;}


    /**
     * <p>The ID of the default propagation route table. </p>
     */
    inline const Aws::String& GetPropagationDefaultRouteTableId() const{ return m_propagationDefaultRouteTableId; }

    /**
     * <p>The ID of the default propagation route table. </p>
     */
    inline bool PropagationDefaultRouteTableIdHasBeenSet() const { return m_propagationDefaultRouteTableIdHasBeenSet; }

    /**
     * <p>The ID of the default propagation route table. </p>
     */
    inline void SetPropagationDefaultRouteTableId(const Aws::String& value) { m_propagationDefaultRouteTableIdHasBeenSet = true; m_propagationDefaultRouteTableId = value; }

    /**
     * <p>The ID of the default propagation route table. </p>
     */
    inline void SetPropagationDefaultRouteTableId(Aws::String&& value) { m_propagationDefaultRouteTableIdHasBeenSet = true; m_propagationDefaultRouteTableId = std::move(value); }

    /**
     * <p>The ID of the default propagation route table. </p>
     */
    inline void SetPropagationDefaultRouteTableId(const char* value) { m_propagationDefaultRouteTableIdHasBeenSet = true; m_propagationDefaultRouteTableId.assign(value); }

    /**
     * <p>The ID of the default propagation route table. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithPropagationDefaultRouteTableId(const Aws::String& value) { SetPropagationDefaultRouteTableId(value); return *this;}

    /**
     * <p>The ID of the default propagation route table. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithPropagationDefaultRouteTableId(Aws::String&& value) { SetPropagationDefaultRouteTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the default propagation route table. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithPropagationDefaultRouteTableId(const char* value) { SetPropagationDefaultRouteTableId(value); return *this;}


    /**
     * <p>Turn on or turn off Equal Cost Multipath Protocol (ECMP) support. </p>
     */
    inline const Aws::String& GetVpnEcmpSupport() const{ return m_vpnEcmpSupport; }

    /**
     * <p>Turn on or turn off Equal Cost Multipath Protocol (ECMP) support. </p>
     */
    inline bool VpnEcmpSupportHasBeenSet() const { return m_vpnEcmpSupportHasBeenSet; }

    /**
     * <p>Turn on or turn off Equal Cost Multipath Protocol (ECMP) support. </p>
     */
    inline void SetVpnEcmpSupport(const Aws::String& value) { m_vpnEcmpSupportHasBeenSet = true; m_vpnEcmpSupport = value; }

    /**
     * <p>Turn on or turn off Equal Cost Multipath Protocol (ECMP) support. </p>
     */
    inline void SetVpnEcmpSupport(Aws::String&& value) { m_vpnEcmpSupportHasBeenSet = true; m_vpnEcmpSupport = std::move(value); }

    /**
     * <p>Turn on or turn off Equal Cost Multipath Protocol (ECMP) support. </p>
     */
    inline void SetVpnEcmpSupport(const char* value) { m_vpnEcmpSupportHasBeenSet = true; m_vpnEcmpSupport.assign(value); }

    /**
     * <p>Turn on or turn off Equal Cost Multipath Protocol (ECMP) support. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithVpnEcmpSupport(const Aws::String& value) { SetVpnEcmpSupport(value); return *this;}

    /**
     * <p>Turn on or turn off Equal Cost Multipath Protocol (ECMP) support. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithVpnEcmpSupport(Aws::String&& value) { SetVpnEcmpSupport(std::move(value)); return *this;}

    /**
     * <p>Turn on or turn off Equal Cost Multipath Protocol (ECMP) support. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithVpnEcmpSupport(const char* value) { SetVpnEcmpSupport(value); return *this;}


    /**
     * <p>Turn on or turn off DNS support. </p>
     */
    inline const Aws::String& GetDnsSupport() const{ return m_dnsSupport; }

    /**
     * <p>Turn on or turn off DNS support. </p>
     */
    inline bool DnsSupportHasBeenSet() const { return m_dnsSupportHasBeenSet; }

    /**
     * <p>Turn on or turn off DNS support. </p>
     */
    inline void SetDnsSupport(const Aws::String& value) { m_dnsSupportHasBeenSet = true; m_dnsSupport = value; }

    /**
     * <p>Turn on or turn off DNS support. </p>
     */
    inline void SetDnsSupport(Aws::String&& value) { m_dnsSupportHasBeenSet = true; m_dnsSupport = std::move(value); }

    /**
     * <p>Turn on or turn off DNS support. </p>
     */
    inline void SetDnsSupport(const char* value) { m_dnsSupportHasBeenSet = true; m_dnsSupport.assign(value); }

    /**
     * <p>Turn on or turn off DNS support. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithDnsSupport(const Aws::String& value) { SetDnsSupport(value); return *this;}

    /**
     * <p>Turn on or turn off DNS support. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithDnsSupport(Aws::String&& value) { SetDnsSupport(std::move(value)); return *this;}

    /**
     * <p>Turn on or turn off DNS support. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithDnsSupport(const char* value) { SetDnsSupport(value); return *this;}


    /**
     * <p>Indicates whether multicast is supported on the transit gateway. </p>
     */
    inline const Aws::String& GetMulticastSupport() const{ return m_multicastSupport; }

    /**
     * <p>Indicates whether multicast is supported on the transit gateway. </p>
     */
    inline bool MulticastSupportHasBeenSet() const { return m_multicastSupportHasBeenSet; }

    /**
     * <p>Indicates whether multicast is supported on the transit gateway. </p>
     */
    inline void SetMulticastSupport(const Aws::String& value) { m_multicastSupportHasBeenSet = true; m_multicastSupport = value; }

    /**
     * <p>Indicates whether multicast is supported on the transit gateway. </p>
     */
    inline void SetMulticastSupport(Aws::String&& value) { m_multicastSupportHasBeenSet = true; m_multicastSupport = std::move(value); }

    /**
     * <p>Indicates whether multicast is supported on the transit gateway. </p>
     */
    inline void SetMulticastSupport(const char* value) { m_multicastSupportHasBeenSet = true; m_multicastSupport.assign(value); }

    /**
     * <p>Indicates whether multicast is supported on the transit gateway. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithMulticastSupport(const Aws::String& value) { SetMulticastSupport(value); return *this;}

    /**
     * <p>Indicates whether multicast is supported on the transit gateway. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithMulticastSupport(Aws::String&& value) { SetMulticastSupport(std::move(value)); return *this;}

    /**
     * <p>Indicates whether multicast is supported on the transit gateway. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithMulticastSupport(const char* value) { SetMulticastSupport(value); return *this;}


    /**
     * <p>A private Autonomous System Number (ASN) for the Amazon side of a BGP
     * session. </p>
     */
    inline int GetAmazonSideAsn() const{ return m_amazonSideAsn; }

    /**
     * <p>A private Autonomous System Number (ASN) for the Amazon side of a BGP
     * session. </p>
     */
    inline bool AmazonSideAsnHasBeenSet() const { return m_amazonSideAsnHasBeenSet; }

    /**
     * <p>A private Autonomous System Number (ASN) for the Amazon side of a BGP
     * session. </p>
     */
    inline void SetAmazonSideAsn(int value) { m_amazonSideAsnHasBeenSet = true; m_amazonSideAsn = value; }

    /**
     * <p>A private Autonomous System Number (ASN) for the Amazon side of a BGP
     * session. </p>
     */
    inline AwsEc2TransitGatewayDetails& WithAmazonSideAsn(int value) { SetAmazonSideAsn(value); return *this;}

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

    int m_amazonSideAsn;
    bool m_amazonSideAsnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
