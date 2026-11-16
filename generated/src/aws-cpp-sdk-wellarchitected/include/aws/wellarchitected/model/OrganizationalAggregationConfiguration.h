/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/OrganizationalAccountEntry.h>
#include <aws/wellarchitected/model/OrganizationalUnitEntry.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WellArchitected {
namespace Model {

/**
 * <p>The organizational monitoring boundary configuration. Contains organizational
 * unit entries and individual account entries, each with their own region
 * selections, that define the scope for organizational profile
 * analysis.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/OrganizationalAggregationConfiguration">AWS
 * API Reference</a></p>
 */
class OrganizationalAggregationConfiguration {
 public:
  AWS_WELLARCHITECTED_API OrganizationalAggregationConfiguration() = default;
  AWS_WELLARCHITECTED_API OrganizationalAggregationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API OrganizationalAggregationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of organizational unit or root entries that define the organizational
   * scope. Each entry specifies an OU or root ID and the regions to monitor within
   * it.</p>
   */
  inline const Aws::Vector<OrganizationalUnitEntry>& GetOrganizationalUnits() const { return m_organizationalUnits; }
  inline bool OrganizationalUnitsHasBeenSet() const { return m_organizationalUnitsHasBeenSet; }
  template <typename OrganizationalUnitsT = Aws::Vector<OrganizationalUnitEntry>>
  void SetOrganizationalUnits(OrganizationalUnitsT&& value) {
    m_organizationalUnitsHasBeenSet = true;
    m_organizationalUnits = std::forward<OrganizationalUnitsT>(value);
  }
  template <typename OrganizationalUnitsT = Aws::Vector<OrganizationalUnitEntry>>
  OrganizationalAggregationConfiguration& WithOrganizationalUnits(OrganizationalUnitsT&& value) {
    SetOrganizationalUnits(std::forward<OrganizationalUnitsT>(value));
    return *this;
  }
  template <typename OrganizationalUnitsT = OrganizationalUnitEntry>
  OrganizationalAggregationConfiguration& AddOrganizationalUnits(OrganizationalUnitsT&& value) {
    m_organizationalUnitsHasBeenSet = true;
    m_organizationalUnits.emplace_back(std::forward<OrganizationalUnitsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of individual account entries that define additional accounts to
   * include. Each entry specifies an account ID and the regions to monitor within
   * it.</p>
   */
  inline const Aws::Vector<OrganizationalAccountEntry>& GetAccounts() const { return m_accounts; }
  inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }
  template <typename AccountsT = Aws::Vector<OrganizationalAccountEntry>>
  void SetAccounts(AccountsT&& value) {
    m_accountsHasBeenSet = true;
    m_accounts = std::forward<AccountsT>(value);
  }
  template <typename AccountsT = Aws::Vector<OrganizationalAccountEntry>>
  OrganizationalAggregationConfiguration& WithAccounts(AccountsT&& value) {
    SetAccounts(std::forward<AccountsT>(value));
    return *this;
  }
  template <typename AccountsT = OrganizationalAccountEntry>
  OrganizationalAggregationConfiguration& AddAccounts(AccountsT&& value) {
    m_accountsHasBeenSet = true;
    m_accounts.emplace_back(std::forward<AccountsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<OrganizationalUnitEntry> m_organizationalUnits;

  Aws::Vector<OrganizationalAccountEntry> m_accounts;
  bool m_organizationalUnitsHasBeenSet = false;
  bool m_accountsHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
