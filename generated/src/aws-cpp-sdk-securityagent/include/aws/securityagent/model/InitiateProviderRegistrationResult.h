/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {
class InitiateProviderRegistrationResult {
 public:
  AWS_SECURITYAGENT_API InitiateProviderRegistrationResult() = default;
  AWS_SECURITYAGENT_API InitiateProviderRegistrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API InitiateProviderRegistrationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>OAuth redirect URL</p>
   */
  inline const Aws::String& GetRedirectTo() const { return m_redirectTo; }
  template <typename RedirectToT = Aws::String>
  void SetRedirectTo(RedirectToT&& value) {
    m_redirectToHasBeenSet = true;
    m_redirectTo = std::forward<RedirectToT>(value);
  }
  template <typename RedirectToT = Aws::String>
  InitiateProviderRegistrationResult& WithRedirectTo(RedirectToT&& value) {
    SetRedirectTo(std::forward<RedirectToT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>CSRF state token for OAuth security</p>
   */
  inline const Aws::String& GetCsrfState() const { return m_csrfState; }
  template <typename CsrfStateT = Aws::String>
  void SetCsrfState(CsrfStateT&& value) {
    m_csrfStateHasBeenSet = true;
    m_csrfState = std::forward<CsrfStateT>(value);
  }
  template <typename CsrfStateT = Aws::String>
  InitiateProviderRegistrationResult& WithCsrfState(CsrfStateT&& value) {
    SetCsrfState(std::forward<CsrfStateT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  InitiateProviderRegistrationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_redirectTo;

  Aws::String m_csrfState;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_redirectToHasBeenSet = false;
  bool m_csrfStateHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
