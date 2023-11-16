/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/OidcJwtUpdateConfiguration.h>
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
   * <p>A structure that contains details to be updated for a trusted token issuer
   * configuration. The structure and settings that you can include depend on the
   * type of the trusted token issuer being updated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/TrustedTokenIssuerUpdateConfiguration">AWS
   * API Reference</a></p>
   */
  class TrustedTokenIssuerUpdateConfiguration
  {
  public:
    AWS_SSOADMIN_API TrustedTokenIssuerUpdateConfiguration();
    AWS_SSOADMIN_API TrustedTokenIssuerUpdateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API TrustedTokenIssuerUpdateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A structure that describes an updated configuration for a trusted token
     * issuer that uses OpenID Connect (OIDC) with JSON web tokens (JWT).</p>
     */
    inline const OidcJwtUpdateConfiguration& GetOidcJwtConfiguration() const{ return m_oidcJwtConfiguration; }

    /**
     * <p>A structure that describes an updated configuration for a trusted token
     * issuer that uses OpenID Connect (OIDC) with JSON web tokens (JWT).</p>
     */
    inline bool OidcJwtConfigurationHasBeenSet() const { return m_oidcJwtConfigurationHasBeenSet; }

    /**
     * <p>A structure that describes an updated configuration for a trusted token
     * issuer that uses OpenID Connect (OIDC) with JSON web tokens (JWT).</p>
     */
    inline void SetOidcJwtConfiguration(const OidcJwtUpdateConfiguration& value) { m_oidcJwtConfigurationHasBeenSet = true; m_oidcJwtConfiguration = value; }

    /**
     * <p>A structure that describes an updated configuration for a trusted token
     * issuer that uses OpenID Connect (OIDC) with JSON web tokens (JWT).</p>
     */
    inline void SetOidcJwtConfiguration(OidcJwtUpdateConfiguration&& value) { m_oidcJwtConfigurationHasBeenSet = true; m_oidcJwtConfiguration = std::move(value); }

    /**
     * <p>A structure that describes an updated configuration for a trusted token
     * issuer that uses OpenID Connect (OIDC) with JSON web tokens (JWT).</p>
     */
    inline TrustedTokenIssuerUpdateConfiguration& WithOidcJwtConfiguration(const OidcJwtUpdateConfiguration& value) { SetOidcJwtConfiguration(value); return *this;}

    /**
     * <p>A structure that describes an updated configuration for a trusted token
     * issuer that uses OpenID Connect (OIDC) with JSON web tokens (JWT).</p>
     */
    inline TrustedTokenIssuerUpdateConfiguration& WithOidcJwtConfiguration(OidcJwtUpdateConfiguration&& value) { SetOidcJwtConfiguration(std::move(value)); return *this;}

  private:

    OidcJwtUpdateConfiguration m_oidcJwtConfiguration;
    bool m_oidcJwtConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
