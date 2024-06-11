﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/CognitoUserPoolConfigurationItem.h>
#include <aws/verifiedpermissions/model/OpenIdConnectConfigurationItem.h>
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
   * <p>Contains configuration information about an identity source.</p> <p>This data
   * type is a response parameter to the <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_ListIdentitySources.html">ListIdentitySources</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/ConfigurationItem">AWS
   * API Reference</a></p>
   */
  class ConfigurationItem
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API ConfigurationItem();
    AWS_VERIFIEDPERMISSIONS_API ConfigurationItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API ConfigurationItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains configuration details of a Amazon Cognito user pool that Verified
     * Permissions can use as a source of authenticated identities as entities. It
     * specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of a Amazon Cognito user pool, the policy store entity
     * that you want to assign to user groups, and one or more application client
     * IDs.</p> <p>Example:
     * <code>"configuration":{"cognitoUserPoolConfiguration":{"userPoolArn":"arn:aws:cognito-idp:us-east-1:123456789012:userpool/us-east-1_1a2b3c4d5","clientIds":
     * ["a1b2c3d4e5f6g7h8i9j0kalbmc"],"groupConfiguration": {"groupEntityType":
     * "MyCorp::Group"}}}</code> </p>
     */
    inline const CognitoUserPoolConfigurationItem& GetCognitoUserPoolConfiguration() const{ return m_cognitoUserPoolConfiguration; }
    inline bool CognitoUserPoolConfigurationHasBeenSet() const { return m_cognitoUserPoolConfigurationHasBeenSet; }
    inline void SetCognitoUserPoolConfiguration(const CognitoUserPoolConfigurationItem& value) { m_cognitoUserPoolConfigurationHasBeenSet = true; m_cognitoUserPoolConfiguration = value; }
    inline void SetCognitoUserPoolConfiguration(CognitoUserPoolConfigurationItem&& value) { m_cognitoUserPoolConfigurationHasBeenSet = true; m_cognitoUserPoolConfiguration = std::move(value); }
    inline ConfigurationItem& WithCognitoUserPoolConfiguration(const CognitoUserPoolConfigurationItem& value) { SetCognitoUserPoolConfiguration(value); return *this;}
    inline ConfigurationItem& WithCognitoUserPoolConfiguration(CognitoUserPoolConfigurationItem&& value) { SetCognitoUserPoolConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configuration details of an OpenID Connect (OIDC) identity provider,
     * or identity source, that Verified Permissions can use to generate entities from
     * authenticated identities. It specifies the issuer URL, token type that you want
     * to use, and policy store entity details.</p>
     * <p>Example:<code>"configuration":{"openIdConnectConfiguration":{"issuer":"https://auth.example.com","tokenSelection":{"accessTokenOnly":{"audiences":["https://myapp.example.com","https://myapp2.example.com"],"principalIdClaim":"sub"}},"entityIdPrefix":"MyOIDCProvider","groupConfiguration":{"groupClaim":"groups","groupEntityType":"MyCorp::UserGroup"}}}</code>
     * </p>
     */
    inline const OpenIdConnectConfigurationItem& GetOpenIdConnectConfiguration() const{ return m_openIdConnectConfiguration; }
    inline bool OpenIdConnectConfigurationHasBeenSet() const { return m_openIdConnectConfigurationHasBeenSet; }
    inline void SetOpenIdConnectConfiguration(const OpenIdConnectConfigurationItem& value) { m_openIdConnectConfigurationHasBeenSet = true; m_openIdConnectConfiguration = value; }
    inline void SetOpenIdConnectConfiguration(OpenIdConnectConfigurationItem&& value) { m_openIdConnectConfigurationHasBeenSet = true; m_openIdConnectConfiguration = std::move(value); }
    inline ConfigurationItem& WithOpenIdConnectConfiguration(const OpenIdConnectConfigurationItem& value) { SetOpenIdConnectConfiguration(value); return *this;}
    inline ConfigurationItem& WithOpenIdConnectConfiguration(OpenIdConnectConfigurationItem&& value) { SetOpenIdConnectConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    CognitoUserPoolConfigurationItem m_cognitoUserPoolConfiguration;
    bool m_cognitoUserPoolConfigurationHasBeenSet = false;

    OpenIdConnectConfigurationItem m_openIdConnectConfiguration;
    bool m_openIdConnectConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
