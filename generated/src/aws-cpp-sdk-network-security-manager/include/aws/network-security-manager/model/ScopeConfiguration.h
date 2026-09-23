/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/AccountFilter.h>
#include <aws/network-security-manager/model/ResourceScope.h>
#include <aws/network-security-manager/model/ScopeResourceType.h>

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
 * <p>Defines which accounts and resources are in scope.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/ScopeConfiguration">AWS
 * API Reference</a></p>
 */
class ScopeConfiguration {
 public:
  AWS_NETWORKSECURITYMANAGER_API ScopeConfiguration() = default;
  AWS_NETWORKSECURITYMANAGER_API ScopeConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API ScopeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The account filter that determines which accounts are in scope. When set,
   * exactly one of <code>includeAll</code>, <code>include</code>, or
   * <code>exclude</code> is set.</p> <p>Organization administrators must include an
   * account filter in every scope configuration. Single-account administrators must
   * omit it: a scope without an account filter applies only to the administrator's
   * own account. The presence of an account filter is fixed when the scope is
   * created: an update can't add an account filter to a scope that was created
   * without one, or remove the account filter from a scope that was created with
   * one.</p>
   */
  inline const AccountFilter& GetAccountFilter() const { return m_accountFilter; }
  inline bool AccountFilterHasBeenSet() const { return m_accountFilterHasBeenSet; }
  template <typename AccountFilterT = AccountFilter>
  void SetAccountFilter(AccountFilterT&& value) {
    m_accountFilterHasBeenSet = true;
    m_accountFilter = std::forward<AccountFilterT>(value);
  }
  template <typename AccountFilterT = AccountFilter>
  ScopeConfiguration& WithAccountFilter(AccountFilterT&& value) {
    SetAccountFilter(std::forward<AccountFilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource-level scoping configuration, keyed by resource type, that
   * defines which resources within the selected accounts are in scope.</p>
   */
  inline const Aws::Map<ScopeResourceType, ResourceScope>& GetResourceScopes() const { return m_resourceScopes; }
  inline bool ResourceScopesHasBeenSet() const { return m_resourceScopesHasBeenSet; }
  template <typename ResourceScopesT = Aws::Map<ScopeResourceType, ResourceScope>>
  void SetResourceScopes(ResourceScopesT&& value) {
    m_resourceScopesHasBeenSet = true;
    m_resourceScopes = std::forward<ResourceScopesT>(value);
  }
  template <typename ResourceScopesT = Aws::Map<ScopeResourceType, ResourceScope>>
  ScopeConfiguration& WithResourceScopes(ResourceScopesT&& value) {
    SetResourceScopes(std::forward<ResourceScopesT>(value));
    return *this;
  }
  inline ScopeConfiguration& AddResourceScopes(ScopeResourceType key, ResourceScope value) {
    m_resourceScopesHasBeenSet = true;
    m_resourceScopes.emplace(key, value);
    return *this;
  }
  ///@}
 private:
  AccountFilter m_accountFilter;

  Aws::Map<ScopeResourceType, ResourceScope> m_resourceScopes;
  bool m_accountFilterHasBeenSet = false;
  bool m_resourceScopesHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
