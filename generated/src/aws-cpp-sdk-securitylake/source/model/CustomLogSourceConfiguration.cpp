/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/CustomLogSourceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

CustomLogSourceConfiguration::CustomLogSourceConfiguration() : 
    m_crawlerConfigurationHasBeenSet(false),
    m_providerIdentityHasBeenSet(false)
{
}

CustomLogSourceConfiguration::CustomLogSourceConfiguration(JsonView jsonValue) : 
    m_crawlerConfigurationHasBeenSet(false),
    m_providerIdentityHasBeenSet(false)
{
  *this = jsonValue;
}

CustomLogSourceConfiguration& CustomLogSourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("crawlerConfiguration"))
  {
    m_crawlerConfiguration = jsonValue.GetObject("crawlerConfiguration");

    m_crawlerConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("providerIdentity"))
  {
    m_providerIdentity = jsonValue.GetObject("providerIdentity");

    m_providerIdentityHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomLogSourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_crawlerConfigurationHasBeenSet)
  {
   payload.WithObject("crawlerConfiguration", m_crawlerConfiguration.Jsonize());

  }

  if(m_providerIdentityHasBeenSet)
  {
   payload.WithObject("providerIdentity", m_providerIdentity.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
