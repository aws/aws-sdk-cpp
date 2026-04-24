/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/StartTelemetryEvaluationForOrganizationRequest.h>

#include <utility>

using namespace Aws::ObservabilityAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartTelemetryEvaluationForOrganizationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_regionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
    }
    payload.WithArray("Regions", std::move(regionsJsonList));
  }

  if (m_allRegionsHasBeenSet) {
    payload.WithBool("AllRegions", m_allRegions);
  }

  return payload.View().WriteReadable();
}
