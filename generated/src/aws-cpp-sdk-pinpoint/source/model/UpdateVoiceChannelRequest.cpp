/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/UpdateVoiceChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateVoiceChannelRequest::UpdateVoiceChannelRequest() : 
    m_applicationIdHasBeenSet(false),
    m_voiceChannelRequestHasBeenSet(false)
{
}

Aws::String UpdateVoiceChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_voiceChannelRequestHasBeenSet)
  {
   payload = m_voiceChannelRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}




