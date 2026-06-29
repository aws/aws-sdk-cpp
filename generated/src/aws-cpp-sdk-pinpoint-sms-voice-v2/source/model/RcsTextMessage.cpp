/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsTextMessage.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

RcsTextMessage::RcsTextMessage(JsonView jsonValue) { *this = jsonValue; }

RcsTextMessage& RcsTextMessage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Body")) {
    m_body = jsonValue.GetString("Body");
    m_bodyHasBeenSet = true;
  }
  return *this;
}

JsonValue RcsTextMessage::Jsonize() const {
  JsonValue payload;

  if (m_bodyHasBeenSet) {
    payload.WithString("Body", m_body);
  }

  return payload;
}

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
