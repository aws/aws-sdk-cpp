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

CreateInputRequest::CreateInputRequest() : 
    m_destinationsHasBeenSet(false),
    m_inputDevicesHasBeenSet(false),
    m_inputSecurityGroupsHasBeenSet(false),
    m_mediaConnectFlowsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_requestId(Aws::Utils::UUID::RandomUUID()),
    m_requestIdHasBeenSet(true),
    m_roleArnHasBeenSet(false),
    m_sourcesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_type(InputType::NOT_SET),
    m_typeHasBeenSet(false),
    m_vpcHasBeenSet(false)
{
}

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

  return payload.View().WriteReadable();
}




