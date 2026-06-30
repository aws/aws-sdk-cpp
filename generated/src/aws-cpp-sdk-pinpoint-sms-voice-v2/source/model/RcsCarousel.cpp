/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsCarousel.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

RcsCarousel::RcsCarousel(JsonView jsonValue) { *this = jsonValue; }

RcsCarousel& RcsCarousel::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CardWidth")) {
    m_cardWidth = jsonValue.GetString("CardWidth");
    m_cardWidthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CardContents")) {
    Aws::Utils::Array<JsonView> cardContentsJsonList = jsonValue.GetArray("CardContents");
    for (unsigned cardContentsIndex = 0; cardContentsIndex < cardContentsJsonList.GetLength(); ++cardContentsIndex) {
      m_cardContents.push_back(cardContentsJsonList[cardContentsIndex].AsObject());
    }
    m_cardContentsHasBeenSet = true;
  }
  return *this;
}

JsonValue RcsCarousel::Jsonize() const {
  JsonValue payload;

  if (m_cardWidthHasBeenSet) {
    payload.WithString("CardWidth", m_cardWidth);
  }

  if (m_cardContentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> cardContentsJsonList(m_cardContents.size());
    for (unsigned cardContentsIndex = 0; cardContentsIndex < cardContentsJsonList.GetLength(); ++cardContentsIndex) {
      cardContentsJsonList[cardContentsIndex].AsObject(m_cardContents[cardContentsIndex].Jsonize());
    }
    payload.WithArray("CardContents", std::move(cardContentsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
