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
  enum class ConfigRecommendationOptimizationType
  {
    NOT_SET,
    LeastCost,
    LeastChange,
    BestAZRecovery,
    LeastErrors,
    BestAttainable,
    BestRegionRecovery
  };

namespace ConfigRecommendationOptimizationTypeMapper
{
AWS_RESILIENCEHUB_API ConfigRecommendationOptimizationType GetConfigRecommendationOptimizationTypeForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForConfigRecommendationOptimizationType(ConfigRecommendationOptimizationType value);
} // namespace ConfigRecommendationOptimizationTypeMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
