/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/AdminScopeSelectionInput.h>
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
 * <p>Determines which accounts and organizational units are in an administrator's
 * scope. This is the input form, which uses account and organizational unit
 * IDs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/AdminScopeFilterInput">AWS
 * API Reference</a></p>
 */
class AdminScopeFilterInput {
 public:
  AWS_NETWORKSECURITYMANAGER_API AdminScopeFilterInput() = default;
  AWS_NETWORKSECURITYMANAGER_API AdminScopeFilterInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API AdminScopeFilterInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>All accounts and organizational units are in scope.</p>
   */
  inline const Unit& GetIncludeAll() const { return m_includeAll; }
  inline bool IncludeAllHasBeenSet() const { return m_includeAllHasBeenSet; }
  template <typename IncludeAllT = Unit>
  void SetIncludeAll(IncludeAllT&& value) {
    m_includeAllHasBeenSet = true;
    m_includeAll = std::forward<IncludeAllT>(value);
  }
  template <typename IncludeAllT = Unit>
  AdminScopeFilterInput& WithIncludeAll(IncludeAllT&& value) {
    SetIncludeAll(std::forward<IncludeAllT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Only the specified accounts and organizational units are in the
   * administrator's scope.</p>
   */
  inline const AdminScopeSelectionInput& GetIncludeOnly() const { return m_includeOnly; }
  inline bool IncludeOnlyHasBeenSet() const { return m_includeOnlyHasBeenSet; }
  template <typename IncludeOnlyT = AdminScopeSelectionInput>
  void SetIncludeOnly(IncludeOnlyT&& value) {
    m_includeOnlyHasBeenSet = true;
    m_includeOnly = std::forward<IncludeOnlyT>(value);
  }
  template <typename IncludeOnlyT = AdminScopeSelectionInput>
  AdminScopeFilterInput& WithIncludeOnly(IncludeOnlyT&& value) {
    SetIncludeOnly(std::forward<IncludeOnlyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The accounts and organizational units to exclude from the administrator's
   * scope. All others are in scope.</p>
   */
  inline const AdminScopeSelectionInput& GetExcludeOnly() const { return m_excludeOnly; }
  inline bool ExcludeOnlyHasBeenSet() const { return m_excludeOnlyHasBeenSet; }
  template <typename ExcludeOnlyT = AdminScopeSelectionInput>
  void SetExcludeOnly(ExcludeOnlyT&& value) {
    m_excludeOnlyHasBeenSet = true;
    m_excludeOnly = std::forward<ExcludeOnlyT>(value);
  }
  template <typename ExcludeOnlyT = AdminScopeSelectionInput>
  AdminScopeFilterInput& WithExcludeOnly(ExcludeOnlyT&& value) {
    SetExcludeOnly(std::forward<ExcludeOnlyT>(value));
    return *this;
  }
  ///@}
 private:
  Unit m_includeAll;

  AdminScopeSelectionInput m_includeOnly;

  AdminScopeSelectionInput m_excludeOnly;
  bool m_includeAllHasBeenSet = false;
  bool m_includeOnlyHasBeenSet = false;
  bool m_excludeOnlyHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
