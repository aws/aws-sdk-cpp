/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/IdentityProviderConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

IdentityProviderConfiguration::IdentityProviderConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

IdentityProviderConfiguration& IdentityProviderConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("samlConfiguration"))
  {
    m_samlConfiguration = jsonValue.GetObject("samlConfiguration");
    m_samlConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("openIDConnectConfiguration"))
  {
    m_openIDConnectConfiguration = jsonValue.GetObject("openIDConnectConfiguration");
    m_openIDConnectConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue IdentityProviderConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_samlConfigurationHasBeenSet)
  {
   payload.WithObject("samlConfiguration", m_samlConfiguration.Jsonize());

  }

  if(m_openIDConnectConfigurationHasBeenSet)
  {
   payload.WithObject("openIDConnectConfiguration", m_openIDConnectConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
