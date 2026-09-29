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
 * <p>Connection details for a self-managed Bitbucket Data Center
 * integration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BitbucketDataCenterIntegrationInput">AWS
 * API Reference</a></p>
 */
class BitbucketDataCenterIntegrationInput {
 public:
  AWS_SECURITYAGENT_API BitbucketDataCenterIntegrationInput() = default;
  AWS_SECURITYAGENT_API BitbucketDataCenterIntegrationInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API BitbucketDataCenterIntegrationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The HTTPS URL of your Bitbucket Data Center instance, for example
   * <code>https://bitbucket.example.com</code>.</p>
   */
  inline const Aws::String& GetTargetUrl() const { return m_targetUrl; }
  inline bool TargetUrlHasBeenSet() const { return m_targetUrlHasBeenSet; }
  template <typename TargetUrlT = Aws::String>
  void SetTargetUrl(TargetUrlT&& value) {
    m_targetUrlHasBeenSet = true;
    m_targetUrl = std::forward<TargetUrlT>(value);
  }
  template <typename TargetUrlT = Aws::String>
  BitbucketDataCenterIntegrationInput& WithTargetUrl(TargetUrlT&& value) {
    SetTargetUrl(std::forward<TargetUrlT>(value));
    return *this;
  }
  ///@}

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
  BitbucketDataCenterIntegrationInput& WithCode(CodeT&& value) {
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
  BitbucketDataCenterIntegrationInput& WithState(StateT&& value) {
    SetState(std::forward<StateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_targetUrl;

  Aws::String m_code;

  Aws::String m_state;
  bool m_targetUrlHasBeenSet = false;
  bool m_codeHasBeenSet = false;
  bool m_stateHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
