/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/UpdateCognitoUserPoolConfiguration.h>
#include <aws/verifiedpermissions/model/UpdateOpenIdConnectConfiguration.h>
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
namespace VerifiedPermissions
{
namespace Model
{

  /**
   * <p>Contains an update to replace the configuration in an existing identity
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/UpdateConfiguration">AWS
   * API Reference</a></p>
   */
  class UpdateConfiguration
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API UpdateConfiguration() = default;
    AWS_VERIFIEDPERMISSIONS_API UpdateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API UpdateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains configuration details of a Amazon Cognito user pool.</p>
     */
    inline const UpdateCognitoUserPoolConfiguration& GetCognitoUserPoolConfiguration() const { return m_cognitoUserPoolConfiguration; }
    inline bool CognitoUserPoolConfigurationHasBeenSet() const { return m_cognitoUserPoolConfigurationHasBeenSet; }
    template<typename CognitoUserPoolConfigurationT = UpdateCognitoUserPoolConfiguration>
    void SetCognitoUserPoolConfiguration(CognitoUserPoolConfigurationT&& value) { m_cognitoUserPoolConfigurationHasBeenSet = true; m_cognitoUserPoolConfiguration = std::forward<CognitoUserPoolConfigurationT>(value); }
    template<typename CognitoUserPoolConfigurationT = UpdateCognitoUserPoolConfiguration>
    UpdateConfiguration& WithCognitoUserPoolConfiguration(CognitoUserPoolConfigurationT&& value) { SetCognitoUserPoolConfiguration(std::forward<CognitoUserPoolConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configuration details of an OpenID Connect (OIDC) identity provider,
     * or identity source, that Verified Permissions can use to generate entities from
     * authenticated identities. It specifies the issuer URL, token type that you want
     * to use, and policy store entity details.</p>
     */
    inline const UpdateOpenIdConnectConfiguration& GetOpenIdConnectConfiguration() const { return m_openIdConnectConfiguration; }
    inline bool OpenIdConnectConfigurationHasBeenSet() const { return m_openIdConnectConfigurationHasBeenSet; }
    template<typename OpenIdConnectConfigurationT = UpdateOpenIdConnectConfiguration>
    void SetOpenIdConnectConfiguration(OpenIdConnectConfigurationT&& value) { m_openIdConnectConfigurationHasBeenSet = true; m_openIdConnectConfiguration = std::forward<OpenIdConnectConfigurationT>(value); }
    template<typename OpenIdConnectConfigurationT = UpdateOpenIdConnectConfiguration>
    UpdateConfiguration& WithOpenIdConnectConfiguration(OpenIdConnectConfigurationT&& value) { SetOpenIdConnectConfiguration(std::forward<OpenIdConnectConfigurationT>(value)); return *this;}
    ///@}
  private:

    UpdateCognitoUserPoolConfiguration m_cognitoUserPoolConfiguration;
    bool m_cognitoUserPoolConfigurationHasBeenSet = false;

    UpdateOpenIdConnectConfiguration m_openIdConnectConfiguration;
    bool m_openIdConnectConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
