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
  class CreateTokenRequest : public SSOOIDCRequest
  {
  public:
    AWS_SSOOIDC_API CreateTokenRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateToken"; }

    AWS_SSOOIDC_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier string for the client or application. This value comes
     * from the result of the <a>RegisterClient</a> API.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }
    inline CreateTokenRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline CreateTokenRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline CreateTokenRequest& WithClientId(const char* value) { SetClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A secret string generated for the client. This value should come from the
     * persisted result of the <a>RegisterClient</a> API.</p>
     */
    inline const Aws::String& GetClientSecret() const{ return m_clientSecret; }
    inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }
    inline void SetClientSecret(const Aws::String& value) { m_clientSecretHasBeenSet = true; m_clientSecret = value; }
    inline void SetClientSecret(Aws::String&& value) { m_clientSecretHasBeenSet = true; m_clientSecret = std::move(value); }
    inline void SetClientSecret(const char* value) { m_clientSecretHasBeenSet = true; m_clientSecret.assign(value); }
    inline CreateTokenRequest& WithClientSecret(const Aws::String& value) { SetClientSecret(value); return *this;}
    inline CreateTokenRequest& WithClientSecret(Aws::String&& value) { SetClientSecret(std::move(value)); return *this;}
    inline CreateTokenRequest& WithClientSecret(const char* value) { SetClientSecret(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Supports the following OAuth grant types: Device Code and Refresh Token.
     * Specify either of the following values, depending on the grant type that you
     * want:</p> <p>* Device Code -
     * <code>urn:ietf:params:oauth:grant-type:device_code</code> </p> <p>* Refresh
     * Token - <code>refresh_token</code> </p> <p>For information about how to obtain
     * the device code, see the <a>StartDeviceAuthorization</a> topic.</p>
     */
    inline const Aws::String& GetGrantType() const{ return m_grantType; }
    inline bool GrantTypeHasBeenSet() const { return m_grantTypeHasBeenSet; }
    inline void SetGrantType(const Aws::String& value) { m_grantTypeHasBeenSet = true; m_grantType = value; }
    inline void SetGrantType(Aws::String&& value) { m_grantTypeHasBeenSet = true; m_grantType = std::move(value); }
    inline void SetGrantType(const char* value) { m_grantTypeHasBeenSet = true; m_grantType.assign(value); }
    inline CreateTokenRequest& WithGrantType(const Aws::String& value) { SetGrantType(value); return *this;}
    inline CreateTokenRequest& WithGrantType(Aws::String&& value) { SetGrantType(std::move(value)); return *this;}
    inline CreateTokenRequest& WithGrantType(const char* value) { SetGrantType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used only when calling this API for the Device Code grant type. This
     * short-term code is used to identify this authorization request. This comes from
     * the result of the <a>StartDeviceAuthorization</a> API.</p>
     */
    inline const Aws::String& GetDeviceCode() const{ return m_deviceCode; }
    inline bool DeviceCodeHasBeenSet() const { return m_deviceCodeHasBeenSet; }
    inline void SetDeviceCode(const Aws::String& value) { m_deviceCodeHasBeenSet = true; m_deviceCode = value; }
    inline void SetDeviceCode(Aws::String&& value) { m_deviceCodeHasBeenSet = true; m_deviceCode = std::move(value); }
    inline void SetDeviceCode(const char* value) { m_deviceCodeHasBeenSet = true; m_deviceCode.assign(value); }
    inline CreateTokenRequest& WithDeviceCode(const Aws::String& value) { SetDeviceCode(value); return *this;}
    inline CreateTokenRequest& WithDeviceCode(Aws::String&& value) { SetDeviceCode(std::move(value)); return *this;}
    inline CreateTokenRequest& WithDeviceCode(const char* value) { SetDeviceCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used only when calling this API for the Authorization Code grant type. The
     * short-term code is used to identify this authorization request. This grant type
     * is currently unsupported for the <a>CreateToken</a> API.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }
    inline CreateTokenRequest& WithCode(const Aws::String& value) { SetCode(value); return *this;}
    inline CreateTokenRequest& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}
    inline CreateTokenRequest& WithCode(const char* value) { SetCode(value); return *this;}
    ///@}

    ///@{
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
    inline bool RefreshTokenHasBeenSet() const { return m_refreshTokenHasBeenSet; }
    inline void SetRefreshToken(const Aws::String& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = value; }
    inline void SetRefreshToken(Aws::String&& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = std::move(value); }
    inline void SetRefreshToken(const char* value) { m_refreshTokenHasBeenSet = true; m_refreshToken.assign(value); }
    inline CreateTokenRequest& WithRefreshToken(const Aws::String& value) { SetRefreshToken(value); return *this;}
    inline CreateTokenRequest& WithRefreshToken(Aws::String&& value) { SetRefreshToken(std::move(value)); return *this;}
    inline CreateTokenRequest& WithRefreshToken(const char* value) { SetRefreshToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of scopes for which authorization is requested. The access token
     * that is issued is limited to the scopes that are granted. If this value is not
     * specified, IAM Identity Center authorizes all scopes that are configured for the
     * client during the call to <a>RegisterClient</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const Aws::Vector<Aws::String>& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(Aws::Vector<Aws::String>&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline CreateTokenRequest& WithScope(const Aws::Vector<Aws::String>& value) { SetScope(value); return *this;}
    inline CreateTokenRequest& WithScope(Aws::Vector<Aws::String>&& value) { SetScope(std::move(value)); return *this;}
    inline CreateTokenRequest& AddScope(const Aws::String& value) { m_scopeHasBeenSet = true; m_scope.push_back(value); return *this; }
    inline CreateTokenRequest& AddScope(Aws::String&& value) { m_scopeHasBeenSet = true; m_scope.push_back(std::move(value)); return *this; }
    inline CreateTokenRequest& AddScope(const char* value) { m_scopeHasBeenSet = true; m_scope.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Used only when calling this API for the Authorization Code grant type. This
     * value specifies the location of the client or application that has registered to
     * receive the authorization code.</p>
     */
    inline const Aws::String& GetRedirectUri() const{ return m_redirectUri; }
    inline bool RedirectUriHasBeenSet() const { return m_redirectUriHasBeenSet; }
    inline void SetRedirectUri(const Aws::String& value) { m_redirectUriHasBeenSet = true; m_redirectUri = value; }
    inline void SetRedirectUri(Aws::String&& value) { m_redirectUriHasBeenSet = true; m_redirectUri = std::move(value); }
    inline void SetRedirectUri(const char* value) { m_redirectUriHasBeenSet = true; m_redirectUri.assign(value); }
    inline CreateTokenRequest& WithRedirectUri(const Aws::String& value) { SetRedirectUri(value); return *this;}
    inline CreateTokenRequest& WithRedirectUri(Aws::String&& value) { SetRedirectUri(std::move(value)); return *this;}
    inline CreateTokenRequest& WithRedirectUri(const char* value) { SetRedirectUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used only when calling this API for the Authorization Code grant type. This
     * value is generated by the client and presented to validate the original code
     * challenge value the client passed at authorization time.</p>
     */
    inline const Aws::String& GetCodeVerifier() const{ return m_codeVerifier; }
    inline bool CodeVerifierHasBeenSet() const { return m_codeVerifierHasBeenSet; }
    inline void SetCodeVerifier(const Aws::String& value) { m_codeVerifierHasBeenSet = true; m_codeVerifier = value; }
    inline void SetCodeVerifier(Aws::String&& value) { m_codeVerifierHasBeenSet = true; m_codeVerifier = std::move(value); }
    inline void SetCodeVerifier(const char* value) { m_codeVerifierHasBeenSet = true; m_codeVerifier.assign(value); }
    inline CreateTokenRequest& WithCodeVerifier(const Aws::String& value) { SetCodeVerifier(value); return *this;}
    inline CreateTokenRequest& WithCodeVerifier(Aws::String&& value) { SetCodeVerifier(std::move(value)); return *this;}
    inline CreateTokenRequest& WithCodeVerifier(const char* value) { SetCodeVerifier(value); return *this;}
    ///@}
  private:

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_clientSecret;
    bool m_clientSecretHasBeenSet = false;

    Aws::String m_grantType;
    bool m_grantTypeHasBeenSet = false;

    Aws::String m_deviceCode;
    bool m_deviceCodeHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_refreshToken;
    bool m_refreshTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::String m_redirectUri;
    bool m_redirectUriHasBeenSet = false;

    Aws::String m_codeVerifier;
    bool m_codeVerifierHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
