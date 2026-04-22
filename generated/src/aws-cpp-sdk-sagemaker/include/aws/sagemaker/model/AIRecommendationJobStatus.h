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
enum class AIRecommendationJobStatus { NOT_SET, InProgress, Completed, Failed, Stopping, Stopped };

namespace AIRecommendationJobStatusMapper {
AWS_SAGEMAKER_API AIRecommendationJobStatus GetAIRecommendationJobStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAIRecommendationJobStatus(AIRecommendationJobStatus value);
}  // namespace AIRecommendationJobStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
