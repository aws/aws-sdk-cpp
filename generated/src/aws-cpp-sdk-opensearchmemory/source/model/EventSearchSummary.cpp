/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchmemory/model/EventSearchSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchMemory {
namespace Model {

EventSearchSummary::EventSearchSummary(JsonView jsonValue) { *this = jsonValue; }

EventSearchSummary& EventSearchSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("eventId")) {
    m_eventId = jsonValue.GetString("eventId");
    m_eventIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("score")) {
    m_score = jsonValue.GetDouble("score");
    m_scoreHasBeenSet = true;
  }
  if (jsonValue.ValueExists("systemMetadata")) {
    m_systemMetadata = jsonValue.GetObject("systemMetadata");
    m_systemMetadataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("metadata")) {
    Aws::Map<Aws::String, JsonView> metadataJsonMap = jsonValue.GetObject("metadata").GetAllObjects();
    for (auto& metadataItem : metadataJsonMap) {
      m_metadata[metadataItem.first] = metadataItem.second.AsString();
    }
    m_metadataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("matchedContent")) {
    m_matchedContent = jsonValue.GetString("matchedContent");
    m_matchedContentHasBeenSet = true;
  }
  return *this;
}

JsonValue EventSearchSummary::Jsonize() const {
  JsonValue payload;

  if (m_eventIdHasBeenSet) {
    payload.WithString("eventId", m_eventId);
  }

  if (m_scoreHasBeenSet) {
    payload.WithDouble("score", m_score);
  }

  if (m_systemMetadataHasBeenSet) {
    payload.WithObject("systemMetadata", m_systemMetadata.Jsonize());
  }

  if (m_metadataHasBeenSet) {
    JsonValue metadataJsonMap;
    for (auto& metadataItem : m_metadata) {
      metadataJsonMap.WithString(metadataItem.first, metadataItem.second);
    }
    payload.WithObject("metadata", std::move(metadataJsonMap));
  }

  if (m_matchedContentHasBeenSet) {
    payload.WithString("matchedContent", m_matchedContent);
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
