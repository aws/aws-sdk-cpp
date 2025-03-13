/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/UpdateMultiplexRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateMultiplexRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_multiplexSettingsHasBeenSet)
  {
   payload.WithObject("multiplexSettings", m_multiplexSettings.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_packetIdentifiersMappingHasBeenSet)
  {
   JsonValue packetIdentifiersMappingJsonMap;
   for(auto& packetIdentifiersMappingItem : m_packetIdentifiersMapping)
   {
     packetIdentifiersMappingJsonMap.WithObject(packetIdentifiersMappingItem.first, packetIdentifiersMappingItem.second.Jsonize());
   }
   payload.WithObject("packetIdentifiersMapping", std::move(packetIdentifiersMappingJsonMap));

  }

  return payload.View().WriteReadable();
}




