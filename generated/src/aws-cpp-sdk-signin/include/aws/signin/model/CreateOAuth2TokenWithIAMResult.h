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
 * <p>Output structure for CreateOAuth2TokenWithIAM operation</p> <p>Contains the
 * JWT access token, token type, and expiration per RFC 6749 §5.1.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/CreateOAuth2TokenWithIAMResponse">AWS
 * API Reference</a></p>
 */
class CreateOAuth2TokenWithIAMResult {
 public:
  AWS_SIGNIN_API CreateOAuth2TokenWithIAMResult() = default;
  AWS_SIGNIN_API CreateOAuth2TokenWithIAMResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SIGNIN_API CreateOAuth2TokenWithIAMResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>JWT access token containing principal identity, resource scope, and session
   * metadata</p>
   */
  inline const Aws::String& GetAccessToken() const { return m_accessToken; }
  template <typename AccessTokenT = Aws::String>
  void SetAccessToken(AccessTokenT&& value) {
    m_accessTokenHasBeenSet = true;
    m_accessToken = std::forward<AccessTokenT>(value);
  }
  template <typename AccessTokenT = Aws::String>
  CreateOAuth2TokenWithIAMResult& WithAccessToken(AccessTokenT&& value) {
    SetAccessToken(std::forward<AccessTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Always &quot;Bearer&quot; per OAuth 2.1 specification</p>
   */
  inline const Aws::String& GetTokenType() const { return m_tokenType; }
  template <typename TokenTypeT = Aws::String>
  void SetTokenType(TokenTypeT&& value) {
    m_tokenTypeHasBeenSet = true;
    m_tokenType = std::forward<TokenTypeT>(value);
  }
  template <typename TokenTypeT = Aws::String>
  CreateOAuth2TokenWithIAMResult& WithTokenType(TokenTypeT&& value) {
    SetTokenType(std::forward<TokenTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token lifetime in seconds. Value is the minimum of session validity and 1
   * hour.</p>
   */
  inline int GetExpiresIn() const { return m_expiresIn; }
  inline void SetExpiresIn(int value) {
    m_expiresInHasBeenSet = true;
    m_expiresIn = value;
  }
  inline CreateOAuth2TokenWithIAMResult& WithExpiresIn(int value) {
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
  CreateOAuth2TokenWithIAMResult& WithRequestId(RequestIdT&& value) {
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
