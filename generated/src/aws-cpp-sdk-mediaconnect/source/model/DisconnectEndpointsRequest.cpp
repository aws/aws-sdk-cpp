/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/DisconnectEndpointsRequest.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DisconnectEndpointsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_sourceEndpointArnHasBeenSet) {
    payload.WithString("sourceEndpointArn", m_sourceEndpointArn);
  }

  return payload.View().WriteReadable();
}
