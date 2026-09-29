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
 * <p>Connection details for an Azure DevOps integration.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/AzureDevOpsIntegrationInput">AWS
 * API Reference</a></p>
 */
class AzureDevOpsIntegrationInput {
 public:
  AWS_SECURITYAGENT_API AzureDevOpsIntegrationInput() = default;
  AWS_SECURITYAGENT_API AzureDevOpsIntegrationInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API AzureDevOpsIntegrationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The OAuth 2.0 authorization code returned to your redirect URL after the
   * connection is authorized.</p>
   */
  inline const Aws::String& GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  template <typename CodeT = Aws::String>
  void SetCode(CodeT&& value) {
    m_codeHasBeenSet = true;
    m_code = std::forward<CodeT>(value);
  }
  template <typename CodeT = Aws::String>
  AzureDevOpsIntegrationInput& WithCode(CodeT&& value) {
    SetCode(std::forward<CodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CSRF state value returned by <code>InitiateProviderRegistration</code>
   * and echoed back on the authorization redirect.</p>
   */
  inline const Aws::String& GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  template <typename StateT = Aws::String>
  void SetState(StateT&& value) {
    m_stateHasBeenSet = true;
    m_state = std::forward<StateT>(value);
  }
  template <typename StateT = Aws::String>
  AzureDevOpsIntegrationInput& WithState(StateT&& value) {
    SetState(std::forward<StateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Azure DevOps organization to connect, for example
   * <code>my-org</code>.</p>
   */
  inline const Aws::String& GetOrganizationName() const { return m_organizationName; }
  inline bool OrganizationNameHasBeenSet() const { return m_organizationNameHasBeenSet; }
  template <typename OrganizationNameT = Aws::String>
  void SetOrganizationName(OrganizationNameT&& value) {
    m_organizationNameHasBeenSet = true;
    m_organizationName = std::forward<OrganizationNameT>(value);
  }
  template <typename OrganizationNameT = Aws::String>
  AzureDevOpsIntegrationInput& WithOrganizationName(OrganizationNameT&& value) {
    SetOrganizationName(std::forward<OrganizationNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_code;

  Aws::String m_state;

  Aws::String m_organizationName;
  bool m_codeHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_organizationNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
