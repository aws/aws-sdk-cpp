/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wellarchitected/model/OrganizationalReportFormat.h>

using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {
namespace OrganizationalReportFormatMapper {

static const int CSV_HASH = HashingUtils::HashString("CSV");
static const int JSON_HASH = HashingUtils::HashString("JSON");
static const int PARQUET_HASH = HashingUtils::HashString("PARQUET");

OrganizationalReportFormat GetOrganizationalReportFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CSV_HASH) {
    return OrganizationalReportFormat::CSV;
  } else if (hashCode == JSON_HASH) {
    return OrganizationalReportFormat::JSON;
  } else if (hashCode == PARQUET_HASH) {
    return OrganizationalReportFormat::PARQUET;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OrganizationalReportFormat>(hashCode);
  }

  return OrganizationalReportFormat::NOT_SET;
}

Aws::String GetNameForOrganizationalReportFormat(OrganizationalReportFormat enumValue) {
  switch (enumValue) {
    case OrganizationalReportFormat::NOT_SET:
      return {};
    case OrganizationalReportFormat::CSV:
      return "CSV";
    case OrganizationalReportFormat::JSON:
      return "JSON";
    case OrganizationalReportFormat::PARQUET:
      return "PARQUET";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OrganizationalReportFormatMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
