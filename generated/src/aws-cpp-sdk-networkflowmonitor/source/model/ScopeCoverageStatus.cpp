/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/networkflowmonitor/model/ScopeCoverageStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFlowMonitor {
namespace Model {
namespace ScopeCoverageStatusMapper {

static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
static const int INCOMPLETE_HASH = HashingUtils::HashString("INCOMPLETE");
static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int STALE_HASH = HashingUtils::HashString("STALE");

ScopeCoverageStatus GetScopeCoverageStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COMPLETE_HASH) {
    return ScopeCoverageStatus::COMPLETE;
  } else if (hashCode == INCOMPLETE_HASH) {
    return ScopeCoverageStatus::INCOMPLETE;
  } else if (hashCode == PENDING_HASH) {
    return ScopeCoverageStatus::PENDING;
  } else if (hashCode == STALE_HASH) {
    return ScopeCoverageStatus::STALE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScopeCoverageStatus>(hashCode);
  }

  return ScopeCoverageStatus::NOT_SET;
}

Aws::String GetNameForScopeCoverageStatus(ScopeCoverageStatus enumValue) {
  switch (enumValue) {
    case ScopeCoverageStatus::NOT_SET:
      return {};
    case ScopeCoverageStatus::COMPLETE:
      return "COMPLETE";
    case ScopeCoverageStatus::INCOMPLETE:
      return "INCOMPLETE";
    case ScopeCoverageStatus::PENDING:
      return "PENDING";
    case ScopeCoverageStatus::STALE:
      return "STALE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScopeCoverageStatusMapper
}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
