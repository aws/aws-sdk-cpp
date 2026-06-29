/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsFileMessage.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

RcsFileMessage::RcsFileMessage(JsonView jsonValue) { *this = jsonValue; }

RcsFileMessage& RcsFileMessage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FileUrl")) {
    m_fileUrl = jsonValue.GetString("FileUrl");
    m_fileUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ThumbnailUrl")) {
    m_thumbnailUrl = jsonValue.GetString("ThumbnailUrl");
    m_thumbnailUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue RcsFileMessage::Jsonize() const {
  JsonValue payload;

  if (m_fileUrlHasBeenSet) {
    payload.WithString("FileUrl", m_fileUrl);
  }

  if (m_thumbnailUrlHasBeenSet) {
    payload.WithString("ThumbnailUrl", m_thumbnailUrl);
  }

  return payload;
}

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
