/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wellarchitected/model/FeedbackCategory.h>

using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {
namespace FeedbackCategoryMapper {

static const int OTHER_HASH = HashingUtils::HashString("OTHER");
static const int RECOMMENDATION_NOT_RELEVANT_HASH = HashingUtils::HashString("RECOMMENDATION_NOT_RELEVANT");
static const int RESOURCE_NOT_IMPORTANT_HASH = HashingUtils::HashString("RESOURCE_NOT_IMPORTANT");
static const int RESOURCE_TYPE_NOT_IMPORTANT_HASH = HashingUtils::HashString("RESOURCE_TYPE_NOT_IMPORTANT");
static const int RECOMMENDATION_INCORRECT_HASH = HashingUtils::HashString("RECOMMENDATION_INCORRECT");

FeedbackCategory GetFeedbackCategoryForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OTHER_HASH) {
    return FeedbackCategory::OTHER;
  } else if (hashCode == RECOMMENDATION_NOT_RELEVANT_HASH) {
    return FeedbackCategory::RECOMMENDATION_NOT_RELEVANT;
  } else if (hashCode == RESOURCE_NOT_IMPORTANT_HASH) {
    return FeedbackCategory::RESOURCE_NOT_IMPORTANT;
  } else if (hashCode == RESOURCE_TYPE_NOT_IMPORTANT_HASH) {
    return FeedbackCategory::RESOURCE_TYPE_NOT_IMPORTANT;
  } else if (hashCode == RECOMMENDATION_INCORRECT_HASH) {
    return FeedbackCategory::RECOMMENDATION_INCORRECT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FeedbackCategory>(hashCode);
  }

  return FeedbackCategory::NOT_SET;
}

Aws::String GetNameForFeedbackCategory(FeedbackCategory enumValue) {
  switch (enumValue) {
    case FeedbackCategory::NOT_SET:
      return {};
    case FeedbackCategory::OTHER:
      return "OTHER";
    case FeedbackCategory::RECOMMENDATION_NOT_RELEVANT:
      return "RECOMMENDATION_NOT_RELEVANT";
    case FeedbackCategory::RESOURCE_NOT_IMPORTANT:
      return "RESOURCE_NOT_IMPORTANT";
    case FeedbackCategory::RESOURCE_TYPE_NOT_IMPORTANT:
      return "RESOURCE_TYPE_NOT_IMPORTANT";
    case FeedbackCategory::RECOMMENDATION_INCORRECT:
      return "RECOMMENDATION_INCORRECT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FeedbackCategoryMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
