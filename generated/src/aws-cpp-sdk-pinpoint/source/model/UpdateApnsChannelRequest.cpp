/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/UpdateApnsChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateApnsChannelRequest::UpdateApnsChannelRequest() : 
    m_aPNSChannelRequestHasBeenSet(false),
    m_applicationIdHasBeenSet(false)
{
}

Aws::String UpdateApnsChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_aPNSChannelRequestHasBeenSet)
  {
   payload = m_aPNSChannelRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}




