/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-catalog/model/RecommendedFeatureId.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
namespace RecommendedFeatureIdMapper {

static const int REQUEST_PRIVATE_OFFER_HASH = HashingUtils::HashString("REQUEST_PRIVATE_OFFER");
static const int REQUEST_A_DEMO_HASH = HashingUtils::HashString("REQUEST_A_DEMO");
static const int PROMOTIONAL_MEDIA_HASH = HashingUtils::HashString("PROMOTIONAL_MEDIA");
static const int FREE_TRIAL_HASH = HashingUtils::HashString("FREE_TRIAL");
static const int QUICK_LAUNCH_HASH = HashingUtils::HashString("QUICK_LAUNCH");

RecommendedFeatureId GetRecommendedFeatureIdForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REQUEST_PRIVATE_OFFER_HASH) {
    return RecommendedFeatureId::REQUEST_PRIVATE_OFFER;
  } else if (hashCode == REQUEST_A_DEMO_HASH) {
    return RecommendedFeatureId::REQUEST_A_DEMO;
  } else if (hashCode == PROMOTIONAL_MEDIA_HASH) {
    return RecommendedFeatureId::PROMOTIONAL_MEDIA;
  } else if (hashCode == FREE_TRIAL_HASH) {
    return RecommendedFeatureId::FREE_TRIAL;
  } else if (hashCode == QUICK_LAUNCH_HASH) {
    return RecommendedFeatureId::QUICK_LAUNCH;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecommendedFeatureId>(hashCode);
  }

  return RecommendedFeatureId::NOT_SET;
}

Aws::String GetNameForRecommendedFeatureId(RecommendedFeatureId enumValue) {
  switch (enumValue) {
    case RecommendedFeatureId::NOT_SET:
      return {};
    case RecommendedFeatureId::REQUEST_PRIVATE_OFFER:
      return "REQUEST_PRIVATE_OFFER";
    case RecommendedFeatureId::REQUEST_A_DEMO:
      return "REQUEST_A_DEMO";
    case RecommendedFeatureId::PROMOTIONAL_MEDIA:
      return "PROMOTIONAL_MEDIA";
    case RecommendedFeatureId::FREE_TRIAL:
      return "FREE_TRIAL";
    case RecommendedFeatureId::QUICK_LAUNCH:
      return "QUICK_LAUNCH";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecommendedFeatureIdMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
