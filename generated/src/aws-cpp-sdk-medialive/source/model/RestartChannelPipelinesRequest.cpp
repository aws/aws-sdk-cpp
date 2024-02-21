/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/RestartChannelPipelinesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RestartChannelPipelinesRequest::RestartChannelPipelinesRequest() : 
    m_channelIdHasBeenSet(false),
    m_pipelineIdsHasBeenSet(false)
{
}

Aws::String RestartChannelPipelinesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pipelineIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pipelineIdsJsonList(m_pipelineIds.size());
   for(unsigned pipelineIdsIndex = 0; pipelineIdsIndex < pipelineIdsJsonList.GetLength(); ++pipelineIdsIndex)
   {
     pipelineIdsJsonList[pipelineIdsIndex].AsString(ChannelPipelineIdToRestartMapper::GetNameForChannelPipelineIdToRestart(m_pipelineIds[pipelineIdsIndex]));
   }
   payload.WithArray("pipelineIds", std::move(pipelineIdsJsonList));

  }

  return payload.View().WriteReadable();
}




