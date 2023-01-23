/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_SAGEMAKER_API OidcConfigForResponse();
    AWS_SAGEMAKER_API OidcConfigForResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API OidcConfigForResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The OIDC IdP client ID used to configure your private workforce.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The OIDC IdP client ID used to configure your private workforce.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>The OIDC IdP client ID used to configure your private workforce.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The OIDC IdP client ID used to configure your private workforce.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>The OIDC IdP client ID used to configure your private workforce.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The OIDC IdP client ID used to configure your private workforce.</p>
     */
    inline OidcConfigForResponse& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The OIDC IdP client ID used to configure your private workforce.</p>
     */
    inline OidcConfigForResponse& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The OIDC IdP client ID used to configure your private workforce.</p>
     */
    inline OidcConfigForResponse& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>The OIDC IdP issuer used to configure your private workforce.</p>
     */
    inline const Aws::String& GetIssuer() const{ return m_issuer; }

    /**
     * <p>The OIDC IdP issuer used to configure your private workforce.</p>
     */
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }

    /**
     * <p>The OIDC IdP issuer used to configure your private workforce.</p>
     */
    inline void SetIssuer(const Aws::String& value) { m_issuerHasBeenSet = true; m_issuer = value; }

    /**
     * <p>The OIDC IdP issuer used to configure your private workforce.</p>
     */
    inline void SetIssuer(Aws::String&& value) { m_issuerHasBeenSet = true; m_issuer = std::move(value); }

    /**
     * <p>The OIDC IdP issuer used to configure your private workforce.</p>
     */
    inline void SetIssuer(const char* value) { m_issuerHasBeenSet = true; m_issuer.assign(value); }

    /**
     * <p>The OIDC IdP issuer used to configure your private workforce.</p>
     */
    inline OidcConfigForResponse& WithIssuer(const Aws::String& value) { SetIssuer(value); return *this;}

    /**
     * <p>The OIDC IdP issuer used to configure your private workforce.</p>
     */
    inline OidcConfigForResponse& WithIssuer(Aws::String&& value) { SetIssuer(std::move(value)); return *this;}

    /**
     * <p>The OIDC IdP issuer used to configure your private workforce.</p>
     */
    inline OidcConfigForResponse& WithIssuer(const char* value) { SetIssuer(value); return *this;}


    /**
     * <p>The OIDC IdP authorization endpoint used to configure your private
     * workforce.</p>
     */
    inline const Aws::String& GetAuthorizationEndpoint() const{ return m_authorizationEndpoint; }

    /**
     * <p>The OIDC IdP authorization endpoint used to configure your private
     * workforce.</p>
     */
    inline bool AuthorizationEndpointHasBeenSet() const { return m_authorizationEndpointHasBeenSet; }

    /**
     * <p>The OIDC IdP authorization endpoint used to configure your private
     * workforce.</p>
     */
    inline void SetAuthorizationEndpoint(const Aws::String& value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint = value; }

    /**
     * <p>The OIDC IdP authorization endpoint used to configure your private
     * workforce.</p>
     */
    inline void SetAuthorizationEndpoint(Aws::String&& value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint = std::move(value); }

    /**
     * <p>The OIDC IdP authorization endpoint used to configure your private
     * workforce.</p>
     */
    inline void SetAuthorizationEndpoint(const char* value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint.assign(value); }

    /**
     * <p>The OIDC IdP authorization endpoint used to configure your private
     * workforce.</p>
     */
    inline OidcConfigForResponse& WithAuthorizationEndpoint(const Aws::String& value) { SetAuthorizationEndpoint(value); return *this;}

    /**
     * <p>The OIDC IdP authorization endpoint used to configure your private
     * workforce.</p>
     */
    inline OidcConfigForResponse& WithAuthorizationEndpoint(Aws::String&& value) { SetAuthorizationEndpoint(std::move(value)); return *this;}

    /**
     * <p>The OIDC IdP authorization endpoint used to configure your private
     * workforce.</p>
     */
    inline OidcConfigForResponse& WithAuthorizationEndpoint(const char* value) { SetAuthorizationEndpoint(value); return *this;}


    /**
     * <p>The OIDC IdP token endpoint used to configure your private workforce.</p>
     */
    inline const Aws::String& GetTokenEndpoint() const{ return m_tokenEndpoint; }

    /**
     * <p>The OIDC IdP token endpoint used to configure your private workforce.</p>
     */
    inline bool TokenEndpointHasBeenSet() const { return m_tokenEndpointHasBeenSet; }

    /**
     * <p>The OIDC IdP token endpoint used to configure your private workforce.</p>
     */
    inline void SetTokenEndpoint(const Aws::String& value) { m_tokenEndpointHasBeenSet = true; m_tokenEndpoint = value; }

    /**
     * <p>The OIDC IdP token endpoint used to configure your private workforce.</p>
     */
    inline void SetTokenEndpoint(Aws::String&& value) { m_tokenEndpointHasBeenSet = true; m_tokenEndpoint = std::move(value); }

    /**
     * <p>The OIDC IdP token endpoint used to configure your private workforce.</p>
     */
    inline void SetTokenEndpoint(const char* value) { m_tokenEndpointHasBeenSet = true; m_tokenEndpoint.assign(value); }

    /**
     * <p>The OIDC IdP token endpoint used to configure your private workforce.</p>
     */
    inline OidcConfigForResponse& WithTokenEndpoint(const Aws::String& value) { SetTokenEndpoint(value); return *this;}

    /**
     * <p>The OIDC IdP token endpoint used to configure your private workforce.</p>
     */
    inline OidcConfigForResponse& WithTokenEndpoint(Aws::String&& value) { SetTokenEndpoint(std::move(value)); return *this;}

    /**
     * <p>The OIDC IdP token endpoint used to configure your private workforce.</p>
     */
    inline OidcConfigForResponse& WithTokenEndpoint(const char* value) { SetTokenEndpoint(value); return *this;}


    /**
     * <p>The OIDC IdP user information endpoint used to configure your private
     * workforce.</p>
     */
    inline const Aws::String& GetUserInfoEndpoint() const{ return m_userInfoEndpoint; }

    /**
     * <p>The OIDC IdP user information endpoint used to configure your private
     * workforce.</p>
     */
    inline bool UserInfoEndpointHasBeenSet() const { return m_userInfoEndpointHasBeenSet; }

    /**
     * <p>The OIDC IdP user information endpoint used to configure your private
     * workforce.</p>
     */
    inline void SetUserInfoEndpoint(const Aws::String& value) { m_userInfoEndpointHasBeenSet = true; m_userInfoEndpoint = value; }

    /**
     * <p>The OIDC IdP user information endpoint used to configure your private
     * workforce.</p>
     */
    inline void SetUserInfoEndpoint(Aws::String&& value) { m_userInfoEndpointHasBeenSet = true; m_userInfoEndpoint = std::move(value); }

    /**
     * <p>The OIDC IdP user information endpoint used to configure your private
     * workforce.</p>
     */
    inline void SetUserInfoEndpoint(const char* value) { m_userInfoEndpointHasBeenSet = true; m_userInfoEndpoint.assign(value); }

    /**
     * <p>The OIDC IdP user information endpoint used to configure your private
     * workforce.</p>
     */
    inline OidcConfigForResponse& WithUserInfoEndpoint(const Aws::String& value) { SetUserInfoEndpoint(value); return *this;}

    /**
     * <p>The OIDC IdP user information endpoint used to configure your private
     * workforce.</p>
     */
    inline OidcConfigForResponse& WithUserInfoEndpoint(Aws::String&& value) { SetUserInfoEndpoint(std::move(value)); return *this;}

    /**
     * <p>The OIDC IdP user information endpoint used to configure your private
     * workforce.</p>
     */
    inline OidcConfigForResponse& WithUserInfoEndpoint(const char* value) { SetUserInfoEndpoint(value); return *this;}


    /**
     * <p>The OIDC IdP logout endpoint used to configure your private workforce.</p>
     */
    inline const Aws::String& GetLogoutEndpoint() const{ return m_logoutEndpoint; }

    /**
     * <p>The OIDC IdP logout endpoint used to configure your private workforce.</p>
     */
    inline bool LogoutEndpointHasBeenSet() const { return m_logoutEndpointHasBeenSet; }

    /**
     * <p>The OIDC IdP logout endpoint used to configure your private workforce.</p>
     */
    inline void SetLogoutEndpoint(const Aws::String& value) { m_logoutEndpointHasBeenSet = true; m_logoutEndpoint = value; }

    /**
     * <p>The OIDC IdP logout endpoint used to configure your private workforce.</p>
     */
    inline void SetLogoutEndpoint(Aws::String&& value) { m_logoutEndpointHasBeenSet = true; m_logoutEndpoint = std::move(value); }

    /**
     * <p>The OIDC IdP logout endpoint used to configure your private workforce.</p>
     */
    inline void SetLogoutEndpoint(const char* value) { m_logoutEndpointHasBeenSet = true; m_logoutEndpoint.assign(value); }

    /**
     * <p>The OIDC IdP logout endpoint used to configure your private workforce.</p>
     */
    inline OidcConfigForResponse& WithLogoutEndpoint(const Aws::String& value) { SetLogoutEndpoint(value); return *this;}

    /**
     * <p>The OIDC IdP logout endpoint used to configure your private workforce.</p>
     */
    inline OidcConfigForResponse& WithLogoutEndpoint(Aws::String&& value) { SetLogoutEndpoint(std::move(value)); return *this;}

    /**
     * <p>The OIDC IdP logout endpoint used to configure your private workforce.</p>
     */
    inline OidcConfigForResponse& WithLogoutEndpoint(const char* value) { SetLogoutEndpoint(value); return *this;}


    /**
     * <p>The OIDC IdP JSON Web Key Set (Jwks) URI used to configure your private
     * workforce.</p>
     */
    inline const Aws::String& GetJwksUri() const{ return m_jwksUri; }

    /**
     * <p>The OIDC IdP JSON Web Key Set (Jwks) URI used to configure your private
     * workforce.</p>
     */
    inline bool JwksUriHasBeenSet() const { return m_jwksUriHasBeenSet; }

    /**
     * <p>The OIDC IdP JSON Web Key Set (Jwks) URI used to configure your private
     * workforce.</p>
     */
    inline void SetJwksUri(const Aws::String& value) { m_jwksUriHasBeenSet = true; m_jwksUri = value; }

    /**
     * <p>The OIDC IdP JSON Web Key Set (Jwks) URI used to configure your private
     * workforce.</p>
     */
    inline void SetJwksUri(Aws::String&& value) { m_jwksUriHasBeenSet = true; m_jwksUri = std::move(value); }

    /**
     * <p>The OIDC IdP JSON Web Key Set (Jwks) URI used to configure your private
     * workforce.</p>
     */
    inline void SetJwksUri(const char* value) { m_jwksUriHasBeenSet = true; m_jwksUri.assign(value); }

    /**
     * <p>The OIDC IdP JSON Web Key Set (Jwks) URI used to configure your private
     * workforce.</p>
     */
    inline OidcConfigForResponse& WithJwksUri(const Aws::String& value) { SetJwksUri(value); return *this;}

    /**
     * <p>The OIDC IdP JSON Web Key Set (Jwks) URI used to configure your private
     * workforce.</p>
     */
    inline OidcConfigForResponse& WithJwksUri(Aws::String&& value) { SetJwksUri(std::move(value)); return *this;}

    /**
     * <p>The OIDC IdP JSON Web Key Set (Jwks) URI used to configure your private
     * workforce.</p>
     */
    inline OidcConfigForResponse& WithJwksUri(const char* value) { SetJwksUri(value); return *this;}

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
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
