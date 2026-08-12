/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>

namespace Aws {
namespace WellArchitected {
namespace Model {
enum class FeedbackCategory {
  NOT_SET,
  OTHER,
  RECOMMENDATION_NOT_RELEVANT,
  RESOURCE_NOT_IMPORTANT,
  RESOURCE_TYPE_NOT_IMPORTANT,
  RECOMMENDATION_INCORRECT
};

namespace FeedbackCategoryMapper {
AWS_WELLARCHITECTED_API FeedbackCategory GetFeedbackCategoryForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForFeedbackCategory(FeedbackCategory value);
}  // namespace FeedbackCategoryMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
