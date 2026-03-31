/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/GitHubResourceCapabilities.h>

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
 * <p>Provider-specific capabilities for integrated resources</p><p><h3>See
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
 private:
  GitHubResourceCapabilities m_github;
  bool m_githubHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
