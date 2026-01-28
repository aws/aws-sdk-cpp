/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/NdiSourceMetadataInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

NdiSourceMetadataInfo::NdiSourceMetadataInfo(JsonView jsonValue) { *this = jsonValue; }

NdiSourceMetadataInfo& NdiSourceMetadataInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("activeSource")) {
    m_activeSource = jsonValue.GetObject("activeSource");
    m_activeSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("discoveredSources")) {
    Aws::Utils::Array<JsonView> discoveredSourcesJsonList = jsonValue.GetArray("discoveredSources");
    for (unsigned discoveredSourcesIndex = 0; discoveredSourcesIndex < discoveredSourcesJsonList.GetLength(); ++discoveredSourcesIndex) {
      m_discoveredSources.push_back(discoveredSourcesJsonList[discoveredSourcesIndex].AsObject());
    }
    m_discoveredSourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mediaInfo")) {
    m_mediaInfo = jsonValue.GetObject("mediaInfo");
    m_mediaInfoHasBeenSet = true;
  }
  if (jsonValue.ValueExists("messages")) {
    Aws::Utils::Array<JsonView> messagesJsonList = jsonValue.GetArray("messages");
    for (unsigned messagesIndex = 0; messagesIndex < messagesJsonList.GetLength(); ++messagesIndex) {
      m_messages.push_back(messagesJsonList[messagesIndex].AsObject());
    }
    m_messagesHasBeenSet = true;
  }
  return *this;
}

JsonValue NdiSourceMetadataInfo::Jsonize() const {
  JsonValue payload;

  if (m_activeSourceHasBeenSet) {
    payload.WithObject("activeSource", m_activeSource.Jsonize());
  }

  if (m_discoveredSourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> discoveredSourcesJsonList(m_discoveredSources.size());
    for (unsigned discoveredSourcesIndex = 0; discoveredSourcesIndex < discoveredSourcesJsonList.GetLength(); ++discoveredSourcesIndex) {
      discoveredSourcesJsonList[discoveredSourcesIndex].AsObject(m_discoveredSources[discoveredSourcesIndex].Jsonize());
    }
    payload.WithArray("discoveredSources", std::move(discoveredSourcesJsonList));
  }

  if (m_mediaInfoHasBeenSet) {
    payload.WithObject("mediaInfo", m_mediaInfo.Jsonize());
  }

  if (m_messagesHasBeenSet) {
    Aws::Utils::Array<JsonValue> messagesJsonList(m_messages.size());
    for (unsigned messagesIndex = 0; messagesIndex < messagesJsonList.GetLength(); ++messagesIndex) {
      messagesJsonList[messagesIndex].AsObject(m_messages[messagesIndex].Jsonize());
    }
    payload.WithArray("messages", std::move(messagesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
