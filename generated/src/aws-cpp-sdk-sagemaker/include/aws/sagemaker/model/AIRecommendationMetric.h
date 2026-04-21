/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

namespace Aws {
namespace SageMaker {
namespace Model {
enum class AIRecommendationMetric { NOT_SET, ttft_ms, throughput, cost };

namespace AIRecommendationMetricMapper {
AWS_SAGEMAKER_API AIRecommendationMetric GetAIRecommendationMetricForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAIRecommendationMetric(AIRecommendationMetric value);
}  // namespace AIRecommendationMetricMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
