/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-selling/model/BulkReportStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
namespace BulkReportStatusMapper {

static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");

BulkReportStatus GetBulkReportStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NOT_STARTED_HASH) {
    return BulkReportStatus::NOT_STARTED;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return BulkReportStatus::IN_PROGRESS;
  } else if (hashCode == AVAILABLE_HASH) {
    return BulkReportStatus::AVAILABLE;
  } else if (hashCode == FAILED_HASH) {
    return BulkReportStatus::FAILED;
  } else if (hashCode == EXPIRED_HASH) {
    return BulkReportStatus::EXPIRED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BulkReportStatus>(hashCode);
  }

  return BulkReportStatus::NOT_SET;
}

Aws::String GetNameForBulkReportStatus(BulkReportStatus enumValue) {
  switch (enumValue) {
    case BulkReportStatus::NOT_SET:
      return {};
    case BulkReportStatus::NOT_STARTED:
      return "NOT_STARTED";
    case BulkReportStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case BulkReportStatus::AVAILABLE:
      return "AVAILABLE";
    case BulkReportStatus::FAILED:
      return "FAILED";
    case BulkReportStatus::EXPIRED:
      return "EXPIRED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BulkReportStatusMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
