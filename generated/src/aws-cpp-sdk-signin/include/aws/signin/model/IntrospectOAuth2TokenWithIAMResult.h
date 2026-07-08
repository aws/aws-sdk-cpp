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
 * <p>Output structure for IntrospectOAuth2TokenWithIAM operation</p> <p>RFC 7662
 * §2.2 introspection response. Only <code>active</code> is required; all other
 * claims are omitted when the token is inactive.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/IntrospectOAuth2TokenWithIAMResponse">AWS
 * API Reference</a></p>
 */
class IntrospectOAuth2TokenWithIAMResult {
 public:
  AWS_SIGNIN_API IntrospectOAuth2TokenWithIAMResult() = default;
  AWS_SIGNIN_API IntrospectOAuth2TokenWithIAMResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SIGNIN_API IntrospectOAuth2TokenWithIAMResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Indicates whether the token is currently active. <code>true</code> only when
   * the token is valid, has not expired, has not been revoked, and belongs to the
   * caller's account.</p>
   */
  inline bool GetActive() const { return m_active; }
  inline void SetActive(bool value) {
    m_activeHasBeenSet = true;
    m_active = value;
  }
  inline IntrospectOAuth2TokenWithIAMResult& WithActive(bool value) {
    SetActive(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Client identifier for the OAuth 2.0 client that requested the token.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  IntrospectOAuth2TokenWithIAMResult& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>User identifier matching sts:GetCallerIdentity's <code>UserId</code> field
   * for the token's subject principal (e.g. &quot;AIDAEXAMPLE&quot; for an IAM user,
   * or &quot;AROAEXAMPLE:session-name&quot; for an assumed role).</p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  IntrospectOAuth2TokenWithIAMResult& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates which kind of token was introspected. One of
   * &quot;access_token&quot; or &quot;refresh_token&quot;.</p>
   */
  inline const Aws::String& GetTokenType() const { return m_tokenType; }
  template <typename TokenTypeT = Aws::String>
  void SetTokenType(TokenTypeT&& value) {
    m_tokenTypeHasBeenSet = true;
    m_tokenType = std::forward<TokenTypeT>(value);
  }
  template <typename TokenTypeT = Aws::String>
  IntrospectOAuth2TokenWithIAMResult& WithTokenType(TokenTypeT&& value) {
    SetTokenType(std::forward<TokenTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token expiration time as a NumericDate (Unix epoch seconds).</p>
   */
  inline long long GetExp() const { return m_exp; }
  inline void SetExp(long long value) {
    m_expHasBeenSet = true;
    m_exp = value;
  }
  inline IntrospectOAuth2TokenWithIAMResult& WithExp(long long value) {
    SetExp(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token issuance time as a NumericDate (Unix epoch seconds).</p>
   */
  inline long long GetIat() const { return m_iat; }
  inline void SetIat(long long value) {
    m_iatHasBeenSet = true;
    m_iat = value;
  }
  inline IntrospectOAuth2TokenWithIAMResult& WithIat(long long value) {
    SetIat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token &quot;not before&quot; time as a NumericDate (Unix epoch seconds).</p>
   */
  inline long long GetNbf() const { return m_nbf; }
  inline void SetNbf(long long value) {
    m_nbfHasBeenSet = true;
    m_nbf = value;
  }
  inline IntrospectOAuth2TokenWithIAMResult& WithNbf(long long value) {
    SetNbf(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Subject of the token: the IAM principal ARN. For assumed-role sessions, this
   * is the session ARN (matches sts:GetCallerIdentity's <code>Arn</code> field),
   * e.g. arn:aws:sts::123456789012:assumed-role/MyRole/session-name.</p>
   */
  inline const Aws::String& GetSub() const { return m_sub; }
  template <typename SubT = Aws::String>
  void SetSub(SubT&& value) {
    m_subHasBeenSet = true;
    m_sub = std::forward<SubT>(value);
  }
  template <typename SubT = Aws::String>
  IntrospectOAuth2TokenWithIAMResult& WithSub(SubT&& value) {
    SetSub(std::forward<SubT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Audience of the token: the OAuth resource the token is scoped to (for
   * example, &quot;aws-mcp.amazonaws.com&quot;). Omitted for refresh tokens.</p>
   */
  inline const Aws::String& GetAud() const { return m_aud; }
  template <typename AudT = Aws::String>
  void SetAud(AudT&& value) {
    m_audHasBeenSet = true;
    m_aud = std::forward<AudT>(value);
  }
  template <typename AudT = Aws::String>
  IntrospectOAuth2TokenWithIAMResult& WithAud(AudT&& value) {
    SetAud(std::forward<AudT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Issuer of the token. Always &quot;signin.amazonaws.com&quot; for AWS
   * Sign-In.</p>
   */
  inline const Aws::String& GetIss() const { return m_iss; }
  template <typename IssT = Aws::String>
  void SetIss(IssT&& value) {
    m_issHasBeenSet = true;
    m_iss = std::forward<IssT>(value);
  }
  template <typename IssT = Aws::String>
  IntrospectOAuth2TokenWithIAMResult& WithIss(IssT&& value) {
    SetIss(std::forward<IssT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique identifier for the token.</p>
   */
  inline const Aws::String& GetJti() const { return m_jti; }
  template <typename JtiT = Aws::String>
  void SetJti(JtiT&& value) {
    m_jtiHasBeenSet = true;
    m_jti = std::forward<JtiT>(value);
  }
  template <typename JtiT = Aws::String>
  IntrospectOAuth2TokenWithIAMResult& WithJti(JtiT&& value) {
    SetJti(std::forward<JtiT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>12-digit AWS account ID of the token's subject principal.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  IntrospectOAuth2TokenWithIAMResult& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AWS Sign-In session ARN bound to the token, of the form
   * arn:aws:signin:{region}:{account}:session/{uuid}.</p>
   */
  inline const Aws::String& GetSigninSession() const { return m_signinSession; }
  template <typename SigninSessionT = Aws::String>
  void SetSigninSession(SigninSessionT&& value) {
    m_signinSessionHasBeenSet = true;
    m_signinSession = std::forward<SigninSessionT>(value);
  }
  template <typename SigninSessionT = Aws::String>
  IntrospectOAuth2TokenWithIAMResult& WithSigninSession(SigninSessionT&& value) {
    SetSigninSession(std::forward<SigninSessionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth resource the token is scoped to during Human OAuth flow. Only
   * present for refresh token introspection.</p>
   */
  inline const Aws::String& GetResource() const { return m_resource; }
  template <typename ResourceT = Aws::String>
  void SetResource(ResourceT&& value) {
    m_resourceHasBeenSet = true;
    m_resource = std::forward<ResourceT>(value);
  }
  template <typename ResourceT = Aws::String>
  IntrospectOAuth2TokenWithIAMResult& WithResource(ResourceT&& value) {
    SetResource(std::forward<ResourceT>(value));
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
  IntrospectOAuth2TokenWithIAMResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  bool m_active{false};

  Aws::String m_clientId;

  Aws::String m_userId;

  Aws::String m_tokenType;

  long long m_exp{0};

  long long m_iat{0};

  long long m_nbf{0};

  Aws::String m_sub;

  Aws::String m_aud;

  Aws::String m_iss;

  Aws::String m_jti;

  Aws::String m_accountId;

  Aws::String m_signinSession;

  Aws::String m_resource;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_activeHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
  bool m_userIdHasBeenSet = false;
  bool m_tokenTypeHasBeenSet = false;
  bool m_expHasBeenSet = false;
  bool m_iatHasBeenSet = false;
  bool m_nbfHasBeenSet = false;
  bool m_subHasBeenSet = false;
  bool m_audHasBeenSet = false;
  bool m_issHasBeenSet = false;
  bool m_jtiHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_signinSessionHasBeenSet = false;
  bool m_resourceHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
