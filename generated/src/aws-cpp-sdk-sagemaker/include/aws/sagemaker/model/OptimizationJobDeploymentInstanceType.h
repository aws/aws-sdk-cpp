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
  enum class OptimizationJobDeploymentInstanceType
  {
    NOT_SET,
    ml_p4d_24xlarge,
    ml_p4de_24xlarge,
    ml_p5_48xlarge,
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
    ml_inf2_xlarge,
    ml_inf2_8xlarge,
    ml_inf2_24xlarge,
    ml_inf2_48xlarge,
    ml_trn1_2xlarge,
    ml_trn1_32xlarge,
    ml_trn1n_32xlarge
  };

namespace OptimizationJobDeploymentInstanceTypeMapper
{
AWS_SAGEMAKER_API OptimizationJobDeploymentInstanceType GetOptimizationJobDeploymentInstanceTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForOptimizationJobDeploymentInstanceType(OptimizationJobDeploymentInstanceType value);
} // namespace OptimizationJobDeploymentInstanceTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
