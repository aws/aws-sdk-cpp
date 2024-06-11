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


    ///@{
    /**
     * <p> The unique identifier for the API. </p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }
    inline AwsAppSyncGraphQlApiDetails& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}
    inline AwsAppSyncGraphQlApiDetails& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}
    inline AwsAppSyncGraphQlApiDetails& WithApiId(const char* value) { SetApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the API.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AwsAppSyncGraphQlApiDetails& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AwsAppSyncGraphQlApiDetails& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AwsAppSyncGraphQlApiDetails& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the authorization configuration for using an OpenID Connect
     * compliant service with an AppSync GraphQL API endpoint. </p>
     */
    inline const AwsAppSyncGraphQlApiOpenIdConnectConfigDetails& GetOpenIdConnectConfig() const{ return m_openIdConnectConfig; }
    inline bool OpenIdConnectConfigHasBeenSet() const { return m_openIdConnectConfigHasBeenSet; }
    inline void SetOpenIdConnectConfig(const AwsAppSyncGraphQlApiOpenIdConnectConfigDetails& value) { m_openIdConnectConfigHasBeenSet = true; m_openIdConnectConfig = value; }
    inline void SetOpenIdConnectConfig(AwsAppSyncGraphQlApiOpenIdConnectConfigDetails&& value) { m_openIdConnectConfigHasBeenSet = true; m_openIdConnectConfig = std::move(value); }
    inline AwsAppSyncGraphQlApiDetails& WithOpenIdConnectConfig(const AwsAppSyncGraphQlApiOpenIdConnectConfigDetails& value) { SetOpenIdConnectConfig(value); return *this;}
    inline AwsAppSyncGraphQlApiDetails& WithOpenIdConnectConfig(AwsAppSyncGraphQlApiOpenIdConnectConfigDetails&& value) { SetOpenIdConnectConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The API name. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AwsAppSyncGraphQlApiDetails& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AwsAppSyncGraphQlApiDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AwsAppSyncGraphQlApiDetails& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the configuration for Lambda function authorization. </p>
     */
    inline const AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails& GetLambdaAuthorizerConfig() const{ return m_lambdaAuthorizerConfig; }
    inline bool LambdaAuthorizerConfigHasBeenSet() const { return m_lambdaAuthorizerConfigHasBeenSet; }
    inline void SetLambdaAuthorizerConfig(const AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails& value) { m_lambdaAuthorizerConfigHasBeenSet = true; m_lambdaAuthorizerConfig = value; }
    inline void SetLambdaAuthorizerConfig(AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails&& value) { m_lambdaAuthorizerConfigHasBeenSet = true; m_lambdaAuthorizerConfig = std::move(value); }
    inline AwsAppSyncGraphQlApiDetails& WithLambdaAuthorizerConfig(const AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails& value) { SetLambdaAuthorizerConfig(value); return *this;}
    inline AwsAppSyncGraphQlApiDetails& WithLambdaAuthorizerConfig(AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails&& value) { SetLambdaAuthorizerConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether to use X-Ray tracing for the GraphQL API. </p>
     */
    inline bool GetXrayEnabled() const{ return m_xrayEnabled; }
    inline bool XrayEnabledHasBeenSet() const { return m_xrayEnabledHasBeenSet; }
    inline void SetXrayEnabled(bool value) { m_xrayEnabledHasBeenSet = true; m_xrayEnabled = value; }
    inline AwsAppSyncGraphQlApiDetails& WithXrayEnabled(bool value) { SetXrayEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the API. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline AwsAppSyncGraphQlApiDetails& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline AwsAppSyncGraphQlApiDetails& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline AwsAppSyncGraphQlApiDetails& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Cognito user pools configuration. </p>
     */
    inline const AwsAppSyncGraphQlApiUserPoolConfigDetails& GetUserPoolConfig() const{ return m_userPoolConfig; }
    inline bool UserPoolConfigHasBeenSet() const { return m_userPoolConfigHasBeenSet; }
    inline void SetUserPoolConfig(const AwsAppSyncGraphQlApiUserPoolConfigDetails& value) { m_userPoolConfigHasBeenSet = true; m_userPoolConfig = value; }
    inline void SetUserPoolConfig(AwsAppSyncGraphQlApiUserPoolConfigDetails&& value) { m_userPoolConfigHasBeenSet = true; m_userPoolConfig = std::move(value); }
    inline AwsAppSyncGraphQlApiDetails& WithUserPoolConfig(const AwsAppSyncGraphQlApiUserPoolConfigDetails& value) { SetUserPoolConfig(value); return *this;}
    inline AwsAppSyncGraphQlApiDetails& WithUserPoolConfig(AwsAppSyncGraphQlApiUserPoolConfigDetails&& value) { SetUserPoolConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of security configuration for your GraphQL API: API key, Identity
     * and Access Management (IAM), OpenID Connect (OIDC), Amazon Cognito user pools,
     * or Lambda. </p>
     */
    inline const Aws::String& GetAuthenticationType() const{ return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(const Aws::String& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline void SetAuthenticationType(Aws::String&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }
    inline void SetAuthenticationType(const char* value) { m_authenticationTypeHasBeenSet = true; m_authenticationType.assign(value); }
    inline AwsAppSyncGraphQlApiDetails& WithAuthenticationType(const Aws::String& value) { SetAuthenticationType(value); return *this;}
    inline AwsAppSyncGraphQlApiDetails& WithAuthenticationType(Aws::String&& value) { SetAuthenticationType(std::move(value)); return *this;}
    inline AwsAppSyncGraphQlApiDetails& WithAuthenticationType(const char* value) { SetAuthenticationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon CloudWatch Logs configuration. </p>
     */
    inline const AwsAppSyncGraphQlApiLogConfigDetails& GetLogConfig() const{ return m_logConfig; }
    inline bool LogConfigHasBeenSet() const { return m_logConfigHasBeenSet; }
    inline void SetLogConfig(const AwsAppSyncGraphQlApiLogConfigDetails& value) { m_logConfigHasBeenSet = true; m_logConfig = value; }
    inline void SetLogConfig(AwsAppSyncGraphQlApiLogConfigDetails&& value) { m_logConfigHasBeenSet = true; m_logConfig = std::move(value); }
    inline AwsAppSyncGraphQlApiDetails& WithLogConfig(const AwsAppSyncGraphQlApiLogConfigDetails& value) { SetLogConfig(value); return *this;}
    inline AwsAppSyncGraphQlApiDetails& WithLogConfig(AwsAppSyncGraphQlApiLogConfigDetails&& value) { SetLogConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of additional authentication providers for the GraphQL API. </p>
     */
    inline const Aws::Vector<AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails>& GetAdditionalAuthenticationProviders() const{ return m_additionalAuthenticationProviders; }
    inline bool AdditionalAuthenticationProvidersHasBeenSet() const { return m_additionalAuthenticationProvidersHasBeenSet; }
    inline void SetAdditionalAuthenticationProviders(const Aws::Vector<AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails>& value) { m_additionalAuthenticationProvidersHasBeenSet = true; m_additionalAuthenticationProviders = value; }
    inline void SetAdditionalAuthenticationProviders(Aws::Vector<AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails>&& value) { m_additionalAuthenticationProvidersHasBeenSet = true; m_additionalAuthenticationProviders = std::move(value); }
    inline AwsAppSyncGraphQlApiDetails& WithAdditionalAuthenticationProviders(const Aws::Vector<AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails>& value) { SetAdditionalAuthenticationProviders(value); return *this;}
    inline AwsAppSyncGraphQlApiDetails& WithAdditionalAuthenticationProviders(Aws::Vector<AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails>&& value) { SetAdditionalAuthenticationProviders(std::move(value)); return *this;}
    inline AwsAppSyncGraphQlApiDetails& AddAdditionalAuthenticationProviders(const AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails& value) { m_additionalAuthenticationProvidersHasBeenSet = true; m_additionalAuthenticationProviders.push_back(value); return *this; }
    inline AwsAppSyncGraphQlApiDetails& AddAdditionalAuthenticationProviders(AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails&& value) { m_additionalAuthenticationProvidersHasBeenSet = true; m_additionalAuthenticationProviders.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the WAF web access control list (web ACL)
     * associated with this GraphQL API, if one exists. </p>
     */
    inline const Aws::String& GetWafWebAclArn() const{ return m_wafWebAclArn; }
    inline bool WafWebAclArnHasBeenSet() const { return m_wafWebAclArnHasBeenSet; }
    inline void SetWafWebAclArn(const Aws::String& value) { m_wafWebAclArnHasBeenSet = true; m_wafWebAclArn = value; }
    inline void SetWafWebAclArn(Aws::String&& value) { m_wafWebAclArnHasBeenSet = true; m_wafWebAclArn = std::move(value); }
    inline void SetWafWebAclArn(const char* value) { m_wafWebAclArnHasBeenSet = true; m_wafWebAclArn.assign(value); }
    inline AwsAppSyncGraphQlApiDetails& WithWafWebAclArn(const Aws::String& value) { SetWafWebAclArn(value); return *this;}
    inline AwsAppSyncGraphQlApiDetails& WithWafWebAclArn(Aws::String&& value) { SetWafWebAclArn(std::move(value)); return *this;}
    inline AwsAppSyncGraphQlApiDetails& WithWafWebAclArn(const char* value) { SetWafWebAclArn(value); return *this;}
    ///@}
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
