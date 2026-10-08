/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/ExportFailureCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace ExportFailureCodeMapper {

static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
static const int RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("RESOURCE_NOT_FOUND");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");

ExportFailureCode GetExportFailureCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACCESS_DENIED_HASH) {
    return ExportFailureCode::ACCESS_DENIED;
  } else if (hashCode == RESOURCE_NOT_FOUND_HASH) {
    return ExportFailureCode::RESOURCE_NOT_FOUND;
  } else if (hashCode == INTERNAL_ERROR_HASH) {
    return ExportFailureCode::INTERNAL_ERROR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExportFailureCode>(hashCode);
  }

  return ExportFailureCode::NOT_SET;
}

Aws::String GetNameForExportFailureCode(ExportFailureCode enumValue) {
  switch (enumValue) {
    case ExportFailureCode::NOT_SET:
      return {};
    case ExportFailureCode::ACCESS_DENIED:
      return "ACCESS_DENIED";
    case ExportFailureCode::RESOURCE_NOT_FOUND:
      return "RESOURCE_NOT_FOUND";
    case ExportFailureCode::INTERNAL_ERROR:
      return "INTERNAL_ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExportFailureCodeMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
