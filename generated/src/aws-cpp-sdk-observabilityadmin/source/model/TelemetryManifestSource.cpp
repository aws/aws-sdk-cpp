/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/TelemetryManifestSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

TelemetryManifestSource::TelemetryManifestSource(JsonView jsonValue) { *this = jsonValue; }

TelemetryManifestSource& TelemetryManifestSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Azure")) {
    Aws::Utils::Array<JsonView> azureJsonList = jsonValue.GetArray("Azure");
    for (unsigned azureIndex = 0; azureIndex < azureJsonList.GetLength(); ++azureIndex) {
      m_azure.push_back(azureJsonList[azureIndex].AsObject());
    }
    m_azureHasBeenSet = true;
  }
  return *this;
}

JsonValue TelemetryManifestSource::Jsonize() const {
  JsonValue payload;

  if (m_azureHasBeenSet) {
    Aws::Utils::Array<JsonValue> azureJsonList(m_azure.size());
    for (unsigned azureIndex = 0; azureIndex < azureJsonList.GetLength(); ++azureIndex) {
      azureJsonList[azureIndex].AsObject(m_azure[azureIndex].Jsonize());
    }
    payload.WithArray("Azure", std::move(azureJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
