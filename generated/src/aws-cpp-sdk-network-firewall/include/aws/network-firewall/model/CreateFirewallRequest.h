﻿/**
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
    AWS_NETWORKFIREWALL_API CreateFirewallRequest();

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
    inline const Aws::String& GetFirewallName() const{ return m_firewallName; }
    inline bool FirewallNameHasBeenSet() const { return m_firewallNameHasBeenSet; }
    inline void SetFirewallName(const Aws::String& value) { m_firewallNameHasBeenSet = true; m_firewallName = value; }
    inline void SetFirewallName(Aws::String&& value) { m_firewallNameHasBeenSet = true; m_firewallName = std::move(value); }
    inline void SetFirewallName(const char* value) { m_firewallNameHasBeenSet = true; m_firewallName.assign(value); }
    inline CreateFirewallRequest& WithFirewallName(const Aws::String& value) { SetFirewallName(value); return *this;}
    inline CreateFirewallRequest& WithFirewallName(Aws::String&& value) { SetFirewallName(std::move(value)); return *this;}
    inline CreateFirewallRequest& WithFirewallName(const char* value) { SetFirewallName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the <a>FirewallPolicy</a> that you want to
     * use for the firewall.</p>
     */
    inline const Aws::String& GetFirewallPolicyArn() const{ return m_firewallPolicyArn; }
    inline bool FirewallPolicyArnHasBeenSet() const { return m_firewallPolicyArnHasBeenSet; }
    inline void SetFirewallPolicyArn(const Aws::String& value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn = value; }
    inline void SetFirewallPolicyArn(Aws::String&& value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn = std::move(value); }
    inline void SetFirewallPolicyArn(const char* value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn.assign(value); }
    inline CreateFirewallRequest& WithFirewallPolicyArn(const Aws::String& value) { SetFirewallPolicyArn(value); return *this;}
    inline CreateFirewallRequest& WithFirewallPolicyArn(Aws::String&& value) { SetFirewallPolicyArn(std::move(value)); return *this;}
    inline CreateFirewallRequest& WithFirewallPolicyArn(const char* value) { SetFirewallPolicyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the VPC where Network Firewall should create the
     * firewall. </p> <p>You can't change this setting after you create the firewall.
     * </p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline CreateFirewallRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline CreateFirewallRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline CreateFirewallRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public subnets to use for your Network Firewall firewalls. Each subnet
     * must belong to a different Availability Zone in the VPC. Network Firewall
     * creates a firewall endpoint in each subnet. </p>
     */
    inline const Aws::Vector<SubnetMapping>& GetSubnetMappings() const{ return m_subnetMappings; }
    inline bool SubnetMappingsHasBeenSet() const { return m_subnetMappingsHasBeenSet; }
    inline void SetSubnetMappings(const Aws::Vector<SubnetMapping>& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings = value; }
    inline void SetSubnetMappings(Aws::Vector<SubnetMapping>&& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings = std::move(value); }
    inline CreateFirewallRequest& WithSubnetMappings(const Aws::Vector<SubnetMapping>& value) { SetSubnetMappings(value); return *this;}
    inline CreateFirewallRequest& WithSubnetMappings(Aws::Vector<SubnetMapping>&& value) { SetSubnetMappings(std::move(value)); return *this;}
    inline CreateFirewallRequest& AddSubnetMappings(const SubnetMapping& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings.push_back(value); return *this; }
    inline CreateFirewallRequest& AddSubnetMappings(SubnetMapping&& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag indicating whether it is possible to delete the firewall. A setting of
     * <code>TRUE</code> indicates that the firewall is protected against deletion. Use
     * this setting to protect against accidentally deleting a firewall that is in use.
     * When you create a firewall, the operation initializes this flag to
     * <code>TRUE</code>.</p>
     */
    inline bool GetDeleteProtection() const{ return m_deleteProtection; }
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
    inline bool GetSubnetChangeProtection() const{ return m_subnetChangeProtection; }
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
    inline bool GetFirewallPolicyChangeProtection() const{ return m_firewallPolicyChangeProtection; }
    inline bool FirewallPolicyChangeProtectionHasBeenSet() const { return m_firewallPolicyChangeProtectionHasBeenSet; }
    inline void SetFirewallPolicyChangeProtection(bool value) { m_firewallPolicyChangeProtectionHasBeenSet = true; m_firewallPolicyChangeProtection = value; }
    inline CreateFirewallRequest& WithFirewallPolicyChangeProtection(bool value) { SetFirewallPolicyChangeProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the firewall.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateFirewallRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateFirewallRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateFirewallRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateFirewallRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateFirewallRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateFirewallRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateFirewallRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A complex type that contains settings for encryption of your firewall
     * resources.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }
    inline CreateFirewallRequest& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}
    inline CreateFirewallRequest& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional setting indicating the specific traffic analysis types to enable
     * on the firewall. </p>
     */
    inline const Aws::Vector<EnabledAnalysisType>& GetEnabledAnalysisTypes() const{ return m_enabledAnalysisTypes; }
    inline bool EnabledAnalysisTypesHasBeenSet() const { return m_enabledAnalysisTypesHasBeenSet; }
    inline void SetEnabledAnalysisTypes(const Aws::Vector<EnabledAnalysisType>& value) { m_enabledAnalysisTypesHasBeenSet = true; m_enabledAnalysisTypes = value; }
    inline void SetEnabledAnalysisTypes(Aws::Vector<EnabledAnalysisType>&& value) { m_enabledAnalysisTypesHasBeenSet = true; m_enabledAnalysisTypes = std::move(value); }
    inline CreateFirewallRequest& WithEnabledAnalysisTypes(const Aws::Vector<EnabledAnalysisType>& value) { SetEnabledAnalysisTypes(value); return *this;}
    inline CreateFirewallRequest& WithEnabledAnalysisTypes(Aws::Vector<EnabledAnalysisType>&& value) { SetEnabledAnalysisTypes(std::move(value)); return *this;}
    inline CreateFirewallRequest& AddEnabledAnalysisTypes(const EnabledAnalysisType& value) { m_enabledAnalysisTypesHasBeenSet = true; m_enabledAnalysisTypes.push_back(value); return *this; }
    inline CreateFirewallRequest& AddEnabledAnalysisTypes(EnabledAnalysisType&& value) { m_enabledAnalysisTypesHasBeenSet = true; m_enabledAnalysisTypes.push_back(std::move(value)); return *this; }
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

    bool m_deleteProtection;
    bool m_deleteProtectionHasBeenSet = false;

    bool m_subnetChangeProtection;
    bool m_subnetChangeProtectionHasBeenSet = false;

    bool m_firewallPolicyChangeProtection;
    bool m_firewallPolicyChangeProtectionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    Aws::Vector<EnabledAnalysisType> m_enabledAnalysisTypes;
    bool m_enabledAnalysisTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
