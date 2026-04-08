/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/MediaConnectRouterGroupSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

MediaConnectRouterGroupSettings::MediaConnectRouterGroupSettings(JsonView jsonValue) { *this = jsonValue; }

MediaConnectRouterGroupSettings& MediaConnectRouterGroupSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("availabilityZones")) {
    Aws::Utils::Array<JsonView> availabilityZonesJsonList = jsonValue.GetArray("availabilityZones");
    for (unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex) {
      m_availabilityZones.push_back(availabilityZonesJsonList[availabilityZonesIndex].AsString());
    }
    m_availabilityZonesHasBeenSet = true;
  }
  return *this;
}

JsonValue MediaConnectRouterGroupSettings::Jsonize() const {
  JsonValue payload;

  if (m_availabilityZonesHasBeenSet) {
    Aws::Utils::Array<JsonValue> availabilityZonesJsonList(m_availabilityZones.size());
    for (unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex) {
      availabilityZonesJsonList[availabilityZonesIndex].AsString(m_availabilityZones[availabilityZonesIndex]);
    }
    payload.WithArray("availabilityZones", std::move(availabilityZonesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
