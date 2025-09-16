/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/model/RevokePipelineEndpointConnectionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OSIS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RevokePipelineEndpointConnectionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pipelineArnHasBeenSet)
  {
   payload.WithString("PipelineArn", m_pipelineArn);

  }

  if(m_endpointIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> endpointIdsJsonList(m_endpointIds.size());
   for(unsigned endpointIdsIndex = 0; endpointIdsIndex < endpointIdsJsonList.GetLength(); ++endpointIdsIndex)
   {
     endpointIdsJsonList[endpointIdsIndex].AsString(m_endpointIds[endpointIdsIndex]);
   }
   payload.WithArray("EndpointIds", std::move(endpointIdsJsonList));

  }

  return payload.View().WriteReadable();
}




