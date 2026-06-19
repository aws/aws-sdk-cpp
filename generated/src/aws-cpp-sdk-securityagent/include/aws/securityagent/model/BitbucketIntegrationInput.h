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
 * <p>The configuration for creating a Bitbucket integration.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BitbucketIntegrationInput">AWS
 * API Reference</a></p>
 */
class BitbucketIntegrationInput {
 public:
  AWS_SECURITYAGENT_API BitbucketIntegrationInput() = default;
  AWS_SECURITYAGENT_API BitbucketIntegrationInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API BitbucketIntegrationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Atlassian installation identifier, available from the Atlassian
   * administration console.</p>
   */
  inline const Aws::String& GetInstallationId() const { return m_installationId; }
  inline bool InstallationIdHasBeenSet() const { return m_installationIdHasBeenSet; }
  template <typename InstallationIdT = Aws::String>
  void SetInstallationId(InstallationIdT&& value) {
    m_installationIdHasBeenSet = true;
    m_installationId = std::forward<InstallationIdT>(value);
  }
  template <typename InstallationIdT = Aws::String>
  BitbucketIntegrationInput& WithInstallationId(InstallationIdT&& value) {
    SetInstallationId(std::forward<InstallationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Bitbucket workspace slug that identifies the workspace to integrate, for
   * example acme-corp.</p>
   */
  inline const Aws::String& GetWorkspace() const { return m_workspace; }
  inline bool WorkspaceHasBeenSet() const { return m_workspaceHasBeenSet; }
  template <typename WorkspaceT = Aws::String>
  void SetWorkspace(WorkspaceT&& value) {
    m_workspaceHasBeenSet = true;
    m_workspace = std::forward<WorkspaceT>(value);
  }
  template <typename WorkspaceT = Aws::String>
  BitbucketIntegrationInput& WithWorkspace(WorkspaceT&& value) {
    SetWorkspace(std::forward<WorkspaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth 2.0 authorization code returned from the consent redirect.</p>
   */
  inline const Aws::String& GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  template <typename CodeT = Aws::String>
  void SetCode(CodeT&& value) {
    m_codeHasBeenSet = true;
    m_code = std::forward<CodeT>(value);
  }
  template <typename CodeT = Aws::String>
  BitbucketIntegrationInput& WithCode(CodeT&& value) {
    SetCode(std::forward<CodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CSRF state token echoed back from the OAuth redirect.</p>
   */
  inline const Aws::String& GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  template <typename StateT = Aws::String>
  void SetState(StateT&& value) {
    m_stateHasBeenSet = true;
    m_state = std::forward<StateT>(value);
  }
  template <typename StateT = Aws::String>
  BitbucketIntegrationInput& WithState(StateT&& value) {
    SetState(std::forward<StateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_installationId;

  Aws::String m_workspace;

  Aws::String m_code;

  Aws::String m_state;
  bool m_installationIdHasBeenSet = false;
  bool m_workspaceHasBeenSet = false;
  bool m_codeHasBeenSet = false;
  bool m_stateHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
