/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsAppSyncGraphQlApiOpenIdConnectConfigDetails.h>
#include <aws/securityhub/model/AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails.h>
#include <aws/securityhub/model/AwsAppSyncGraphQlApiUserPoolConfigDetails.h>
#include <aws/securityhub/model/AwsAppSyncGraphQlApiLogConfigDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails.h>
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
   * <p> Provides details about an AppSync Graph QL API, which lets you query
   * multiple databases, microservices, and APIs from a single GraphQL endpoint.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAppSyncGraphQlApiDetails">AWS
   * API Reference</a></p>
   */
  class AwsAppSyncGraphQlApiDetails
  {
  public:
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiDetails();
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The unique identifier for the API. </p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p> The unique identifier for the API. </p>
     */
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }

    /**
     * <p> The unique identifier for the API. </p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p> The unique identifier for the API. </p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }

    /**
     * <p> The unique identifier for the API. </p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p> The unique identifier for the API. </p>
     */
    inline AwsAppSyncGraphQlApiDetails& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p> The unique identifier for the API. </p>
     */
    inline AwsAppSyncGraphQlApiDetails& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for the API. </p>
     */
    inline AwsAppSyncGraphQlApiDetails& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>The unique identifier for the API.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the API.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the API.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the API.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the API.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the API.</p>
     */
    inline AwsAppSyncGraphQlApiDetails& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the API.</p>
     */
    inline AwsAppSyncGraphQlApiDetails& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the API.</p>
     */
    inline AwsAppSyncGraphQlApiDetails& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> Specifies the authorization configuration for using an OpenID Connect
     * compliant service with an AppSync GraphQL API endpoint. </p>
     */
    inline const AwsAppSyncGraphQlApiOpenIdConnectConfigDetails& GetOpenIdConnectConfig() const{ return m_openIdConnectConfig; }

    /**
     * <p> Specifies the authorization configuration for using an OpenID Connect
     * compliant service with an AppSync GraphQL API endpoint. </p>
     */
    inline bool OpenIdConnectConfigHasBeenSet() const { return m_openIdConnectConfigHasBeenSet; }

    /**
     * <p> Specifies the authorization configuration for using an OpenID Connect
     * compliant service with an AppSync GraphQL API endpoint. </p>
     */
    inline void SetOpenIdConnectConfig(const AwsAppSyncGraphQlApiOpenIdConnectConfigDetails& value) { m_openIdConnectConfigHasBeenSet = true; m_openIdConnectConfig = value; }

    /**
     * <p> Specifies the authorization configuration for using an OpenID Connect
     * compliant service with an AppSync GraphQL API endpoint. </p>
     */
    inline void SetOpenIdConnectConfig(AwsAppSyncGraphQlApiOpenIdConnectConfigDetails&& value) { m_openIdConnectConfigHasBeenSet = true; m_openIdConnectConfig = std::move(value); }

    /**
     * <p> Specifies the authorization configuration for using an OpenID Connect
     * compliant service with an AppSync GraphQL API endpoint. </p>
     */
    inline AwsAppSyncGraphQlApiDetails& WithOpenIdConnectConfig(const AwsAppSyncGraphQlApiOpenIdConnectConfigDetails& value) { SetOpenIdConnectConfig(value); return *this;}

    /**
     * <p> Specifies the authorization configuration for using an OpenID Connect
     * compliant service with an AppSync GraphQL API endpoint. </p>
     */
    inline AwsAppSyncGraphQlApiDetails& WithOpenIdConnectConfig(AwsAppSyncGraphQlApiOpenIdConnectConfigDetails&& value) { SetOpenIdConnectConfig(std::move(value)); return *this;}


    /**
     * <p> The API name. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The API name. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The API name. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The API name. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The API name. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The API name. </p>
     */
    inline AwsAppSyncGraphQlApiDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The API name. </p>
     */
    inline AwsAppSyncGraphQlApiDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The API name. </p>
     */
    inline AwsAppSyncGraphQlApiDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> Specifies the configuration for Lambda function authorization. </p>
     */
    inline const AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails& GetLambdaAuthorizerConfig() const{ return m_lambdaAuthorizerConfig; }

    /**
     * <p> Specifies the configuration for Lambda function authorization. </p>
     */
    inline bool LambdaAuthorizerConfigHasBeenSet() const { return m_lambdaAuthorizerConfigHasBeenSet; }

    /**
     * <p> Specifies the configuration for Lambda function authorization. </p>
     */
    inline void SetLambdaAuthorizerConfig(const AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails& value) { m_lambdaAuthorizerConfigHasBeenSet = true; m_lambdaAuthorizerConfig = value; }

    /**
     * <p> Specifies the configuration for Lambda function authorization. </p>
     */
    inline void SetLambdaAuthorizerConfig(AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails&& value) { m_lambdaAuthorizerConfigHasBeenSet = true; m_lambdaAuthorizerConfig = std::move(value); }

    /**
     * <p> Specifies the configuration for Lambda function authorization. </p>
     */
    inline AwsAppSyncGraphQlApiDetails& WithLambdaAuthorizerConfig(const AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails& value) { SetLambdaAuthorizerConfig(value); return *this;}

    /**
     * <p> Specifies the configuration for Lambda function authorization. </p>
     */
    inline AwsAppSyncGraphQlApiDetails& WithLambdaAuthorizerConfig(AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails&& value) { SetLambdaAuthorizerConfig(std::move(value)); return *this;}


    /**
     * <p> Indicates whether to use X-Ray tracing for the GraphQL API. </p>
     */
    inline bool GetXrayEnabled() const{ return m_xrayEnabled; }

    /**
     * <p> Indicates whether to use X-Ray tracing for the GraphQL API. </p>
     */
    inline bool XrayEnabledHasBeenSet() const { return m_xrayEnabledHasBeenSet; }

    /**
     * <p> Indicates whether to use X-Ray tracing for the GraphQL API. </p>
     */
    inline void SetXrayEnabled(bool value) { m_xrayEnabledHasBeenSet = true; m_xrayEnabled = value; }

    /**
     * <p> Indicates whether to use X-Ray tracing for the GraphQL API. </p>
     */
    inline AwsAppSyncGraphQlApiDetails& WithXrayEnabled(bool value) { SetXrayEnabled(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the API. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the API. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the API. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the API. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the API. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the API. </p>
     */
    inline AwsAppSyncGraphQlApiDetails& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the API. </p>
     */
    inline AwsAppSyncGraphQlApiDetails& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the API. </p>
     */
    inline AwsAppSyncGraphQlApiDetails& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline AwsAppSyncGraphQlApiDetails& WithUserPoolConfig(const AwsAppSyncGraphQlApiUserPoolConfigDetails& value) { SetUserPoolConfig(value); return *this;}

    /**
     * <p> The Amazon Cognito user pools configuration. </p>
     */
    inline AwsAppSyncGraphQlApiDetails& WithUserPoolConfig(AwsAppSyncGraphQlApiUserPoolConfigDetails&& value) { SetUserPoolConfig(std::move(value)); return *this;}


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
    inline AwsAppSyncGraphQlApiDetails& WithAuthenticationType(const Aws::String& value) { SetAuthenticationType(value); return *this;}

    /**
     * <p> The type of security configuration for your GraphQL API: API key, Identity
     * and Access Management (IAM), OpenID Connect (OIDC), Amazon Cognito user pools,
     * or Lambda. </p>
     */
    inline AwsAppSyncGraphQlApiDetails& WithAuthenticationType(Aws::String&& value) { SetAuthenticationType(std::move(value)); return *this;}

    /**
     * <p> The type of security configuration for your GraphQL API: API key, Identity
     * and Access Management (IAM), OpenID Connect (OIDC), Amazon Cognito user pools,
     * or Lambda. </p>
     */
    inline AwsAppSyncGraphQlApiDetails& WithAuthenticationType(const char* value) { SetAuthenticationType(value); return *this;}


    /**
     * <p> The Amazon CloudWatch Logs configuration. </p>
     */
    inline const AwsAppSyncGraphQlApiLogConfigDetails& GetLogConfig() const{ return m_logConfig; }

    /**
     * <p> The Amazon CloudWatch Logs configuration. </p>
     */
    inline bool LogConfigHasBeenSet() const { return m_logConfigHasBeenSet; }

    /**
     * <p> The Amazon CloudWatch Logs configuration. </p>
     */
    inline void SetLogConfig(const AwsAppSyncGraphQlApiLogConfigDetails& value) { m_logConfigHasBeenSet = true; m_logConfig = value; }

    /**
     * <p> The Amazon CloudWatch Logs configuration. </p>
     */
    inline void SetLogConfig(AwsAppSyncGraphQlApiLogConfigDetails&& value) { m_logConfigHasBeenSet = true; m_logConfig = std::move(value); }

    /**
     * <p> The Amazon CloudWatch Logs configuration. </p>
     */
    inline AwsAppSyncGraphQlApiDetails& WithLogConfig(const AwsAppSyncGraphQlApiLogConfigDetails& value) { SetLogConfig(value); return *this;}

    /**
     * <p> The Amazon CloudWatch Logs configuration. </p>
     */
    inline AwsAppSyncGraphQlApiDetails& WithLogConfig(AwsAppSyncGraphQlApiLogConfigDetails&& value) { SetLogConfig(std::move(value)); return *this;}


    /**
     * <p> A list of additional authentication providers for the GraphQL API. </p>
     */
    inline const Aws::Vector<AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails>& GetAdditionalAuthenticationProviders() const{ return m_additionalAuthenticationProviders; }

    /**
     * <p> A list of additional authentication providers for the GraphQL API. </p>
     */
    inline bool AdditionalAuthenticationProvidersHasBeenSet() const { return m_additionalAuthenticationProvidersHasBeenSet; }

    /**
     * <p> A list of additional authentication providers for the GraphQL API. </p>
     */
    inline void SetAdditionalAuthenticationProviders(const Aws::Vector<AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails>& value) { m_additionalAuthenticationProvidersHasBeenSet = true; m_additionalAuthenticationProviders = value; }

    /**
     * <p> A list of additional authentication providers for the GraphQL API. </p>
     */
    inline void SetAdditionalAuthenticationProviders(Aws::Vector<AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails>&& value) { m_additionalAuthenticationProvidersHasBeenSet = true; m_additionalAuthenticationProviders = std::move(value); }

    /**
     * <p> A list of additional authentication providers for the GraphQL API. </p>
     */
    inline AwsAppSyncGraphQlApiDetails& WithAdditionalAuthenticationProviders(const Aws::Vector<AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails>& value) { SetAdditionalAuthenticationProviders(value); return *this;}

    /**
     * <p> A list of additional authentication providers for the GraphQL API. </p>
     */
    inline AwsAppSyncGraphQlApiDetails& WithAdditionalAuthenticationProviders(Aws::Vector<AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails>&& value) { SetAdditionalAuthenticationProviders(std::move(value)); return *this;}

    /**
     * <p> A list of additional authentication providers for the GraphQL API. </p>
     */
    inline AwsAppSyncGraphQlApiDetails& AddAdditionalAuthenticationProviders(const AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails& value) { m_additionalAuthenticationProvidersHasBeenSet = true; m_additionalAuthenticationProviders.push_back(value); return *this; }

    /**
     * <p> A list of additional authentication providers for the GraphQL API. </p>
     */
    inline AwsAppSyncGraphQlApiDetails& AddAdditionalAuthenticationProviders(AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails&& value) { m_additionalAuthenticationProvidersHasBeenSet = true; m_additionalAuthenticationProviders.push_back(std::move(value)); return *this; }


    /**
     * <p> The Amazon Resource Name (ARN) of the WAF web access control list (web ACL)
     * associated with this GraphQL API, if one exists. </p>
     */
    inline const Aws::String& GetWafWebAclArn() const{ return m_wafWebAclArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the WAF web access control list (web ACL)
     * associated with this GraphQL API, if one exists. </p>
     */
    inline bool WafWebAclArnHasBeenSet() const { return m_wafWebAclArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the WAF web access control list (web ACL)
     * associated with this GraphQL API, if one exists. </p>
     */
    inline void SetWafWebAclArn(const Aws::String& value) { m_wafWebAclArnHasBeenSet = true; m_wafWebAclArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the WAF web access control list (web ACL)
     * associated with this GraphQL API, if one exists. </p>
     */
    inline void SetWafWebAclArn(Aws::String&& value) { m_wafWebAclArnHasBeenSet = true; m_wafWebAclArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the WAF web access control list (web ACL)
     * associated with this GraphQL API, if one exists. </p>
     */
    inline void SetWafWebAclArn(const char* value) { m_wafWebAclArnHasBeenSet = true; m_wafWebAclArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the WAF web access control list (web ACL)
     * associated with this GraphQL API, if one exists. </p>
     */
    inline AwsAppSyncGraphQlApiDetails& WithWafWebAclArn(const Aws::String& value) { SetWafWebAclArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the WAF web access control list (web ACL)
     * associated with this GraphQL API, if one exists. </p>
     */
    inline AwsAppSyncGraphQlApiDetails& WithWafWebAclArn(Aws::String&& value) { SetWafWebAclArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the WAF web access control list (web ACL)
     * associated with this GraphQL API, if one exists. </p>
     */
    inline AwsAppSyncGraphQlApiDetails& WithWafWebAclArn(const char* value) { SetWafWebAclArn(value); return *this;}

  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    AwsAppSyncGraphQlApiOpenIdConnectConfigDetails m_openIdConnectConfig;
    bool m_openIdConnectConfigHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails m_lambdaAuthorizerConfig;
    bool m_lambdaAuthorizerConfigHasBeenSet = false;

    bool m_xrayEnabled;
    bool m_xrayEnabledHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    AwsAppSyncGraphQlApiUserPoolConfigDetails m_userPoolConfig;
    bool m_userPoolConfigHasBeenSet = false;

    Aws::String m_authenticationType;
    bool m_authenticationTypeHasBeenSet = false;

    AwsAppSyncGraphQlApiLogConfigDetails m_logConfig;
    bool m_logConfigHasBeenSet = false;

    Aws::Vector<AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails> m_additionalAuthenticationProviders;
    bool m_additionalAuthenticationProvidersHasBeenSet = false;

    Aws::String m_wafWebAclArn;
    bool m_wafWebAclArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
