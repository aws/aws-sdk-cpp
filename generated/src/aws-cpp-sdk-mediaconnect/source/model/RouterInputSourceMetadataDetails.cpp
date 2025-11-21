/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RouterInputSourceMetadataDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RouterInputSourceMetadataDetails::RouterInputSourceMetadataDetails(JsonView jsonValue) { *this = jsonValue; }

RouterInputSourceMetadataDetails& RouterInputSourceMetadataDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceMetadataMessages")) {
    Aws::Utils::Array<JsonView> sourceMetadataMessagesJsonList = jsonValue.GetArray("sourceMetadataMessages");
    for (unsigned sourceMetadataMessagesIndex = 0; sourceMetadataMessagesIndex < sourceMetadataMessagesJsonList.GetLength();
         ++sourceMetadataMessagesIndex) {
      m_sourceMetadataMessages.push_back(sourceMetadataMessagesJsonList[sourceMetadataMessagesIndex].AsObject());
    }
    m_sourceMetadataMessagesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timestamp")) {
    m_timestamp = jsonValue.GetString("timestamp");
    m_timestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("routerInputMetadata")) {
    m_routerInputMetadata = jsonValue.GetObject("routerInputMetadata");
    m_routerInputMetadataHasBeenSet = true;
  }
  return *this;
}

JsonValue RouterInputSourceMetadataDetails::Jsonize() const {
  JsonValue payload;

  if (m_sourceMetadataMessagesHasBeenSet) {
    Aws::Utils::Array<JsonValue> sourceMetadataMessagesJsonList(m_sourceMetadataMessages.size());
    for (unsigned sourceMetadataMessagesIndex = 0; sourceMetadataMessagesIndex < sourceMetadataMessagesJsonList.GetLength();
         ++sourceMetadataMessagesIndex) {
      sourceMetadataMessagesJsonList[sourceMetadataMessagesIndex].AsObject(m_sourceMetadataMessages[sourceMetadataMessagesIndex].Jsonize());
    }
    payload.WithArray("sourceMetadataMessages", std::move(sourceMetadataMessagesJsonList));
  }

  if (m_timestampHasBeenSet) {
    payload.WithString("timestamp", m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_routerInputMetadataHasBeenSet) {
    payload.WithObject("routerInputMetadata", m_routerInputMetadata.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
