/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rtbfabric/model/UpdateRequesterGatewayRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RTBFabric::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateRequesterGatewayRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload.View().WriteReadable();
}




