/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/FindingsExportFormat.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace FindingsExportFormatMapper {

static const int CSV_HASH = HashingUtils::HashString("CSV");
static const int OCSF_JSON_HASH = HashingUtils::HashString("OCSF_JSON");

FindingsExportFormat GetFindingsExportFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CSV_HASH) {
    return FindingsExportFormat::CSV;
  } else if (hashCode == OCSF_JSON_HASH) {
    return FindingsExportFormat::OCSF_JSON;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FindingsExportFormat>(hashCode);
  }

  return FindingsExportFormat::NOT_SET;
}

Aws::String GetNameForFindingsExportFormat(FindingsExportFormat enumValue) {
  switch (enumValue) {
    case FindingsExportFormat::NOT_SET:
      return {};
    case FindingsExportFormat::CSV:
      return "CSV";
    case FindingsExportFormat::OCSF_JSON:
      return "OCSF_JSON";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FindingsExportFormatMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
