/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/UpdateBridgeStateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateBridgeStateRequest::UpdateBridgeStateRequest() : 
    m_bridgeArnHasBeenSet(false),
    m_desiredState(DesiredState::NOT_SET),
    m_desiredStateHasBeenSet(false)
{
}

Aws::String UpdateBridgeStateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_desiredStateHasBeenSet)
  {
   payload.WithString("desiredState", DesiredStateMapper::GetNameForDesiredState(m_desiredState));
  }

  return payload.View().WriteReadable();
}




