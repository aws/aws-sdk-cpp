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
  enum class SchedulerResourceStatus
  {
    NOT_SET,
    Creating,
    CreateFailed,
    CreateRollbackFailed,
    Created,
    Updating,
    UpdateFailed,
    UpdateRollbackFailed,
    Updated,
    Deleting,
    DeleteFailed,
    DeleteRollbackFailed,
    Deleted
  };

namespace SchedulerResourceStatusMapper
{
AWS_SAGEMAKER_API SchedulerResourceStatus GetSchedulerResourceStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSchedulerResourceStatus(SchedulerResourceStatus value);
} // namespace SchedulerResourceStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
