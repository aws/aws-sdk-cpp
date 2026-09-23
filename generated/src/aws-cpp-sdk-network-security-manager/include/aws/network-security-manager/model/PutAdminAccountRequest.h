/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManagerRequest.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/AdminScopeInput.h>

#include <utility>

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

/**
 */
class PutAdminAccountRequest : public NetworkSecurityManagerRequest {
 public:
  AWS_NETWORKSECURITYMANAGER_API PutAdminAccountRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutAdminAccount"; }

  AWS_NETWORKSECURITYMANAGER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The AWS account ID to set as the AWS Network Security Manager administrator
   * account.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  PutAdminAccountRequest& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The priority to assign to the administrator account.</p>
   */
  inline int GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(int value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline PutAdminAccountRequest& WithPriority(int value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scope of accounts, organizational units, and firewall types that the
   * administrator can manage.</p>
   */
  inline const AdminScopeInput& GetAdminScope() const { return m_adminScope; }
  inline bool AdminScopeHasBeenSet() const { return m_adminScopeHasBeenSet; }
  template <typename AdminScopeT = AdminScopeInput>
  void SetAdminScope(AdminScopeT&& value) {
    m_adminScopeHasBeenSet = true;
    m_adminScope = std::forward<AdminScopeT>(value);
  }
  template <typename AdminScopeT = AdminScopeInput>
  PutAdminAccountRequest& WithAdminScope(AdminScopeT&& value) {
    SetAdminScope(std::forward<AdminScopeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  int m_priority{0};

  AdminScopeInput m_adminScope;
  bool m_accountIdHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_adminScopeHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
