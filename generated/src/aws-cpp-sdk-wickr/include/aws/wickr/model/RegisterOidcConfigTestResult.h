/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wickr/Wickr_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Wickr {
namespace Model {
class RegisterOidcConfigTestResult {
 public:
  AWS_WICKR_API RegisterOidcConfigTestResult() = default;
  AWS_WICKR_API RegisterOidcConfigTestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WICKR_API RegisterOidcConfigTestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The token endpoint URL discovered from the OIDC provider.</p>
   */
  inline const Aws::String& GetTokenEndpoint() const { return m_tokenEndpoint; }
  template <typename TokenEndpointT = Aws::String>
  void SetTokenEndpoint(TokenEndpointT&& value) {
    m_tokenEndpointHasBeenSet = true;
    m_tokenEndpoint = std::forward<TokenEndpointT>(value);
  }
  template <typename TokenEndpointT = Aws::String>
  RegisterOidcConfigTestResult& WithTokenEndpoint(TokenEndpointT&& value) {
    SetTokenEndpoint(std::forward<TokenEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user info endpoint URL discovered from the OIDC provider.</p>
   */
  inline const Aws::String& GetUserinfoEndpoint() const { return m_userinfoEndpoint; }
  template <typename UserinfoEndpointT = Aws::String>
  void SetUserinfoEndpoint(UserinfoEndpointT&& value) {
    m_userinfoEndpointHasBeenSet = true;
    m_userinfoEndpoint = std::forward<UserinfoEndpointT>(value);
  }
  template <typename UserinfoEndpointT = Aws::String>
  RegisterOidcConfigTestResult& WithUserinfoEndpoint(UserinfoEndpointT&& value) {
    SetUserinfoEndpoint(std::forward<UserinfoEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth response types supported by the OIDC provider.</p>
   */
  inline const Aws::Vector<Aws::String>& GetResponseTypesSupported() const { return m_responseTypesSupported; }
  template <typename ResponseTypesSupportedT = Aws::Vector<Aws::String>>
  void SetResponseTypesSupported(ResponseTypesSupportedT&& value) {
    m_responseTypesSupportedHasBeenSet = true;
    m_responseTypesSupported = std::forward<ResponseTypesSupportedT>(value);
  }
  template <typename ResponseTypesSupportedT = Aws::Vector<Aws::String>>
  RegisterOidcConfigTestResult& WithResponseTypesSupported(ResponseTypesSupportedT&& value) {
    SetResponseTypesSupported(std::forward<ResponseTypesSupportedT>(value));
    return *this;
  }
  template <typename ResponseTypesSupportedT = Aws::String>
  RegisterOidcConfigTestResult& AddResponseTypesSupported(ResponseTypesSupportedT&& value) {
    m_responseTypesSupportedHasBeenSet = true;
    m_responseTypesSupported.emplace_back(std::forward<ResponseTypesSupportedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth scopes supported by the OIDC provider.</p>
   */
  inline const Aws::Vector<Aws::String>& GetScopesSupported() const { return m_scopesSupported; }
  template <typename ScopesSupportedT = Aws::Vector<Aws::String>>
  void SetScopesSupported(ScopesSupportedT&& value) {
    m_scopesSupportedHasBeenSet = true;
    m_scopesSupported = std::forward<ScopesSupportedT>(value);
  }
  template <typename ScopesSupportedT = Aws::Vector<Aws::String>>
  RegisterOidcConfigTestResult& WithScopesSupported(ScopesSupportedT&& value) {
    SetScopesSupported(std::forward<ScopesSupportedT>(value));
    return *this;
  }
  template <typename ScopesSupportedT = Aws::String>
  RegisterOidcConfigTestResult& AddScopesSupported(ScopesSupportedT&& value) {
    m_scopesSupportedHasBeenSet = true;
    m_scopesSupported.emplace_back(std::forward<ScopesSupportedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The issuer URL confirmed by the OIDC provider.</p>
   */
  inline const Aws::String& GetIssuer() const { return m_issuer; }
  template <typename IssuerT = Aws::String>
  void SetIssuer(IssuerT&& value) {
    m_issuerHasBeenSet = true;
    m_issuer = std::forward<IssuerT>(value);
  }
  template <typename IssuerT = Aws::String>
  RegisterOidcConfigTestResult& WithIssuer(IssuerT&& value) {
    SetIssuer(std::forward<IssuerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authorization endpoint URL discovered from the OIDC provider.</p>
   */
  inline const Aws::String& GetAuthorizationEndpoint() const { return m_authorizationEndpoint; }
  template <typename AuthorizationEndpointT = Aws::String>
  void SetAuthorizationEndpoint(AuthorizationEndpointT&& value) {
    m_authorizationEndpointHasBeenSet = true;
    m_authorizationEndpoint = std::forward<AuthorizationEndpointT>(value);
  }
  template <typename AuthorizationEndpointT = Aws::String>
  RegisterOidcConfigTestResult& WithAuthorizationEndpoint(AuthorizationEndpointT&& value) {
    SetAuthorizationEndpoint(std::forward<AuthorizationEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end session endpoint URL for logging out users from the OIDC
   * provider.</p>
   */
  inline const Aws::String& GetEndSessionEndpoint() const { return m_endSessionEndpoint; }
  template <typename EndSessionEndpointT = Aws::String>
  void SetEndSessionEndpoint(EndSessionEndpointT&& value) {
    m_endSessionEndpointHasBeenSet = true;
    m_endSessionEndpoint = std::forward<EndSessionEndpointT>(value);
  }
  template <typename EndSessionEndpointT = Aws::String>
  RegisterOidcConfigTestResult& WithEndSessionEndpoint(EndSessionEndpointT&& value) {
    SetEndSessionEndpoint(std::forward<EndSessionEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The logout endpoint URL for terminating user sessions.</p>
   */
  inline const Aws::String& GetLogoutEndpoint() const { return m_logoutEndpoint; }
  template <typename LogoutEndpointT = Aws::String>
  void SetLogoutEndpoint(LogoutEndpointT&& value) {
    m_logoutEndpointHasBeenSet = true;
    m_logoutEndpoint = std::forward<LogoutEndpointT>(value);
  }
  template <typename LogoutEndpointT = Aws::String>
  RegisterOidcConfigTestResult& WithLogoutEndpoint(LogoutEndpointT&& value) {
    SetLogoutEndpoint(std::forward<LogoutEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth grant types supported by the OIDC provider.</p>
   */
  inline const Aws::Vector<Aws::String>& GetGrantTypesSupported() const { return m_grantTypesSupported; }
  template <typename GrantTypesSupportedT = Aws::Vector<Aws::String>>
  void SetGrantTypesSupported(GrantTypesSupportedT&& value) {
    m_grantTypesSupportedHasBeenSet = true;
    m_grantTypesSupported = std::forward<GrantTypesSupportedT>(value);
  }
  template <typename GrantTypesSupportedT = Aws::Vector<Aws::String>>
  RegisterOidcConfigTestResult& WithGrantTypesSupported(GrantTypesSupportedT&& value) {
    SetGrantTypesSupported(std::forward<GrantTypesSupportedT>(value));
    return *this;
  }
  template <typename GrantTypesSupportedT = Aws::String>
  RegisterOidcConfigTestResult& AddGrantTypesSupported(GrantTypesSupportedT&& value) {
    m_grantTypesSupportedHasBeenSet = true;
    m_grantTypesSupported.emplace_back(std::forward<GrantTypesSupportedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token revocation endpoint URL for invalidating tokens.</p>
   */
  inline const Aws::String& GetRevocationEndpoint() const { return m_revocationEndpoint; }
  template <typename RevocationEndpointT = Aws::String>
  void SetRevocationEndpoint(RevocationEndpointT&& value) {
    m_revocationEndpointHasBeenSet = true;
    m_revocationEndpoint = std::forward<RevocationEndpointT>(value);
  }
  template <typename RevocationEndpointT = Aws::String>
  RegisterOidcConfigTestResult& WithRevocationEndpoint(RevocationEndpointT&& value) {
    SetRevocationEndpoint(std::forward<RevocationEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authentication methods supported by the token endpoint.</p>
   */
  inline const Aws::Vector<Aws::String>& GetTokenEndpointAuthMethodsSupported() const { return m_tokenEndpointAuthMethodsSupported; }
  template <typename TokenEndpointAuthMethodsSupportedT = Aws::Vector<Aws::String>>
  void SetTokenEndpointAuthMethodsSupported(TokenEndpointAuthMethodsSupportedT&& value) {
    m_tokenEndpointAuthMethodsSupportedHasBeenSet = true;
    m_tokenEndpointAuthMethodsSupported = std::forward<TokenEndpointAuthMethodsSupportedT>(value);
  }
  template <typename TokenEndpointAuthMethodsSupportedT = Aws::Vector<Aws::String>>
  RegisterOidcConfigTestResult& WithTokenEndpointAuthMethodsSupported(TokenEndpointAuthMethodsSupportedT&& value) {
    SetTokenEndpointAuthMethodsSupported(std::forward<TokenEndpointAuthMethodsSupportedT>(value));
    return *this;
  }
  template <typename TokenEndpointAuthMethodsSupportedT = Aws::String>
  RegisterOidcConfigTestResult& AddTokenEndpointAuthMethodsSupported(TokenEndpointAuthMethodsSupportedT&& value) {
    m_tokenEndpointAuthMethodsSupportedHasBeenSet = true;
    m_tokenEndpointAuthMethodsSupported.emplace_back(std::forward<TokenEndpointAuthMethodsSupportedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the provider supports Microsoft multi-refresh tokens.</p>
   */
  inline bool GetMicrosoftMultiRefreshToken() const { return m_microsoftMultiRefreshToken; }
  inline void SetMicrosoftMultiRefreshToken(bool value) {
    m_microsoftMultiRefreshTokenHasBeenSet = true;
    m_microsoftMultiRefreshToken = value;
  }
  inline RegisterOidcConfigTestResult& WithMicrosoftMultiRefreshToken(bool value) {
    SetMicrosoftMultiRefreshToken(value);
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
  RegisterOidcConfigTestResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tokenEndpoint;

  Aws::String m_userinfoEndpoint;

  Aws::Vector<Aws::String> m_responseTypesSupported;

  Aws::Vector<Aws::String> m_scopesSupported;

  Aws::String m_issuer;

  Aws::String m_authorizationEndpoint;

  Aws::String m_endSessionEndpoint;

  Aws::String m_logoutEndpoint;

  Aws::Vector<Aws::String> m_grantTypesSupported;

  Aws::String m_revocationEndpoint;

  Aws::Vector<Aws::String> m_tokenEndpointAuthMethodsSupported;

  bool m_microsoftMultiRefreshToken{false};

  Aws::String m_requestId;
  bool m_tokenEndpointHasBeenSet = false;
  bool m_userinfoEndpointHasBeenSet = false;
  bool m_responseTypesSupportedHasBeenSet = false;
  bool m_scopesSupportedHasBeenSet = false;
  bool m_issuerHasBeenSet = false;
  bool m_authorizationEndpointHasBeenSet = false;
  bool m_endSessionEndpointHasBeenSet = false;
  bool m_logoutEndpointHasBeenSet = false;
  bool m_grantTypesSupportedHasBeenSet = false;
  bool m_revocationEndpointHasBeenSet = false;
  bool m_tokenEndpointAuthMethodsSupportedHasBeenSet = false;
  bool m_microsoftMultiRefreshTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
