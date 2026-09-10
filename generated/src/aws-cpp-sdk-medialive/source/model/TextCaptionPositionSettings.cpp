/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/TextCaptionPositionSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

TextCaptionPositionSettings::TextCaptionPositionSettings(JsonView jsonValue) { *this = jsonValue; }

TextCaptionPositionSettings& TextCaptionPositionSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("yPositionPercentage")) {
    m_yPositionPercentage = jsonValue.GetInteger("yPositionPercentage");
    m_yPositionPercentageHasBeenSet = true;
  }
  return *this;
}

JsonValue TextCaptionPositionSettings::Jsonize() const {
  JsonValue payload;

  if (m_yPositionPercentageHasBeenSet) {
    payload.WithInteger("yPositionPercentage", m_yPositionPercentage);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
