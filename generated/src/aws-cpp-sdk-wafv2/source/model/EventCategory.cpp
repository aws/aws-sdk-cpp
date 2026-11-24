/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wafv2/model/EventCategory.h>

using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {
namespace EventCategoryMapper {

static const int API_SECURITY_HASH = HashingUtils::HashString("API_SECURITY");

EventCategory GetEventCategoryForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == API_SECURITY_HASH) {
    return EventCategory::API_SECURITY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EventCategory>(hashCode);
  }

  return EventCategory::NOT_SET;
}

Aws::String GetNameForEventCategory(EventCategory enumValue) {
  switch (enumValue) {
    case EventCategory::NOT_SET:
      return {};
    case EventCategory::API_SECURITY:
      return "API_SECURITY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EventCategoryMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
