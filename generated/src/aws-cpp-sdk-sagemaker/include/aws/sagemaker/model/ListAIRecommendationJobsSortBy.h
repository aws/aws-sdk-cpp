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
enum class ListAIRecommendationJobsSortBy { NOT_SET, Name, CreationTime, Status };

namespace ListAIRecommendationJobsSortByMapper {
AWS_SAGEMAKER_API ListAIRecommendationJobsSortBy GetListAIRecommendationJobsSortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForListAIRecommendationJobsSortBy(ListAIRecommendationJobsSortBy value);
}  // namespace ListAIRecommendationJobsSortByMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
