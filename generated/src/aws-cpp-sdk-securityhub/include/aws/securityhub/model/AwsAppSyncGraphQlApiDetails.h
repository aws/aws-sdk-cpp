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
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiDetails() = default;
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier for the API. </p>
     */
    inline const Aws::String& GetApiId() const { return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    template<typename ApiIdT = Aws::String>
    void SetApiId(ApiIdT&& value) { m_apiIdHasBeenSet = true; m_apiId = std::forward<ApiIdT>(value); }
    template<typename ApiIdT = Aws::String>
    AwsAppSyncGraphQlApiDetails& WithApiId(ApiIdT&& value) { SetApiId(std::forward<ApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the API.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AwsAppSyncGraphQlApiDetails& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the authorization configuration for using an OpenID Connect
     * compliant service with an AppSync GraphQL API endpoint. </p>
     */
    inline const AwsAppSyncGraphQlApiOpenIdConnectConfigDetails& GetOpenIdConnectConfig() const { return m_openIdConnectConfig; }
    inline bool OpenIdConnectConfigHasBeenSet() const { return m_openIdConnectConfigHasBeenSet; }
    template<typename OpenIdConnectConfigT = AwsAppSyncGraphQlApiOpenIdConnectConfigDetails>
    void SetOpenIdConnectConfig(OpenIdConnectConfigT&& value) { m_openIdConnectConfigHasBeenSet = true; m_openIdConnectConfig = std::forward<OpenIdConnectConfigT>(value); }
    template<typename OpenIdConnectConfigT = AwsAppSyncGraphQlApiOpenIdConnectConfigDetails>
    AwsAppSyncGraphQlApiDetails& WithOpenIdConnectConfig(OpenIdConnectConfigT&& value) { SetOpenIdConnectConfig(std::forward<OpenIdConnectConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The API name. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AwsAppSyncGraphQlApiDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the configuration for Lambda function authorization. </p>
     */
    inline const AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails& GetLambdaAuthorizerConfig() const { return m_lambdaAuthorizerConfig; }
    inline bool LambdaAuthorizerConfigHasBeenSet() const { return m_lambdaAuthorizerConfigHasBeenSet; }
    template<typename LambdaAuthorizerConfigT = AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails>
    void SetLambdaAuthorizerConfig(LambdaAuthorizerConfigT&& value) { m_lambdaAuthorizerConfigHasBeenSet = true; m_lambdaAuthorizerConfig = std::forward<LambdaAuthorizerConfigT>(value); }
    template<typename LambdaAuthorizerConfigT = AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails>
    AwsAppSyncGraphQlApiDetails& WithLambdaAuthorizerConfig(LambdaAuthorizerConfigT&& value) { SetLambdaAuthorizerConfig(std::forward<LambdaAuthorizerConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether to use X-Ray tracing for the GraphQL API. </p>
     */
    inline bool GetXrayEnabled() const { return m_xrayEnabled; }
    inline bool XrayEnabledHasBeenSet() const { return m_xrayEnabledHasBeenSet; }
    inline void SetXrayEnabled(bool value) { m_xrayEnabledHasBeenSet = true; m_xrayEnabled = value; }
    inline AwsAppSyncGraphQlApiDetails& WithXrayEnabled(bool value) { SetXrayEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the API. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    AwsAppSyncGraphQlApiDetails& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
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
    AwsAppSyncGraphQlApiDetails& WithUserPoolConfig(UserPoolConfigT&& value) { SetUserPoolConfig(std::forward<UserPoolConfigT>(value)); return *this;}
    ///@}

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
    AwsAppSyncGraphQlApiDetails& WithAuthenticationType(AuthenticationTypeT&& value) { SetAuthenticationType(std::forward<AuthenticationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon CloudWatch Logs configuration. </p>
     */
    inline const AwsAppSyncGraphQlApiLogConfigDetails& GetLogConfig() const { return m_logConfig; }
    inline bool LogConfigHasBeenSet() const { return m_logConfigHasBeenSet; }
    template<typename LogConfigT = AwsAppSyncGraphQlApiLogConfigDetails>
    void SetLogConfig(LogConfigT&& value) { m_logConfigHasBeenSet = true; m_logConfig = std::forward<LogConfigT>(value); }
    template<typename LogConfigT = AwsAppSyncGraphQlApiLogConfigDetails>
    AwsAppSyncGraphQlApiDetails& WithLogConfig(LogConfigT&& value) { SetLogConfig(std::forward<LogConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of additional authentication providers for the GraphQL API. </p>
     */
    inline const Aws::Vector<AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails>& GetAdditionalAuthenticationProviders() const { return m_additionalAuthenticationProviders; }
    inline bool AdditionalAuthenticationProvidersHasBeenSet() const { return m_additionalAuthenticationProvidersHasBeenSet; }
    template<typename AdditionalAuthenticationProvidersT = Aws::Vector<AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails>>
    void SetAdditionalAuthenticationProviders(AdditionalAuthenticationProvidersT&& value) { m_additionalAuthenticationProvidersHasBeenSet = true; m_additionalAuthenticationProviders = std::forward<AdditionalAuthenticationProvidersT>(value); }
    template<typename AdditionalAuthenticationProvidersT = Aws::Vector<AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails>>
    AwsAppSyncGraphQlApiDetails& WithAdditionalAuthenticationProviders(AdditionalAuthenticationProvidersT&& value) { SetAdditionalAuthenticationProviders(std::forward<AdditionalAuthenticationProvidersT>(value)); return *this;}
    template<typename AdditionalAuthenticationProvidersT = AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails>
    AwsAppSyncGraphQlApiDetails& AddAdditionalAuthenticationProviders(AdditionalAuthenticationProvidersT&& value) { m_additionalAuthenticationProvidersHasBeenSet = true; m_additionalAuthenticationProviders.emplace_back(std::forward<AdditionalAuthenticationProvidersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the WAF web access control list (web ACL)
     * associated with this GraphQL API, if one exists. </p>
     */
    inline const Aws::String& GetWafWebAclArn() const { return m_wafWebAclArn; }
    inline bool WafWebAclArnHasBeenSet() const { return m_wafWebAclArnHasBeenSet; }
    template<typename WafWebAclArnT = Aws::String>
    void SetWafWebAclArn(WafWebAclArnT&& value) { m_wafWebAclArnHasBeenSet = true; m_wafWebAclArn = std::forward<WafWebAclArnT>(value); }
    template<typename WafWebAclArnT = Aws::String>
    AwsAppSyncGraphQlApiDetails& WithWafWebAclArn(WafWebAclArnT&& value) { SetWafWebAclArn(std::forward<WafWebAclArnT>(value)); return *this;}
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

    bool m_xrayEnabled{false};
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
