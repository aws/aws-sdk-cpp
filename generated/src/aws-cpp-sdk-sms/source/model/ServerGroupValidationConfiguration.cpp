/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/ServerGroupValidationConfiguration.h>
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

ServerGroupValidationConfiguration::ServerGroupValidationConfiguration() : 
    m_serverGroupIdHasBeenSet(false),
    m_serverValidationConfigurationsHasBeenSet(false)
{
}

ServerGroupValidationConfiguration::ServerGroupValidationConfiguration(JsonView jsonValue) : 
    m_serverGroupIdHasBeenSet(false),
    m_serverValidationConfigurationsHasBeenSet(false)
{
  *this = jsonValue;
}

ServerGroupValidationConfiguration& ServerGroupValidationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serverGroupId"))
  {
    m_serverGroupId = jsonValue.GetString("serverGroupId");

    m_serverGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serverValidationConfigurations"))
  {
    Aws::Utils::Array<JsonView> serverValidationConfigurationsJsonList = jsonValue.GetArray("serverValidationConfigurations");
    for(unsigned serverValidationConfigurationsIndex = 0; serverValidationConfigurationsIndex < serverValidationConfigurationsJsonList.GetLength(); ++serverValidationConfigurationsIndex)
    {
      m_serverValidationConfigurations.push_back(serverValidationConfigurationsJsonList[serverValidationConfigurationsIndex].AsObject());
    }
    m_serverValidationConfigurationsHasBeenSet = true;
  }

  return *this;
}

JsonValue ServerGroupValidationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_serverGroupIdHasBeenSet)
  {
   payload.WithString("serverGroupId", m_serverGroupId);

  }

  if(m_serverValidationConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serverValidationConfigurationsJsonList(m_serverValidationConfigurations.size());
   for(unsigned serverValidationConfigurationsIndex = 0; serverValidationConfigurationsIndex < serverValidationConfigurationsJsonList.GetLength(); ++serverValidationConfigurationsIndex)
   {
     serverValidationConfigurationsJsonList[serverValidationConfigurationsIndex].AsObject(m_serverValidationConfigurations[serverValidationConfigurationsIndex].Jsonize());
   }
   payload.WithArray("serverValidationConfigurations", std::move(serverValidationConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SMS
} // namespace Aws
