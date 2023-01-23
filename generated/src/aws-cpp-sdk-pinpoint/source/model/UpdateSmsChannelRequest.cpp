/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/UpdateSmsChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSmsChannelRequest::UpdateSmsChannelRequest() : 
    m_applicationIdHasBeenSet(false),
    m_sMSChannelRequestHasBeenSet(false)
{
}

Aws::String UpdateSmsChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sMSChannelRequestHasBeenSet)
  {
   payload = m_sMSChannelRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}




