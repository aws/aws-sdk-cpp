/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-revenue-measurement/model/RevenueAttributionAllocationTaskStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Model {
namespace RevenueAttributionAllocationTaskStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

RevenueAttributionAllocationTaskStatus GetRevenueAttributionAllocationTaskStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return RevenueAttributionAllocationTaskStatus::IN_PROGRESS;
  } else if (hashCode == COMPLETE_HASH) {
    return RevenueAttributionAllocationTaskStatus::COMPLETE;
  } else if (hashCode == FAILED_HASH) {
    return RevenueAttributionAllocationTaskStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RevenueAttributionAllocationTaskStatus>(hashCode);
  }

  return RevenueAttributionAllocationTaskStatus::NOT_SET;
}

Aws::String GetNameForRevenueAttributionAllocationTaskStatus(RevenueAttributionAllocationTaskStatus enumValue) {
  switch (enumValue) {
    case RevenueAttributionAllocationTaskStatus::NOT_SET:
      return {};
    case RevenueAttributionAllocationTaskStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case RevenueAttributionAllocationTaskStatus::COMPLETE:
      return "COMPLETE";
    case RevenueAttributionAllocationTaskStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RevenueAttributionAllocationTaskStatusMapper
}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
