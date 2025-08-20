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
  enum class ReservedCapacityInstanceType
  {
    NOT_SET,
    ml_p4d_24xlarge,
    ml_p5_48xlarge,
    ml_p5e_48xlarge,
    ml_p5en_48xlarge,
    ml_trn1_32xlarge,
    ml_trn2_48xlarge,
    ml_p6_b200_48xlarge,
    ml_p4de_24xlarge,
    ml_p6e_gb200_36xlarge,
    ml_p5_4xlarge
  };

namespace ReservedCapacityInstanceTypeMapper
{
AWS_SAGEMAKER_API ReservedCapacityInstanceType GetReservedCapacityInstanceTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForReservedCapacityInstanceType(ReservedCapacityInstanceType value);
} // namespace ReservedCapacityInstanceTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
