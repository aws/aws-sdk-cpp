/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-selling/model/BulkJobStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
namespace BulkJobStatusMapper {

static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

BulkJobStatus GetBulkJobStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SUBMITTED_HASH) {
    return BulkJobStatus::SUBMITTED;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return BulkJobStatus::IN_PROGRESS;
  } else if (hashCode == COMPLETED_HASH) {
    return BulkJobStatus::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return BulkJobStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BulkJobStatus>(hashCode);
  }

  return BulkJobStatus::NOT_SET;
}

Aws::String GetNameForBulkJobStatus(BulkJobStatus enumValue) {
  switch (enumValue) {
    case BulkJobStatus::NOT_SET:
      return {};
    case BulkJobStatus::SUBMITTED:
      return "SUBMITTED";
    case BulkJobStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case BulkJobStatus::COMPLETED:
      return "COMPLETED";
    case BulkJobStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BulkJobStatusMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
