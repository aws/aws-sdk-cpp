/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/UpdateApnsVoipChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateApnsVoipChannelRequest::UpdateApnsVoipChannelRequest() : 
    m_aPNSVoipChannelRequestHasBeenSet(false),
    m_applicationIdHasBeenSet(false)
{
}

Aws::String UpdateApnsVoipChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_aPNSVoipChannelRequestHasBeenSet)
  {
   payload = m_aPNSVoipChannelRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}




