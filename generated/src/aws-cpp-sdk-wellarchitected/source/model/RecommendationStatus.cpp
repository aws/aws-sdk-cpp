/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wellarchitected/model/RecommendationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {
namespace RecommendationStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int SUPPRESSED_HASH = HashingUtils::HashString("SUPPRESSED");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");

RecommendationStatus GetRecommendationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return RecommendationStatus::ACTIVE;
  } else if (hashCode == SUPPRESSED_HASH) {
    return RecommendationStatus::SUPPRESSED;
  } else if (hashCode == COMPLETED_HASH) {
    return RecommendationStatus::COMPLETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecommendationStatus>(hashCode);
  }

  return RecommendationStatus::NOT_SET;
}

Aws::String GetNameForRecommendationStatus(RecommendationStatus enumValue) {
  switch (enumValue) {
    case RecommendationStatus::NOT_SET:
      return {};
    case RecommendationStatus::ACTIVE:
      return "ACTIVE";
    case RecommendationStatus::SUPPRESSED:
      return "SUPPRESSED";
    case RecommendationStatus::COMPLETED:
      return "COMPLETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecommendationStatusMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
