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
    AWS_SSOADMIN_API TrustedTokenIssuerUpdateConfiguration() = default;
    AWS_SSOADMIN_API TrustedTokenIssuerUpdateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API TrustedTokenIssuerUpdateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A structure that describes an updated configuration for a trusted token
     * issuer that uses OpenID Connect (OIDC) with JSON web tokens (JWT).</p>
     */
    inline const OidcJwtUpdateConfiguration& GetOidcJwtConfiguration() const { return m_oidcJwtConfiguration; }
    inline bool OidcJwtConfigurationHasBeenSet() const { return m_oidcJwtConfigurationHasBeenSet; }
    template<typename OidcJwtConfigurationT = OidcJwtUpdateConfiguration>
    void SetOidcJwtConfiguration(OidcJwtConfigurationT&& value) { m_oidcJwtConfigurationHasBeenSet = true; m_oidcJwtConfiguration = std::forward<OidcJwtConfigurationT>(value); }
    template<typename OidcJwtConfigurationT = OidcJwtUpdateConfiguration>
    TrustedTokenIssuerUpdateConfiguration& WithOidcJwtConfiguration(OidcJwtConfigurationT&& value) { SetOidcJwtConfiguration(std::forward<OidcJwtConfigurationT>(value)); return *this;}
    ///@}
  private:

    OidcJwtUpdateConfiguration m_oidcJwtConfiguration;
    bool m_oidcJwtConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
