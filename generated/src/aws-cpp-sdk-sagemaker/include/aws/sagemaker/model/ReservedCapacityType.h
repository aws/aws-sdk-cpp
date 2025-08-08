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
  enum class ReservedCapacityType
  {
    NOT_SET,
    UltraServer,
    Instance
  };

namespace ReservedCapacityTypeMapper
{
AWS_SAGEMAKER_API ReservedCapacityType GetReservedCapacityTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForReservedCapacityType(ReservedCapacityType value);
} // namespace ReservedCapacityTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
