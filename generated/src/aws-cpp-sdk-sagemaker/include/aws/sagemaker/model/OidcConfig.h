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
   * <p>Use this parameter to configure your OIDC Identity Provider
   * (IdP).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/OidcConfig">AWS
   * API Reference</a></p>
   */
  class OidcConfig
  {
  public:
    AWS_SAGEMAKER_API OidcConfig();
    AWS_SAGEMAKER_API OidcConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API OidcConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The OIDC IdP client ID used to configure your private workforce.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }
    inline OidcConfig& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline OidcConfig& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline OidcConfig& WithClientId(const char* value) { SetClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OIDC IdP client secret used to configure your private workforce.</p>
     */
    inline const Aws::String& GetClientSecret() const{ return m_clientSecret; }
    inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }
    inline void SetClientSecret(const Aws::String& value) { m_clientSecretHasBeenSet = true; m_clientSecret = value; }
    inline void SetClientSecret(Aws::String&& value) { m_clientSecretHasBeenSet = true; m_clientSecret = std::move(value); }
    inline void SetClientSecret(const char* value) { m_clientSecretHasBeenSet = true; m_clientSecret.assign(value); }
    inline OidcConfig& WithClientSecret(const Aws::String& value) { SetClientSecret(value); return *this;}
    inline OidcConfig& WithClientSecret(Aws::String&& value) { SetClientSecret(std::move(value)); return *this;}
    inline OidcConfig& WithClientSecret(const char* value) { SetClientSecret(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OIDC IdP issuer used to configure your private workforce.</p>
     */
    inline const Aws::String& GetIssuer() const{ return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    inline void SetIssuer(const Aws::String& value) { m_issuerHasBeenSet = true; m_issuer = value; }
    inline void SetIssuer(Aws::String&& value) { m_issuerHasBeenSet = true; m_issuer = std::move(value); }
    inline void SetIssuer(const char* value) { m_issuerHasBeenSet = true; m_issuer.assign(value); }
    inline OidcConfig& WithIssuer(const Aws::String& value) { SetIssuer(value); return *this;}
    inline OidcConfig& WithIssuer(Aws::String&& value) { SetIssuer(std::move(value)); return *this;}
    inline OidcConfig& WithIssuer(const char* value) { SetIssuer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OIDC IdP authorization endpoint used to configure your private
     * workforce.</p>
     */
    inline const Aws::String& GetAuthorizationEndpoint() const{ return m_authorizationEndpoint; }
    inline bool AuthorizationEndpointHasBeenSet() const { return m_authorizationEndpointHasBeenSet; }
    inline void SetAuthorizationEndpoint(const Aws::String& value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint = value; }
    inline void SetAuthorizationEndpoint(Aws::String&& value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint = std::move(value); }
    inline void SetAuthorizationEndpoint(const char* value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint.assign(value); }
    inline OidcConfig& WithAuthorizationEndpoint(const Aws::String& value) { SetAuthorizationEndpoint(value); return *this;}
    inline OidcConfig& WithAuthorizationEndpoint(Aws::String&& value) { SetAuthorizationEndpoint(std::move(value)); return *this;}
    inline OidcConfig& WithAuthorizationEndpoint(const char* value) { SetAuthorizationEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OIDC IdP token endpoint used to configure your private workforce.</p>
     */
    inline const Aws::String& GetTokenEndpoint() const{ return m_tokenEndpoint; }
    inline bool TokenEndpointHasBeenSet() const { return m_tokenEndpointHasBeenSet; }
    inline void SetTokenEndpoint(const Aws::String& value) { m_tokenEndpointHasBeenSet = true; m_tokenEndpoint = value; }
    inline void SetTokenEndpoint(Aws::String&& value) { m_tokenEndpointHasBeenSet = true; m_tokenEndpoint = std::move(value); }
    inline void SetTokenEndpoint(const char* value) { m_tokenEndpointHasBeenSet = true; m_tokenEndpoint.assign(value); }
    inline OidcConfig& WithTokenEndpoint(const Aws::String& value) { SetTokenEndpoint(value); return *this;}
    inline OidcConfig& WithTokenEndpoint(Aws::String&& value) { SetTokenEndpoint(std::move(value)); return *this;}
    inline OidcConfig& WithTokenEndpoint(const char* value) { SetTokenEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OIDC IdP user information endpoint used to configure your private
     * workforce.</p>
     */
    inline const Aws::String& GetUserInfoEndpoint() const{ return m_userInfoEndpoint; }
    inline bool UserInfoEndpointHasBeenSet() const { return m_userInfoEndpointHasBeenSet; }
    inline void SetUserInfoEndpoint(const Aws::String& value) { m_userInfoEndpointHasBeenSet = true; m_userInfoEndpoint = value; }
    inline void SetUserInfoEndpoint(Aws::String&& value) { m_userInfoEndpointHasBeenSet = true; m_userInfoEndpoint = std::move(value); }
    inline void SetUserInfoEndpoint(const char* value) { m_userInfoEndpointHasBeenSet = true; m_userInfoEndpoint.assign(value); }
    inline OidcConfig& WithUserInfoEndpoint(const Aws::String& value) { SetUserInfoEndpoint(value); return *this;}
    inline OidcConfig& WithUserInfoEndpoint(Aws::String&& value) { SetUserInfoEndpoint(std::move(value)); return *this;}
    inline OidcConfig& WithUserInfoEndpoint(const char* value) { SetUserInfoEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OIDC IdP logout endpoint used to configure your private workforce.</p>
     */
    inline const Aws::String& GetLogoutEndpoint() const{ return m_logoutEndpoint; }
    inline bool LogoutEndpointHasBeenSet() const { return m_logoutEndpointHasBeenSet; }
    inline void SetLogoutEndpoint(const Aws::String& value) { m_logoutEndpointHasBeenSet = true; m_logoutEndpoint = value; }
    inline void SetLogoutEndpoint(Aws::String&& value) { m_logoutEndpointHasBeenSet = true; m_logoutEndpoint = std::move(value); }
    inline void SetLogoutEndpoint(const char* value) { m_logoutEndpointHasBeenSet = true; m_logoutEndpoint.assign(value); }
    inline OidcConfig& WithLogoutEndpoint(const Aws::String& value) { SetLogoutEndpoint(value); return *this;}
    inline OidcConfig& WithLogoutEndpoint(Aws::String&& value) { SetLogoutEndpoint(std::move(value)); return *this;}
    inline OidcConfig& WithLogoutEndpoint(const char* value) { SetLogoutEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OIDC IdP JSON Web Key Set (Jwks) URI used to configure your private
     * workforce.</p>
     */
    inline const Aws::String& GetJwksUri() const{ return m_jwksUri; }
    inline bool JwksUriHasBeenSet() const { return m_jwksUriHasBeenSet; }
    inline void SetJwksUri(const Aws::String& value) { m_jwksUriHasBeenSet = true; m_jwksUri = value; }
    inline void SetJwksUri(Aws::String&& value) { m_jwksUriHasBeenSet = true; m_jwksUri = std::move(value); }
    inline void SetJwksUri(const char* value) { m_jwksUriHasBeenSet = true; m_jwksUri.assign(value); }
    inline OidcConfig& WithJwksUri(const Aws::String& value) { SetJwksUri(value); return *this;}
    inline OidcConfig& WithJwksUri(Aws::String&& value) { SetJwksUri(std::move(value)); return *this;}
    inline OidcConfig& WithJwksUri(const char* value) { SetJwksUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of string identifiers used to refer to the specific pieces of user
     * data or claims that the client application wants to access.</p>
     */
    inline const Aws::String& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const Aws::String& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(Aws::String&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline void SetScope(const char* value) { m_scopeHasBeenSet = true; m_scope.assign(value); }
    inline OidcConfig& WithScope(const Aws::String& value) { SetScope(value); return *this;}
    inline OidcConfig& WithScope(Aws::String&& value) { SetScope(std::move(value)); return *this;}
    inline OidcConfig& WithScope(const char* value) { SetScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string to string map of identifiers specific to the custom identity
     * provider (IdP) being used.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAuthenticationRequestExtraParams() const{ return m_authenticationRequestExtraParams; }
    inline bool AuthenticationRequestExtraParamsHasBeenSet() const { return m_authenticationRequestExtraParamsHasBeenSet; }
    inline void SetAuthenticationRequestExtraParams(const Aws::Map<Aws::String, Aws::String>& value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams = value; }
    inline void SetAuthenticationRequestExtraParams(Aws::Map<Aws::String, Aws::String>&& value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams = std::move(value); }
    inline OidcConfig& WithAuthenticationRequestExtraParams(const Aws::Map<Aws::String, Aws::String>& value) { SetAuthenticationRequestExtraParams(value); return *this;}
    inline OidcConfig& WithAuthenticationRequestExtraParams(Aws::Map<Aws::String, Aws::String>&& value) { SetAuthenticationRequestExtraParams(std::move(value)); return *this;}
    inline OidcConfig& AddAuthenticationRequestExtraParams(const Aws::String& key, const Aws::String& value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(key, value); return *this; }
    inline OidcConfig& AddAuthenticationRequestExtraParams(Aws::String&& key, const Aws::String& value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(std::move(key), value); return *this; }
    inline OidcConfig& AddAuthenticationRequestExtraParams(const Aws::String& key, Aws::String&& value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(key, std::move(value)); return *this; }
    inline OidcConfig& AddAuthenticationRequestExtraParams(Aws::String&& key, Aws::String&& value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(std::move(key), std::move(value)); return *this; }
    inline OidcConfig& AddAuthenticationRequestExtraParams(const char* key, Aws::String&& value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(key, std::move(value)); return *this; }
    inline OidcConfig& AddAuthenticationRequestExtraParams(Aws::String&& key, const char* value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(std::move(key), value); return *this; }
    inline OidcConfig& AddAuthenticationRequestExtraParams(const char* key, const char* value) { m_authenticationRequestExtraParamsHasBeenSet = true; m_authenticationRequestExtraParams.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_clientSecret;
    bool m_clientSecretHasBeenSet = false;

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
