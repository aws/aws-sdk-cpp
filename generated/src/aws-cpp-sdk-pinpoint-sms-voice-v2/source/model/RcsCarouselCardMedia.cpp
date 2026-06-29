/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsCarouselCardMedia.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

RcsCarouselCardMedia::RcsCarouselCardMedia(JsonView jsonValue) { *this = jsonValue; }

RcsCarouselCardMedia& RcsCarouselCardMedia::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FileUrl")) {
    m_fileUrl = jsonValue.GetString("FileUrl");
    m_fileUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ThumbnailUrl")) {
    m_thumbnailUrl = jsonValue.GetString("ThumbnailUrl");
    m_thumbnailUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Height")) {
    m_height = jsonValue.GetString("Height");
    m_heightHasBeenSet = true;
  }
  return *this;
}

JsonValue RcsCarouselCardMedia::Jsonize() const {
  JsonValue payload;

  if (m_fileUrlHasBeenSet) {
    payload.WithString("FileUrl", m_fileUrl);
  }

  if (m_thumbnailUrlHasBeenSet) {
    payload.WithString("ThumbnailUrl", m_thumbnailUrl);
  }

  if (m_heightHasBeenSet) {
    payload.WithString("Height", m_height);
  }

  return payload;
}

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
