/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/TriggerFilterGroup.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>The capabilities enabled for a GitHub resource integration.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/GitHubResourceCapabilities">AWS
 * API Reference</a></p>
 */
class GitHubResourceCapabilities {
 public:
  AWS_SECURITYAGENT_API GitHubResourceCapabilities() = default;
  AWS_SECURITYAGENT_API GitHubResourceCapabilities(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API GitHubResourceCapabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The filter groups that control which pull request events start an automatic
   * code review when <code>leaveComments</code> is enabled. A review starts when any
   * group matches. If you omit this, a review starts on
   * <code>PULL_REQUEST_READY_FOR_REVIEW</code> events.</p>
   */
  inline const Aws::Vector<TriggerFilterGroup>& GetTriggerFilterGroups() const { return m_triggerFilterGroups; }
  inline bool TriggerFilterGroupsHasBeenSet() const { return m_triggerFilterGroupsHasBeenSet; }
  template <typename TriggerFilterGroupsT = Aws::Vector<TriggerFilterGroup>>
  void SetTriggerFilterGroups(TriggerFilterGroupsT&& value) {
    m_triggerFilterGroupsHasBeenSet = true;
    m_triggerFilterGroups = std::forward<TriggerFilterGroupsT>(value);
  }
  template <typename TriggerFilterGroupsT = Aws::Vector<TriggerFilterGroup>>
  GitHubResourceCapabilities& WithTriggerFilterGroups(TriggerFilterGroupsT&& value) {
    SetTriggerFilterGroups(std::forward<TriggerFilterGroupsT>(value));
    return *this;
  }
  template <typename TriggerFilterGroupsT = TriggerFilterGroup>
  GitHubResourceCapabilities& AddTriggerFilterGroups(TriggerFilterGroupsT&& value) {
    m_triggerFilterGroupsHasBeenSet = true;
    m_triggerFilterGroups.emplace_back(std::forward<TriggerFilterGroupsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the integration can leave comments on pull requests.</p>
   */
  inline bool GetLeaveComments() const { return m_leaveComments; }
  inline bool LeaveCommentsHasBeenSet() const { return m_leaveCommentsHasBeenSet; }
  inline void SetLeaveComments(bool value) {
    m_leaveCommentsHasBeenSet = true;
    m_leaveComments = value;
  }
  inline GitHubResourceCapabilities& WithLeaveComments(bool value) {
    SetLeaveComments(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the integration can create code remediation pull
   * requests.</p>
   */
  inline bool GetRemediateCode() const { return m_remediateCode; }
  inline bool RemediateCodeHasBeenSet() const { return m_remediateCodeHasBeenSet; }
  inline void SetRemediateCode(bool value) {
    m_remediateCodeHasBeenSet = true;
    m_remediateCode = value;
  }
  inline GitHubResourceCapabilities& WithRemediateCode(bool value) {
    SetRemediateCode(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<TriggerFilterGroup> m_triggerFilterGroups;

  bool m_leaveComments{false};

  bool m_remediateCode{false};
  bool m_triggerFilterGroupsHasBeenSet = false;
  bool m_leaveCommentsHasBeenSet = false;
  bool m_remediateCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
