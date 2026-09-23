/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/AccountSet.h>
#include <aws/network-security-manager/model/Unit.h>

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
 * <p>Determines which accounts are in scope. Exactly one of
 * <code>includeAll</code>, <code>include</code>, or <code>exclude</code> is
 * set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/AccountFilter">AWS
 * API Reference</a></p>
 */
class AccountFilter {
 public:
  AWS_NETWORKSECURITYMANAGER_API AccountFilter() = default;
  AWS_NETWORKSECURITYMANAGER_API AccountFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API AccountFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Includes all accounts. No account filtering is applied.</p>
   */
  inline const Unit& GetIncludeAll() const { return m_includeAll; }
  inline bool IncludeAllHasBeenSet() const { return m_includeAllHasBeenSet; }
  template <typename IncludeAllT = Unit>
  void SetIncludeAll(IncludeAllT&& value) {
    m_includeAllHasBeenSet = true;
    m_includeAll = std::forward<IncludeAllT>(value);
  }
  template <typename IncludeAllT = Unit>
  AccountFilter& WithIncludeAll(IncludeAllT&& value) {
    SetIncludeAll(std::forward<IncludeAllT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Includes only the specified accounts and organizational units.</p>
   */
  inline const AccountSet& GetInclude() const { return m_include; }
  inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }
  template <typename IncludeT = AccountSet>
  void SetInclude(IncludeT&& value) {
    m_includeHasBeenSet = true;
    m_include = std::forward<IncludeT>(value);
  }
  template <typename IncludeT = AccountSet>
  AccountFilter& WithInclude(IncludeT&& value) {
    SetInclude(std::forward<IncludeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Excludes the specified accounts and organizational units. All others are in
   * scope.</p>
   */
  inline const AccountSet& GetExclude() const { return m_exclude; }
  inline bool ExcludeHasBeenSet() const { return m_excludeHasBeenSet; }
  template <typename ExcludeT = AccountSet>
  void SetExclude(ExcludeT&& value) {
    m_excludeHasBeenSet = true;
    m_exclude = std::forward<ExcludeT>(value);
  }
  template <typename ExcludeT = AccountSet>
  AccountFilter& WithExclude(ExcludeT&& value) {
    SetExclude(std::forward<ExcludeT>(value));
    return *this;
  }
  ///@}
 private:
  Unit m_includeAll;

  AccountSet m_include;

  AccountSet m_exclude;
  bool m_includeAllHasBeenSet = false;
  bool m_includeHasBeenSet = false;
  bool m_excludeHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
