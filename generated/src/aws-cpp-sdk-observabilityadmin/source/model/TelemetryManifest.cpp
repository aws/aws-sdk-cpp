/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/TelemetryManifest.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

TelemetryManifest::TelemetryManifest(JsonView jsonValue) { *this = jsonValue; }

TelemetryManifest& TelemetryManifest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Source")) {
    m_source = jsonValue.GetObject("Source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Infrastructure")) {
    m_infrastructure = jsonValue.GetObject("Infrastructure");
    m_infrastructureHasBeenSet = true;
  }
  return *this;
}

JsonValue TelemetryManifest::Jsonize() const {
  JsonValue payload;

  if (m_sourceHasBeenSet) {
    payload.WithObject("Source", m_source.Jsonize());
  }

  if (m_infrastructureHasBeenSet) {
    payload.WithObject("Infrastructure", m_infrastructure.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
