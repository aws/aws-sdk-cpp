/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/GitHubRepositoryMetadata.h>

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
 * <p>Metadata about an integrated resource</p><p><h3>See Also:</h3>   <a
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
   * <p>Metadata for a GitHub repository resource</p>
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
 private:
  GitHubRepositoryMetadata m_githubRepository;
  bool m_githubRepositoryHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
