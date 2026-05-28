/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/ReportType.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace ReportTypeMapper {

static const int FAILURE_MODE_HASH = HashingUtils::HashString("FAILURE_MODE");

ReportType GetReportTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FAILURE_MODE_HASH) {
    return ReportType::FAILURE_MODE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ReportType>(hashCode);
  }

  return ReportType::NOT_SET;
}

Aws::String GetNameForReportType(ReportType enumValue) {
  switch (enumValue) {
    case ReportType::NOT_SET:
      return {};
    case ReportType::FAILURE_MODE:
      return "FAILURE_MODE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ReportTypeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
