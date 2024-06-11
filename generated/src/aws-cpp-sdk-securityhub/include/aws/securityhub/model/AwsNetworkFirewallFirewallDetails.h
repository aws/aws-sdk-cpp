﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsNetworkFirewallFirewallSubnetMappingsDetails.h>
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
   * <p>Details about an Network Firewall firewall.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsNetworkFirewallFirewallDetails">AWS
   * API Reference</a></p>
   */
  class AwsNetworkFirewallFirewallDetails
  {
  public:
    AWS_SECURITYHUB_API AwsNetworkFirewallFirewallDetails();
    AWS_SECURITYHUB_API AwsNetworkFirewallFirewallDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsNetworkFirewallFirewallDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether the firewall is protected from deletion. If set to <code>true</code>,
     * then the firewall cannot be deleted.</p>
     */
    inline bool GetDeleteProtection() const{ return m_deleteProtection; }
    inline bool DeleteProtectionHasBeenSet() const { return m_deleteProtectionHasBeenSet; }
    inline void SetDeleteProtection(bool value) { m_deleteProtectionHasBeenSet = true; m_deleteProtection = value; }
    inline AwsNetworkFirewallFirewallDetails& WithDeleteProtection(bool value) { SetDeleteProtection(value); return *this;}
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
    inline AwsNetworkFirewallFirewallDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AwsNetworkFirewallFirewallDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AwsNetworkFirewallFirewallDetails& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the firewall.</p>
     */
    inline const Aws::String& GetFirewallArn() const{ return m_firewallArn; }
    inline bool FirewallArnHasBeenSet() const { return m_firewallArnHasBeenSet; }
    inline void SetFirewallArn(const Aws::String& value) { m_firewallArnHasBeenSet = true; m_firewallArn = value; }
    inline void SetFirewallArn(Aws::String&& value) { m_firewallArnHasBeenSet = true; m_firewallArn = std::move(value); }
    inline void SetFirewallArn(const char* value) { m_firewallArnHasBeenSet = true; m_firewallArn.assign(value); }
    inline AwsNetworkFirewallFirewallDetails& WithFirewallArn(const Aws::String& value) { SetFirewallArn(value); return *this;}
    inline AwsNetworkFirewallFirewallDetails& WithFirewallArn(Aws::String&& value) { SetFirewallArn(std::move(value)); return *this;}
    inline AwsNetworkFirewallFirewallDetails& WithFirewallArn(const char* value) { SetFirewallArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the firewall.</p>
     */
    inline const Aws::String& GetFirewallId() const{ return m_firewallId; }
    inline bool FirewallIdHasBeenSet() const { return m_firewallIdHasBeenSet; }
    inline void SetFirewallId(const Aws::String& value) { m_firewallIdHasBeenSet = true; m_firewallId = value; }
    inline void SetFirewallId(Aws::String&& value) { m_firewallIdHasBeenSet = true; m_firewallId = std::move(value); }
    inline void SetFirewallId(const char* value) { m_firewallIdHasBeenSet = true; m_firewallId.assign(value); }
    inline AwsNetworkFirewallFirewallDetails& WithFirewallId(const Aws::String& value) { SetFirewallId(value); return *this;}
    inline AwsNetworkFirewallFirewallDetails& WithFirewallId(Aws::String&& value) { SetFirewallId(std::move(value)); return *this;}
    inline AwsNetworkFirewallFirewallDetails& WithFirewallId(const char* value) { SetFirewallId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive name of the firewall.</p>
     */
    inline const Aws::String& GetFirewallName() const{ return m_firewallName; }
    inline bool FirewallNameHasBeenSet() const { return m_firewallNameHasBeenSet; }
    inline void SetFirewallName(const Aws::String& value) { m_firewallNameHasBeenSet = true; m_firewallName = value; }
    inline void SetFirewallName(Aws::String&& value) { m_firewallNameHasBeenSet = true; m_firewallName = std::move(value); }
    inline void SetFirewallName(const char* value) { m_firewallNameHasBeenSet = true; m_firewallName.assign(value); }
    inline AwsNetworkFirewallFirewallDetails& WithFirewallName(const Aws::String& value) { SetFirewallName(value); return *this;}
    inline AwsNetworkFirewallFirewallDetails& WithFirewallName(Aws::String&& value) { SetFirewallName(std::move(value)); return *this;}
    inline AwsNetworkFirewallFirewallDetails& WithFirewallName(const char* value) { SetFirewallName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the firewall policy.</p>
     */
    inline const Aws::String& GetFirewallPolicyArn() const{ return m_firewallPolicyArn; }
    inline bool FirewallPolicyArnHasBeenSet() const { return m_firewallPolicyArnHasBeenSet; }
    inline void SetFirewallPolicyArn(const Aws::String& value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn = value; }
    inline void SetFirewallPolicyArn(Aws::String&& value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn = std::move(value); }
    inline void SetFirewallPolicyArn(const char* value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn.assign(value); }
    inline AwsNetworkFirewallFirewallDetails& WithFirewallPolicyArn(const Aws::String& value) { SetFirewallPolicyArn(value); return *this;}
    inline AwsNetworkFirewallFirewallDetails& WithFirewallPolicyArn(Aws::String&& value) { SetFirewallPolicyArn(std::move(value)); return *this;}
    inline AwsNetworkFirewallFirewallDetails& WithFirewallPolicyArn(const char* value) { SetFirewallPolicyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the firewall is protected from a change to the firewall policy. If
     * set to <code>true</code>, you cannot associate a different policy with the
     * firewall.</p>
     */
    inline bool GetFirewallPolicyChangeProtection() const{ return m_firewallPolicyChangeProtection; }
    inline bool FirewallPolicyChangeProtectionHasBeenSet() const { return m_firewallPolicyChangeProtectionHasBeenSet; }
    inline void SetFirewallPolicyChangeProtection(bool value) { m_firewallPolicyChangeProtectionHasBeenSet = true; m_firewallPolicyChangeProtection = value; }
    inline AwsNetworkFirewallFirewallDetails& WithFirewallPolicyChangeProtection(bool value) { SetFirewallPolicyChangeProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the firewall is protected from a change to the subnet associations.
     * If set to <code>true</code>, you cannot map different subnets to the
     * firewall.</p>
     */
    inline bool GetSubnetChangeProtection() const{ return m_subnetChangeProtection; }
    inline bool SubnetChangeProtectionHasBeenSet() const { return m_subnetChangeProtectionHasBeenSet; }
    inline void SetSubnetChangeProtection(bool value) { m_subnetChangeProtectionHasBeenSet = true; m_subnetChangeProtection = value; }
    inline AwsNetworkFirewallFirewallDetails& WithSubnetChangeProtection(bool value) { SetSubnetChangeProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public subnets that Network Firewall uses for the firewall. Each subnet
     * must belong to a different Availability Zone.</p>
     */
    inline const Aws::Vector<AwsNetworkFirewallFirewallSubnetMappingsDetails>& GetSubnetMappings() const{ return m_subnetMappings; }
    inline bool SubnetMappingsHasBeenSet() const { return m_subnetMappingsHasBeenSet; }
    inline void SetSubnetMappings(const Aws::Vector<AwsNetworkFirewallFirewallSubnetMappingsDetails>& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings = value; }
    inline void SetSubnetMappings(Aws::Vector<AwsNetworkFirewallFirewallSubnetMappingsDetails>&& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings = std::move(value); }
    inline AwsNetworkFirewallFirewallDetails& WithSubnetMappings(const Aws::Vector<AwsNetworkFirewallFirewallSubnetMappingsDetails>& value) { SetSubnetMappings(value); return *this;}
    inline AwsNetworkFirewallFirewallDetails& WithSubnetMappings(Aws::Vector<AwsNetworkFirewallFirewallSubnetMappingsDetails>&& value) { SetSubnetMappings(std::move(value)); return *this;}
    inline AwsNetworkFirewallFirewallDetails& AddSubnetMappings(const AwsNetworkFirewallFirewallSubnetMappingsDetails& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings.push_back(value); return *this; }
    inline AwsNetworkFirewallFirewallDetails& AddSubnetMappings(AwsNetworkFirewallFirewallSubnetMappingsDetails&& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the VPC where the firewall is used.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline AwsNetworkFirewallFirewallDetails& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline AwsNetworkFirewallFirewallDetails& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline AwsNetworkFirewallFirewallDetails& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}
  private:

    bool m_deleteProtection;
    bool m_deleteProtectionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_firewallArn;
    bool m_firewallArnHasBeenSet = false;

    Aws::String m_firewallId;
    bool m_firewallIdHasBeenSet = false;

    Aws::String m_firewallName;
    bool m_firewallNameHasBeenSet = false;

    Aws::String m_firewallPolicyArn;
    bool m_firewallPolicyArnHasBeenSet = false;

    bool m_firewallPolicyChangeProtection;
    bool m_firewallPolicyChangeProtectionHasBeenSet = false;

    bool m_subnetChangeProtection;
    bool m_subnetChangeProtectionHasBeenSet = false;

    Aws::Vector<AwsNetworkFirewallFirewallSubnetMappingsDetails> m_subnetMappings;
    bool m_subnetMappingsHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
