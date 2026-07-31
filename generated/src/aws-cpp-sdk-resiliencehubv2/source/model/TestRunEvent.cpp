/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/TestRunEvent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

TestRunEvent::TestRunEvent(JsonView jsonValue) { *this = jsonValue; }

TestRunEvent& TestRunEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("eventId")) {
    m_eventId = jsonValue.GetString("eventId");
    m_eventIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eventType")) {
    m_eventType = jsonValue.GetString("eventType");
    m_eventTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timestamp")) {
    m_timestamp = jsonValue.GetDouble("timestamp");
    m_timestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attributes")) {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("attributes").GetAllObjects();
    for (auto& attributesItem : attributesJsonMap) {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }
  return *this;
}

JsonValue TestRunEvent::Jsonize() const {
  JsonValue payload;

  if (m_eventIdHasBeenSet) {
    payload.WithString("eventId", m_eventId);
  }

  if (m_eventTypeHasBeenSet) {
    payload.WithString("eventType", m_eventType);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  if (m_timestampHasBeenSet) {
    payload.WithDouble("timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if (m_attributesHasBeenSet) {
    JsonValue attributesJsonMap;
    for (auto& attributesItem : m_attributes) {
      attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
    }
    payload.WithObject("attributes", std::move(attributesJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
