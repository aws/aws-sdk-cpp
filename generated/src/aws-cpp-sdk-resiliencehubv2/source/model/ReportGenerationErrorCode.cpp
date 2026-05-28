/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/ReportGenerationErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace ReportGenerationErrorCodeMapper {

static const int INSUFFICIENT_PERMISSIONS_HASH = HashingUtils::HashString("INSUFFICIENT_PERMISSIONS");
static const int CONFIGURATION_ERROR_HASH = HashingUtils::HashString("CONFIGURATION_ERROR");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");

ReportGenerationErrorCode GetReportGenerationErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INSUFFICIENT_PERMISSIONS_HASH) {
    return ReportGenerationErrorCode::INSUFFICIENT_PERMISSIONS;
  } else if (hashCode == CONFIGURATION_ERROR_HASH) {
    return ReportGenerationErrorCode::CONFIGURATION_ERROR;
  } else if (hashCode == INTERNAL_ERROR_HASH) {
    return ReportGenerationErrorCode::INTERNAL_ERROR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ReportGenerationErrorCode>(hashCode);
  }

  return ReportGenerationErrorCode::NOT_SET;
}

Aws::String GetNameForReportGenerationErrorCode(ReportGenerationErrorCode enumValue) {
  switch (enumValue) {
    case ReportGenerationErrorCode::NOT_SET:
      return {};
    case ReportGenerationErrorCode::INSUFFICIENT_PERMISSIONS:
      return "INSUFFICIENT_PERMISSIONS";
    case ReportGenerationErrorCode::CONFIGURATION_ERROR:
      return "CONFIGURATION_ERROR";
    case ReportGenerationErrorCode::INTERNAL_ERROR:
      return "INTERNAL_ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ReportGenerationErrorCodeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
