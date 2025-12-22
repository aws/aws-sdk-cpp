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
 * <p>Contains OAuth token information returned from the identity provider,
 * including access tokens, ID tokens, and PKCE parameters used for secure
 * authentication.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/OidcTokenInfo">AWS
 * API Reference</a></p>
 */
class OidcTokenInfo {
 public:
  AWS_WICKR_API OidcTokenInfo() = default;
  AWS_WICKR_API OidcTokenInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API OidcTokenInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The PKCE (Proof Key for Code Exchange) code verifier, a cryptographically
   * random string used to enhance security in the OAuth flow.</p>
   */
  inline const Aws::String& GetCodeVerifier() const { return m_codeVerifier; }
  inline bool CodeVerifierHasBeenSet() const { return m_codeVerifierHasBeenSet; }
  template <typename CodeVerifierT = Aws::String>
  void SetCodeVerifier(CodeVerifierT&& value) {
    m_codeVerifierHasBeenSet = true;
    m_codeVerifier = std::forward<CodeVerifierT>(value);
  }
  template <typename CodeVerifierT = Aws::String>
  OidcTokenInfo& WithCodeVerifier(CodeVerifierT&& value) {
    SetCodeVerifier(std::forward<CodeVerifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The PKCE code challenge, a transformed version of the code verifier sent
   * during the authorization request for verification.</p>
   */
  inline const Aws::String& GetCodeChallenge() const { return m_codeChallenge; }
  inline bool CodeChallengeHasBeenSet() const { return m_codeChallengeHasBeenSet; }
  template <typename CodeChallengeT = Aws::String>
  void SetCodeChallenge(CodeChallengeT&& value) {
    m_codeChallengeHasBeenSet = true;
    m_codeChallenge = std::forward<CodeChallengeT>(value);
  }
  template <typename CodeChallengeT = Aws::String>
  OidcTokenInfo& WithCodeChallenge(CodeChallengeT&& value) {
    SetCodeChallenge(std::forward<CodeChallengeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth access token that can be used to access protected resources on
   * behalf of the authenticated user.</p>
   */
  inline const Aws::String& GetAccessToken() const { return m_accessToken; }
  inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
  template <typename AccessTokenT = Aws::String>
  void SetAccessToken(AccessTokenT&& value) {
    m_accessTokenHasBeenSet = true;
    m_accessToken = std::forward<AccessTokenT>(value);
  }
  template <typename AccessTokenT = Aws::String>
  OidcTokenInfo& WithAccessToken(AccessTokenT&& value) {
    SetAccessToken(std::forward<AccessTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OpenID Connect ID token containing user identity information and
   * authentication context as a signed JWT.</p>
   */
  inline const Aws::String& GetIdToken() const { return m_idToken; }
  inline bool IdTokenHasBeenSet() const { return m_idTokenHasBeenSet; }
  template <typename IdTokenT = Aws::String>
  void SetIdToken(IdTokenT&& value) {
    m_idTokenHasBeenSet = true;
    m_idToken = std::forward<IdTokenT>(value);
  }
  template <typename IdTokenT = Aws::String>
  OidcTokenInfo& WithIdToken(IdTokenT&& value) {
    SetIdToken(std::forward<IdTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth refresh token that can be used to obtain new access tokens without
   * requiring the user to re-authenticate.</p>
   */
  inline const Aws::String& GetRefreshToken() const { return m_refreshToken; }
  inline bool RefreshTokenHasBeenSet() const { return m_refreshTokenHasBeenSet; }
  template <typename RefreshTokenT = Aws::String>
  void SetRefreshToken(RefreshTokenT&& value) {
    m_refreshTokenHasBeenSet = true;
    m_refreshToken = std::forward<RefreshTokenT>(value);
  }
  template <typename RefreshTokenT = Aws::String>
  OidcTokenInfo& WithRefreshToken(RefreshTokenT&& value) {
    SetRefreshToken(std::forward<RefreshTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of access token issued, typically 'Bearer', which indicates how the
   * token should be used in API requests.</p>
   */
  inline const Aws::String& GetTokenType() const { return m_tokenType; }
  inline bool TokenTypeHasBeenSet() const { return m_tokenTypeHasBeenSet; }
  template <typename TokenTypeT = Aws::String>
  void SetTokenType(TokenTypeT&& value) {
    m_tokenTypeHasBeenSet = true;
    m_tokenType = std::forward<TokenTypeT>(value);
  }
  template <typename TokenTypeT = Aws::String>
  OidcTokenInfo& WithTokenType(TokenTypeT&& value) {
    SetTokenType(std::forward<TokenTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifetime of the access token in seconds, indicating when the token will
   * expire and need to be refreshed.</p>
   */
  inline long long GetExpiresIn() const { return m_expiresIn; }
  inline bool ExpiresInHasBeenSet() const { return m_expiresInHasBeenSet; }
  inline void SetExpiresIn(long long value) {
    m_expiresInHasBeenSet = true;
    m_expiresIn = value;
  }
  inline OidcTokenInfo& WithExpiresIn(long long value) {
    SetExpiresIn(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_codeVerifier;

  Aws::String m_codeChallenge;

  Aws::String m_accessToken;

  Aws::String m_idToken;

  Aws::String m_refreshToken;

  Aws::String m_tokenType;

  long long m_expiresIn{0};
  bool m_codeVerifierHasBeenSet = false;
  bool m_codeChallengeHasBeenSet = false;
  bool m_accessTokenHasBeenSet = false;
  bool m_idTokenHasBeenSet = false;
  bool m_refreshTokenHasBeenSet = false;
  bool m_tokenTypeHasBeenSet = false;
  bool m_expiresInHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
