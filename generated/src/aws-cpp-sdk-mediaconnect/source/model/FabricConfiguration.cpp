/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/FabricConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

FabricConfiguration::FabricConfiguration(JsonView jsonValue) { *this = jsonValue; }

FabricConfiguration& FabricConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("recoveryLatencyMode")) {
    m_recoveryLatencyMode = FabricLatencyModeMapper::GetFabricLatencyModeForName(jsonValue.GetString("recoveryLatencyMode"));
    m_recoveryLatencyModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("switchingMode")) {
    m_switchingMode = FabricSwitchingModeMapper::GetFabricSwitchingModeForName(jsonValue.GetString("switchingMode"));
    m_switchingModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("switchingConfiguration")) {
    m_switchingConfiguration = jsonValue.GetObject("switchingConfiguration");
    m_switchingConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue FabricConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_recoveryLatencyModeHasBeenSet) {
    payload.WithString("recoveryLatencyMode", FabricLatencyModeMapper::GetNameForFabricLatencyMode(m_recoveryLatencyMode));
  }

  if (m_switchingModeHasBeenSet) {
    payload.WithString("switchingMode", FabricSwitchingModeMapper::GetNameForFabricSwitchingMode(m_switchingMode));
  }

  if (m_switchingConfigurationHasBeenSet) {
    payload.WithObject("switchingConfiguration", m_switchingConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
