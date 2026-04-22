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
enum class AIRecommendationInstanceType {
  NOT_SET,
  ml_g5_xlarge,
  ml_g5_2xlarge,
  ml_g5_4xlarge,
  ml_g5_8xlarge,
  ml_g5_12xlarge,
  ml_g5_16xlarge,
  ml_g5_24xlarge,
  ml_g5_48xlarge,
  ml_g6_xlarge,
  ml_g6_2xlarge,
  ml_g6_4xlarge,
  ml_g6_8xlarge,
  ml_g6_12xlarge,
  ml_g6_16xlarge,
  ml_g6_24xlarge,
  ml_g6_48xlarge,
  ml_g6e_xlarge,
  ml_g6e_2xlarge,
  ml_g6e_4xlarge,
  ml_g6e_8xlarge,
  ml_g6e_12xlarge,
  ml_g6e_16xlarge,
  ml_g6e_24xlarge,
  ml_g6e_48xlarge,
  ml_g7e_2xlarge,
  ml_g7e_4xlarge,
  ml_g7e_8xlarge,
  ml_g7e_12xlarge,
  ml_g7e_24xlarge,
  ml_g7e_48xlarge,
  ml_p3_2xlarge,
  ml_p3_8xlarge,
  ml_p3_16xlarge,
  ml_p4d_24xlarge,
  ml_p4de_24xlarge,
  ml_p5_4xlarge,
  ml_p5_48xlarge,
  ml_p5e_48xlarge,
  ml_p5en_48xlarge
};

namespace AIRecommendationInstanceTypeMapper {
AWS_SAGEMAKER_API AIRecommendationInstanceType GetAIRecommendationInstanceTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAIRecommendationInstanceType(AIRecommendationInstanceType value);
}  // namespace AIRecommendationInstanceTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
