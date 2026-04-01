/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

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
 * <p>Code remediation details for a single repository</p><p><h3>See Also:</h3>
 * <a
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
   * <p>Name of the repository</p>
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
   * <p>Link to the code diff for the remediation</p>
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
   * <p>Link to the pull request for the remediation</p>
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
 private:
  Aws::String m_repoName;

  Aws::String m_codeDiffLink;

  Aws::String m_pullRequestLink;
  bool m_repoNameHasBeenSet = false;
  bool m_codeDiffLinkHasBeenSet = false;
  bool m_pullRequestLinkHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
