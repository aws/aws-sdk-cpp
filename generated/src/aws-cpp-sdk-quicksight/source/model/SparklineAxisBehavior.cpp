/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/SparklineAxisBehavior.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace SparklineAxisBehaviorMapper {

static const int SHARED_HASH = HashingUtils::HashString("SHARED");
static const int INDEPENDENT_HASH = HashingUtils::HashString("INDEPENDENT");

SparklineAxisBehavior GetSparklineAxisBehaviorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SHARED_HASH) {
    return SparklineAxisBehavior::SHARED;
  } else if (hashCode == INDEPENDENT_HASH) {
    return SparklineAxisBehavior::INDEPENDENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SparklineAxisBehavior>(hashCode);
  }

  return SparklineAxisBehavior::NOT_SET;
}

Aws::String GetNameForSparklineAxisBehavior(SparklineAxisBehavior enumValue) {
  switch (enumValue) {
    case SparklineAxisBehavior::NOT_SET:
      return {};
    case SparklineAxisBehavior::SHARED:
      return "SHARED";
    case SparklineAxisBehavior::INDEPENDENT:
      return "INDEPENDENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SparklineAxisBehaviorMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
