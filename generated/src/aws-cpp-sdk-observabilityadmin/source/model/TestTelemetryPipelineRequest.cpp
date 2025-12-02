/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/TestTelemetryPipelineRequest.h>

#include <utility>

using namespace Aws::ObservabilityAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String TestTelemetryPipelineRequest::SerializePayload() const {
  JsonValue payload;

  if (m_recordsHasBeenSet) {
    Aws::Utils::Array<JsonValue> recordsJsonList(m_records.size());
    for (unsigned recordsIndex = 0; recordsIndex < recordsJsonList.GetLength(); ++recordsIndex) {
      recordsJsonList[recordsIndex].AsObject(m_records[recordsIndex].Jsonize());
    }
    payload.WithArray("Records", std::move(recordsJsonList));
  }

  if (m_configurationHasBeenSet) {
    payload.WithObject("Configuration", m_configuration.Jsonize());
  }

  return payload.View().WriteReadable();
}
