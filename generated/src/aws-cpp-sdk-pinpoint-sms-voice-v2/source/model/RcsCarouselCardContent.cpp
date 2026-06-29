/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsCarouselCardContent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

RcsCarouselCardContent::RcsCarouselCardContent(JsonView jsonValue) { *this = jsonValue; }

RcsCarouselCardContent& RcsCarouselCardContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Title")) {
    m_title = jsonValue.GetString("Title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Media")) {
    m_media = jsonValue.GetObject("Media");
    m_mediaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Suggestions")) {
    Aws::Utils::Array<JsonView> suggestionsJsonList = jsonValue.GetArray("Suggestions");
    for (unsigned suggestionsIndex = 0; suggestionsIndex < suggestionsJsonList.GetLength(); ++suggestionsIndex) {
      m_suggestions.push_back(suggestionsJsonList[suggestionsIndex].AsObject());
    }
    m_suggestionsHasBeenSet = true;
  }
  return *this;
}

JsonValue RcsCarouselCardContent::Jsonize() const {
  JsonValue payload;

  if (m_titleHasBeenSet) {
    payload.WithString("Title", m_title);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_mediaHasBeenSet) {
    payload.WithObject("Media", m_media.Jsonize());
  }

  if (m_suggestionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> suggestionsJsonList(m_suggestions.size());
    for (unsigned suggestionsIndex = 0; suggestionsIndex < suggestionsJsonList.GetLength(); ++suggestionsIndex) {
      suggestionsJsonList[suggestionsIndex].AsObject(m_suggestions[suggestionsIndex].Jsonize());
    }
    payload.WithArray("Suggestions", std::move(suggestionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
