/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/CreateNetworkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateNetworkRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ipPoolsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipPoolsJsonList(m_ipPools.size());
   for(unsigned ipPoolsIndex = 0; ipPoolsIndex < ipPoolsJsonList.GetLength(); ++ipPoolsIndex)
   {
     ipPoolsJsonList[ipPoolsIndex].AsObject(m_ipPools[ipPoolsIndex].Jsonize());
   }
   payload.WithArray("ipPools", std::move(ipPoolsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_requestIdHasBeenSet)
  {
   payload.WithString("requestId", m_requestId);

  }

  if(m_routesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> routesJsonList(m_routes.size());
   for(unsigned routesIndex = 0; routesIndex < routesJsonList.GetLength(); ++routesIndex)
   {
     routesJsonList[routesIndex].AsObject(m_routes[routesIndex].Jsonize());
   }
   payload.WithArray("routes", std::move(routesJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




