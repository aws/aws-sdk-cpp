/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/LoggingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

LoggingConfiguration::LoggingConfiguration() : 
    m_logDestinationConfigsHasBeenSet(false)
{
}

LoggingConfiguration::LoggingConfiguration(JsonView jsonValue) : 
    m_logDestinationConfigsHasBeenSet(false)
{
  *this = jsonValue;
}

LoggingConfiguration& LoggingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LogDestinationConfigs"))
  {
    Aws::Utils::Array<JsonView> logDestinationConfigsJsonList = jsonValue.GetArray("LogDestinationConfigs");
    for(unsigned logDestinationConfigsIndex = 0; logDestinationConfigsIndex < logDestinationConfigsJsonList.GetLength(); ++logDestinationConfigsIndex)
    {
      m_logDestinationConfigs.push_back(logDestinationConfigsJsonList[logDestinationConfigsIndex].AsObject());
    }
    m_logDestinationConfigsHasBeenSet = true;
  }

  return *this;
}

JsonValue LoggingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_logDestinationConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logDestinationConfigsJsonList(m_logDestinationConfigs.size());
   for(unsigned logDestinationConfigsIndex = 0; logDestinationConfigsIndex < logDestinationConfigsJsonList.GetLength(); ++logDestinationConfigsIndex)
   {
     logDestinationConfigsJsonList[logDestinationConfigsIndex].AsObject(m_logDestinationConfigs[logDestinationConfigsIndex].Jsonize());
   }
   payload.WithArray("LogDestinationConfigs", std::move(logDestinationConfigsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
