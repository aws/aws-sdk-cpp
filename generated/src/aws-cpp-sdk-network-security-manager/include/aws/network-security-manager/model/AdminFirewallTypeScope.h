/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/PolicyFirewallType.h>

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
 * <p>Defines the firewall types that an administrator can create and
 * manage.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/AdminFirewallTypeScope">AWS
 * API Reference</a></p>
 */
class AdminFirewallTypeScope {
 public:
  AWS_NETWORKSECURITYMANAGER_API AdminFirewallTypeScope() = default;
  AWS_NETWORKSECURITYMANAGER_API AdminFirewallTypeScope(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API AdminFirewallTypeScope& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether the administrator can manage all firewall types, except for
   * third-party firewall types.</p>
   */
  inline bool GetAllFirewallTypesEnabled() const { return m_allFirewallTypesEnabled; }
  inline bool AllFirewallTypesEnabledHasBeenSet() const { return m_allFirewallTypesEnabledHasBeenSet; }
  inline void SetAllFirewallTypesEnabled(bool value) {
    m_allFirewallTypesEnabledHasBeenSet = true;
    m_allFirewallTypesEnabled = value;
  }
  inline AdminFirewallTypeScope& WithAllFirewallTypesEnabled(bool value) {
    SetAllFirewallTypesEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of firewall types that the administrator can manage.</p>
   */
  inline const Aws::Vector<PolicyFirewallType>& GetFirewallTypes() const { return m_firewallTypes; }
  inline bool FirewallTypesHasBeenSet() const { return m_firewallTypesHasBeenSet; }
  template <typename FirewallTypesT = Aws::Vector<PolicyFirewallType>>
  void SetFirewallTypes(FirewallTypesT&& value) {
    m_firewallTypesHasBeenSet = true;
    m_firewallTypes = std::forward<FirewallTypesT>(value);
  }
  template <typename FirewallTypesT = Aws::Vector<PolicyFirewallType>>
  AdminFirewallTypeScope& WithFirewallTypes(FirewallTypesT&& value) {
    SetFirewallTypes(std::forward<FirewallTypesT>(value));
    return *this;
  }
  inline AdminFirewallTypeScope& AddFirewallTypes(PolicyFirewallType value) {
    m_firewallTypesHasBeenSet = true;
    m_firewallTypes.push_back(value);
    return *this;
  }
  ///@}
 private:
  bool m_allFirewallTypesEnabled{false};

  Aws::Vector<PolicyFirewallType> m_firewallTypes;
  bool m_allFirewallTypesEnabledHasBeenSet = false;
  bool m_firewallTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
