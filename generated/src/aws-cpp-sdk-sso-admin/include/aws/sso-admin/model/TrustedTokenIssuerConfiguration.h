/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/OidcJwtConfiguration.h>
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
   * <p>A structure that describes the configuration of a trusted token issuer. The
   * structure and available settings are determined by the type of the trusted token
   * issuer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/TrustedTokenIssuerConfiguration">AWS
   * API Reference</a></p>
   */
  class TrustedTokenIssuerConfiguration
  {
  public:
    AWS_SSOADMIN_API TrustedTokenIssuerConfiguration();
    AWS_SSOADMIN_API TrustedTokenIssuerConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API TrustedTokenIssuerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A structure that describes the settings for a trusted token issuer that works
     * with OpenID Connect (OIDC) by using JSON Web Tokens (JWT).</p>
     */
    inline const OidcJwtConfiguration& GetOidcJwtConfiguration() const{ return m_oidcJwtConfiguration; }

    /**
     * <p>A structure that describes the settings for a trusted token issuer that works
     * with OpenID Connect (OIDC) by using JSON Web Tokens (JWT).</p>
     */
    inline bool OidcJwtConfigurationHasBeenSet() const { return m_oidcJwtConfigurationHasBeenSet; }

    /**
     * <p>A structure that describes the settings for a trusted token issuer that works
     * with OpenID Connect (OIDC) by using JSON Web Tokens (JWT).</p>
     */
    inline void SetOidcJwtConfiguration(const OidcJwtConfiguration& value) { m_oidcJwtConfigurationHasBeenSet = true; m_oidcJwtConfiguration = value; }

    /**
     * <p>A structure that describes the settings for a trusted token issuer that works
     * with OpenID Connect (OIDC) by using JSON Web Tokens (JWT).</p>
     */
    inline void SetOidcJwtConfiguration(OidcJwtConfiguration&& value) { m_oidcJwtConfigurationHasBeenSet = true; m_oidcJwtConfiguration = std::move(value); }

    /**
     * <p>A structure that describes the settings for a trusted token issuer that works
     * with OpenID Connect (OIDC) by using JSON Web Tokens (JWT).</p>
     */
    inline TrustedTokenIssuerConfiguration& WithOidcJwtConfiguration(const OidcJwtConfiguration& value) { SetOidcJwtConfiguration(value); return *this;}

    /**
     * <p>A structure that describes the settings for a trusted token issuer that works
     * with OpenID Connect (OIDC) by using JSON Web Tokens (JWT).</p>
     */
    inline TrustedTokenIssuerConfiguration& WithOidcJwtConfiguration(OidcJwtConfiguration&& value) { SetOidcJwtConfiguration(std::move(value)); return *this;}

  private:

    OidcJwtConfiguration m_oidcJwtConfiguration;
    bool m_oidcJwtConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
