/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signin/Signin_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Signin {
namespace Model {
/**
 * <p>Output for DeleteConsoleAuthorizationConfiguration operation</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/DeleteConsoleAuthorizationConfigurationOutput">AWS
 * API Reference</a></p>
 */
class DeleteConsoleAuthorizationConfigurationResult {
 public:
  AWS_SIGNIN_API DeleteConsoleAuthorizationConfigurationResult() = default;
  AWS_SIGNIN_API DeleteConsoleAuthorizationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SIGNIN_API DeleteConsoleAuthorizationConfigurationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Target account identifier</p>
   */
  inline const Aws::String& GetTargetId() const { return m_targetId; }
  template <typename TargetIdT = Aws::String>
  void SetTargetId(TargetIdT&& value) {
    m_targetIdHasBeenSet = true;
    m_targetId = std::forward<TargetIdT>(value);
  }
  template <typename TargetIdT = Aws::String>
  DeleteConsoleAuthorizationConfigurationResult& WithTargetId(TargetIdT&& value) {
    SetTargetId(std::forward<TargetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Authorization scope</p>
   */
  inline const Aws::String& GetScope() const { return m_scope; }
  template <typename ScopeT = Aws::String>
  void SetScope(ScopeT&& value) {
    m_scopeHasBeenSet = true;
    m_scope = std::forward<ScopeT>(value);
  }
  template <typename ScopeT = Aws::String>
  DeleteConsoleAuthorizationConfigurationResult& WithScope(ScopeT&& value) {
    SetScope(std::forward<ScopeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether console authorization is enabled</p>
   */
  inline bool GetConsoleAuthorizationEnabled() const { return m_consoleAuthorizationEnabled; }
  inline void SetConsoleAuthorizationEnabled(bool value) {
    m_consoleAuthorizationEnabledHasBeenSet = true;
    m_consoleAuthorizationEnabled = value;
  }
  inline DeleteConsoleAuthorizationConfigurationResult& WithConsoleAuthorizationEnabled(bool value) {
    SetConsoleAuthorizationEnabled(value);
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
  DeleteConsoleAuthorizationConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_targetId;

  Aws::String m_scope;

  bool m_consoleAuthorizationEnabled{false};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_targetIdHasBeenSet = false;
  bool m_scopeHasBeenSet = false;
  bool m_consoleAuthorizationEnabledHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
