/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/ExportDataType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace ExportDataTypeMapper {

static const int FINDINGS_HASH = HashingUtils::HashString("FINDINGS");

ExportDataType GetExportDataTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FINDINGS_HASH) {
    return ExportDataType::FINDINGS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExportDataType>(hashCode);
  }

  return ExportDataType::NOT_SET;
}

Aws::String GetNameForExportDataType(ExportDataType enumValue) {
  switch (enumValue) {
    case ExportDataType::NOT_SET:
      return {};
    case ExportDataType::FINDINGS:
      return "FINDINGS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExportDataTypeMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
