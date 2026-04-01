/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/DeleteApplicationRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteApplicationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_applicationIdHasBeenSet) {
    payload.WithString("applicationId", m_applicationId);
  }

  return payload.View().WriteReadable();
}
