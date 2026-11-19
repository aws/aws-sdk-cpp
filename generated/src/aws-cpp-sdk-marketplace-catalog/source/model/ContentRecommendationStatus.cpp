/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-catalog/model/ContentRecommendationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
namespace ContentRecommendationStatusMapper {

static const int GENERATED_HASH = HashingUtils::HashString("GENERATED");
static const int INSUFFICIENT_CONTEXT_HASH = HashingUtils::HashString("INSUFFICIENT_CONTEXT");

ContentRecommendationStatus GetContentRecommendationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GENERATED_HASH) {
    return ContentRecommendationStatus::GENERATED;
  } else if (hashCode == INSUFFICIENT_CONTEXT_HASH) {
    return ContentRecommendationStatus::INSUFFICIENT_CONTEXT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContentRecommendationStatus>(hashCode);
  }

  return ContentRecommendationStatus::NOT_SET;
}

Aws::String GetNameForContentRecommendationStatus(ContentRecommendationStatus enumValue) {
  switch (enumValue) {
    case ContentRecommendationStatus::NOT_SET:
      return {};
    case ContentRecommendationStatus::GENERATED:
      return "GENERATED";
    case ContentRecommendationStatus::INSUFFICIENT_CONTEXT:
      return "INSUFFICIENT_CONTEXT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContentRecommendationStatusMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
