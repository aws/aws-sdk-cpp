/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/InsightLevel.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace InsightLevelMapper {

static const int RUN_HASH = HashingUtils::HashString("RUN");
static const int SEGMENT_HASH = HashingUtils::HashString("SEGMENT");
static const int CONSTRUCT_HASH = HashingUtils::HashString("CONSTRUCT");

InsightLevel GetInsightLevelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RUN_HASH) {
    return InsightLevel::RUN;
  } else if (hashCode == SEGMENT_HASH) {
    return InsightLevel::SEGMENT;
  } else if (hashCode == CONSTRUCT_HASH) {
    return InsightLevel::CONSTRUCT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InsightLevel>(hashCode);
  }

  return InsightLevel::NOT_SET;
}

Aws::String GetNameForInsightLevel(InsightLevel enumValue) {
  switch (enumValue) {
    case InsightLevel::NOT_SET:
      return {};
    case InsightLevel::RUN:
      return "RUN";
    case InsightLevel::SEGMENT:
      return "SEGMENT";
    case InsightLevel::CONSTRUCT:
      return "CONSTRUCT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InsightLevelMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
