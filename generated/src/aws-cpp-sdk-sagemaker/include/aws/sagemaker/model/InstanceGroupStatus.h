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
  enum class InstanceGroupStatus
  {
    NOT_SET,
    InService,
    Creating,
    Updating,
    Failed,
    Degraded,
    SystemUpdating,
    Deleting
  };

namespace InstanceGroupStatusMapper
{
AWS_SAGEMAKER_API InstanceGroupStatus GetInstanceGroupStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForInstanceGroupStatus(InstanceGroupStatus value);
} // namespace InstanceGroupStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
