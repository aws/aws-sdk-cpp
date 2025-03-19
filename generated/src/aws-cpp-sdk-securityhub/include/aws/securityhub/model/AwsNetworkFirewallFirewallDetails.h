/**
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
    AWS_SECURITYHUB_API AwsNetworkFirewallFirewallDetails() = default;
    AWS_SECURITYHUB_API AwsNetworkFirewallFirewallDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsNetworkFirewallFirewallDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether the firewall is protected from deletion. If set to <code>true</code>,
     * then the firewall cannot be deleted.</p>
     */
    inline bool GetDeleteProtection() const { return m_deleteProtection; }
    inline bool DeleteProtectionHasBeenSet() const { return m_deleteProtectionHasBeenSet; }
    inline void SetDeleteProtection(bool value) { m_deleteProtectionHasBeenSet = true; m_deleteProtection = value; }
    inline AwsNetworkFirewallFirewallDetails& WithDeleteProtection(bool value) { SetDeleteProtection(value); return *this;}
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
    AwsNetworkFirewallFirewallDetails& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the firewall.</p>
     */
    inline const Aws::String& GetFirewallArn() const { return m_firewallArn; }
    inline bool FirewallArnHasBeenSet() const { return m_firewallArnHasBeenSet; }
    template<typename FirewallArnT = Aws::String>
    void SetFirewallArn(FirewallArnT&& value) { m_firewallArnHasBeenSet = true; m_firewallArn = std::forward<FirewallArnT>(value); }
    template<typename FirewallArnT = Aws::String>
    AwsNetworkFirewallFirewallDetails& WithFirewallArn(FirewallArnT&& value) { SetFirewallArn(std::forward<FirewallArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the firewall.</p>
     */
    inline const Aws::String& GetFirewallId() const { return m_firewallId; }
    inline bool FirewallIdHasBeenSet() const { return m_firewallIdHasBeenSet; }
    template<typename FirewallIdT = Aws::String>
    void SetFirewallId(FirewallIdT&& value) { m_firewallIdHasBeenSet = true; m_firewallId = std::forward<FirewallIdT>(value); }
    template<typename FirewallIdT = Aws::String>
    AwsNetworkFirewallFirewallDetails& WithFirewallId(FirewallIdT&& value) { SetFirewallId(std::forward<FirewallIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive name of the firewall.</p>
     */
    inline const Aws::String& GetFirewallName() const { return m_firewallName; }
    inline bool FirewallNameHasBeenSet() const { return m_firewallNameHasBeenSet; }
    template<typename FirewallNameT = Aws::String>
    void SetFirewallName(FirewallNameT&& value) { m_firewallNameHasBeenSet = true; m_firewallName = std::forward<FirewallNameT>(value); }
    template<typename FirewallNameT = Aws::String>
    AwsNetworkFirewallFirewallDetails& WithFirewallName(FirewallNameT&& value) { SetFirewallName(std::forward<FirewallNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the firewall policy.</p>
     */
    inline const Aws::String& GetFirewallPolicyArn() const { return m_firewallPolicyArn; }
    inline bool FirewallPolicyArnHasBeenSet() const { return m_firewallPolicyArnHasBeenSet; }
    template<typename FirewallPolicyArnT = Aws::String>
    void SetFirewallPolicyArn(FirewallPolicyArnT&& value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn = std::forward<FirewallPolicyArnT>(value); }
    template<typename FirewallPolicyArnT = Aws::String>
    AwsNetworkFirewallFirewallDetails& WithFirewallPolicyArn(FirewallPolicyArnT&& value) { SetFirewallPolicyArn(std::forward<FirewallPolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the firewall is protected from a change to the firewall policy. If
     * set to <code>true</code>, you cannot associate a different policy with the
     * firewall.</p>
     */
    inline bool GetFirewallPolicyChangeProtection() const { return m_firewallPolicyChangeProtection; }
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
    inline bool GetSubnetChangeProtection() const { return m_subnetChangeProtection; }
    inline bool SubnetChangeProtectionHasBeenSet() const { return m_subnetChangeProtectionHasBeenSet; }
    inline void SetSubnetChangeProtection(bool value) { m_subnetChangeProtectionHasBeenSet = true; m_subnetChangeProtection = value; }
    inline AwsNetworkFirewallFirewallDetails& WithSubnetChangeProtection(bool value) { SetSubnetChangeProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public subnets that Network Firewall uses for the firewall. Each subnet
     * must belong to a different Availability Zone.</p>
     */
    inline const Aws::Vector<AwsNetworkFirewallFirewallSubnetMappingsDetails>& GetSubnetMappings() const { return m_subnetMappings; }
    inline bool SubnetMappingsHasBeenSet() const { return m_subnetMappingsHasBeenSet; }
    template<typename SubnetMappingsT = Aws::Vector<AwsNetworkFirewallFirewallSubnetMappingsDetails>>
    void SetSubnetMappings(SubnetMappingsT&& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings = std::forward<SubnetMappingsT>(value); }
    template<typename SubnetMappingsT = Aws::Vector<AwsNetworkFirewallFirewallSubnetMappingsDetails>>
    AwsNetworkFirewallFirewallDetails& WithSubnetMappings(SubnetMappingsT&& value) { SetSubnetMappings(std::forward<SubnetMappingsT>(value)); return *this;}
    template<typename SubnetMappingsT = AwsNetworkFirewallFirewallSubnetMappingsDetails>
    AwsNetworkFirewallFirewallDetails& AddSubnetMappings(SubnetMappingsT&& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings.emplace_back(std::forward<SubnetMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the VPC where the firewall is used.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    AwsNetworkFirewallFirewallDetails& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}
  private:

    bool m_deleteProtection{false};
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

    bool m_firewallPolicyChangeProtection{false};
    bool m_firewallPolicyChangeProtectionHasBeenSet = false;

    bool m_subnetChangeProtection{false};
    bool m_subnetChangeProtectionHasBeenSet = false;

    Aws::Vector<AwsNetworkFirewallFirewallSubnetMappingsDetails> m_subnetMappings;
    bool m_subnetMappingsHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
