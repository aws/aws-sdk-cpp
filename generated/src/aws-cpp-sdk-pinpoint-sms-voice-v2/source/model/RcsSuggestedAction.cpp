/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsSuggestedAction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

RcsSuggestedAction::RcsSuggestedAction(JsonView jsonValue) { *this = jsonValue; }

RcsSuggestedAction& RcsSuggestedAction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Reply")) {
    m_reply = jsonValue.GetObject("Reply");
    m_replyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OpenUrl")) {
    m_openUrl = jsonValue.GetObject("OpenUrl");
    m_openUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DialPhone")) {
    m_dialPhone = jsonValue.GetObject("DialPhone");
    m_dialPhoneHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShowLocation")) {
    m_showLocation = jsonValue.GetObject("ShowLocation");
    m_showLocationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RequestLocation")) {
    m_requestLocation = jsonValue.GetObject("RequestLocation");
    m_requestLocationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateCalendarEvent")) {
    m_createCalendarEvent = jsonValue.GetObject("CreateCalendarEvent");
    m_createCalendarEventHasBeenSet = true;
  }
  return *this;
}

JsonValue RcsSuggestedAction::Jsonize() const {
  JsonValue payload;

  if (m_replyHasBeenSet) {
    payload.WithObject("Reply", m_reply.Jsonize());
  }

  if (m_openUrlHasBeenSet) {
    payload.WithObject("OpenUrl", m_openUrl.Jsonize());
  }

  if (m_dialPhoneHasBeenSet) {
    payload.WithObject("DialPhone", m_dialPhone.Jsonize());
  }

  if (m_showLocationHasBeenSet) {
    payload.WithObject("ShowLocation", m_showLocation.Jsonize());
  }

  if (m_requestLocationHasBeenSet) {
    payload.WithObject("RequestLocation", m_requestLocation.Jsonize());
  }

  if (m_createCalendarEventHasBeenSet) {
    payload.WithObject("CreateCalendarEvent", m_createCalendarEvent.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
