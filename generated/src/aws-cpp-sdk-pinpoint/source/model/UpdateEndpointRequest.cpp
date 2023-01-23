/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/UpdateEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEndpointRequest::UpdateEndpointRequest() : 
    m_applicationIdHasBeenSet(false),
    m_endpointIdHasBeenSet(false),
    m_endpointRequestHasBeenSet(false)
{
}

Aws::String UpdateEndpointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_endpointRequestHasBeenSet)
  {
   payload = m_endpointRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}




