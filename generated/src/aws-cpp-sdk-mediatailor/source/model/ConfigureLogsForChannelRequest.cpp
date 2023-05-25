/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/ConfigureLogsForChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ConfigureLogsForChannelRequest::ConfigureLogsForChannelRequest() : 
    m_channelNameHasBeenSet(false),
    m_logTypesHasBeenSet(false)
{
}

Aws::String ConfigureLogsForChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_channelNameHasBeenSet)
  {
   payload.WithString("ChannelName", m_channelName);

  }

  if(m_logTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logTypesJsonList(m_logTypes.size());
   for(unsigned logTypesIndex = 0; logTypesIndex < logTypesJsonList.GetLength(); ++logTypesIndex)
   {
     logTypesJsonList[logTypesIndex].AsString(LogTypeMapper::GetNameForLogType(m_logTypes[logTypesIndex]));
   }
   payload.WithArray("LogTypes", std::move(logTypesJsonList));

  }

  return payload.View().WriteReadable();
}




