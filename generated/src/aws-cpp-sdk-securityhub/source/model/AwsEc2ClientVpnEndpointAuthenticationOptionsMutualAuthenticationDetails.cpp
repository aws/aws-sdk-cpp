/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails.h>
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

AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails::AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails() : 
    m_clientRootCertificateChainHasBeenSet(false)
{
}

AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails::AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails(JsonView jsonValue) : 
    m_clientRootCertificateChainHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails& AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClientRootCertificateChain"))
  {
    m_clientRootCertificateChain = jsonValue.GetString("ClientRootCertificateChain");

    m_clientRootCertificateChainHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_clientRootCertificateChainHasBeenSet)
  {
   payload.WithString("ClientRootCertificateChain", m_clientRootCertificateChain);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
