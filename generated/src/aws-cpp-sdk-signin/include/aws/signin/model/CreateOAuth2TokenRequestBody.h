/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signin/Signin_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Signin {
namespace Model {

/**
 * <p>The request body for creating an OAuth 2.0 token. Supports both the
 * authorization code and refresh token flows, selected by the
 * &quot;grant_type&quot; parameter.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/CreateOAuth2TokenRequestBody">AWS
 * API Reference</a></p>
 */
class CreateOAuth2TokenRequestBody {
 public:
  AWS_SIGNIN_API CreateOAuth2TokenRequestBody() = default;
  AWS_SIGNIN_API CreateOAuth2TokenRequestBody(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIGNIN_API CreateOAuth2TokenRequestBody& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIGNIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The OAuth 2.0 client identifier. Expected values:
   * &quot;arn:aws:signin:::devtools/same-device&quot; or
   * &quot;arn:aws:signin:::devtools/cross-device&quot;.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  CreateOAuth2TokenRequestBody& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth 2.0 grant type. Supported values:</p> <ul>
   * <li>&quot;authorization_code&quot; - Exchange an authorization code for
   * tokens.</li> <li>&quot;refresh_token&quot; - Use a refresh token to obtain a new
   * access token.</li> </ul>
   */
  inline const Aws::String& GetGrantType() const { return m_grantType; }
  inline bool GrantTypeHasBeenSet() const { return m_grantTypeHasBeenSet; }
  template <typename GrantTypeT = Aws::String>
  void SetGrantType(GrantTypeT&& value) {
    m_grantTypeHasBeenSet = true;
    m_grantType = std::forward<GrantTypeT>(value);
  }
  template <typename GrantTypeT = Aws::String>
  CreateOAuth2TokenRequestBody& WithGrantType(GrantTypeT&& value) {
    SetGrantType(std::forward<GrantTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authorization code received from the &quot;/v1/authorize&quot; endpoint.
   * Required when &quot;grant_type=authorization_code&quot;.</p>
   */
  inline const Aws::String& GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  template <typename CodeT = Aws::String>
  void SetCode(CodeT&& value) {
    m_codeHasBeenSet = true;
    m_code = std::forward<CodeT>(value);
  }
  template <typename CodeT = Aws::String>
  CreateOAuth2TokenRequestBody& WithCode(CodeT&& value) {
    SetCode(std::forward<CodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The redirect URI that was used in the original authorization request. Must
   * match exactly. Required when &quot;grant_type=authorization_code&quot;.</p>
   */
  inline const Aws::String& GetRedirectUri() const { return m_redirectUri; }
  inline bool RedirectUriHasBeenSet() const { return m_redirectUriHasBeenSet; }
  template <typename RedirectUriT = Aws::String>
  void SetRedirectUri(RedirectUriT&& value) {
    m_redirectUriHasBeenSet = true;
    m_redirectUri = std::forward<RedirectUriT>(value);
  }
  template <typename RedirectUriT = Aws::String>
  CreateOAuth2TokenRequestBody& WithRedirectUri(RedirectUriT&& value) {
    SetRedirectUri(std::forward<RedirectUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The PKCE code verifier that proves possession of the original code challenge.
   * Required when &quot;grant_type=authorization_code&quot;.</p>
   */
  inline const Aws::String& GetCodeVerifier() const { return m_codeVerifier; }
  inline bool CodeVerifierHasBeenSet() const { return m_codeVerifierHasBeenSet; }
  template <typename CodeVerifierT = Aws::String>
  void SetCodeVerifier(CodeVerifierT&& value) {
    m_codeVerifierHasBeenSet = true;
    m_codeVerifier = std::forward<CodeVerifierT>(value);
  }
  template <typename CodeVerifierT = Aws::String>
  CreateOAuth2TokenRequestBody& WithCodeVerifier(CodeVerifierT&& value) {
    SetCodeVerifier(std::forward<CodeVerifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The refresh token issued by a previous token response. Required when
   * &quot;grant_type=refresh_token&quot;.</p>
   */
  inline const Aws::String& GetRefreshToken() const { return m_refreshToken; }
  inline bool RefreshTokenHasBeenSet() const { return m_refreshTokenHasBeenSet; }
  template <typename RefreshTokenT = Aws::String>
  void SetRefreshToken(RefreshTokenT&& value) {
    m_refreshTokenHasBeenSet = true;
    m_refreshToken = std::forward<RefreshTokenT>(value);
  }
  template <typename RefreshTokenT = Aws::String>
  CreateOAuth2TokenRequestBody& WithRefreshToken(RefreshTokenT&& value) {
    SetRefreshToken(std::forward<RefreshTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientId;

  Aws::String m_grantType;

  Aws::String m_code;

  Aws::String m_redirectUri;

  Aws::String m_codeVerifier;

  Aws::String m_refreshToken;
  bool m_clientIdHasBeenSet = false;
  bool m_grantTypeHasBeenSet = false;
  bool m_codeHasBeenSet = false;
  bool m_redirectUriHasBeenSet = false;
  bool m_codeVerifierHasBeenSet = false;
  bool m_refreshTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
