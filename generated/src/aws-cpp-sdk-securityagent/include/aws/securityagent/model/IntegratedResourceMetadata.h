/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/BitbucketRepositoryMetadata.h>
#include <aws/securityagent/model/ConfluenceDocumentMetadata.h>
#include <aws/securityagent/model/GitHubRepositoryMetadata.h>
#include <aws/securityagent/model/GitLabRepositoryMetadata.h>

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
 * <p>Contains metadata about an integrated resource. This is a union type that
 * contains provider-specific metadata.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/IntegratedResourceMetadata">AWS
 * API Reference</a></p>
 */
class IntegratedResourceMetadata {
 public:
  AWS_SECURITYAGENT_API IntegratedResourceMetadata() = default;
  AWS_SECURITYAGENT_API IntegratedResourceMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API IntegratedResourceMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The GitHub repository metadata.</p>
   */
  inline const GitHubRepositoryMetadata& GetGithubRepository() const { return m_githubRepository; }
  inline bool GithubRepositoryHasBeenSet() const { return m_githubRepositoryHasBeenSet; }
  template <typename GithubRepositoryT = GitHubRepositoryMetadata>
  void SetGithubRepository(GithubRepositoryT&& value) {
    m_githubRepositoryHasBeenSet = true;
    m_githubRepository = std::forward<GithubRepositoryT>(value);
  }
  template <typename GithubRepositoryT = GitHubRepositoryMetadata>
  IntegratedResourceMetadata& WithGithubRepository(GithubRepositoryT&& value) {
    SetGithubRepository(std::forward<GithubRepositoryT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const GitLabRepositoryMetadata& GetGitlabRepository() const { return m_gitlabRepository; }
  inline bool GitlabRepositoryHasBeenSet() const { return m_gitlabRepositoryHasBeenSet; }
  template <typename GitlabRepositoryT = GitLabRepositoryMetadata>
  void SetGitlabRepository(GitlabRepositoryT&& value) {
    m_gitlabRepositoryHasBeenSet = true;
    m_gitlabRepository = std::forward<GitlabRepositoryT>(value);
  }
  template <typename GitlabRepositoryT = GitLabRepositoryMetadata>
  IntegratedResourceMetadata& WithGitlabRepository(GitlabRepositoryT&& value) {
    SetGitlabRepository(std::forward<GitlabRepositoryT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const BitbucketRepositoryMetadata& GetBitbucketRepository() const { return m_bitbucketRepository; }
  inline bool BitbucketRepositoryHasBeenSet() const { return m_bitbucketRepositoryHasBeenSet; }
  template <typename BitbucketRepositoryT = BitbucketRepositoryMetadata>
  void SetBitbucketRepository(BitbucketRepositoryT&& value) {
    m_bitbucketRepositoryHasBeenSet = true;
    m_bitbucketRepository = std::forward<BitbucketRepositoryT>(value);
  }
  template <typename BitbucketRepositoryT = BitbucketRepositoryMetadata>
  IntegratedResourceMetadata& WithBitbucketRepository(BitbucketRepositoryT&& value) {
    SetBitbucketRepository(std::forward<BitbucketRepositoryT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ConfluenceDocumentMetadata& GetConfluenceDocument() const { return m_confluenceDocument; }
  inline bool ConfluenceDocumentHasBeenSet() const { return m_confluenceDocumentHasBeenSet; }
  template <typename ConfluenceDocumentT = ConfluenceDocumentMetadata>
  void SetConfluenceDocument(ConfluenceDocumentT&& value) {
    m_confluenceDocumentHasBeenSet = true;
    m_confluenceDocument = std::forward<ConfluenceDocumentT>(value);
  }
  template <typename ConfluenceDocumentT = ConfluenceDocumentMetadata>
  IntegratedResourceMetadata& WithConfluenceDocument(ConfluenceDocumentT&& value) {
    SetConfluenceDocument(std::forward<ConfluenceDocumentT>(value));
    return *this;
  }
  ///@}
 private:
  GitHubRepositoryMetadata m_githubRepository;

  GitLabRepositoryMetadata m_gitlabRepository;

  BitbucketRepositoryMetadata m_bitbucketRepository;

  ConfluenceDocumentMetadata m_confluenceDocument;
  bool m_githubRepositoryHasBeenSet = false;
  bool m_gitlabRepositoryHasBeenSet = false;
  bool m_bitbucketRepositoryHasBeenSet = false;
  bool m_confluenceDocumentHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
