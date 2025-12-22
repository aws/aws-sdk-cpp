/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/Wickr_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Wickr {
namespace Model {

/**
 * <p>Contains the OpenID Connect (OIDC) configuration information for Single
 * Sign-On (SSO) authentication, including identity provider settings and client
 * credentials.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/OidcConfigInfo">AWS
 * API Reference</a></p>
 */
class OidcConfigInfo {
 public:
  AWS_WICKR_API OidcConfigInfo() = default;
  AWS_WICKR_API OidcConfigInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API OidcConfigInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the OIDC application as registered with the identity
   * provider.</p>
   */
  inline const Aws::String& GetApplicationName() const { return m_applicationName; }
  inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
  template <typename ApplicationNameT = Aws::String>
  void SetApplicationName(ApplicationNameT&& value) {
    m_applicationNameHasBeenSet = true;
    m_applicationName = std::forward<ApplicationNameT>(value);
  }
  template <typename ApplicationNameT = Aws::String>
  OidcConfigInfo& WithApplicationName(ApplicationNameT&& value) {
    SetApplicationName(std::forward<ApplicationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth client ID assigned by the identity provider for authentication
   * requests.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  OidcConfigInfo& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Custom identifier your end users will use to sign in with SSO.</p>
   */
  inline const Aws::String& GetCompanyId() const { return m_companyId; }
  inline bool CompanyIdHasBeenSet() const { return m_companyIdHasBeenSet; }
  template <typename CompanyIdT = Aws::String>
  void SetCompanyId(CompanyIdT&& value) {
    m_companyIdHasBeenSet = true;
    m_companyId = std::forward<CompanyIdT>(value);
  }
  template <typename CompanyIdT = Aws::String>
  OidcConfigInfo& WithCompanyId(CompanyIdT&& value) {
    SetCompanyId(std::forward<CompanyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth scopes requested from the identity provider, which determine what
   * user information is accessible (e.g., 'openid profile email').</p>
   */
  inline const Aws::String& GetScopes() const { return m_scopes; }
  inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }
  template <typename ScopesT = Aws::String>
  void SetScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes = std::forward<ScopesT>(value);
  }
  template <typename ScopesT = Aws::String>
  OidcConfigInfo& WithScopes(ScopesT&& value) {
    SetScopes(std::forward<ScopesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The issuer URL of the identity provider, which serves as the base URL for
   * OIDC endpoints and configuration discovery.</p>
   */
  inline const Aws::String& GetIssuer() const { return m_issuer; }
  inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
  template <typename IssuerT = Aws::String>
  void SetIssuer(IssuerT&& value) {
    m_issuerHasBeenSet = true;
    m_issuer = std::forward<IssuerT>(value);
  }
  template <typename IssuerT = Aws::String>
  OidcConfigInfo& WithIssuer(IssuerT&& value) {
    SetIssuer(std::forward<IssuerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth client secret used to authenticate the application with the
   * identity provider.</p>
   */
  inline const Aws::String& GetClientSecret() const { return m_clientSecret; }
  inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }
  template <typename ClientSecretT = Aws::String>
  void SetClientSecret(ClientSecretT&& value) {
    m_clientSecretHasBeenSet = true;
    m_clientSecret = std::forward<ClientSecretT>(value);
  }
  template <typename ClientSecretT = Aws::String>
  OidcConfigInfo& WithClientSecret(ClientSecretT&& value) {
    SetClientSecret(std::forward<ClientSecretT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An additional secret credential used by the identity provider for
   * authentication.</p>
   */
  inline const Aws::String& GetSecret() const { return m_secret; }
  inline bool SecretHasBeenSet() const { return m_secretHasBeenSet; }
  template <typename SecretT = Aws::String>
  void SetSecret(SecretT&& value) {
    m_secretHasBeenSet = true;
    m_secret = std::forward<SecretT>(value);
  }
  template <typename SecretT = Aws::String>
  OidcConfigInfo& WithSecret(SecretT&& value) {
    SetSecret(std::forward<SecretT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The callback URL where the identity provider redirects users after successful
   * authentication. This URL must be registered with the identity provider.</p>
   */
  inline const Aws::String& GetRedirectUrl() const { return m_redirectUrl; }
  inline bool RedirectUrlHasBeenSet() const { return m_redirectUrlHasBeenSet; }
  template <typename RedirectUrlT = Aws::String>
  void SetRedirectUrl(RedirectUrlT&& value) {
    m_redirectUrlHasBeenSet = true;
    m_redirectUrl = std::forward<RedirectUrlT>(value);
  }
  template <typename RedirectUrlT = Aws::String>
  OidcConfigInfo& WithRedirectUrl(RedirectUrlT&& value) {
    SetRedirectUrl(std::forward<RedirectUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The claim field from the OIDC token to use as the unique user identifier
   * (e.g., 'email', 'sub', or a custom claim).</p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  OidcConfigInfo& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A custom field mapping to extract the username from the OIDC token when the
   * standard username claim is insufficient.</p>
   */
  inline const Aws::String& GetCustomUsername() const { return m_customUsername; }
  inline bool CustomUsernameHasBeenSet() const { return m_customUsernameHasBeenSet; }
  template <typename CustomUsernameT = Aws::String>
  void SetCustomUsername(CustomUsernameT&& value) {
    m_customUsernameHasBeenSet = true;
    m_customUsername = std::forward<CustomUsernameT>(value);
  }
  template <typename CustomUsernameT = Aws::String>
  OidcConfigInfo& WithCustomUsername(CustomUsernameT&& value) {
    SetCustomUsername(std::forward<CustomUsernameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The X.509 CA certificate for validating SSL/TLS connections to the identity
   * provider when using self-signed or enterprise certificates.</p>
   */
  inline const Aws::String& GetCaCertificate() const { return m_caCertificate; }
  inline bool CaCertificateHasBeenSet() const { return m_caCertificateHasBeenSet; }
  template <typename CaCertificateT = Aws::String>
  void SetCaCertificate(CaCertificateT&& value) {
    m_caCertificateHasBeenSet = true;
    m_caCertificate = std::forward<CaCertificateT>(value);
  }
  template <typename CaCertificateT = Aws::String>
  OidcConfigInfo& WithCaCertificate(CaCertificateT&& value) {
    SetCaCertificate(std::forward<CaCertificateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the registered OIDC application. Valid range is
   * 1-10.</p>
   */
  inline int GetApplicationId() const { return m_applicationId; }
  inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
  inline void SetApplicationId(int value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = value;
  }
  inline OidcConfigInfo& WithApplicationId(int value) {
    SetApplicationId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The grace period in minutes before the SSO token expires when the system
   * should proactively refresh the token to maintain seamless user access.</p>
   */
  inline int GetSsoTokenBufferMinutes() const { return m_ssoTokenBufferMinutes; }
  inline bool SsoTokenBufferMinutesHasBeenSet() const { return m_ssoTokenBufferMinutesHasBeenSet; }
  inline void SetSsoTokenBufferMinutes(int value) {
    m_ssoTokenBufferMinutesHasBeenSet = true;
    m_ssoTokenBufferMinutes = value;
  }
  inline OidcConfigInfo& WithSsoTokenBufferMinutes(int value) {
    SetSsoTokenBufferMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional authentication parameters to include in the OIDC authorization
   * request as a query string. Useful for provider-specific extensions.</p>
   */
  inline const Aws::String& GetExtraAuthParams() const { return m_extraAuthParams; }
  inline bool ExtraAuthParamsHasBeenSet() const { return m_extraAuthParamsHasBeenSet; }
  template <typename ExtraAuthParamsT = Aws::String>
  void SetExtraAuthParams(ExtraAuthParamsT&& value) {
    m_extraAuthParamsHasBeenSet = true;
    m_extraAuthParams = std::forward<ExtraAuthParamsT>(value);
  }
  template <typename ExtraAuthParamsT = Aws::String>
  OidcConfigInfo& WithExtraAuthParams(ExtraAuthParamsT&& value) {
    SetExtraAuthParams(std::forward<ExtraAuthParamsT>(value));
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
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
