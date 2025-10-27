/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-email/model/PutDedicatedIpInPoolRequest.h>

#include <utility>

using namespace Aws::PinpointEmail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutDedicatedIpInPoolRequest::SerializePayload() const {
  JsonValue payload;

  if (m_destinationPoolNameHasBeenSet) {
    payload.WithString("DestinationPoolName", m_destinationPoolName);
  }

  return payload.View().WriteReadable();
}
