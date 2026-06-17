/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/BatchGetSecurityRequirementsRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchGetSecurityRequirementsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_packIdHasBeenSet) {
    payload.WithString("packId", m_packId);
  }

  if (m_securityRequirementNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> securityRequirementNamesJsonList(m_securityRequirementNames.size());
    for (unsigned securityRequirementNamesIndex = 0; securityRequirementNamesIndex < securityRequirementNamesJsonList.GetLength();
         ++securityRequirementNamesIndex) {
      securityRequirementNamesJsonList[securityRequirementNamesIndex].AsString(m_securityRequirementNames[securityRequirementNamesIndex]);
    }
    payload.WithArray("securityRequirementNames", std::move(securityRequirementNamesJsonList));
  }

  return payload.View().WriteReadable();
}
