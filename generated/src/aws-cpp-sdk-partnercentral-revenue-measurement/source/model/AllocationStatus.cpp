/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-revenue-measurement/model/AllocationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Model {
namespace AllocationStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");

AllocationStatus GetAllocationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return AllocationStatus::ACTIVE;
  } else if (hashCode == INACTIVE_HASH) {
    return AllocationStatus::INACTIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AllocationStatus>(hashCode);
  }

  return AllocationStatus::NOT_SET;
}

Aws::String GetNameForAllocationStatus(AllocationStatus enumValue) {
  switch (enumValue) {
    case AllocationStatus::NOT_SET:
      return {};
    case AllocationStatus::ACTIVE:
      return "ACTIVE";
    case AllocationStatus::INACTIVE:
      return "INACTIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AllocationStatusMapper
}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
