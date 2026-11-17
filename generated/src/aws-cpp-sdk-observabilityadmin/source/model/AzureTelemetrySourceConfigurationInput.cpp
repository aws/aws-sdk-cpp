/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/AzureTelemetrySourceConfigurationInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

AzureTelemetrySourceConfigurationInput::AzureTelemetrySourceConfigurationInput(JsonView jsonValue) { *this = jsonValue; }

AzureTelemetrySourceConfigurationInput& AzureTelemetrySourceConfigurationInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AwsConfigConnectorArn")) {
    m_awsConfigConnectorArn = jsonValue.GetString("AwsConfigConnectorArn");
    m_awsConfigConnectorArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureTelemetrySourceConfigurationInput::Jsonize() const {
  JsonValue payload;

  if (m_awsConfigConnectorArnHasBeenSet) {
    payload.WithString("AwsConfigConnectorArn", m_awsConfigConnectorArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
