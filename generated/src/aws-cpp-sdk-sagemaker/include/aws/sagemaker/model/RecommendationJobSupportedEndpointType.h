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
  enum class RecommendationJobSupportedEndpointType
  {
    NOT_SET,
    RealTime,
    Serverless
  };

namespace RecommendationJobSupportedEndpointTypeMapper
{
AWS_SAGEMAKER_API RecommendationJobSupportedEndpointType GetRecommendationJobSupportedEndpointTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForRecommendationJobSupportedEndpointType(RecommendationJobSupportedEndpointType value);
} // namespace RecommendationJobSupportedEndpointTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
