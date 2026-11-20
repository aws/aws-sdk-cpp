/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wafv2/model/EventFilterKey.h>

using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {
namespace EventFilterKeyMapper {

static const int EVENT_CATEGORY_HASH = HashingUtils::HashString("EVENT_CATEGORY");
static const int RESOURCE_ARN_HASH = HashingUtils::HashString("RESOURCE_ARN");

EventFilterKey GetEventFilterKeyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EVENT_CATEGORY_HASH) {
    return EventFilterKey::EVENT_CATEGORY;
  } else if (hashCode == RESOURCE_ARN_HASH) {
    return EventFilterKey::RESOURCE_ARN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EventFilterKey>(hashCode);
  }

  return EventFilterKey::NOT_SET;
}

Aws::String GetNameForEventFilterKey(EventFilterKey enumValue) {
  switch (enumValue) {
    case EventFilterKey::NOT_SET:
      return {};
    case EventFilterKey::EVENT_CATEGORY:
      return "EVENT_CATEGORY";
    case EventFilterKey::RESOURCE_ARN:
      return "RESOURCE_ARN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EventFilterKeyMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
