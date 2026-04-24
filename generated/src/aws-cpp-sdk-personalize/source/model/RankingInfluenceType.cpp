/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/personalize/model/RankingInfluenceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Personalize {
namespace Model {
namespace RankingInfluenceTypeMapper {

static const int POPULARITY_HASH = HashingUtils::HashString("POPULARITY");
static const int FRESHNESS_HASH = HashingUtils::HashString("FRESHNESS");

RankingInfluenceType GetRankingInfluenceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == POPULARITY_HASH) {
    return RankingInfluenceType::POPULARITY;
  } else if (hashCode == FRESHNESS_HASH) {
    return RankingInfluenceType::FRESHNESS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RankingInfluenceType>(hashCode);
  }

  return RankingInfluenceType::NOT_SET;
}

Aws::String GetNameForRankingInfluenceType(RankingInfluenceType enumValue) {
  switch (enumValue) {
    case RankingInfluenceType::NOT_SET:
      return {};
    case RankingInfluenceType::POPULARITY:
      return "POPULARITY";
    case RankingInfluenceType::FRESHNESS:
      return "FRESHNESS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RankingInfluenceTypeMapper
}  // namespace Model
}  // namespace Personalize
}  // namespace Aws
