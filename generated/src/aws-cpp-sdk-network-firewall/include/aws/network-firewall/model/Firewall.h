/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/EncryptionConfiguration.h>
#include <aws/network-firewall/model/SubnetMapping.h>
#include <aws/network-firewall/model/Tag.h>
#include <aws/network-firewall/model/EnabledAnalysisType.h>
#include <aws/network-firewall/model/AvailabilityZoneMapping.h>
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
   * <p>A firewall defines the behavior of a firewall, the main VPC where the
   * firewall is used, the Availability Zones where the firewall can be used, and one
   * subnet to use for a firewall endpoint within each of the Availability Zones. The
   * Availability Zones are defined implicitly in the subnet specifications.</p>
   * <p>In addition to the firewall endpoints that you define in this
   * <code>Firewall</code> specification, you can create firewall endpoints in
   * <code>VpcEndpointAssociation</code> resources for any VPC, in any Availability
   * Zone where the firewall is already in use. </p> <p>The status of the firewall,
   * for example whether it's ready to filter network traffic, is provided in the
   * corresponding <a>FirewallStatus</a>. You can retrieve both the firewall and
   * firewall status by calling <a>DescribeFirewall</a>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/Firewall">AWS
   * API Reference</a></p>
   */
  class Firewall
  {
  public:
    AWS_NETWORKFIREWALL_API Firewall() = default;
    AWS_NETWORKFIREWALL_API Firewall(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Firewall& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The descriptive name of the firewall. You can't change the name of a firewall
     * after you create it.</p>
     */
    inline const Aws::String& GetFirewallName() const { return m_firewallName; }
    inline bool FirewallNameHasBeenSet() const { return m_firewallNameHasBeenSet; }
    template<typename FirewallNameT = Aws::String>
    void SetFirewallName(FirewallNameT&& value) { m_firewallNameHasBeenSet = true; m_firewallName = std::forward<FirewallNameT>(value); }
    template<typename FirewallNameT = Aws::String>
    Firewall& WithFirewallName(FirewallNameT&& value) { SetFirewallName(std::forward<FirewallNameT>(value)); return *this;}
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
    Firewall& WithFirewallArn(FirewallArnT&& value) { SetFirewallArn(std::forward<FirewallArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p> <p>The
     * relationship of firewall to firewall policy is many to one. Each firewall
     * requires one firewall policy association, and you can use the same firewall
     * policy for multiple firewalls. </p>
     */
    inline const Aws::String& GetFirewallPolicyArn() const { return m_firewallPolicyArn; }
    inline bool FirewallPolicyArnHasBeenSet() const { return m_firewallPolicyArnHasBeenSet; }
    template<typename FirewallPolicyArnT = Aws::String>
    void SetFirewallPolicyArn(FirewallPolicyArnT&& value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn = std::forward<FirewallPolicyArnT>(value); }
    template<typename FirewallPolicyArnT = Aws::String>
    Firewall& WithFirewallPolicyArn(FirewallPolicyArnT&& value) { SetFirewallPolicyArn(std::forward<FirewallPolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the VPC where the firewall is in use. </p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    Firewall& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary public subnets that Network Firewall is using for the firewall.
     * Network Firewall creates a firewall endpoint in each subnet. Create a subnet
     * mapping for each Availability Zone where you want to use the firewall.</p>
     * <p>These subnets are all defined for a single, primary VPC, and each must belong
     * to a different Availability Zone. Each of these subnets establishes the
     * availability of the firewall in its Availability Zone. </p> <p>In addition to
     * these subnets, you can define other endpoints for the firewall in
     * <code>VpcEndpointAssociation</code> resources. You can define these additional
     * endpoints for any VPC, and for any of the Availability Zones where the firewall
     * resource already has a subnet mapping. VPC endpoint associations give you the
     * ability to protect multiple VPCs using a single firewall, and to define multiple
     * firewall endpoints for a VPC in a single Availability Zone. </p>
     */
    inline const Aws::Vector<SubnetMapping>& GetSubnetMappings() const { return m_subnetMappings; }
    inline bool SubnetMappingsHasBeenSet() const { return m_subnetMappingsHasBeenSet; }
    template<typename SubnetMappingsT = Aws::Vector<SubnetMapping>>
    void SetSubnetMappings(SubnetMappingsT&& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings = std::forward<SubnetMappingsT>(value); }
    template<typename SubnetMappingsT = Aws::Vector<SubnetMapping>>
    Firewall& WithSubnetMappings(SubnetMappingsT&& value) { SetSubnetMappings(std::forward<SubnetMappingsT>(value)); return *this;}
    template<typename SubnetMappingsT = SubnetMapping>
    Firewall& AddSubnetMappings(SubnetMappingsT&& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings.emplace_back(std::forward<SubnetMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag indicating whether it is possible to delete the firewall. A setting of
     * <code>TRUE</code> indicates that the firewall is protected against deletion. Use
     * this setting to protect against accidentally deleting a firewall that is in use.
     * When you create a firewall, the operation initializes this flag to
     * <code>TRUE</code>.</p>
     */
    inline bool GetDeleteProtection() const { return m_deleteProtection; }
    inline bool DeleteProtectionHasBeenSet() const { return m_deleteProtectionHasBeenSet; }
    inline void SetDeleteProtection(bool value) { m_deleteProtectionHasBeenSet = true; m_deleteProtection = value; }
    inline Firewall& WithDeleteProtection(bool value) { SetDeleteProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A setting indicating whether the firewall is protected against changes to the
     * subnet associations. Use this setting to protect against accidentally modifying
     * the subnet associations for a firewall that is in use. When you create a
     * firewall, the operation initializes this setting to <code>TRUE</code>.</p>
     */
    inline bool GetSubnetChangeProtection() const { return m_subnetChangeProtection; }
    inline bool SubnetChangeProtectionHasBeenSet() const { return m_subnetChangeProtectionHasBeenSet; }
    inline void SetSubnetChangeProtection(bool value) { m_subnetChangeProtectionHasBeenSet = true; m_subnetChangeProtection = value; }
    inline Firewall& WithSubnetChangeProtection(bool value) { SetSubnetChangeProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A setting indicating whether the firewall is protected against a change to
     * the firewall policy association. Use this setting to protect against
     * accidentally modifying the firewall policy for a firewall that is in use. When
     * you create a firewall, the operation initializes this setting to
     * <code>TRUE</code>.</p>
     */
    inline bool GetFirewallPolicyChangeProtection() const { return m_firewallPolicyChangeProtection; }
    inline bool FirewallPolicyChangeProtectionHasBeenSet() const { return m_firewallPolicyChangeProtectionHasBeenSet; }
    inline void SetFirewallPolicyChangeProtection(bool value) { m_firewallPolicyChangeProtectionHasBeenSet = true; m_firewallPolicyChangeProtection = value; }
    inline Firewall& WithFirewallPolicyChangeProtection(bool value) { SetFirewallPolicyChangeProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the firewall.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Firewall& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the firewall. </p>
     */
    inline const Aws::String& GetFirewallId() const { return m_firewallId; }
    inline bool FirewallIdHasBeenSet() const { return m_firewallIdHasBeenSet; }
    template<typename FirewallIdT = Aws::String>
    void SetFirewallId(FirewallIdT&& value) { m_firewallIdHasBeenSet = true; m_firewallId = std::forward<FirewallIdT>(value); }
    template<typename FirewallIdT = Aws::String>
    Firewall& WithFirewallId(FirewallIdT&& value) { SetFirewallId(std::forward<FirewallIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Firewall& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Firewall& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A complex type that contains the Amazon Web Services KMS encryption
     * configuration settings for your firewall.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    Firewall& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of <code>VpcEndpointAssociation</code> resources that use this
     * firewall. </p>
     */
    inline int GetNumberOfAssociations() const { return m_numberOfAssociations; }
    inline bool NumberOfAssociationsHasBeenSet() const { return m_numberOfAssociationsHasBeenSet; }
    inline void SetNumberOfAssociations(int value) { m_numberOfAssociationsHasBeenSet = true; m_numberOfAssociations = value; }
    inline Firewall& WithNumberOfAssociations(int value) { SetNumberOfAssociations(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional setting indicating the specific traffic analysis types to enable
     * on the firewall. </p>
     */
    inline const Aws::Vector<EnabledAnalysisType>& GetEnabledAnalysisTypes() const { return m_enabledAnalysisTypes; }
    inline bool EnabledAnalysisTypesHasBeenSet() const { return m_enabledAnalysisTypesHasBeenSet; }
    template<typename EnabledAnalysisTypesT = Aws::Vector<EnabledAnalysisType>>
    void SetEnabledAnalysisTypes(EnabledAnalysisTypesT&& value) { m_enabledAnalysisTypesHasBeenSet = true; m_enabledAnalysisTypes = std::forward<EnabledAnalysisTypesT>(value); }
    template<typename EnabledAnalysisTypesT = Aws::Vector<EnabledAnalysisType>>
    Firewall& WithEnabledAnalysisTypes(EnabledAnalysisTypesT&& value) { SetEnabledAnalysisTypes(std::forward<EnabledAnalysisTypesT>(value)); return *this;}
    inline Firewall& AddEnabledAnalysisTypes(EnabledAnalysisType value) { m_enabledAnalysisTypesHasBeenSet = true; m_enabledAnalysisTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the transit gateway associated with this firewall.
     * This field is only present for transit gateway-attached firewalls.</p>
     */
    inline const Aws::String& GetTransitGatewayId() const { return m_transitGatewayId; }
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }
    template<typename TransitGatewayIdT = Aws::String>
    void SetTransitGatewayId(TransitGatewayIdT&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::forward<TransitGatewayIdT>(value); }
    template<typename TransitGatewayIdT = Aws::String>
    Firewall& WithTransitGatewayId(TransitGatewayIdT&& value) { SetTransitGatewayId(std::forward<TransitGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID that owns the transit gateway. This may be
     * different from the firewall owner's account ID when using a shared transit
     * gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayOwnerAccountId() const { return m_transitGatewayOwnerAccountId; }
    inline bool TransitGatewayOwnerAccountIdHasBeenSet() const { return m_transitGatewayOwnerAccountIdHasBeenSet; }
    template<typename TransitGatewayOwnerAccountIdT = Aws::String>
    void SetTransitGatewayOwnerAccountId(TransitGatewayOwnerAccountIdT&& value) { m_transitGatewayOwnerAccountIdHasBeenSet = true; m_transitGatewayOwnerAccountId = std::forward<TransitGatewayOwnerAccountIdT>(value); }
    template<typename TransitGatewayOwnerAccountIdT = Aws::String>
    Firewall& WithTransitGatewayOwnerAccountId(TransitGatewayOwnerAccountIdT&& value) { SetTransitGatewayOwnerAccountId(std::forward<TransitGatewayOwnerAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zones where the firewall endpoints are created for a transit
     * gateway-attached firewall. Each mapping specifies an Availability Zone where the
     * firewall processes traffic.</p>
     */
    inline const Aws::Vector<AvailabilityZoneMapping>& GetAvailabilityZoneMappings() const { return m_availabilityZoneMappings; }
    inline bool AvailabilityZoneMappingsHasBeenSet() const { return m_availabilityZoneMappingsHasBeenSet; }
    template<typename AvailabilityZoneMappingsT = Aws::Vector<AvailabilityZoneMapping>>
    void SetAvailabilityZoneMappings(AvailabilityZoneMappingsT&& value) { m_availabilityZoneMappingsHasBeenSet = true; m_availabilityZoneMappings = std::forward<AvailabilityZoneMappingsT>(value); }
    template<typename AvailabilityZoneMappingsT = Aws::Vector<AvailabilityZoneMapping>>
    Firewall& WithAvailabilityZoneMappings(AvailabilityZoneMappingsT&& value) { SetAvailabilityZoneMappings(std::forward<AvailabilityZoneMappingsT>(value)); return *this;}
    template<typename AvailabilityZoneMappingsT = AvailabilityZoneMapping>
    Firewall& AddAvailabilityZoneMappings(AvailabilityZoneMappingsT&& value) { m_availabilityZoneMappingsHasBeenSet = true; m_availabilityZoneMappings.emplace_back(std::forward<AvailabilityZoneMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A setting indicating whether the firewall is protected against changes to its
     * Availability Zone configuration. When set to <code>TRUE</code>, you must first
     * disable this protection before adding or removing Availability Zones.</p>
     */
    inline bool GetAvailabilityZoneChangeProtection() const { return m_availabilityZoneChangeProtection; }
    inline bool AvailabilityZoneChangeProtectionHasBeenSet() const { return m_availabilityZoneChangeProtectionHasBeenSet; }
    inline void SetAvailabilityZoneChangeProtection(bool value) { m_availabilityZoneChangeProtectionHasBeenSet = true; m_availabilityZoneChangeProtection = value; }
    inline Firewall& WithAvailabilityZoneChangeProtection(bool value) { SetAvailabilityZoneChangeProtection(value); return *this;}
    ///@}
  private:

    Aws::String m_firewallName;
    bool m_firewallNameHasBeenSet = false;

    Aws::String m_firewallArn;
    bool m_firewallArnHasBeenSet = false;

    Aws::String m_firewallPolicyArn;
    bool m_firewallPolicyArnHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<SubnetMapping> m_subnetMappings;
    bool m_subnetMappingsHasBeenSet = false;

    bool m_deleteProtection{false};
    bool m_deleteProtectionHasBeenSet = false;

    bool m_subnetChangeProtection{false};
    bool m_subnetChangeProtectionHasBeenSet = false;

    bool m_firewallPolicyChangeProtection{false};
    bool m_firewallPolicyChangeProtectionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_firewallId;
    bool m_firewallIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    int m_numberOfAssociations{0};
    bool m_numberOfAssociationsHasBeenSet = false;

    Aws::Vector<EnabledAnalysisType> m_enabledAnalysisTypes;
    bool m_enabledAnalysisTypesHasBeenSet = false;

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet = false;

    Aws::String m_transitGatewayOwnerAccountId;
    bool m_transitGatewayOwnerAccountIdHasBeenSet = false;

    Aws::Vector<AvailabilityZoneMapping> m_availabilityZoneMappings;
    bool m_availabilityZoneMappingsHasBeenSet = false;

    bool m_availabilityZoneChangeProtection{false};
    bool m_availabilityZoneChangeProtectionHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
