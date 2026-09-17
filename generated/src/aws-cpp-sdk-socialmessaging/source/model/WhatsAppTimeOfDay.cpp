/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/socialmessaging/model/WhatsAppTimeOfDay.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SocialMessaging {
namespace Model {

WhatsAppTimeOfDay::WhatsAppTimeOfDay(JsonView jsonValue) { *this = jsonValue; }

WhatsAppTimeOfDay& WhatsAppTimeOfDay::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("hours")) {
    m_hours = jsonValue.GetInteger("hours");
    m_hoursHasBeenSet = true;
  }
  if (jsonValue.ValueExists("minutes")) {
    m_minutes = jsonValue.GetInteger("minutes");
    m_minutesHasBeenSet = true;
  }
  return *this;
}

JsonValue WhatsAppTimeOfDay::Jsonize() const {
  JsonValue payload;

  if (m_hoursHasBeenSet) {
    payload.WithInteger("hours", m_hours);
  }

  if (m_minutesHasBeenSet) {
    payload.WithInteger("minutes", m_minutes);
  }

  return payload;
}

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
