/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2ClientVpnEndpointAuthenticationOptionsDetails.h>
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

AwsEc2ClientVpnEndpointAuthenticationOptionsDetails::AwsEc2ClientVpnEndpointAuthenticationOptionsDetails() : 
    m_typeHasBeenSet(false),
    m_activeDirectoryHasBeenSet(false),
    m_mutualAuthenticationHasBeenSet(false),
    m_federatedAuthenticationHasBeenSet(false)
{
}

AwsEc2ClientVpnEndpointAuthenticationOptionsDetails::AwsEc2ClientVpnEndpointAuthenticationOptionsDetails(JsonView jsonValue) : 
    m_typeHasBeenSet(false),
    m_activeDirectoryHasBeenSet(false),
    m_mutualAuthenticationHasBeenSet(false),
    m_federatedAuthenticationHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2ClientVpnEndpointAuthenticationOptionsDetails& AwsEc2ClientVpnEndpointAuthenticationOptionsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActiveDirectory"))
  {
    m_activeDirectory = jsonValue.GetObject("ActiveDirectory");

    m_activeDirectoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MutualAuthentication"))
  {
    m_mutualAuthentication = jsonValue.GetObject("MutualAuthentication");

    m_mutualAuthenticationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FederatedAuthentication"))
  {
    m_federatedAuthentication = jsonValue.GetObject("FederatedAuthentication");

    m_federatedAuthenticationHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2ClientVpnEndpointAuthenticationOptionsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_activeDirectoryHasBeenSet)
  {
   payload.WithObject("ActiveDirectory", m_activeDirectory.Jsonize());

  }

  if(m_mutualAuthenticationHasBeenSet)
  {
   payload.WithObject("MutualAuthentication", m_mutualAuthentication.Jsonize());

  }

  if(m_federatedAuthenticationHasBeenSet)
  {
   payload.WithObject("FederatedAuthentication", m_federatedAuthentication.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
