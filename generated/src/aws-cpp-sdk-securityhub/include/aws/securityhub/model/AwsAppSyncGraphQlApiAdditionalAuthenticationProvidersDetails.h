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
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails();
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The type of security configuration for your GraphQL API: API key, Identity
     * and Access Management (IAM), OpenID Connect (OIDC), Amazon Cognito user pools,
     * or Lambda. </p>
     */
    inline const Aws::String& GetAuthenticationType() const{ return m_authenticationType; }

    /**
     * <p> The type of security configuration for your GraphQL API: API key, Identity
     * and Access Management (IAM), OpenID Connect (OIDC), Amazon Cognito user pools,
     * or Lambda. </p>
     */
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }

    /**
     * <p> The type of security configuration for your GraphQL API: API key, Identity
     * and Access Management (IAM), OpenID Connect (OIDC), Amazon Cognito user pools,
     * or Lambda. </p>
     */
    inline void SetAuthenticationType(const Aws::String& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }

    /**
     * <p> The type of security configuration for your GraphQL API: API key, Identity
     * and Access Management (IAM), OpenID Connect (OIDC), Amazon Cognito user pools,
     * or Lambda. </p>
     */
    inline void SetAuthenticationType(Aws::String&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }

    /**
     * <p> The type of security configuration for your GraphQL API: API key, Identity
     * and Access Management (IAM), OpenID Connect (OIDC), Amazon Cognito user pools,
     * or Lambda. </p>
     */
    inline void SetAuthenticationType(const char* value) { m_authenticationTypeHasBeenSet = true; m_authenticationType.assign(value); }

    /**
     * <p> The type of security configuration for your GraphQL API: API key, Identity
     * and Access Management (IAM), OpenID Connect (OIDC), Amazon Cognito user pools,
     * or Lambda. </p>
     */
    inline AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails& WithAuthenticationType(const Aws::String& value) { SetAuthenticationType(value); return *this;}

    /**
     * <p> The type of security configuration for your GraphQL API: API key, Identity
     * and Access Management (IAM), OpenID Connect (OIDC), Amazon Cognito user pools,
     * or Lambda. </p>
     */
    inline AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails& WithAuthenticationType(Aws::String&& value) { SetAuthenticationType(std::move(value)); return *this;}

    /**
     * <p> The type of security configuration for your GraphQL API: API key, Identity
     * and Access Management (IAM), OpenID Connect (OIDC), Amazon Cognito user pools,
     * or Lambda. </p>
     */
    inline AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails& WithAuthenticationType(const char* value) { SetAuthenticationType(value); return *this;}


    /**
     * <p> The configuration for Lambda function authorization. </p>
     */
    inline const AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails& GetLambdaAuthorizerConfig() const{ return m_lambdaAuthorizerConfig; }

    /**
     * <p> The configuration for Lambda function authorization. </p>
     */
    inline bool LambdaAuthorizerConfigHasBeenSet() const { return m_lambdaAuthorizerConfigHasBeenSet; }

    /**
     * <p> The configuration for Lambda function authorization. </p>
     */
    inline void SetLambdaAuthorizerConfig(const AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails& value) { m_lambdaAuthorizerConfigHasBeenSet = true; m_lambdaAuthorizerConfig = value; }

    /**
     * <p> The configuration for Lambda function authorization. </p>
     */
    inline void SetLambdaAuthorizerConfig(AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails&& value) { m_lambdaAuthorizerConfigHasBeenSet = true; m_lambdaAuthorizerConfig = std::move(value); }

    /**
     * <p> The configuration for Lambda function authorization. </p>
     */
    inline AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails& WithLambdaAuthorizerConfig(const AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails& value) { SetLambdaAuthorizerConfig(value); return *this;}

    /**
     * <p> The configuration for Lambda function authorization. </p>
     */
    inline AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails& WithLambdaAuthorizerConfig(AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails&& value) { SetLambdaAuthorizerConfig(std::move(value)); return *this;}


    /**
     * <p> The OpenID Connect configuration. </p>
     */
    inline const AwsAppSyncGraphQlApiOpenIdConnectConfigDetails& GetOpenIdConnectConfig() const{ return m_openIdConnectConfig; }

    /**
     * <p> The OpenID Connect configuration. </p>
     */
    inline bool OpenIdConnectConfigHasBeenSet() const { return m_openIdConnectConfigHasBeenSet; }

    /**
     * <p> The OpenID Connect configuration. </p>
     */
    inline void SetOpenIdConnectConfig(const AwsAppSyncGraphQlApiOpenIdConnectConfigDetails& value) { m_openIdConnectConfigHasBeenSet = true; m_openIdConnectConfig = value; }

    /**
     * <p> The OpenID Connect configuration. </p>
     */
    inline void SetOpenIdConnectConfig(AwsAppSyncGraphQlApiOpenIdConnectConfigDetails&& value) { m_openIdConnectConfigHasBeenSet = true; m_openIdConnectConfig = std::move(value); }

    /**
     * <p> The OpenID Connect configuration. </p>
     */
    inline AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails& WithOpenIdConnectConfig(const AwsAppSyncGraphQlApiOpenIdConnectConfigDetails& value) { SetOpenIdConnectConfig(value); return *this;}

    /**
     * <p> The OpenID Connect configuration. </p>
     */
    inline AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails& WithOpenIdConnectConfig(AwsAppSyncGraphQlApiOpenIdConnectConfigDetails&& value) { SetOpenIdConnectConfig(std::move(value)); return *this;}


    /**
     * <p> The Amazon Cognito user pools configuration. </p>
     */
    inline const AwsAppSyncGraphQlApiUserPoolConfigDetails& GetUserPoolConfig() const{ return m_userPoolConfig; }

    /**
     * <p> The Amazon Cognito user pools configuration. </p>
     */
    inline bool UserPoolConfigHasBeenSet() const { return m_userPoolConfigHasBeenSet; }

    /**
     * <p> The Amazon Cognito user pools configuration. </p>
     */
    inline void SetUserPoolConfig(const AwsAppSyncGraphQlApiUserPoolConfigDetails& value) { m_userPoolConfigHasBeenSet = true; m_userPoolConfig = value; }

    /**
     * <p> The Amazon Cognito user pools configuration. </p>
     */
    inline void SetUserPoolConfig(AwsAppSyncGraphQlApiUserPoolConfigDetails&& value) { m_userPoolConfigHasBeenSet = true; m_userPoolConfig = std::move(value); }

    /**
     * <p> The Amazon Cognito user pools configuration. </p>
     */
    inline AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails& WithUserPoolConfig(const AwsAppSyncGraphQlApiUserPoolConfigDetails& value) { SetUserPoolConfig(value); return *this;}

    /**
     * <p> The Amazon Cognito user pools configuration. </p>
     */
    inline AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails& WithUserPoolConfig(AwsAppSyncGraphQlApiUserPoolConfigDetails&& value) { SetUserPoolConfig(std::move(value)); return *this;}

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
