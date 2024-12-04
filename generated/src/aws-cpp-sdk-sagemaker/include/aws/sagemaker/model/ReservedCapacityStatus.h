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
  enum class ReservedCapacityStatus
  {
    NOT_SET,
    Pending,
    Active,
    Scheduled,
    Expired,
    Failed
  };

namespace ReservedCapacityStatusMapper
{
AWS_SAGEMAKER_API ReservedCapacityStatus GetReservedCapacityStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForReservedCapacityStatus(ReservedCapacityStatus value);
} // namespace ReservedCapacityStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
