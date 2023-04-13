/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/UpdateBridgeSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateBridgeSourceRequest::UpdateBridgeSourceRequest() : 
    m_bridgeArnHasBeenSet(false),
    m_flowSourceHasBeenSet(false),
    m_networkSourceHasBeenSet(false),
    m_sourceNameHasBeenSet(false)
{
}

Aws::String UpdateBridgeSourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_flowSourceHasBeenSet)
  {
   payload.WithObject("flowSource", m_flowSource.Jsonize());

  }

  if(m_networkSourceHasBeenSet)
  {
   payload.WithObject("networkSource", m_networkSource.Jsonize());

  }

  return payload.View().WriteReadable();
}




