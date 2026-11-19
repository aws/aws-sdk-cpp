/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-selling/model/BulkReportType.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
namespace BulkReportTypeMapper {

static const int FAILED_RECORDS_HASH = HashingUtils::HashString("FAILED_RECORDS");
static const int ALL_RECORDS_HASH = HashingUtils::HashString("ALL_RECORDS");

BulkReportType GetBulkReportTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FAILED_RECORDS_HASH) {
    return BulkReportType::FAILED_RECORDS;
  } else if (hashCode == ALL_RECORDS_HASH) {
    return BulkReportType::ALL_RECORDS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BulkReportType>(hashCode);
  }

  return BulkReportType::NOT_SET;
}

Aws::String GetNameForBulkReportType(BulkReportType enumValue) {
  switch (enumValue) {
    case BulkReportType::NOT_SET:
      return {};
    case BulkReportType::FAILED_RECORDS:
      return "FAILED_RECORDS";
    case BulkReportType::ALL_RECORDS:
      return "ALL_RECORDS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BulkReportTypeMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
