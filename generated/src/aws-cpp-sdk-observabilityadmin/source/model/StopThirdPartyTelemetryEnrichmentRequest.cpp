/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/StopThirdPartyTelemetryEnrichmentRequest.h>

#include <utility>

using namespace Aws::ObservabilityAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StopThirdPartyTelemetryEnrichmentRequest::SerializePayload() const {
  JsonValue payload;

  if (m_telemetryEnrichmentIdentifierHasBeenSet) {
    payload.WithString("TelemetryEnrichmentIdentifier", m_telemetryEnrichmentIdentifier);
  }

  return payload.View().WriteReadable();
}
