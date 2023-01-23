/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/UpdateApnsSandboxChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateApnsSandboxChannelRequest::UpdateApnsSandboxChannelRequest() : 
    m_aPNSSandboxChannelRequestHasBeenSet(false),
    m_applicationIdHasBeenSet(false)
{
}

Aws::String UpdateApnsSandboxChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_aPNSSandboxChannelRequestHasBeenSet)
  {
   payload = m_aPNSSandboxChannelRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}




