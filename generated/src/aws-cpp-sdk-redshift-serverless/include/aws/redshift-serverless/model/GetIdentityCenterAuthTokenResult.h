/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace RedshiftServerless {
namespace Model {
class GetIdentityCenterAuthTokenResult {
 public:
  AWS_REDSHIFTSERVERLESS_API GetIdentityCenterAuthTokenResult() = default;
  AWS_REDSHIFTSERVERLESS_API GetIdentityCenterAuthTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_REDSHIFTSERVERLESS_API GetIdentityCenterAuthTokenResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The date and time when the Identity Center authentication token expires.</p>
   * <p>After this time, a new token must be requested for continued access.</p>
   */
  inline const Aws::Utils::DateTime& GetExpirationTime() const { return m_expirationTime; }
  template <typename ExpirationTimeT = Aws::Utils::DateTime>
  void SetExpirationTime(ExpirationTimeT&& value) {
    m_expirationTimeHasBeenSet = true;
    m_expirationTime = std::forward<ExpirationTimeT>(value);
  }
  template <typename ExpirationTimeT = Aws::Utils::DateTime>
  GetIdentityCenterAuthTokenResult& WithExpirationTime(ExpirationTimeT&& value) {
    SetExpirationTime(std::forward<ExpirationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Identity Center authentication token that can be used to access data in
   * the specified workgroups.</p> <p>This token contains the Identity Center
   * identity information and is encrypted for secure transmission.</p>
   */
  inline const Aws::String& GetToken() const { return m_token; }
  template <typename TokenT = Aws::String>
  void SetToken(TokenT&& value) {
    m_tokenHasBeenSet = true;
    m_token = std::forward<TokenT>(value);
  }
  template <typename TokenT = Aws::String>
  GetIdentityCenterAuthTokenResult& WithToken(TokenT&& value) {
    SetToken(std::forward<TokenT>(value));
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
  GetIdentityCenterAuthTokenResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_expirationTime{};

  Aws::String m_token;

  Aws::String m_requestId;
  bool m_expirationTimeHasBeenSet = false;
  bool m_tokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RedshiftServerless
}  // namespace Aws
