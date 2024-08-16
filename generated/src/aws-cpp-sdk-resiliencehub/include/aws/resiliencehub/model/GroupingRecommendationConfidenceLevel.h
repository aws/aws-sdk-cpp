/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{
  enum class GroupingRecommendationConfidenceLevel
  {
    NOT_SET,
    High,
    Medium
  };

namespace GroupingRecommendationConfidenceLevelMapper
{
AWS_RESILIENCEHUB_API GroupingRecommendationConfidenceLevel GetGroupingRecommendationConfidenceLevelForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForGroupingRecommendationConfidenceLevel(GroupingRecommendationConfidenceLevel value);
} // namespace GroupingRecommendationConfidenceLevelMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
