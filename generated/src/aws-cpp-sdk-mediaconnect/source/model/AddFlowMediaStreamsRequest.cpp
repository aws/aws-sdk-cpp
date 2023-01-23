/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/AddFlowMediaStreamsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AddFlowMediaStreamsRequest::AddFlowMediaStreamsRequest() : 
    m_flowArnHasBeenSet(false),
    m_mediaStreamsHasBeenSet(false)
{
}

Aws::String AddFlowMediaStreamsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_mediaStreamsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mediaStreamsJsonList(m_mediaStreams.size());
   for(unsigned mediaStreamsIndex = 0; mediaStreamsIndex < mediaStreamsJsonList.GetLength(); ++mediaStreamsIndex)
   {
     mediaStreamsJsonList[mediaStreamsIndex].AsObject(m_mediaStreams[mediaStreamsIndex].Jsonize());
   }
   payload.WithArray("mediaStreams", std::move(mediaStreamsJsonList));

  }

  return payload.View().WriteReadable();
}




