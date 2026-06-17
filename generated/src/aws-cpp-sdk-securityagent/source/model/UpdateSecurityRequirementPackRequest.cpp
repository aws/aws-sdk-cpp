/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/UpdateSecurityRequirementPackRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateSecurityRequirementPackRequest::SerializePayload() const {
  JsonValue payload;

  if (m_packIdHasBeenSet) {
    payload.WithString("packId", m_packId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", SecurityRequirementPackStatusMapper::GetNameForSecurityRequirementPackStatus(m_status));
  }

  return payload.View().WriteReadable();
}
