/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class RecommendationStatus
  {
    NOT_SET,
    IN_PROGRESS,
    COMPLETED,
    FAILED,
    NOT_APPLICABLE
  };

namespace RecommendationStatusMapper
{
AWS_SAGEMAKER_API RecommendationStatus GetRecommendationStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForRecommendationStatus(RecommendationStatus value);
} // namespace RecommendationStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
