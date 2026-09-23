/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>

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
 * <p>Details about a remediation issue for a firewall type.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/RemediationIssueDetails">AWS
 * API Reference</a></p>
 */
class RemediationIssueDetails {
 public:
  AWS_NETWORKSECURITYMANAGER_API RemediationIssueDetails() = default;
  AWS_NETWORKSECURITYMANAGER_API RemediationIssueDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API RemediationIssueDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of remediation issue.</p>
   */
  inline const Aws::String& GetIssueType() const { return m_issueType; }
  inline bool IssueTypeHasBeenSet() const { return m_issueTypeHasBeenSet; }
  template <typename IssueTypeT = Aws::String>
  void SetIssueType(IssueTypeT&& value) {
    m_issueTypeHasBeenSet = true;
    m_issueType = std::forward<IssueTypeT>(value);
  }
  template <typename IssueTypeT = Aws::String>
  RemediationIssueDetails& WithIssueType(IssueTypeT&& value) {
    SetIssueType(std::forward<IssueTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable description of the remediation issue.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  RemediationIssueDetails& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A recommended action for resolving the remediation issue.</p>
   */
  inline const Aws::String& GetCorrectiveAction() const { return m_correctiveAction; }
  inline bool CorrectiveActionHasBeenSet() const { return m_correctiveActionHasBeenSet; }
  template <typename CorrectiveActionT = Aws::String>
  void SetCorrectiveAction(CorrectiveActionT&& value) {
    m_correctiveActionHasBeenSet = true;
    m_correctiveAction = std::forward<CorrectiveActionT>(value);
  }
  template <typename CorrectiveActionT = Aws::String>
  RemediationIssueDetails& WithCorrectiveAction(CorrectiveActionT&& value) {
    SetCorrectiveAction(std::forward<CorrectiveActionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_issueType;

  Aws::String m_message;

  Aws::String m_correctiveAction;
  bool m_issueTypeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
  bool m_correctiveActionHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
