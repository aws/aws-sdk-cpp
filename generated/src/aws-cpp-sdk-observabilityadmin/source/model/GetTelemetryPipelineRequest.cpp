/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/GetTelemetryPipelineRequest.h>

#include <utility>

using namespace Aws::ObservabilityAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetTelemetryPipelineRequest::SerializePayload() const {
  JsonValue payload;

  if (m_pipelineIdentifierHasBeenSet) {
    payload.WithString("PipelineIdentifier", m_pipelineIdentifier);
  }

  return payload.View().WriteReadable();
}
