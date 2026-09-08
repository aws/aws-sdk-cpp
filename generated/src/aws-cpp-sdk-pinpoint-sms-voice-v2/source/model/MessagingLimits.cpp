/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/MessagingLimits.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

MessagingLimits::MessagingLimits(JsonView jsonValue) { *this = jsonValue; }

MessagingLimits& MessagingLimits::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RateLimits")) {
    Aws::Map<Aws::String, JsonView> rateLimitsJsonMap = jsonValue.GetObject("RateLimits").GetAllObjects();
    for (auto& rateLimitsItem : rateLimitsJsonMap) {
      m_rateLimits[rateLimitsItem.first] = rateLimitsItem.second.AsInt64();
    }
    m_rateLimitsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DailyMessageCaps")) {
    Aws::Map<Aws::String, JsonView> dailyMessageCapsJsonMap = jsonValue.GetObject("DailyMessageCaps").GetAllObjects();
    for (auto& dailyMessageCapsItem : dailyMessageCapsJsonMap) {
      m_dailyMessageCaps[dailyMessageCapsItem.first] = dailyMessageCapsItem.second.AsInt64();
    }
    m_dailyMessageCapsHasBeenSet = true;
  }
  return *this;
}

JsonValue MessagingLimits::Jsonize() const {
  JsonValue payload;

  if (m_rateLimitsHasBeenSet) {
    JsonValue rateLimitsJsonMap;
    for (auto& rateLimitsItem : m_rateLimits) {
      rateLimitsJsonMap.WithInt64(rateLimitsItem.first, rateLimitsItem.second);
    }
    payload.WithObject("RateLimits", std::move(rateLimitsJsonMap));
  }

  if (m_dailyMessageCapsHasBeenSet) {
    JsonValue dailyMessageCapsJsonMap;
    for (auto& dailyMessageCapsItem : m_dailyMessageCaps) {
      dailyMessageCapsJsonMap.WithInt64(dailyMessageCapsItem.first, dailyMessageCapsItem.second);
    }
    payload.WithObject("DailyMessageCaps", std::move(dailyMessageCapsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
