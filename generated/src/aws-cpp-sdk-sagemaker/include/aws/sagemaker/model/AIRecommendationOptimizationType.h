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
enum class AIRecommendationOptimizationType { NOT_SET, SpeculativeDecoding, KernelTuning };

namespace AIRecommendationOptimizationTypeMapper {
AWS_SAGEMAKER_API AIRecommendationOptimizationType GetAIRecommendationOptimizationTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAIRecommendationOptimizationType(AIRecommendationOptimizationType value);
}  // namespace AIRecommendationOptimizationTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
