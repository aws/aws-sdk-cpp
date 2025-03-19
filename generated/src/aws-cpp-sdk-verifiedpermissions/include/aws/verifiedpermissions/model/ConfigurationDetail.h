/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/CognitoUserPoolConfigurationDetail.h>
#include <aws/verifiedpermissions/model/OpenIdConnectConfigurationDetail.h>
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
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_GetIdentitySource.html">GetIdentitySource</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/ConfigurationDetail">AWS
   * API Reference</a></p>
   */
  class ConfigurationDetail
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API ConfigurationDetail() = default;
    AWS_VERIFIEDPERMISSIONS_API ConfigurationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API ConfigurationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline const CognitoUserPoolConfigurationDetail& GetCognitoUserPoolConfiguration() const { return m_cognitoUserPoolConfiguration; }
    inline bool CognitoUserPoolConfigurationHasBeenSet() const { return m_cognitoUserPoolConfigurationHasBeenSet; }
    template<typename CognitoUserPoolConfigurationT = CognitoUserPoolConfigurationDetail>
    void SetCognitoUserPoolConfiguration(CognitoUserPoolConfigurationT&& value) { m_cognitoUserPoolConfigurationHasBeenSet = true; m_cognitoUserPoolConfiguration = std::forward<CognitoUserPoolConfigurationT>(value); }
    template<typename CognitoUserPoolConfigurationT = CognitoUserPoolConfigurationDetail>
    ConfigurationDetail& WithCognitoUserPoolConfiguration(CognitoUserPoolConfigurationT&& value) { SetCognitoUserPoolConfiguration(std::forward<CognitoUserPoolConfigurationT>(value)); return *this;}
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
    inline const OpenIdConnectConfigurationDetail& GetOpenIdConnectConfiguration() const { return m_openIdConnectConfiguration; }
    inline bool OpenIdConnectConfigurationHasBeenSet() const { return m_openIdConnectConfigurationHasBeenSet; }
    template<typename OpenIdConnectConfigurationT = OpenIdConnectConfigurationDetail>
    void SetOpenIdConnectConfiguration(OpenIdConnectConfigurationT&& value) { m_openIdConnectConfigurationHasBeenSet = true; m_openIdConnectConfiguration = std::forward<OpenIdConnectConfigurationT>(value); }
    template<typename OpenIdConnectConfigurationT = OpenIdConnectConfigurationDetail>
    ConfigurationDetail& WithOpenIdConnectConfiguration(OpenIdConnectConfigurationT&& value) { SetOpenIdConnectConfiguration(std::forward<OpenIdConnectConfigurationT>(value)); return *this;}
    ///@}
  private:

    CognitoUserPoolConfigurationDetail m_cognitoUserPoolConfiguration;
    bool m_cognitoUserPoolConfigurationHasBeenSet = false;

    OpenIdConnectConfigurationDetail m_openIdConnectConfiguration;
    bool m_openIdConnectConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
