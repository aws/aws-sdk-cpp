/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/TelemetrySourceConfigurationInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

TelemetrySourceConfigurationInput::TelemetrySourceConfigurationInput(JsonView jsonValue) { *this = jsonValue; }

TelemetrySourceConfigurationInput& TelemetrySourceConfigurationInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Azure")) {
    m_azure = jsonValue.GetObject("Azure");
    m_azureHasBeenSet = true;
  }
  return *this;
}

JsonValue TelemetrySourceConfigurationInput::Jsonize() const {
  JsonValue payload;

  if (m_azureHasBeenSet) {
    payload.WithObject("Azure", m_azure.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
