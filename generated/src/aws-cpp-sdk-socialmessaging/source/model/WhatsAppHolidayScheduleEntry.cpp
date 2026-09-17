/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/socialmessaging/model/WhatsAppHolidayScheduleEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SocialMessaging {
namespace Model {

WhatsAppHolidayScheduleEntry::WhatsAppHolidayScheduleEntry(JsonView jsonValue) { *this = jsonValue; }

WhatsAppHolidayScheduleEntry& WhatsAppHolidayScheduleEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("date")) {
    m_date = jsonValue.GetString("date");
    m_dateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startTime")) {
    m_startTime = jsonValue.GetObject("startTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endTime")) {
    m_endTime = jsonValue.GetObject("endTime");
    m_endTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue WhatsAppHolidayScheduleEntry::Jsonize() const {
  JsonValue payload;

  if (m_dateHasBeenSet) {
    payload.WithString("date", m_date);
  }

  if (m_startTimeHasBeenSet) {
    payload.WithObject("startTime", m_startTime.Jsonize());
  }

  if (m_endTimeHasBeenSet) {
    payload.WithObject("endTime", m_endTime.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
