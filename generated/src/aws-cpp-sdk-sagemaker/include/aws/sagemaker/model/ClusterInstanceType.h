﻿/**
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
    ml_t3_2xlarge,
    ml_g6_xlarge,
    ml_g6_2xlarge,
    ml_g6_4xlarge,
    ml_g6_8xlarge,
    ml_g6_16xlarge,
    ml_g6_12xlarge,
    ml_g6_24xlarge,
    ml_g6_48xlarge,
    ml_gr6_4xlarge,
    ml_gr6_8xlarge,
    ml_g6e_xlarge,
    ml_g6e_2xlarge,
    ml_g6e_4xlarge,
    ml_g6e_8xlarge,
    ml_g6e_16xlarge,
    ml_g6e_12xlarge,
    ml_g6e_24xlarge,
    ml_g6e_48xlarge,
    ml_p5e_48xlarge,
    ml_p5en_48xlarge,
    ml_trn2_48xlarge,
    ml_c6i_large,
    ml_c6i_xlarge,
    ml_c6i_2xlarge,
    ml_c6i_4xlarge,
    ml_c6i_8xlarge,
    ml_c6i_12xlarge,
    ml_c6i_16xlarge,
    ml_c6i_24xlarge,
    ml_c6i_32xlarge,
    ml_m6i_large,
    ml_m6i_xlarge,
    ml_m6i_2xlarge,
    ml_m6i_4xlarge,
    ml_m6i_8xlarge,
    ml_m6i_12xlarge,
    ml_m6i_16xlarge,
    ml_m6i_24xlarge,
    ml_m6i_32xlarge,
    ml_r6i_large,
    ml_r6i_xlarge,
    ml_r6i_2xlarge,
    ml_r6i_4xlarge,
    ml_r6i_8xlarge,
    ml_r6i_12xlarge,
    ml_r6i_16xlarge,
    ml_r6i_24xlarge,
    ml_r6i_32xlarge
  };

namespace ClusterInstanceTypeMapper
{
AWS_SAGEMAKER_API ClusterInstanceType GetClusterInstanceTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForClusterInstanceType(ClusterInstanceType value);
} // namespace ClusterInstanceTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
