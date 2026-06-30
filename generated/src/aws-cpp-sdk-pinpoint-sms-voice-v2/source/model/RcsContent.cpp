/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsContent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

RcsContent::RcsContent(JsonView jsonValue) { *this = jsonValue; }

RcsContent& RcsContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TextMessage")) {
    m_textMessage = jsonValue.GetObject("TextMessage");
    m_textMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FileMessage")) {
    m_fileMessage = jsonValue.GetObject("FileMessage");
    m_fileMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RichCard")) {
    m_richCard = jsonValue.GetObject("RichCard");
    m_richCardHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Carousel")) {
    m_carousel = jsonValue.GetObject("Carousel");
    m_carouselHasBeenSet = true;
  }
  return *this;
}

JsonValue RcsContent::Jsonize() const {
  JsonValue payload;

  if (m_textMessageHasBeenSet) {
    payload.WithObject("TextMessage", m_textMessage.Jsonize());
  }

  if (m_fileMessageHasBeenSet) {
    payload.WithObject("FileMessage", m_fileMessage.Jsonize());
  }

  if (m_richCardHasBeenSet) {
    payload.WithObject("RichCard", m_richCard.Jsonize());
  }

  if (m_carouselHasBeenSet) {
    payload.WithObject("Carousel", m_carousel.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
