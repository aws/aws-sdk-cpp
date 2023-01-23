/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/UpdateAdmChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAdmChannelRequest::UpdateAdmChannelRequest() : 
    m_aDMChannelRequestHasBeenSet(false),
    m_applicationIdHasBeenSet(false)
{
}

Aws::String UpdateAdmChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_aDMChannelRequestHasBeenSet)
  {
   payload = m_aDMChannelRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}




