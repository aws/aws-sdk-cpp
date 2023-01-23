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


    /**
     * <p>The unique identifier string for each client. This value should come from the
     * persisted result of the <a>RegisterClient</a> API.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The unique identifier string for each client. This value should come from the
     * persisted result of the <a>RegisterClient</a> API.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>The unique identifier string for each client. This value should come from the
     * persisted result of the <a>RegisterClient</a> API.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The unique identifier string for each client. This value should come from the
     * persisted result of the <a>RegisterClient</a> API.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>The unique identifier string for each client. This value should come from the
     * persisted result of the <a>RegisterClient</a> API.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The unique identifier string for each client. This value should come from the
     * persisted result of the <a>RegisterClient</a> API.</p>
     */
    inline CreateTokenRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The unique identifier string for each client. This value should come from the
     * persisted result of the <a>RegisterClient</a> API.</p>
     */
    inline CreateTokenRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier string for each client. This value should come from the
     * persisted result of the <a>RegisterClient</a> API.</p>
     */
    inline CreateTokenRequest& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>A secret string generated for the client. This value should come from the
     * persisted result of the <a>RegisterClient</a> API.</p>
     */
    inline const Aws::String& GetClientSecret() const{ return m_clientSecret; }

    /**
     * <p>A secret string generated for the client. This value should come from the
     * persisted result of the <a>RegisterClient</a> API.</p>
     */
    inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }

    /**
     * <p>A secret string generated for the client. This value should come from the
     * persisted result of the <a>RegisterClient</a> API.</p>
     */
    inline void SetClientSecret(const Aws::String& value) { m_clientSecretHasBeenSet = true; m_clientSecret = value; }

    /**
     * <p>A secret string generated for the client. This value should come from the
     * persisted result of the <a>RegisterClient</a> API.</p>
     */
    inline void SetClientSecret(Aws::String&& value) { m_clientSecretHasBeenSet = true; m_clientSecret = std::move(value); }

    /**
     * <p>A secret string generated for the client. This value should come from the
     * persisted result of the <a>RegisterClient</a> API.</p>
     */
    inline void SetClientSecret(const char* value) { m_clientSecretHasBeenSet = true; m_clientSecret.assign(value); }

    /**
     * <p>A secret string generated for the client. This value should come from the
     * persisted result of the <a>RegisterClient</a> API.</p>
     */
    inline CreateTokenRequest& WithClientSecret(const Aws::String& value) { SetClientSecret(value); return *this;}

    /**
     * <p>A secret string generated for the client. This value should come from the
     * persisted result of the <a>RegisterClient</a> API.</p>
     */
    inline CreateTokenRequest& WithClientSecret(Aws::String&& value) { SetClientSecret(std::move(value)); return *this;}

    /**
     * <p>A secret string generated for the client. This value should come from the
     * persisted result of the <a>RegisterClient</a> API.</p>
     */
    inline CreateTokenRequest& WithClientSecret(const char* value) { SetClientSecret(value); return *this;}


    /**
     * <p>Supports grant types for the authorization code, refresh token, and device
     * code request. For device code requests, specify the following value:</p> <p>
     * <code>urn:ietf:params:oauth:grant-type:<i>device_code</i> </code> </p> <p>For
     * information about how to obtain the device code, see the
     * <a>StartDeviceAuthorization</a> topic.</p>
     */
    inline const Aws::String& GetGrantType() const{ return m_grantType; }

    /**
     * <p>Supports grant types for the authorization code, refresh token, and device
     * code request. For device code requests, specify the following value:</p> <p>
     * <code>urn:ietf:params:oauth:grant-type:<i>device_code</i> </code> </p> <p>For
     * information about how to obtain the device code, see the
     * <a>StartDeviceAuthorization</a> topic.</p>
     */
    inline bool GrantTypeHasBeenSet() const { return m_grantTypeHasBeenSet; }

    /**
     * <p>Supports grant types for the authorization code, refresh token, and device
     * code request. For device code requests, specify the following value:</p> <p>
     * <code>urn:ietf:params:oauth:grant-type:<i>device_code</i> </code> </p> <p>For
     * information about how to obtain the device code, see the
     * <a>StartDeviceAuthorization</a> topic.</p>
     */
    inline void SetGrantType(const Aws::String& value) { m_grantTypeHasBeenSet = true; m_grantType = value; }

    /**
     * <p>Supports grant types for the authorization code, refresh token, and device
     * code request. For device code requests, specify the following value:</p> <p>
     * <code>urn:ietf:params:oauth:grant-type:<i>device_code</i> </code> </p> <p>For
     * information about how to obtain the device code, see the
     * <a>StartDeviceAuthorization</a> topic.</p>
     */
    inline void SetGrantType(Aws::String&& value) { m_grantTypeHasBeenSet = true; m_grantType = std::move(value); }

    /**
     * <p>Supports grant types for the authorization code, refresh token, and device
     * code request. For device code requests, specify the following value:</p> <p>
     * <code>urn:ietf:params:oauth:grant-type:<i>device_code</i> </code> </p> <p>For
     * information about how to obtain the device code, see the
     * <a>StartDeviceAuthorization</a> topic.</p>
     */
    inline void SetGrantType(const char* value) { m_grantTypeHasBeenSet = true; m_grantType.assign(value); }

    /**
     * <p>Supports grant types for the authorization code, refresh token, and device
     * code request. For device code requests, specify the following value:</p> <p>
     * <code>urn:ietf:params:oauth:grant-type:<i>device_code</i> </code> </p> <p>For
     * information about how to obtain the device code, see the
     * <a>StartDeviceAuthorization</a> topic.</p>
     */
    inline CreateTokenRequest& WithGrantType(const Aws::String& value) { SetGrantType(value); return *this;}

    /**
     * <p>Supports grant types for the authorization code, refresh token, and device
     * code request. For device code requests, specify the following value:</p> <p>
     * <code>urn:ietf:params:oauth:grant-type:<i>device_code</i> </code> </p> <p>For
     * information about how to obtain the device code, see the
     * <a>StartDeviceAuthorization</a> topic.</p>
     */
    inline CreateTokenRequest& WithGrantType(Aws::String&& value) { SetGrantType(std::move(value)); return *this;}

    /**
     * <p>Supports grant types for the authorization code, refresh token, and device
     * code request. For device code requests, specify the following value:</p> <p>
     * <code>urn:ietf:params:oauth:grant-type:<i>device_code</i> </code> </p> <p>For
     * information about how to obtain the device code, see the
     * <a>StartDeviceAuthorization</a> topic.</p>
     */
    inline CreateTokenRequest& WithGrantType(const char* value) { SetGrantType(value); return *this;}


    /**
     * <p>Used only when calling this API for the device code grant type. This
     * short-term code is used to identify this authentication attempt. This should
     * come from an in-memory reference to the result of the
     * <a>StartDeviceAuthorization</a> API.</p>
     */
    inline const Aws::String& GetDeviceCode() const{ return m_deviceCode; }

    /**
     * <p>Used only when calling this API for the device code grant type. This
     * short-term code is used to identify this authentication attempt. This should
     * come from an in-memory reference to the result of the
     * <a>StartDeviceAuthorization</a> API.</p>
     */
    inline bool DeviceCodeHasBeenSet() const { return m_deviceCodeHasBeenSet; }

    /**
     * <p>Used only when calling this API for the device code grant type. This
     * short-term code is used to identify this authentication attempt. This should
     * come from an in-memory reference to the result of the
     * <a>StartDeviceAuthorization</a> API.</p>
     */
    inline void SetDeviceCode(const Aws::String& value) { m_deviceCodeHasBeenSet = true; m_deviceCode = value; }

    /**
     * <p>Used only when calling this API for the device code grant type. This
     * short-term code is used to identify this authentication attempt. This should
     * come from an in-memory reference to the result of the
     * <a>StartDeviceAuthorization</a> API.</p>
     */
    inline void SetDeviceCode(Aws::String&& value) { m_deviceCodeHasBeenSet = true; m_deviceCode = std::move(value); }

    /**
     * <p>Used only when calling this API for the device code grant type. This
     * short-term code is used to identify this authentication attempt. This should
     * come from an in-memory reference to the result of the
     * <a>StartDeviceAuthorization</a> API.</p>
     */
    inline void SetDeviceCode(const char* value) { m_deviceCodeHasBeenSet = true; m_deviceCode.assign(value); }

    /**
     * <p>Used only when calling this API for the device code grant type. This
     * short-term code is used to identify this authentication attempt. This should
     * come from an in-memory reference to the result of the
     * <a>StartDeviceAuthorization</a> API.</p>
     */
    inline CreateTokenRequest& WithDeviceCode(const Aws::String& value) { SetDeviceCode(value); return *this;}

    /**
     * <p>Used only when calling this API for the device code grant type. This
     * short-term code is used to identify this authentication attempt. This should
     * come from an in-memory reference to the result of the
     * <a>StartDeviceAuthorization</a> API.</p>
     */
    inline CreateTokenRequest& WithDeviceCode(Aws::String&& value) { SetDeviceCode(std::move(value)); return *this;}

    /**
     * <p>Used only when calling this API for the device code grant type. This
     * short-term code is used to identify this authentication attempt. This should
     * come from an in-memory reference to the result of the
     * <a>StartDeviceAuthorization</a> API.</p>
     */
    inline CreateTokenRequest& WithDeviceCode(const char* value) { SetDeviceCode(value); return *this;}


    /**
     * <p>The authorization code received from the authorization service. This
     * parameter is required to perform an authorization grant request to get access to
     * a token.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The authorization code received from the authorization service. This
     * parameter is required to perform an authorization grant request to get access to
     * a token.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The authorization code received from the authorization service. This
     * parameter is required to perform an authorization grant request to get access to
     * a token.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The authorization code received from the authorization service. This
     * parameter is required to perform an authorization grant request to get access to
     * a token.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The authorization code received from the authorization service. This
     * parameter is required to perform an authorization grant request to get access to
     * a token.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The authorization code received from the authorization service. This
     * parameter is required to perform an authorization grant request to get access to
     * a token.</p>
     */
    inline CreateTokenRequest& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The authorization code received from the authorization service. This
     * parameter is required to perform an authorization grant request to get access to
     * a token.</p>
     */
    inline CreateTokenRequest& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The authorization code received from the authorization service. This
     * parameter is required to perform an authorization grant request to get access to
     * a token.</p>
     */
    inline CreateTokenRequest& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>Currently, <code>refreshToken</code> is not yet implemented and is not
     * supported. For more information about the features and limitations of the
     * current IAM Identity Center OIDC implementation, see <i>Considerations for Using
     * this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p> <p>The token used to obtain an
     * access token in the event that the access token is invalid or expired.</p>
     */
    inline const Aws::String& GetRefreshToken() const{ return m_refreshToken; }

    /**
     * <p>Currently, <code>refreshToken</code> is not yet implemented and is not
     * supported. For more information about the features and limitations of the
     * current IAM Identity Center OIDC implementation, see <i>Considerations for Using
     * this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p> <p>The token used to obtain an
     * access token in the event that the access token is invalid or expired.</p>
     */
    inline bool RefreshTokenHasBeenSet() const { return m_refreshTokenHasBeenSet; }

    /**
     * <p>Currently, <code>refreshToken</code> is not yet implemented and is not
     * supported. For more information about the features and limitations of the
     * current IAM Identity Center OIDC implementation, see <i>Considerations for Using
     * this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p> <p>The token used to obtain an
     * access token in the event that the access token is invalid or expired.</p>
     */
    inline void SetRefreshToken(const Aws::String& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = value; }

    /**
     * <p>Currently, <code>refreshToken</code> is not yet implemented and is not
     * supported. For more information about the features and limitations of the
     * current IAM Identity Center OIDC implementation, see <i>Considerations for Using
     * this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p> <p>The token used to obtain an
     * access token in the event that the access token is invalid or expired.</p>
     */
    inline void SetRefreshToken(Aws::String&& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = std::move(value); }

    /**
     * <p>Currently, <code>refreshToken</code> is not yet implemented and is not
     * supported. For more information about the features and limitations of the
     * current IAM Identity Center OIDC implementation, see <i>Considerations for Using
     * this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p> <p>The token used to obtain an
     * access token in the event that the access token is invalid or expired.</p>
     */
    inline void SetRefreshToken(const char* value) { m_refreshTokenHasBeenSet = true; m_refreshToken.assign(value); }

    /**
     * <p>Currently, <code>refreshToken</code> is not yet implemented and is not
     * supported. For more information about the features and limitations of the
     * current IAM Identity Center OIDC implementation, see <i>Considerations for Using
     * this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p> <p>The token used to obtain an
     * access token in the event that the access token is invalid or expired.</p>
     */
    inline CreateTokenRequest& WithRefreshToken(const Aws::String& value) { SetRefreshToken(value); return *this;}

    /**
     * <p>Currently, <code>refreshToken</code> is not yet implemented and is not
     * supported. For more information about the features and limitations of the
     * current IAM Identity Center OIDC implementation, see <i>Considerations for Using
     * this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p> <p>The token used to obtain an
     * access token in the event that the access token is invalid or expired.</p>
     */
    inline CreateTokenRequest& WithRefreshToken(Aws::String&& value) { SetRefreshToken(std::move(value)); return *this;}

    /**
     * <p>Currently, <code>refreshToken</code> is not yet implemented and is not
     * supported. For more information about the features and limitations of the
     * current IAM Identity Center OIDC implementation, see <i>Considerations for Using
     * this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p> <p>The token used to obtain an
     * access token in the event that the access token is invalid or expired.</p>
     */
    inline CreateTokenRequest& WithRefreshToken(const char* value) { SetRefreshToken(value); return *this;}


    /**
     * <p>The list of scopes that is defined by the client. Upon authorization, this
     * list is used to restrict permissions when granting an access token.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScope() const{ return m_scope; }

    /**
     * <p>The list of scopes that is defined by the client. Upon authorization, this
     * list is used to restrict permissions when granting an access token.</p>
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p>The list of scopes that is defined by the client. Upon authorization, this
     * list is used to restrict permissions when granting an access token.</p>
     */
    inline void SetScope(const Aws::Vector<Aws::String>& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>The list of scopes that is defined by the client. Upon authorization, this
     * list is used to restrict permissions when granting an access token.</p>
     */
    inline void SetScope(Aws::Vector<Aws::String>&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>The list of scopes that is defined by the client. Upon authorization, this
     * list is used to restrict permissions when granting an access token.</p>
     */
    inline CreateTokenRequest& WithScope(const Aws::Vector<Aws::String>& value) { SetScope(value); return *this;}

    /**
     * <p>The list of scopes that is defined by the client. Upon authorization, this
     * list is used to restrict permissions when granting an access token.</p>
     */
    inline CreateTokenRequest& WithScope(Aws::Vector<Aws::String>&& value) { SetScope(std::move(value)); return *this;}

    /**
     * <p>The list of scopes that is defined by the client. Upon authorization, this
     * list is used to restrict permissions when granting an access token.</p>
     */
    inline CreateTokenRequest& AddScope(const Aws::String& value) { m_scopeHasBeenSet = true; m_scope.push_back(value); return *this; }

    /**
     * <p>The list of scopes that is defined by the client. Upon authorization, this
     * list is used to restrict permissions when granting an access token.</p>
     */
    inline CreateTokenRequest& AddScope(Aws::String&& value) { m_scopeHasBeenSet = true; m_scope.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of scopes that is defined by the client. Upon authorization, this
     * list is used to restrict permissions when granting an access token.</p>
     */
    inline CreateTokenRequest& AddScope(const char* value) { m_scopeHasBeenSet = true; m_scope.push_back(value); return *this; }


    /**
     * <p>The location of the application that will receive the authorization code.
     * Users authorize the service to send the request to this location.</p>
     */
    inline const Aws::String& GetRedirectUri() const{ return m_redirectUri; }

    /**
     * <p>The location of the application that will receive the authorization code.
     * Users authorize the service to send the request to this location.</p>
     */
    inline bool RedirectUriHasBeenSet() const { return m_redirectUriHasBeenSet; }

    /**
     * <p>The location of the application that will receive the authorization code.
     * Users authorize the service to send the request to this location.</p>
     */
    inline void SetRedirectUri(const Aws::String& value) { m_redirectUriHasBeenSet = true; m_redirectUri = value; }

    /**
     * <p>The location of the application that will receive the authorization code.
     * Users authorize the service to send the request to this location.</p>
     */
    inline void SetRedirectUri(Aws::String&& value) { m_redirectUriHasBeenSet = true; m_redirectUri = std::move(value); }

    /**
     * <p>The location of the application that will receive the authorization code.
     * Users authorize the service to send the request to this location.</p>
     */
    inline void SetRedirectUri(const char* value) { m_redirectUriHasBeenSet = true; m_redirectUri.assign(value); }

    /**
     * <p>The location of the application that will receive the authorization code.
     * Users authorize the service to send the request to this location.</p>
     */
    inline CreateTokenRequest& WithRedirectUri(const Aws::String& value) { SetRedirectUri(value); return *this;}

    /**
     * <p>The location of the application that will receive the authorization code.
     * Users authorize the service to send the request to this location.</p>
     */
    inline CreateTokenRequest& WithRedirectUri(Aws::String&& value) { SetRedirectUri(std::move(value)); return *this;}

    /**
     * <p>The location of the application that will receive the authorization code.
     * Users authorize the service to send the request to this location.</p>
     */
    inline CreateTokenRequest& WithRedirectUri(const char* value) { SetRedirectUri(value); return *this;}

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
  };

} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
