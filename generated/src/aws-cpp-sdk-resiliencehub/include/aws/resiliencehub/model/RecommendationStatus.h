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
  enum class RecommendationStatus
  {
    NOT_SET,
    Implemented,
    Inactive,
    NotImplemented,
    Excluded
  };

namespace RecommendationStatusMapper
{
AWS_RESILIENCEHUB_API RecommendationStatus GetRecommendationStatusForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForRecommendationStatus(RecommendationStatus value);
} // namespace RecommendationStatusMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
