/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsShowLocationAction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

RcsShowLocationAction::RcsShowLocationAction(JsonView jsonValue) { *this = jsonValue; }

RcsShowLocationAction& RcsShowLocationAction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Text")) {
    m_text = jsonValue.GetString("Text");
    m_textHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PostbackData")) {
    m_postbackData = jsonValue.GetString("PostbackData");
    m_postbackDataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Latitude")) {
    m_latitude = jsonValue.GetDouble("Latitude");
    m_latitudeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Longitude")) {
    m_longitude = jsonValue.GetDouble("Longitude");
    m_longitudeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Label")) {
    m_label = jsonValue.GetString("Label");
    m_labelHasBeenSet = true;
  }
  return *this;
}

JsonValue RcsShowLocationAction::Jsonize() const {
  JsonValue payload;

  if (m_textHasBeenSet) {
    payload.WithString("Text", m_text);
  }

  if (m_postbackDataHasBeenSet) {
    payload.WithString("PostbackData", m_postbackData);
  }

  if (m_latitudeHasBeenSet) {
    payload.WithDouble("Latitude", m_latitude);
  }

  if (m_longitudeHasBeenSet) {
    payload.WithDouble("Longitude", m_longitude);
  }

  if (m_labelHasBeenSet) {
    payload.WithString("Label", m_label);
  }

  return payload;
}

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
