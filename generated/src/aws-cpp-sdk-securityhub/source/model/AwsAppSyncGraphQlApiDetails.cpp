/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsAppSyncGraphQlApiDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsAppSyncGraphQlApiDetails::AwsAppSyncGraphQlApiDetails() : 
    m_apiIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_openIdConnectConfigHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_lambdaAuthorizerConfigHasBeenSet(false),
    m_xrayEnabled(false),
    m_xrayEnabledHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_userPoolConfigHasBeenSet(false),
    m_authenticationTypeHasBeenSet(false),
    m_logConfigHasBeenSet(false),
    m_additionalAuthenticationProvidersHasBeenSet(false),
    m_wafWebAclArnHasBeenSet(false)
{
}

AwsAppSyncGraphQlApiDetails::AwsAppSyncGraphQlApiDetails(JsonView jsonValue) : 
    m_apiIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_openIdConnectConfigHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_lambdaAuthorizerConfigHasBeenSet(false),
    m_xrayEnabled(false),
    m_xrayEnabledHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_userPoolConfigHasBeenSet(false),
    m_authenticationTypeHasBeenSet(false),
    m_logConfigHasBeenSet(false),
    m_additionalAuthenticationProvidersHasBeenSet(false),
    m_wafWebAclArnHasBeenSet(false)
{
  *this = jsonValue;
}

AwsAppSyncGraphQlApiDetails& AwsAppSyncGraphQlApiDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApiId"))
  {
    m_apiId = jsonValue.GetString("ApiId");

    m_apiIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OpenIdConnectConfig"))
  {
    m_openIdConnectConfig = jsonValue.GetObject("OpenIdConnectConfig");

    m_openIdConnectConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LambdaAuthorizerConfig"))
  {
    m_lambdaAuthorizerConfig = jsonValue.GetObject("LambdaAuthorizerConfig");

    m_lambdaAuthorizerConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("XrayEnabled"))
  {
    m_xrayEnabled = jsonValue.GetBool("XrayEnabled");

    m_xrayEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserPoolConfig"))
  {
    m_userPoolConfig = jsonValue.GetObject("UserPoolConfig");

    m_userPoolConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthenticationType"))
  {
    m_authenticationType = jsonValue.GetString("AuthenticationType");

    m_authenticationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogConfig"))
  {
    m_logConfig = jsonValue.GetObject("LogConfig");

    m_logConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalAuthenticationProviders"))
  {
    Aws::Utils::Array<JsonView> additionalAuthenticationProvidersJsonList = jsonValue.GetArray("AdditionalAuthenticationProviders");
    for(unsigned additionalAuthenticationProvidersIndex = 0; additionalAuthenticationProvidersIndex < additionalAuthenticationProvidersJsonList.GetLength(); ++additionalAuthenticationProvidersIndex)
    {
      m_additionalAuthenticationProviders.push_back(additionalAuthenticationProvidersJsonList[additionalAuthenticationProvidersIndex].AsObject());
    }
    m_additionalAuthenticationProvidersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WafWebAclArn"))
  {
    m_wafWebAclArn = jsonValue.GetString("WafWebAclArn");

    m_wafWebAclArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsAppSyncGraphQlApiDetails::Jsonize() const
{
  JsonValue payload;

  if(m_apiIdHasBeenSet)
  {
   payload.WithString("ApiId", m_apiId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_openIdConnectConfigHasBeenSet)
  {
   payload.WithObject("OpenIdConnectConfig", m_openIdConnectConfig.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_lambdaAuthorizerConfigHasBeenSet)
  {
   payload.WithObject("LambdaAuthorizerConfig", m_lambdaAuthorizerConfig.Jsonize());

  }

  if(m_xrayEnabledHasBeenSet)
  {
   payload.WithBool("XrayEnabled", m_xrayEnabled);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_userPoolConfigHasBeenSet)
  {
   payload.WithObject("UserPoolConfig", m_userPoolConfig.Jsonize());

  }

  if(m_authenticationTypeHasBeenSet)
  {
   payload.WithString("AuthenticationType", m_authenticationType);

  }

  if(m_logConfigHasBeenSet)
  {
   payload.WithObject("LogConfig", m_logConfig.Jsonize());

  }

  if(m_additionalAuthenticationProvidersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalAuthenticationProvidersJsonList(m_additionalAuthenticationProviders.size());
   for(unsigned additionalAuthenticationProvidersIndex = 0; additionalAuthenticationProvidersIndex < additionalAuthenticationProvidersJsonList.GetLength(); ++additionalAuthenticationProvidersIndex)
   {
     additionalAuthenticationProvidersJsonList[additionalAuthenticationProvidersIndex].AsObject(m_additionalAuthenticationProviders[additionalAuthenticationProvidersIndex].Jsonize());
   }
   payload.WithArray("AdditionalAuthenticationProviders", std::move(additionalAuthenticationProvidersJsonList));

  }

  if(m_wafWebAclArnHasBeenSet)
  {
   payload.WithString("WafWebAclArn", m_wafWebAclArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
