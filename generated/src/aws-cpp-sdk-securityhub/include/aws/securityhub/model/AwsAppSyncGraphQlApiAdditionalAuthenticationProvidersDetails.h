/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails.h>
#include <aws/securityhub/model/AwsAppSyncGraphQlApiOpenIdConnectConfigDetails.h>
#include <aws/securityhub/model/AwsAppSyncGraphQlApiUserPoolConfigDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> A list of additional authentication providers for the GraphqlApi API.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails">AWS
   * API Reference</a></p>
   */
  class AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails
  {
  public:
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails() = default;
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The type of security configuration for your GraphQL API: API key, Identity
     * and Access Management (IAM), OpenID Connect (OIDC), Amazon Cognito user pools,
     * or Lambda. </p>
     */
    inline const Aws::String& GetAuthenticationType() const { return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    template<typename AuthenticationTypeT = Aws::String>
    void SetAuthenticationType(AuthenticationTypeT&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::forward<AuthenticationTypeT>(value); }
    template<typename AuthenticationTypeT = Aws::String>
    AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails& WithAuthenticationType(AuthenticationTypeT&& value) { SetAuthenticationType(std::forward<AuthenticationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration for Lambda function authorization. </p>
     */
    inline const AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails& GetLambdaAuthorizerConfig() const { return m_lambdaAuthorizerConfig; }
    inline bool LambdaAuthorizerConfigHasBeenSet() const { return m_lambdaAuthorizerConfigHasBeenSet; }
    template<typename LambdaAuthorizerConfigT = AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails>
    void SetLambdaAuthorizerConfig(LambdaAuthorizerConfigT&& value) { m_lambdaAuthorizerConfigHasBeenSet = true; m_lambdaAuthorizerConfig = std::forward<LambdaAuthorizerConfigT>(value); }
    template<typename LambdaAuthorizerConfigT = AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails>
    AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails& WithLambdaAuthorizerConfig(LambdaAuthorizerConfigT&& value) { SetLambdaAuthorizerConfig(std::forward<LambdaAuthorizerConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The OpenID Connect configuration. </p>
     */
    inline const AwsAppSyncGraphQlApiOpenIdConnectConfigDetails& GetOpenIdConnectConfig() const { return m_openIdConnectConfig; }
    inline bool OpenIdConnectConfigHasBeenSet() const { return m_openIdConnectConfigHasBeenSet; }
    template<typename OpenIdConnectConfigT = AwsAppSyncGraphQlApiOpenIdConnectConfigDetails>
    void SetOpenIdConnectConfig(OpenIdConnectConfigT&& value) { m_openIdConnectConfigHasBeenSet = true; m_openIdConnectConfig = std::forward<OpenIdConnectConfigT>(value); }
    template<typename OpenIdConnectConfigT = AwsAppSyncGraphQlApiOpenIdConnectConfigDetails>
    AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails& WithOpenIdConnectConfig(OpenIdConnectConfigT&& value) { SetOpenIdConnectConfig(std::forward<OpenIdConnectConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Cognito user pools configuration. </p>
     */
    inline const AwsAppSyncGraphQlApiUserPoolConfigDetails& GetUserPoolConfig() const { return m_userPoolConfig; }
    inline bool UserPoolConfigHasBeenSet() const { return m_userPoolConfigHasBeenSet; }
    template<typename UserPoolConfigT = AwsAppSyncGraphQlApiUserPoolConfigDetails>
    void SetUserPoolConfig(UserPoolConfigT&& value) { m_userPoolConfigHasBeenSet = true; m_userPoolConfig = std::forward<UserPoolConfigT>(value); }
    template<typename UserPoolConfigT = AwsAppSyncGraphQlApiUserPoolConfigDetails>
    AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails& WithUserPoolConfig(UserPoolConfigT&& value) { SetUserPoolConfig(std::forward<UserPoolConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_authenticationType;
    bool m_authenticationTypeHasBeenSet = false;

    AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails m_lambdaAuthorizerConfig;
    bool m_lambdaAuthorizerConfigHasBeenSet = false;

    AwsAppSyncGraphQlApiOpenIdConnectConfigDetails m_openIdConnectConfig;
    bool m_openIdConnectConfigHasBeenSet = false;

    AwsAppSyncGraphQlApiUserPoolConfigDetails m_userPoolConfig;
    bool m_userPoolConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
