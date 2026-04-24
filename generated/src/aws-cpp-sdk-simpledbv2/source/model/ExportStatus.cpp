/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/simpledbv2/model/ExportStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SimpleDBv2 {
namespace Model {
namespace ExportStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

ExportStatus GetExportStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return ExportStatus::PENDING;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return ExportStatus::IN_PROGRESS;
  } else if (hashCode == SUCCEEDED_HASH) {
    return ExportStatus::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return ExportStatus::FAILED;
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
    case ExportStatus::PENDING:
      return "PENDING";
    case ExportStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case ExportStatus::SUCCEEDED:
      return "SUCCEEDED";
    case ExportStatus::FAILED:
      return "FAILED";
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
}  // namespace SimpleDBv2
}  // namespace Aws
