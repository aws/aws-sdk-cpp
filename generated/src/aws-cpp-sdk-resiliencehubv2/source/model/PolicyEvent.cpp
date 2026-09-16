/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/PolicyEvent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

PolicyEvent::PolicyEvent(JsonView jsonValue) { *this = jsonValue; }

PolicyEvent& PolicyEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("eventId")) {
    m_eventId = jsonValue.GetString("eventId");
    m_eventIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timestamp")) {
    m_timestamp = jsonValue.GetDouble("timestamp");
    m_timestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eventType")) {
    m_eventType = PolicyEventTypeMapper::GetPolicyEventTypeForName(jsonValue.GetString("eventType"));
    m_eventTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policyArn")) {
    m_policyArn = jsonValue.GetString("policyArn");
    m_policyArnHasBeenSet = true;
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

JsonValue PolicyEvent::Jsonize() const {
  JsonValue payload;

  if (m_eventIdHasBeenSet) {
    payload.WithString("eventId", m_eventId);
  }

  if (m_timestampHasBeenSet) {
    payload.WithDouble("timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if (m_eventTypeHasBeenSet) {
    payload.WithString("eventType", PolicyEventTypeMapper::GetNameForPolicyEventType(m_eventType));
  }

  if (m_policyArnHasBeenSet) {
    payload.WithString("policyArn", m_policyArn);
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
