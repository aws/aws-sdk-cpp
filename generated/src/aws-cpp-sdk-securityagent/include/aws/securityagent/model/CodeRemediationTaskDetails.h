/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/CodeRemediationJobStatus.h>

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
 * <p>Contains details about a code remediation task, including links to the code
 * diff and pull request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/CodeRemediationTaskDetails">AWS
 * API Reference</a></p>
 */
class CodeRemediationTaskDetails {
 public:
  AWS_SECURITYAGENT_API CodeRemediationTaskDetails() = default;
  AWS_SECURITYAGENT_API CodeRemediationTaskDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API CodeRemediationTaskDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of an associated repository where the remediation was applied.</p>
   */
  inline const Aws::String& GetRepoName() const { return m_repoName; }
  inline bool RepoNameHasBeenSet() const { return m_repoNameHasBeenSet; }
  template <typename RepoNameT = Aws::String>
  void SetRepoName(RepoNameT&& value) {
    m_repoNameHasBeenSet = true;
    m_repoName = std::forward<RepoNameT>(value);
  }
  template <typename RepoNameT = Aws::String>
  CodeRemediationTaskDetails& WithRepoName(RepoNameT&& value) {
    SetRepoName(std::forward<RepoNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The link to the code diff for the remediation.</p>
   */
  inline const Aws::String& GetCodeDiffLink() const { return m_codeDiffLink; }
  inline bool CodeDiffLinkHasBeenSet() const { return m_codeDiffLinkHasBeenSet; }
  template <typename CodeDiffLinkT = Aws::String>
  void SetCodeDiffLink(CodeDiffLinkT&& value) {
    m_codeDiffLinkHasBeenSet = true;
    m_codeDiffLink = std::forward<CodeDiffLinkT>(value);
  }
  template <typename CodeDiffLinkT = Aws::String>
  CodeRemediationTaskDetails& WithCodeDiffLink(CodeDiffLinkT&& value) {
    SetCodeDiffLink(std::forward<CodeDiffLinkT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The link to the pull request created for the remediation.</p>
   */
  inline const Aws::String& GetPullRequestLink() const { return m_pullRequestLink; }
  inline bool PullRequestLinkHasBeenSet() const { return m_pullRequestLinkHasBeenSet; }
  template <typename PullRequestLinkT = Aws::String>
  void SetPullRequestLink(PullRequestLinkT&& value) {
    m_pullRequestLinkHasBeenSet = true;
    m_pullRequestLink = std::forward<PullRequestLinkT>(value);
  }
  template <typename PullRequestLinkT = Aws::String>
  CodeRemediationTaskDetails& WithPullRequestLink(PullRequestLinkT&& value) {
    SetPullRequestLink(std::forward<PullRequestLinkT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the code remediation task for the particular
   * repository.</p>
   */
  inline CodeRemediationJobStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(CodeRemediationJobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CodeRemediationTaskDetails& WithStatus(CodeRemediationJobStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A category classifier if a repository's code remediation fails.</p>
   */
  inline const Aws::String& GetStatusCode() const { return m_statusCode; }
  inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
  template <typename StatusCodeT = Aws::String>
  void SetStatusCode(StatusCodeT&& value) {
    m_statusCodeHasBeenSet = true;
    m_statusCode = std::forward<StatusCodeT>(value);
  }
  template <typename StatusCodeT = Aws::String>
  CodeRemediationTaskDetails& WithStatusCode(StatusCodeT&& value) {
    SetStatusCode(std::forward<StatusCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A descriptive reason when a repository's code remediation fails.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  CodeRemediationTaskDetails& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_repoName;

  Aws::String m_codeDiffLink;

  Aws::String m_pullRequestLink;

  CodeRemediationJobStatus m_status{CodeRemediationJobStatus::NOT_SET};

  Aws::String m_statusCode;

  Aws::String m_statusReason;
  bool m_repoNameHasBeenSet = false;
  bool m_codeDiffLinkHasBeenSet = false;
  bool m_pullRequestLinkHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusCodeHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
