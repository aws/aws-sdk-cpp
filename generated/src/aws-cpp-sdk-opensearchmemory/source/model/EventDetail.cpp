/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchmemory/model/EventDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchMemory {
namespace Model {

EventDetail::EventDetail(JsonView jsonValue) { *this = jsonValue; }

EventDetail& EventDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("eventId")) {
    m_eventId = jsonValue.GetString("eventId");
    m_eventIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("spaceId")) {
    m_spaceId = jsonValue.GetString("spaceId");
    m_spaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("actorId")) {
    m_actorId = jsonValue.GetString("actorId");
    m_actorIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sessionId")) {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eventTimestamp")) {
    m_eventTimestamp = jsonValue.GetString("eventTimestamp");
    m_eventTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue EventDetail::Jsonize() const {
  JsonValue payload;

  if (m_eventIdHasBeenSet) {
    payload.WithString("eventId", m_eventId);
  }

  if (m_spaceIdHasBeenSet) {
    payload.WithString("spaceId", m_spaceId);
  }

  if (m_actorIdHasBeenSet) {
    payload.WithString("actorId", m_actorId);
  }

  if (m_sessionIdHasBeenSet) {
    payload.WithString("sessionId", m_sessionId);
  }

  if (m_eventTimestampHasBeenSet) {
    payload.WithString("eventTimestamp", m_eventTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
