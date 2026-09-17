/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/socialmessaging/model/WhatsAppWeeklyOperatingHoursEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SocialMessaging {
namespace Model {

WhatsAppWeeklyOperatingHoursEntry::WhatsAppWeeklyOperatingHoursEntry(JsonView jsonValue) { *this = jsonValue; }

WhatsAppWeeklyOperatingHoursEntry& WhatsAppWeeklyOperatingHoursEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dayOfWeek")) {
    m_dayOfWeek = WhatsAppDayOfWeekMapper::GetWhatsAppDayOfWeekForName(jsonValue.GetString("dayOfWeek"));
    m_dayOfWeekHasBeenSet = true;
  }
  if (jsonValue.ValueExists("openTime")) {
    m_openTime = jsonValue.GetObject("openTime");
    m_openTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("closeTime")) {
    m_closeTime = jsonValue.GetObject("closeTime");
    m_closeTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue WhatsAppWeeklyOperatingHoursEntry::Jsonize() const {
  JsonValue payload;

  if (m_dayOfWeekHasBeenSet) {
    payload.WithString("dayOfWeek", WhatsAppDayOfWeekMapper::GetNameForWhatsAppDayOfWeek(m_dayOfWeek));
  }

  if (m_openTimeHasBeenSet) {
    payload.WithObject("openTime", m_openTime.Jsonize());
  }

  if (m_closeTimeHasBeenSet) {
    payload.WithObject("closeTime", m_closeTime.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
