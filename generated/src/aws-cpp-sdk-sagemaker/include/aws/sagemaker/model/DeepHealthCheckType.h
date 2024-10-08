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
  enum class DeepHealthCheckType
  {
    NOT_SET,
    InstanceStress,
    InstanceConnectivity
  };

namespace DeepHealthCheckTypeMapper
{
AWS_SAGEMAKER_API DeepHealthCheckType GetDeepHealthCheckTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForDeepHealthCheckType(DeepHealthCheckType value);
} // namespace DeepHealthCheckTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
