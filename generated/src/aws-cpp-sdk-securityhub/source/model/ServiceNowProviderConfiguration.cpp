/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ServiceNowProviderConfiguration.h>
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

ServiceNowProviderConfiguration::ServiceNowProviderConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceNowProviderConfiguration& ServiceNowProviderConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceName"))
  {
    m_instanceName = jsonValue.GetString("InstanceName");
    m_instanceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ClientId"))
  {
    m_clientId = jsonValue.GetString("ClientId");
    m_clientIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ClientSecret"))
  {
    m_clientSecret = jsonValue.GetString("ClientSecret");
    m_clientSecretHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceNowProviderConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_instanceNameHasBeenSet)
  {
   payload.WithString("InstanceName", m_instanceName);

  }

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("ClientId", m_clientId);

  }

  if(m_clientSecretHasBeenSet)
  {
   payload.WithString("ClientSecret", m_clientSecret);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
