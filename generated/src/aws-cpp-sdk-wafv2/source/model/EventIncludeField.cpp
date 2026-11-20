/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wafv2/model/EventIncludeField.h>

using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {
namespace EventIncludeFieldMapper {

static const int TIMELINE_HASH = HashingUtils::HashString("TIMELINE");

EventIncludeField GetEventIncludeFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TIMELINE_HASH) {
    return EventIncludeField::TIMELINE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EventIncludeField>(hashCode);
  }

  return EventIncludeField::NOT_SET;
}

Aws::String GetNameForEventIncludeField(EventIncludeField enumValue) {
  switch (enumValue) {
    case EventIncludeField::NOT_SET:
      return {};
    case EventIncludeField::TIMELINE:
      return "TIMELINE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EventIncludeFieldMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
