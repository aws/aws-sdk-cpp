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
 * <p>Output structure for CreateOAuth2TokenWithTokenExchange operation.</p>
 * <p>Contains the access token, token type, and expiration as defined in RFC 6749
 * §5.1, plus fields specific to the grant type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/CreateOAuth2TokenWithTokenExchangeResponse">AWS
 * API Reference</a></p>
 */
class CreateOAuth2TokenWithTokenExchangeResult {
 public:
  AWS_SIGNIN_API CreateOAuth2TokenWithTokenExchangeResult() = default;
  AWS_SIGNIN_API CreateOAuth2TokenWithTokenExchangeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SIGNIN_API CreateOAuth2TokenWithTokenExchangeResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The access token containing principal identity, resource scope, and session
   * metadata.</p>
   */
  inline const Aws::String& GetAccessToken() const { return m_accessToken; }
  template <typename AccessTokenT = Aws::String>
  void SetAccessToken(AccessTokenT&& value) {
    m_accessTokenHasBeenSet = true;
    m_accessToken = std::forward<AccessTokenT>(value);
  }
  template <typename AccessTokenT = Aws::String>
  CreateOAuth2TokenWithTokenExchangeResult& WithAccessToken(AccessTokenT&& value) {
    SetAccessToken(std::forward<AccessTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token type of the issued token. Returned when
   * &quot;grant_type=urn:ietf:params:oauth:grant-type:token-exchange&quot;. Value is
   * &quot;urn:ietf:params:oauth:token-type:access_token&quot; as defined in RFC 8693
   * §2.2.1.</p>
   */
  inline const Aws::String& GetIssuedTokenType() const { return m_issuedTokenType; }
  template <typename IssuedTokenTypeT = Aws::String>
  void SetIssuedTokenType(IssuedTokenTypeT&& value) {
    m_issuedTokenTypeHasBeenSet = true;
    m_issuedTokenType = std::forward<IssuedTokenTypeT>(value);
  }
  template <typename IssuedTokenTypeT = Aws::String>
  CreateOAuth2TokenWithTokenExchangeResult& WithIssuedTokenType(IssuedTokenTypeT&& value) {
    SetIssuedTokenType(std::forward<IssuedTokenTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token type. Currently only supports &quot;Bearer&quot; as defined in RFC
   * 6749.</p>
   */
  inline const Aws::String& GetTokenType() const { return m_tokenType; }
  template <typename TokenTypeT = Aws::String>
  void SetTokenType(TokenTypeT&& value) {
    m_tokenTypeHasBeenSet = true;
    m_tokenType = std::forward<TokenTypeT>(value);
  }
  template <typename TokenTypeT = Aws::String>
  CreateOAuth2TokenWithTokenExchangeResult& WithTokenType(TokenTypeT&& value) {
    SetTokenType(std::forward<TokenTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token lifetime in seconds. Value is the minimum of the provided token's
   * validity and 1 hour (3600 seconds).</p>
   */
  inline int GetExpiresIn() const { return m_expiresIn; }
  inline void SetExpiresIn(int value) {
    m_expiresInHasBeenSet = true;
    m_expiresIn = value;
  }
  inline CreateOAuth2TokenWithTokenExchangeResult& WithExpiresIn(int value) {
    SetExpiresIn(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource the access token is scoped to. Returned when
   * &quot;grant_type=urn:ietf:params:oauth:grant-type:jwt-bearer&quot;.</p>
   */
  inline const Aws::String& GetResource() const { return m_resource; }
  template <typename ResourceT = Aws::String>
  void SetResource(ResourceT&& value) {
    m_resourceHasBeenSet = true;
    m_resource = std::forward<ResourceT>(value);
  }
  template <typename ResourceT = Aws::String>
  CreateOAuth2TokenWithTokenExchangeResult& WithResource(ResourceT&& value) {
    SetResource(std::forward<ResourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM managed policy ARNs applied as session policies, as a space-delimited
   * list. Returned when
   * &quot;grant_type=urn:ietf:params:oauth:grant-type:jwt-bearer&quot; and the
   * assertion has a scope.</p>
   */
  inline const Aws::String& GetScope() const { return m_scope; }
  template <typename ScopeT = Aws::String>
  void SetScope(ScopeT&& value) {
    m_scopeHasBeenSet = true;
    m_scope = std::forward<ScopeT>(value);
  }
  template <typename ScopeT = Aws::String>
  CreateOAuth2TokenWithTokenExchangeResult& WithScope(ScopeT&& value) {
    SetScope(std::forward<ScopeT>(value));
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
  CreateOAuth2TokenWithTokenExchangeResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_accessToken;

  Aws::String m_issuedTokenType;

  Aws::String m_tokenType;

  int m_expiresIn{0};

  Aws::String m_resource;

  Aws::String m_scope;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_accessTokenHasBeenSet = false;
  bool m_issuedTokenTypeHasBeenSet = false;
  bool m_tokenTypeHasBeenSet = false;
  bool m_expiresInHasBeenSet = false;
  bool m_resourceHasBeenSet = false;
  bool m_scopeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
