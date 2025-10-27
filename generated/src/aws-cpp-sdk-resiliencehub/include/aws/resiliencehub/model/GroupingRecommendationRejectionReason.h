/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>

namespace Aws {
namespace ResilienceHub {
namespace Model {
enum class GroupingRecommendationRejectionReason {
  NOT_SET,
  DistinctBusinessPurpose,
  SeparateDataConcern,
  DistinctUserGroupHandling,
  Other
};

namespace GroupingRecommendationRejectionReasonMapper {
AWS_RESILIENCEHUB_API GroupingRecommendationRejectionReason GetGroupingRecommendationRejectionReasonForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForGroupingRecommendationRejectionReason(GroupingRecommendationRejectionReason value);
}  // namespace GroupingRecommendationRejectionReasonMapper
}  // namespace Model
}  // namespace ResilienceHub
}  // namespace Aws
