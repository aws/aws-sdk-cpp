/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/ReportGenerationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace ReportGenerationStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

ReportGenerationStatus GetReportGenerationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return ReportGenerationStatus::PENDING;
  } else if (hashCode == SUCCEEDED_HASH) {
    return ReportGenerationStatus::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return ReportGenerationStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ReportGenerationStatus>(hashCode);
  }

  return ReportGenerationStatus::NOT_SET;
}

Aws::String GetNameForReportGenerationStatus(ReportGenerationStatus enumValue) {
  switch (enumValue) {
    case ReportGenerationStatus::NOT_SET:
      return {};
    case ReportGenerationStatus::PENDING:
      return "PENDING";
    case ReportGenerationStatus::SUCCEEDED:
      return "SUCCEEDED";
    case ReportGenerationStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ReportGenerationStatusMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
