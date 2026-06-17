/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/BatchCreateSecurityRequirementsRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchCreateSecurityRequirementsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_packIdHasBeenSet) {
    payload.WithString("packId", m_packId);
  }

  if (m_securityRequirementsHasBeenSet) {
    Aws::Utils::Array<JsonValue> securityRequirementsJsonList(m_securityRequirements.size());
    for (unsigned securityRequirementsIndex = 0; securityRequirementsIndex < securityRequirementsJsonList.GetLength();
         ++securityRequirementsIndex) {
      securityRequirementsJsonList[securityRequirementsIndex].AsObject(m_securityRequirements[securityRequirementsIndex].Jsonize());
    }
    payload.WithArray("securityRequirements", std::move(securityRequirementsJsonList));
  }

  return payload.View().WriteReadable();
}
