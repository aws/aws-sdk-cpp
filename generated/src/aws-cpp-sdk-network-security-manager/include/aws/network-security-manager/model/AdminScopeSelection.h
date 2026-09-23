/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/AccountReference.h>
#include <aws/network-security-manager/model/OrganizationalUnitReference.h>

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
 * <p>A selection of accounts and organizational units. This is the reference form,
 * which includes display metadata.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/AdminScopeSelection">AWS
 * API Reference</a></p>
 */
class AdminScopeSelection {
 public:
  AWS_NETWORKSECURITYMANAGER_API AdminScopeSelection() = default;
  AWS_NETWORKSECURITYMANAGER_API AdminScopeSelection(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API AdminScopeSelection& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The AWS accounts in the selection.</p>
   */
  inline const Aws::Vector<AccountReference>& GetAccounts() const { return m_accounts; }
  inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }
  template <typename AccountsT = Aws::Vector<AccountReference>>
  void SetAccounts(AccountsT&& value) {
    m_accountsHasBeenSet = true;
    m_accounts = std::forward<AccountsT>(value);
  }
  template <typename AccountsT = Aws::Vector<AccountReference>>
  AdminScopeSelection& WithAccounts(AccountsT&& value) {
    SetAccounts(std::forward<AccountsT>(value));
    return *this;
  }
  template <typename AccountsT = AccountReference>
  AdminScopeSelection& AddAccounts(AccountsT&& value) {
    m_accountsHasBeenSet = true;
    m_accounts.emplace_back(std::forward<AccountsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Organizations organizational units (OUs) in the selection.</p>
   */
  inline const Aws::Vector<OrganizationalUnitReference>& GetOrganizationalUnits() const { return m_organizationalUnits; }
  inline bool OrganizationalUnitsHasBeenSet() const { return m_organizationalUnitsHasBeenSet; }
  template <typename OrganizationalUnitsT = Aws::Vector<OrganizationalUnitReference>>
  void SetOrganizationalUnits(OrganizationalUnitsT&& value) {
    m_organizationalUnitsHasBeenSet = true;
    m_organizationalUnits = std::forward<OrganizationalUnitsT>(value);
  }
  template <typename OrganizationalUnitsT = Aws::Vector<OrganizationalUnitReference>>
  AdminScopeSelection& WithOrganizationalUnits(OrganizationalUnitsT&& value) {
    SetOrganizationalUnits(std::forward<OrganizationalUnitsT>(value));
    return *this;
  }
  template <typename OrganizationalUnitsT = OrganizationalUnitReference>
  AdminScopeSelection& AddOrganizationalUnits(OrganizationalUnitsT&& value) {
    m_organizationalUnitsHasBeenSet = true;
    m_organizationalUnits.emplace_back(std::forward<OrganizationalUnitsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AccountReference> m_accounts;

  Aws::Vector<OrganizationalUnitReference> m_organizationalUnits;
  bool m_accountsHasBeenSet = false;
  bool m_organizationalUnitsHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
