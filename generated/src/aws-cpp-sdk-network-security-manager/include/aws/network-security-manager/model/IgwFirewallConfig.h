/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/DefaultSubnetConnectivity.h>
#include <aws/network-security-manager/model/SubnetConnectivityOverride.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkSecurityManager {
namespace Model {

/**
 * <p>Policy configuration settings for Network Firewall automated internet
 * firewall policies.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/IgwFirewallConfig">AWS
 * API Reference</a></p>
 */
class IgwFirewallConfig {
 public:
  AWS_NETWORKSECURITYMANAGER_API IgwFirewallConfig() = default;
  AWS_NETWORKSECURITYMANAGER_API IgwFirewallConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API IgwFirewallConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The default internet connectivity treatment that AWS Network Security Manager
   * applies to subnets in scope, unless a subnet connectivity override applies.
   * Required for Network Firewall automated internet firewall policies. Valid
   * values:</p> <ul> <li> <p> <code>flexible</code> – Sets the connectivity for each
   * network interface in the subnet based on whether it is associated with a public
   * IP address. A network interface with a public IP address gets bidirectional
   * internet connectivity. A network interface without a public IP address gets
   * outbound-only connectivity. All traffic is inspected against your firewall
   * rules.</p> </li> <li> <p> <code>bidirectional</code> – Provides bidirectional
   * internet connectivity to every network interface that has a public IP
   * association. Any network interface without a public IP cannot communicate with
   * the internet unless a NAT device is explicitly inserted in the path. All inbound
   * and outbound traffic is inspected against your firewall rules.</p> </li> <li>
   * <p> <code>outbound-only</code> – Provides egress-only connectivity for all
   * network interfaces in the subnet. All outbound traffic and inbound responses are
   * inspected against your firewall rules. Unsolicited inbound connections are
   * dropped. For IPv4 traffic, the Network Firewall automated internet firewall
   * performs NAT.</p> </li> </ul>
   */
  inline DefaultSubnetConnectivity GetDefaultSubnetConnectivity() const { return m_defaultSubnetConnectivity; }
  inline bool DefaultSubnetConnectivityHasBeenSet() const { return m_defaultSubnetConnectivityHasBeenSet; }
  inline void SetDefaultSubnetConnectivity(DefaultSubnetConnectivity value) {
    m_defaultSubnetConnectivityHasBeenSet = true;
    m_defaultSubnetConnectivity = value;
  }
  inline IgwFirewallConfig& WithDefaultSubnetConnectivity(DefaultSubnetConnectivity value) {
    SetDefaultSubnetConnectivity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An ordered list of overrides that apply a different connectivity treatment to
   * the subnets that a scope selects. When a subnet matches more than one override,
   * the first matching override in the list applies. You can specify at most one
   * override for each connectivity type.</p>
   */
  inline const Aws::Vector<SubnetConnectivityOverride>& GetSubnetConnectivityOverrides() const { return m_subnetConnectivityOverrides; }
  inline bool SubnetConnectivityOverridesHasBeenSet() const { return m_subnetConnectivityOverridesHasBeenSet; }
  template <typename SubnetConnectivityOverridesT = Aws::Vector<SubnetConnectivityOverride>>
  void SetSubnetConnectivityOverrides(SubnetConnectivityOverridesT&& value) {
    m_subnetConnectivityOverridesHasBeenSet = true;
    m_subnetConnectivityOverrides = std::forward<SubnetConnectivityOverridesT>(value);
  }
  template <typename SubnetConnectivityOverridesT = Aws::Vector<SubnetConnectivityOverride>>
  IgwFirewallConfig& WithSubnetConnectivityOverrides(SubnetConnectivityOverridesT&& value) {
    SetSubnetConnectivityOverrides(std::forward<SubnetConnectivityOverridesT>(value));
    return *this;
  }
  template <typename SubnetConnectivityOverridesT = SubnetConnectivityOverride>
  IgwFirewallConfig& AddSubnetConnectivityOverrides(SubnetConnectivityOverridesT&& value) {
    m_subnetConnectivityOverridesHasBeenSet = true;
    m_subnetConnectivityOverrides.emplace_back(std::forward<SubnetConnectivityOverridesT>(value));
    return *this;
  }
  ///@}
 private:
  DefaultSubnetConnectivity m_defaultSubnetConnectivity{DefaultSubnetConnectivity::NOT_SET};

  Aws::Vector<SubnetConnectivityOverride> m_subnetConnectivityOverrides;
  bool m_defaultSubnetConnectivityHasBeenSet = false;
  bool m_subnetConnectivityOverridesHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
