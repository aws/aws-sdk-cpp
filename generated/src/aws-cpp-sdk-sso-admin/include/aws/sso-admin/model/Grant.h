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
    AWS_SSOADMIN_API Grant();
    AWS_SSOADMIN_API Grant(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Grant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configuration options for the <code>authorization_code</code> grant type.</p>
     */
    inline const AuthorizationCodeGrant& GetAuthorizationCode() const{ return m_authorizationCode; }

    /**
     * <p>Configuration options for the <code>authorization_code</code> grant type.</p>
     */
    inline bool AuthorizationCodeHasBeenSet() const { return m_authorizationCodeHasBeenSet; }

    /**
     * <p>Configuration options for the <code>authorization_code</code> grant type.</p>
     */
    inline void SetAuthorizationCode(const AuthorizationCodeGrant& value) { m_authorizationCodeHasBeenSet = true; m_authorizationCode = value; }

    /**
     * <p>Configuration options for the <code>authorization_code</code> grant type.</p>
     */
    inline void SetAuthorizationCode(AuthorizationCodeGrant&& value) { m_authorizationCodeHasBeenSet = true; m_authorizationCode = std::move(value); }

    /**
     * <p>Configuration options for the <code>authorization_code</code> grant type.</p>
     */
    inline Grant& WithAuthorizationCode(const AuthorizationCodeGrant& value) { SetAuthorizationCode(value); return *this;}

    /**
     * <p>Configuration options for the <code>authorization_code</code> grant type.</p>
     */
    inline Grant& WithAuthorizationCode(AuthorizationCodeGrant&& value) { SetAuthorizationCode(std::move(value)); return *this;}


    /**
     * <p>Configuration options for the
     * <code>urn:ietf:params:oauth:grant-type:jwt-bearer</code> grant type.</p>
     */
    inline const JwtBearerGrant& GetJwtBearer() const{ return m_jwtBearer; }

    /**
     * <p>Configuration options for the
     * <code>urn:ietf:params:oauth:grant-type:jwt-bearer</code> grant type.</p>
     */
    inline bool JwtBearerHasBeenSet() const { return m_jwtBearerHasBeenSet; }

    /**
     * <p>Configuration options for the
     * <code>urn:ietf:params:oauth:grant-type:jwt-bearer</code> grant type.</p>
     */
    inline void SetJwtBearer(const JwtBearerGrant& value) { m_jwtBearerHasBeenSet = true; m_jwtBearer = value; }

    /**
     * <p>Configuration options for the
     * <code>urn:ietf:params:oauth:grant-type:jwt-bearer</code> grant type.</p>
     */
    inline void SetJwtBearer(JwtBearerGrant&& value) { m_jwtBearerHasBeenSet = true; m_jwtBearer = std::move(value); }

    /**
     * <p>Configuration options for the
     * <code>urn:ietf:params:oauth:grant-type:jwt-bearer</code> grant type.</p>
     */
    inline Grant& WithJwtBearer(const JwtBearerGrant& value) { SetJwtBearer(value); return *this;}

    /**
     * <p>Configuration options for the
     * <code>urn:ietf:params:oauth:grant-type:jwt-bearer</code> grant type.</p>
     */
    inline Grant& WithJwtBearer(JwtBearerGrant&& value) { SetJwtBearer(std::move(value)); return *this;}


    /**
     * <p>Configuration options for the <code>refresh_token</code> grant type.</p>
     */
    inline const RefreshTokenGrant& GetRefreshToken() const{ return m_refreshToken; }

    /**
     * <p>Configuration options for the <code>refresh_token</code> grant type.</p>
     */
    inline bool RefreshTokenHasBeenSet() const { return m_refreshTokenHasBeenSet; }

    /**
     * <p>Configuration options for the <code>refresh_token</code> grant type.</p>
     */
    inline void SetRefreshToken(const RefreshTokenGrant& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = value; }

    /**
     * <p>Configuration options for the <code>refresh_token</code> grant type.</p>
     */
    inline void SetRefreshToken(RefreshTokenGrant&& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = std::move(value); }

    /**
     * <p>Configuration options for the <code>refresh_token</code> grant type.</p>
     */
    inline Grant& WithRefreshToken(const RefreshTokenGrant& value) { SetRefreshToken(value); return *this;}

    /**
     * <p>Configuration options for the <code>refresh_token</code> grant type.</p>
     */
    inline Grant& WithRefreshToken(RefreshTokenGrant&& value) { SetRefreshToken(std::move(value)); return *this;}


    /**
     * <p>Configuration options for the
     * <code>urn:ietf:params:oauth:grant-type:token-exchange</code> grant type.</p>
     */
    inline const TokenExchangeGrant& GetTokenExchange() const{ return m_tokenExchange; }

    /**
     * <p>Configuration options for the
     * <code>urn:ietf:params:oauth:grant-type:token-exchange</code> grant type.</p>
     */
    inline bool TokenExchangeHasBeenSet() const { return m_tokenExchangeHasBeenSet; }

    /**
     * <p>Configuration options for the
     * <code>urn:ietf:params:oauth:grant-type:token-exchange</code> grant type.</p>
     */
    inline void SetTokenExchange(const TokenExchangeGrant& value) { m_tokenExchangeHasBeenSet = true; m_tokenExchange = value; }

    /**
     * <p>Configuration options for the
     * <code>urn:ietf:params:oauth:grant-type:token-exchange</code> grant type.</p>
     */
    inline void SetTokenExchange(TokenExchangeGrant&& value) { m_tokenExchangeHasBeenSet = true; m_tokenExchange = std::move(value); }

    /**
     * <p>Configuration options for the
     * <code>urn:ietf:params:oauth:grant-type:token-exchange</code> grant type.</p>
     */
    inline Grant& WithTokenExchange(const TokenExchangeGrant& value) { SetTokenExchange(value); return *this;}

    /**
     * <p>Configuration options for the
     * <code>urn:ietf:params:oauth:grant-type:token-exchange</code> grant type.</p>
     */
    inline Grant& WithTokenExchange(TokenExchangeGrant&& value) { SetTokenExchange(std::move(value)); return *this;}

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
