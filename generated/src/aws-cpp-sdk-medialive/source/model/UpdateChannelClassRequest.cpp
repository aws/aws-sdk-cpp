/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/UpdateChannelClassRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateChannelClassRequest::UpdateChannelClassRequest() : 
    m_channelClass(ChannelClass::NOT_SET),
    m_channelClassHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_destinationsHasBeenSet(false)
{
}

Aws::String UpdateChannelClassRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_channelClassHasBeenSet)
  {
   payload.WithString("channelClass", ChannelClassMapper::GetNameForChannelClass(m_channelClass));
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

  return payload.View().WriteReadable();
}




