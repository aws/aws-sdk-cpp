/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signin/Signin_EXPORTS.h>
#include <aws/signin/model/AccessToken.h>

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
 * <p>Response body payload for CreateOAuth2Token operation</p> <p>The response
 * content depends on the grant_type from the request:</p> <ul>
 * <li>grant_type=authorization_code: Returns all fields including refresh_token
 * and id_token</li> <li>grant_type=refresh_token: Returns access_token,
 * token_type, expires_in, refresh_token (no id_token)</li> </ul><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/CreateOAuth2TokenResponseBody">AWS
 * API Reference</a></p>
 */
class CreateOAuth2TokenResponseBody {
 public:
  AWS_SIGNIN_API CreateOAuth2TokenResponseBody() = default;
  AWS_SIGNIN_API CreateOAuth2TokenResponseBody(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIGNIN_API CreateOAuth2TokenResponseBody& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIGNIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Scoped-down AWS credentials (15 minute duration) Present for both
   * authorization code redemption and token refresh</p>
   */
  inline const AccessToken& GetAccessToken() const { return m_accessToken; }
  inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
  template <typename AccessTokenT = AccessToken>
  void SetAccessToken(AccessTokenT&& value) {
    m_accessTokenHasBeenSet = true;
    m_accessToken = std::forward<AccessTokenT>(value);
  }
  template <typename AccessTokenT = AccessToken>
  CreateOAuth2TokenResponseBody& WithAccessToken(AccessTokenT&& value) {
    SetAccessToken(std::forward<AccessTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token type indicating this is AWS SigV4 credentials Value is
   * &quot;aws_sigv4&quot; for both flows</p>
   */
  inline const Aws::String& GetTokenType() const { return m_tokenType; }
  inline bool TokenTypeHasBeenSet() const { return m_tokenTypeHasBeenSet; }
  template <typename TokenTypeT = Aws::String>
  void SetTokenType(TokenTypeT&& value) {
    m_tokenTypeHasBeenSet = true;
    m_tokenType = std::forward<TokenTypeT>(value);
  }
  template <typename TokenTypeT = Aws::String>
  CreateOAuth2TokenResponseBody& WithTokenType(TokenTypeT&& value) {
    SetTokenType(std::forward<TokenTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Time to expiry in seconds (maximum 900) Present for both authorization code
   * redemption and token refresh</p>
   */
  inline int GetExpiresIn() const { return m_expiresIn; }
  inline bool ExpiresInHasBeenSet() const { return m_expiresInHasBeenSet; }
  inline void SetExpiresIn(int value) {
    m_expiresInHasBeenSet = true;
    m_expiresIn = value;
  }
  inline CreateOAuth2TokenResponseBody& WithExpiresIn(int value) {
    SetExpiresIn(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Encrypted refresh token with cnf.jkt (SHA-256 thumbprint of presented jwk)
   * Always present in responses (required for both flows)</p>
   */
  inline const Aws::String& GetRefreshToken() const { return m_refreshToken; }
  inline bool RefreshTokenHasBeenSet() const { return m_refreshTokenHasBeenSet; }
  template <typename RefreshTokenT = Aws::String>
  void SetRefreshToken(RefreshTokenT&& value) {
    m_refreshTokenHasBeenSet = true;
    m_refreshToken = std::forward<RefreshTokenT>(value);
  }
  template <typename RefreshTokenT = Aws::String>
  CreateOAuth2TokenResponseBody& WithRefreshToken(RefreshTokenT&& value) {
    SetRefreshToken(std::forward<RefreshTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ID token containing user identity information Present only in authorization
   * code redemption response (grant_type=authorization_code) Not included in token
   * refresh responses</p>
   */
  inline const Aws::String& GetIdToken() const { return m_idToken; }
  inline bool IdTokenHasBeenSet() const { return m_idTokenHasBeenSet; }
  template <typename IdTokenT = Aws::String>
  void SetIdToken(IdTokenT&& value) {
    m_idTokenHasBeenSet = true;
    m_idToken = std::forward<IdTokenT>(value);
  }
  template <typename IdTokenT = Aws::String>
  CreateOAuth2TokenResponseBody& WithIdToken(IdTokenT&& value) {
    SetIdToken(std::forward<IdTokenT>(value));
    return *this;
  }
  ///@}
 private:
  AccessToken m_accessToken;

  Aws::String m_tokenType;

  int m_expiresIn{0};

  Aws::String m_refreshToken;

  Aws::String m_idToken;
  bool m_accessTokenHasBeenSet = false;
  bool m_tokenTypeHasBeenSet = false;
  bool m_expiresInHasBeenSet = false;
  bool m_refreshTokenHasBeenSet = false;
  bool m_idTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
