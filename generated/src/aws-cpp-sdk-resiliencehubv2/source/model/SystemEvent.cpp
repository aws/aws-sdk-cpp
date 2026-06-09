/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/SystemEvent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

SystemEvent::SystemEvent(JsonView jsonValue) { *this = jsonValue; }

SystemEvent& SystemEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("eventId")) {
    m_eventId = jsonValue.GetString("eventId");
    m_eventIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timestamp")) {
    m_timestamp = jsonValue.GetDouble("timestamp");
    m_timestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eventType")) {
    m_eventType = SystemEventTypeMapper::GetSystemEventTypeForName(jsonValue.GetString("eventType"));
    m_eventTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("systemArn")) {
    m_systemArn = jsonValue.GetString("systemArn");
    m_systemArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("actor")) {
    m_actor = jsonValue.GetObject("actor");
    m_actorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eventDetails")) {
    m_eventDetails = jsonValue.GetObject("eventDetails");
    m_eventDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue SystemEvent::Jsonize() const {
  JsonValue payload;

  if (m_eventIdHasBeenSet) {
    payload.WithString("eventId", m_eventId);
  }

  if (m_timestampHasBeenSet) {
    payload.WithDouble("timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if (m_eventTypeHasBeenSet) {
    payload.WithString("eventType", SystemEventTypeMapper::GetNameForSystemEventType(m_eventType));
  }

  if (m_systemArnHasBeenSet) {
    payload.WithString("systemArn", m_systemArn);
  }

  if (m_actorHasBeenSet) {
    payload.WithObject("actor", m_actor.Jsonize());
  }

  if (m_eventDetailsHasBeenSet) {
    payload.WithObject("eventDetails", m_eventDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
