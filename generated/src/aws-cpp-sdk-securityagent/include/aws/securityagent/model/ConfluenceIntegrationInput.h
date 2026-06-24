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
 * <p>The configuration for creating a Confluence integration.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ConfluenceIntegrationInput">AWS
 * API Reference</a></p>
 */
class ConfluenceIntegrationInput {
 public:
  AWS_SECURITYAGENT_API ConfluenceIntegrationInput() = default;
  AWS_SECURITYAGENT_API ConfluenceIntegrationInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API ConfluenceIntegrationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  ConfluenceIntegrationInput& WithInstallationId(InstallationIdT&& value) {
    SetInstallationId(std::forward<InstallationIdT>(value));
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
  ConfluenceIntegrationInput& WithCode(CodeT&& value) {
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
  ConfluenceIntegrationInput& WithState(StateT&& value) {
    SetState(std::forward<StateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Confluence Cloud site URL, for example https://mysite.atlassian.net.</p>
   */
  inline const Aws::String& GetSiteUrl() const { return m_siteUrl; }
  inline bool SiteUrlHasBeenSet() const { return m_siteUrlHasBeenSet; }
  template <typename SiteUrlT = Aws::String>
  void SetSiteUrl(SiteUrlT&& value) {
    m_siteUrlHasBeenSet = true;
    m_siteUrl = std::forward<SiteUrlT>(value);
  }
  template <typename SiteUrlT = Aws::String>
  ConfluenceIntegrationInput& WithSiteUrl(SiteUrlT&& value) {
    SetSiteUrl(std::forward<SiteUrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_installationId;

  Aws::String m_code;

  Aws::String m_state;

  Aws::String m_siteUrl;
  bool m_installationIdHasBeenSet = false;
  bool m_codeHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_siteUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
