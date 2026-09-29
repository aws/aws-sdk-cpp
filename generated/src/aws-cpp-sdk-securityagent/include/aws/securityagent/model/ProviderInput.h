/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/AzureDevOpsIntegrationInput.h>
#include <aws/securityagent/model/BitbucketDataCenterIntegrationInput.h>
#include <aws/securityagent/model/BitbucketIntegrationInput.h>
#include <aws/securityagent/model/ConfluenceIntegrationInput.h>
#include <aws/securityagent/model/GitHubIntegrationInput.h>
#include <aws/securityagent/model/GitLabIntegrationInput.h>

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
 * <p>The provider-specific input for creating an integration. This is a union type
 * that contains provider-specific configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ProviderInput">AWS
 * API Reference</a></p>
 */
class ProviderInput {
 public:
  AWS_SECURITYAGENT_API ProviderInput() = default;
  AWS_SECURITYAGENT_API ProviderInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API ProviderInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The GitHub-specific input for creating an integration.</p>
   */
  inline const GitHubIntegrationInput& GetGithub() const { return m_github; }
  inline bool GithubHasBeenSet() const { return m_githubHasBeenSet; }
  template <typename GithubT = GitHubIntegrationInput>
  void SetGithub(GithubT&& value) {
    m_githubHasBeenSet = true;
    m_github = std::forward<GithubT>(value);
  }
  template <typename GithubT = GitHubIntegrationInput>
  ProviderInput& WithGithub(GithubT&& value) {
    SetGithub(std::forward<GithubT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for a GitLab integration.</p>
   */
  inline const GitLabIntegrationInput& GetGitlab() const { return m_gitlab; }
  inline bool GitlabHasBeenSet() const { return m_gitlabHasBeenSet; }
  template <typename GitlabT = GitLabIntegrationInput>
  void SetGitlab(GitlabT&& value) {
    m_gitlabHasBeenSet = true;
    m_gitlab = std::forward<GitlabT>(value);
  }
  template <typename GitlabT = GitLabIntegrationInput>
  ProviderInput& WithGitlab(GitlabT&& value) {
    SetGitlab(std::forward<GitlabT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for a Bitbucket integration.</p>
   */
  inline const BitbucketIntegrationInput& GetBitbucket() const { return m_bitbucket; }
  inline bool BitbucketHasBeenSet() const { return m_bitbucketHasBeenSet; }
  template <typename BitbucketT = BitbucketIntegrationInput>
  void SetBitbucket(BitbucketT&& value) {
    m_bitbucketHasBeenSet = true;
    m_bitbucket = std::forward<BitbucketT>(value);
  }
  template <typename BitbucketT = BitbucketIntegrationInput>
  ProviderInput& WithBitbucket(BitbucketT&& value) {
    SetBitbucket(std::forward<BitbucketT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for a Confluence integration.</p>
   */
  inline const ConfluenceIntegrationInput& GetConfluence() const { return m_confluence; }
  inline bool ConfluenceHasBeenSet() const { return m_confluenceHasBeenSet; }
  template <typename ConfluenceT = ConfluenceIntegrationInput>
  void SetConfluence(ConfluenceT&& value) {
    m_confluenceHasBeenSet = true;
    m_confluence = std::forward<ConfluenceT>(value);
  }
  template <typename ConfluenceT = ConfluenceIntegrationInput>
  ProviderInput& WithConfluence(ConfluenceT&& value) {
    SetConfluence(std::forward<ConfluenceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Azure DevOps-specific input for creating an integration.</p>
   */
  inline const AzureDevOpsIntegrationInput& GetAzureDevOps() const { return m_azureDevOps; }
  inline bool AzureDevOpsHasBeenSet() const { return m_azureDevOpsHasBeenSet; }
  template <typename AzureDevOpsT = AzureDevOpsIntegrationInput>
  void SetAzureDevOps(AzureDevOpsT&& value) {
    m_azureDevOpsHasBeenSet = true;
    m_azureDevOps = std::forward<AzureDevOpsT>(value);
  }
  template <typename AzureDevOpsT = AzureDevOpsIntegrationInput>
  ProviderInput& WithAzureDevOps(AzureDevOpsT&& value) {
    SetAzureDevOps(std::forward<AzureDevOpsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Bitbucket Data Center-specific input for creating an integration.</p>
   */
  inline const BitbucketDataCenterIntegrationInput& GetBitbucketDataCenter() const { return m_bitbucketDataCenter; }
  inline bool BitbucketDataCenterHasBeenSet() const { return m_bitbucketDataCenterHasBeenSet; }
  template <typename BitbucketDataCenterT = BitbucketDataCenterIntegrationInput>
  void SetBitbucketDataCenter(BitbucketDataCenterT&& value) {
    m_bitbucketDataCenterHasBeenSet = true;
    m_bitbucketDataCenter = std::forward<BitbucketDataCenterT>(value);
  }
  template <typename BitbucketDataCenterT = BitbucketDataCenterIntegrationInput>
  ProviderInput& WithBitbucketDataCenter(BitbucketDataCenterT&& value) {
    SetBitbucketDataCenter(std::forward<BitbucketDataCenterT>(value));
    return *this;
  }
  ///@}
 private:
  GitHubIntegrationInput m_github;

  GitLabIntegrationInput m_gitlab;

  BitbucketIntegrationInput m_bitbucket;

  ConfluenceIntegrationInput m_confluence;

  AzureDevOpsIntegrationInput m_azureDevOps;

  BitbucketDataCenterIntegrationInput m_bitbucketDataCenter;
  bool m_githubHasBeenSet = false;
  bool m_gitlabHasBeenSet = false;
  bool m_bitbucketHasBeenSet = false;
  bool m_confluenceHasBeenSet = false;
  bool m_azureDevOpsHasBeenSet = false;
  bool m_bitbucketDataCenterHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
