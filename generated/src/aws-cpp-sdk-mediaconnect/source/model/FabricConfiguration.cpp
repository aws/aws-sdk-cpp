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
  return *this;
}

JsonValue FabricConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_recoveryLatencyModeHasBeenSet) {
    payload.WithString("recoveryLatencyMode", FabricLatencyModeMapper::GetNameForFabricLatencyMode(m_recoveryLatencyMode));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
