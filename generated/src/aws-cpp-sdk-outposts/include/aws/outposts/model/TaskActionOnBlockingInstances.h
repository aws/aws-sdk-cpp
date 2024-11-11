/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Outposts
{
namespace Model
{
  enum class TaskActionOnBlockingInstances
  {
    NOT_SET,
    WAIT_FOR_EVACUATION,
    FAIL_TASK
  };

namespace TaskActionOnBlockingInstancesMapper
{
AWS_OUTPOSTS_API TaskActionOnBlockingInstances GetTaskActionOnBlockingInstancesForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForTaskActionOnBlockingInstances(TaskActionOnBlockingInstances value);
} // namespace TaskActionOnBlockingInstancesMapper
} // namespace Model
} // namespace Outposts
} // namespace Aws
