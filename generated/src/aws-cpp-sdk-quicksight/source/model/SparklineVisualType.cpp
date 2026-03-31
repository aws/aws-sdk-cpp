/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/SparklineVisualType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace SparklineVisualTypeMapper {

static const int LINE_HASH = HashingUtils::HashString("LINE");
static const int AREA_LINE_HASH = HashingUtils::HashString("AREA_LINE");

SparklineVisualType GetSparklineVisualTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LINE_HASH) {
    return SparklineVisualType::LINE;
  } else if (hashCode == AREA_LINE_HASH) {
    return SparklineVisualType::AREA_LINE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SparklineVisualType>(hashCode);
  }

  return SparklineVisualType::NOT_SET;
}

Aws::String GetNameForSparklineVisualType(SparklineVisualType enumValue) {
  switch (enumValue) {
    case SparklineVisualType::NOT_SET:
      return {};
    case SparklineVisualType::LINE:
      return "LINE";
    case SparklineVisualType::AREA_LINE:
      return "AREA_LINE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SparklineVisualTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
