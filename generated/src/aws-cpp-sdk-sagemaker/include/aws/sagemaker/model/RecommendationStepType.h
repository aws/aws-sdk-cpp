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
  enum class RecommendationStepType
  {
    NOT_SET,
    BENCHMARK
  };

namespace RecommendationStepTypeMapper
{
AWS_SAGEMAKER_API RecommendationStepType GetRecommendationStepTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForRecommendationStepType(RecommendationStepType value);
} // namespace RecommendationStepTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
