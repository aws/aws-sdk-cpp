/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/ActorMessage.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

ActorMessage::ActorMessage(JsonView jsonValue) { *this = jsonValue; }

ActorMessage& ActorMessage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sender")) {
    m_sender = jsonValue.GetString("sender");
    m_senderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subject")) {
    m_subject = jsonValue.GetString("subject");
    m_subjectHasBeenSet = true;
  }
  if (jsonValue.ValueExists("body")) {
    m_body = jsonValue.GetString("body");
    m_bodyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("receivedAt")) {
    m_receivedAt = jsonValue.GetString("receivedAt");
    m_receivedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ActorMessage::Jsonize() const {
  JsonValue payload;

  if (m_senderHasBeenSet) {
    payload.WithString("sender", m_sender);
  }

  if (m_subjectHasBeenSet) {
    payload.WithString("subject", m_subject);
  }

  if (m_bodyHasBeenSet) {
    payload.WithString("body", m_body);
  }

  if (m_receivedAtHasBeenSet) {
    payload.WithString("receivedAt", m_receivedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
