/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wafv2/model/RankingSortBy.h>

using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {
namespace RankingSortByMapper {

static const int REVENUE_HASH = HashingUtils::HashString("REVENUE");
static const int PERCENTAGE_HASH = HashingUtils::HashString("PERCENTAGE");
static const int NAME_HASH = HashingUtils::HashString("NAME");

RankingSortBy GetRankingSortByForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REVENUE_HASH) {
    return RankingSortBy::REVENUE;
  } else if (hashCode == PERCENTAGE_HASH) {
    return RankingSortBy::PERCENTAGE;
  } else if (hashCode == NAME_HASH) {
    return RankingSortBy::NAME;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RankingSortBy>(hashCode);
  }

  return RankingSortBy::NOT_SET;
}

Aws::String GetNameForRankingSortBy(RankingSortBy enumValue) {
  switch (enumValue) {
    case RankingSortBy::NOT_SET:
      return {};
    case RankingSortBy::REVENUE:
      return "REVENUE";
    case RankingSortBy::PERCENTAGE:
      return "PERCENTAGE";
    case RankingSortBy::NAME:
      return "NAME";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RankingSortByMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
