/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/UpdateBridgeOutputRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateBridgeOutputRequest::UpdateBridgeOutputRequest() : 
    m_bridgeArnHasBeenSet(false),
    m_networkOutputHasBeenSet(false),
    m_outputNameHasBeenSet(false)
{
}

Aws::String UpdateBridgeOutputRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_networkOutputHasBeenSet)
  {
   payload.WithObject("networkOutput", m_networkOutput.Jsonize());

  }

  return payload.View().WriteReadable();
}




