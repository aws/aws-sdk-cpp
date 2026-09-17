/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/socialmessaging/model/WhatsAppCallHours.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SocialMessaging {
namespace Model {

WhatsAppCallHours::WhatsAppCallHours(JsonView jsonValue) { *this = jsonValue; }

WhatsAppCallHours& WhatsAppCallHours::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("enabled")) {
    m_enabled = jsonValue.GetBool("enabled");
    m_enabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timezone")) {
    m_timezone = jsonValue.GetString("timezone");
    m_timezoneHasBeenSet = true;
  }
  if (jsonValue.ValueExists("weeklyOperatingHours")) {
    Aws::Utils::Array<JsonView> weeklyOperatingHoursJsonList = jsonValue.GetArray("weeklyOperatingHours");
    for (unsigned weeklyOperatingHoursIndex = 0; weeklyOperatingHoursIndex < weeklyOperatingHoursJsonList.GetLength();
         ++weeklyOperatingHoursIndex) {
      m_weeklyOperatingHours.push_back(weeklyOperatingHoursJsonList[weeklyOperatingHoursIndex].AsObject());
    }
    m_weeklyOperatingHoursHasBeenSet = true;
  }
  if (jsonValue.ValueExists("holidaySchedule")) {
    Aws::Utils::Array<JsonView> holidayScheduleJsonList = jsonValue.GetArray("holidaySchedule");
    for (unsigned holidayScheduleIndex = 0; holidayScheduleIndex < holidayScheduleJsonList.GetLength(); ++holidayScheduleIndex) {
      m_holidaySchedule.push_back(holidayScheduleJsonList[holidayScheduleIndex].AsObject());
    }
    m_holidayScheduleHasBeenSet = true;
  }
  return *this;
}

JsonValue WhatsAppCallHours::Jsonize() const {
  JsonValue payload;

  if (m_enabledHasBeenSet) {
    payload.WithBool("enabled", m_enabled);
  }

  if (m_timezoneHasBeenSet) {
    payload.WithString("timezone", m_timezone);
  }

  if (m_weeklyOperatingHoursHasBeenSet) {
    Aws::Utils::Array<JsonValue> weeklyOperatingHoursJsonList(m_weeklyOperatingHours.size());
    for (unsigned weeklyOperatingHoursIndex = 0; weeklyOperatingHoursIndex < weeklyOperatingHoursJsonList.GetLength();
         ++weeklyOperatingHoursIndex) {
      weeklyOperatingHoursJsonList[weeklyOperatingHoursIndex].AsObject(m_weeklyOperatingHours[weeklyOperatingHoursIndex].Jsonize());
    }
    payload.WithArray("weeklyOperatingHours", std::move(weeklyOperatingHoursJsonList));
  }

  if (m_holidayScheduleHasBeenSet) {
    Aws::Utils::Array<JsonValue> holidayScheduleJsonList(m_holidaySchedule.size());
    for (unsigned holidayScheduleIndex = 0; holidayScheduleIndex < holidayScheduleJsonList.GetLength(); ++holidayScheduleIndex) {
      holidayScheduleJsonList[holidayScheduleIndex].AsObject(m_holidaySchedule[holidayScheduleIndex].Jsonize());
    }
    payload.WithArray("holidaySchedule", std::move(holidayScheduleJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
