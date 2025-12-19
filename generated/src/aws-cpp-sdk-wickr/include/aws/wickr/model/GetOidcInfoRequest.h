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
namespace Http {
class URI;
}  // namespace Http
namespace Wickr {
namespace Model {

/**
 */
class GetOidcInfoRequest : public WickrRequest {
 public:
  AWS_WICKR_API GetOidcInfoRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetOidcInfo"; }

  AWS_WICKR_API Aws::String SerializePayload() const override;

  AWS_WICKR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The ID of the Wickr network whose OIDC configuration will be retrieved.</p>
   */
  inline const Aws::String& GetNetworkId() const { return m_networkId; }
  inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
  template <typename NetworkIdT = Aws::String>
  void SetNetworkId(NetworkIdT&& value) {
    m_networkIdHasBeenSet = true;
    m_networkId = std::forward<NetworkIdT>(value);
  }
  template <typename NetworkIdT = Aws::String>
  GetOidcInfoRequest& WithNetworkId(NetworkIdT&& value) {
    SetNetworkId(std::forward<NetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth client ID for retrieving access tokens (optional).</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  GetOidcInfoRequest& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authorization code for retrieving access tokens (optional).</p>
   */
  inline const Aws::String& GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  template <typename CodeT = Aws::String>
  void SetCode(CodeT&& value) {
    m_codeHasBeenSet = true;
    m_code = std::forward<CodeT>(value);
  }
  template <typename CodeT = Aws::String>
  GetOidcInfoRequest& WithCode(CodeT&& value) {
    SetCode(std::forward<CodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth grant type for retrieving access tokens (optional).</p>
   */
  inline const Aws::String& GetGrantType() const { return m_grantType; }
  inline bool GrantTypeHasBeenSet() const { return m_grantTypeHasBeenSet; }
  template <typename GrantTypeT = Aws::String>
  void SetGrantType(GrantTypeT&& value) {
    m_grantTypeHasBeenSet = true;
    m_grantType = std::forward<GrantTypeT>(value);
  }
  template <typename GrantTypeT = Aws::String>
  GetOidcInfoRequest& WithGrantType(GrantTypeT&& value) {
    SetGrantType(std::forward<GrantTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The redirect URI for the OAuth flow (optional).</p>
   */
  inline const Aws::String& GetRedirectUri() const { return m_redirectUri; }
  inline bool RedirectUriHasBeenSet() const { return m_redirectUriHasBeenSet; }
  template <typename RedirectUriT = Aws::String>
  void SetRedirectUri(RedirectUriT&& value) {
    m_redirectUriHasBeenSet = true;
    m_redirectUri = std::forward<RedirectUriT>(value);
  }
  template <typename RedirectUriT = Aws::String>
  GetOidcInfoRequest& WithRedirectUri(RedirectUriT&& value) {
    SetRedirectUri(std::forward<RedirectUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL for the OIDC provider (optional).</p>
   */
  inline const Aws::String& GetUrl() const { return m_url; }
  inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
  template <typename UrlT = Aws::String>
  void SetUrl(UrlT&& value) {
    m_urlHasBeenSet = true;
    m_url = std::forward<UrlT>(value);
  }
  template <typename UrlT = Aws::String>
  GetOidcInfoRequest& WithUrl(UrlT&& value) {
    SetUrl(std::forward<UrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth client secret for retrieving access tokens (optional).</p>
   */
  inline const Aws::String& GetClientSecret() const { return m_clientSecret; }
  inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }
  template <typename ClientSecretT = Aws::String>
  void SetClientSecret(ClientSecretT&& value) {
    m_clientSecretHasBeenSet = true;
    m_clientSecret = std::forward<ClientSecretT>(value);
  }
  template <typename ClientSecretT = Aws::String>
  GetOidcInfoRequest& WithClientSecret(ClientSecretT&& value) {
    SetClientSecret(std::forward<ClientSecretT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The PKCE code verifier for enhanced security in the OAuth flow
   * (optional).</p>
   */
  inline const Aws::String& GetCodeVerifier() const { return m_codeVerifier; }
  inline bool CodeVerifierHasBeenSet() const { return m_codeVerifierHasBeenSet; }
  template <typename CodeVerifierT = Aws::String>
  void SetCodeVerifier(CodeVerifierT&& value) {
    m_codeVerifierHasBeenSet = true;
    m_codeVerifier = std::forward<CodeVerifierT>(value);
  }
  template <typename CodeVerifierT = Aws::String>
  GetOidcInfoRequest& WithCodeVerifier(CodeVerifierT&& value) {
    SetCodeVerifier(std::forward<CodeVerifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CA certificate for secure communication with the OIDC provider
   * (optional).</p>
   */
  inline const Aws::String& GetCertificate() const { return m_certificate; }
  inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }
  template <typename CertificateT = Aws::String>
  void SetCertificate(CertificateT&& value) {
    m_certificateHasBeenSet = true;
    m_certificate = std::forward<CertificateT>(value);
  }
  template <typename CertificateT = Aws::String>
  GetOidcInfoRequest& WithCertificate(CertificateT&& value) {
    SetCertificate(std::forward<CertificateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkId;

  Aws::String m_clientId;

  Aws::String m_code;

  Aws::String m_grantType;

  Aws::String m_redirectUri;

  Aws::String m_url;

  Aws::String m_clientSecret;

  Aws::String m_codeVerifier;

  Aws::String m_certificate;
  bool m_networkIdHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
  bool m_codeHasBeenSet = false;
  bool m_grantTypeHasBeenSet = false;
  bool m_redirectUriHasBeenSet = false;
  bool m_urlHasBeenSet = false;
  bool m_clientSecretHasBeenSet = false;
  bool m_codeVerifierHasBeenSet = false;
  bool m_certificateHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
