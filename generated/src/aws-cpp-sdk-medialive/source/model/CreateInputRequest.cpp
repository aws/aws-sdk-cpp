/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/CreateInputRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateInputRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_destinationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationsJsonList(m_destinations.size());
   for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
   {
     destinationsJsonList[destinationsIndex].AsObject(m_destinations[destinationsIndex].Jsonize());
   }
   payload.WithArray("destinations", std::move(destinationsJsonList));

  }

  if(m_inputDevicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputDevicesJsonList(m_inputDevices.size());
   for(unsigned inputDevicesIndex = 0; inputDevicesIndex < inputDevicesJsonList.GetLength(); ++inputDevicesIndex)
   {
     inputDevicesJsonList[inputDevicesIndex].AsObject(m_inputDevices[inputDevicesIndex].Jsonize());
   }
   payload.WithArray("inputDevices", std::move(inputDevicesJsonList));

  }

  if(m_inputSecurityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputSecurityGroupsJsonList(m_inputSecurityGroups.size());
   for(unsigned inputSecurityGroupsIndex = 0; inputSecurityGroupsIndex < inputSecurityGroupsJsonList.GetLength(); ++inputSecurityGroupsIndex)
   {
     inputSecurityGroupsJsonList[inputSecurityGroupsIndex].AsString(m_inputSecurityGroups[inputSecurityGroupsIndex]);
   }
   payload.WithArray("inputSecurityGroups", std::move(inputSecurityGroupsJsonList));

  }

  if(m_mediaConnectFlowsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mediaConnectFlowsJsonList(m_mediaConnectFlows.size());
   for(unsigned mediaConnectFlowsIndex = 0; mediaConnectFlowsIndex < mediaConnectFlowsJsonList.GetLength(); ++mediaConnectFlowsIndex)
   {
     mediaConnectFlowsJsonList[mediaConnectFlowsIndex].AsObject(m_mediaConnectFlows[mediaConnectFlowsIndex].Jsonize());
   }
   payload.WithArray("mediaConnectFlows", std::move(mediaConnectFlowsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_requestIdHasBeenSet)
  {
   payload.WithString("requestId", m_requestId);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_sourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourcesJsonList(m_sources.size());
   for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
   {
     sourcesJsonList[sourcesIndex].AsObject(m_sources[sourcesIndex].Jsonize());
   }
   payload.WithArray("sources", std::move(sourcesJsonList));

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

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", InputTypeMapper::GetNameForInputType(m_type));
  }

  if(m_vpcHasBeenSet)
  {
   payload.WithObject("vpc", m_vpc.Jsonize());

  }

  if(m_srtSettingsHasBeenSet)
  {
   payload.WithObject("srtSettings", m_srtSettings.Jsonize());

  }

  if(m_inputNetworkLocationHasBeenSet)
  {
   payload.WithString("inputNetworkLocation", InputNetworkLocationMapper::GetNameForInputNetworkLocation(m_inputNetworkLocation));
  }

  if(m_multicastSettingsHasBeenSet)
  {
   payload.WithObject("multicastSettings", m_multicastSettings.Jsonize());

  }

  if(m_smpte2110ReceiverGroupSettingsHasBeenSet)
  {
   payload.WithObject("smpte2110ReceiverGroupSettings", m_smpte2110ReceiverGroupSettings.Jsonize());

  }

  if(m_sdiSourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sdiSourcesJsonList(m_sdiSources.size());
   for(unsigned sdiSourcesIndex = 0; sdiSourcesIndex < sdiSourcesJsonList.GetLength(); ++sdiSourcesIndex)
   {
     sdiSourcesJsonList[sdiSourcesIndex].AsString(m_sdiSources[sdiSourcesIndex]);
   }
   payload.WithArray("sdiSources", std::move(sdiSourcesJsonList));

  }

  return payload.View().WriteReadable();
}




