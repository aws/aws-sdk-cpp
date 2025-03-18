/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/AuthorizationCodeGrant.h>
#include <aws/sso-admin/model/JwtBearerGrant.h>
#include <aws/sso-admin/model/RefreshTokenGrant.h>
#include <aws/sso-admin/model/TokenExchangeGrant.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>The Grant union represents the set of possible configuration options for the
   * selected grant type. Exactly one member of the union must be specified, and must
   * match the grant type selected.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/Grant">AWS API
   * Reference</a></p>
   */
  class Grant
  {
  public:
    AWS_SSOADMIN_API Grant() = default;
    AWS_SSOADMIN_API Grant(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Grant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration options for the <code>authorization_code</code> grant type.</p>
     */
    inline const AuthorizationCodeGrant& GetAuthorizationCode() const { return m_authorizationCode; }
    inline bool AuthorizationCodeHasBeenSet() const { return m_authorizationCodeHasBeenSet; }
    template<typename AuthorizationCodeT = AuthorizationCodeGrant>
    void SetAuthorizationCode(AuthorizationCodeT&& value) { m_authorizationCodeHasBeenSet = true; m_authorizationCode = std::forward<AuthorizationCodeT>(value); }
    template<typename AuthorizationCodeT = AuthorizationCodeGrant>
    Grant& WithAuthorizationCode(AuthorizationCodeT&& value) { SetAuthorizationCode(std::forward<AuthorizationCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration options for the
     * <code>urn:ietf:params:oauth:grant-type:jwt-bearer</code> grant type.</p>
     */
    inline const JwtBearerGrant& GetJwtBearer() const { return m_jwtBearer; }
    inline bool JwtBearerHasBeenSet() const { return m_jwtBearerHasBeenSet; }
    template<typename JwtBearerT = JwtBearerGrant>
    void SetJwtBearer(JwtBearerT&& value) { m_jwtBearerHasBeenSet = true; m_jwtBearer = std::forward<JwtBearerT>(value); }
    template<typename JwtBearerT = JwtBearerGrant>
    Grant& WithJwtBearer(JwtBearerT&& value) { SetJwtBearer(std::forward<JwtBearerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration options for the <code>refresh_token</code> grant type.</p>
     */
    inline const RefreshTokenGrant& GetRefreshToken() const { return m_refreshToken; }
    inline bool RefreshTokenHasBeenSet() const { return m_refreshTokenHasBeenSet; }
    template<typename RefreshTokenT = RefreshTokenGrant>
    void SetRefreshToken(RefreshTokenT&& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = std::forward<RefreshTokenT>(value); }
    template<typename RefreshTokenT = RefreshTokenGrant>
    Grant& WithRefreshToken(RefreshTokenT&& value) { SetRefreshToken(std::forward<RefreshTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration options for the
     * <code>urn:ietf:params:oauth:grant-type:token-exchange</code> grant type.</p>
     */
    inline const TokenExchangeGrant& GetTokenExchange() const { return m_tokenExchange; }
    inline bool TokenExchangeHasBeenSet() const { return m_tokenExchangeHasBeenSet; }
    template<typename TokenExchangeT = TokenExchangeGrant>
    void SetTokenExchange(TokenExchangeT&& value) { m_tokenExchangeHasBeenSet = true; m_tokenExchange = std::forward<TokenExchangeT>(value); }
    template<typename TokenExchangeT = TokenExchangeGrant>
    Grant& WithTokenExchange(TokenExchangeT&& value) { SetTokenExchange(std::forward<TokenExchangeT>(value)); return *this;}
    ///@}
  private:

    AuthorizationCodeGrant m_authorizationCode;
    bool m_authorizationCodeHasBeenSet = false;

    JwtBearerGrant m_jwtBearer;
    bool m_jwtBearerHasBeenSet = false;

    RefreshTokenGrant m_refreshToken;
    bool m_refreshTokenHasBeenSet = false;

    TokenExchangeGrant m_tokenExchange;
    bool m_tokenExchangeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
