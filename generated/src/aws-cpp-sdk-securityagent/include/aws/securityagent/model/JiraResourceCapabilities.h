/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

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
 * <p>Capabilities for an integrated Jira project.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/JiraResourceCapabilities">AWS
 * API Reference</a></p>
 */
class JiraResourceCapabilities {
 public:
  AWS_SECURITYAGENT_API JiraResourceCapabilities() = default;
  AWS_SECURITYAGENT_API JiraResourceCapabilities(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API JiraResourceCapabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether to create issues in the integrated jira project.</p>
   */
  inline bool GetCreateIssue() const { return m_createIssue; }
  inline bool CreateIssueHasBeenSet() const { return m_createIssueHasBeenSet; }
  inline void SetCreateIssue(bool value) {
    m_createIssueHasBeenSet = true;
    m_createIssue = value;
  }
  inline JiraResourceCapabilities& WithCreateIssue(bool value) {
    SetCreateIssue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to post comments on issues in the integrated jira project.</p>
   */
  inline bool GetCommentIssue() const { return m_commentIssue; }
  inline bool CommentIssueHasBeenSet() const { return m_commentIssueHasBeenSet; }
  inline void SetCommentIssue(bool value) {
    m_commentIssueHasBeenSet = true;
    m_commentIssue = value;
  }
  inline JiraResourceCapabilities& WithCommentIssue(bool value) {
    SetCommentIssue(value);
    return *this;
  }
  ///@}
 private:
  bool m_createIssue{false};

  bool m_commentIssue{false};
  bool m_createIssueHasBeenSet = false;
  bool m_commentIssueHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
