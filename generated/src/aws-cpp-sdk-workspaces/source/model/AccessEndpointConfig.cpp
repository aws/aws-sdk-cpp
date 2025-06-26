/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/AccessEndpointConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

AccessEndpointConfig::AccessEndpointConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

AccessEndpointConfig& AccessEndpointConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccessEndpoints"))
  {
    Aws::Utils::Array<JsonView> accessEndpointsJsonList = jsonValue.GetArray("AccessEndpoints");
    for(unsigned accessEndpointsIndex = 0; accessEndpointsIndex < accessEndpointsJsonList.GetLength(); ++accessEndpointsIndex)
    {
      m_accessEndpoints.push_back(accessEndpointsJsonList[accessEndpointsIndex].AsObject());
    }
    m_accessEndpointsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InternetFallbackProtocols"))
  {
    Aws::Utils::Array<JsonView> internetFallbackProtocolsJsonList = jsonValue.GetArray("InternetFallbackProtocols");
    for(unsigned internetFallbackProtocolsIndex = 0; internetFallbackProtocolsIndex < internetFallbackProtocolsJsonList.GetLength(); ++internetFallbackProtocolsIndex)
    {
      m_internetFallbackProtocols.push_back(InternetFallbackProtocolMapper::GetInternetFallbackProtocolForName(internetFallbackProtocolsJsonList[internetFallbackProtocolsIndex].AsString()));
    }
    m_internetFallbackProtocolsHasBeenSet = true;
  }
  return *this;
}

JsonValue AccessEndpointConfig::Jsonize() const
{
  JsonValue payload;

  if(m_accessEndpointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accessEndpointsJsonList(m_accessEndpoints.size());
   for(unsigned accessEndpointsIndex = 0; accessEndpointsIndex < accessEndpointsJsonList.GetLength(); ++accessEndpointsIndex)
   {
     accessEndpointsJsonList[accessEndpointsIndex].AsObject(m_accessEndpoints[accessEndpointsIndex].Jsonize());
   }
   payload.WithArray("AccessEndpoints", std::move(accessEndpointsJsonList));

  }

  if(m_internetFallbackProtocolsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> internetFallbackProtocolsJsonList(m_internetFallbackProtocols.size());
   for(unsigned internetFallbackProtocolsIndex = 0; internetFallbackProtocolsIndex < internetFallbackProtocolsJsonList.GetLength(); ++internetFallbackProtocolsIndex)
   {
     internetFallbackProtocolsJsonList[internetFallbackProtocolsIndex].AsString(InternetFallbackProtocolMapper::GetNameForInternetFallbackProtocol(m_internetFallbackProtocols[internetFallbackProtocolsIndex]));
   }
   payload.WithArray("InternetFallbackProtocols", std::move(internetFallbackProtocolsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
