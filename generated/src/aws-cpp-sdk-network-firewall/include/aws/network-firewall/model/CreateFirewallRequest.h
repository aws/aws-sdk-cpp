/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/AvailabilityZoneMapping.h>
#include <aws/network-firewall/model/EnabledAnalysisType.h>
#include <aws/network-firewall/model/EncryptionConfiguration.h>
#include <aws/network-firewall/model/NatGatewayCreateMapping.h>
#include <aws/network-firewall/model/ProxySettings.h>
#include <aws/network-firewall/model/SubnetMapping.h>
#include <aws/network-firewall/model/Tag.h>
#include <aws/network-firewall/model/TransparentFilteringNatScope.h>
#include <aws/network-firewall/model/VpcEndpoint.h>

#include <utility>

namespace Aws {
namespace NetworkFirewall {
namespace Model {

/**
 */
class CreateFirewallRequest : public NetworkFirewallRequest {
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
  template <typename FirewallNameT = Aws::String>
  void SetFirewallName(FirewallNameT&& value) {
    m_firewallNameHasBeenSet = true;
    m_firewallName = std::forward<FirewallNameT>(value);
  }
  template <typename FirewallNameT = Aws::String>
  CreateFirewallRequest& WithFirewallName(FirewallNameT&& value) {
    SetFirewallName(std::forward<FirewallNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the <a>FirewallPolicy</a> that you want to
   * use for the firewall.</p>
   */
  inline const Aws::String& GetFirewallPolicyArn() const { return m_firewallPolicyArn; }
  inline bool FirewallPolicyArnHasBeenSet() const { return m_firewallPolicyArnHasBeenSet; }
  template <typename FirewallPolicyArnT = Aws::String>
  void SetFirewallPolicyArn(FirewallPolicyArnT&& value) {
    m_firewallPolicyArnHasBeenSet = true;
    m_firewallPolicyArn = std::forward<FirewallPolicyArnT>(value);
  }
  template <typename FirewallPolicyArnT = Aws::String>
  CreateFirewallRequest& WithFirewallPolicyArn(FirewallPolicyArnT&& value) {
    SetFirewallPolicyArn(std::forward<FirewallPolicyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the VPC where Network Firewall should create the
   * firewall. </p> <p>You can't change this setting after you create the firewall.
   * </p>
   */
  inline const Aws::String& GetVpcId() const { return m_vpcId; }
  inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
  template <typename VpcIdT = Aws::String>
  void SetVpcId(VpcIdT&& value) {
    m_vpcIdHasBeenSet = true;
    m_vpcId = std::forward<VpcIdT>(value);
  }
  template <typename VpcIdT = Aws::String>
  CreateFirewallRequest& WithVpcId(VpcIdT&& value) {
    SetVpcId(std::forward<VpcIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The public subnets to use for your Network Firewall firewalls. Each subnet
   * must belong to a different Availability Zone in the VPC. Network Firewall
   * creates a firewall endpoint in each subnet. </p>
   */
  inline const Aws::Vector<SubnetMapping>& GetSubnetMappings() const { return m_subnetMappings; }
  inline bool SubnetMappingsHasBeenSet() const { return m_subnetMappingsHasBeenSet; }
  template <typename SubnetMappingsT = Aws::Vector<SubnetMapping>>
  void SetSubnetMappings(SubnetMappingsT&& value) {
    m_subnetMappingsHasBeenSet = true;
    m_subnetMappings = std::forward<SubnetMappingsT>(value);
  }
  template <typename SubnetMappingsT = Aws::Vector<SubnetMapping>>
  CreateFirewallRequest& WithSubnetMappings(SubnetMappingsT&& value) {
    SetSubnetMappings(std::forward<SubnetMappingsT>(value));
    return *this;
  }
  template <typename SubnetMappingsT = SubnetMapping>
  CreateFirewallRequest& AddSubnetMappings(SubnetMappingsT&& value) {
    m_subnetMappingsHasBeenSet = true;
    m_subnetMappings.emplace_back(std::forward<SubnetMappingsT>(value));
    return *this;
  }
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
  inline void SetDeleteProtection(bool value) {
    m_deleteProtectionHasBeenSet = true;
    m_deleteProtection = value;
  }
  inline CreateFirewallRequest& WithDeleteProtection(bool value) {
    SetDeleteProtection(value);
    return *this;
  }
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
  inline void SetSubnetChangeProtection(bool value) {
    m_subnetChangeProtectionHasBeenSet = true;
    m_subnetChangeProtection = value;
  }
  inline CreateFirewallRequest& WithSubnetChangeProtection(bool value) {
    SetSubnetChangeProtection(value);
    return *this;
  }
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
  inline void SetFirewallPolicyChangeProtection(bool value) {
    m_firewallPolicyChangeProtectionHasBeenSet = true;
    m_firewallPolicyChangeProtection = value;
  }
  inline CreateFirewallRequest& WithFirewallPolicyChangeProtection(bool value) {
    SetFirewallPolicyChangeProtection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the firewall.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateFirewallRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key:value pairs to associate with the resource.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateFirewallRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateFirewallRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A complex type that contains settings for encryption of your firewall
   * resources.</p>
   */
  inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  CreateFirewallRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional setting indicating the specific traffic analysis types to enable
   * on the firewall. </p>
   */
  inline const Aws::Vector<EnabledAnalysisType>& GetEnabledAnalysisTypes() const { return m_enabledAnalysisTypes; }
  inline bool EnabledAnalysisTypesHasBeenSet() const { return m_enabledAnalysisTypesHasBeenSet; }
  template <typename EnabledAnalysisTypesT = Aws::Vector<EnabledAnalysisType>>
  void SetEnabledAnalysisTypes(EnabledAnalysisTypesT&& value) {
    m_enabledAnalysisTypesHasBeenSet = true;
    m_enabledAnalysisTypes = std::forward<EnabledAnalysisTypesT>(value);
  }
  template <typename EnabledAnalysisTypesT = Aws::Vector<EnabledAnalysisType>>
  CreateFirewallRequest& WithEnabledAnalysisTypes(EnabledAnalysisTypesT&& value) {
    SetEnabledAnalysisTypes(std::forward<EnabledAnalysisTypesT>(value));
    return *this;
  }
  inline CreateFirewallRequest& AddEnabledAnalysisTypes(EnabledAnalysisType value) {
    m_enabledAnalysisTypesHasBeenSet = true;
    m_enabledAnalysisTypes.push_back(value);
    return *this;
  }
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
  template <typename TransitGatewayIdT = Aws::String>
  void SetTransitGatewayId(TransitGatewayIdT&& value) {
    m_transitGatewayIdHasBeenSet = true;
    m_transitGatewayId = std::forward<TransitGatewayIdT>(value);
  }
  template <typename TransitGatewayIdT = Aws::String>
  CreateFirewallRequest& WithTransitGatewayId(TransitGatewayIdT&& value) {
    SetTransitGatewayId(std::forward<TransitGatewayIdT>(value));
    return *this;
  }
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
  template <typename AvailabilityZoneMappingsT = Aws::Vector<AvailabilityZoneMapping>>
  void SetAvailabilityZoneMappings(AvailabilityZoneMappingsT&& value) {
    m_availabilityZoneMappingsHasBeenSet = true;
    m_availabilityZoneMappings = std::forward<AvailabilityZoneMappingsT>(value);
  }
  template <typename AvailabilityZoneMappingsT = Aws::Vector<AvailabilityZoneMapping>>
  CreateFirewallRequest& WithAvailabilityZoneMappings(AvailabilityZoneMappingsT&& value) {
    SetAvailabilityZoneMappings(std::forward<AvailabilityZoneMappingsT>(value));
    return *this;
  }
  template <typename AvailabilityZoneMappingsT = AvailabilityZoneMapping>
  CreateFirewallRequest& AddAvailabilityZoneMappings(AvailabilityZoneMappingsT&& value) {
    m_availabilityZoneMappingsHasBeenSet = true;
    m_availabilityZoneMappings.emplace_back(std::forward<AvailabilityZoneMappingsT>(value));
    return *this;
  }
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
  inline void SetAvailabilityZoneChangeProtection(bool value) {
    m_availabilityZoneChangeProtectionHasBeenSet = true;
    m_availabilityZoneChangeProtection = value;
  }
  inline CreateFirewallRequest& WithAvailabilityZoneChangeProtection(bool value) {
    SetAvailabilityZoneChangeProtection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The NAT gateways that Network Firewall creates for a proxy mode firewall, one
   * for each Availability Zone. When you specify this, you create a proxy mode
   * firewall. Destinations see the IP address of the NAT gateway in the client's
   * Availability Zone as the source of the traffic.</p> <p>Specify one mapping for
   * each Availability Zone in <code>VpcEndpoint</code>, and no other Availability
   * Zones. Each NAT gateway subnet must be in the <code>VpcEndpoint</code> VPC and
   * can't be one of the firewall endpoint subnets.</p> <p>You need permission to
   * call the Amazon EC2 <code>CreateNatGateway</code> action.</p> <p>If Network
   * Firewall can't set up an Availability Zone, for example because Amazon EC2
   * rejects the NAT gateway, it removes the Availability Zone from the firewall. It
   * also deletes the NAT gateway that it created there. The Availability Zone's
   * <code>Attachment</code> status is <code>FAILED</code>, and its status message
   * explains why. You can add the Availability Zone again with
   * <code>AssociateSubnets</code>. If no Availability Zone can be set up, the
   * firewall status is <code>FAILED</code>.</p>
   */
  inline const Aws::Vector<NatGatewayCreateMapping>& GetNatGatewayCreateMappings() const { return m_natGatewayCreateMappings; }
  inline bool NatGatewayCreateMappingsHasBeenSet() const { return m_natGatewayCreateMappingsHasBeenSet; }
  template <typename NatGatewayCreateMappingsT = Aws::Vector<NatGatewayCreateMapping>>
  void SetNatGatewayCreateMappings(NatGatewayCreateMappingsT&& value) {
    m_natGatewayCreateMappingsHasBeenSet = true;
    m_natGatewayCreateMappings = std::forward<NatGatewayCreateMappingsT>(value);
  }
  template <typename NatGatewayCreateMappingsT = Aws::Vector<NatGatewayCreateMapping>>
  CreateFirewallRequest& WithNatGatewayCreateMappings(NatGatewayCreateMappingsT&& value) {
    SetNatGatewayCreateMappings(std::forward<NatGatewayCreateMappingsT>(value));
    return *this;
  }
  template <typename NatGatewayCreateMappingsT = NatGatewayCreateMapping>
  CreateFirewallRequest& AddNatGatewayCreateMappings(NatGatewayCreateMappingsT&& value) {
    m_natGatewayCreateMappingsHasBeenSet = true;
    m_natGatewayCreateMappings.emplace_back(std::forward<NatGatewayCreateMappingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The proxy settings for a proxy mode firewall: the ports and protocols on
   * which the firewall's proxy listens for traffic, and optionally your own domain
   * name and certificate. If you don't specify listeners, the firewall listens for
   * HTTP on port 3128 and HTTPS on port 8443.</p> <p>To change the listeners later,
   * use <code>UpdateProxySettings</code>.</p>
   */
  inline const ProxySettings& GetProxySettings() const { return m_proxySettings; }
  inline bool ProxySettingsHasBeenSet() const { return m_proxySettingsHasBeenSet; }
  template <typename ProxySettingsT = ProxySettings>
  void SetProxySettings(ProxySettingsT&& value) {
    m_proxySettingsHasBeenSet = true;
    m_proxySettings = std::forward<ProxySettingsT>(value);
  }
  template <typename ProxySettingsT = ProxySettings>
  CreateFirewallRequest& WithProxySettings(ProxySettingsT&& value) {
    SetProxySettings(std::forward<ProxySettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The VPC and subnets for the endpoints of a proxy mode firewall. Network
   * Firewall creates a firewall endpoint in each subnet that you specify. It also
   * creates the firewall's NAT gateways in this VPC, in the subnets that you specify
   * in <code>NatGatewayCreateMappings</code>.</p> <p>To create a proxy mode
   * firewall, you must specify <code>VpcEndpoint</code> and
   * <code>NatGatewayCreateMappings</code>, and you must not specify the top-level
   * <code>VpcId</code> and <code>SubnetMappings</code>. Specify one subnet for each
   * Availability Zone where you want to use the firewall.</p>
   */
  inline const VpcEndpoint& GetVpcEndpoint() const { return m_vpcEndpoint; }
  inline bool VpcEndpointHasBeenSet() const { return m_vpcEndpointHasBeenSet; }
  template <typename VpcEndpointT = VpcEndpoint>
  void SetVpcEndpoint(VpcEndpointT&& value) {
    m_vpcEndpointHasBeenSet = true;
    m_vpcEndpoint = std::forward<VpcEndpointT>(value);
  }
  template <typename VpcEndpointT = VpcEndpoint>
  CreateFirewallRequest& WithVpcEndpoint(VpcEndpointT&& value) {
    SetVpcEndpoint(std::forward<VpcEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How a proxy mode firewall handles traffic that isn't sent to its proxy
   * listener. If you don't specify a value, the firewall uses <code>NAT_ALL</code>.
   * You can choose from the following values:</p> <ul> <li> <p> <code>NAT_ALL</code>
   * - After inspection, the firewall sends this traffic out through its NAT gateway,
   * which translates the source address.</p> </li> <li> <p> <code>NAT_NONE</code> -
   * After inspection, the firewall returns this traffic to the firewall endpoint
   * without address translation.</p> </li> </ul> <p>You can specify this only for a
   * proxy mode firewall, and you can't change it after you create the firewall.</p>
   */
  inline TransparentFilteringNatScope GetTransparentFilteringNatScope() const { return m_transparentFilteringNatScope; }
  inline bool TransparentFilteringNatScopeHasBeenSet() const { return m_transparentFilteringNatScopeHasBeenSet; }
  inline void SetTransparentFilteringNatScope(TransparentFilteringNatScope value) {
    m_transparentFilteringNatScopeHasBeenSet = true;
    m_transparentFilteringNatScope = value;
  }
  inline CreateFirewallRequest& WithTransparentFilteringNatScope(TransparentFilteringNatScope value) {
    SetTransparentFilteringNatScope(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_firewallName;

  Aws::String m_firewallPolicyArn;

  Aws::String m_vpcId;

  Aws::Vector<SubnetMapping> m_subnetMappings;

  bool m_deleteProtection{false};

  bool m_subnetChangeProtection{false};

  bool m_firewallPolicyChangeProtection{false};

  Aws::String m_description;

  Aws::Vector<Tag> m_tags;

  EncryptionConfiguration m_encryptionConfiguration;

  Aws::Vector<EnabledAnalysisType> m_enabledAnalysisTypes;

  Aws::String m_transitGatewayId;

  Aws::Vector<AvailabilityZoneMapping> m_availabilityZoneMappings;

  bool m_availabilityZoneChangeProtection{false};

  Aws::Vector<NatGatewayCreateMapping> m_natGatewayCreateMappings;

  ProxySettings m_proxySettings;

  VpcEndpoint m_vpcEndpoint;

  TransparentFilteringNatScope m_transparentFilteringNatScope{TransparentFilteringNatScope::NOT_SET};
  bool m_firewallNameHasBeenSet = false;
  bool m_firewallPolicyArnHasBeenSet = false;
  bool m_vpcIdHasBeenSet = false;
  bool m_subnetMappingsHasBeenSet = false;
  bool m_deleteProtectionHasBeenSet = false;
  bool m_subnetChangeProtectionHasBeenSet = false;
  bool m_firewallPolicyChangeProtectionHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_enabledAnalysisTypesHasBeenSet = false;
  bool m_transitGatewayIdHasBeenSet = false;
  bool m_availabilityZoneMappingsHasBeenSet = false;
  bool m_availabilityZoneChangeProtectionHasBeenSet = false;
  bool m_natGatewayCreateMappingsHasBeenSet = false;
  bool m_proxySettingsHasBeenSet = false;
  bool m_vpcEndpointHasBeenSet = false;
  bool m_transparentFilteringNatScopeHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
