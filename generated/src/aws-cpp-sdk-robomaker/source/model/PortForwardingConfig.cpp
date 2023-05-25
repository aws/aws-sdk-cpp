/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/PortForwardingConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

PortForwardingConfig::PortForwardingConfig() : 
    m_portMappingsHasBeenSet(false)
{
}

PortForwardingConfig::PortForwardingConfig(JsonView jsonValue) : 
    m_portMappingsHasBeenSet(false)
{
  *this = jsonValue;
}

PortForwardingConfig& PortForwardingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("portMappings"))
  {
    Aws::Utils::Array<JsonView> portMappingsJsonList = jsonValue.GetArray("portMappings");
    for(unsigned portMappingsIndex = 0; portMappingsIndex < portMappingsJsonList.GetLength(); ++portMappingsIndex)
    {
      m_portMappings.push_back(portMappingsJsonList[portMappingsIndex].AsObject());
    }
    m_portMappingsHasBeenSet = true;
  }

  return *this;
}

JsonValue PortForwardingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_portMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> portMappingsJsonList(m_portMappings.size());
   for(unsigned portMappingsIndex = 0; portMappingsIndex < portMappingsJsonList.GetLength(); ++portMappingsIndex)
   {
     portMappingsJsonList[portMappingsIndex].AsObject(m_portMappings[portMappingsIndex].Jsonize());
   }
   payload.WithArray("portMappings", std::move(portMappingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
