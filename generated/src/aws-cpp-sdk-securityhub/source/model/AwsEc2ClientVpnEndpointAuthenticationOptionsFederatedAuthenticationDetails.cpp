/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails.h>
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

AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails::AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails() : 
    m_samlProviderArnHasBeenSet(false),
    m_selfServiceSamlProviderArnHasBeenSet(false)
{
}

AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails::AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails(JsonView jsonValue) : 
    m_samlProviderArnHasBeenSet(false),
    m_selfServiceSamlProviderArnHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails& AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SamlProviderArn"))
  {
    m_samlProviderArn = jsonValue.GetString("SamlProviderArn");

    m_samlProviderArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelfServiceSamlProviderArn"))
  {
    m_selfServiceSamlProviderArn = jsonValue.GetString("SelfServiceSamlProviderArn");

    m_selfServiceSamlProviderArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2ClientVpnEndpointAuthenticationOptionsFederatedAuthenticationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_samlProviderArnHasBeenSet)
  {
   payload.WithString("SamlProviderArn", m_samlProviderArn);

  }

  if(m_selfServiceSamlProviderArnHasBeenSet)
  {
   payload.WithString("SelfServiceSamlProviderArn", m_selfServiceSamlProviderArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
