/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Input.h>
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

Input::Input(JsonView jsonValue)
{
  *this = jsonValue;
}

Input& Input::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("attachedChannels"))
  {
    Aws::Utils::Array<JsonView> attachedChannelsJsonList = jsonValue.GetArray("attachedChannels");
    for(unsigned attachedChannelsIndex = 0; attachedChannelsIndex < attachedChannelsJsonList.GetLength(); ++attachedChannelsIndex)
    {
      m_attachedChannels.push_back(attachedChannelsJsonList[attachedChannelsIndex].AsString());
    }
    m_attachedChannelsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("destinations"))
  {
    Aws::Utils::Array<JsonView> destinationsJsonList = jsonValue.GetArray("destinations");
    for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
    {
      m_destinations.push_back(destinationsJsonList[destinationsIndex].AsObject());
    }
    m_destinationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputClass"))
  {
    m_inputClass = InputClassMapper::GetInputClassForName(jsonValue.GetString("inputClass"));
    m_inputClassHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputDevices"))
  {
    Aws::Utils::Array<JsonView> inputDevicesJsonList = jsonValue.GetArray("inputDevices");
    for(unsigned inputDevicesIndex = 0; inputDevicesIndex < inputDevicesJsonList.GetLength(); ++inputDevicesIndex)
    {
      m_inputDevices.push_back(inputDevicesJsonList[inputDevicesIndex].AsObject());
    }
    m_inputDevicesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputPartnerIds"))
  {
    Aws::Utils::Array<JsonView> inputPartnerIdsJsonList = jsonValue.GetArray("inputPartnerIds");
    for(unsigned inputPartnerIdsIndex = 0; inputPartnerIdsIndex < inputPartnerIdsJsonList.GetLength(); ++inputPartnerIdsIndex)
    {
      m_inputPartnerIds.push_back(inputPartnerIdsJsonList[inputPartnerIdsIndex].AsString());
    }
    m_inputPartnerIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputSourceType"))
  {
    m_inputSourceType = InputSourceTypeMapper::GetInputSourceTypeForName(jsonValue.GetString("inputSourceType"));
    m_inputSourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mediaConnectFlows"))
  {
    Aws::Utils::Array<JsonView> mediaConnectFlowsJsonList = jsonValue.GetArray("mediaConnectFlows");
    for(unsigned mediaConnectFlowsIndex = 0; mediaConnectFlowsIndex < mediaConnectFlowsJsonList.GetLength(); ++mediaConnectFlowsIndex)
    {
      m_mediaConnectFlows.push_back(mediaConnectFlowsJsonList[mediaConnectFlowsIndex].AsObject());
    }
    m_mediaConnectFlowsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("securityGroups"))
  {
    Aws::Utils::Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("securityGroups");
    for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
    {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsString());
    }
    m_securityGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sources"))
  {
    Aws::Utils::Array<JsonView> sourcesJsonList = jsonValue.GetArray("sources");
    for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
    {
      m_sources.push_back(sourcesJsonList[sourcesIndex].AsObject());
    }
    m_sourcesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("state"))
  {
    m_state = InputStateMapper::GetInputStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = InputTypeMapper::GetInputTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("srtSettings"))
  {
    m_srtSettings = jsonValue.GetObject("srtSettings");
    m_srtSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputNetworkLocation"))
  {
    m_inputNetworkLocation = InputNetworkLocationMapper::GetInputNetworkLocationForName(jsonValue.GetString("inputNetworkLocation"));
    m_inputNetworkLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("multicastSettings"))
  {
    m_multicastSettings = jsonValue.GetObject("multicastSettings");
    m_multicastSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("smpte2110ReceiverGroupSettings"))
  {
    m_smpte2110ReceiverGroupSettings = jsonValue.GetObject("smpte2110ReceiverGroupSettings");
    m_smpte2110ReceiverGroupSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sdiSources"))
  {
    Aws::Utils::Array<JsonView> sdiSourcesJsonList = jsonValue.GetArray("sdiSources");
    for(unsigned sdiSourcesIndex = 0; sdiSourcesIndex < sdiSourcesJsonList.GetLength(); ++sdiSourcesIndex)
    {
      m_sdiSources.push_back(sdiSourcesJsonList[sdiSourcesIndex].AsString());
    }
    m_sdiSourcesHasBeenSet = true;
  }
  return *this;
}

JsonValue Input::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_attachedChannelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attachedChannelsJsonList(m_attachedChannels.size());
   for(unsigned attachedChannelsIndex = 0; attachedChannelsIndex < attachedChannelsJsonList.GetLength(); ++attachedChannelsIndex)
   {
     attachedChannelsJsonList[attachedChannelsIndex].AsString(m_attachedChannels[attachedChannelsIndex]);
   }
   payload.WithArray("attachedChannels", std::move(attachedChannelsJsonList));

  }

  if(m_destinationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationsJsonList(m_destinations.size());
   for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
   {
     destinationsJsonList[destinationsIndex].AsObject(m_destinations[destinationsIndex].Jsonize());
   }
   payload.WithArray("destinations", std::move(destinationsJsonList));

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_inputClassHasBeenSet)
  {
   payload.WithString("inputClass", InputClassMapper::GetNameForInputClass(m_inputClass));
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

  if(m_inputPartnerIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputPartnerIdsJsonList(m_inputPartnerIds.size());
   for(unsigned inputPartnerIdsIndex = 0; inputPartnerIdsIndex < inputPartnerIdsJsonList.GetLength(); ++inputPartnerIdsIndex)
   {
     inputPartnerIdsJsonList[inputPartnerIdsIndex].AsString(m_inputPartnerIds[inputPartnerIdsIndex]);
   }
   payload.WithArray("inputPartnerIds", std::move(inputPartnerIdsJsonList));

  }

  if(m_inputSourceTypeHasBeenSet)
  {
   payload.WithString("inputSourceType", InputSourceTypeMapper::GetNameForInputSourceType(m_inputSourceType));
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

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_securityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
   for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
   {
     securityGroupsJsonList[securityGroupsIndex].AsString(m_securityGroups[securityGroupsIndex]);
   }
   payload.WithArray("securityGroups", std::move(securityGroupsJsonList));

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

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", InputStateMapper::GetNameForInputState(m_state));
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

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
