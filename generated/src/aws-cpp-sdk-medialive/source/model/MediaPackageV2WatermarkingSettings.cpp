/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/MediaPackageV2WatermarkingSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

MediaPackageV2WatermarkingSettings::MediaPackageV2WatermarkingSettings(JsonView jsonValue) { *this = jsonValue; }

MediaPackageV2WatermarkingSettings& MediaPackageV2WatermarkingSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("mediaPackageV2AbWatermarkerIrdetoSettings")) {
    m_mediaPackageV2AbWatermarkerIrdetoSettings = jsonValue.GetObject("mediaPackageV2AbWatermarkerIrdetoSettings");
    m_mediaPackageV2AbWatermarkerIrdetoSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue MediaPackageV2WatermarkingSettings::Jsonize() const {
  JsonValue payload;

  if (m_mediaPackageV2AbWatermarkerIrdetoSettingsHasBeenSet) {
    payload.WithObject("mediaPackageV2AbWatermarkerIrdetoSettings", m_mediaPackageV2AbWatermarkerIrdetoSettings.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
