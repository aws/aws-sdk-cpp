/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/socialmessaging/model/WhatsAppDayOfWeek.h>

using namespace Aws::Utils;

namespace Aws {
namespace SocialMessaging {
namespace Model {
namespace WhatsAppDayOfWeekMapper {

static const int MONDAY_HASH = HashingUtils::HashString("MONDAY");
static const int TUESDAY_HASH = HashingUtils::HashString("TUESDAY");
static const int WEDNESDAY_HASH = HashingUtils::HashString("WEDNESDAY");
static const int THURSDAY_HASH = HashingUtils::HashString("THURSDAY");
static const int FRIDAY_HASH = HashingUtils::HashString("FRIDAY");
static const int SATURDAY_HASH = HashingUtils::HashString("SATURDAY");
static const int SUNDAY_HASH = HashingUtils::HashString("SUNDAY");

WhatsAppDayOfWeek GetWhatsAppDayOfWeekForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MONDAY_HASH) {
    return WhatsAppDayOfWeek::MONDAY;
  } else if (hashCode == TUESDAY_HASH) {
    return WhatsAppDayOfWeek::TUESDAY;
  } else if (hashCode == WEDNESDAY_HASH) {
    return WhatsAppDayOfWeek::WEDNESDAY;
  } else if (hashCode == THURSDAY_HASH) {
    return WhatsAppDayOfWeek::THURSDAY;
  } else if (hashCode == FRIDAY_HASH) {
    return WhatsAppDayOfWeek::FRIDAY;
  } else if (hashCode == SATURDAY_HASH) {
    return WhatsAppDayOfWeek::SATURDAY;
  } else if (hashCode == SUNDAY_HASH) {
    return WhatsAppDayOfWeek::SUNDAY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WhatsAppDayOfWeek>(hashCode);
  }

  return WhatsAppDayOfWeek::NOT_SET;
}

Aws::String GetNameForWhatsAppDayOfWeek(WhatsAppDayOfWeek enumValue) {
  switch (enumValue) {
    case WhatsAppDayOfWeek::NOT_SET:
      return {};
    case WhatsAppDayOfWeek::MONDAY:
      return "MONDAY";
    case WhatsAppDayOfWeek::TUESDAY:
      return "TUESDAY";
    case WhatsAppDayOfWeek::WEDNESDAY:
      return "WEDNESDAY";
    case WhatsAppDayOfWeek::THURSDAY:
      return "THURSDAY";
    case WhatsAppDayOfWeek::FRIDAY:
      return "FRIDAY";
    case WhatsAppDayOfWeek::SATURDAY:
      return "SATURDAY";
    case WhatsAppDayOfWeek::SUNDAY:
      return "SUNDAY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WhatsAppDayOfWeekMapper
}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
