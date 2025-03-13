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
    AWS_SSOOIDC_API CreateTokenWithIAMRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTokenWithIAM"; }

    AWS_SSOOIDC_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier string for the client or application. This value is an
     * application ARN that has OAuth grants configured.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    CreateTokenWithIAMRequest& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Supports the following OAuth grant types: Authorization Code, Refresh Token,
     * JWT Bearer, and Token Exchange. Specify one of the following values, depending
     * on the grant type that you want:</p> <p>* Authorization Code -
     * <code>authorization_code</code> </p> <p>* Refresh Token -
     * <code>refresh_token</code> </p> <p>* JWT Bearer -
     * <code>urn:ietf:params:oauth:grant-type:jwt-bearer</code> </p> <p>* Token
     * Exchange - <code>urn:ietf:params:oauth:grant-type:token-exchange</code> </p>
     */
    inline const Aws::String& GetGrantType() const { return m_grantType; }
    inline bool GrantTypeHasBeenSet() const { return m_grantTypeHasBeenSet; }
    template<typename GrantTypeT = Aws::String>
    void SetGrantType(GrantTypeT&& value) { m_grantTypeHasBeenSet = true; m_grantType = std::forward<GrantTypeT>(value); }
    template<typename GrantTypeT = Aws::String>
    CreateTokenWithIAMRequest& WithGrantType(GrantTypeT&& value) { SetGrantType(std::forward<GrantTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used only when calling this API for the Authorization Code grant type. This
     * short-lived code is used to identify this authorization request. The code is
     * obtained through a redirect from IAM Identity Center to a redirect URI persisted
     * in the Authorization Code GrantOptions for the application.</p>
     */
    inline const Aws::String& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = Aws::String>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = Aws::String>
    CreateTokenWithIAMRequest& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
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
    CreateTokenWithIAMRequest& WithRefreshToken(RefreshTokenT&& value) { SetRefreshToken(std::forward<RefreshTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used only when calling this API for the JWT Bearer grant type. This value
     * specifies the JSON Web Token (JWT) issued by a trusted token issuer. To
     * authorize a trusted token issuer, configure the JWT Bearer GrantOptions for the
     * application.</p>
     */
    inline const Aws::String& GetAssertion() const { return m_assertion; }
    inline bool AssertionHasBeenSet() const { return m_assertionHasBeenSet; }
    template<typename AssertionT = Aws::String>
    void SetAssertion(AssertionT&& value) { m_assertionHasBeenSet = true; m_assertion = std::forward<AssertionT>(value); }
    template<typename AssertionT = Aws::String>
    CreateTokenWithIAMRequest& WithAssertion(AssertionT&& value) { SetAssertion(std::forward<AssertionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of scopes for which authorization is requested. The access token
     * that is issued is limited to the scopes that are granted. If the value is not
     * specified, IAM Identity Center authorizes all scopes configured for the
     * application, including the following default scopes: <code>openid</code>,
     * <code>aws</code>, <code>sts:identity_context</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    template<typename ScopeT = Aws::Vector<Aws::String>>
    void SetScope(ScopeT&& value) { m_scopeHasBeenSet = true; m_scope = std::forward<ScopeT>(value); }
    template<typename ScopeT = Aws::Vector<Aws::String>>
    CreateTokenWithIAMRequest& WithScope(ScopeT&& value) { SetScope(std::forward<ScopeT>(value)); return *this;}
    template<typename ScopeT = Aws::String>
    CreateTokenWithIAMRequest& AddScope(ScopeT&& value) { m_scopeHasBeenSet = true; m_scope.emplace_back(std::forward<ScopeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Used only when calling this API for the Authorization Code grant type. This
     * value specifies the location of the client or application that has registered to
     * receive the authorization code. </p>
     */
    inline const Aws::String& GetRedirectUri() const { return m_redirectUri; }
    inline bool RedirectUriHasBeenSet() const { return m_redirectUriHasBeenSet; }
    template<typename RedirectUriT = Aws::String>
    void SetRedirectUri(RedirectUriT&& value) { m_redirectUriHasBeenSet = true; m_redirectUri = std::forward<RedirectUriT>(value); }
    template<typename RedirectUriT = Aws::String>
    CreateTokenWithIAMRequest& WithRedirectUri(RedirectUriT&& value) { SetRedirectUri(std::forward<RedirectUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the subject of the exchange. The value of the subject token must be an
     * access token issued by IAM Identity Center to a different client or application.
     * The access token must have authorized scopes that indicate the requested
     * application as a target audience.</p>
     */
    inline const Aws::String& GetSubjectToken() const { return m_subjectToken; }
    inline bool SubjectTokenHasBeenSet() const { return m_subjectTokenHasBeenSet; }
    template<typename SubjectTokenT = Aws::String>
    void SetSubjectToken(SubjectTokenT&& value) { m_subjectTokenHasBeenSet = true; m_subjectToken = std::forward<SubjectTokenT>(value); }
    template<typename SubjectTokenT = Aws::String>
    CreateTokenWithIAMRequest& WithSubjectToken(SubjectTokenT&& value) { SetSubjectToken(std::forward<SubjectTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the type of token that is passed as the subject of the exchange. The
     * following value is supported:</p> <p>* Access Token -
     * <code>urn:ietf:params:oauth:token-type:access_token</code> </p>
     */
    inline const Aws::String& GetSubjectTokenType() const { return m_subjectTokenType; }
    inline bool SubjectTokenTypeHasBeenSet() const { return m_subjectTokenTypeHasBeenSet; }
    template<typename SubjectTokenTypeT = Aws::String>
    void SetSubjectTokenType(SubjectTokenTypeT&& value) { m_subjectTokenTypeHasBeenSet = true; m_subjectTokenType = std::forward<SubjectTokenTypeT>(value); }
    template<typename SubjectTokenTypeT = Aws::String>
    CreateTokenWithIAMRequest& WithSubjectTokenType(SubjectTokenTypeT&& value) { SetSubjectTokenType(std::forward<SubjectTokenTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the type of token that the requester can receive. The following values
     * are supported:</p> <p>* Access Token -
     * <code>urn:ietf:params:oauth:token-type:access_token</code> </p> <p>* Refresh
     * Token - <code>urn:ietf:params:oauth:token-type:refresh_token</code> </p>
     */
    inline const Aws::String& GetRequestedTokenType() const { return m_requestedTokenType; }
    inline bool RequestedTokenTypeHasBeenSet() const { return m_requestedTokenTypeHasBeenSet; }
    template<typename RequestedTokenTypeT = Aws::String>
    void SetRequestedTokenType(RequestedTokenTypeT&& value) { m_requestedTokenTypeHasBeenSet = true; m_requestedTokenType = std::forward<RequestedTokenTypeT>(value); }
    template<typename RequestedTokenTypeT = Aws::String>
    CreateTokenWithIAMRequest& WithRequestedTokenType(RequestedTokenTypeT&& value) { SetRequestedTokenType(std::forward<RequestedTokenTypeT>(value)); return *this;}
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
    CreateTokenWithIAMRequest& WithCodeVerifier(CodeVerifierT&& value) { SetCodeVerifier(std::forward<CodeVerifierT>(value)); return *this;}
    ///@}
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

    Aws::String m_codeVerifier;
    bool m_codeVerifierHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
