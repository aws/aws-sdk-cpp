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
  enum class ClusterInstanceType
  {
    NOT_SET,
    ml_p4d_24xlarge,
    ml_p4de_24xlarge,
    ml_p5_48xlarge,
    ml_trn1_32xlarge,
    ml_trn1n_32xlarge,
    ml_g5_xlarge,
    ml_g5_2xlarge,
    ml_g5_4xlarge,
    ml_g5_8xlarge,
    ml_g5_12xlarge,
    ml_g5_16xlarge,
    ml_g5_24xlarge,
    ml_g5_48xlarge,
    ml_c5_large,
    ml_c5_xlarge,
    ml_c5_2xlarge,
    ml_c5_4xlarge,
    ml_c5_9xlarge,
    ml_c5_12xlarge,
    ml_c5_18xlarge,
    ml_c5_24xlarge,
    ml_c5n_large,
    ml_c5n_2xlarge,
    ml_c5n_4xlarge,
    ml_c5n_9xlarge,
    ml_c5n_18xlarge,
    ml_m5_large,
    ml_m5_xlarge,
    ml_m5_2xlarge,
    ml_m5_4xlarge,
    ml_m5_8xlarge,
    ml_m5_12xlarge,
    ml_m5_16xlarge,
    ml_m5_24xlarge,
    ml_t3_medium,
    ml_t3_large,
    ml_t3_xlarge,
    ml_t3_2xlarge
  };

namespace ClusterInstanceTypeMapper
{
AWS_SAGEMAKER_API ClusterInstanceType GetClusterInstanceTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForClusterInstanceType(ClusterInstanceType value);
} // namespace ClusterInstanceTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
