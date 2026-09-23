/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/AdminAccountStatus.h>
#include <aws/network-security-manager/model/AdminScope.h>

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
 * <p>The details of an AWS Network Security Manager administrator
 * account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/AdminAccountDetails">AWS
 * API Reference</a></p>
 */
class AdminAccountDetails {
 public:
  AWS_NETWORKSECURITYMANAGER_API AdminAccountDetails() = default;
  AWS_NETWORKSECURITYMANAGER_API AdminAccountDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API AdminAccountDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The AWS account ID of the administrator account.</p>
   */
  inline const Aws::String& GetAdminAccount() const { return m_adminAccount; }
  inline bool AdminAccountHasBeenSet() const { return m_adminAccountHasBeenSet; }
  template <typename AdminAccountT = Aws::String>
  void SetAdminAccount(AdminAccountT&& value) {
    m_adminAccountHasBeenSet = true;
    m_adminAccount = std::forward<AdminAccountT>(value);
  }
  template <typename AdminAccountT = Aws::String>
  AdminAccountDetails& WithAdminAccount(AdminAccountT&& value) {
    SetAdminAccount(std::forward<AdminAccountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The priority assigned to the administrator account.</p>
   */
  inline int GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(int value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline AdminAccountDetails& WithPriority(int value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The administrative scope, which defines the accounts, organizational units,
   * and firewall types that the administrator can manage.</p>
   */
  inline const AdminScope& GetAdminScope() const { return m_adminScope; }
  inline bool AdminScopeHasBeenSet() const { return m_adminScopeHasBeenSet; }
  template <typename AdminScopeT = AdminScope>
  void SetAdminScope(AdminScopeT&& value) {
    m_adminScopeHasBeenSet = true;
    m_adminScope = std::forward<AdminScopeT>(value);
  }
  template <typename AdminScopeT = AdminScope>
  AdminAccountDetails& WithAdminScope(AdminScopeT&& value) {
    SetAdminScope(std::forward<AdminScopeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the administrator account, either <code>ONBOARDED</code> or
   * <code>OFFBOARDED</code>.</p>
   */
  inline AdminAccountStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AdminAccountStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AdminAccountDetails& WithStatus(AdminAccountStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_adminAccount;

  int m_priority{0};

  AdminScope m_adminScope;

  AdminAccountStatus m_status{AdminAccountStatus::NOT_SET};
  bool m_adminAccountHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_adminScopeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
