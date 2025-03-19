/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkflowmonitor/model/CreateMonitorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkFlowMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateMonitorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_monitorNameHasBeenSet)
  {
   payload.WithString("monitorName", m_monitorName);

  }

  if(m_localResourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> localResourcesJsonList(m_localResources.size());
   for(unsigned localResourcesIndex = 0; localResourcesIndex < localResourcesJsonList.GetLength(); ++localResourcesIndex)
   {
     localResourcesJsonList[localResourcesIndex].AsObject(m_localResources[localResourcesIndex].Jsonize());
   }
   payload.WithArray("localResources", std::move(localResourcesJsonList));

  }

  if(m_remoteResourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> remoteResourcesJsonList(m_remoteResources.size());
   for(unsigned remoteResourcesIndex = 0; remoteResourcesIndex < remoteResourcesJsonList.GetLength(); ++remoteResourcesIndex)
   {
     remoteResourcesJsonList[remoteResourcesIndex].AsObject(m_remoteResources[remoteResourcesIndex].Jsonize());
   }
   payload.WithArray("remoteResources", std::move(remoteResourcesJsonList));

  }

  if(m_scopeArnHasBeenSet)
  {
   payload.WithString("scopeArn", m_scopeArn);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

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




