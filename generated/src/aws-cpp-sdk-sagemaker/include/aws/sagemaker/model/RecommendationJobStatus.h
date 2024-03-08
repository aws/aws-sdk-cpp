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
  enum class RecommendationJobStatus
  {
    NOT_SET,
    PENDING,
    IN_PROGRESS,
    COMPLETED,
    FAILED,
    STOPPING,
    STOPPED,
    DELETING,
    DELETED
  };

namespace RecommendationJobStatusMapper
{
AWS_SAGEMAKER_API RecommendationJobStatus GetRecommendationJobStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForRecommendationJobStatus(RecommendationJobStatus value);
} // namespace RecommendationJobStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
