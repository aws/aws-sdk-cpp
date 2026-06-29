/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsStandaloneCard.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

RcsStandaloneCard::RcsStandaloneCard(JsonView jsonValue) { *this = jsonValue; }

RcsStandaloneCard& RcsStandaloneCard::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CardOrientation")) {
    m_cardOrientation = jsonValue.GetString("CardOrientation");
    m_cardOrientationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ThumbnailImageAlignment")) {
    m_thumbnailImageAlignment = jsonValue.GetString("ThumbnailImageAlignment");
    m_thumbnailImageAlignmentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CardContent")) {
    m_cardContent = jsonValue.GetObject("CardContent");
    m_cardContentHasBeenSet = true;
  }
  return *this;
}

JsonValue RcsStandaloneCard::Jsonize() const {
  JsonValue payload;

  if (m_cardOrientationHasBeenSet) {
    payload.WithString("CardOrientation", m_cardOrientation);
  }

  if (m_thumbnailImageAlignmentHasBeenSet) {
    payload.WithString("ThumbnailImageAlignment", m_thumbnailImageAlignment);
  }

  if (m_cardContentHasBeenSet) {
    payload.WithObject("CardContent", m_cardContent.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
