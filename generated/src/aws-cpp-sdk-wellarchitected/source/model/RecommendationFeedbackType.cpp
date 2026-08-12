/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wellarchitected/model/RecommendationFeedbackType.h>

using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {
namespace RecommendationFeedbackTypeMapper {

static const int USEFUL_HASH = HashingUtils::HashString("USEFUL");
static const int NOT_USEFUL_HASH = HashingUtils::HashString("NOT_USEFUL");

RecommendationFeedbackType GetRecommendationFeedbackTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == USEFUL_HASH) {
    return RecommendationFeedbackType::USEFUL;
  } else if (hashCode == NOT_USEFUL_HASH) {
    return RecommendationFeedbackType::NOT_USEFUL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecommendationFeedbackType>(hashCode);
  }

  return RecommendationFeedbackType::NOT_SET;
}

Aws::String GetNameForRecommendationFeedbackType(RecommendationFeedbackType enumValue) {
  switch (enumValue) {
    case RecommendationFeedbackType::NOT_SET:
      return {};
    case RecommendationFeedbackType::USEFUL:
      return "USEFUL";
    case RecommendationFeedbackType::NOT_USEFUL:
      return "NOT_USEFUL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecommendationFeedbackTypeMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
