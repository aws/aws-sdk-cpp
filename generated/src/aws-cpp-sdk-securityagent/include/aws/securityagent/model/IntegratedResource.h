/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/BitbucketRepositoryResource.h>
#include <aws/securityagent/model/ConfluenceDocumentResource.h>
#include <aws/securityagent/model/GitHubRepositoryResource.h>
#include <aws/securityagent/model/GitLabRepositoryResource.h>

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
 * <p>Represents an integrated resource from a third-party provider. This is a
 * union type that contains provider-specific resource information.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/IntegratedResource">AWS
 * API Reference</a></p>
 */
class IntegratedResource {
 public:
  AWS_SECURITYAGENT_API IntegratedResource() = default;
  AWS_SECURITYAGENT_API IntegratedResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API IntegratedResource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The GitHub repository resource information.</p>
   */
  inline const GitHubRepositoryResource& GetGithubRepository() const { return m_githubRepository; }
  inline bool GithubRepositoryHasBeenSet() const { return m_githubRepositoryHasBeenSet; }
  template <typename GithubRepositoryT = GitHubRepositoryResource>
  void SetGithubRepository(GithubRepositoryT&& value) {
    m_githubRepositoryHasBeenSet = true;
    m_githubRepository = std::forward<GithubRepositoryT>(value);
  }
  template <typename GithubRepositoryT = GitHubRepositoryResource>
  IntegratedResource& WithGithubRepository(GithubRepositoryT&& value) {
    SetGithubRepository(std::forward<GithubRepositoryT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const GitLabRepositoryResource& GetGitlabRepository() const { return m_gitlabRepository; }
  inline bool GitlabRepositoryHasBeenSet() const { return m_gitlabRepositoryHasBeenSet; }
  template <typename GitlabRepositoryT = GitLabRepositoryResource>
  void SetGitlabRepository(GitlabRepositoryT&& value) {
    m_gitlabRepositoryHasBeenSet = true;
    m_gitlabRepository = std::forward<GitlabRepositoryT>(value);
  }
  template <typename GitlabRepositoryT = GitLabRepositoryResource>
  IntegratedResource& WithGitlabRepository(GitlabRepositoryT&& value) {
    SetGitlabRepository(std::forward<GitlabRepositoryT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const BitbucketRepositoryResource& GetBitbucketRepository() const { return m_bitbucketRepository; }
  inline bool BitbucketRepositoryHasBeenSet() const { return m_bitbucketRepositoryHasBeenSet; }
  template <typename BitbucketRepositoryT = BitbucketRepositoryResource>
  void SetBitbucketRepository(BitbucketRepositoryT&& value) {
    m_bitbucketRepositoryHasBeenSet = true;
    m_bitbucketRepository = std::forward<BitbucketRepositoryT>(value);
  }
  template <typename BitbucketRepositoryT = BitbucketRepositoryResource>
  IntegratedResource& WithBitbucketRepository(BitbucketRepositoryT&& value) {
    SetBitbucketRepository(std::forward<BitbucketRepositoryT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ConfluenceDocumentResource& GetConfluenceDocument() const { return m_confluenceDocument; }
  inline bool ConfluenceDocumentHasBeenSet() const { return m_confluenceDocumentHasBeenSet; }
  template <typename ConfluenceDocumentT = ConfluenceDocumentResource>
  void SetConfluenceDocument(ConfluenceDocumentT&& value) {
    m_confluenceDocumentHasBeenSet = true;
    m_confluenceDocument = std::forward<ConfluenceDocumentT>(value);
  }
  template <typename ConfluenceDocumentT = ConfluenceDocumentResource>
  IntegratedResource& WithConfluenceDocument(ConfluenceDocumentT&& value) {
    SetConfluenceDocument(std::forward<ConfluenceDocumentT>(value));
    return *this;
  }
  ///@}
 private:
  GitHubRepositoryResource m_githubRepository;

  GitLabRepositoryResource m_gitlabRepository;

  BitbucketRepositoryResource m_bitbucketRepository;

  ConfluenceDocumentResource m_confluenceDocument;
  bool m_githubRepositoryHasBeenSet = false;
  bool m_gitlabRepositoryHasBeenSet = false;
  bool m_bitbucketRepositoryHasBeenSet = false;
  bool m_confluenceDocumentHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
