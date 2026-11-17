/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/AzureTelemetrySourceConfigurationOutput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

AzureTelemetrySourceConfigurationOutput::AzureTelemetrySourceConfigurationOutput(JsonView jsonValue) { *this = jsonValue; }

AzureTelemetrySourceConfigurationOutput& AzureTelemetrySourceConfigurationOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AwsConfigConnectorArn")) {
    m_awsConfigConnectorArn = jsonValue.GetString("AwsConfigConnectorArn");
    m_awsConfigConnectorArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ServiceLinkedRecorderArn")) {
    m_serviceLinkedRecorderArn = jsonValue.GetString("ServiceLinkedRecorderArn");
    m_serviceLinkedRecorderArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureTelemetrySourceConfigurationOutput::Jsonize() const {
  JsonValue payload;

  if (m_awsConfigConnectorArnHasBeenSet) {
    payload.WithString("AwsConfigConnectorArn", m_awsConfigConnectorArn);
  }

  if (m_serviceLinkedRecorderArnHasBeenSet) {
    payload.WithString("ServiceLinkedRecorderArn", m_serviceLinkedRecorderArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
