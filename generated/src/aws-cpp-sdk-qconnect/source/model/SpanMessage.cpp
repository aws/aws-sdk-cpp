/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/SpanMessage.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

SpanMessage::SpanMessage(JsonView jsonValue) { *this = jsonValue; }

SpanMessage& SpanMessage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("messageId")) {
    m_messageId = jsonValue.GetString("messageId");
    m_messageIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("participant")) {
    m_participant = ParticipantMapper::GetParticipantForName(jsonValue.GetString("participant"));
    m_participantHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timestamp")) {
    m_timestamp = jsonValue.GetDouble("timestamp");
    m_timestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("values")) {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("values");
    for (unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex) {
      m_values.push_back(valuesJsonList[valuesIndex].AsObject());
    }
    m_valuesHasBeenSet = true;
  }
  return *this;
}

JsonValue SpanMessage::Jsonize() const {
  JsonValue payload;

  if (m_messageIdHasBeenSet) {
    payload.WithString("messageId", m_messageId);
  }

  if (m_participantHasBeenSet) {
    payload.WithString("participant", ParticipantMapper::GetNameForParticipant(m_participant));
  }

  if (m_timestampHasBeenSet) {
    payload.WithDouble("timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if (m_valuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
    for (unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex) {
      valuesJsonList[valuesIndex].AsObject(m_values[valuesIndex].Jsonize());
    }
    payload.WithArray("values", std::move(valuesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
