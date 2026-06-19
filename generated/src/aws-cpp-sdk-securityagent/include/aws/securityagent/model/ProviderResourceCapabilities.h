/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/BitbucketResourceCapabilities.h>
#include <aws/securityagent/model/ConfluenceResourceCapabilities.h>
#include <aws/securityagent/model/GitHubResourceCapabilities.h>
#include <aws/securityagent/model/GitLabResourceCapabilities.h>

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
 * <p>The capabilities for an integrated resource from a third-party provider. This
 * is a union type that contains provider-specific capabilities.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ProviderResourceCapabilities">AWS
 * API Reference</a></p>
 */
class ProviderResourceCapabilities {
 public:
  AWS_SECURITYAGENT_API ProviderResourceCapabilities() = default;
  AWS_SECURITYAGENT_API ProviderResourceCapabilities(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API ProviderResourceCapabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The GitHub-specific resource capabilities.</p>
   */
  inline const GitHubResourceCapabilities& GetGithub() const { return m_github; }
  inline bool GithubHasBeenSet() const { return m_githubHasBeenSet; }
  template <typename GithubT = GitHubResourceCapabilities>
  void SetGithub(GithubT&& value) {
    m_githubHasBeenSet = true;
    m_github = std::forward<GithubT>(value);
  }
  template <typename GithubT = GitHubResourceCapabilities>
  ProviderResourceCapabilities& WithGithub(GithubT&& value) {
    SetGithub(std::forward<GithubT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const GitLabResourceCapabilities& GetGitlab() const { return m_gitlab; }
  inline bool GitlabHasBeenSet() const { return m_gitlabHasBeenSet; }
  template <typename GitlabT = GitLabResourceCapabilities>
  void SetGitlab(GitlabT&& value) {
    m_gitlabHasBeenSet = true;
    m_gitlab = std::forward<GitlabT>(value);
  }
  template <typename GitlabT = GitLabResourceCapabilities>
  ProviderResourceCapabilities& WithGitlab(GitlabT&& value) {
    SetGitlab(std::forward<GitlabT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const BitbucketResourceCapabilities& GetBitbucket() const { return m_bitbucket; }
  inline bool BitbucketHasBeenSet() const { return m_bitbucketHasBeenSet; }
  template <typename BitbucketT = BitbucketResourceCapabilities>
  void SetBitbucket(BitbucketT&& value) {
    m_bitbucketHasBeenSet = true;
    m_bitbucket = std::forward<BitbucketT>(value);
  }
  template <typename BitbucketT = BitbucketResourceCapabilities>
  ProviderResourceCapabilities& WithBitbucket(BitbucketT&& value) {
    SetBitbucket(std::forward<BitbucketT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ConfluenceResourceCapabilities& GetConfluence() const { return m_confluence; }
  inline bool ConfluenceHasBeenSet() const { return m_confluenceHasBeenSet; }
  template <typename ConfluenceT = ConfluenceResourceCapabilities>
  void SetConfluence(ConfluenceT&& value) {
    m_confluenceHasBeenSet = true;
    m_confluence = std::forward<ConfluenceT>(value);
  }
  template <typename ConfluenceT = ConfluenceResourceCapabilities>
  ProviderResourceCapabilities& WithConfluence(ConfluenceT&& value) {
    SetConfluence(std::forward<ConfluenceT>(value));
    return *this;
  }
  ///@}
 private:
  GitHubResourceCapabilities m_github;

  GitLabResourceCapabilities m_gitlab;

  BitbucketResourceCapabilities m_bitbucket;

  ConfluenceResourceCapabilities m_confluence;
  bool m_githubHasBeenSet = false;
  bool m_gitlabHasBeenSet = false;
  bool m_bitbucketHasBeenSet = false;
  bool m_confluenceHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
