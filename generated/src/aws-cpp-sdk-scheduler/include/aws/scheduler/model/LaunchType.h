/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Scheduler
{
namespace Model
{
  enum class LaunchType
  {
    NOT_SET,
    EC2,
    FARGATE,
    EXTERNAL
  };

namespace LaunchTypeMapper
{
AWS_SCHEDULER_API LaunchType GetLaunchTypeForName(const Aws::String& name);

AWS_SCHEDULER_API Aws::String GetNameForLaunchType(LaunchType value);
} // namespace LaunchTypeMapper
} // namespace Model
} // namespace Scheduler
} // namespace Aws
