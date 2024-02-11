/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/TrustedTokenIssuerConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

TrustedTokenIssuerConfiguration::TrustedTokenIssuerConfiguration() : 
    m_oidcJwtConfigurationHasBeenSet(false)
{
}

TrustedTokenIssuerConfiguration::TrustedTokenIssuerConfiguration(JsonView jsonValue) : 
    m_oidcJwtConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

TrustedTokenIssuerConfiguration& TrustedTokenIssuerConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OidcJwtConfiguration"))
  {
    m_oidcJwtConfiguration = jsonValue.GetObject("OidcJwtConfiguration");

    m_oidcJwtConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue TrustedTokenIssuerConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_oidcJwtConfigurationHasBeenSet)
  {
   payload.WithObject("OidcJwtConfiguration", m_oidcJwtConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
