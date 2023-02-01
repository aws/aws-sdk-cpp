/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/ServerGroupReplicationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SMS
{
namespace Model
{

ServerGroupReplicationConfiguration::ServerGroupReplicationConfiguration() : 
    m_serverGroupIdHasBeenSet(false),
    m_serverReplicationConfigurationsHasBeenSet(false)
{
}

ServerGroupReplicationConfiguration::ServerGroupReplicationConfiguration(JsonView jsonValue) : 
    m_serverGroupIdHasBeenSet(false),
    m_serverReplicationConfigurationsHasBeenSet(false)
{
  *this = jsonValue;
}

ServerGroupReplicationConfiguration& ServerGroupReplicationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serverGroupId"))
  {
    m_serverGroupId = jsonValue.GetString("serverGroupId");

    m_serverGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serverReplicationConfigurations"))
  {
    Aws::Utils::Array<JsonView> serverReplicationConfigurationsJsonList = jsonValue.GetArray("serverReplicationConfigurations");
    for(unsigned serverReplicationConfigurationsIndex = 0; serverReplicationConfigurationsIndex < serverReplicationConfigurationsJsonList.GetLength(); ++serverReplicationConfigurationsIndex)
    {
      m_serverReplicationConfigurations.push_back(serverReplicationConfigurationsJsonList[serverReplicationConfigurationsIndex].AsObject());
    }
    m_serverReplicationConfigurationsHasBeenSet = true;
  }

  return *this;
}

JsonValue ServerGroupReplicationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_serverGroupIdHasBeenSet)
  {
   payload.WithString("serverGroupId", m_serverGroupId);

  }

  if(m_serverReplicationConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serverReplicationConfigurationsJsonList(m_serverReplicationConfigurations.size());
   for(unsigned serverReplicationConfigurationsIndex = 0; serverReplicationConfigurationsIndex < serverReplicationConfigurationsJsonList.GetLength(); ++serverReplicationConfigurationsIndex)
   {
     serverReplicationConfigurationsJsonList[serverReplicationConfigurationsIndex].AsObject(m_serverReplicationConfigurations[serverReplicationConfigurationsIndex].Jsonize());
   }
   payload.WithArray("serverReplicationConfigurations", std::move(serverReplicationConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SMS
} // namespace Aws
