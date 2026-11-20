/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wafv2/model/EventSortBy.h>

using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {
namespace EventSortByMapper {

static const int START_TIME_HASH = HashingUtils::HashString("START_TIME");
static const int END_TIME_HASH = HashingUtils::HashString("END_TIME");
static const int CONFIDENCE_HASH = HashingUtils::HashString("CONFIDENCE");

EventSortBy GetEventSortByForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == START_TIME_HASH) {
    return EventSortBy::START_TIME;
  } else if (hashCode == END_TIME_HASH) {
    return EventSortBy::END_TIME;
  } else if (hashCode == CONFIDENCE_HASH) {
    return EventSortBy::CONFIDENCE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EventSortBy>(hashCode);
  }

  return EventSortBy::NOT_SET;
}

Aws::String GetNameForEventSortBy(EventSortBy enumValue) {
  switch (enumValue) {
    case EventSortBy::NOT_SET:
      return {};
    case EventSortBy::START_TIME:
      return "START_TIME";
    case EventSortBy::END_TIME:
      return "END_TIME";
    case EventSortBy::CONFIDENCE:
      return "CONFIDENCE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EventSortByMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
