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
enum class AIRecommendationInferenceFramework { NOT_SET, LMI, VLLM };

namespace AIRecommendationInferenceFrameworkMapper {
AWS_SAGEMAKER_API AIRecommendationInferenceFramework GetAIRecommendationInferenceFrameworkForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAIRecommendationInferenceFramework(AIRecommendationInferenceFramework value);
}  // namespace AIRecommendationInferenceFrameworkMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
