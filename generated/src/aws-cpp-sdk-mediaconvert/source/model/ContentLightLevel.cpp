/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconvert/model/ContentLightLevel.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {

ContentLightLevel::ContentLightLevel(JsonView jsonValue) { *this = jsonValue; }

ContentLightLevel& ContentLightLevel::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("maxContentLightLevel")) {
    m_maxContentLightLevel = jsonValue.GetInteger("maxContentLightLevel");
    m_maxContentLightLevelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxFrameAverageLightLevel")) {
    m_maxFrameAverageLightLevel = jsonValue.GetInteger("maxFrameAverageLightLevel");
    m_maxFrameAverageLightLevelHasBeenSet = true;
  }
  return *this;
}

JsonValue ContentLightLevel::Jsonize() const {
  JsonValue payload;

  if (m_maxContentLightLevelHasBeenSet) {
    payload.WithInteger("maxContentLightLevel", m_maxContentLightLevel);
  }

  if (m_maxFrameAverageLightLevelHasBeenSet) {
    payload.WithInteger("maxFrameAverageLightLevel", m_maxFrameAverageLightLevel);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
