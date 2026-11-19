/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-catalog/model/RecommendedFeatureStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
namespace RecommendedFeatureStatusMapper {

static const int PASS_HASH = HashingUtils::HashString("PASS");
static const int FAIL_HASH = HashingUtils::HashString("FAIL");

RecommendedFeatureStatus GetRecommendedFeatureStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PASS_HASH) {
    return RecommendedFeatureStatus::PASS;
  } else if (hashCode == FAIL_HASH) {
    return RecommendedFeatureStatus::FAIL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecommendedFeatureStatus>(hashCode);
  }

  return RecommendedFeatureStatus::NOT_SET;
}

Aws::String GetNameForRecommendedFeatureStatus(RecommendedFeatureStatus enumValue) {
  switch (enumValue) {
    case RecommendedFeatureStatus::NOT_SET:
      return {};
    case RecommendedFeatureStatus::PASS:
      return "PASS";
    case RecommendedFeatureStatus::FAIL:
      return "FAIL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecommendedFeatureStatusMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
