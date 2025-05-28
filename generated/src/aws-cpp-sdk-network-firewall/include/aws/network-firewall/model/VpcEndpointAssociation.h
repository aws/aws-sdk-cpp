/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/SubnetMapping.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/Tag.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>A VPC endpoint association defines a single subnet to use for a firewall
   * endpoint for a <code>Firewall</code>. You can define VPC endpoint associations
   * only in the Availability Zones that already have a subnet mapping defined in the
   * <code>Firewall</code> resource. </p>  <p>You can retrieve the list of
   * Availability Zones that are available for use by calling
   * <code>DescribeFirewallMetadata</code>.</p>  <p>To manage firewall
   * endpoints, first, in the <code>Firewall</code> specification, you specify a
   * single VPC and one subnet for each of the Availability Zones where you want to
   * use the firewall. Then you can define additional endpoints as VPC endpoint
   * associations. </p> <p>You can use VPC endpoint associations to expand the
   * protections of the firewall as follows: </p> <ul> <li> <p> <b>Protect multiple
   * VPCs with a single firewall</b> - You can use the firewall to protect other
   * VPCs, either in your account or in accounts where the firewall is shared. You
   * can only specify Availability Zones that already have a firewall endpoint
   * defined in the <code>Firewall</code> subnet mappings.</p> </li> <li> <p>
   * <b>Define multiple firewall endpoints for a VPC in an Availability Zone</b> -
   * You can create additional firewall endpoints for the VPC that you have defined
   * in the firewall, in any Availability Zone that already has an endpoint defined
   * in the <code>Firewall</code> subnet mappings. You can create multiple VPC
   * endpoint associations for any other VPC where you use the firewall.</p> </li>
   * </ul> <p>You can use Resource Access Manager to share a <code>Firewall</code>
   * that you own with other accounts, which gives them the ability to use the
   * firewall to create VPC endpoint associations. For information about sharing a
   * firewall, see <code>PutResourcePolicy</code> in this guide and see <a
   * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/sharing.html">Sharing
   * Network Firewall resources</a> in the <i>Network Firewall Developer
   * Guide</i>.</p> <p>The status of the VPC endpoint association, which indicates
   * whether it's ready to filter network traffic, is provided in the corresponding
   * <a>VpcEndpointAssociationStatus</a>. You can retrieve both the association and
   * its status by calling <a>DescribeVpcEndpointAssociation</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/VpcEndpointAssociation">AWS
   * API Reference</a></p>
   */
  class VpcEndpointAssociation
  {
  public:
    AWS_NETWORKFIREWALL_API VpcEndpointAssociation() = default;
    AWS_NETWORKFIREWALL_API VpcEndpointAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API VpcEndpointAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the VPC endpoint association. </p>
     */
    inline const Aws::String& GetVpcEndpointAssociationId() const { return m_vpcEndpointAssociationId; }
    inline bool VpcEndpointAssociationIdHasBeenSet() const { return m_vpcEndpointAssociationIdHasBeenSet; }
    template<typename VpcEndpointAssociationIdT = Aws::String>
    void SetVpcEndpointAssociationId(VpcEndpointAssociationIdT&& value) { m_vpcEndpointAssociationIdHasBeenSet = true; m_vpcEndpointAssociationId = std::forward<VpcEndpointAssociationIdT>(value); }
    template<typename VpcEndpointAssociationIdT = Aws::String>
    VpcEndpointAssociation& WithVpcEndpointAssociationId(VpcEndpointAssociationIdT&& value) { SetVpcEndpointAssociationId(std::forward<VpcEndpointAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a VPC endpoint association.</p>
     */
    inline const Aws::String& GetVpcEndpointAssociationArn() const { return m_vpcEndpointAssociationArn; }
    inline bool VpcEndpointAssociationArnHasBeenSet() const { return m_vpcEndpointAssociationArnHasBeenSet; }
    template<typename VpcEndpointAssociationArnT = Aws::String>
    void SetVpcEndpointAssociationArn(VpcEndpointAssociationArnT&& value) { m_vpcEndpointAssociationArnHasBeenSet = true; m_vpcEndpointAssociationArn = std::forward<VpcEndpointAssociationArnT>(value); }
    template<typename VpcEndpointAssociationArnT = Aws::String>
    VpcEndpointAssociation& WithVpcEndpointAssociationArn(VpcEndpointAssociationArnT&& value) { SetVpcEndpointAssociationArn(std::forward<VpcEndpointAssociationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline const Aws::String& GetFirewallArn() const { return m_firewallArn; }
    inline bool FirewallArnHasBeenSet() const { return m_firewallArnHasBeenSet; }
    template<typename FirewallArnT = Aws::String>
    void SetFirewallArn(FirewallArnT&& value) { m_firewallArnHasBeenSet = true; m_firewallArn = std::forward<FirewallArnT>(value); }
    template<typename FirewallArnT = Aws::String>
    VpcEndpointAssociation& WithFirewallArn(FirewallArnT&& value) { SetFirewallArn(std::forward<FirewallArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the VPC for the endpoint association. </p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    VpcEndpointAssociation& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SubnetMapping& GetSubnetMapping() const { return m_subnetMapping; }
    inline bool SubnetMappingHasBeenSet() const { return m_subnetMappingHasBeenSet; }
    template<typename SubnetMappingT = SubnetMapping>
    void SetSubnetMapping(SubnetMappingT&& value) { m_subnetMappingHasBeenSet = true; m_subnetMapping = std::forward<SubnetMappingT>(value); }
    template<typename SubnetMappingT = SubnetMapping>
    VpcEndpointAssociation& WithSubnetMapping(SubnetMappingT&& value) { SetSubnetMapping(std::forward<SubnetMappingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the VPC endpoint association. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    VpcEndpointAssociation& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    VpcEndpointAssociation& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    VpcEndpointAssociation& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_vpcEndpointAssociationId;
    bool m_vpcEndpointAssociationIdHasBeenSet = false;

    Aws::String m_vpcEndpointAssociationArn;
    bool m_vpcEndpointAssociationArnHasBeenSet = false;

    Aws::String m_firewallArn;
    bool m_firewallArnHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    SubnetMapping m_subnetMapping;
    bool m_subnetMappingHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
