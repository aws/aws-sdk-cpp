/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/WickrRequest.h>
#include <aws/wickr/Wickr_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Wickr {
namespace Model {

/**
 */
class RegisterOidcConfigRequest : public WickrRequest {
 public:
  AWS_WICKR_API RegisterOidcConfigRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RegisterOidcConfig"; }

  AWS_WICKR_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Wickr network for which OIDC will be configured.</p>
   */
  inline const Aws::String& GetNetworkId() const { return m_networkId; }
  inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
  template <typename NetworkIdT = Aws::String>
  void SetNetworkId(NetworkIdT&& value) {
    m_networkIdHasBeenSet = true;
    m_networkId = std::forward<NetworkIdT>(value);
  }
  template <typename NetworkIdT = Aws::String>
  RegisterOidcConfigRequest& WithNetworkId(NetworkIdT&& value) {
    SetNetworkId(std::forward<NetworkIdT>(value));
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
  RegisterOidcConfigRequest& WithCompanyId(CompanyIdT&& value) {
    SetCompanyId(std::forward<CompanyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A custom field mapping to extract the username from the OIDC token
   * (optional). </p>  <p>The customUsername is only required if you use
   * something other than email as the username field.</p>
   */
  inline const Aws::String& GetCustomUsername() const { return m_customUsername; }
  inline bool CustomUsernameHasBeenSet() const { return m_customUsernameHasBeenSet; }
  template <typename CustomUsernameT = Aws::String>
  void SetCustomUsername(CustomUsernameT&& value) {
    m_customUsernameHasBeenSet = true;
    m_customUsername = std::forward<CustomUsernameT>(value);
  }
  template <typename CustomUsernameT = Aws::String>
  RegisterOidcConfigRequest& WithCustomUsername(CustomUsernameT&& value) {
    SetCustomUsername(std::forward<CustomUsernameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional authentication parameters to include in the OIDC flow
   * (optional).</p>
   */
  inline const Aws::String& GetExtraAuthParams() const { return m_extraAuthParams; }
  inline bool ExtraAuthParamsHasBeenSet() const { return m_extraAuthParamsHasBeenSet; }
  template <typename ExtraAuthParamsT = Aws::String>
  void SetExtraAuthParams(ExtraAuthParamsT&& value) {
    m_extraAuthParamsHasBeenSet = true;
    m_extraAuthParams = std::forward<ExtraAuthParamsT>(value);
  }
  template <typename ExtraAuthParamsT = Aws::String>
  RegisterOidcConfigRequest& WithExtraAuthParams(ExtraAuthParamsT&& value) {
    SetExtraAuthParams(std::forward<ExtraAuthParamsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The issuer URL of the OIDC provider (e.g., 'https://login.example.com').</p>
   */
  inline const Aws::String& GetIssuer() const { return m_issuer; }
  inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
  template <typename IssuerT = Aws::String>
  void SetIssuer(IssuerT&& value) {
    m_issuerHasBeenSet = true;
    m_issuer = std::forward<IssuerT>(value);
  }
  template <typename IssuerT = Aws::String>
  RegisterOidcConfigRequest& WithIssuer(IssuerT&& value) {
    SetIssuer(std::forward<IssuerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth scopes to request from the OIDC provider (e.g., 'openid profile
   * email').</p>
   */
  inline const Aws::String& GetScopes() const { return m_scopes; }
  inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }
  template <typename ScopesT = Aws::String>
  void SetScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes = std::forward<ScopesT>(value);
  }
  template <typename ScopesT = Aws::String>
  RegisterOidcConfigRequest& WithScopes(ScopesT&& value) {
    SetScopes(std::forward<ScopesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client secret for authenticating with the OIDC provider (optional).</p>
   */
  inline const Aws::String& GetSecret() const { return m_secret; }
  inline bool SecretHasBeenSet() const { return m_secretHasBeenSet; }
  template <typename SecretT = Aws::String>
  void SetSecret(SecretT&& value) {
    m_secretHasBeenSet = true;
    m_secret = std::forward<SecretT>(value);
  }
  template <typename SecretT = Aws::String>
  RegisterOidcConfigRequest& WithSecret(SecretT&& value) {
    SetSecret(std::forward<SecretT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The buffer time in minutes before the SSO token expires to refresh it
   * (optional).</p>
   */
  inline int GetSsoTokenBufferMinutes() const { return m_ssoTokenBufferMinutes; }
  inline bool SsoTokenBufferMinutesHasBeenSet() const { return m_ssoTokenBufferMinutesHasBeenSet; }
  inline void SetSsoTokenBufferMinutes(int value) {
    m_ssoTokenBufferMinutesHasBeenSet = true;
    m_ssoTokenBufferMinutes = value;
  }
  inline RegisterOidcConfigRequest& WithSsoTokenBufferMinutes(int value) {
    SetSsoTokenBufferMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique identifier provided by your identity provider to authenticate the
   * access request. Also referred to as clientID.</p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  RegisterOidcConfigRequest& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkId;

  Aws::String m_companyId;

  Aws::String m_customUsername;

  Aws::String m_extraAuthParams;

  Aws::String m_issuer;

  Aws::String m_scopes;

  Aws::String m_secret;

  int m_ssoTokenBufferMinutes{0};

  Aws::String m_userId;
  bool m_networkIdHasBeenSet = false;
  bool m_companyIdHasBeenSet = false;
  bool m_customUsernameHasBeenSet = false;
  bool m_extraAuthParamsHasBeenSet = false;
  bool m_issuerHasBeenSet = false;
  bool m_scopesHasBeenSet = false;
  bool m_secretHasBeenSet = false;
  bool m_ssoTokenBufferMinutesHasBeenSet = false;
  bool m_userIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
