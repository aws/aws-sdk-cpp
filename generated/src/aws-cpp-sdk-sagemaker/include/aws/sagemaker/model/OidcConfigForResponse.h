/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Your OIDC IdP workforce configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/OidcConfigForResponse">AWS
   * API Reference</a></p>
   */
  class OidcConfigForResponse
  {
  public:
    AWS_SAGEMAKER_API OidcConfigForResponse() = default;
    AWS_SAGEMAKER_API OidcConfigForResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API OidcConfigForResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The OIDC IdP client ID used to configure your private workforce.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    OidcConfigForResponse& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OIDC IdP issuer used to configure your private workforce.</p>
     */
    inline const Aws::String& GetIssuer() const { return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    template<typename IssuerT = Aws::String>
    void SetIssuer(IssuerT&& value) { m_issuerHasBeenSet = true; m_issuer = std::forward<IssuerT>(value); }
    template<typename IssuerT = Aws::String>
    OidcConfigForResponse& WithIssuer(IssuerT&& value) { SetIssuer(std::forward<IssuerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OIDC IdP authorization endpoint used to configure your private
     * workforce.</p>
     */
    inline const Aws::String& GetAuthorizationEndpoint() const { return m_authorizationEndpoint; }
    inline bool AuthorizationEndpointHasBeenSet() const { return m_authorizationEndpointHasBeenSet; }
    template<typename AuthorizationEndpointT = Aws::String>
    void SetAuthorizationEndpoint(AuthorizationEndpointT&& value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint = std::forward<AuthorizationEndpointT>(value); }
    template<typename AuthorizationEndpointT = Aws::String>
    OidcConfigForResponse& WithAuthorizationEndpoint(AuthorizationEndpointT&& value) { SetAuthorizationEndpoint(std::forward<AuthorizationEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OIDC IdP token endpoint used to configure your private workforce.</p>
     */
    inline const Aws::String& GetTokenEndpoint() const { return m_tokenEndpoint; }
    inline bool TokenEndpointHasBeenSet() const { return m_tokenEndpointHasBeenSet; }
    template<typename TokenEndpointT = Aws::String>
    void SetTokenEndpoint(TokenEndpointT&& value) { m_tokenEndpointHasBeenSet = true; m_tokenEndpoint = std::forward<TokenEndpointT>(value); }
    template<typename TokenEndpointT = Aws::String>
    OidcConfigForResponse& WithTokenEndpoint(TokenEndpointT&& value) { SetTokenEndpoint(std::forward<TokenEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OIDC IdP user information endpoint used to configure your private
     * workforce.</p>
     */
    inline const Aws::String& GetUserInfoEndpoint() const { return m_userInfoEndpoint; }
    inline bool UserInfoEndpointHasBeenSet() const { return m_userInfoEndpointHasBeenSet; }
    template<typename UserInfoEndpointT = Aws::String>
    void SetUserInfoEndpoint(UserInfoEndpointT&& value) { m_userInfoEndpointHasBeenSet = true; m_userInfoEndpoint = std::forward<UserInfoEndpointT>(value); }
    template<typename UserInfoEndpointT = Aws::String>
    OidcConfigForResponse& WithUserInfoEndpoint(UserInfoEndpointT&& value) { SetUserInfoEndpoint(std::forward<UserInfoEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OIDC IdP logout endpoint used to configure your private workforce.</p>
     */
    inline const Aws::String& GetLogoutEndpoint() const { return m_logoutEndpoint; }
    inline bool LogoutEndpointHasBeenSet() const { return m_logoutEndpointHasBeenSet; }
    template<typename LogoutEndpointT = Aws::String>
    void SetLogoutEndpoint(LogoutEndpointT&& value) { m_logoutEndpointHasBeenSet = true; m_logoutEndpoint = std::forward<LogoutEndpointT>(value); }
    template<typename LogoutEndpointT = Aws::String>
    OidcConfigForResponse& WithLogoutEndpoint(LogoutEndpointT&& value) { SetLogoutEndpoint(std::forward<LogoutEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OIDC IdP JSON Web Key Set (Jwks) URI used to configure your private
     * workforce.</p>
     */
    inline const Aws::String& GetJwksUri() const { return m_jwksUri; }
    inline bool JwksUriHasBeenSet() const { return m_jwksUriHasBeenSet; }
    template<typename JwksUriT = Aws::String>
    void SetJwksUri(JwksUriT&& value) { m_jwksUriHasBeenSet = true; m_jwksUri = std::forward<JwksUriT>(value); }
    template<typename JwksUriT = Aws::String>
    OidcConfigForResponse& WithJwksUri(JwksUriT&& value) { SetJwksUri(std::forward<JwksUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of string identifiers used to refer to the specific pieces of user
     * data or claims that the client application wants to access.</p>
     */
    inline const Aws::String& GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    template<typename ScopeT = Aws::String>
    void SetScope(ScopeT&& value) { m_scopeHasBeenSet = true; m_scope = std::forward<ScopeT>(value); }
    template<typename ScopeT = Aws::String>
    OidcConfigForResponse& WithScope(ScopeT&& value) { SetScope(std::forward<ScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string to string map of identifiers specific to the custom identity
     * provider (IdP) being used.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAuthenticationRequestExtraParams() const { return m_authenticationRequestExtraParams; }
    inline bool AuthenticationRequestExtraParamsHasBeenSet() const { return m_authenticationRequestExtraParamsHasBeenSet; }
    template<typename AuthenticationRequestExtraParamsT = Aws::Map<Aws::String, Aws::String>>
    void SetAuthenticationRequestExtraParams(AuthenticationRequestExtraParamsT&& value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams = std::forward<AuthenticationRequestExtraParamsT>(value); }
    template<typename AuthenticationRequestExtraParamsT = Aws::Map<Aws::String, Aws::String>>
    OidcConfigForResponse& WithAuthenticationRequestExtraParams(AuthenticationRequestExtraParamsT&& value) { SetAuthenticationRequestExtraParams(std::forward<AuthenticationRequestExtraParamsT>(value)); return *this;}
    template<typename AuthenticationRequestExtraParamsKeyT = Aws::String, typename AuthenticationRequestExtraParamsValueT = Aws::String>
    OidcConfigForResponse& AddAuthenticationRequestExtraParams(AuthenticationRequestExtraParamsKeyT&& key, AuthenticationRequestExtraParamsValueT&& value) {
      m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(std::forward<AuthenticationRequestExtraParamsKeyT>(key), std::forward<AuthenticationRequestExtraParamsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_issuer;
    bool m_issuerHasBeenSet = false;

    Aws::String m_authorizationEndpoint;
    bool m_authorizationEndpointHasBeenSet = false;

    Aws::String m_tokenEndpoint;
    bool m_tokenEndpointHasBeenSet = false;

    Aws::String m_userInfoEndpoint;
    bool m_userInfoEndpointHasBeenSet = false;

    Aws::String m_logoutEndpoint;
    bool m_logoutEndpointHasBeenSet = false;

    Aws::String m_jwksUri;
    bool m_jwksUriHasBeenSet = false;

    Aws::String m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_authenticationRequestExtraParams;
    bool m_authenticationRequestExtraParamsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
