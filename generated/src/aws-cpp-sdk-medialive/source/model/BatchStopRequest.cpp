/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/BatchStopRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchStopRequest::BatchStopRequest() : 
    m_channelIdsHasBeenSet(false),
    m_multiplexIdsHasBeenSet(false)
{
}

Aws::String BatchStopRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_channelIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> channelIdsJsonList(m_channelIds.size());
   for(unsigned channelIdsIndex = 0; channelIdsIndex < channelIdsJsonList.GetLength(); ++channelIdsIndex)
   {
     channelIdsJsonList[channelIdsIndex].AsString(m_channelIds[channelIdsIndex]);
   }
   payload.WithArray("channelIds", std::move(channelIdsJsonList));

  }

  if(m_multiplexIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> multiplexIdsJsonList(m_multiplexIds.size());
   for(unsigned multiplexIdsIndex = 0; multiplexIdsIndex < multiplexIdsJsonList.GetLength(); ++multiplexIdsIndex)
   {
     multiplexIdsJsonList[multiplexIdsIndex].AsString(m_multiplexIds[multiplexIdsIndex]);
   }
   payload.WithArray("multiplexIds", std::move(multiplexIdsJsonList));

  }

  return payload.View().WriteReadable();
}




