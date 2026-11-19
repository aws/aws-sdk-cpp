/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-catalog/model/RecommendationSeverity.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
namespace RecommendationSeverityMapper {

static const int BLOCKING_HASH = HashingUtils::HashString("BLOCKING");
static const int ADVISORY_HASH = HashingUtils::HashString("ADVISORY");

RecommendationSeverity GetRecommendationSeverityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BLOCKING_HASH) {
    return RecommendationSeverity::BLOCKING;
  } else if (hashCode == ADVISORY_HASH) {
    return RecommendationSeverity::ADVISORY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecommendationSeverity>(hashCode);
  }

  return RecommendationSeverity::NOT_SET;
}

Aws::String GetNameForRecommendationSeverity(RecommendationSeverity enumValue) {
  switch (enumValue) {
    case RecommendationSeverity::NOT_SET:
      return {};
    case RecommendationSeverity::BLOCKING:
      return "BLOCKING";
    case RecommendationSeverity::ADVISORY:
      return "ADVISORY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecommendationSeverityMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
