/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/PutConnectorTelemetryManifestRequest.h>

#include <utility>

using namespace Aws::ObservabilityAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutConnectorTelemetryManifestRequest::SerializePayload() const {
  JsonValue payload;

  if (m_connectorIdentifierHasBeenSet) {
    payload.WithString("ConnectorIdentifier", m_connectorIdentifier);
  }

  if (m_manifestHasBeenSet) {
    payload.WithObject("Manifest", m_manifest.Jsonize());
  }

  if (m_expectedVersionHasBeenSet) {
    payload.WithInt64("ExpectedVersion", m_expectedVersion);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
