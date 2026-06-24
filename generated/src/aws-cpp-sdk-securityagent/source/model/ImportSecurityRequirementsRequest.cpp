/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/ImportSecurityRequirementsRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ImportSecurityRequirementsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_packIdHasBeenSet) {
    payload.WithString("packId", m_packId);
  }

  if (m_inputHasBeenSet) {
    payload.WithObject("input", m_input.Jsonize());
  }

  return payload.View().WriteReadable();
}
