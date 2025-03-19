/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ClusterNetworkSettingsCreateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

ClusterNetworkSettingsCreateRequest::ClusterNetworkSettingsCreateRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

ClusterNetworkSettingsCreateRequest& ClusterNetworkSettingsCreateRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("defaultRoute"))
  {
    m_defaultRoute = jsonValue.GetString("defaultRoute");
    m_defaultRouteHasBeenSet = true;
  }
  if(jsonValue.ValueExists("interfaceMappings"))
  {
    Aws::Utils::Array<JsonView> interfaceMappingsJsonList = jsonValue.GetArray("interfaceMappings");
    for(unsigned interfaceMappingsIndex = 0; interfaceMappingsIndex < interfaceMappingsJsonList.GetLength(); ++interfaceMappingsIndex)
    {
      m_interfaceMappings.push_back(interfaceMappingsJsonList[interfaceMappingsIndex].AsObject());
    }
    m_interfaceMappingsHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterNetworkSettingsCreateRequest::Jsonize() const
{
  JsonValue payload;

  if(m_defaultRouteHasBeenSet)
  {
   payload.WithString("defaultRoute", m_defaultRoute);

  }

  if(m_interfaceMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> interfaceMappingsJsonList(m_interfaceMappings.size());
   for(unsigned interfaceMappingsIndex = 0; interfaceMappingsIndex < interfaceMappingsJsonList.GetLength(); ++interfaceMappingsIndex)
   {
     interfaceMappingsJsonList[interfaceMappingsIndex].AsObject(m_interfaceMappings[interfaceMappingsIndex].Jsonize());
   }
   payload.WithArray("interfaceMappings", std::move(interfaceMappingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
