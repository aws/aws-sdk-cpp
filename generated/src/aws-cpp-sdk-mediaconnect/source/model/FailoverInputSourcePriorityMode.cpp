/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/FailoverInputSourcePriorityMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace FailoverInputSourcePriorityModeMapper {

static const int NO_PRIORITY_HASH = HashingUtils::HashString("NO_PRIORITY");
static const int PRIMARY_SECONDARY_HASH = HashingUtils::HashString("PRIMARY_SECONDARY");

FailoverInputSourcePriorityMode GetFailoverInputSourcePriorityModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NO_PRIORITY_HASH) {
    return FailoverInputSourcePriorityMode::NO_PRIORITY;
  } else if (hashCode == PRIMARY_SECONDARY_HASH) {
    return FailoverInputSourcePriorityMode::PRIMARY_SECONDARY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FailoverInputSourcePriorityMode>(hashCode);
  }

  return FailoverInputSourcePriorityMode::NOT_SET;
}

Aws::String GetNameForFailoverInputSourcePriorityMode(FailoverInputSourcePriorityMode enumValue) {
  switch (enumValue) {
    case FailoverInputSourcePriorityMode::NOT_SET:
      return {};
    case FailoverInputSourcePriorityMode::NO_PRIORITY:
      return "NO_PRIORITY";
    case FailoverInputSourcePriorityMode::PRIMARY_SECONDARY:
      return "PRIMARY_SECONDARY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FailoverInputSourcePriorityModeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
