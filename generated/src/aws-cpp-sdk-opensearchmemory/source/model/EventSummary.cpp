/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchmemory/model/EventSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchMemory {
namespace Model {

EventSummary::EventSummary(JsonView jsonValue) { *this = jsonValue; }

EventSummary& EventSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("eventId")) {
    m_eventId = jsonValue.GetString("eventId");
    m_eventIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("metadata")) {
    Aws::Map<Aws::String, JsonView> metadataJsonMap = jsonValue.GetObject("metadata").GetAllObjects();
    for (auto& metadataItem : metadataJsonMap) {
      m_metadata[metadataItem.first] = metadataItem.second.AsString();
    }
    m_metadataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eventTimestamp")) {
    m_eventTimestamp = jsonValue.GetString("eventTimestamp");
    m_eventTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue EventSummary::Jsonize() const {
  JsonValue payload;

  if (m_eventIdHasBeenSet) {
    payload.WithString("eventId", m_eventId);
  }

  if (m_metadataHasBeenSet) {
    JsonValue metadataJsonMap;
    for (auto& metadataItem : m_metadata) {
      metadataJsonMap.WithString(metadataItem.first, metadataItem.second);
    }
    payload.WithObject("metadata", std::move(metadataJsonMap));
  }

  if (m_eventTimestampHasBeenSet) {
    payload.WithString("eventTimestamp", m_eventTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
