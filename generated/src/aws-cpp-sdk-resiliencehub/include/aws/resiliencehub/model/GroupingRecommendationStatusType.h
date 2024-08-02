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
  enum class GroupingRecommendationStatusType
  {
    NOT_SET,
    Accepted,
    Rejected,
    PendingDecision
  };

namespace GroupingRecommendationStatusTypeMapper
{
AWS_RESILIENCEHUB_API GroupingRecommendationStatusType GetGroupingRecommendationStatusTypeForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForGroupingRecommendationStatusType(GroupingRecommendationStatusType value);
} // namespace GroupingRecommendationStatusTypeMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
