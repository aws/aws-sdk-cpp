/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/outposts/model/DecommissionRequestStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {
namespace DecommissionRequestStatusMapper {

static const int SKIPPED_HASH = HashingUtils::HashString("SKIPPED");
static const int BLOCKED_HASH = HashingUtils::HashString("BLOCKED");
static const int REQUESTED_HASH = HashingUtils::HashString("REQUESTED");

DecommissionRequestStatus GetDecommissionRequestStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SKIPPED_HASH) {
    return DecommissionRequestStatus::SKIPPED;
  } else if (hashCode == BLOCKED_HASH) {
    return DecommissionRequestStatus::BLOCKED;
  } else if (hashCode == REQUESTED_HASH) {
    return DecommissionRequestStatus::REQUESTED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DecommissionRequestStatus>(hashCode);
  }

  return DecommissionRequestStatus::NOT_SET;
}

Aws::String GetNameForDecommissionRequestStatus(DecommissionRequestStatus enumValue) {
  switch (enumValue) {
    case DecommissionRequestStatus::NOT_SET:
      return {};
    case DecommissionRequestStatus::SKIPPED:
      return "SKIPPED";
    case DecommissionRequestStatus::BLOCKED:
      return "BLOCKED";
    case DecommissionRequestStatus::REQUESTED:
      return "REQUESTED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DecommissionRequestStatusMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
