/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wafv2/model/RankingStatisticType.h>

using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {
namespace RankingStatisticTypeMapper {

static const int TOP_SOURCES_BY_REVENUE_HASH = HashingUtils::HashString("TOP_SOURCES_BY_REVENUE");
static const int TOP_PATHS_BY_REVENUE_HASH = HashingUtils::HashString("TOP_PATHS_BY_REVENUE");

RankingStatisticType GetRankingStatisticTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TOP_SOURCES_BY_REVENUE_HASH) {
    return RankingStatisticType::TOP_SOURCES_BY_REVENUE;
  } else if (hashCode == TOP_PATHS_BY_REVENUE_HASH) {
    return RankingStatisticType::TOP_PATHS_BY_REVENUE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RankingStatisticType>(hashCode);
  }

  return RankingStatisticType::NOT_SET;
}

Aws::String GetNameForRankingStatisticType(RankingStatisticType enumValue) {
  switch (enumValue) {
    case RankingStatisticType::NOT_SET:
      return {};
    case RankingStatisticType::TOP_SOURCES_BY_REVENUE:
      return "TOP_SOURCES_BY_REVENUE";
    case RankingStatisticType::TOP_PATHS_BY_REVENUE:
      return "TOP_PATHS_BY_REVENUE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RankingStatisticTypeMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
