/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/UpdateGatewayInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateGatewayInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_bridgePlacementHasBeenSet)
  {
   payload.WithString("bridgePlacement", BridgePlacementMapper::GetNameForBridgePlacement(m_bridgePlacement));
  }

  return payload.View().WriteReadable();
}




