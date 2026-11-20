/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wafv2/model/EventStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {
namespace EventStatusMapper {

static const int EVENT_STARTED_HASH = HashingUtils::HashString("EVENT_STARTED");
static const int EVENT_IN_PROGRESS_HASH = HashingUtils::HashString("EVENT_IN_PROGRESS");
static const int EVENT_COMPLETED_HASH = HashingUtils::HashString("EVENT_COMPLETED");
static const int EVENT_ENDED_HASH = HashingUtils::HashString("EVENT_ENDED");

EventStatus GetEventStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EVENT_STARTED_HASH) {
    return EventStatus::EVENT_STARTED;
  } else if (hashCode == EVENT_IN_PROGRESS_HASH) {
    return EventStatus::EVENT_IN_PROGRESS;
  } else if (hashCode == EVENT_COMPLETED_HASH) {
    return EventStatus::EVENT_COMPLETED;
  } else if (hashCode == EVENT_ENDED_HASH) {
    return EventStatus::EVENT_ENDED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EventStatus>(hashCode);
  }

  return EventStatus::NOT_SET;
}

Aws::String GetNameForEventStatus(EventStatus enumValue) {
  switch (enumValue) {
    case EventStatus::NOT_SET:
      return {};
    case EventStatus::EVENT_STARTED:
      return "EVENT_STARTED";
    case EventStatus::EVENT_IN_PROGRESS:
      return "EVENT_IN_PROGRESS";
    case EventStatus::EVENT_COMPLETED:
      return "EVENT_COMPLETED";
    case EventStatus::EVENT_ENDED:
      return "EVENT_ENDED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EventStatusMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
