/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/GitLabTokenType.h>

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
 * <p>The configuration for creating a GitLab integration.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/GitLabIntegrationInput">AWS
 * API Reference</a></p>
 */
class GitLabIntegrationInput {
 public:
  AWS_SECURITYAGENT_API GitLabIntegrationInput() = default;
  AWS_SECURITYAGENT_API GitLabIntegrationInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API GitLabIntegrationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The GitLab access token used to authenticate. This can be a personal access
   * token or a group access token.</p>
   */
  inline const Aws::String& GetAccessToken() const { return m_accessToken; }
  inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
  template <typename AccessTokenT = Aws::String>
  void SetAccessToken(AccessTokenT&& value) {
    m_accessTokenHasBeenSet = true;
    m_accessToken = std::forward<AccessTokenT>(value);
  }
  template <typename AccessTokenT = Aws::String>
  GitLabIntegrationInput& WithAccessToken(AccessTokenT&& value) {
    SetAccessToken(std::forward<AccessTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTPS URL of a self-managed GitLab instance. Omit this value for GitLab
   * SaaS (gitlab.com).</p>
   */
  inline const Aws::String& GetTargetUrl() const { return m_targetUrl; }
  inline bool TargetUrlHasBeenSet() const { return m_targetUrlHasBeenSet; }
  template <typename TargetUrlT = Aws::String>
  void SetTargetUrl(TargetUrlT&& value) {
    m_targetUrlHasBeenSet = true;
    m_targetUrl = std::forward<TargetUrlT>(value);
  }
  template <typename TargetUrlT = Aws::String>
  GitLabIntegrationInput& WithTargetUrl(TargetUrlT&& value) {
    SetTargetUrl(std::forward<TargetUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of GitLab access token provided in accessToken.</p>
   */
  inline GitLabTokenType GetTokenType() const { return m_tokenType; }
  inline bool TokenTypeHasBeenSet() const { return m_tokenTypeHasBeenSet; }
  inline void SetTokenType(GitLabTokenType value) {
    m_tokenTypeHasBeenSet = true;
    m_tokenType = value;
  }
  inline GitLabIntegrationInput& WithTokenType(GitLabTokenType value) {
    SetTokenType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the GitLab group. Required when tokenType is group and
   * ignored for personal tokens.</p>
   */
  inline const Aws::String& GetGroupId() const { return m_groupId; }
  inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
  template <typename GroupIdT = Aws::String>
  void SetGroupId(GroupIdT&& value) {
    m_groupIdHasBeenSet = true;
    m_groupId = std::forward<GroupIdT>(value);
  }
  template <typename GroupIdT = Aws::String>
  GitLabIntegrationInput& WithGroupId(GroupIdT&& value) {
    SetGroupId(std::forward<GroupIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accessToken;

  Aws::String m_targetUrl;

  GitLabTokenType m_tokenType{GitLabTokenType::NOT_SET};

  Aws::String m_groupId;
  bool m_accessTokenHasBeenSet = false;
  bool m_targetUrlHasBeenSet = false;
  bool m_tokenTypeHasBeenSet = false;
  bool m_groupIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
