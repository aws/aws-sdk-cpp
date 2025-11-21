/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RouterInputThumbnailDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RouterInputThumbnailDetails::RouterInputThumbnailDetails(JsonView jsonValue) { *this = jsonValue; }

RouterInputThumbnailDetails& RouterInputThumbnailDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("thumbnailMessages")) {
    Aws::Utils::Array<JsonView> thumbnailMessagesJsonList = jsonValue.GetArray("thumbnailMessages");
    for (unsigned thumbnailMessagesIndex = 0; thumbnailMessagesIndex < thumbnailMessagesJsonList.GetLength(); ++thumbnailMessagesIndex) {
      m_thumbnailMessages.push_back(thumbnailMessagesJsonList[thumbnailMessagesIndex].AsObject());
    }
    m_thumbnailMessagesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("thumbnail")) {
    m_thumbnail = HashingUtils::Base64Decode(jsonValue.GetString("thumbnail"));
    m_thumbnailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timecode")) {
    m_timecode = jsonValue.GetString("timecode");
    m_timecodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timestamp")) {
    m_timestamp = jsonValue.GetString("timestamp");
    m_timestampHasBeenSet = true;
  }
  return *this;
}

JsonValue RouterInputThumbnailDetails::Jsonize() const {
  JsonValue payload;

  if (m_thumbnailMessagesHasBeenSet) {
    Aws::Utils::Array<JsonValue> thumbnailMessagesJsonList(m_thumbnailMessages.size());
    for (unsigned thumbnailMessagesIndex = 0; thumbnailMessagesIndex < thumbnailMessagesJsonList.GetLength(); ++thumbnailMessagesIndex) {
      thumbnailMessagesJsonList[thumbnailMessagesIndex].AsObject(m_thumbnailMessages[thumbnailMessagesIndex].Jsonize());
    }
    payload.WithArray("thumbnailMessages", std::move(thumbnailMessagesJsonList));
  }

  if (m_thumbnailHasBeenSet) {
    payload.WithString("thumbnail", HashingUtils::Base64Encode(m_thumbnail));
  }

  if (m_timecodeHasBeenSet) {
    payload.WithString("timecode", m_timecode);
  }

  if (m_timestampHasBeenSet) {
    payload.WithString("timestamp", m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
