/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pricing-plan-manager/model/Status.h>

using namespace Aws::Utils;

namespace Aws {
namespace PricingPlanManager {
namespace Model {
namespace StatusMapper {

static const int PENDING_APPROVAL_HASH = HashingUtils::HashString("PENDING_APPROVAL");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int SYNC_IN_PROGRESS_HASH = HashingUtils::HashString("SYNC_IN_PROGRESS");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

Status GetStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_APPROVAL_HASH) {
    return Status::PENDING_APPROVAL;
  } else if (hashCode == ACTIVE_HASH) {
    return Status::ACTIVE;
  } else if (hashCode == SYNC_IN_PROGRESS_HASH) {
    return Status::SYNC_IN_PROGRESS;
  } else if (hashCode == FAILED_HASH) {
    return Status::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Status>(hashCode);
  }

  return Status::NOT_SET;
}

Aws::String GetNameForStatus(Status enumValue) {
  switch (enumValue) {
    case Status::NOT_SET:
      return {};
    case Status::PENDING_APPROVAL:
      return "PENDING_APPROVAL";
    case Status::ACTIVE:
      return "ACTIVE";
    case Status::SYNC_IN_PROGRESS:
      return "SYNC_IN_PROGRESS";
    case Status::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StatusMapper
}  // namespace Model
}  // namespace PricingPlanManager
}  // namespace Aws
