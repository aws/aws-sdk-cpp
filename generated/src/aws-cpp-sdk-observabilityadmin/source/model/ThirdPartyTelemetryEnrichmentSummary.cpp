/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/ThirdPartyTelemetryEnrichmentSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

ThirdPartyTelemetryEnrichmentSummary::ThirdPartyTelemetryEnrichmentSummary(JsonView jsonValue) { *this = jsonValue; }

ThirdPartyTelemetryEnrichmentSummary& ThirdPartyTelemetryEnrichmentSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TelemetrySource")) {
    m_telemetrySource = ThirdPartyTelemetrySourceMapper::GetThirdPartyTelemetrySourceForName(jsonValue.GetString("TelemetrySource"));
    m_telemetrySourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = ThirdPartyTelemetryEnrichmentStatusMapper::GetThirdPartyTelemetryEnrichmentStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue ThirdPartyTelemetryEnrichmentSummary::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_telemetrySourceHasBeenSet) {
    payload.WithString("TelemetrySource", ThirdPartyTelemetrySourceMapper::GetNameForThirdPartyTelemetrySource(m_telemetrySource));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", ThirdPartyTelemetryEnrichmentStatusMapper::GetNameForThirdPartyTelemetryEnrichmentStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
