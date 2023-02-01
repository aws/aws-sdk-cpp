/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Omics
{
namespace Model
{
  enum class TaskStatus
  {
    NOT_SET,
    PENDING,
    STARTING,
    RUNNING,
    STOPPING,
    COMPLETED,
    CANCELLED,
    FAILED
  };

namespace TaskStatusMapper
{
AWS_OMICS_API TaskStatus GetTaskStatusForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForTaskStatus(TaskStatus value);
} // namespace TaskStatusMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
