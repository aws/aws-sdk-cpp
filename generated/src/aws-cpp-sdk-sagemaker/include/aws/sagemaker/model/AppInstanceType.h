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
  enum class AppInstanceType
  {
    NOT_SET,
    system,
    ml_t3_micro,
    ml_t3_small,
    ml_t3_medium,
    ml_t3_large,
    ml_t3_xlarge,
    ml_t3_2xlarge,
    ml_m5_large,
    ml_m5_xlarge,
    ml_m5_2xlarge,
    ml_m5_4xlarge,
    ml_m5_8xlarge,
    ml_m5_12xlarge,
    ml_m5_16xlarge,
    ml_m5_24xlarge,
    ml_m5d_large,
    ml_m5d_xlarge,
    ml_m5d_2xlarge,
    ml_m5d_4xlarge,
    ml_m5d_8xlarge,
    ml_m5d_12xlarge,
    ml_m5d_16xlarge,
    ml_m5d_24xlarge,
    ml_c5_large,
    ml_c5_xlarge,
    ml_c5_2xlarge,
    ml_c5_4xlarge,
    ml_c5_9xlarge,
    ml_c5_12xlarge,
    ml_c5_18xlarge,
    ml_c5_24xlarge,
    ml_p3_2xlarge,
    ml_p3_8xlarge,
    ml_p3_16xlarge,
    ml_p3dn_24xlarge,
    ml_g4dn_xlarge,
    ml_g4dn_2xlarge,
    ml_g4dn_4xlarge,
    ml_g4dn_8xlarge,
    ml_g4dn_12xlarge,
    ml_g4dn_16xlarge,
    ml_r5_large,
    ml_r5_xlarge,
    ml_r5_2xlarge,
    ml_r5_4xlarge,
    ml_r5_8xlarge,
    ml_r5_12xlarge,
    ml_r5_16xlarge,
    ml_r5_24xlarge,
    ml_g5_xlarge,
    ml_g5_2xlarge,
    ml_g5_4xlarge,
    ml_g5_8xlarge,
    ml_g5_16xlarge,
    ml_g5_12xlarge,
    ml_g5_24xlarge,
    ml_g5_48xlarge,
    ml_geospatial_interactive,
    ml_p4d_24xlarge,
    ml_p4de_24xlarge,
    ml_trn1_2xlarge,
    ml_trn1_32xlarge,
    ml_trn1n_32xlarge
  };

namespace AppInstanceTypeMapper
{
AWS_SAGEMAKER_API AppInstanceType GetAppInstanceTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAppInstanceType(AppInstanceType value);
} // namespace AppInstanceTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
