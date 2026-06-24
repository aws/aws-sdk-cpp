/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/DeletePrivateConnectionRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeletePrivateConnectionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_privateConnectionNameHasBeenSet) {
    payload.WithString("privateConnectionName", m_privateConnectionName);
  }

  return payload.View().WriteReadable();
}
