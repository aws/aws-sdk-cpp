/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/NotVisibleMarker.h>
#include <aws/network-security-manager/model/PolicyFirewallType.h>
#include <aws/network-security-manager/model/RemediationIssueDetails.h>

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
 * <p>Remediation issue details for a resource, or a marker indicating that the
 * details are not visible. Exactly one member is set.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/RemediationIssuesView">AWS
 * API Reference</a></p>
 */
class RemediationIssuesView {
 public:
  AWS_NETWORKSECURITYMANAGER_API RemediationIssuesView() = default;
  AWS_NETWORKSECURITYMANAGER_API RemediationIssuesView(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API RemediationIssuesView& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The remediation issues, keyed by firewall type.</p>
   */
  inline const Aws::Map<PolicyFirewallType, RemediationIssueDetails>& GetIssues() const { return m_issues; }
  inline bool IssuesHasBeenSet() const { return m_issuesHasBeenSet; }
  template <typename IssuesT = Aws::Map<PolicyFirewallType, RemediationIssueDetails>>
  void SetIssues(IssuesT&& value) {
    m_issuesHasBeenSet = true;
    m_issues = std::forward<IssuesT>(value);
  }
  template <typename IssuesT = Aws::Map<PolicyFirewallType, RemediationIssueDetails>>
  RemediationIssuesView& WithIssues(IssuesT&& value) {
    SetIssues(std::forward<IssuesT>(value));
    return *this;
  }
  inline RemediationIssuesView& AddIssues(PolicyFirewallType key, RemediationIssueDetails value) {
    m_issuesHasBeenSet = true;
    m_issues.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates that the details are not visible because of cross-account
   * restrictions.</p>
   */
  inline const NotVisibleMarker& GetNotVisible() const { return m_notVisible; }
  inline bool NotVisibleHasBeenSet() const { return m_notVisibleHasBeenSet; }
  template <typename NotVisibleT = NotVisibleMarker>
  void SetNotVisible(NotVisibleT&& value) {
    m_notVisibleHasBeenSet = true;
    m_notVisible = std::forward<NotVisibleT>(value);
  }
  template <typename NotVisibleT = NotVisibleMarker>
  RemediationIssuesView& WithNotVisible(NotVisibleT&& value) {
    SetNotVisible(std::forward<NotVisibleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<PolicyFirewallType, RemediationIssueDetails> m_issues;

  NotVisibleMarker m_notVisible;
  bool m_issuesHasBeenSet = false;
  bool m_notVisibleHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
