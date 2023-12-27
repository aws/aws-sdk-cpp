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
  enum class ManagedInstanceScalingStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace ManagedInstanceScalingStatusMapper
{
AWS_SAGEMAKER_API ManagedInstanceScalingStatus GetManagedInstanceScalingStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForManagedInstanceScalingStatus(ManagedInstanceScalingStatus value);
} // namespace ManagedInstanceScalingStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
