/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsCardMedia.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

RcsCardMedia::RcsCardMedia(JsonView jsonValue) { *this = jsonValue; }

RcsCardMedia& RcsCardMedia::operator=(JsonView jsonValue) {
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

JsonValue RcsCardMedia::Jsonize() const {
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
