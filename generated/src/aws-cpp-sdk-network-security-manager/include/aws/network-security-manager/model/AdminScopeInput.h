/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/AdminFirewallTypeScope.h>
#include <aws/network-security-manager/model/AdminScopeFilterInput.h>

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
 * <p>The administrative scope configuration provided on input, using account and
 * organizational unit IDs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/AdminScopeInput">AWS
 * API Reference</a></p>
 */
class AdminScopeInput {
 public:
  AWS_NETWORKSECURITYMANAGER_API AdminScopeInput() = default;
  AWS_NETWORKSECURITYMANAGER_API AdminScopeInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API AdminScopeInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The filter that determines which accounts and organizational units are in the
   * administrator's scope.</p>
   */
  inline const AdminScopeFilterInput& GetScopeFilter() const { return m_scopeFilter; }
  inline bool ScopeFilterHasBeenSet() const { return m_scopeFilterHasBeenSet; }
  template <typename ScopeFilterT = AdminScopeFilterInput>
  void SetScopeFilter(ScopeFilterT&& value) {
    m_scopeFilterHasBeenSet = true;
    m_scopeFilter = std::forward<ScopeFilterT>(value);
  }
  template <typename ScopeFilterT = AdminScopeFilterInput>
  AdminScopeInput& WithScopeFilter(ScopeFilterT&& value) {
    SetScopeFilter(std::forward<ScopeFilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The firewall types that the administrator can create and manage.</p>
   */
  inline const AdminFirewallTypeScope& GetFirewallTypeScope() const { return m_firewallTypeScope; }
  inline bool FirewallTypeScopeHasBeenSet() const { return m_firewallTypeScopeHasBeenSet; }
  template <typename FirewallTypeScopeT = AdminFirewallTypeScope>
  void SetFirewallTypeScope(FirewallTypeScopeT&& value) {
    m_firewallTypeScopeHasBeenSet = true;
    m_firewallTypeScope = std::forward<FirewallTypeScopeT>(value);
  }
  template <typename FirewallTypeScopeT = AdminFirewallTypeScope>
  AdminScopeInput& WithFirewallTypeScope(FirewallTypeScopeT&& value) {
    SetFirewallTypeScope(std::forward<FirewallTypeScopeT>(value));
    return *this;
  }
  ///@}
 private:
  AdminScopeFilterInput m_scopeFilter;

  AdminFirewallTypeScope m_firewallTypeScope;
  bool m_scopeFilterHasBeenSet = false;
  bool m_firewallTypeScopeHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
