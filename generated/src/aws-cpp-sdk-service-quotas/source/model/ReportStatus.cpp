/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/service-quotas/model/ReportStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ServiceQuotas {
namespace Model {
namespace ReportStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

ReportStatus GetReportStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return ReportStatus::PENDING;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return ReportStatus::IN_PROGRESS;
  } else if (hashCode == COMPLETED_HASH) {
    return ReportStatus::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return ReportStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ReportStatus>(hashCode);
  }

  return ReportStatus::NOT_SET;
}

Aws::String GetNameForReportStatus(ReportStatus enumValue) {
  switch (enumValue) {
    case ReportStatus::NOT_SET:
      return {};
    case ReportStatus::PENDING:
      return "PENDING";
    case ReportStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case ReportStatus::COMPLETED:
      return "COMPLETED";
    case ReportStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ReportStatusMapper
}  // namespace Model
}  // namespace ServiceQuotas
}  // namespace Aws
