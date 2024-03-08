/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-oidc/SSOOIDC_EXPORTS.h>
#include <aws/sso-oidc/SSOOIDCRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SSOOIDC
{
namespace Model
{

  /**
   */
  class CreateTokenWithIAMRequest : public SSOOIDCRequest
  {
  public:
    AWS_SSOOIDC_API CreateTokenWithIAMRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTokenWithIAM"; }

    AWS_SSOOIDC_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier string for the client or application. This value is an
     * application ARN that has OAuth grants configured.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The unique identifier string for the client or application. This value is an
     * application ARN that has OAuth grants configured.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>The unique identifier string for the client or application. This value is an
     * application ARN that has OAuth grants configured.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The unique identifier string for the client or application. This value is an
     * application ARN that has OAuth grants configured.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>The unique identifier string for the client or application. This value is an
     * application ARN that has OAuth grants configured.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The unique identifier string for the client or application. This value is an
     * application ARN that has OAuth grants configured.</p>
     */
    inline CreateTokenWithIAMRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The unique identifier string for the client or application. This value is an
     * application ARN that has OAuth grants configured.</p>
     */
    inline CreateTokenWithIAMRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier string for the client or application. This value is an
     * application ARN that has OAuth grants configured.</p>
     */
    inline CreateTokenWithIAMRequest& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>Supports the following OAuth grant types: Authorization Code, Refresh Token,
     * JWT Bearer, and Token Exchange. Specify one of the following values, depending
     * on the grant type that you want:</p> <p>* Authorization Code -
     * <code>authorization_code</code> </p> <p>* Refresh Token -
     * <code>refresh_token</code> </p> <p>* JWT Bearer -
     * <code>urn:ietf:params:oauth:grant-type:jwt-bearer</code> </p> <p>* Token
     * Exchange - <code>urn:ietf:params:oauth:grant-type:token-exchange</code> </p>
     */
    inline const Aws::String& GetGrantType() const{ return m_grantType; }

    /**
     * <p>Supports the following OAuth grant types: Authorization Code, Refresh Token,
     * JWT Bearer, and Token Exchange. Specify one of the following values, depending
     * on the grant type that you want:</p> <p>* Authorization Code -
     * <code>authorization_code</code> </p> <p>* Refresh Token -
     * <code>refresh_token</code> </p> <p>* JWT Bearer -
     * <code>urn:ietf:params:oauth:grant-type:jwt-bearer</code> </p> <p>* Token
     * Exchange - <code>urn:ietf:params:oauth:grant-type:token-exchange</code> </p>
     */
    inline bool GrantTypeHasBeenSet() const { return m_grantTypeHasBeenSet; }

    /**
     * <p>Supports the following OAuth grant types: Authorization Code, Refresh Token,
     * JWT Bearer, and Token Exchange. Specify one of the following values, depending
     * on the grant type that you want:</p> <p>* Authorization Code -
     * <code>authorization_code</code> </p> <p>* Refresh Token -
     * <code>refresh_token</code> </p> <p>* JWT Bearer -
     * <code>urn:ietf:params:oauth:grant-type:jwt-bearer</code> </p> <p>* Token
     * Exchange - <code>urn:ietf:params:oauth:grant-type:token-exchange</code> </p>
     */
    inline void SetGrantType(const Aws::String& value) { m_grantTypeHasBeenSet = true; m_grantType = value; }

    /**
     * <p>Supports the following OAuth grant types: Authorization Code, Refresh Token,
     * JWT Bearer, and Token Exchange. Specify one of the following values, depending
     * on the grant type that you want:</p> <p>* Authorization Code -
     * <code>authorization_code</code> </p> <p>* Refresh Token -
     * <code>refresh_token</code> </p> <p>* JWT Bearer -
     * <code>urn:ietf:params:oauth:grant-type:jwt-bearer</code> </p> <p>* Token
     * Exchange - <code>urn:ietf:params:oauth:grant-type:token-exchange</code> </p>
     */
    inline void SetGrantType(Aws::String&& value) { m_grantTypeHasBeenSet = true; m_grantType = std::move(value); }

    /**
     * <p>Supports the following OAuth grant types: Authorization Code, Refresh Token,
     * JWT Bearer, and Token Exchange. Specify one of the following values, depending
     * on the grant type that you want:</p> <p>* Authorization Code -
     * <code>authorization_code</code> </p> <p>* Refresh Token -
     * <code>refresh_token</code> </p> <p>* JWT Bearer -
     * <code>urn:ietf:params:oauth:grant-type:jwt-bearer</code> </p> <p>* Token
     * Exchange - <code>urn:ietf:params:oauth:grant-type:token-exchange</code> </p>
     */
    inline void SetGrantType(const char* value) { m_grantTypeHasBeenSet = true; m_grantType.assign(value); }

    /**
     * <p>Supports the following OAuth grant types: Authorization Code, Refresh Token,
     * JWT Bearer, and Token Exchange. Specify one of the following values, depending
     * on the grant type that you want:</p> <p>* Authorization Code -
     * <code>authorization_code</code> </p> <p>* Refresh Token -
     * <code>refresh_token</code> </p> <p>* JWT Bearer -
     * <code>urn:ietf:params:oauth:grant-type:jwt-bearer</code> </p> <p>* Token
     * Exchange - <code>urn:ietf:params:oauth:grant-type:token-exchange</code> </p>
     */
    inline CreateTokenWithIAMRequest& WithGrantType(const Aws::String& value) { SetGrantType(value); return *this;}

    /**
     * <p>Supports the following OAuth grant types: Authorization Code, Refresh Token,
     * JWT Bearer, and Token Exchange. Specify one of the following values, depending
     * on the grant type that you want:</p> <p>* Authorization Code -
     * <code>authorization_code</code> </p> <p>* Refresh Token -
     * <code>refresh_token</code> </p> <p>* JWT Bearer -
     * <code>urn:ietf:params:oauth:grant-type:jwt-bearer</code> </p> <p>* Token
     * Exchange - <code>urn:ietf:params:oauth:grant-type:token-exchange</code> </p>
     */
    inline CreateTokenWithIAMRequest& WithGrantType(Aws::String&& value) { SetGrantType(std::move(value)); return *this;}

    /**
     * <p>Supports the following OAuth grant types: Authorization Code, Refresh Token,
     * JWT Bearer, and Token Exchange. Specify one of the following values, depending
     * on the grant type that you want:</p> <p>* Authorization Code -
     * <code>authorization_code</code> </p> <p>* Refresh Token -
     * <code>refresh_token</code> </p> <p>* JWT Bearer -
     * <code>urn:ietf:params:oauth:grant-type:jwt-bearer</code> </p> <p>* Token
     * Exchange - <code>urn:ietf:params:oauth:grant-type:token-exchange</code> </p>
     */
    inline CreateTokenWithIAMRequest& WithGrantType(const char* value) { SetGrantType(value); return *this;}


    /**
     * <p>Used only when calling this API for the Authorization Code grant type. This
     * short-term code is used to identify this authorization request. The code is
     * obtained through a redirect from IAM Identity Center to a redirect URI persisted
     * in the Authorization Code GrantOptions for the application.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>Used only when calling this API for the Authorization Code grant type. This
     * short-term code is used to identify this authorization request. The code is
     * obtained through a redirect from IAM Identity Center to a redirect URI persisted
     * in the Authorization Code GrantOptions for the application.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>Used only when calling this API for the Authorization Code grant type. This
     * short-term code is used to identify this authorization request. The code is
     * obtained through a redirect from IAM Identity Center to a redirect URI persisted
     * in the Authorization Code GrantOptions for the application.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>Used only when calling this API for the Authorization Code grant type. This
     * short-term code is used to identify this authorization request. The code is
     * obtained through a redirect from IAM Identity Center to a redirect URI persisted
     * in the Authorization Code GrantOptions for the application.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>Used only when calling this API for the Authorization Code grant type. This
     * short-term code is used to identify this authorization request. The code is
     * obtained through a redirect from IAM Identity Center to a redirect URI persisted
     * in the Authorization Code GrantOptions for the application.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>Used only when calling this API for the Authorization Code grant type. This
     * short-term code is used to identify this authorization request. The code is
     * obtained through a redirect from IAM Identity Center to a redirect URI persisted
     * in the Authorization Code GrantOptions for the application.</p>
     */
    inline CreateTokenWithIAMRequest& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>Used only when calling this API for the Authorization Code grant type. This
     * short-term code is used to identify this authorization request. The code is
     * obtained through a redirect from IAM Identity Center to a redirect URI persisted
     * in the Authorization Code GrantOptions for the application.</p>
     */
    inline CreateTokenWithIAMRequest& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>Used only when calling this API for the Authorization Code grant type. This
     * short-term code is used to identify this authorization request. The code is
     * obtained through a redirect from IAM Identity Center to a redirect URI persisted
     * in the Authorization Code GrantOptions for the application.</p>
     */
    inline CreateTokenWithIAMRequest& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>Used only when calling this API for the Refresh Token grant type. This token
     * is used to refresh short-term tokens, such as the access token, that might
     * expire.</p> <p>For more information about the features and limitations of the
     * current IAM Identity Center OIDC implementation, see <i>Considerations for Using
     * this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p>
     */
    inline const Aws::String& GetRefreshToken() const{ return m_refreshToken; }

    /**
     * <p>Used only when calling this API for the Refresh Token grant type. This token
     * is used to refresh short-term tokens, such as the access token, that might
     * expire.</p> <p>For more information about the features and limitations of the
     * current IAM Identity Center OIDC implementation, see <i>Considerations for Using
     * this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p>
     */
    inline bool RefreshTokenHasBeenSet() const { return m_refreshTokenHasBeenSet; }

    /**
     * <p>Used only when calling this API for the Refresh Token grant type. This token
     * is used to refresh short-term tokens, such as the access token, that might
     * expire.</p> <p>For more information about the features and limitations of the
     * current IAM Identity Center OIDC implementation, see <i>Considerations for Using
     * this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p>
     */
    inline void SetRefreshToken(const Aws::String& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = value; }

    /**
     * <p>Used only when calling this API for the Refresh Token grant type. This token
     * is used to refresh short-term tokens, such as the access token, that might
     * expire.</p> <p>For more information about the features and limitations of the
     * current IAM Identity Center OIDC implementation, see <i>Considerations for Using
     * this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p>
     */
    inline void SetRefreshToken(Aws::String&& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = std::move(value); }

    /**
     * <p>Used only when calling this API for the Refresh Token grant type. This token
     * is used to refresh short-term tokens, such as the access token, that might
     * expire.</p> <p>For more information about the features and limitations of the
     * current IAM Identity Center OIDC implementation, see <i>Considerations for Using
     * this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p>
     */
    inline void SetRefreshToken(const char* value) { m_refreshTokenHasBeenSet = true; m_refreshToken.assign(value); }

    /**
     * <p>Used only when calling this API for the Refresh Token grant type. This token
     * is used to refresh short-term tokens, such as the access token, that might
     * expire.</p> <p>For more information about the features and limitations of the
     * current IAM Identity Center OIDC implementation, see <i>Considerations for Using
     * this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p>
     */
    inline CreateTokenWithIAMRequest& WithRefreshToken(const Aws::String& value) { SetRefreshToken(value); return *this;}

    /**
     * <p>Used only when calling this API for the Refresh Token grant type. This token
     * is used to refresh short-term tokens, such as the access token, that might
     * expire.</p> <p>For more information about the features and limitations of the
     * current IAM Identity Center OIDC implementation, see <i>Considerations for Using
     * this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p>
     */
    inline CreateTokenWithIAMRequest& WithRefreshToken(Aws::String&& value) { SetRefreshToken(std::move(value)); return *this;}

    /**
     * <p>Used only when calling this API for the Refresh Token grant type. This token
     * is used to refresh short-term tokens, such as the access token, that might
     * expire.</p> <p>For more information about the features and limitations of the
     * current IAM Identity Center OIDC implementation, see <i>Considerations for Using
     * this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p>
     */
    inline CreateTokenWithIAMRequest& WithRefreshToken(const char* value) { SetRefreshToken(value); return *this;}


    /**
     * <p>Used only when calling this API for the JWT Bearer grant type. This value
     * specifies the JSON Web Token (JWT) issued by a trusted token issuer. To
     * authorize a trusted token issuer, configure the JWT Bearer GrantOptions for the
     * application.</p>
     */
    inline const Aws::String& GetAssertion() const{ return m_assertion; }

    /**
     * <p>Used only when calling this API for the JWT Bearer grant type. This value
     * specifies the JSON Web Token (JWT) issued by a trusted token issuer. To
     * authorize a trusted token issuer, configure the JWT Bearer GrantOptions for the
     * application.</p>
     */
    inline bool AssertionHasBeenSet() const { return m_assertionHasBeenSet; }

    /**
     * <p>Used only when calling this API for the JWT Bearer grant type. This value
     * specifies the JSON Web Token (JWT) issued by a trusted token issuer. To
     * authorize a trusted token issuer, configure the JWT Bearer GrantOptions for the
     * application.</p>
     */
    inline void SetAssertion(const Aws::String& value) { m_assertionHasBeenSet = true; m_assertion = value; }

    /**
     * <p>Used only when calling this API for the JWT Bearer grant type. This value
     * specifies the JSON Web Token (JWT) issued by a trusted token issuer. To
     * authorize a trusted token issuer, configure the JWT Bearer GrantOptions for the
     * application.</p>
     */
    inline void SetAssertion(Aws::String&& value) { m_assertionHasBeenSet = true; m_assertion = std::move(value); }

    /**
     * <p>Used only when calling this API for the JWT Bearer grant type. This value
     * specifies the JSON Web Token (JWT) issued by a trusted token issuer. To
     * authorize a trusted token issuer, configure the JWT Bearer GrantOptions for the
     * application.</p>
     */
    inline void SetAssertion(const char* value) { m_assertionHasBeenSet = true; m_assertion.assign(value); }

    /**
     * <p>Used only when calling this API for the JWT Bearer grant type. This value
     * specifies the JSON Web Token (JWT) issued by a trusted token issuer. To
     * authorize a trusted token issuer, configure the JWT Bearer GrantOptions for the
     * application.</p>
     */
    inline CreateTokenWithIAMRequest& WithAssertion(const Aws::String& value) { SetAssertion(value); return *this;}

    /**
     * <p>Used only when calling this API for the JWT Bearer grant type. This value
     * specifies the JSON Web Token (JWT) issued by a trusted token issuer. To
     * authorize a trusted token issuer, configure the JWT Bearer GrantOptions for the
     * application.</p>
     */
    inline CreateTokenWithIAMRequest& WithAssertion(Aws::String&& value) { SetAssertion(std::move(value)); return *this;}

    /**
     * <p>Used only when calling this API for the JWT Bearer grant type. This value
     * specifies the JSON Web Token (JWT) issued by a trusted token issuer. To
     * authorize a trusted token issuer, configure the JWT Bearer GrantOptions for the
     * application.</p>
     */
    inline CreateTokenWithIAMRequest& WithAssertion(const char* value) { SetAssertion(value); return *this;}


    /**
     * <p>The list of scopes for which authorization is requested. The access token
     * that is issued is limited to the scopes that are granted. If the value is not
     * specified, IAM Identity Center authorizes all scopes configured for the
     * application, including the following default scopes: <code>openid</code>,
     * <code>aws</code>, <code>sts:identity_context</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScope() const{ return m_scope; }

    /**
     * <p>The list of scopes for which authorization is requested. The access token
     * that is issued is limited to the scopes that are granted. If the value is not
     * specified, IAM Identity Center authorizes all scopes configured for the
     * application, including the following default scopes: <code>openid</code>,
     * <code>aws</code>, <code>sts:identity_context</code>.</p>
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p>The list of scopes for which authorization is requested. The access token
     * that is issued is limited to the scopes that are granted. If the value is not
     * specified, IAM Identity Center authorizes all scopes configured for the
     * application, including the following default scopes: <code>openid</code>,
     * <code>aws</code>, <code>sts:identity_context</code>.</p>
     */
    inline void SetScope(const Aws::Vector<Aws::String>& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>The list of scopes for which authorization is requested. The access token
     * that is issued is limited to the scopes that are granted. If the value is not
     * specified, IAM Identity Center authorizes all scopes configured for the
     * application, including the following default scopes: <code>openid</code>,
     * <code>aws</code>, <code>sts:identity_context</code>.</p>
     */
    inline void SetScope(Aws::Vector<Aws::String>&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>The list of scopes for which authorization is requested. The access token
     * that is issued is limited to the scopes that are granted. If the value is not
     * specified, IAM Identity Center authorizes all scopes configured for the
     * application, including the following default scopes: <code>openid</code>,
     * <code>aws</code>, <code>sts:identity_context</code>.</p>
     */
    inline CreateTokenWithIAMRequest& WithScope(const Aws::Vector<Aws::String>& value) { SetScope(value); return *this;}

    /**
     * <p>The list of scopes for which authorization is requested. The access token
     * that is issued is limited to the scopes that are granted. If the value is not
     * specified, IAM Identity Center authorizes all scopes configured for the
     * application, including the following default scopes: <code>openid</code>,
     * <code>aws</code>, <code>sts:identity_context</code>.</p>
     */
    inline CreateTokenWithIAMRequest& WithScope(Aws::Vector<Aws::String>&& value) { SetScope(std::move(value)); return *this;}

    /**
     * <p>The list of scopes for which authorization is requested. The access token
     * that is issued is limited to the scopes that are granted. If the value is not
     * specified, IAM Identity Center authorizes all scopes configured for the
     * application, including the following default scopes: <code>openid</code>,
     * <code>aws</code>, <code>sts:identity_context</code>.</p>
     */
    inline CreateTokenWithIAMRequest& AddScope(const Aws::String& value) { m_scopeHasBeenSet = true; m_scope.push_back(value); return *this; }

    /**
     * <p>The list of scopes for which authorization is requested. The access token
     * that is issued is limited to the scopes that are granted. If the value is not
     * specified, IAM Identity Center authorizes all scopes configured for the
     * application, including the following default scopes: <code>openid</code>,
     * <code>aws</code>, <code>sts:identity_context</code>.</p>
     */
    inline CreateTokenWithIAMRequest& AddScope(Aws::String&& value) { m_scopeHasBeenSet = true; m_scope.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of scopes for which authorization is requested. The access token
     * that is issued is limited to the scopes that are granted. If the value is not
     * specified, IAM Identity Center authorizes all scopes configured for the
     * application, including the following default scopes: <code>openid</code>,
     * <code>aws</code>, <code>sts:identity_context</code>.</p>
     */
    inline CreateTokenWithIAMRequest& AddScope(const char* value) { m_scopeHasBeenSet = true; m_scope.push_back(value); return *this; }


    /**
     * <p>Used only when calling this API for the Authorization Code grant type. This
     * value specifies the location of the client or application that has registered to
     * receive the authorization code. </p>
     */
    inline const Aws::String& GetRedirectUri() const{ return m_redirectUri; }

    /**
     * <p>Used only when calling this API for the Authorization Code grant type. This
     * value specifies the location of the client or application that has registered to
     * receive the authorization code. </p>
     */
    inline bool RedirectUriHasBeenSet() const { return m_redirectUriHasBeenSet; }

    /**
     * <p>Used only when calling this API for the Authorization Code grant type. This
     * value specifies the location of the client or application that has registered to
     * receive the authorization code. </p>
     */
    inline void SetRedirectUri(const Aws::String& value) { m_redirectUriHasBeenSet = true; m_redirectUri = value; }

    /**
     * <p>Used only when calling this API for the Authorization Code grant type. This
     * value specifies the location of the client or application that has registered to
     * receive the authorization code. </p>
     */
    inline void SetRedirectUri(Aws::String&& value) { m_redirectUriHasBeenSet = true; m_redirectUri = std::move(value); }

    /**
     * <p>Used only when calling this API for the Authorization Code grant type. This
     * value specifies the location of the client or application that has registered to
     * receive the authorization code. </p>
     */
    inline void SetRedirectUri(const char* value) { m_redirectUriHasBeenSet = true; m_redirectUri.assign(value); }

    /**
     * <p>Used only when calling this API for the Authorization Code grant type. This
     * value specifies the location of the client or application that has registered to
     * receive the authorization code. </p>
     */
    inline CreateTokenWithIAMRequest& WithRedirectUri(const Aws::String& value) { SetRedirectUri(value); return *this;}

    /**
     * <p>Used only when calling this API for the Authorization Code grant type. This
     * value specifies the location of the client or application that has registered to
     * receive the authorization code. </p>
     */
    inline CreateTokenWithIAMRequest& WithRedirectUri(Aws::String&& value) { SetRedirectUri(std::move(value)); return *this;}

    /**
     * <p>Used only when calling this API for the Authorization Code grant type. This
     * value specifies the location of the client or application that has registered to
     * receive the authorization code. </p>
     */
    inline CreateTokenWithIAMRequest& WithRedirectUri(const char* value) { SetRedirectUri(value); return *this;}


    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the subject of the exchange. The value of the subject token must be an
     * access token issued by IAM Identity Center to a different client or application.
     * The access token must have authorized scopes that indicate the requested
     * application as a target audience.</p>
     */
    inline const Aws::String& GetSubjectToken() const{ return m_subjectToken; }

    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the subject of the exchange. The value of the subject token must be an
     * access token issued by IAM Identity Center to a different client or application.
     * The access token must have authorized scopes that indicate the requested
     * application as a target audience.</p>
     */
    inline bool SubjectTokenHasBeenSet() const { return m_subjectTokenHasBeenSet; }

    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the subject of the exchange. The value of the subject token must be an
     * access token issued by IAM Identity Center to a different client or application.
     * The access token must have authorized scopes that indicate the requested
     * application as a target audience.</p>
     */
    inline void SetSubjectToken(const Aws::String& value) { m_subjectTokenHasBeenSet = true; m_subjectToken = value; }

    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the subject of the exchange. The value of the subject token must be an
     * access token issued by IAM Identity Center to a different client or application.
     * The access token must have authorized scopes that indicate the requested
     * application as a target audience.</p>
     */
    inline void SetSubjectToken(Aws::String&& value) { m_subjectTokenHasBeenSet = true; m_subjectToken = std::move(value); }

    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the subject of the exchange. The value of the subject token must be an
     * access token issued by IAM Identity Center to a different client or application.
     * The access token must have authorized scopes that indicate the requested
     * application as a target audience.</p>
     */
    inline void SetSubjectToken(const char* value) { m_subjectTokenHasBeenSet = true; m_subjectToken.assign(value); }

    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the subject of the exchange. The value of the subject token must be an
     * access token issued by IAM Identity Center to a different client or application.
     * The access token must have authorized scopes that indicate the requested
     * application as a target audience.</p>
     */
    inline CreateTokenWithIAMRequest& WithSubjectToken(const Aws::String& value) { SetSubjectToken(value); return *this;}

    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the subject of the exchange. The value of the subject token must be an
     * access token issued by IAM Identity Center to a different client or application.
     * The access token must have authorized scopes that indicate the requested
     * application as a target audience.</p>
     */
    inline CreateTokenWithIAMRequest& WithSubjectToken(Aws::String&& value) { SetSubjectToken(std::move(value)); return *this;}

    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the subject of the exchange. The value of the subject token must be an
     * access token issued by IAM Identity Center to a different client or application.
     * The access token must have authorized scopes that indicate the requested
     * application as a target audience.</p>
     */
    inline CreateTokenWithIAMRequest& WithSubjectToken(const char* value) { SetSubjectToken(value); return *this;}


    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the type of token that is passed as the subject of the exchange. The
     * following value is supported:</p> <p>* Access Token -
     * <code>urn:ietf:params:oauth:token-type:access_token</code> </p>
     */
    inline const Aws::String& GetSubjectTokenType() const{ return m_subjectTokenType; }

    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the type of token that is passed as the subject of the exchange. The
     * following value is supported:</p> <p>* Access Token -
     * <code>urn:ietf:params:oauth:token-type:access_token</code> </p>
     */
    inline bool SubjectTokenTypeHasBeenSet() const { return m_subjectTokenTypeHasBeenSet; }

    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the type of token that is passed as the subject of the exchange. The
     * following value is supported:</p> <p>* Access Token -
     * <code>urn:ietf:params:oauth:token-type:access_token</code> </p>
     */
    inline void SetSubjectTokenType(const Aws::String& value) { m_subjectTokenTypeHasBeenSet = true; m_subjectTokenType = value; }

    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the type of token that is passed as the subject of the exchange. The
     * following value is supported:</p> <p>* Access Token -
     * <code>urn:ietf:params:oauth:token-type:access_token</code> </p>
     */
    inline void SetSubjectTokenType(Aws::String&& value) { m_subjectTokenTypeHasBeenSet = true; m_subjectTokenType = std::move(value); }

    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the type of token that is passed as the subject of the exchange. The
     * following value is supported:</p> <p>* Access Token -
     * <code>urn:ietf:params:oauth:token-type:access_token</code> </p>
     */
    inline void SetSubjectTokenType(const char* value) { m_subjectTokenTypeHasBeenSet = true; m_subjectTokenType.assign(value); }

    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the type of token that is passed as the subject of the exchange. The
     * following value is supported:</p> <p>* Access Token -
     * <code>urn:ietf:params:oauth:token-type:access_token</code> </p>
     */
    inline CreateTokenWithIAMRequest& WithSubjectTokenType(const Aws::String& value) { SetSubjectTokenType(value); return *this;}

    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the type of token that is passed as the subject of the exchange. The
     * following value is supported:</p> <p>* Access Token -
     * <code>urn:ietf:params:oauth:token-type:access_token</code> </p>
     */
    inline CreateTokenWithIAMRequest& WithSubjectTokenType(Aws::String&& value) { SetSubjectTokenType(std::move(value)); return *this;}

    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the type of token that is passed as the subject of the exchange. The
     * following value is supported:</p> <p>* Access Token -
     * <code>urn:ietf:params:oauth:token-type:access_token</code> </p>
     */
    inline CreateTokenWithIAMRequest& WithSubjectTokenType(const char* value) { SetSubjectTokenType(value); return *this;}


    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the type of token that the requester can receive. The following values
     * are supported:</p> <p>* Access Token -
     * <code>urn:ietf:params:oauth:token-type:access_token</code> </p> <p>* Refresh
     * Token - <code>urn:ietf:params:oauth:token-type:refresh_token</code> </p>
     */
    inline const Aws::String& GetRequestedTokenType() const{ return m_requestedTokenType; }

    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the type of token that the requester can receive. The following values
     * are supported:</p> <p>* Access Token -
     * <code>urn:ietf:params:oauth:token-type:access_token</code> </p> <p>* Refresh
     * Token - <code>urn:ietf:params:oauth:token-type:refresh_token</code> </p>
     */
    inline bool RequestedTokenTypeHasBeenSet() const { return m_requestedTokenTypeHasBeenSet; }

    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the type of token that the requester can receive. The following values
     * are supported:</p> <p>* Access Token -
     * <code>urn:ietf:params:oauth:token-type:access_token</code> </p> <p>* Refresh
     * Token - <code>urn:ietf:params:oauth:token-type:refresh_token</code> </p>
     */
    inline void SetRequestedTokenType(const Aws::String& value) { m_requestedTokenTypeHasBeenSet = true; m_requestedTokenType = value; }

    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the type of token that the requester can receive. The following values
     * are supported:</p> <p>* Access Token -
     * <code>urn:ietf:params:oauth:token-type:access_token</code> </p> <p>* Refresh
     * Token - <code>urn:ietf:params:oauth:token-type:refresh_token</code> </p>
     */
    inline void SetRequestedTokenType(Aws::String&& value) { m_requestedTokenTypeHasBeenSet = true; m_requestedTokenType = std::move(value); }

    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the type of token that the requester can receive. The following values
     * are supported:</p> <p>* Access Token -
     * <code>urn:ietf:params:oauth:token-type:access_token</code> </p> <p>* Refresh
     * Token - <code>urn:ietf:params:oauth:token-type:refresh_token</code> </p>
     */
    inline void SetRequestedTokenType(const char* value) { m_requestedTokenTypeHasBeenSet = true; m_requestedTokenType.assign(value); }

    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the type of token that the requester can receive. The following values
     * are supported:</p> <p>* Access Token -
     * <code>urn:ietf:params:oauth:token-type:access_token</code> </p> <p>* Refresh
     * Token - <code>urn:ietf:params:oauth:token-type:refresh_token</code> </p>
     */
    inline CreateTokenWithIAMRequest& WithRequestedTokenType(const Aws::String& value) { SetRequestedTokenType(value); return *this;}

    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the type of token that the requester can receive. The following values
     * are supported:</p> <p>* Access Token -
     * <code>urn:ietf:params:oauth:token-type:access_token</code> </p> <p>* Refresh
     * Token - <code>urn:ietf:params:oauth:token-type:refresh_token</code> </p>
     */
    inline CreateTokenWithIAMRequest& WithRequestedTokenType(Aws::String&& value) { SetRequestedTokenType(std::move(value)); return *this;}

    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the type of token that the requester can receive. The following values
     * are supported:</p> <p>* Access Token -
     * <code>urn:ietf:params:oauth:token-type:access_token</code> </p> <p>* Refresh
     * Token - <code>urn:ietf:params:oauth:token-type:refresh_token</code> </p>
     */
    inline CreateTokenWithIAMRequest& WithRequestedTokenType(const char* value) { SetRequestedTokenType(value); return *this;}

  private:

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_grantType;
    bool m_grantTypeHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_refreshToken;
    bool m_refreshTokenHasBeenSet = false;

    Aws::String m_assertion;
    bool m_assertionHasBeenSet = false;

    Aws::Vector<Aws::String> m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::String m_redirectUri;
    bool m_redirectUriHasBeenSet = false;

    Aws::String m_subjectToken;
    bool m_subjectTokenHasBeenSet = false;

    Aws::String m_subjectTokenType;
    bool m_subjectTokenTypeHasBeenSet = false;

    Aws::String m_requestedTokenType;
    bool m_requestedTokenTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
