/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/SubnetConnectivity.h>

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
 * <p>An override that applies a connectivity treatment to the subnets that a scope
 * selects, instead of the policy's
 * <code>defaultSubnetConnectivity</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/SubnetConnectivityOverride">AWS
 * API Reference</a></p>
 */
class SubnetConnectivityOverride {
 public:
  AWS_NETWORKSECURITYMANAGER_API SubnetConnectivityOverride() = default;
  AWS_NETWORKSECURITYMANAGER_API SubnetConnectivityOverride(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API SubnetConnectivityOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The connectivity treatment to apply to the selected subnets. You select both
   * the override value as well as the subnets they apply to. The Network Firewall
   * automated internet firewall applies the override value to the specified subnets,
   * and applies the default connectivity to the rest of the subnets. Valid
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
   * performs NAT.</p> </li> <li> <p> <code>exclude</code> – The Network Firewall
   * automated internet firewall doesn't inspect traffic for the selected subnets.
   * The subnets bypass the firewall entirely, and their traffic passes directly
   * through the internet gateway. You can specify this value only in an override,
   * not as the <code>defaultSubnetConnectivity</code>.</p> </li> </ul>
   */
  inline SubnetConnectivity GetConnectivityType() const { return m_connectivityType; }
  inline bool ConnectivityTypeHasBeenSet() const { return m_connectivityTypeHasBeenSet; }
  inline void SetConnectivityType(SubnetConnectivity value) {
    m_connectivityTypeHasBeenSet = true;
    m_connectivityType = value;
  }
  inline SubnetConnectivityOverride& WithConnectivityType(SubnetConnectivity value) {
    SetConnectivityType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list that contains the Amazon Resource Name (ARN) of the scope that selects
   * the subnets to override. The list must contain exactly one scope ARN. The
   * deployment determines which accounts are in scope, and the referenced scope
   * selects subnets within those accounts.</p>
   */
  inline const Aws::Vector<Aws::String>& GetScopes() const { return m_scopes; }
  inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }
  template <typename ScopesT = Aws::Vector<Aws::String>>
  void SetScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes = std::forward<ScopesT>(value);
  }
  template <typename ScopesT = Aws::Vector<Aws::String>>
  SubnetConnectivityOverride& WithScopes(ScopesT&& value) {
    SetScopes(std::forward<ScopesT>(value));
    return *this;
  }
  template <typename ScopesT = Aws::String>
  SubnetConnectivityOverride& AddScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes.emplace_back(std::forward<ScopesT>(value));
    return *this;
  }
  ///@}
 private:
  SubnetConnectivity m_connectivityType{SubnetConnectivity::NOT_SET};

  Aws::Vector<Aws::String> m_scopes;
  bool m_connectivityTypeHasBeenSet = false;
  bool m_scopesHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
