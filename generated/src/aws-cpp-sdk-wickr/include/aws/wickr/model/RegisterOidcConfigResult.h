/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
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
class RegisterOidcConfigResult {
 public:
  AWS_WICKR_API RegisterOidcConfigResult() = default;
  AWS_WICKR_API RegisterOidcConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WICKR_API RegisterOidcConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the registered OIDC application.</p>
   */
  inline const Aws::String& GetApplicationName() const { return m_applicationName; }
  template <typename ApplicationNameT = Aws::String>
  void SetApplicationName(ApplicationNameT&& value) {
    m_applicationNameHasBeenSet = true;
    m_applicationName = std::forward<ApplicationNameT>(value);
  }
  template <typename ApplicationNameT = Aws::String>
  RegisterOidcConfigResult& WithApplicationName(ApplicationNameT&& value) {
    SetApplicationName(std::forward<ApplicationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth client ID assigned to the application.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  RegisterOidcConfigResult& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Custom identifier your end users will use to sign in with SSO.</p>
   */
  inline const Aws::String& GetCompanyId() const { return m_companyId; }
  template <typename CompanyIdT = Aws::String>
  void SetCompanyId(CompanyIdT&& value) {
    m_companyIdHasBeenSet = true;
    m_companyId = std::forward<CompanyIdT>(value);
  }
  template <typename CompanyIdT = Aws::String>
  RegisterOidcConfigResult& WithCompanyId(CompanyIdT&& value) {
    SetCompanyId(std::forward<CompanyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth scopes configured for the application.</p>
   */
  inline const Aws::String& GetScopes() const { return m_scopes; }
  template <typename ScopesT = Aws::String>
  void SetScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes = std::forward<ScopesT>(value);
  }
  template <typename ScopesT = Aws::String>
  RegisterOidcConfigResult& WithScopes(ScopesT&& value) {
    SetScopes(std::forward<ScopesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The issuer URL of the OIDC provider.</p>
   */
  inline const Aws::String& GetIssuer() const { return m_issuer; }
  template <typename IssuerT = Aws::String>
  void SetIssuer(IssuerT&& value) {
    m_issuerHasBeenSet = true;
    m_issuer = std::forward<IssuerT>(value);
  }
  template <typename IssuerT = Aws::String>
  RegisterOidcConfigResult& WithIssuer(IssuerT&& value) {
    SetIssuer(std::forward<IssuerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth client secret for the application.</p>
   */
  inline const Aws::String& GetClientSecret() const { return m_clientSecret; }
  template <typename ClientSecretT = Aws::String>
  void SetClientSecret(ClientSecretT&& value) {
    m_clientSecretHasBeenSet = true;
    m_clientSecret = std::forward<ClientSecretT>(value);
  }
  template <typename ClientSecretT = Aws::String>
  RegisterOidcConfigResult& WithClientSecret(ClientSecretT&& value) {
    SetClientSecret(std::forward<ClientSecretT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client secret for authenticating with the OIDC provider.</p>
   */
  inline const Aws::String& GetSecret() const { return m_secret; }
  template <typename SecretT = Aws::String>
  void SetSecret(SecretT&& value) {
    m_secretHasBeenSet = true;
    m_secret = std::forward<SecretT>(value);
  }
  template <typename SecretT = Aws::String>
  RegisterOidcConfigResult& WithSecret(SecretT&& value) {
    SetSecret(std::forward<SecretT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The redirect URL configured for the OAuth flow.</p>
   */
  inline const Aws::String& GetRedirectUrl() const { return m_redirectUrl; }
  template <typename RedirectUrlT = Aws::String>
  void SetRedirectUrl(RedirectUrlT&& value) {
    m_redirectUrlHasBeenSet = true;
    m_redirectUrl = std::forward<RedirectUrlT>(value);
  }
  template <typename RedirectUrlT = Aws::String>
  RegisterOidcConfigResult& WithRedirectUrl(RedirectUrlT&& value) {
    SetRedirectUrl(std::forward<RedirectUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The claim field being used as the user identifier.</p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  RegisterOidcConfigResult& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The custom field mapping used for extracting the username.</p>
   */
  inline const Aws::String& GetCustomUsername() const { return m_customUsername; }
  template <typename CustomUsernameT = Aws::String>
  void SetCustomUsername(CustomUsernameT&& value) {
    m_customUsernameHasBeenSet = true;
    m_customUsername = std::forward<CustomUsernameT>(value);
  }
  template <typename CustomUsernameT = Aws::String>
  RegisterOidcConfigResult& WithCustomUsername(CustomUsernameT&& value) {
    SetCustomUsername(std::forward<CustomUsernameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CA certificate used for secure communication with the OIDC provider.</p>
   */
  inline const Aws::String& GetCaCertificate() const { return m_caCertificate; }
  template <typename CaCertificateT = Aws::String>
  void SetCaCertificate(CaCertificateT&& value) {
    m_caCertificateHasBeenSet = true;
    m_caCertificate = std::forward<CaCertificateT>(value);
  }
  template <typename CaCertificateT = Aws::String>
  RegisterOidcConfigResult& WithCaCertificate(CaCertificateT&& value) {
    SetCaCertificate(std::forward<CaCertificateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the registered OIDC application.</p>
   */
  inline int GetApplicationId() const { return m_applicationId; }
  inline void SetApplicationId(int value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = value;
  }
  inline RegisterOidcConfigResult& WithApplicationId(int value) {
    SetApplicationId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The buffer time in minutes before the SSO token expires.</p>
   */
  inline int GetSsoTokenBufferMinutes() const { return m_ssoTokenBufferMinutes; }
  inline void SetSsoTokenBufferMinutes(int value) {
    m_ssoTokenBufferMinutesHasBeenSet = true;
    m_ssoTokenBufferMinutes = value;
  }
  inline RegisterOidcConfigResult& WithSsoTokenBufferMinutes(int value) {
    SetSsoTokenBufferMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The additional authentication parameters configured for the OIDC flow.</p>
   */
  inline const Aws::String& GetExtraAuthParams() const { return m_extraAuthParams; }
  template <typename ExtraAuthParamsT = Aws::String>
  void SetExtraAuthParams(ExtraAuthParamsT&& value) {
    m_extraAuthParamsHasBeenSet = true;
    m_extraAuthParams = std::forward<ExtraAuthParamsT>(value);
  }
  template <typename ExtraAuthParamsT = Aws::String>
  RegisterOidcConfigResult& WithExtraAuthParams(ExtraAuthParamsT&& value) {
    SetExtraAuthParams(std::forward<ExtraAuthParamsT>(value));
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
  RegisterOidcConfigResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationName;

  Aws::String m_clientId;

  Aws::String m_companyId;

  Aws::String m_scopes;

  Aws::String m_issuer;

  Aws::String m_clientSecret;

  Aws::String m_secret;

  Aws::String m_redirectUrl;

  Aws::String m_userId;

  Aws::String m_customUsername;

  Aws::String m_caCertificate;

  int m_applicationId{0};

  int m_ssoTokenBufferMinutes{0};

  Aws::String m_extraAuthParams;

  Aws::String m_requestId;
  bool m_applicationNameHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
  bool m_companyIdHasBeenSet = false;
  bool m_scopesHasBeenSet = false;
  bool m_issuerHasBeenSet = false;
  bool m_clientSecretHasBeenSet = false;
  bool m_secretHasBeenSet = false;
  bool m_redirectUrlHasBeenSet = false;
  bool m_userIdHasBeenSet = false;
  bool m_customUsernameHasBeenSet = false;
  bool m_caCertificateHasBeenSet = false;
  bool m_applicationIdHasBeenSet = false;
  bool m_ssoTokenBufferMinutesHasBeenSet = false;
  bool m_extraAuthParamsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
