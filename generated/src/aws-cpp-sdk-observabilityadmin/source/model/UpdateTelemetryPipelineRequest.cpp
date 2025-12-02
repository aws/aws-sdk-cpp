/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/UpdateTelemetryPipelineRequest.h>

#include <utility>

using namespace Aws::ObservabilityAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateTelemetryPipelineRequest::SerializePayload() const {
  JsonValue payload;

  if (m_pipelineIdentifierHasBeenSet) {
    payload.WithString("PipelineIdentifier", m_pipelineIdentifier);
  }

  if (m_configurationHasBeenSet) {
    payload.WithObject("Configuration", m_configuration.Jsonize());
  }

  return payload.View().WriteReadable();
}
