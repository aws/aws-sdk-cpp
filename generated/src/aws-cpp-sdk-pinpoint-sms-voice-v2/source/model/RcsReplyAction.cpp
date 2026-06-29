/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsReplyAction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

RcsReplyAction::RcsReplyAction(JsonView jsonValue) { *this = jsonValue; }

RcsReplyAction& RcsReplyAction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Text")) {
    m_text = jsonValue.GetString("Text");
    m_textHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PostbackData")) {
    m_postbackData = jsonValue.GetString("PostbackData");
    m_postbackDataHasBeenSet = true;
  }
  return *this;
}

JsonValue RcsReplyAction::Jsonize() const {
  JsonValue payload;

  if (m_textHasBeenSet) {
    payload.WithString("Text", m_text);
  }

  if (m_postbackDataHasBeenSet) {
    payload.WithString("PostbackData", m_postbackData);
  }

  return payload;
}

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
