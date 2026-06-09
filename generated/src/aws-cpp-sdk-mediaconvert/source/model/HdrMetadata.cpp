/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconvert/model/HdrMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {

HdrMetadata::HdrMetadata(JsonView jsonValue) { *this = jsonValue; }

HdrMetadata& HdrMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("contentLightLevel")) {
    m_contentLightLevel = jsonValue.GetObject("contentLightLevel");
    m_contentLightLevelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("masteringDisplayColorVolume")) {
    m_masteringDisplayColorVolume = jsonValue.GetObject("masteringDisplayColorVolume");
    m_masteringDisplayColorVolumeHasBeenSet = true;
  }
  return *this;
}

JsonValue HdrMetadata::Jsonize() const {
  JsonValue payload;

  if (m_contentLightLevelHasBeenSet) {
    payload.WithObject("contentLightLevel", m_contentLightLevel.Jsonize());
  }

  if (m_masteringDisplayColorVolumeHasBeenSet) {
    payload.WithObject("masteringDisplayColorVolume", m_masteringDisplayColorVolume.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
