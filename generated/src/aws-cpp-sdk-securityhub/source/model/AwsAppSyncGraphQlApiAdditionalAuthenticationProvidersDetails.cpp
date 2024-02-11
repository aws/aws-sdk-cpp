/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails.h>
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

AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails::AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails() : 
    m_authenticationTypeHasBeenSet(false),
    m_lambdaAuthorizerConfigHasBeenSet(false),
    m_openIdConnectConfigHasBeenSet(false),
    m_userPoolConfigHasBeenSet(false)
{
}

AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails::AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails(JsonView jsonValue) : 
    m_authenticationTypeHasBeenSet(false),
    m_lambdaAuthorizerConfigHasBeenSet(false),
    m_openIdConnectConfigHasBeenSet(false),
    m_userPoolConfigHasBeenSet(false)
{
  *this = jsonValue;
}

AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails& AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AuthenticationType"))
  {
    m_authenticationType = jsonValue.GetString("AuthenticationType");

    m_authenticationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LambdaAuthorizerConfig"))
  {
    m_lambdaAuthorizerConfig = jsonValue.GetObject("LambdaAuthorizerConfig");

    m_lambdaAuthorizerConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OpenIdConnectConfig"))
  {
    m_openIdConnectConfig = jsonValue.GetObject("OpenIdConnectConfig");

    m_openIdConnectConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserPoolConfig"))
  {
    m_userPoolConfig = jsonValue.GetObject("UserPoolConfig");

    m_userPoolConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsAppSyncGraphQlApiAdditionalAuthenticationProvidersDetails::Jsonize() const
{
  JsonValue payload;

  if(m_authenticationTypeHasBeenSet)
  {
   payload.WithString("AuthenticationType", m_authenticationType);

  }

  if(m_lambdaAuthorizerConfigHasBeenSet)
  {
   payload.WithObject("LambdaAuthorizerConfig", m_lambdaAuthorizerConfig.Jsonize());

  }

  if(m_openIdConnectConfigHasBeenSet)
  {
   payload.WithObject("OpenIdConnectConfig", m_openIdConnectConfig.Jsonize());

  }

  if(m_userPoolConfigHasBeenSet)
  {
   payload.WithObject("UserPoolConfig", m_userPoolConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
