/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/PluginAuthConfiguration.h>
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

PluginAuthConfiguration::PluginAuthConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

PluginAuthConfiguration& PluginAuthConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("basicAuthConfiguration"))
  {
    m_basicAuthConfiguration = jsonValue.GetObject("basicAuthConfiguration");
    m_basicAuthConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("oAuth2ClientCredentialConfiguration"))
  {
    m_oAuth2ClientCredentialConfiguration = jsonValue.GetObject("oAuth2ClientCredentialConfiguration");
    m_oAuth2ClientCredentialConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("noAuthConfiguration"))
  {
    m_noAuthConfiguration = jsonValue.GetObject("noAuthConfiguration");
    m_noAuthConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("idcAuthConfiguration"))
  {
    m_idcAuthConfiguration = jsonValue.GetObject("idcAuthConfiguration");
    m_idcAuthConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue PluginAuthConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_basicAuthConfigurationHasBeenSet)
  {
   payload.WithObject("basicAuthConfiguration", m_basicAuthConfiguration.Jsonize());

  }

  if(m_oAuth2ClientCredentialConfigurationHasBeenSet)
  {
   payload.WithObject("oAuth2ClientCredentialConfiguration", m_oAuth2ClientCredentialConfiguration.Jsonize());

  }

  if(m_noAuthConfigurationHasBeenSet)
  {
   payload.WithObject("noAuthConfiguration", m_noAuthConfiguration.Jsonize());

  }

  if(m_idcAuthConfigurationHasBeenSet)
  {
   payload.WithObject("idcAuthConfiguration", m_idcAuthConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
