/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wellarchitected/model/RecommendationItemType.h>

using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {
namespace RecommendationItemTypeMapper {

static const int AWS_RESOURCE_HASH = HashingUtils::HashString("AWS_RESOURCE");
static const int RECOMMENDATION_HASH = HashingUtils::HashString("RECOMMENDATION");

RecommendationItemType GetRecommendationItemTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_RESOURCE_HASH) {
    return RecommendationItemType::AWS_RESOURCE;
  } else if (hashCode == RECOMMENDATION_HASH) {
    return RecommendationItemType::RECOMMENDATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecommendationItemType>(hashCode);
  }

  return RecommendationItemType::NOT_SET;
}

Aws::String GetNameForRecommendationItemType(RecommendationItemType enumValue) {
  switch (enumValue) {
    case RecommendationItemType::NOT_SET:
      return {};
    case RecommendationItemType::AWS_RESOURCE:
      return "AWS_RESOURCE";
    case RecommendationItemType::RECOMMENDATION:
      return "RECOMMENDATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecommendationItemTypeMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
