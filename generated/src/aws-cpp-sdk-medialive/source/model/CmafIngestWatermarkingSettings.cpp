/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/CmafIngestWatermarkingSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

CmafIngestWatermarkingSettings::CmafIngestWatermarkingSettings(JsonView jsonValue) { *this = jsonValue; }

CmafIngestWatermarkingSettings& CmafIngestWatermarkingSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("cmafIngestAbWatermarkerIrdetoSettings")) {
    m_cmafIngestAbWatermarkerIrdetoSettings = jsonValue.GetObject("cmafIngestAbWatermarkerIrdetoSettings");
    m_cmafIngestAbWatermarkerIrdetoSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue CmafIngestWatermarkingSettings::Jsonize() const {
  JsonValue payload;

  if (m_cmafIngestAbWatermarkerIrdetoSettingsHasBeenSet) {
    payload.WithObject("cmafIngestAbWatermarkerIrdetoSettings", m_cmafIngestAbWatermarkerIrdetoSettings.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
