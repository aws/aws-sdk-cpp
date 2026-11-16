/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3vectors/model/AnalyzerStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3Vectors {
namespace Model {
namespace AnalyzerStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int BUILDING_HASH = HashingUtils::HashString("BUILDING");

AnalyzerStatus GetAnalyzerStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return AnalyzerStatus::ACTIVE;
  } else if (hashCode == BUILDING_HASH) {
    return AnalyzerStatus::BUILDING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AnalyzerStatus>(hashCode);
  }

  return AnalyzerStatus::NOT_SET;
}

Aws::String GetNameForAnalyzerStatus(AnalyzerStatus enumValue) {
  switch (enumValue) {
    case AnalyzerStatus::NOT_SET:
      return {};
    case AnalyzerStatus::ACTIVE:
      return "ACTIVE";
    case AnalyzerStatus::BUILDING:
      return "BUILDING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AnalyzerStatusMapper
}  // namespace Model
}  // namespace S3Vectors
}  // namespace Aws
