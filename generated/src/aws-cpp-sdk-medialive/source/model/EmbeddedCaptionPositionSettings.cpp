/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/EmbeddedCaptionPositionSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

EmbeddedCaptionPositionSettings::EmbeddedCaptionPositionSettings(JsonView jsonValue) { *this = jsonValue; }

EmbeddedCaptionPositionSettings& EmbeddedCaptionPositionSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("yPositionLine")) {
    m_yPositionLine = jsonValue.GetInteger("yPositionLine");
    m_yPositionLineHasBeenSet = true;
  }
  return *this;
}

JsonValue EmbeddedCaptionPositionSettings::Jsonize() const {
  JsonValue payload;

  if (m_yPositionLineHasBeenSet) {
    payload.WithInteger("yPositionLine", m_yPositionLine);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
