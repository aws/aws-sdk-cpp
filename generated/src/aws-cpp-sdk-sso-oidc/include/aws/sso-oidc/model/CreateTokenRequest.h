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
    AWS_SSOOIDC_API CreateTokenRequest() = default;

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
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    CreateTokenRequest& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A secret string generated for the client. This value should come from the
     * persisted result of the <a>RegisterClient</a> API.</p>
     */
    inline const Aws::String& GetClientSecret() const { return m_clientSecret; }
    inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }
    template<typename ClientSecretT = Aws::String>
    void SetClientSecret(ClientSecretT&& value) { m_clientSecretHasBeenSet = true; m_clientSecret = std::forward<ClientSecretT>(value); }
    template<typename ClientSecretT = Aws::String>
    CreateTokenRequest& WithClientSecret(ClientSecretT&& value) { SetClientSecret(std::forward<ClientSecretT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Supports the following OAuth grant types: Authorization Code, Device Code,
     * and Refresh Token. Specify one of the following values, depending on the grant
     * type that you want:</p> <p>* Authorization Code -
     * <code>authorization_code</code> </p> <p>* Device Code -
     * <code>urn:ietf:params:oauth:grant-type:device_code</code> </p> <p>* Refresh
     * Token - <code>refresh_token</code> </p>
     */
    inline const Aws::String& GetGrantType() const { return m_grantType; }
    inline bool GrantTypeHasBeenSet() const { return m_grantTypeHasBeenSet; }
    template<typename GrantTypeT = Aws::String>
    void SetGrantType(GrantTypeT&& value) { m_grantTypeHasBeenSet = true; m_grantType = std::forward<GrantTypeT>(value); }
    template<typename GrantTypeT = Aws::String>
    CreateTokenRequest& WithGrantType(GrantTypeT&& value) { SetGrantType(std::forward<GrantTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used only when calling this API for the Device Code grant type. This
     * short-lived code is used to identify this authorization request. This comes from
     * the result of the <a>StartDeviceAuthorization</a> API.</p>
     */
    inline const Aws::String& GetDeviceCode() const { return m_deviceCode; }
    inline bool DeviceCodeHasBeenSet() const { return m_deviceCodeHasBeenSet; }
    template<typename DeviceCodeT = Aws::String>
    void SetDeviceCode(DeviceCodeT&& value) { m_deviceCodeHasBeenSet = true; m_deviceCode = std::forward<DeviceCodeT>(value); }
    template<typename DeviceCodeT = Aws::String>
    CreateTokenRequest& WithDeviceCode(DeviceCodeT&& value) { SetDeviceCode(std::forward<DeviceCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used only when calling this API for the Authorization Code grant type. The
     * short-lived code is used to identify this authorization request.</p>
     */
    inline const Aws::String& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = Aws::String>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = Aws::String>
    CreateTokenRequest& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used only when calling this API for the Refresh Token grant type. This token
     * is used to refresh short-lived tokens, such as the access token, that might
     * expire.</p> <p>For more information about the features and limitations of the
     * current IAM Identity Center OIDC implementation, see <i>Considerations for Using
     * this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p>
     */
    inline const Aws::String& GetRefreshToken() const { return m_refreshToken; }
    inline bool RefreshTokenHasBeenSet() const { return m_refreshTokenHasBeenSet; }
    template<typename RefreshTokenT = Aws::String>
    void SetRefreshToken(RefreshTokenT&& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = std::forward<RefreshTokenT>(value); }
    template<typename RefreshTokenT = Aws::String>
    CreateTokenRequest& WithRefreshToken(RefreshTokenT&& value) { SetRefreshToken(std::forward<RefreshTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of scopes for which authorization is requested. This parameter has
     * no effect; the access token will always include all scopes configured during
     * client registration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    template<typename ScopeT = Aws::Vector<Aws::String>>
    void SetScope(ScopeT&& value) { m_scopeHasBeenSet = true; m_scope = std::forward<ScopeT>(value); }
    template<typename ScopeT = Aws::Vector<Aws::String>>
    CreateTokenRequest& WithScope(ScopeT&& value) { SetScope(std::forward<ScopeT>(value)); return *this;}
    template<typename ScopeT = Aws::String>
    CreateTokenRequest& AddScope(ScopeT&& value) { m_scopeHasBeenSet = true; m_scope.emplace_back(std::forward<ScopeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Used only when calling this API for the Authorization Code grant type. This
     * value specifies the location of the client or application that has registered to
     * receive the authorization code.</p>
     */
    inline const Aws::String& GetRedirectUri() const { return m_redirectUri; }
    inline bool RedirectUriHasBeenSet() const { return m_redirectUriHasBeenSet; }
    template<typename RedirectUriT = Aws::String>
    void SetRedirectUri(RedirectUriT&& value) { m_redirectUriHasBeenSet = true; m_redirectUri = std::forward<RedirectUriT>(value); }
    template<typename RedirectUriT = Aws::String>
    CreateTokenRequest& WithRedirectUri(RedirectUriT&& value) { SetRedirectUri(std::forward<RedirectUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used only when calling this API for the Authorization Code grant type. This
     * value is generated by the client and presented to validate the original code
     * challenge value the client passed at authorization time.</p>
     */
    inline const Aws::String& GetCodeVerifier() const { return m_codeVerifier; }
    inline bool CodeVerifierHasBeenSet() const { return m_codeVerifierHasBeenSet; }
    template<typename CodeVerifierT = Aws::String>
    void SetCodeVerifier(CodeVerifierT&& value) { m_codeVerifierHasBeenSet = true; m_codeVerifier = std::forward<CodeVerifierT>(value); }
    template<typename CodeVerifierT = Aws::String>
    CreateTokenRequest& WithCodeVerifier(CodeVerifierT&& value) { SetCodeVerifier(std::forward<CodeVerifierT>(value)); return *this;}
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
