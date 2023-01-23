/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/PutDedicatedIpInPoolRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointEmail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutDedicatedIpInPoolRequest::PutDedicatedIpInPoolRequest() : 
    m_ipHasBeenSet(false),
    m_destinationPoolNameHasBeenSet(false)
{
}

Aws::String PutDedicatedIpInPoolRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_destinationPoolNameHasBeenSet)
  {
   payload.WithString("DestinationPoolName", m_destinationPoolName);

  }

  return payload.View().WriteReadable();
}




