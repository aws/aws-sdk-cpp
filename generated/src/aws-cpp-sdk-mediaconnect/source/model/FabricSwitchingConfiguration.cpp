/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/FabricSwitchingConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

FabricSwitchingConfiguration::FabricSwitchingConfiguration(JsonView jsonValue) { *this = jsonValue; }

FabricSwitchingConfiguration& FabricSwitchingConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("immediate")) {
    m_immediate = jsonValue.GetObject("immediate");
    m_immediateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("keyFrame")) {
    m_keyFrame = jsonValue.GetObject("keyFrame");
    m_keyFrameHasBeenSet = true;
  }
  return *this;
}

JsonValue FabricSwitchingConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_immediateHasBeenSet) {
    payload.WithObject("immediate", m_immediate.Jsonize());
  }

  if (m_keyFrameHasBeenSet) {
    payload.WithObject("keyFrame", m_keyFrame.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
