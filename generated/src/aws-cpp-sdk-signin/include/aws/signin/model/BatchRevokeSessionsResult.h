/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/signin/Signin_EXPORTS.h>
#include <aws/signin/model/BatchRevokeSessionError.h>
#include <aws/signin/model/RevokedSession.h>

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
 * <p>Output for BatchRevokeSessions operation</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/BatchRevokeSessionsOutput">AWS
 * API Reference</a></p>
 */
class BatchRevokeSessionsResult {
 public:
  AWS_SIGNIN_API BatchRevokeSessionsResult() = default;
  AWS_SIGNIN_API BatchRevokeSessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SIGNIN_API BatchRevokeSessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Sessions that were revoked</p>
   */
  inline const Aws::Vector<RevokedSession>& GetRevokedSessions() const { return m_revokedSessions; }
  template <typename RevokedSessionsT = Aws::Vector<RevokedSession>>
  void SetRevokedSessions(RevokedSessionsT&& value) {
    m_revokedSessionsHasBeenSet = true;
    m_revokedSessions = std::forward<RevokedSessionsT>(value);
  }
  template <typename RevokedSessionsT = Aws::Vector<RevokedSession>>
  BatchRevokeSessionsResult& WithRevokedSessions(RevokedSessionsT&& value) {
    SetRevokedSessions(std::forward<RevokedSessionsT>(value));
    return *this;
  }
  template <typename RevokedSessionsT = RevokedSession>
  BatchRevokeSessionsResult& AddRevokedSessions(RevokedSessionsT&& value) {
    m_revokedSessionsHasBeenSet = true;
    m_revokedSessions.emplace_back(std::forward<RevokedSessionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Sessions that could not be revoked</p>
   */
  inline const Aws::Vector<BatchRevokeSessionError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<BatchRevokeSessionError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<BatchRevokeSessionError>>
  BatchRevokeSessionsResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = BatchRevokeSessionError>
  BatchRevokeSessionsResult& AddErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors.emplace_back(std::forward<ErrorsT>(value));
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
  BatchRevokeSessionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<RevokedSession> m_revokedSessions;

  Aws::Vector<BatchRevokeSessionError> m_errors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_revokedSessionsHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
