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
 * <p>Output structure for CreateBearerToken operation</p> <p>Contains the bearer
 * token, its type, and its lifetime.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/CreateBearerTokenResponse">AWS
 * API Reference</a></p>
 */
class CreateBearerTokenResult {
 public:
  AWS_SIGNIN_API CreateBearerTokenResult() = default;
  AWS_SIGNIN_API CreateBearerTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SIGNIN_API CreateBearerTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The bearer token. Present it to the AWS service named in the request.</p>
   */
  inline const Aws::String& GetAccessToken() const { return m_accessToken; }
  template <typename AccessTokenT = Aws::String>
  void SetAccessToken(AccessTokenT&& value) {
    m_accessTokenHasBeenSet = true;
    m_accessToken = std::forward<AccessTokenT>(value);
  }
  template <typename AccessTokenT = Aws::String>
  CreateBearerTokenResult& WithAccessToken(AccessTokenT&& value) {
    SetAccessToken(std::forward<AccessTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token type. Always &quot;Bearer&quot;.</p>
   */
  inline const Aws::String& GetTokenType() const { return m_tokenType; }
  template <typename TokenTypeT = Aws::String>
  void SetTokenType(TokenTypeT&& value) {
    m_tokenTypeHasBeenSet = true;
    m_tokenType = std::forward<TokenTypeT>(value);
  }
  template <typename TokenTypeT = Aws::String>
  CreateBearerTokenResult& WithTokenType(TokenTypeT&& value) {
    SetTokenType(std::forward<TokenTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token lifetime in seconds.</p>
   */
  inline int GetExpiresIn() const { return m_expiresIn; }
  inline void SetExpiresIn(int value) {
    m_expiresInHasBeenSet = true;
    m_expiresIn = value;
  }
  inline CreateBearerTokenResult& WithExpiresIn(int value) {
    SetExpiresIn(value);
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
  CreateBearerTokenResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_accessToken;

  Aws::String m_tokenType;

  int m_expiresIn{0};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_accessTokenHasBeenSet = false;
  bool m_tokenTypeHasBeenSet = false;
  bool m_expiresInHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
