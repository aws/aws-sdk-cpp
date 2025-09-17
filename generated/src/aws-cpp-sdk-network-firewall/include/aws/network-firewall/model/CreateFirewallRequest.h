/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   */
  class CreateFirewallRequest : public NetworkFirewallRequest
  {
  public:
    AWS_NETWORKFIREWALL_API CreateFirewallRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFirewall"; }

    AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

    AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    CreateFirewallRequest& WithFirewallName(FirewallNameT&& value) { SetFirewallName(std::forward<FirewallNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the <a>FirewallPolicy</a> that you want to
     * use for the firewall.</p>
     */
    inline const Aws::String& GetFirewallPolicyArn() const { return m_firewallPolicyArn; }
    inline bool FirewallPolicyArnHasBeenSet() const { return m_firewallPolicyArnHasBeenSet; }
    template<typename FirewallPolicyArnT = Aws::String>
    void SetFirewallPolicyArn(FirewallPolicyArnT&& value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn = std::forward<FirewallPolicyArnT>(value); }
    template<typename FirewallPolicyArnT = Aws::String>
    CreateFirewallRequest& WithFirewallPolicyArn(FirewallPolicyArnT&& value) { SetFirewallPolicyArn(std::forward<FirewallPolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the VPC where Network Firewall should create the
     * firewall. </p> <p>You can't change this setting after you create the firewall.
     * </p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    CreateFirewallRequest& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public subnets to use for your Network Firewall firewalls. Each subnet
     * must belong to a different Availability Zone in the VPC. Network Firewall
     * creates a firewall endpoint in each subnet. </p>
     */
    inline const Aws::Vector<SubnetMapping>& GetSubnetMappings() const { return m_subnetMappings; }
    inline bool SubnetMappingsHasBeenSet() const { return m_subnetMappingsHasBeenSet; }
    template<typename SubnetMappingsT = Aws::Vector<SubnetMapping>>
    void SetSubnetMappings(SubnetMappingsT&& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings = std::forward<SubnetMappingsT>(value); }
    template<typename SubnetMappingsT = Aws::Vector<SubnetMapping>>
    CreateFirewallRequest& WithSubnetMappings(SubnetMappingsT&& value) { SetSubnetMappings(std::forward<SubnetMappingsT>(value)); return *this;}
    template<typename SubnetMappingsT = SubnetMapping>
    CreateFirewallRequest& AddSubnetMappings(SubnetMappingsT&& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings.emplace_back(std::forward<SubnetMappingsT>(value)); return *this; }
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
    inline CreateFirewallRequest& WithDeleteProtection(bool value) { SetDeleteProtection(value); return *this;}
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
    inline CreateFirewallRequest& WithSubnetChangeProtection(bool value) { SetSubnetChangeProtection(value); return *this;}
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
    inline CreateFirewallRequest& WithFirewallPolicyChangeProtection(bool value) { SetFirewallPolicyChangeProtection(value); return *this;}
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
    CreateFirewallRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    CreateFirewallRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateFirewallRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A complex type that contains settings for encryption of your firewall
     * resources.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    CreateFirewallRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
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
    CreateFirewallRequest& WithEnabledAnalysisTypes(EnabledAnalysisTypesT&& value) { SetEnabledAnalysisTypes(std::forward<EnabledAnalysisTypesT>(value)); return *this;}
    inline CreateFirewallRequest& AddEnabledAnalysisTypes(EnabledAnalysisType value) { m_enabledAnalysisTypesHasBeenSet = true; m_enabledAnalysisTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Required when creating a transit gateway-attached firewall. The unique
     * identifier of the transit gateway to attach to this firewall. You can provide
     * either a transit gateway from your account or one that has been shared with you
     * through Resource Access Manager.</p>  <p>After creating the firewall,
     * you cannot change the transit gateway association. To use a different transit
     * gateway, you must create a new firewall.</p>  <p>For information
     * about creating firewalls, see <a>CreateFirewall</a>. For specific guidance about
     * transit gateway-attached firewalls, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/tgw-firewall-considerations.html">Considerations
     * for transit gateway-attached firewalls</a> in the <i>Network Firewall Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetTransitGatewayId() const { return m_transitGatewayId; }
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }
    template<typename TransitGatewayIdT = Aws::String>
    void SetTransitGatewayId(TransitGatewayIdT&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::forward<TransitGatewayIdT>(value); }
    template<typename TransitGatewayIdT = Aws::String>
    CreateFirewallRequest& WithTransitGatewayId(TransitGatewayIdT&& value) { SetTransitGatewayId(std::forward<TransitGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required. The Availability Zones where you want to create firewall endpoints
     * for a transit gateway-attached firewall. You must specify at least one
     * Availability Zone. Consider enabling the firewall in every Availability Zone
     * where you have workloads to maintain Availability Zone isolation.</p> <p>You can
     * modify Availability Zones later using <a>AssociateAvailabilityZones</a> or
     * <a>DisassociateAvailabilityZones</a>, but this may briefly disrupt traffic. The
     * <code>AvailabilityZoneChangeProtection</code> setting controls whether you can
     * make these modifications.</p>
     */
    inline const Aws::Vector<AvailabilityZoneMapping>& GetAvailabilityZoneMappings() const { return m_availabilityZoneMappings; }
    inline bool AvailabilityZoneMappingsHasBeenSet() const { return m_availabilityZoneMappingsHasBeenSet; }
    template<typename AvailabilityZoneMappingsT = Aws::Vector<AvailabilityZoneMapping>>
    void SetAvailabilityZoneMappings(AvailabilityZoneMappingsT&& value) { m_availabilityZoneMappingsHasBeenSet = true; m_availabilityZoneMappings = std::forward<AvailabilityZoneMappingsT>(value); }
    template<typename AvailabilityZoneMappingsT = Aws::Vector<AvailabilityZoneMapping>>
    CreateFirewallRequest& WithAvailabilityZoneMappings(AvailabilityZoneMappingsT&& value) { SetAvailabilityZoneMappings(std::forward<AvailabilityZoneMappingsT>(value)); return *this;}
    template<typename AvailabilityZoneMappingsT = AvailabilityZoneMapping>
    CreateFirewallRequest& AddAvailabilityZoneMappings(AvailabilityZoneMappingsT&& value) { m_availabilityZoneMappingsHasBeenSet = true; m_availabilityZoneMappings.emplace_back(std::forward<AvailabilityZoneMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional. A setting indicating whether the firewall is protected against
     * changes to its Availability Zone configuration. When set to <code>TRUE</code>,
     * you cannot add or remove Availability Zones without first disabling this
     * protection using <a>UpdateAvailabilityZoneChangeProtection</a>.</p> <p>Default
     * value: <code>FALSE</code> </p>
     */
    inline bool GetAvailabilityZoneChangeProtection() const { return m_availabilityZoneChangeProtection; }
    inline bool AvailabilityZoneChangeProtectionHasBeenSet() const { return m_availabilityZoneChangeProtectionHasBeenSet; }
    inline void SetAvailabilityZoneChangeProtection(bool value) { m_availabilityZoneChangeProtectionHasBeenSet = true; m_availabilityZoneChangeProtection = value; }
    inline CreateFirewallRequest& WithAvailabilityZoneChangeProtection(bool value) { SetAvailabilityZoneChangeProtection(value); return *this;}
    ///@}
  private:

    Aws::String m_firewallName;
    bool m_firewallNameHasBeenSet = false;

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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    Aws::Vector<EnabledAnalysisType> m_enabledAnalysisTypes;
    bool m_enabledAnalysisTypesHasBeenSet = false;

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet = false;

    Aws::Vector<AvailabilityZoneMapping> m_availabilityZoneMappings;
    bool m_availabilityZoneMappingsHasBeenSet = false;

    bool m_availabilityZoneChangeProtection{false};
    bool m_availabilityZoneChangeProtectionHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
