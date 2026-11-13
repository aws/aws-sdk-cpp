/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/KeyFrameFabricSwitchingConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

KeyFrameFabricSwitchingConfiguration::KeyFrameFabricSwitchingConfiguration(JsonView jsonValue) { *this = jsonValue; }

KeyFrameFabricSwitchingConfiguration& KeyFrameFabricSwitchingConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("keyFrameWaitMilliseconds")) {
    m_keyFrameWaitMilliseconds = jsonValue.GetInt64("keyFrameWaitMilliseconds");
    m_keyFrameWaitMillisecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue KeyFrameFabricSwitchingConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_keyFrameWaitMillisecondsHasBeenSet) {
    payload.WithInt64("keyFrameWaitMilliseconds", m_keyFrameWaitMilliseconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
