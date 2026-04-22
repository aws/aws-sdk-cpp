/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/ListAIRecommendationJobsSortBy.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace ListAIRecommendationJobsSortByMapper {

static const int Name_HASH = HashingUtils::HashString("Name");
static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");
static const int Status_HASH = HashingUtils::HashString("Status");

ListAIRecommendationJobsSortBy GetListAIRecommendationJobsSortByForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Name_HASH) {
    return ListAIRecommendationJobsSortBy::Name;
  } else if (hashCode == CreationTime_HASH) {
    return ListAIRecommendationJobsSortBy::CreationTime;
  } else if (hashCode == Status_HASH) {
    return ListAIRecommendationJobsSortBy::Status;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ListAIRecommendationJobsSortBy>(hashCode);
  }

  return ListAIRecommendationJobsSortBy::NOT_SET;
}

Aws::String GetNameForListAIRecommendationJobsSortBy(ListAIRecommendationJobsSortBy enumValue) {
  switch (enumValue) {
    case ListAIRecommendationJobsSortBy::NOT_SET:
      return {};
    case ListAIRecommendationJobsSortBy::Name:
      return "Name";
    case ListAIRecommendationJobsSortBy::CreationTime:
      return "CreationTime";
    case ListAIRecommendationJobsSortBy::Status:
      return "Status";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ListAIRecommendationJobsSortByMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
