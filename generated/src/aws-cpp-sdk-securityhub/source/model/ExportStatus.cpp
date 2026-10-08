/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/ExportStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace ExportStatusMapper {

static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");

ExportStatus GetExportStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RUNNING_HASH) {
    return ExportStatus::RUNNING;
  } else if (hashCode == SUCCEEDED_HASH) {
    return ExportStatus::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return ExportStatus::FAILED;
  } else if (hashCode == CANCELLED_HASH) {
    return ExportStatus::CANCELLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExportStatus>(hashCode);
  }

  return ExportStatus::NOT_SET;
}

Aws::String GetNameForExportStatus(ExportStatus enumValue) {
  switch (enumValue) {
    case ExportStatus::NOT_SET:
      return {};
    case ExportStatus::RUNNING:
      return "RUNNING";
    case ExportStatus::SUCCEEDED:
      return "SUCCEEDED";
    case ExportStatus::FAILED:
      return "FAILED";
    case ExportStatus::CANCELLED:
      return "CANCELLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExportStatusMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
