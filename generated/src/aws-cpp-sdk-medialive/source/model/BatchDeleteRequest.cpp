/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/BatchDeleteRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDeleteRequest::BatchDeleteRequest() : 
    m_channelIdsHasBeenSet(false),
    m_inputIdsHasBeenSet(false),
    m_inputSecurityGroupIdsHasBeenSet(false),
    m_multiplexIdsHasBeenSet(false)
{
}

Aws::String BatchDeleteRequest::SerializePayload() const
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

  if(m_inputIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputIdsJsonList(m_inputIds.size());
   for(unsigned inputIdsIndex = 0; inputIdsIndex < inputIdsJsonList.GetLength(); ++inputIdsIndex)
   {
     inputIdsJsonList[inputIdsIndex].AsString(m_inputIds[inputIdsIndex]);
   }
   payload.WithArray("inputIds", std::move(inputIdsJsonList));

  }

  if(m_inputSecurityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputSecurityGroupIdsJsonList(m_inputSecurityGroupIds.size());
   for(unsigned inputSecurityGroupIdsIndex = 0; inputSecurityGroupIdsIndex < inputSecurityGroupIdsJsonList.GetLength(); ++inputSecurityGroupIdsIndex)
   {
     inputSecurityGroupIdsJsonList[inputSecurityGroupIdsIndex].AsString(m_inputSecurityGroupIds[inputSecurityGroupIdsIndex]);
   }
   payload.WithArray("inputSecurityGroupIds", std::move(inputSecurityGroupIdsJsonList));

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




