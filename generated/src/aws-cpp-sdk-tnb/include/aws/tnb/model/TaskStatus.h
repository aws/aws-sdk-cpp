/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace tnb
{
namespace Model
{
  enum class TaskStatus
  {
    NOT_SET,
    SCHEDULED,
    STARTED,
    IN_PROGRESS,
    COMPLETED,
    ERROR_,
    SKIPPED,
    CANCELLED
  };

namespace TaskStatusMapper
{
AWS_TNB_API TaskStatus GetTaskStatusForName(const Aws::String& name);

AWS_TNB_API Aws::String GetNameForTaskStatus(TaskStatus value);
} // namespace TaskStatusMapper
} // namespace Model
} // namespace tnb
} // namespace Aws
