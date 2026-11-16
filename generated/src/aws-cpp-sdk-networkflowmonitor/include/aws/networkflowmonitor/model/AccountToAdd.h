/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/model/OrgMembershipStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkFlowMonitor {
namespace Model {

/**
 * <p>An account that you can add to the monitoring scope for a monitor, so that
 * Network Flow Monitor can resolve the network paths for traffic to and from
 * resources in the account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/AccountToAdd">AWS
 * API Reference</a></p>
 */
class AccountToAdd {
 public:
  AWS_NETWORKFLOWMONITOR_API AccountToAdd() = default;
  AWS_NETWORKFLOWMONITOR_API AccountToAdd(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFLOWMONITOR_API AccountToAdd& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFLOWMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the account that you can add to the monitoring scope.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  AccountToAdd& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region of the traffic that Network Flow Monitor
   * identified for the account.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  AccountToAdd& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the account is a member of the same organization as the account that
   * owns the monitor. The membership status can be one of the following</p> <ul>
   * <li> <p> <code>IN_ORG</code>: The account is a member of the same
   * organization.</p> </li> <li> <p> <code>NOT_IN_ORG</code>: The account isn't a
   * member of the same organization.</p> </li> <li> <p> <code>UNKNOWN</code>:
   * Network Flow Monitor can't determine the organization membership of the
   * account.</p> </li> </ul>
   */
  inline OrgMembershipStatus GetMembership() const { return m_membership; }
  inline bool MembershipHasBeenSet() const { return m_membershipHasBeenSet; }
  inline void SetMembership(OrgMembershipStatus value) {
    m_membershipHasBeenSet = true;
    m_membership = value;
  }
  inline AccountToAdd& WithMembership(OrgMembershipStatus value) {
    SetMembership(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  Aws::String m_region;

  OrgMembershipStatus m_membership{OrgMembershipStatus::NOT_SET};
  bool m_accountIdHasBeenSet = false;
  bool m_regionHasBeenSet = false;
  bool m_membershipHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
