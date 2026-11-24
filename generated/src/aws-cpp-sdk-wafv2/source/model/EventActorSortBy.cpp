/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wafv2/model/EventActorSortBy.h>

using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {
namespace EventActorSortByMapper {

static const int EVENT_COUNT_HASH = HashingUtils::HashString("EVENT_COUNT");

EventActorSortBy GetEventActorSortByForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EVENT_COUNT_HASH) {
    return EventActorSortBy::EVENT_COUNT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EventActorSortBy>(hashCode);
  }

  return EventActorSortBy::NOT_SET;
}

Aws::String GetNameForEventActorSortBy(EventActorSortBy enumValue) {
  switch (enumValue) {
    case EventActorSortBy::NOT_SET:
      return {};
    case EventActorSortBy::EVENT_COUNT:
      return "EVENT_COUNT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EventActorSortByMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
