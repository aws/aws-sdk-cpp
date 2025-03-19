/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/UpdateNodeStateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateNodeStateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", UpdateNodeStateMapper::GetNameForUpdateNodeState(m_state));
  }

  return payload.View().WriteReadable();
}




