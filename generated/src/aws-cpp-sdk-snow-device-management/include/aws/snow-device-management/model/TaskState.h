/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SnowDeviceManagement
{
namespace Model
{
  enum class TaskState
  {
    NOT_SET,
    IN_PROGRESS,
    CANCELED,
    COMPLETED
  };

namespace TaskStateMapper
{
AWS_SNOWDEVICEMANAGEMENT_API TaskState GetTaskStateForName(const Aws::String& name);

AWS_SNOWDEVICEMANAGEMENT_API Aws::String GetNameForTaskState(TaskState value);
} // namespace TaskStateMapper
} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
